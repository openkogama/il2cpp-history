
/* Void SetStateTypes() */

void Assembly-CSharp.dll::PlayModeOnlyStateTransitionTable::
     PlayModeOnlyStateTransitionTable_SetStateTypes
               (PlayModeOnlyStateTransitionTable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  method_00 = unaff_EDI;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                   );
    func_?(&TypeInfo__PMOStateBase);
    func_?(&TypeInfo__PlayModeOnlyEvent);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields)._.table;
  if (this_00 != (Dictionary_2_System_Object_IState_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (Object *)(pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unaff_EDI = (MethodInfo *)DStack_9._current.value;
      if ((MethodInfo *)DStack_9._current.value == (MethodInfo *)0x0) break;
      cVar12 = (code)(TypeInfo__PMOStateBase->_1).naturalAligment;
      pPVar13 = TypeInfo__PMOStateBase;
      if ((((byte)*(code *)((int)(DStack_9._current.value)->klass + 0xb8) < (byte)cVar12) ||
          (*(PMOStateBase__Class **)
            (*(int *)((int)(DStack_9._current.value)->klass + 100) + -4 + (uint)(byte)cVar12 * 4) !=
           TypeInfo__PMOStateBase)) || ((MethodInfo *)DStack_9._current.value == (MethodInfo *)0x0)
         ) goto code_?;
      if (DStack_9._current.key == (Object *)0x0) break;
      pOVar14 = DStack_9._current.key;
      pPVar15 = TypeInfo__PlayModeOnlyEvent;
      if (((DStack_9._current.key)->klass->_0).element_class !=
          (TypeInfo__PlayModeOnlyEvent->_0).element_class) goto code_?;
      puVar16 = (undefined4 *)func_?(DStack_9._current.key);
      cVar12 = (code)(TypeInfo__PMOStateBase->_1).naturalAligment;
      pPVar13 = TypeInfo__PMOStateBase;
      if ((((byte)*(code *)((int)((Object *)unaff_EDI)->klass + 0xb8) < (byte)cVar12) ||
          (*(PMOStateBase__Class **)
            (*(int *)((int)((Object *)unaff_EDI)->klass + 100) + -4 + (uint)(byte)cVar12 * 4) !=
           TypeInfo__PMOStateBase)) || (unaff_EDI == (MethodInfo *)0x0)) goto code_?;
      *(InvokerMethod *)((int)unaff_EDI + 8) = (InvokerMethod)*puVar16;
    }
  }
  func_?();
  pPVar13 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pPVar13);
  pOVar14 = extraout_ECX;
  pPVar15 = extraout_EDX_00;
code_?:
  func_?(pOVar14,pPVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* PlayModeOnlyStateTransitionTable() */

void Assembly-CSharp.dll::PlayModeOnlyStateTransitionTable::PlayModeOnlyStateTransitionTable__ctor
               (PlayModeOnlyStateTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   );
    func_?(&TypeInfo__PMOObserve);
    func_?(&TypeInfo__PMOWaitForBuildModeAvatar);
    func_?(&TypeInfo__PMOWaitForPlayModeAvatar);
    func_?(&TypeInfo__PMOWalkMode);
    func_?(&TypeInfo__PlayModeOnlyEvent);
    cRam_? = '\x01';
  }
  this_00 = this;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.table;
  this = (PlayModeOnlyStateTransitionTable *)0x2f;
  func_?(TypeInfo__PlayModeOnlyEvent,&this);
  method_01 = TypeInfo__PMOObserve;
  value = (MethodInfo *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pLVar2 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  method_00 = value;
  pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)value,(MethodInfo *)0x0);
  if (pLVar2 != (LoggerManager *)0x0) {
    pIVar4 = LoggerManager::LoggerManager_GetLogger(pLVar2,pTVar3,(MethodInfo *)0x0);
    value->name = (char *)pIVar4;
    func_?();
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 ,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.table;
      pOVar5 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      pOVar6[2].monitor = (MonitorData *)0x5;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar6,ExceptionArgument__Enum_obj,method_00);
      pLVar2 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
      pTVar3 = mscorlib.dll::System::Object::Object_GetType(pOVar6,(MethodInfo *)0x0);
      if (pLVar2 != (LoggerManager *)0x0) {
        pIVar4 = LoggerManager::LoggerManager_GetLogger(pLVar2,pTVar3,(MethodInfo *)0x0);
        pOVar6[1].monitor = (MonitorData *)pIVar4;
        func_?();
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar1,pOVar5,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.table;
          pOVar5 = (Object *)func_?();
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar6,ExceptionArgument__Enum_obj,method_00);
          pLVar2 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
          pTVar3 = mscorlib.dll::System::Object::Object_GetType(pOVar6,(MethodInfo *)0x0);
          if (pLVar2 != (LoggerManager *)0x0) {
            pIVar4 = LoggerManager::LoggerManager_GetLogger(pLVar2,pTVar3,(MethodInfo *)0x0);
            pOVar6[1].monitor = (MonitorData *)pIVar4;
            func_?();
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar1,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.table;
              pOVar5 = (Object *)func_?();
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (pOVar6,ExceptionArgument__Enum_obj,method_00);
              pLVar2 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
              pTVar3 = mscorlib.dll::System::Object::Object_GetType(pOVar6,(MethodInfo *)0x0);
              if (pLVar2 != (LoggerManager *)0x0) {
                pIVar4 = LoggerManager::LoggerManager_GetLogger(pLVar2,pTVar3,(MethodInfo *)0x0);
                pOVar6[1].monitor = (MonitorData *)pIVar4;
                func_?();
                if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar1,pOVar5,pOVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                            );
                  PlayModeOnlyStateTransitionTable_SetStateTypes(this_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

