
/* Void AddLogicObjectToUpdate(Int32, IInputSignalReceiver) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
               (LogicObjectManager *this,int32_t worldObjectID,
               IInputSignalReceiver *logicWorldObject,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
                  ,CONCAT44(in_register_00000014,worldObjectID),logicWorldObject,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              (this_00,worldObjectID,(Object *)logicWorldObject,CONCAT31((int3)((uint)uVar1 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
                ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ClearDebugIds() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ClearDebugIds
               (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).updatedIds;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if (0 < (pHVar1->fields)._lastIndex) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar1->fields)._slots,0,(pHVar1->fields)._lastIndex,(MethodInfo *)0x0);
      pIVar2 = (pHVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pHVar1->fields)._freeList = -1;
      (pHVar1->fields)._count = 0;
      (pHVar1->fields)._lastIndex = 0;
    }
    piVar3 = &(pHVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DebugAddId(Int32) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_DebugAddId
               (LogicObjectManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).updatedIds;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      this_04 = (Exception *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Id_already_evaluated__This_is_a_);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_04,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__LogicObjectManager__DebugAddId_int_);
      FUN_?(this_04,uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields).updatedIds;
    if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
      pMVar5 = MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method;
      if ((this_01->fields)._buckets == (Int32__Array *)0x0) {
        FUN_?(this_01,0,pMVar5->klass->rgctx_data[0xe].rgctxDataDummy);
      }
      pIVar6 = (this_01->fields)._comparer;
      if (pIVar6 != (IEqualityComparer_1_System_Int32_ *)0x0) {
        pvVar7 = (pMVar5->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
          pvVar7 = (void *)FUN_?(pvVar7);
        }
        uVar8 = FUN_?(1,pvVar7,pIVar6,id);
        pIVar9 = (this_01->fields)._buckets;
        uVar8 = uVar8 & 0x7fffffff;
        if (pIVar9 != (Int32__Array *)0x0) {
          pHVar10 = (this_01->fields)._slots;
          uVar11 = (int)uVar8 % (int)pIVar9->max_length;
          if (uVar11 < (uint)pIVar9->max_length) {
            uVar12 = pIVar9->vector[(int)uVar11] - 1;
            if (-1 < (int)uVar12) {
              iVar13 = 0;
              if (pHVar10 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
              goto code_?;
              do {
                if ((uint)pHVar10->max_length <= uVar12) goto code_?;
                if (pHVar10->vector[(int)uVar12].hashCode == uVar8) {
                  if ((this_01->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0)
                  goto code_?;
                  pvVar7 = pMVar5->klass->rgctx_data[4].rgctxDataDummy;
                  if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
                    FUN_?(pvVar7);
                  }
                  cVar14 = FUN_?();
                  if (cVar14 != '\0') {
                    return;
                  }
                }
                if ((int)pHVar10->max_length <= iVar13) {
                  uVar2 = func_?(&TypeInfo__System__InvalidOperationException);
                  this_02 = (ProtocolViolationException *)func_?(uVar2);
                  pSVar3 = (String *)
                            func_?(&StringLiteral_Operations_that_change_non_concu);
                  System.dll::System::Net::ProtocolViolationException::
                  ProtocolViolationException__ctor_1(this_02,pSVar3,(MethodInfo *)0x0);
                  FUN_?(this_02,pMVar5);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar13 = iVar13 + 1;
                if ((uint)pHVar10->max_length <= uVar12) goto code_?;
                uVar12 = pHVar10->vector[(int)uVar12].next;
              } while (-1 < (int)uVar12);
            }
            if ((this_01->fields)._freeList < 0) {
              if (pHVar10 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
              goto code_?;
              if ((this_01->fields)._lastIndex == (int)pHVar10->max_length) {
                pMVar5 = pMVar5->klass->rgctx_data[0x2b].method;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Collections__HashHelpers);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                iVar15 = (this_01->fields)._count;
                if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
                  FUN_?();
                }
                iVar15 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                                  (iVar15,(MethodInfo *)0x0);
                if (iVar15 <= (this_01->fields)._count) {
                  uVar2 = func_?(&TypeInfo__System__ArgumentException);
                  this_03 = (InvalidEnumArgumentException *)func_?(uVar2);
                  pSVar3 = (String *)
                            func_?(&StringLiteral_HashSet_capacity_is_too_big_);
                  System.dll::System::ComponentModel::InvalidEnumArgumentException::
                  InvalidEnumArgumentException__ctor_1(this_03,pSVar3,(MethodInfo *)0x0);
                  FUN_?(this_03,pMVar5);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__SetCapacity
                          (this_01,iVar15,pMVar5->klass->rgctx_data[0x2a].method);
                pIVar9 = (this_01->fields)._buckets;
                pHVar10 = (this_01->fields)._slots;
                if (pIVar9 == (Int32__Array *)0x0) goto code_?;
                uVar11 = (int)uVar8 % (int)pIVar9->max_length;
              }
              uVar12 = (this_01->fields)._lastIndex;
              piVar16 = &(this_01->fields)._lastIndex;
              *piVar16 = *piVar16 + 1;
              if (pHVar10 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
              goto code_?;
            }
            else {
              uVar12 = (this_01->fields)._freeList;
              if (pHVar10 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
              goto code_?;
              if ((uint)pHVar10->max_length <= uVar12) goto code_?;
              (this_01->fields)._freeList = pHVar10->vector[(int)uVar12].next;
            }
            if ((uVar12 < (uint)pHVar10->max_length) &&
               (pHVar10->vector[(int)uVar12].hashCode = uVar8, uVar12 < (uint)pHVar10->max_length))
            {
              pHVar10->vector[(int)uVar12].value = id;
              pIVar9 = (this_01->fields)._buckets;
              if (pIVar9 == (Int32__Array *)0x0) goto code_?;
              if ((uVar11 < (uint)pIVar9->max_length) && (uVar12 < (uint)pHVar10->max_length)) {
                pHVar10->vector[(int)uVar12].next = pIVar9->vector[(int)uVar11] + -1;
                pIVar9 = (this_01->fields)._buckets;
                if (pIVar9 == (Int32__Array *)0x0) goto code_?;
                if (uVar11 < (uint)pIVar9->max_length) {
                  pIVar9->vector[(int)uVar11] = uVar12 + 1;
                  piVar16 = &(this_01->fields)._count;
                  *piVar16 = *piVar16 + 1;
                  piVar16 = &(this_01->fields)._version;
                  *piVar16 = *piVar16 + 1;
                  return;
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean DoesLinkExist(MVWorldObject, Int32) */

