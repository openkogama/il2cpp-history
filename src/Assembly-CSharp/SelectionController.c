
/* Void DeSelectAll() */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectAll
               (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
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
  pHVar1 = (this->fields).selectedIDs;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    iStack_7 = (pHVar1->fields)._version;
    uStack_8 = 0;
    uStack_3._0_4_ = SUB84(pHVar1,0);
    uStack_3._4_4_ = (undefined4)((ulonglong)pHVar1 >> 0x20);
    uStack_9 = (undefined4)uStack_3;
    uStack_10 = uStack_3._4_4_;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_3 = 0;
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
                (this_01,(Object *)this,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar15 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (pMVar15,key,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                 (MethodInfo *)0x0);
    }
    pHVar1 = (this->fields).selectedIDs;
    if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
      if (0 < (pHVar1->fields)._lastIndex) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar1->fields)._slots,0,(pHVar1->fields)._lastIndex,(MethodInfo *)0x0)
        ;
        pIVar16 = (pHVar1->fields)._buckets;
        if (pIVar16 == (Int32__Array *)0x0) goto code_?;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar1->fields)._buckets,0,(int32_t)pIVar16->max_length,
                   (MethodInfo *)0x0);
        (pHVar1->fields)._count = 0;
        (pHVar1->fields)._lastIndex = 0;
        (pHVar1->fields)._freeList = -1;
      }
      piVar17 = &(pHVar1->fields)._version;
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectAllExcept
               (SelectionController *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
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
  lVar1 = FUN_?(TypeInfo__SelectionController____c__DisplayClass27_0);
  if (lVar1 != 0) {
    *(int32_t *)(lVar1 + 0x10) = id;
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).selectedIDs;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar2 == 0) {
        SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
        return;
      }
      pHVar3 = (this->fields).selectedIDs;
      if (pHVar3 != (HashSet_1_System_Int32_ *)0x0) {
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        ppHStack_9 = (HashSet_1_System_Int32_ **)
                      ((ulonglong)(uint)(pHVar3->fields)._version << 0x20);
        uStack_10 = 0;
        lStack_11 = (longlong)ppHStack_9;
        uStack_12 = 0;
        uStack_5 = 0;
        ppHStack_9 = &pHStack_13;
        pHStack_13 = pHVar3;
        while (cVar14 = FUN_?(&pHStack_13,
                                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                    ), cVar14 != '\0') {
          id_00 = (int)uStack_12;
          if ((int)uStack_12 != *(int *)(lVar1 + 0x10)) {
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar15 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar15,id_00,(MethodInfo *)0x0);
            if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
            (*(pMVar16->klass->vtable).DeSelect.methodPtr)
                      (pMVar16,(pMVar16->klass->vtable).DeSelect.method);
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            this_01 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar15 == (MVWorldObjectClientManager *)0x0) goto code_?;
            MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                      (pMVar15,id_00,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                       (MethodInfo *)0x0);
          }
        }
        pHVar3 = (this->fields).selectedIDs;
        uVar17 = FUN_?(TypeInfo__System__Predicate<int>);
        FUN_?(uVar17,lVar1,
                      MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                     );
        if (pHVar3 != (HashSet_1_System_Int32_ *)0x0) {
          FUN_?(pHVar3,uVar17);
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void DeSelectWorldObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectWorldObject
               (SelectionController *this,MVWorldObjectClient *wo,MethodInfo *method)

{
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
              FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (this_00,iVar1,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                 (MethodInfo *)0x0);
      pMVar2 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
      pHVar3 = (this->fields).selectedIDs;
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
                    if (((uint)pHVar7->max_length <= uVar12) || ((uint)pHVar7->max_length <= uVar11)
                       ) goto code_?;
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EnterGroup(MVGroup) */

void Assembly-CSharp.dll::SelectionController::SelectionController_EnterGroup
               (SelectionController *this,MVGroup *group,MethodInfo *method)

{
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
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
  uStack_1 = 0;
  puStack_2 = (undefined *)0x0;
  uStack_3 = 0;
  pSVar4 = (this->fields).parentGroups;
  do {
    if (pSVar4 == (Stack_1_System_Int32_ *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pSVar4->fields)._size < 2) {
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
        this_00 = (pMVar6->fields).worldObjects;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                   (Object **)&stack0x00000008,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
      }
      goto code_?;
    }
    pSVar4 = (this->fields).parentGroups;
    if (pSVar4 == (Stack_1_System_Int32_ *)0x0) goto code_?;
    uVar7 = (pSVar4->fields)._size - 1;
    uVar8 = (ulonglong)uVar7;
    pIVar9 = (pSVar4->fields)._array;
    if (pIVar9 == (Int32__Array *)0x0) goto code_?;
    if ((uint)pIVar9->max_length <= uVar7) {
      uVar10 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__->klass
                                  ->rgctx_data,10);
      FUN_?(pSVar4,uVar10);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar11 = &(pSVar4->fields)._version;
    *piVar11 = *piVar11 + 1;
    (pSVar4->fields)._size = uVar7;
    if ((uint)pIVar9->max_length <= uVar7) {
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      lVar12 = func_?(*(undefined8 *)(uVar8 + 0x20));
      uVar10 = func_?(*(undefined8 *)(lVar12 + 0xc0),4);
      FUN_?(&uStack_1,uVar10);
      uVar10 = func_?(&TypeInfo__System__InvalidOperationException);
      this_01 = (ProtocolViolationException *)func_?(uVar10);
      message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
      System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                (this_01,message,(MethodInfo *)0x0);
      FUN_?(this_01,unaff_RDI);
      FUN_?();
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar4 = (this->fields).parentGroups;
  } while( true );
}


/* Int32 ExitGroup() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_ExitGroup
                  (SelectionController *this,MethodInfo *method)

{
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
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).parentGroups;
  if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
    if ((pSVar1->fields)._size < 2) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
      if ((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
        iVar2 = FUN_?();
        return iVar2;
      }
    }
    else if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
      iVar2 = FUN_?();
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (this_00,iVar2,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                   (MethodInfo *)0x0);
        return iVar2;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Int32 ExitGroupToRoot() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_ExitGroupToRoot
                  (SelectionController *this,MethodInfo *method)

{
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
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).parentGroups;
  do {
    if (pSVar1 == (Stack_1_System_Int32_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    pSVar4 = (this->fields).parentGroups;
    if ((pSVar1->fields)._size < 2) {
      if (pSVar4 != (Stack_1_System_Int32_ *)0x0) {
        pIVar5 = (pSVar4->fields)._array;
        if (pIVar5 == (Int32__Array *)0x0) {
          FUN_?(pSVar4,0,pSVar4);
          pcVar2 = (code *)swi(3);
          iVar3 = (*pcVar2)();
          return iVar3;
        }
        iVar6 = (pSVar4->fields)._size;
        if (iVar6 - 1U < (uint)pIVar5->max_length) {
          if (iVar6 - 1U < (uint)pIVar5->max_length) {
            return pIVar5->vector[(longlong)iVar6 + -1];
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          iVar3 = (*pcVar2)();
          return iVar3;
        }
        uVar7 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Peek__->
                                    klass->rgctx_data,10);
        FUN_?(pSVar4,uVar7);
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      goto code_?;
    }
    if (pSVar4 == (Stack_1_System_Int32_ *)0x0) goto code_?;
    iVar6 = (pSVar4->fields)._size;
    pIVar5 = (pSVar4->fields)._array;
    if (pIVar5 == (Int32__Array *)0x0) goto code_?;
    if ((uint)pIVar5->max_length <= iVar6 - 1U) {
      uVar7 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__->klass
                                  ->rgctx_data,10);
      FUN_?(pSVar4,uVar7);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    piVar8 = &(pSVar4->fields)._version;
    *piVar8 = *piVar8 + 1;
    (pSVar4->fields)._size = iVar6 - 1U;
    if ((uint)pIVar5->max_length <= iVar6 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    iVar3 = pIVar5->vector[(longlong)iVar6 + -1];
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,iVar3,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    pSVar1 = (this->fields).parentGroups;
  } while( true );
}


/* Boolean IsChildOf(Int32, Int32) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsChildOf
               (SelectionController *this,int32_t childId,int32_t parentId,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,childId,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,parentId,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        if ((pMVar2->fields)._.groupId == -1) {
          return 0;
        }
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          if ((pMVar2->fields)._.groupId == (pMVar3->fields)._.id) {
            return 1;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar1,(pMVar2->fields)._.groupId,(MethodInfo *)0x0);
            while( true ) {
              if (pMVar2 == (MVWorldObjectClient *)0x0) break;
              if ((pMVar2->fields)._.groupId == -1) {
                return 0;
              }
              if (pMVar3 == (MVWorldObjectClient *)0x0) break;
              if ((pMVar2->fields)._.groupId == (pMVar3->fields)._.id) {
                return 1;
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar1 == (MVWorldObjectClientManager *)0x0) break;
              pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                 (pMVar1,(pMVar2->fields)._.groupId,(MethodInfo *)0x0);
            }
            FUN_?();
            pcVar4 = (code *)swi(3);
            bVar5 = (*pcVar4)();
            return bVar5;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsChildOf(MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsChildOf_1
               (SelectionController *this,MVWorldObjectClient *child,MVWorldObjectClient *parent,
               MethodInfo *method)

{
  while( true ) {
    if (child == (MVWorldObjectClient *)0x0) break;
    if ((child->fields)._.groupId == -1) {
      return 0;
    }
    if (parent == (MVWorldObjectClient *)0x0) break;
    if ((child->fields)._.groupId == (parent->fields)._.id) {
      return 1;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) break;
    child = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_00,(child->fields)._.groupId,(MethodInfo *)0x0);
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean IsSelected(Int32) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsSelected
               (SelectionController *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHStack_1 = (this->fields).selectedIDs;
  if (pHStack_1 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    ppHStack_7 = (HashSet_1_System_Int32_ **)
                  ((ulonglong)(uint)(pHStack_1->fields)._version << 0x20);
    uStack_8 = 0;
    lStack_9 = (longlong)ppHStack_7;
    uStack_10 = 0;
    uStack_3 = 0;
    ppHStack_7 = &pHStack_1;
    do {
      cVar11 = FUN_?(&pHStack_1,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           );
      if (cVar11 == '\0') {
        return 0;
      }
    } while ((id != (int)uStack_10) &&
            (bVar12 = SelectionController_IsChildOf(this,id,(int)uStack_10,(MethodInfo *)0x0),
            bVar12 == 0));
    return 1;
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Void PushWOParents(MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::SelectionController::SelectionController_PushWOParents
               (SelectionController *this,MVWorldObjectClient *wo,bool addAsParent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
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
  pSStack_1 = (Stack_1_System_Int32_ *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  pSVar4 = (this->fields).parentGroups;
  while (pSVar4 != (Stack_1_System_Int32_ *)0x0) {
    if ((pSVar4->fields)._size < 2) {
      lVar5 = FUN_?(TypeInfo__System__Collections__Generic__Queue<int>);
      FUN_?();
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((wo != (MVWorldObjectClient *)0x0) &&
         (key = (wo->fields)._.groupId, pMVar6 != (MVWorldObjectClientManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMStackX_8 = (MVWorldObjectClient *)0x0;
        this_00 = (pMVar6->fields).worldObjects;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&pMStackX_8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        unaff_RDI = pMStackX_8;
        if (pMStackX_8 != (MVWorldObjectClient *)0x0) goto code_?;
      }
      break;
    }
    pSVar4 = (this->fields).parentGroups;
    if (pSVar4 == (Stack_1_System_Int32_ *)0x0) break;
    uVar8 = (pSVar4->fields)._size - 1;
    pUVar9 = (UnityAction_2_System_Object_System_Object_ *)(ulonglong)uVar8;
    pIVar10 = (pSVar4->fields)._array;
    if (pIVar10 == (Int32__Array *)0x0) break;
    if ((uint)pIVar10->max_length <= uVar8) {
      uVar11 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__->
                                   klass->rgctx_data,10);
      FUN_?(pSVar4,uVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar12 = &(pSVar4->fields)._version;
    *piVar12 = *piVar12 + 1;
    (pSVar4->fields)._size = uVar8;
    if ((uint)pIVar10->max_length <= uVar8) goto code_?;
    pSVar4 = (this->fields).parentGroups;
  }
  goto code_?;
code_?:
  iVar13 = (unaff_RDI->fields)._.id;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (pMVar6,(MethodInfo *)0x0), pMVar14 == (MVGroup *)0x0))
  goto code_?;
  if (iVar13 == (pMVar14->fields)._._.id) {
    if (lVar5 != 0) goto code_?;
    goto code_?;
  }
  if (unaff_RDI == (MVWorldObjectClient *)0x0) goto code_?;
  if (((unaff_RDI->fields).interactionFlags & 0x40) == 0) {
    if (lVar5 == 0) goto code_?;
    FUN_?(lVar5,(unaff_RDI->fields)._.id);
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
     (unaff_RDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar6,(unaff_RDI->fields)._.groupId,(MethodInfo *)0x0),
     unaff_RDI == (MVWorldObjectClient *)0x0)) goto code_?;
  goto code_?;
code_?:
  if (*(int *)(lVar5 + 0x20) != 0) {
    pSVar15 = (Stack_1_System_Int32Enum_ *)(this->fields).parentGroups;
    pUVar9 = *(UnityAction_2_System_Object_System_Object_ **)(lVar5 + 0x10);
    if (pUVar9 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    if (*(uint *)&(pUVar9->fields)._._.invoke_impl <= *(uint *)(lVar5 + 0x18))
    goto code_?;
    IVar16 = *(Int32Enum__Enum *)
             ((longlong)&(pUVar9->fields)._._.m_target +
             (longlong)(int)*(uint *)(lVar5 + 0x18) * 4);
    iVar17 = *(int *)(lVar5 + 0x18) + 1;
    iVar13 = 0;
    if (iVar17 != *(int *)&(pUVar9->fields)._._.invoke_impl) {
      iVar13 = iVar17;
    }
    *(int *)(lVar5 + 0x18) = iVar13;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + -1;
    *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
    if (pSVar15 == (Stack_1_System_Int32Enum_ *)0x0) goto code_?;
    uVar8 = (pSVar15->fields)._size;
    pIVar18 = (pSVar15->fields)._array;
    if (pIVar18 == (Int32Enum__Enum__Array *)0x0) goto code_?;
    if (uVar8 < (uint)pIVar18->max_length) {
      pIVar18->vector[(int)uVar8] = IVar16;
      piVar12 = &(pSVar15->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar15->fields)._size = uVar8 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
      Stack_1_System_Int32Enum__PushWithResize
                (pSVar15,IVar16,
                 MethodInfo__System__Collections__Generic__Stack<int>__Push_int_->klass->rgctx_data
                 [0xc].method);
    }
    goto code_?;
  }
  if (addAsParent != 0) {
    pSVar15 = (Stack_1_System_Int32Enum_ *)(this->fields).parentGroups;
    IVar16 = (wo->fields)._.id;
    if (pSVar15 == (Stack_1_System_Int32Enum_ *)0x0) goto code_?;
    uVar8 = (pSVar15->fields)._size;
    pIVar18 = (pSVar15->fields)._array;
    if (pIVar18 == (Int32Enum__Enum__Array *)0x0) goto code_?;
    if (uVar8 < (uint)pIVar18->max_length) {
      pIVar18->vector[(int)uVar8] = IVar16;
      piVar12 = &(pSVar15->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar15->fields)._size = uVar8 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
      Stack_1_System_Int32Enum__PushWithResize
                (pSVar15,IVar16,
                 MethodInfo__System__Collections__Generic__Stack<int>__Push_int_->klass->rgctx_data
                 [0xc].method);
    }
  }
  pSVar4 = (this->fields).parentGroups;
  if (pSVar4 == (Stack_1_System_Int32_ *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&uStack_19 >> 0xc);
    puVar20 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar21 = *puVar20;
      LOCK();
      uVar22 = *puVar20;
      if (uVar21 == uVar22) {
        *puVar20 = uVar21 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar21 != uVar22);
  }
  uStack_23 = (Stack_1_System_Int32_ **)CONCAT44(0xfffffffe,(pSVar4->fields)._version);
  uStack_24 = 0;
  uStack_2 = uStack_23;
  uStack_3 = 0;
  uStack_19 = 0;
  uStack_23 = &pSStack_1;
  pSStack_1 = pSVar4;
  while (pSStack_1 != (Stack_1_System_Int32_ *)0x0) {
    unaff_RDI = (MVWorldObjectClient *)
                MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__MoveNext__;
    if ((int)uStack_2 != (pSStack_1->fields)._version) goto code_?;
    if (uStack_2._4_4_ == -2) {
      iVar13 = (pSStack_1->fields)._size;
      uVar8 = iVar13 - 1;
      uStack_2 = CONCAT44(uVar8,(int)uStack_2);
      uVar25 = -(-iVar13 >> 0x1f);
      pUVar9 = (UnityAction_2_System_Object_System_Object_ *)(ulonglong)uVar25;
      if (uVar25 != 0) {
        unaff_RDI = (MVWorldObjectClient *)(pSStack_1->fields)._array;
        if (unaff_RDI != (MVWorldObjectClient *)0x0) {
          if (uVar8 < (uint)(unaff_RDI->fields)._.itemId) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      uVar25 = (uint)uStack_3;
    }
    else {
      if (uStack_2._4_4_ == -1) {
        return;
      }
      uVar8 = uStack_2._4_4_ - 1;
      uStack_2 = CONCAT44(uVar8,(int)uStack_2);
      pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                (ulonglong)(uint)-((int)~uVar8 >> 0x1f);
      if (-((int)~uVar8 >> 0x1f) == 0) {
        return;
      }
      unaff_RDI = (MVWorldObjectClient *)(pSStack_1->fields)._array;
      if (unaff_RDI == (MVWorldObjectClient *)0x0) goto code_?;
      if ((uint)(unaff_RDI->fields)._.itemId <= uVar8) goto code_?;
code_?:
      uVar25 = *(uint *)((longlong)&(unaff_RDI->fields)._.outputLinkRefs + (longlong)(int)uVar8 * 4
                        );
      uStack_3 = CONCAT44(uStack_3._4_4_,uVar25);
    }
    unaff_RDI = (MVWorldObjectClient *)(ulonglong)uVar25;
    if ((char)pUVar9 == '\0') {
      return;
    }
    pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
              MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__get_Current__;
    if ((int)uVar8 < 0) goto code_?;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
    ;
    pUVar9 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
              (pMVar6,uVar25,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
  }
  goto code_?;
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
code_?:
  FUN_?();
code_?:
  lVar5 = func_?((Il2CppClass *)(pUVar9->fields)._._.m_target);
  uVar11 = func_?(*(undefined8 *)(lVar5 + 0xc0),4);
  FUN_?(&pSStack_1,uVar11);
code_?:
  uVar11 = func_?(&TypeInfo__System__InvalidOperationException);
  this_02 = (ProtocolViolationException *)func_?(uVar11);
  message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
  System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
            (this_02,message,(MethodInfo *)0x0);
  FUN_?(this_02,unaff_RDI);
code_?:
  FUN_?();
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* WorldObjectClientRef Select(Boolean, Boolean, Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_Select
          (SelectionController *this,bool addToSelection,bool showVisuals,int32_t layerMask,
          MethodInfo *method)

{
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    (&VStack_1,(HashSet_1_System_Int32_ *)0x0,layerMask,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pWVar3 = (WorldObjectClientRef *)0x0;
  }
  else {
    VStack_4.point.x = VStack_1.point.x;
    VStack_4.point.y = VStack_1.point.y;
    VStack_4.point.z = VStack_1.point.z;
    VStack_4.normal.x = VStack_1.normal.x;
    VStack_4.normal.y = VStack_1.normal.y;
    VStack_4.normal.z = VStack_1.normal.z;
    VStack_4.cubePos = VStack_1.cubePos;
    VStack_4._30_2_ = VStack_1._30_2_;
    VStack_4.face = VStack_1.face;
    VStack_4.isCubeHit = VStack_1.isCubeHit;
    VStack_4._37_3_ = VStack_1._37_3_;
    VStack_4.woId = VStack_1.woId;
    VStack_4._44_4_ = VStack_1._44_4_;
    VStack_4.cube = VStack_1.cube;
    VStack_4.distance = VStack_1.distance;
    VStack_4._60_4_ = VStack_1._60_4_;
    VStack_4.collider = VStack_1.collider;
    VStack_4.transform = VStack_1.transform;
    VStack_4.interactionFlags = VStack_1.interactionFlags;
    pWVar3 = SelectionController_Select_1
                       (this,&VStack_4,addToSelection,showVisuals,(MethodInfo *)0x0);
  }
  return pWVar3;
}


/* Boolean SelectParent(Boolean) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_SelectParent
               (SelectionController *this,bool showVisuals,MethodInfo *method)

{
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
    iVar1 = FUN_?();
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        if (iVar1 == (pMVar2->fields)._._.id) {
          return 0;
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
          id = FUN_?();
          pWVar3 = SelectionController_SelectWO(this,id,0,showVisuals,(MethodInfo *)0x0);
          return pWVar3 != (WorldObjectClientRef *)0x0;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* WorldObjectClientRef SelectWO(Int32, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_SelectWO
          (SelectionController *this,int32_t id,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                   (pMVar1,id,(MethodInfo *)0x0);
    if (addToSelection == 0) {
      SelectionController_DeSelectAllExcept(this,id,(MethodInfo *)0x0);
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      if ((wo->fields)._.ownerActorNr != 0) {
        iVar2 = (wo->fields)._.ownerActorNr;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
             (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
            (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
           (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0)
           , pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
        if (iVar2 != (pMVar5->fields)._._ActorNr_k__BackingField) {
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Trying_to_select_WO_,pSVar6,
                              StringLiteral__that_is_owned_by_another_acotr,(MethodInfo *)0x0);
          iVar2 = *(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c;
code_?:
          if (iVar2 == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          pWVar7 = MVWorldObjectClientManager::
                    MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
          return pWVar7;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
        iVar2 = FUN_?();
        do {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar3 == (MVGameControllerBase *)0x0) ||
              (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
             (((pMVar4->fields).worldNetwork == (WorldNetwork *)0x0 ||
              (pMVar8 = (((pMVar4->fields).worldNetwork)->fields)._.worldObjectClientManager,
              pMVar8 == (MVWorldObjectClientManagerNetwork *)0x0)))) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (pMVar8->fields)._.worldObjects;
          pOStack_9 = (Object *)0x0;
          if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            pWVar7 = (WorldObjectClientRef *)(*pcVar10)();
            return pWVar7;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,id,&pOStack_9,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (pOStack_9 == (Object *)0x0) goto code_?;
          id = *(int *)((longlong)&pOStack_9[1].klass + 4);
          if (id == -1) {
            if (((wo->fields).interactionFlags & 8) == 0) {
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((this->fields).parentGroups == (Stack_1_System_Int32_ *)0x0)
              goto code_?;
              aIStackX_10[0].m_value = FUN_?();
              str3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_6
                                 (StringLiteral_Trying_to_select_WO_,pSVar6,
                                  StringLiteral__outside_the_parent_group_,str3,(MethodInfo *)0x0);
              iVar2 = *(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c;
              goto code_?;
            }
            break;
          }
        } while (id != iVar2);
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
          iVar2 = FUN_?();
          if (iVar2 != (wo->fields)._.groupId) {
            SelectionController_PushWOParents(this,wo,0,(MethodInfo *)0x0);
          }
          this_02 = (this->fields).selectedIDs;
          if (this_02 != (HashSet_1_System_Int32_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (this_02,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            woID = (wo->fields)._.id;
            this_03 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
              MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                        (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_03,
                         (MethodInfo *)0x0);
              pMVar11 = wo->klass;
              if (showVisuals == 0) {
                (*(pMVar11->vtable).Select.methodPtr)(wo,(pMVar11->vtable).Select.method);
              }
              else {
                pOStack_9 = _UNK_?;
                uStack_12 = _UNK_?;
                (*(pMVar11->vtable).Select_1.methodPtr)(wo,&pOStack_9);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
                pWVar7 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClientRef
                                    (pMVar1,(wo->fields)._.id,(MethodInfo *)0x0);
                return pWVar7;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  pWVar7 = (WorldObjectClientRef *)(*pcVar10)();
  return pWVar7;
}


/* WorldObjectClientRef Select(VoxelHit, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_Select_1
          (SelectionController *this,VoxelHit *hit,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((hit->interactionFlags & 1U) == 0) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                       ((MethodInfo *)0x0);
    return pWVar1;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,hit->woId,(MethodInfo *)0x0);
    uVar3 = hit->interactionFlags;
    if ((uVar3 & 0x10) == 0) {
      if ((pMVar2 == (MVWorldObjectClient *)0x0) ||
         (pSVar4 = (this->fields).parentGroups, pSVar4 == (Stack_1_System_Int32_ *)0x0))
      goto DAT_?;
      cVar5 = FUN_?(pSVar4,(pMVar2->fields)._.groupId);
      if ((cVar5 != '\0') || ((uVar3 & 8) != 0)) {
        iVar6 = (pMVar2->fields)._.id;
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) &&
       (iVar6 = FUN_?(), pMVar2 != (MVWorldObjectClient *)0x0)) {
      iVar6 = MVGroup::MVGroup_GetGroupAbove
                        (iVar6,(pMVar2->fields)._.id,InteractionFlags__Enum_DirectlySelectable,
                         (MethodInfo *)0x0);
      if (iVar6 == -1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Could_not_find_appropriate_group,(MethodInfo *)0x0);
        pWVar1 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        return pWVar1;
      }
code_?:
      pWVar1 = SelectionController_SelectWO(this,iVar6,addToSelection,showVisuals,(MethodInfo *)0x0)
      ;
      return pWVar1;
    }
  }
DAT_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar7)();
  return pWVar1;
}


/* Void WOCM_WorldObjectDestroyedHandler(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::SelectionController::SelectionController_WOCM_WorldObjectDestroyedHandler
               (SelectionController *this,Object *sender,WorldObjectDestroyedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = false;
  if ((e != (WorldObjectDestroyedEventArgs *)0x0) &&
     (pHVar2 = (HashSet_1_System_Int32Enum_ *)(this->fields).selectedIDs,
     pHVar2 != (HashSet_1_System_Int32Enum_ *)0x0)) {
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar2,(e->fields).WordObjectID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar3 != 0) {
      pHVar2 = (HashSet_1_System_Int32Enum_ *)(this->fields).selectedIDs;
      bVar1 = true;
      if (pHVar2 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__Remove
                (pHVar2,(e->fields).WordObjectID,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    }
    pSVar4 = (this->fields).parentGroups;
    if (pSVar4 != (Stack_1_System_Int32_ *)0x0) {
      cVar5 = FUN_?(pSVar4,(e->fields).WordObjectID);
      if (cVar5 == '\0') {
        if (!bVar1) {
          return;
        }
      }
      else {
        do {
          pSVar4 = (this->fields).parentGroups;
          iVar6 = (e->fields).WordObjectID;
          if (pSVar4 == (Stack_1_System_Int32_ *)0x0) goto code_?;
          iVar7 = (pSVar4->fields)._size;
          pIVar8 = (pSVar4->fields)._array;
          if (pIVar8 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar8->max_length <= iVar7 - 1U) {
            uVar9 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__
                                         ->klass->rgctx_data,10);
            FUN_?(pSVar4,uVar9);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          piVar11 = &(pSVar4->fields)._version;
          *piVar11 = *piVar11 + 1;
          (pSVar4->fields)._size = iVar7 - 1U;
          if ((uint)pIVar8->max_length <= iVar7 - 1U) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        } while (iVar6 != pIVar8->vector[(longlong)iVar7 + -1]);
      }
      pEVar12 = (this->fields).SelectedWorldObjectDeleted;
      if (pEVar12 != (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
        (*(pEVar12->fields)._._.invoke_impl)
                  ((pEVar12->fields)._._.method_code,this,e,(pEVar12->fields)._._.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* SelectionController() */

void Assembly-CSharp.dll::SelectionController::SelectionController__ctor
               (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Stack__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Stack<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController____c____ctor_b__19_0_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SelectionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).selectedIDs = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = (Stack_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Stack<int>);
  pIVar8 = (Int32__Array *)
           FUN_?(MethodInfo__System__Collections__Generic__Stack<int>__Stack__->klass->
                         rgctx_data->rgctxDataDummy);
  bVar2 = iRam_? != 0;
  (pSVar7->fields)._array = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pSVar7->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = iRam_? != 0;
  (this->fields).parentGroups = pSVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).parentGroups >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (*(int *)&(TypeInfo__SelectionController____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__SelectionController____c->static_fields->__9__19_0;
  if (this_01 == (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
    if (*(int *)&(TypeInfo__SelectionController____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__SelectionController____c->static_fields->__9;
    this_01 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)
              FUN_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)this_01,(Object *)object,
               MethodInfo__SelectionController____c____ctor_b__19_0_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    TypeInfo__SelectionController____c->static_fields->__9__19_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__SelectionController____c->static_fields->__9__19_0 >>
                     0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  bVar2 = iRam_? != 0;
  (this->fields).SelectedWorldObjectDeleted = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).SelectedWorldObjectDeleted >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Stack_1_System_Int32Enum_ *)(this->fields).parentGroups;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((this_02 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                            (this_02,(MethodInfo *)0x0), pMVar9 != (MVGroup *)0x0)) &&
      (item = (pMVar9->fields)._._.id, this_00 != (Stack_1_System_Int32Enum_ *)0x0)) &&
     (pIVar10 = (this_00->fields)._array, pIVar10 != (Int32Enum__Enum__Array *)0x0)) {
    uVar3 = (this_00->fields)._size;
    if (uVar3 < (uint)pIVar10->max_length) {
      pIVar10->vector[(int)uVar3] = item;
      piVar11 = &(this_00->fields)._version;
      *piVar11 = *piVar11 + 1;
      (this_00->fields)._size = uVar3 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
      Stack_1_System_Int32Enum__PushWithResize
                (this_00,item,
                 MethodInfo__System__Collections__Generic__Stack<int>__Push_int_->klass->rgctx_data
                 [0xc].method);
    }
    return;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void add_SelectedWorldObjectDeleted(EventHandler`1[WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::SelectionController::SelectionController_add_SelectedWorldObjectDeleted
               (SelectionController *this,EventHandler_1_WorldObjectDestroyedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).SelectedWorldObjectDeleted;
  a = (this->fields).SelectedWorldObjectDeleted;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
      if (pEVar4 == (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* MVGroup get_ParentGroup() */

MVGroup * Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroup
                    (SelectionController *this,MethodInfo *method)

{
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
  if (((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) &&
     (id = FUN_?(), this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = (MVGroup *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,id,(MethodInfo *)0x0);
    if (pMVar1 != (MVGroup *)0x0) {
      bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__MVGroup)) {
        FUN_?(pMVar1,TypeInfo__MVGroup);
        pcVar3 = (code *)swi(3);
        pMVar1 = (MVGroup *)(*pcVar3)();
        return pMVar1;
      }
    }
    return pMVar1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVGroup *)(*pcVar3)();
  return pMVar1;
}


/* Int32 get_ParentGroupID() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroupID
                  (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).parentGroups;
  if (pSVar1 == (Stack_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  pIVar4 = (pSVar1->fields)._array;
  if (pIVar4 == (Int32__Array *)0x0) {
    FUN_?(pSVar1,0,pSVar1);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  iVar5 = (pSVar1->fields)._size;
  if (iVar5 - 1U < (uint)pIVar4->max_length) {
    if (iVar5 - 1U < (uint)pIVar4->max_length) {
      return pIVar4->vector[(longlong)iVar5 + -1];
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar6 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Peek__->klass->
                              rgctx_data,10);
  FUN_?(pSVar1,uVar6);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_ParentGroupIsRoot() */

bool Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroupIsRoot
               (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
    iVar1 = FUN_?();
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        return iVar1 == (pMVar2->fields)._._.id;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* HashSet`1[MVWorldObjectClient] get_SelectedWOs() */

HashSet_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::SelectionController::SelectionController_get_SelectedWOs
          (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  pHVar1 = (HashSet_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
  pHVar2 = (this->fields).selectedIDs;
  if (pHVar2 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
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
    iStack_8 = (pHVar2->fields)._version;
    uStack_9 = 0;
    uStack_4._0_4_ = SUB84(pHVar2,0);
    uStack_4._4_4_ = (undefined4)((ulonglong)pHVar2 >> 0x20);
    uStack_10 = (undefined4)uStack_4;
    uStack_11 = uStack_4._4_4_;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_4 = 0;
    puStack_14 = &uStack_10;
    while( true ) {
      cVar15 = FUN_?(&uStack_10,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           );
      if (cVar15 == '\0') {
        return pHVar1;
      }
      key = (int32_t)uStack_13;
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar16 == (MVWorldObjectClientManager *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStackX_8 = (Object *)0x0;
      this_00 = (pMVar16->fields).worldObjects;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pHVar1 == (HashSet_1_MVWorldObjectClient_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__AddIfNotPresent
                ((HashSet_1_System_Object_ *)pHVar1,pOStackX_8,
                 MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 ->klass->rgctx_data[0x15].method);
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  pHVar1 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar17)();
  return pHVar1;
}


/* MVWorldObjectClient get_SingleSelectedWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::SelectionController::SelectionController_get_SingleSelectedWO
          (SelectionController *this,MethodInfo *method)

{
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
  pHVar1 = (this->fields).selectedIDs;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if ((pHVar1->fields)._count != 1) {
      if (0 < (pHVar1->fields)._count) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Trying_to_access_single_selected,(MethodInfo *)0x0);
      }
      return (MVWorldObjectClient *)0x0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    key = System.Core.dll::System::Linq::Enumerable::Enumerable_First
                    ((IEnumerable_1_System_Int32_ *)(this->fields).selectedIDs,
                     int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                    );
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      ,key,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar2->fields).worldObjects;
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
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
      return pMVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar4;
}


/* Void remove_SelectedWorldObjectDeleted(EventHandler`1[WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::SelectionController::SelectionController_remove_SelectedWorldObjectDeleted
               (SelectionController *this,EventHandler_1_WorldObjectDestroyedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).SelectedWorldObjectDeleted;
  source = (this->fields).SelectedWorldObjectDeleted;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
      if (pEVar4 == (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

