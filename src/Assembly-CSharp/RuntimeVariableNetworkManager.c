
/* Void AddRuntimeDataVariables(Int32) */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_AddRuntimeDataVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

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
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      this_02 = (Exception *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_RuntimeDataVariables_allready_ex);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&
                                   MethodInfo__RuntimeVariableNetworkManager__AddRuntimeDataVariables_int_
                                  );
      FUN_?(this_02,uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields).runtimeDataVariables;
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
        uVar8 = FUN_?(1,pvVar7,pIVar6,woID);
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
                  this_03 = (ProtocolViolationException *)func_?(uVar2);
                  pSVar3 = (String *)
                            func_?(&StringLiteral_Operations_that_change_non_concu);
                  System.dll::System::Net::ProtocolViolationException::
                  ProtocolViolationException__ctor_1(this_03,pSVar3,(MethodInfo *)0x0);
                  FUN_?(this_03,pMVar5);
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
                  this_04 = (InvalidEnumArgumentException *)func_?(uVar2);
                  pSVar3 = (String *)
                            func_?(&StringLiteral_HashSet_capacity_is_too_big_);
                  System.dll::System::ComponentModel::InvalidEnumArgumentException::
                  InvalidEnumArgumentException__ctor_1(this_04,pSVar3,(MethodInfo *)0x0);
                  FUN_?(this_04,pMVar5);
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
              pHVar10->vector[(int)uVar12].value = woID;
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


/* Boolean ContainsRuntimeVariables(Int32) */

