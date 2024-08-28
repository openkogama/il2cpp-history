
/* Boolean AllWinConditionForfilled() */

bool MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd_AllWinConditionForfilled
               (WinningConditionAnd *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                   );
    func_?(&TypeInfo__IWinningCondition);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_IWinningCondition>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields)._.winnerConditions;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (DStack_9._current.value == (Object *)0x0) break;
      method_00 = TypeInfo__IWinningCondition;
      cVar12 = func_?(3,TypeInfo__IWinningCondition,DStack_9._current.value);
      if (cVar12 == '\0') {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar11 = (*pcVar13)();
  return bVar11;
}


/* String ToString() */

String * MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd_ToString
                   (WinningConditionAnd *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_IWinningCondition>__get_Value__
                   );
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__AND_);
    cRam_? = '\x01';
  }
  pSVar4 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields)._.winnerConditions;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                       );
    uVar6 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                        );
      if (bVar7 == 0) break;
      pOStack_8 = (Object *)uVar6;
      bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        in_stack_9 = (MethodInfo *)StringLiteral__AND_;
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar4,StringLiteral__AND_,(MethodInfo *)0x0);
      }
      if (pOStack_8 == (Object *)0x0) {
        str1 = (String *)0x0;
      }
      else {
        str1 = (String *)func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_3(pSVar4,str1,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
               ,in_stack_9);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar4;
  }
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar11)();
  return pSVar4;
}


/* WinningConditionAnd(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd__ctor
               (WinningConditionAnd *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningConditionGroup::WinningConditionGroup__ctor
            ((WinningConditionGroup *)this,parent,id,gameCounterManager,0,0,
             GameStatCounterType__Enum_None,WinningConditionPresentStyle__Enum_NoWinner,
             (MethodInfo *)0x0);
  return;
}


/* Void winnerCondition_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionAnd::
     WinningConditionAnd_winnerCondition_OnWinningConditionChanged
               (WinningConditionAnd *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  bVar1 = WinningConditionAnd_AllWinConditionForfilled(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__System__EventArgs);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    ppOVar2 = &(this->fields)._._.instigatorCounterTypeChangedEvent;
    (this->fields)._._.forfilled = 1;
    *ppOVar2 = (OnCounterTypeChangedArgs *)0x0;
    func_?(ppOVar2,0);
    pEVar3 = (this->fields)._._.OnWinningConditionChanged;
    if (pEVar3 != (EventHandler_1_EventArgs_ *)0x0) {
      (*(pEVar3->fields)._._.invoke_impl)((pEVar3->fields)._._.method_code,this,this_00);
    }
  }
  return;
}

