
/* Void AddWinner(Int32, Int32) */

void MVCommon.dll::MV::Common::WinnerReportBase::WinnerReportBase_AddWinner
               (WinnerReportBase *this,int32_t actorNr,int32_t timeMS,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__Add_MV__Common__WinnerListNode_
                   );
    func_?(&TypeInfo__MV__Common__WinnerListNode);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MV__Common__WinnerListNode);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].monitor = (MonitorData *)timeMS;
    value[1].klass = (Object__Class *)actorNr;
    this_00 = (this->fields).winnerList;
    if (this_00 != (List_1_MV_Common_WinnerListNode_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,value,
                 MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__Add_MV__Common__WinnerListNode_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddWinners(Dictionary`2[System.Int32,System.Int32]) */

void MVCommon.dll::MV::Common::WinnerReportBase::WinnerReportBase_AddWinners
               (WinnerReportBase *this,Dictionary_2_System_Int32_System_Int32_ *orderedList,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = 0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  if (orderedList != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_System_Object_System_Object_ *)orderedList,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Int32Enum]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Int32Enum__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                        );
      iVar11 = DStack_6._current.key;
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                   ,in_stack_12);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pDStack_13 = (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Array *)
                   DStack_6._current.value;
      method_00 = (MethodInfo *)orderedList;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
        method_00 = (MethodInfo *)orderedList;
      }
      orderedList = (Dictionary_2_System_Int32_System_Int32_ *)func_?();
      if ((MethodInfo *)orderedList == (MethodInfo *)0x0) break;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)orderedList,ExceptionArgument__Enum_obj,method_00);
      ((Dictionary_2_System_Int32_System_Int32___Fields *)
      &((MethodInfo *)orderedList)->invoker_method)->_buckets = (Int32__Array *)iVar11;
      ((MethodInfo *)orderedList)->name = (char *)pDStack_13;
      this_00 = (this->fields).winnerList;
      if (this_00 == (List_1_MV_Common_WinnerListNode_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)orderedList,
                 MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__Add_MV__Common__WinnerListNode_
                );
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Int32[] GetWinnerListActors() */

Int32__Array *
MVCommon.dll::MV::Common::WinnerReportBase::WinnerReportBase_GetWinnerListActors
          (WinnerReportBase *this,MethodInfo *method)

{
  pWVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb8;
  puVar6 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__get_Count__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pLVar8 = (this->fields).winnerList;
  if (pLVar8 != (List_1_MV_Common_WinnerListNode_ *)0x0) {
    pIVar9 = (Int32__Array *)func_?(TypeInfo__System__Int32,(pLVar8->fields)._size);
    this = (WinnerReportBase *)0x0;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pWVar1->fields).winnerList;
    pIStack_10 = pIVar9;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_12,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__GetEnumerator__
                         );
      LStack_7._list = (List_1_System_Object_ *)pLVar11->_list;
      LStack_7._index = pLVar11->_index;
      LStack_7._version = pLVar11->_version;
      LStack_7._current = *(Object **)&pLVar11->_current;
      LStack_12._version = 0;
      uStack_2 = 1;
      LStack_12._current = (RegexCharClass_SingleRange)&LStack_7;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_4;
          return pIVar9;
        }
        if (((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0) ||
           (pIVar9 == (Int32__Array *)0x0)) goto code_?;
        if ((WinnerReportBase *)pIVar9->max_length <= this) break;
        pIVar9->vector[(int)this] = *(int32_t *)((int)LStack_7._current + 8);
        this = (WinnerReportBase *)((int)&this->klass + 1);
      }
      func_?();
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  pIVar9 = (Int32__Array *)(*pcVar15)();
  return pIVar9;
}


/* Int32[] GetWinnerListTimes() */

Int32__Array *
MVCommon.dll::MV::Common::WinnerReportBase::WinnerReportBase_GetWinnerListTimes
          (WinnerReportBase *this,MethodInfo *method)

{
  pWVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb8;
  puVar6 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__get_Count__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pLVar8 = (this->fields).winnerList;
  if (pLVar8 != (List_1_MV_Common_WinnerListNode_ *)0x0) {
    pIVar9 = (Int32__Array *)func_?(TypeInfo__System__Int32,(pLVar8->fields)._size);
    this = (WinnerReportBase *)0x0;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pWVar1->fields).winnerList;
    pIStack_10 = pIVar9;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_12,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__GetEnumerator__
                         );
      LStack_7._list = (List_1_System_Object_ *)pLVar11->_list;
      LStack_7._index = pLVar11->_index;
      LStack_7._version = pLVar11->_version;
      LStack_7._current = *(Object **)&pLVar11->_current;
      LStack_12._version = 0;
      uStack_2 = 1;
      LStack_12._current = (RegexCharClass_SingleRange)&LStack_7;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::WinnerListNode>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_4;
          return pIVar9;
        }
        if (((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0) ||
           (pIVar9 == (Int32__Array *)0x0)) goto code_?;
        if ((WinnerReportBase *)pIVar9->max_length <= this) break;
        pIVar9->vector[(int)this] = *(int32_t *)((int)LStack_7._current + 0xc);
        this = (WinnerReportBase *)((int)&this->klass + 1);
      }
      func_?();
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  pIVar9 = (Int32__Array *)(*pcVar15)();
  return pIVar9;
}


/* WinnerReportBase() */

void MVCommon.dll::MV::Common::WinnerReportBase::WinnerReportBase__ctor
               (WinnerReportBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).winningState = 0;
  (this->fields).winningType = 0;
  this_00 = (List_1_MV_Common_WinnerListNode_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>
                           );
  if (this_00 != (List_1_MV_Common_WinnerListNode_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::Common::WinnerListNode>__List__);
    (this->fields).winnerList = this_00;
    func_?(&(this->fields).winnerList,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

