
/* Void DeSelectAll() */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAll
               (EditorStateMachine *this,MethodInfo *method)

{
  object = (this->fields).selectionController;
  if (object == (SelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar2 = (object->fields).selectedIDs;
  if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    uStack_8 = 0;
    uStack_4._0_4_ = SUB84(pHVar2,0);
    uStack_4._4_4_ = (undefined4)((ulonglong)pHVar2 >> 0x20);
    uStack_9 = (undefined4)uStack_4;
    uStack_10 = uStack_4._4_4_;
    puStack_11 = (undefined *)((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_12 = 0;
    uStack_4 = 0;
    puStack_13 = &uStack_9;
    while (cVar14 = FUN_?(), cVar14 != '\0') {
      key = (int32_t)uStack_12;
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar15 == (MVWorldObjectClientManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStackX_18 = (Object *)0x0;
      this_00 = (pMVar15->fields).worldObjects;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pOStackX_18 == (Object *)0x0) goto code_?;
      (*(code *)pOStackX_18->klass[3].vtable.Equals.method)
                (pOStackX_18,pOStackX_18->klass[3].vtable.Finalize.methodPtr);
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)object,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar15 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (pMVar15,key,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                 (MethodInfo *)0x0);
    }
    pHVar2 = (object->fields).selectedIDs;
    if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
      if (0 < (pHVar2->fields)._lastIndex) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar2->fields)._slots,0,(pHVar2->fields)._lastIndex,(MethodInfo *)0x0)
        ;
        pIVar16 = (pHVar2->fields)._buckets;
        if (pIVar16 == (Int32__Array *)0x0) goto code_?;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar2->fields)._buckets,0,(int32_t)pIVar16->max_length,
                   (MethodInfo *)0x0);
        (pHVar2->fields)._count = 0;
        (pHVar2->fields)._lastIndex = 0;
        (pHVar2->fields)._freeList = -1;
      }
      piVar17 = &(pHVar2->fields)._version;
      *piVar17 = *piVar17 + 1;
      return;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAllExcept
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>,
                  CONCAT44(in_register_00000014,id),0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SelectionController____c__DisplayClass27_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__SelectionController____c__DisplayClass27_0);
  if (lVar2 != 0) {
    *(int32_t *)(lVar2 + 0x10) = id;
    this_01 = (HashSet_1_System_Int32Enum_ *)(this_00->fields).selectedIDs;
    if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_01,id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar3 == 0) {
        SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
        return;
      }
      pHVar4 = (this_00->fields).selectedIDs;
      if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
        ppHStack_10 = (HashSet_1_System_Int32_ **)
                      ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
        uStack_11 = 0;
        puStack_12 = (undefined *)ppHStack_10;
        uStack_13 = 0;
        uStack_6 = 0;
        ppHStack_10 = &pHStack_14;
        pHStack_14 = pHVar4;
        while (cVar15 = FUN_?(&pHStack_14,
                                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                    ), cVar15 != '\0') {
          id_00 = (int)uStack_13;
          if ((int)uStack_13 != *(int *)(lVar2 + 0x10)) {
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar16 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar16,id_00,(MethodInfo *)0x0);
            if (pMVar17 == (MVWorldObjectClient *)0x0) goto code_?;
            (*(pMVar17->klass->vtable).DeSelect.methodPtr)
                      (pMVar17,(pMVar17->klass->vtable).DeSelect.method);
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            this_02 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_02,(Object *)this_00,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar16 == (MVWorldObjectClientManager *)0x0) goto code_?;
            MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                      (pMVar16,id_00,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                       (MethodInfo *)0x0);
          }
        }
        pHVar4 = (this_00->fields).selectedIDs;
        uVar18 = FUN_?(TypeInfo__System__Predicate<int>);
        FUN_?(uVar18,lVar2,
                      MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                     );
        if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
          FUN_?(pHVar4,uVar18);
          return;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DeSelectWorldObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectWorldObject
               (EditorStateMachine *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  object = (this->fields).selectionController;
  if (object != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      (*(wo->klass->vtable).DeSelect.methodPtr)(wo,(wo->klass->vtable).DeSelect.method);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      iVar1 = (wo->fields)._.id;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)object,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (this_00,iVar1,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                   (MethodInfo *)0x0);
        pMVar2 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
        pHVar3 = (object->fields).selectedIDs;
        if (pHVar3 != (HashSet_1_System_Int32_ *)0x0) {
          iVar1 = (wo->fields)._.id;
          if ((pHVar3->fields)._buckets != (Int32__Array *)0x0) {
            iVar4 = FUN_?(pHVar3,iVar1,
                                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_
                                   ->klass->rgctx_data[0x16].rgctxDataDummy);
            pIVar5 = (pHVar3->fields)._buckets;
            if (pIVar5 == (Int32__Array *)0x0) {
code_?:
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pHVar7 = (pHVar3->fields)._slots;
            uVar8 = iVar4 % (int)pIVar5->max_length;
            if ((uint)pIVar5->max_length <= uVar8) {
code_?:
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar9 = pIVar5->vector[(int)uVar8] - 1;
            if (-1 < (int)uVar9) {
              iVar10 = 0;
              uVar11 = 0xffffffff;
              if (pHVar7 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
              do {
                uVar12 = uVar9;
                if ((uint)pHVar7->max_length <= uVar12) goto code_?;
                if (pHVar7->vector[(int)uVar12].hashCode == iVar4) {
                  pIVar13 = (pHVar3->fields)._comparer;
                  iVar14 = pHVar7->vector[(int)uVar12].value;
                  if (pIVar13 == (IEqualityComparer_1_System_Int32_ *)0x0) goto code_?;
                  pvVar15 = pMVar2->klass->rgctx_data[4].rgctxDataDummy;
                  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
                    pvVar15 = (void *)FUN_?(pvVar15);
                  }
                  cVar16 = FUN_?(iVar1,pvVar15,pIVar13,iVar14,iVar1);
                  if (cVar16 != '\0') {
                    if ((int)uVar11 < 0) {
                      pIVar5 = (pHVar3->fields)._buckets;
                      if ((uint)pHVar7->max_length <= uVar12) goto code_?;
                      if (pIVar5 == (Int32__Array *)0x0) goto code_?;
                      if ((uint)pIVar5->max_length <= uVar8) goto code_?;
                      pIVar5->vector[(int)uVar8] = pHVar7->vector[(int)uVar12].next + 1;
                    }
                    else {
                      if (((uint)pHVar7->max_length <= uVar12) ||
                         ((uint)pHVar7->max_length <= uVar11)) goto code_?;
                      pHVar7->vector[(int)uVar11].next = pHVar7->vector[(int)uVar12].next;
                    }
                    if (uVar12 < (uint)pHVar7->max_length) {
                      pHVar7->vector[(int)uVar12].hashCode = -1;
                      if (uVar12 < (uint)pHVar7->max_length) {
                        pHVar7->vector[(int)uVar12].next = (pHVar3->fields)._freeList;
                        piVar17 = &(pHVar3->fields)._version;
                        *piVar17 = *piVar17 + 1;
                        iVar4 = (pHVar3->fields)._count + -1;
                        (pHVar3->fields)._count = iVar4;
                        if (iVar4 == 0) {
                          (pHVar3->fields)._lastIndex = 0;
                          uVar12 = 0xffffffff;
                        }
                        (pHVar3->fields)._freeList = uVar12;
                        return;
                      }
                    }
                    goto code_?;
                  }
                }
                if ((int)pHVar7->max_length <= iVar10) {
                  uVar18 = func_?(&TypeInfo__System__InvalidOperationException);
                  this_02 = (ProtocolViolationException *)func_?(uVar18);
                  message = (String *)
                            func_?(&StringLiteral_Operations_that_change_non_concu);
                  System.dll::System::Net::ProtocolViolationException::
                  ProtocolViolationException__ctor_1(this_02,message,(MethodInfo *)0x0);
                  FUN_?(this_02,pMVar2);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar10 = iVar10 + 1;
                if ((uint)pHVar7->max_length <= uVar12) goto code_?;
                uVar9 = pHVar7->vector[(int)uVar12].next;
                uVar11 = uVar12;
              } while (-1 < (int)uVar9);
            }
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EnterGroup(MVGroup) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_EnterGroup
               (EditorStateMachine *this,MVGroup *group,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>,group,1,0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__Dispose__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = 0;
  pSVar5 = (this_00->fields).parentGroups;
  do {
    if (pSVar5 == (Stack_1_System_Int32_ *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pSVar5->fields)._size < 2) {
      FUN_?(TypeInfo__System__Collections__Generic__Queue<int>);
      FUN_?();
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((group != (MVGroup *)0x0) &&
         (key = (group->fields)._._.groupId, pMVar6 != (MVWorldObjectClientManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (pMVar6->fields).worldObjects;
        if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                   (Object **)&stack0x00000008,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
      }
      goto code_?;
    }
    pSVar5 = (this_00->fields).parentGroups;
    if (pSVar5 == (Stack_1_System_Int32_ *)0x0) goto code_?;
    uVar7 = (pSVar5->fields)._size - 1;
    uVar8 = (ulonglong)uVar7;
    pIVar9 = (pSVar5->fields)._array;
    if (pIVar9 == (Int32__Array *)0x0) goto code_?;
    if ((uint)pIVar9->max_length <= uVar7) {
      uVar10 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__->klass
                                  ->rgctx_data,10);
      FUN_?(pSVar5,uVar10);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    piVar11 = &(pSVar5->fields)._version;
    *piVar11 = *piVar11 + 1;
    (pSVar5->fields)._size = uVar7;
    if ((uint)pIVar9->max_length <= uVar7) {
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      lVar12 = func_?(*(undefined8 *)(uVar8 + 0x20));
      uVar10 = func_?(*(undefined8 *)(lVar12 + 0xc0),4);
      FUN_?(&uStack_2,uVar10);
      uVar10 = func_?(&TypeInfo__System__InvalidOperationException);
      this_02 = (ProtocolViolationException *)func_?(uVar10);
      message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
      System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                (this_02,message,(MethodInfo *)0x0);
      FUN_?(this_02,unaff_RDI);
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pSVar5 = (this_00->fields).parentGroups;
  } while( true );
}


/* Int32 ExitGroup() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_ExitGroup
                  (EditorStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Trying_to_exit_root_group_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    pSVar1 = (this_00->fields).parentGroups;
    if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
      if ((pSVar1->fields)._size < 2) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
        if ((this_00->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
          iVar2 = FUN_?();
          return iVar2;
        }
      }
      else if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
        iVar2 = FUN_?();
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this_00,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                    (this_01,iVar2,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                     (MethodInfo *)0x0);
          return iVar2;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Int32 ExitGroupToRoot() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_ExitGroupToRoot
                  (EditorStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    pSVar1 = (this_00->fields).parentGroups;
    while (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
      pSVar2 = (this_00->fields).parentGroups;
      if ((pSVar1->fields)._size < 2) {
        if (pSVar2 != (Stack_1_System_Int32_ *)0x0) {
          pIVar3 = (pSVar2->fields)._array;
          if (pIVar3 == (Int32__Array *)0x0) {
            FUN_?(pSVar2,0,pSVar2);
            pcVar4 = (code *)swi(3);
            iVar5 = (*pcVar4)();
            return iVar5;
          }
          iVar6 = (pSVar2->fields)._size;
          if (iVar6 - 1U < (uint)pIVar3->max_length) {
            if (iVar6 - 1U < (uint)pIVar3->max_length) {
              return pIVar3->vector[(longlong)iVar6 + -1];
            }
            FUN_?();
            pcVar4 = (code *)swi(3);
            iVar5 = (*pcVar4)();
            return iVar5;
          }
          uVar7 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Peek__->
                                      klass->rgctx_data,10);
          FUN_?(pSVar2,uVar7);
          pcVar4 = (code *)swi(3);
          iVar5 = (*pcVar4)();
          return iVar5;
        }
        break;
      }
      if (pSVar2 == (Stack_1_System_Int32_ *)0x0) break;
      iVar6 = (pSVar2->fields)._size;
      pIVar3 = (pSVar2->fields)._array;
      if (pIVar3 == (Int32__Array *)0x0) break;
      if ((uint)pIVar3->max_length <= iVar6 - 1U) {
        uVar7 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__->
                                    klass->rgctx_data,10);
        FUN_?(pSVar2,uVar7);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      piVar8 = &(pSVar2->fields)._version;
      *piVar8 = *piVar8 + 1;
      (pSVar2->fields)._size = iVar6 - 1U;
      if ((uint)pIVar3->max_length <= iVar6 - 1U) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      iVar5 = pIVar3->vector[(longlong)iVar6 + -1];
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (this_01,iVar5,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
      pSVar1 = (this_00->fields).parentGroups;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean IsSelected(Int32) */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_IsSelected
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                  ,CONCAT44(in_register_00000014,id),0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHStack_3 = (this_00->fields).selectedIDs;
  if (pHStack_3 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
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
    ppHStack_9 = (HashSet_1_System_Int32_ **)
                  ((ulonglong)(uint)(pHStack_3->fields)._version << 0x20);
    puStack_10 = (undefined *)0x0;
    lStack_11 = (longlong)ppHStack_9;
    uStack_12 = 0;
    uStack_5 = 0;
    ppHStack_9 = &pHStack_3;
    do {
      cVar13 = FUN_?(&pHStack_3,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           );
      if (cVar13 == '\0') {
        return 0;
      }
    } while ((id != (int)uStack_12) &&
            (bVar2 = SelectionController::SelectionController_IsChildOf
                               (this_00,id,(int)uStack_12,(MethodInfo *)0x0), bVar2 == 0));
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* WorldObjectClientRef Select(Boolean, Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Select
          (EditorStateMachine *this,bool addToSelection,int32_t layerMask,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
    return pWVar2;
  }
  VStack_3.interactionFlags = 0;
  VStack_3.point.x = 0.0;
  VStack_3.point.y = 0.0;
  VStack_3.point.z = 0.0;
  VStack_3.normal.x = 0.0;
  VStack_3.normal.y = 0.0;
  VStack_3.normal.z = 0.0;
  VStack_3.cubePos.x = 0;
  VStack_3.cubePos.y = 0;
  VStack_3.cubePos.z = 0;
  VStack_3._30_2_ = 0;
  VStack_3.face = 0;
  VStack_3.isCubeHit = 0;
  VStack_3._37_3_ = 0;
  VStack_3.woId = 0;
  VStack_3._44_4_ = 0;
  VStack_3.cube = (Cube *)0x0;
  VStack_3.distance = 0.0;
  VStack_3._60_4_ = 0;
  VStack_3.collider = (Collider *)0x0;
  VStack_3.transform = (Transform *)0x0;
  bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    (&VStack_3,(HashSet_1_System_Int32_ *)0x0,layerMask,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    VStack_5.point.x = VStack_3.point.x;
    VStack_5.point.y = VStack_3.point.y;
    VStack_5.point.z = VStack_3.point.z;
    VStack_5.normal.x = VStack_3.normal.x;
    VStack_5.normal.y = VStack_3.normal.y;
    VStack_5.normal.z = VStack_3.normal.z;
    VStack_5.cubePos = VStack_3.cubePos;
    VStack_5._30_2_ = VStack_3._30_2_;
    VStack_5.face = VStack_3.face;
    VStack_5.isCubeHit = VStack_3.isCubeHit;
    VStack_5._37_3_ = VStack_3._37_3_;
    VStack_5.woId = VStack_3.woId;
    VStack_5._44_4_ = VStack_3._44_4_;
    VStack_5.cube = VStack_3.cube;
    VStack_5.distance = VStack_3.distance;
    VStack_5._60_4_ = VStack_3._60_4_;
    VStack_5.collider = VStack_3.collider;
    VStack_5.transform = VStack_3.transform;
    VStack_5.interactionFlags = VStack_3.interactionFlags;
    pWVar2 = SelectionController::SelectionController_Select_1
                       (this_00,&VStack_5,addToSelection,1,(MethodInfo *)0x0);
    return pWVar2;
  }
  return (WorldObjectClientRef *)0x0;
}


/* WorldObjectClientRef SelectWO(Int32, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_SelectWO
          (EditorStateMachine *this,int32_t id,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
    return pWVar2;
  }
  aIStackX_10[0].m_value = id;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__that_is_owned_by_another_acotr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__outside_the_parent_group_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                   (pMVar3,id,(MethodInfo *)0x0);
    if (addToSelection == 0) {
      SelectionController::SelectionController_DeSelectAllExcept(this_00,id,(MethodInfo *)0x0);
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      if ((wo->fields)._.ownerActorNr != 0) {
        iVar4 = (wo->fields)._.ownerActorNr;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar5 == (MVGameControllerBase *)0x0) ||
             (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
            (this_01 = (pMVar6->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0)) ||
           (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0)
           , pMVar7 == (MVLocalPlayer *)0x0)) goto code_?;
        if (iVar4 != (pMVar7->fields)._._ActorNr_k__BackingField) {
          pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Trying_to_select_WO_,pSVar8,
                              StringLiteral__that_is_owned_by_another_acotr,(MethodInfo *)0x0);
          iVar4 = *(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c;
code_?:
          if (iVar4 == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar8,(MethodInfo *)0x0);
          pWVar2 = MVWorldObjectClientManager::
                    MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
          return pWVar2;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_00->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
        iVar4 = FUN_?();
        do {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar5 == (MVGameControllerBase *)0x0) ||
              (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
             (((pMVar6->fields).worldNetwork == (WorldNetwork *)0x0 ||
              (pMVar9 = (((pMVar6->fields).worldNetwork)->fields)._.worldObjectClientManager,
              pMVar9 == (MVWorldObjectClientManagerNetwork *)0x0)))) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_02 = (pMVar9->fields)._.worldObjects;
          pOStack_10 = (Object *)0x0;
          if (this_02 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
            return pWVar2;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,id,&pOStack_10,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (pOStack_10 == (Object *)0x0) goto code_?;
          id = *(int *)((longlong)&pOStack_10[1].klass + 4);
          if (id == -1) {
            if (((wo->fields).interactionFlags & 8) == 0) {
              pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((this_00->fields).parentGroups == (Stack_1_System_Int32_ *)0x0)
              goto code_?;
              aIStackX_10[0].m_value = FUN_?();
              str3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_6
                                 (StringLiteral_Trying_to_select_WO_,pSVar8,
                                  StringLiteral__outside_the_parent_group_,str3,(MethodInfo *)0x0);
              iVar4 = *(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c;
              goto code_?;
            }
            break;
          }
        } while (id != iVar4);
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this_00->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
          iVar4 = FUN_?();
          if (iVar4 != (wo->fields)._.groupId) {
            SelectionController::SelectionController_PushWOParents(this_00,wo,0,(MethodInfo *)0x0);
          }
          this_03 = (this_00->fields).selectedIDs;
          if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (this_03,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            woID = (wo->fields)._.id;
            this_04 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_04,(Object *)this_00,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
              MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                        (pMVar3,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,
                         (MethodInfo *)0x0);
              pMVar11 = wo->klass;
              if (showVisuals == 0) {
                (*(pMVar11->vtable).Select.methodPtr)(wo,(pMVar11->vtable).Select.method);
              }
              else {
                pOStack_10 = _UNK_?;
                uStack_12 = _UNK_?;
                (*(pMVar11->vtable).Select_1.methodPtr)(wo,&pOStack_10);
              }
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
                pWVar2 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClientRef
                                    (pMVar3,(wo->fields)._.id,(MethodInfo *)0x0);
                return pWVar2;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
  return pWVar2;
}


/* WorldObjectClientRef Select(VoxelHit, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Select_1
          (EditorStateMachine *this,VoxelHit *hit,bool addToSelection,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    VStack_1.point.x = (hit->point).x;
    VStack_1.point.y = (hit->point).y;
    VStack_1._8_8_ = *(undefined8 *)&(hit->point).z;
    VStack_1.normal.y = (hit->normal).y;
    VStack_1.normal.z = (hit->normal).z;
    VStack_1.cubePos = hit->cubePos;
    VStack_1._30_2_ = *(undefined2 *)&hit->field_0x1e;
    VStack_1.face = hit->face;
    VStack_1.isCubeHit = hit->isCubeHit;
    VStack_1._37_3_ = *(undefined3 *)&hit->field_0x25;
    VStack_1.woId = hit->woId;
    VStack_1._44_4_ = *(undefined4 *)&hit->field_0x2c;
    VStack_1.cube = hit->cube;
    VStack_1.distance = hit->distance;
    VStack_1._60_4_ = *(undefined4 *)&hit->field_0x3c;
    VStack_1.collider = hit->collider;
    VStack_1.transform = hit->transform;
    VStack_1.interactionFlags = hit->interactionFlags;
    pWVar2 = SelectionController::SelectionController_Select_1
                       (this_00,&VStack_1,addToSelection,1,(MethodInfo *)0x0);
    return pWVar2;
  }
  FUN_?(0,hit,addToSelection,(char)method);
  pcVar3 = (code *)swi(3);
  pWVar2 = (WorldObjectClientRef *)(*pcVar3)();
  return pWVar2;
}


/* EditorStateMachine(GameObject) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor
               (EditorStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingStateMachine);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkSelector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SelectionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FSMEntity::FSMEntity__ctor((FSMEntity *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).gameObject = gameObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (CubeModelingStateMachine *)FUN_?(TypeInfo__CubeModelingStateMachine);
  CubeModelingStateMachine::CubeModelingStateMachine__ctor(this_00,gameObject,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cubeModelingStateMachine = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cubeModelingStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (MVNetworkSelector *)FUN_?(TypeInfo__MVNetworkSelector);
  MVNetworkSelector::MVNetworkSelector__ctor(this_01,this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).networkSelector = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).networkSelector >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (SelectionController *)FUN_?(TypeInfo__SelectionController);
  SelectionController::SelectionController__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).selectionController = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).selectionController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).weCamera = pMVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).weCamera >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._GridMode_k__BackingField = 1;
  (this->fields)._MuzzleEditMode_k__BackingField = 0;
  return;
}


/* EditorStateMachine(GameObject, Vector3) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor_1
               (EditorStateMachine *this,GameObject *gameObject,Vector3 *avatarEditModeCenterPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CEEditorStateTransitionTableUUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EditorStateMachine__ctor(this,gameObject,(MethodInfo *)0x0);
  this_00 = (CEEditorStateTransitionTableUUI *)
            FUN_?(TypeInfo__CEEditorStateTransitionTableUUI);
  VStack_1.z = avatarEditModeCenterPos->z;
  VStack_1.x = avatarEditModeCenterPos->x;
  VStack_1.y = avatarEditModeCenterPos->y;
  CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
            (this_00,&VStack_1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.transitionTable >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* EditorStateMachine(GameObject, ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor_2
               (EditorStateMachine *this,GameObject *gameObject,
               ContextMenuController *contextMenuController,GizmoController *gizmoController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorStateTransitionTable3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EditorStateMachine__ctor(this,gameObject,(MethodInfo *)0x0);
  this_00 = (EditorStateTransitionTable3D *)FUN_?(TypeInfo__EditorStateTransitionTable3D);
  EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
            (this_00,contextMenuController,gizmoController,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.transitionTable >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* EditorEvent get_CurEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_CurEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.curEvent;
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      return *(EditorEvent__Enum *)&pOVar1[1].klass;
    }
    FUN_?(pOVar1,TypeInfo__EditorEvent);
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  EVar3 = (*pcVar2)();
  return EVar3;
}


/* Boolean get_MuzzleEditMode() */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_MuzzleEditMode
               (EditorStateMachine *this,MethodInfo *method)

{
  return (this->fields)._MuzzleEditMode_k__BackingField;
}


/* EditorEvent get_NextEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_NextEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.nextEvent;
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      return *(EditorEvent__Enum *)&pOVar1[1].klass;
    }
    FUN_?(pOVar1,TypeInfo__EditorEvent);
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  EVar3 = (*pcVar2)();
  return EVar3;
}


/* MVGroup get_ParentGroup() */

MVGroup * Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroup
                    (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((pSVar1->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) &&
       (id = FUN_?(), this_00 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = (MVGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,id,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__MVGroup)) {
          FUN_?(pMVar2,TypeInfo__MVGroup);
          pcVar4 = (code *)swi(3);
          pMVar2 = (MVGroup *)(*pcVar4)();
          return pMVar2;
        }
      }
      return pMVar2;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar2 = (MVGroup *)(*pcVar4)();
  return pMVar2;
}


/* Int32 get_ParentGroupID() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroupID
                  (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar2 = (pSVar1->fields).parentGroups;
    if (pSVar2 != (Stack_1_System_Int32_ *)0x0) {
      pIVar3 = (pSVar2->fields)._array;
      if (pIVar3 == (Int32__Array *)0x0) {
        FUN_?(pSVar2,0,pSVar2);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      iVar6 = (pSVar2->fields)._size;
      if (iVar6 - 1U < (uint)pIVar3->max_length) {
        if (iVar6 - 1U < (uint)pIVar3->max_length) {
          return pIVar3->vector[(longlong)iVar6 + -1];
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      uVar7 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Peek__->
                                  klass->rgctx_data,10);
      FUN_?(pSVar2,uVar7);
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean get_ParentGroupIsRoot() */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
               (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pSVar1->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
      iVar2 = FUN_?();
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                           (this_00,(MethodInfo *)0x0);
        if (pMVar3 != (MVGroup *)0x0) {
          return iVar2 == (pMVar3->fields)._._.id;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* EditorEvent get_PrevEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_PrevEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.prevEvent;
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      return *(EditorEvent__Enum *)&pOVar1[1].klass;
    }
    FUN_?(pOVar1,TypeInfo__EditorEvent);
    pcVar2 = (code *)swi(3);
    EVar3 = (*pcVar2)();
    return EVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  EVar3 = (*pcVar2)();
  return EVar3;
}


/* HashSet`1[System.Int32] get_SelectedIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SelectedIDs
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    return (pSVar1->fields).selectedIDs;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar2)();
  return pHVar3;
}


/* HashSet`1[MVWorldObjectClient] get_SelectedWOs() */

HashSet_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SelectedWOs
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 == (SelectionController *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pHVar3 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar2)();
    return pHVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar3 = (HashSet_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)pHVar3,
             MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
  pHVar4 = (pSVar1->fields).selectedIDs;
  if (pHVar4 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = 0;
    uStack_6._0_4_ = SUB84(pHVar4,0);
    uStack_6._4_4_ = (undefined4)((ulonglong)pHVar4 >> 0x20);
    uStack_11 = (undefined4)uStack_6;
    uStack_12 = uStack_6._4_4_;
    puStack_13 = (undefined *)((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
    uStack_14 = 0;
    uStack_6 = 0;
    puStack_15 = &uStack_11;
    while( true ) {
      cVar16 = FUN_?(&uStack_11,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           );
      if (cVar16 == '\0') {
        return pHVar3;
      }
      key = (int32_t)uStack_14;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar17 == (MVWorldObjectClientManager *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStackX_8 = (Object *)0x0;
      this_00 = (pMVar17->fields).worldObjects;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pHVar3 == (HashSet_1_MVWorldObjectClient_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__AddIfNotPresent
                ((HashSet_1_System_Object_ *)pHVar3,pOStackX_8,
                 MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 ->klass->rgctx_data[0x15].method);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  pHVar3 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar2)();
  return pHVar3;
}


/* MVWorldObjectClient get_SingleSelectedWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar2 = (pSVar1->fields).selectedIDs;
    if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
      if ((pHVar2->fields)._count != 1) {
        if (0 < (pHVar2->fields)._count) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Trying_to_access_single_selected,(MethodInfo *)0x0);
        }
        return (MVWorldObjectClient *)0x0;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      key = System.Core.dll::System::Linq::Enumerable::Enumerable_First
                      ((IEnumerable_1_System_Int32_ *)(pSVar1->fields).selectedIDs,
                       int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                      );
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        ,key,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar3->fields).worldObjects;
        if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                     (Object **)&stack0x00000008,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          return (MVWorldObjectClient *)0x0;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
        return pMVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar5;
}


/* Void set_MuzzleEditMode(Boolean) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_set_MuzzleEditMode
               (EditorStateMachine *this,bool value,MethodInfo *method)

{
  (this->fields)._MuzzleEditMode_k__BackingField = value;
  return;
}