bool Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_ContainsRuntimeVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
  pHVar2 = (this->fields).runtimeDataVariables;
  if (pHVar2 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((pHVar2->fields)._buckets != (Int32__Array *)0x0) {
    iVar5 = FUN_?(pHVar2,woID,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_->
                           klass->rgctx_data[0x16].rgctxDataDummy);
    pIVar6 = (pHVar2->fields)._buckets;
    pHVar7 = (pHVar2->fields)._slots;
    if (pIVar6 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    uVar8 = iVar5 % (int)pIVar6->max_length;
    if ((uint)pIVar6->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    uVar8 = pIVar6->vector[(int)uVar8] - 1;
    if (-1 < (int)uVar8) {
      iVar9 = 0;
      if (pHVar7 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
      do {
        if ((uint)pHVar7->max_length <= uVar8) goto code_?;
        if (pHVar7->vector[(int)uVar8].hashCode == iVar5) {
          pIVar10 = (pHVar2->fields)._comparer;
          iVar11 = pHVar7->vector[(int)uVar8].value;
          if (pIVar10 == (IEqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          pvVar12 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
            pvVar12 = (void *)FUN_?(pvVar12);
          }
          cVar13 = FUN_?(woID,pvVar12,pIVar10,iVar11,woID);
          if (cVar13 != '\0') {
            return 1;
          }
        }
        if ((int)pHVar7->max_length <= iVar9) {
          uVar14 = func_?(&TypeInfo__System__InvalidOperationException);
          this_00 = (ProtocolViolationException *)func_?(uVar14);
          message = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,pMVar1);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        iVar9 = iVar9 + 1;
        if ((uint)pHVar7->max_length <= uVar8) goto code_?;
        uVar8 = pHVar7->vector[(int)uVar8].next;
      } while (-1 < (int)uVar8);
    }
  }
  return 0;
}


/* Void RemoveRuntimeDataVariables(Int32) */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    pMVar2 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
    if (bVar1 == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_wo_Id_not_found);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__RuntimeVariableNetworkManager__RemoveRuntimeDataVariables_int_
                                  );
      FUN_?(this_01,uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pHVar6 = (this->fields).runtimeDataVariables;
    if (pHVar6 != (HashSet_1_System_Int32_ *)0x0) {
      if ((pHVar6->fields)._buckets != (Int32__Array *)0x0) {
        iVar7 = FUN_?(pHVar6,woID,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_->
                               klass->rgctx_data[0x16].rgctxDataDummy);
        pIVar8 = (pHVar6->fields)._buckets;
        if (pIVar8 == (Int32__Array *)0x0) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pHVar9 = (pHVar6->fields)._slots;
        uVar10 = iVar7 % (int)pIVar8->max_length;
        if ((uint)pIVar8->max_length <= uVar10) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = pIVar8->vector[(int)uVar10] - 1;
        if (-1 < (int)uVar11) {
          iVar12 = 0;
          uVar13 = 0xffffffff;
          if (pHVar9 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          do {
            uVar14 = uVar11;
            if ((uint)pHVar9->max_length <= uVar14) goto code_?;
            if (pHVar9->vector[(int)uVar14].hashCode == iVar7) {
              pIVar15 = (pHVar6->fields)._comparer;
              iVar16 = pHVar9->vector[(int)uVar14].value;
              if (pIVar15 == (IEqualityComparer_1_System_Int32_ *)0x0) goto code_?;
              pvVar17 = pMVar2->klass->rgctx_data[4].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
                pvVar17 = (void *)FUN_?(pvVar17);
              }
              cVar18 = FUN_?(woID,pvVar17,pIVar15,iVar16,woID);
              if (cVar18 != '\0') {
                if ((int)uVar13 < 0) {
                  pIVar8 = (pHVar6->fields)._buckets;
                  if ((uint)pHVar9->max_length <= uVar14) goto code_?;
                  if (pIVar8 == (Int32__Array *)0x0) goto code_?;
                  if ((uint)pIVar8->max_length <= uVar10) goto code_?;
                  pIVar8->vector[(int)uVar10] = pHVar9->vector[(int)uVar14].next + 1;
                }
                else {
                  if (((uint)pHVar9->max_length <= uVar14) || ((uint)pHVar9->max_length <= uVar13))
                  goto code_?;
                  pHVar9->vector[(int)uVar13].next = pHVar9->vector[(int)uVar14].next;
                }
                if (uVar14 < (uint)pHVar9->max_length) {
                  pHVar9->vector[(int)uVar14].hashCode = -1;
                  if (uVar14 < (uint)pHVar9->max_length) {
                    pHVar9->vector[(int)uVar14].next = (pHVar6->fields)._freeList;
                    piVar19 = &(pHVar6->fields)._version;
                    *piVar19 = *piVar19 + 1;
                    iVar7 = (pHVar6->fields)._count + -1;
                    (pHVar6->fields)._count = iVar7;
                    if (iVar7 == 0) {
                      (pHVar6->fields)._lastIndex = 0;
                      uVar14 = 0xffffffff;
                    }
                    (pHVar6->fields)._freeList = uVar14;
                    return;
                  }
                }
                goto code_?;
              }
            }
            if ((int)pHVar9->max_length <= iVar12) {
              uVar3 = func_?(&TypeInfo__System__InvalidOperationException);
              this_02 = (ProtocolViolationException *)func_?(uVar3);
              pSVar4 = (String *)
                        func_?(&StringLiteral_Operations_that_change_non_concu);
              System.dll::System::Net::ProtocolViolationException::
              ProtocolViolationException__ctor_1(this_02,pSVar4,(MethodInfo *)0x0);
              FUN_?(this_02,pMVar2);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = iVar12 + 1;
            if ((uint)pHVar9->max_length <= uVar14) goto code_?;
            uVar11 = pHVar9->vector[(int)uVar14].next;
            uVar13 = uVar14;
          } while (-1 < (int)uVar11);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendRuntimeData() */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_SendRuntimeData
               (RuntimeVariableNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHStack_1 = (HashSet_1_System_Int32_ *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  pHVar5 = (this->fields).runtimeDataVariables;
  if (pHVar5 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
      lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    ppHStack_12 = (HashSet_1_System_Int32_ **)((ulonglong)(uint)(pHVar5->fields)._version << 0x20);
    uStack_13 = 0;
    lStack_14 = (longlong)ppHStack_12;
    uStack_15 = 0;
    uStack_7 = 0;
    ppHStack_12 = &pHStack_16;
    pHStack_16 = pHVar5;
    while (cVar17 = FUN_?(&pHStack_16,
                                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                 ), uVar9 = uStack_15, cVar17 != '\0') {
      key = (int32_t)uStack_15;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar18 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar19 = (pMVar18->fields).game;
      if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
      if (((pMVar19->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar20 = (((pMVar19->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar20 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMStackX_18 = (MVWorldObjectClient *)0x0;
      this_00 = (pMVar20->fields)._.worldObjects;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&pMStackX_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      bVar21 = RuntimeVariableNetworkManager_SendRuntimeData_1(this,pMStackX_18,0,(MethodInfo *)0x0)
      ;
      if (bVar21 != 0) {
        pLVar22 = (this->fields).removeList;
        if (pLVar22 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar22,uVar9 & 0xffffffff,
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    pHVar5 = (HashSet_1_System_Int32_ *)(this->fields).removeList;
    if (pHVar5 != (HashSet_1_System_Int32_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iStack_3 = *(int32_t *)((longlong)&(pHVar5->fields)._slots + 4);
      uStack_13 = 0;
      uStack_2 = 0;
      uStack_4 = 0;
      uStack_7 = 0;
      ppHStack_12 = &pHStack_1;
      pHStack_1 = pHVar5;
      while (pHStack_1 != (HashSet_1_System_Int32_ *)0x0) {
        if ((iStack_3 != *(int32_t *)((longlong)&(pHStack_1->fields)._slots + 4)) ||
           (lVar8 = (longlong)(int)uStack_2, *(uint *)&(pHStack_1->fields)._slots <= uStack_2))
        {
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
               klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (pHStack_1 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          if (iStack_3 != *(int32_t *)((longlong)&(pHStack_1->fields)._slots + 4))
          goto code_?;
          uStack_2 = *(int *)&(pHStack_1->fields)._slots + 1;
          uStack_4 = uStack_4 & 0xffffffff00000000;
          pLVar22 = (this->fields).removeList;
          if (pLVar22 != (List_1_System_Int32_ *)0x0) {
            piVar23 = &(pLVar22->fields)._version;
            *piVar23 = *piVar23 + 1;
            (pLVar22->fields)._size = 0;
            return;
          }
          goto code_?;
        }
        pIVar24 = (pHStack_1->fields)._buckets;
        if (pIVar24 == (Int32__Array *)0x0) goto code_?;
        if ((uint)pIVar24->max_length <= uStack_2) goto code_?;
        uStack_4 = CONCAT44(uStack_4._4_4_,pIVar24->vector[lVar8]);
        uStack_2 = uStack_2 + 1;
        this_01 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
        if (this_01 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__Remove
                  (this_01,pIVar24->vector[lVar8],
                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      }
      goto code_?;
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
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean SendRuntimeData(MVWorldObjectClient, Boolean) */

bool Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_SendRuntimeData_1
               (RuntimeVariableNetworkManager *this,MVWorldObjectClient *wo,bool immediateSend,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_update_world_object__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
    return 1;
  }
  this_00 = (wo->fields).runtimeDataVariables;
  if ((this_00 != (MVRuntimeDataVariables *)0x0) &&
     (value = MVRuntimeDataVariables::MVRuntimeDataVariables_Send
                        (this_00,immediateSend,(MethodInfo *)0x0),
     value != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    if ((value->fields)._count - (value->fields)._freeCount < 1) {
      return 0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    iVar2 = (wo->fields)._.id;
    if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = iVar2;
      value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)method >> 8),2);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar4 = (undefined7)((ulonglong)method_00 >> 8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x16,value_00,(InsertionBehavior__Enum)uVar3,method_00);
        uVar5 = CONCAT71(uVar4,0x46);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x46,(Object *)value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar6 = (pMVar1->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x19),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return 0;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* RuntimeVariableNetworkManager() */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::RuntimeVariableNetworkManager__ctor
               (RuntimeVariableNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).runtimeDataVariables = pHVar1;
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
  pLVar7 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar7,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).removeList = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).removeList >> 0xc);
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
  return;
}

