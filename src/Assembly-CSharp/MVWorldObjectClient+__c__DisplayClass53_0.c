
/* Void <get_WorldIDsRecursive>b__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClient+<>c__DisplayClass53_0::
     MVWorldObjectClient_c_DisplayClass53_0__get_WorldIDsRecursive_b__0
               (MVWorldObjectClient_c_DisplayClass53_0 *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (this_00 = (this->fields).childIDs, this_00 == (HashSet_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (wo->fields)._.id;
  pMVar3 = MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data[0x15]
           .method;
  if ((this_00->fields)._buckets == (Int32__Array *)0x0) {
    FUN_?(this_00,0,pMVar3->klass->rgctx_data[0xe].rgctxDataDummy);
  }
  pIVar4 = (this_00->fields)._comparer;
  if (pIVar4 != (IEqualityComparer_1_System_Int32_ *)0x0) {
    pvVar5 = (pMVar3->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    uVar6 = FUN_?(1,pvVar5,pIVar4,iVar2);
    pIVar7 = (this_00->fields)._buckets;
    uVar6 = uVar6 & 0x7fffffff;
    if (pIVar7 != (Int32__Array *)0x0) {
      pHVar8 = (this_00->fields)._slots;
      uVar9 = (int)uVar6 % (int)pIVar7->max_length;
      if (uVar9 < (uint)pIVar7->max_length) {
        uVar10 = pIVar7->vector[(int)uVar9] - 1;
        if (-1 < (int)uVar10) {
          iVar11 = 0;
          if (pHVar8 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          do {
            if ((uint)pHVar8->max_length <= uVar10) goto code_?;
            if (pHVar8->vector[(int)uVar10].hashCode == uVar6) {
              if ((this_00->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0)
              goto code_?;
              pvVar5 = pMVar3->klass->rgctx_data[4].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
                FUN_?(pvVar5);
              }
              cVar12 = FUN_?();
              if (cVar12 != '\0') {
                return;
              }
            }
            if ((int)pHVar8->max_length <= iVar11) {
              uVar13 = func_?(&TypeInfo__System__InvalidOperationException);
              this_01 = (ProtocolViolationException *)func_?(uVar13);
              pSVar14 = (String *)
                        func_?(&StringLiteral_Operations_that_change_non_concu);
              System.dll::System::Net::ProtocolViolationException::
              ProtocolViolationException__ctor_1(this_01,pSVar14,(MethodInfo *)0x0);
              FUN_?(this_01,pMVar3);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar11 = iVar11 + 1;
            if ((uint)pHVar8->max_length <= uVar10) goto code_?;
            uVar10 = pHVar8->vector[(int)uVar10].next;
          } while (-1 < (int)uVar10);
        }
        if ((this_00->fields)._freeList < 0) {
          if (pHVar8 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          if ((this_00->fields)._lastIndex == (int)pHVar8->max_length) {
            pMVar3 = pMVar3->klass->rgctx_data[0x2b].method;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Collections__HashHelpers);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar15 = (this_00->fields)._count;
            if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
              FUN_?();
            }
            iVar15 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                              (iVar15,(MethodInfo *)0x0);
            if (iVar15 <= (this_00->fields)._count) {
              uVar13 = func_?(&TypeInfo__System__ArgumentException);
              this_02 = (InvalidEnumArgumentException *)func_?(uVar13);
              pSVar14 = (String *)func_?(&StringLiteral_HashSet_capacity_is_too_big_);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_02,pSVar14,(MethodInfo *)0x0);
              FUN_?(this_02,pMVar3);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__SetCapacity
                      (this_00,iVar15,pMVar3->klass->rgctx_data[0x2a].method);
            pIVar7 = (this_00->fields)._buckets;
            pHVar8 = (this_00->fields)._slots;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            uVar9 = (int)uVar6 % (int)pIVar7->max_length;
          }
          uVar10 = (this_00->fields)._lastIndex;
          piVar16 = &(this_00->fields)._lastIndex;
          *piVar16 = *piVar16 + 1;
          if (pHVar8 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
        }
        else {
          uVar10 = (this_00->fields)._freeList;
          if (pHVar8 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          if ((uint)pHVar8->max_length <= uVar10) goto code_?;
          (this_00->fields)._freeList = pHVar8->vector[(int)uVar10].next;
        }
        if ((uVar10 < (uint)pHVar8->max_length) &&
           (pHVar8->vector[(int)uVar10].hashCode = uVar6, uVar10 < (uint)pHVar8->max_length)) {
          pHVar8->vector[(int)uVar10].value = iVar2;
          pIVar7 = (this_00->fields)._buckets;
          if (pIVar7 == (Int32__Array *)0x0) goto code_?;
          if ((uVar9 < (uint)pIVar7->max_length) && (uVar10 < (uint)pHVar8->max_length)) {
            pHVar8->vector[(int)uVar10].next = pIVar7->vector[(int)uVar9] + -1;
            pIVar7 = (this_00->fields)._buckets;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            if (uVar9 < (uint)pIVar7->max_length) {
              pIVar7->vector[(int)uVar9] = uVar10 + 1;
              piVar16 = &(this_00->fields)._count;
              *piVar16 = *piVar16 + 1;
              piVar16 = &(this_00->fields)._version;
              *piVar16 = *piVar16 + 1;
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

