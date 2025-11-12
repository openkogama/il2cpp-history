
/* Boolean AllWinConditionForfilled() */

bool MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd_AllWinConditionForfilled
               (WinningConditionAnd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_IWinningCondition>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields)._.winnerConditions;
  if (pDVar1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
  }
  else {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = pDVar1;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                        );
      if (bVar12 == 0) {
        return 1;
      }
      if (DStack_11._current.value == (Object *)0x0) break;
      cVar13 = FUN_?(3,TypeInfo__IWinningCondition);
      if (cVar13 == '\0') {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar12 = (*pcVar14)();
  return bVar12;
}


/* String ToString() */

String * MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd_ToString
                   (WinningConditionAnd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_IWinningCondition>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AND_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pDStack_2 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields)._.winnerConditions;
  if (pDStack_2 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_2 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_2->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key = 0;
  DStack_12._current._4_4_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = pDStack_2;
  while (bVar13 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           (&DStack_12,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                           ), pOVar14 = DStack_12._current.value, bVar13 != 0) {
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar1,StringLiteral__AND_,(MethodInfo *)0x0);
    }
    str1 = (String *)0x0;
    if (pOVar14 != (Object *)0x0) {
      str1 = (String *)
             (*(pOVar14->klass->vtable).ToString.methodPtr)
                       (pOVar14,(pOVar14->klass->vtable).ToString.method);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* WinningConditionAnd(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd__ctor
               (WinningConditionAnd *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningConditionGroup::WinningConditionGroup__ctor
            ((WinningConditionGroup *)this,parent,id,gameCounterManager,0,0,
             in_stack_1 & 0xffffff00,in_stack_2 & 0xffffff00,
             (MethodInfo *)0x0);
  return;
}


/* Void winnerCondition_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionAnd::
     WinningConditionAnd_winnerCondition_OnWinningConditionChanged
               (WinningConditionAnd *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = WinningConditionAnd_AllWinConditionForfilled(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  uVar2 = FUN_?(TypeInfo__System__EventArgs);
  bVar3 = iRam_? != 0;
  (this->fields)._._.forfilled = 1;
  (this->fields)._._.instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._._.instigatorCounterTypeChangedEvent >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if ((this->fields)._._.OnWinningConditionChanged == (EventHandler_1_EventArgs_ *)0x0) {
    return;
  }
  pEVar8 = (this->fields)._._.OnWinningConditionChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pEVar8->fields)._._.invoke_impl)
            ((pEVar8->fields)._._.method_code,this,uVar2,(pEVar8->fields)._._.method);
  return;
}

