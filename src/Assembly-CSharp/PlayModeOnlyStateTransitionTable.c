
/* Void SetStateTypes() */

void Assembly-CSharp.dll::PlayModeOnlyStateTransitionTable::
     PlayModeOnlyStateTransitionTable_SetStateTypes
               (PlayModeOnlyStateTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PMOStateBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SStack_1.table = (this->fields)._.table;
  if ((Dictionary_2_System_Object_System_Object_ *)SStack_1.table ==
      (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&SStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)
              (uint)(((Dictionary_2_System_Object_System_Object_ *)SStack_1.table)->fields).
                    _version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  pDVar12 = (Dictionary_2_System_Object_System_Object_ *)SStack_1.table;
  DStack_11._dictionary = (Dictionary_2_System_Object_System_Object_ *)SStack_1.table;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                      );
    if (bVar13 == 0) {
      return;
    }
    pOVar14 = DStack_11._current.value;
    if (DStack_11._current.value == (Object *)0x0) break;
    bVar15 = (TypeInfo__PMOStateBase->_1).naturalAligment;
    if (((((DStack_11._current.value)->klass->_1).naturalAligment < bVar15) ||
        (((DStack_11._current.value)->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
         (Il2CppClass *)TypeInfo__PMOStateBase)) || (DStack_11._current.value == (Object *)0x0))
    goto code_?;
    if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.key ==
        (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar12 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.key;
    if ((((Dictionary_2_System_Object_IState___Class *)(DStack_11._current.key)->klass)->_0).
        element_class != (TypeInfo__PlayModeOnlyEvent->_0).element_class) goto code_?;
    *(undefined4 *)&DStack_11._current.value[1].klass =
         *(undefined4 *)
          &((Dictionary_2_System_Object_System_Object___Fields *)
           ((longlong)DStack_11._current.key + 0x10))->_buckets;
  }
  FUN_?();
code_?:
  FUN_?(pDVar12);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar14);
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* PlayModeOnlyStateTransitionTable() */

void Assembly-CSharp.dll::PlayModeOnlyStateTransitionTable::PlayModeOnlyStateTransitionTable__ctor
               (PlayModeOnlyStateTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_40 = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 );
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&TypeInfo__PMOObserve);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&TypeInfo__PMOWaitForBuildModeAvatar);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&TypeInfo__PMOWaitForPlayModeAvatar);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&TypeInfo__PMOWalkMode);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackY_40 = &UNK_?;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
  puStackY_40 = &UNK_?;
  pOVar2 = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent);
  puStackY_40 = &UNK_?;
  pPVar3 = (PMOStateBase *)FUN_?(TypeInfo__PMOObserve);
  puStackY_40 = &UNK_?;
  PMOStateBase::PMOStateBase__ctor(pPVar3,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    puStackY_40 = &UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar1,pOVar2,(Object *)pPVar3,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
    puStackY_40 = &UNK_?;
    pOVar2 = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent);
    puStackY_40 = &UNK_?;
    pPVar3 = (PMOStateBase *)FUN_?(TypeInfo__PMOWaitForPlayModeAvatar);
    *(undefined4 *)((longlong)&pPVar3[1].klass + 4) = 5;
    puStackY_40 = &UNK_?;
    PMOStateBase::PMOStateBase__ctor(pPVar3,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      puStackY_40 = &UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar1,pOVar2,(Object *)pPVar3,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
      puStackY_40 = &UNK_?;
      pOVar2 = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent);
      puStackY_40 = &UNK_?;
      pPVar3 = (PMOStateBase *)FUN_?(TypeInfo__PMOWaitForBuildModeAvatar);
      puStackY_40 = &UNK_?;
      PMOStateBase::PMOStateBase__ctor(pPVar3,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
        puStackY_40 = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar1,pOVar2,(Object *)pPVar3,(InsertionBehavior__Enum)uVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
        puStackY_40 = &UNK_?;
        pOVar2 = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent);
        puStackY_40 = &UNK_?;
        pPVar3 = (PMOStateBase *)FUN_?(TypeInfo__PMOWalkMode);
        puStackY_40 = &UNK_?;
        PMOStateBase::PMOStateBase__ctor(pPVar3,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          puStackY_40 = &UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar1,pOVar2,(Object *)pPVar3,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                     ->klass->rgctx_data[0x22].method);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                          ,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__PMOStateBase);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__PlayModeOnlyEvent);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          SStackY_60.table = (this->fields)._.table;
          if ((Dictionary_2_System_Object_System_Object_ *)SStackY_60.table ==
              (Dictionary_2_System_Object_System_Object_ *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStackY_50 = 0;
          uStackY_48 = 0;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&SStackY_60 >> 0xc);
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
          uStackY_58 = (ulonglong)
                       (uint)(((Dictionary_2_System_Object_System_Object_ *)SStackY_60.table)->
                             fields)._version;
          puStackY_40 = (undefined *)0x2;
          uStackY_30 = uStackY_58;
          pDStackY_28 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          pOStackY_20 = (Object *)0x0;
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)SStackY_60.table;
          pDStackY_38 = (Dictionary_2_System_Object_System_Object_ *)SStackY_60.table;
          while( true ) {
            bVar10 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &pDStackY_38,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                              );
            if (bVar10 == 0) {
              return;
            }
            pOVar2 = pOStackY_20;
            if (pOStackY_20 == (Object *)0x0) break;
            bVar11 = (TypeInfo__PMOStateBase->_1).naturalAligment;
            if ((((pOStackY_20->klass->_1).naturalAligment < bVar11) ||
                ((pOStackY_20->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
                 (Il2CppClass *)TypeInfo__PMOStateBase)) || (pOStackY_20 == (Object *)0x0))
            goto code_?;
            if (pDStackY_28 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            pDVar1 = pDStackY_28;
            if ((((Dictionary_2_System_Object_IState___Class *)pDStackY_28->klass)->_0).
                element_class != (TypeInfo__PlayModeOnlyEvent->_0).element_class)
            goto code_?;
            *(undefined4 *)&pOStackY_20[1].klass = *(undefined4 *)&(pDStackY_28->fields)._buckets;
          }
          FUN_?();
code_?:
          FUN_?(pDVar1);
code_?:
          FUN_?();
code_?:
          FUN_?(pOVar2);
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  puStackY_40 = &UNK_?;
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