bool MVWorldObject.dll::LogicObjectManager::LogicObjectManager_DoesLinkExist
               (MVWorldObject *outputWo,int32_t inputWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((outputWo == (MVWorldObject *)0x0) ||
     (pLVar1 = (outputWo->fields).outputLinkRefs, pLVar1 == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
  }
  else {
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
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar10 == 0) {
        return 0;
      }
      if (LStack_9._current == (Object *)0x0) break;
      if (*(int *)&LStack_9._current[1].monitor == inputWOID) {
        return 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Void RemoveLogicObjectFromUpdate(Int32) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
               (LogicObjectManager *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      this_01 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).logicWorldObjects;
      if (this_01 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                (this_01,worldObjectID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Reset
               (LogicObjectManager *this,MethodInfo *method)

{
  (this->fields)._TimeStamp_k__BackingField = 0;
  return;
}


/* Int32 ResetChunk(Int32, IWorldObjectManager) */

int32_t MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                  (int32_t woID,IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  LogicObjectManager_ResetNode(woID,resetNodes,worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return (resetNodes->fields)._count;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Void ResetNode(Int32, HashSet`1[System.Int32], IWorldObjectManager) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
               (int32_t woID,HashSet_1_System_Int32_ *resetNodes,
               IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogicWorldObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      ((HashSet_1_System_Int32Enum_ *)resetNodes,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) {
      return;
    }
    if ((worldObjectManager != (IWorldObjectManager *)0x0) &&
       (plVar2 = (longlong *)FUN_?(), pIVar3 = TypeInfo__ILogicWorldObject,
       plVar2 != (longlong *)0x0)) {
      lVar4 = FUN_?(plVar2,TypeInfo__ILogicWorldObject);
      pIVar5 = TypeInfo__ILogicWorldObject;
      if (lVar4 == 0) {
        FUN_?(plVar2,pIVar3);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = FUN_?(plVar2,TypeInfo__ILogicWorldObject);
      if (lVar4 == 0) {
        FUN_?(plVar2,pIVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = FUN_?(0,TypeInfo__ILogicWorldObject,lVar4);
      if (lVar4 != 0) {
        FUN_?(3,TypeInfo__IInputSignalReceiver,lVar4);
        (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__AddIfNotPresent
                  (resetNodes,woID,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                   rgctx_data[0x15].method);
        pLVar7 = (List_1_System_Object_ *)plVar2[5];
        if (pLVar7 != (List_1_System_Object_ *)0x0) {
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
            lVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar11 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)(pLVar7->fields)._version << 0x20);
          uStack_14 = 0;
          LStack_15._8_8_ = pLStack_13;
          LStack_15._current = (Object *)0x0;
          uStack_9 = 0;
          pLStack_13 = &LStack_15;
          LStack_15._list = pLVar7;
          while (bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_15,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                   ), bVar1 != 0) {
            if (LStack_15._current == (Object *)0x0) {
              FUN_?();
              FUN_?();
              goto code_?;
            }
            LogicObjectManager_ResetNode
                      (*(int32_t *)((longlong)&LStack_15._current[1].klass + 4),resetNodes,
                       worldObjectManager,(MethodInfo *)0x0);
          }
          pLVar7 = (List_1_System_Object_ *)plVar2[4];
          if (pLVar7 != (List_1_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
              lVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar11 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar12 = uVar10 == *puVar11;
                if (bVar12) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar12);
            }
            pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                         ((ulonglong)(uint)(pLVar7->fields)._version << 0x20);
            uStack_14 = 0;
            LStack_15._8_8_ = pLStack_13;
            LStack_15._current = (Object *)0x0;
            uStack_9 = 0;
            pLStack_13 = &LStack_15;
            LStack_15._list = pLVar7;
            while( true ) {
              bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_15,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                );
              if (bVar1 == 0) {
                return;
              }
              if (LStack_15._current == (Object *)0x0) break;
              LogicObjectManager_ResetNode
                        (*(int32_t *)&LStack_15._current[1].monitor,resetNodes,worldObjectManager,
                         (MethodInfo *)0x0);
            }
code_?:
            FUN_?();
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ToString
                   (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_logicWorldObjects_Count__0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields).logicWorldObjects;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             TypeConverterRegistry+ConverterKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                       );
    if ((pDVar2 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0) &&
       (pDVar1 = (pDVar2->fields)._dictionary,
       pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      aiStackX_8[0] = (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
      arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
      pSVar3 = StringLiteral_logicWorldObjects_Count__0__;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,arg0,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* Void Update() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update
               (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).logicWorldObjects;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                             ),
        pDVar1 ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar2 = uStack_3;
code_?:
    uStack_3 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_4 = (pDVar1->fields)._dictionary;
    puStack_5 = (undefined4 *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (uStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iStack_11 = (uStack_4->fields)._version;
    uStack_6 = 0;
    uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
    uStack_12 = (undefined4)uStack_4;
    uStack_13 = uStack_4._4_4_;
    uStack_3 = 0;
    plStack_14 = (longlong *)0x0;
    uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_5 = &uStack_12;
    while (lVar15 = CONCAT44(uStack_13,uStack_12), lVar15 != 0) {
      if (iStack_11 != *(int *)(lVar15 + 0x2c)) goto code_?;
      do {
        if (lVar15 == 0) goto code_?;
        if (*(uint *)(lVar15 + 0x20) <= uStack_3) {
          uStack_3 = *(int *)(lVar15 + 0x20) + 1;
          plStack_14 = (longlong *)0x0;
          piVar16 = &(this->fields)._TimeStamp_k__BackingField;
          *piVar16 = *piVar16 + 100;
          if ((this->fields).trackLoops != 0) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pHVar17 = (this->fields).updatedIds;
            if (pHVar17 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            if (0 < (pHVar17->fields)._lastIndex) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pHVar17->fields)._slots,0,(pHVar17->fields)._lastIndex,
                         (MethodInfo *)0x0);
              pIVar18 = (pHVar17->fields)._buckets;
              if (pIVar18 == (Int32__Array *)0x0) goto code_?;
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pHVar17->fields)._buckets,0,(int32_t)pIVar18->max_length,
                         (MethodInfo *)0x0);
              (pHVar17->fields)._count = 0;
              (pHVar17->fields)._lastIndex = 0;
              (pHVar17->fields)._freeList = -1;
            }
            piVar16 = &(pHVar17->fields)._version;
            *piVar16 = *piVar16 + 1;
          }
          return;
        }
        lVar19 = *(longlong *)(lVar15 + 0x18);
        lVar20 = (longlong)(int)uStack_3;
        uVar2 = uStack_3 + 1;
        if (lVar19 == 0) goto code_?;
        bVar21 = *(uint *)(lVar19 + 0x18) <= uStack_3;
        uStack_3 = uVar2;
        if (bVar21) goto code_?;
      } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
      plStack_14 = *(longlong **)(lVar19 + (lVar20 + 2) * 0x18);
      func_?();
      plVar22 = plStack_14;
      if (plStack_14 == (longlong *)0x0) goto code_?;
      lVar15 = *plStack_14;
      uVar23 = 0;
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar24 = uVar23;
        do {
          if (*(IInputSignalReceiver__Class **)
               (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar24 * 0x10) ==
              TypeInfo__IInputSignalReceiver) {
            puVar25 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar24 * 0x10) + 2) *
                       0x10 + 0x138 + lVar15);
            goto code_?;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar25 = (undefined8 *)FUN_?(plStack_14,TypeInfo__IInputSignalReceiver,2);
code_?:
      uVar26 = (*(code *)*puVar25)(plVar22,puVar25[1]);
      if (plVar22 == (longlong *)0x0) goto code_?;
      lVar15 = *plVar22;
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        do {
          if (*(IInputSignalReceiver__Class **)
               (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
              TypeInfo__IInputSignalReceiver) {
            puVar25 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10) * 0x10 +
                       0x138 + lVar15);
            goto code_?;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar25 = (undefined8 *)FUN_?(plVar22,TypeInfo__IInputSignalReceiver,0);
code_?:
      (*(code *)*puVar25)(plVar22,uVar26,puVar25[1]);
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* LogicObjectManager+ValidateLinkStatus ValidateLink(Int32, Int32, IWorldObjectManager, Boolean,
   LogicObjectManager+ReportSeverity ByRef) */

LogicObjectManager_ValidateLinkStatus__Enum
MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink
          (int32_t linkOutputWoId,int32_t linkInputWoId,IWorldObjectManager *worldObjectManager,
          bool validateLoops,LogicObjectManager_ReportSeverity__Enum *reportSeverity,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linkInputWoId < 1) {
    *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
    LVar1 = LogicObjectManager_ValidateLinkStatus__Enum_InputObjectIdIsZeroOrLess;
  }
  else if (linkOutputWoId < 1) {
    *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
    LVar1 = LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectIdIsZeroOrLess;
  }
  else {
    if (worldObjectManager == (IWorldObjectManager *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      LVar1 = (*pcVar2)();
      return LVar1;
    }
    cVar3 = FUN_?();
    cVar4 = FUN_?();
    if (cVar3 == '\0') {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
      if (cVar4 == '\0') {
        LVar1 = LogicObjectManager_ValidateLinkStatus__Enum_BothInputAndOutputIsNull;
      }
      else {
        LVar1 = LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectIsNull;
      }
    }
    else {
      if (cVar4 != '\0') goto code_?;
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
      LVar1 = LogicObjectManager_ValidateLinkStatus__Enum_InputObjectIsNull;
    }
  }
  return LVar1;
}


/* Void ValidateLink(Int32, Int32, IWorldObjectManager, Boolean ByRef) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink_1
               (int32_t woIdFrom,int32_t woIdTo,IWorldObjectManager *worldObjectManager,
               bool *loopDetected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (woIdFrom == woIdTo) {
    *loopDetected = 1;
  }
  else {
    if (((worldObjectManager == (IWorldObjectManager *)0x0) || (lVar1 = FUN_?(), lVar1 == 0)
        ) || (LStack_2._list = *(List_1_System_Object_ **)(lVar1 + 0x20),
             LStack_2._list == (List_1_System_Object_ *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)((LStack_2._list)->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_2._8_8_ = pLStack_9;
    LStack_2._current = (Object *)0x0;
    uStack_5 = 0;
    pLStack_9 = &LStack_2;
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_2,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar11 == 0) {
        return;
      }
      if (LStack_2._current == (Object *)0x0) {
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LogicObjectManager_ValidateLink_1
                (woIdFrom,*(int32_t *)&LStack_2._current[1].monitor,worldObjectManager,loopDetected
                 ,(MethodInfo *)0x0);
    } while (*loopDetected == 0);
  }
  return;
}


/* LogicObjectManager+ValidateObjectLinkStatus ValidateObjectLink(ObjectLink, IWorldObjectManager,
   LogicObjectManager+ReportSeverity ByRef) */

LogicObjectManager_ValidateObjectLinkStatus__Enum
MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateObjectLink
          (ObjectLink *objectLink,IWorldObjectManager *worldObjectManager,
          LogicObjectManager_ReportSeverity__Enum *reportSeverity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (objectLink != (ObjectLink *)0x0) {
    if ((objectLink->fields).objectConnectorWOID < 1) {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
      return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorWOIDIsZeroOrLess;
    }
    if ((objectLink->fields).objectWOID < 1) {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
      return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWOIDIsZeroOrLess;
    }
    if (worldObjectManager != (IWorldObjectManager *)0x0) {
      cVar1 = FUN_?();
      cVar2 = FUN_?();
      if (cVar1 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        if (cVar2 != '\0') {
          return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnector;
        }
        return 
        LogicObjectManager_ValidateObjectLinkStatus__Enum_BothObjectConnectorAndObjectWOIsNull;
      }
      if (cVar2 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWO;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  LVar4 = (*pcVar3)();
  return LVar4;
}


/* LogicObjectManager(Int32, Boolean) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager__ctor
               (LogicObjectManager *this,int32_t timeStamp,bool trackLoops,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).logicWorldObjects = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  pHVar6 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar6,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields).updatedIds = pHVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).updatedIds >> 0xc);
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
  (this->fields)._TimeStamp_k__BackingField = timeStamp;
  (this->fields).trackLoops = trackLoops;
  return;
}

