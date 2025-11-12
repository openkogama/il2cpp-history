
/* Vector3 AdjustMoveVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
          ObjectTransformGizmo_ObjectRestrictions_AdjustMoveVector
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo_ObjectRestrictions *this,
                    Vector3 *moveVector,MethodInfo *method)

{
  fVar1 = moveVector->z;
  fVar2 = moveVector->y;
  __return_storage_ptr__->x = moveVector->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  pBVar3 = (this->fields)._moveAxesMask;
  if (pBVar3 != (Boolean__Array *)0x0) {
    if ((int)pBVar3->max_length != 0) {
      if (pBVar3->vector[0] == 0) {
        __return_storage_ptr__->x = 0.0;
      }
      if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
      if (1 < (uint)pBVar3->max_length) {
        if (pBVar3->vector[1] == 0) {
          __return_storage_ptr__->y = 0.0;
        }
        if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
        if (2 < (uint)pBVar3->max_length) {
          if (pBVar3->vector[2] == 0) {
            __return_storage_ptr__->z = 0.0;
          }
          return __return_storage_ptr__;
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Vector3 AdjustScaleVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
          ObjectTransformGizmo_ObjectRestrictions_AdjustScaleVector
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo_ObjectRestrictions *this,
                    Vector3 *scaleVector,MethodInfo *method)

{
  fVar1 = scaleVector->z;
  fVar2 = scaleVector->y;
  __return_storage_ptr__->x = scaleVector->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  pBVar3 = (this->fields)._scaleAxesMask;
  if (pBVar3 != (Boolean__Array *)0x0) {
    if ((int)pBVar3->max_length != 0) {
      if (pBVar3->vector[0] == 0) {
        __return_storage_ptr__->x = 1.0;
      }
      if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
      if (1 < (uint)pBVar3->max_length) {
        if (pBVar3->vector[1] == 0) {
          __return_storage_ptr__->y = 1.0;
        }
        if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
        if (2 < (uint)pBVar3->max_length) {
          if (pBVar3->vector[2] == 0) {
            __return_storage_ptr__->z = 1.0;
          }
          return __return_storage_ptr__;
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Boolean CanMoveAlongAllAxes() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanMoveAlongAllAxes
               (ObjectTransformGizmo_ObjectRestrictions *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveAxesMask;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((int)pBVar1->max_length != 0) {
    if (pBVar1->vector[0] == 0) {
      return 0;
    }
    if (1 < (uint)pBVar1->max_length) {
      if (pBVar1->vector[1] == 0) {
        return 0;
      }
      if (2 < (uint)pBVar1->max_length) {
        return pBVar1->vector[2] != 0;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean CanMoveAlongAxis(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanMoveAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveAxesMask;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    return pBVar1->vector[axisIndex] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean CanScaleAlongAllAxes() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanScaleAlongAllAxes
               (ObjectTransformGizmo_ObjectRestrictions *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._scaleAxesMask;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((int)pBVar1->max_length != 0) {
    if (pBVar1->vector[0] == 0) {
      return 0;
    }
    if (1 < (uint)pBVar1->max_length) {
      if (pBVar1->vector[1] == 0) {
        return 0;
      }
      if (2 < (uint)pBVar1->max_length) {
        return pBVar1->vector[2] != 0;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean CanScaleAlongAxis(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanScaleAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._scaleAxesMask;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    return pBVar1->vector[axisIndex] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsAffectedByHandle(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_IsAffectedByHandle
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields)._handleMask;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,handleId,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    return bVar1 ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void SetCanMoveAlongAxis(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_SetCanMoveAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,bool canMove,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._moveAxesMask;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    pBVar1->vector[axisIndex] = canMove;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCanScaleAlongAxis(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_SetCanScaleAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,bool canScale,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._scaleAxesMask;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    pBVar1->vector[axisIndex] = canScale;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetIsAffectedByHandle(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_SetIsAffectedByHandle
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t handleId,bool isAffected,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
  this_00 = (this->fields)._handleMask;
  if (this_00 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (isAffected != 0) {
    if ((this_00->fields)._buckets != (Int32__Array *)0x0) {
      iVar3 = FUN_?(this_00,handleId,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_->
                             klass->rgctx_data[0x16].rgctxDataDummy);
      pIVar4 = (this_00->fields)._buckets;
      if (pIVar4 == (Int32__Array *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pHVar5 = (this_00->fields)._slots;
      uVar6 = iVar3 % (int)pIVar4->max_length;
      if ((uint)pIVar4->max_length <= uVar6) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = pIVar4->vector[(int)uVar6] - 1;
      if (-1 < (int)uVar7) {
        iVar8 = 0;
        uVar9 = 0xffffffff;
        if (pHVar5 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
        do {
          uVar10 = uVar7;
          if ((uint)pHVar5->max_length <= uVar10) goto code_?;
          if (pHVar5->vector[(int)uVar10].hashCode == iVar3) {
            pIVar11 = (this_00->fields)._comparer;
            iVar12 = pHVar5->vector[(int)uVar10].value;
            if (pIVar11 == (IEqualityComparer_1_System_Int32_ *)0x0) goto code_?;
            pvVar13 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
              pvVar13 = (void *)FUN_?(pvVar13);
            }
            cVar14 = FUN_?(handleId,pvVar13,pIVar11,iVar12,handleId);
            if (cVar14 != '\0') {
              if ((int)uVar9 < 0) {
                pIVar4 = (this_00->fields)._buckets;
                if ((uint)pHVar5->max_length <= uVar10) goto code_?;
                if (pIVar4 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar4->max_length <= uVar6) goto code_?;
                pIVar4->vector[(int)uVar6] = pHVar5->vector[(int)uVar10].next + 1;
              }
              else {
                if (((uint)pHVar5->max_length <= uVar10) || ((uint)pHVar5->max_length <= uVar9))
                goto code_?;
                pHVar5->vector[(int)uVar9].next = pHVar5->vector[(int)uVar10].next;
              }
              if (uVar10 < (uint)pHVar5->max_length) {
                pHVar5->vector[(int)uVar10].hashCode = -1;
                if (uVar10 < (uint)pHVar5->max_length) {
                  pHVar5->vector[(int)uVar10].next = (this_00->fields)._freeList;
                  piVar15 = &(this_00->fields)._version;
                  *piVar15 = *piVar15 + 1;
                  iVar3 = (this_00->fields)._count + -1;
                  (this_00->fields)._count = iVar3;
                  if (iVar3 == 0) {
                    (this_00->fields)._lastIndex = 0;
                    uVar10 = 0xffffffff;
                  }
                  (this_00->fields)._freeList = uVar10;
                  return;
                }
              }
              goto code_?;
            }
          }
          if ((int)pHVar5->max_length <= iVar8) {
            uVar16 = func_?(&TypeInfo__System__InvalidOperationException);
            pPVar17 = (ProtocolViolationException *)func_?(uVar16);
            pSVar18 = (String *)func_?(&StringLiteral_Operations_that_change_non_concu)
            ;
            System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                      (pPVar17,pSVar18,(MethodInfo *)0x0);
            FUN_?(pPVar17,pMVar1);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = iVar8 + 1;
          if ((uint)pHVar5->max_length <= uVar10) goto code_?;
          uVar7 = pHVar5->vector[(int)uVar10].next;
          uVar9 = uVar10;
        } while (-1 < (int)uVar7);
      }
    }
    return;
  }
  pMVar1 = MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data[0x15]
           .method;
  if ((this_00->fields)._buckets == (Int32__Array *)0x0) {
    FUN_?(this_00,0,pMVar1->klass->rgctx_data[0xe].rgctxDataDummy);
  }
  pIVar11 = (this_00->fields)._comparer;
  if (pIVar11 != (IEqualityComparer_1_System_Int32_ *)0x0) {
    pvVar13 = (pMVar1->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
      pvVar13 = (void *)FUN_?(pvVar13);
    }
    uVar6 = FUN_?(1,pvVar13,pIVar11,handleId);
    pIVar4 = (this_00->fields)._buckets;
    uVar6 = uVar6 & 0x7fffffff;
    if (pIVar4 != (Int32__Array *)0x0) {
      pHVar5 = (this_00->fields)._slots;
      uVar7 = (int)uVar6 % (int)pIVar4->max_length;
      if (uVar7 < (uint)pIVar4->max_length) {
        uVar9 = pIVar4->vector[(int)uVar7] - 1;
        if (-1 < (int)uVar9) {
          iVar3 = 0;
          if (pHVar5 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          do {
            if ((uint)pHVar5->max_length <= uVar9) goto code_?;
            if (pHVar5->vector[(int)uVar9].hashCode == uVar6) {
              if ((this_00->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0)
              goto code_?;
              pvVar13 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
                FUN_?(pvVar13);
              }
              cVar14 = FUN_?();
              if (cVar14 != '\0') {
                return;
              }
            }
            if ((int)pHVar5->max_length <= iVar3) {
              uVar16 = func_?(&TypeInfo__System__InvalidOperationException);
              pPVar17 = (ProtocolViolationException *)func_?(uVar16);
              pSVar18 = (String *)
                        func_?(&StringLiteral_Operations_that_change_non_concu);
              System.dll::System::Net::ProtocolViolationException::
              ProtocolViolationException__ctor_1(pPVar17,pSVar18,(MethodInfo *)0x0);
              FUN_?(pPVar17,pMVar1);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar3 = iVar3 + 1;
            if ((uint)pHVar5->max_length <= uVar9) goto code_?;
            uVar9 = pHVar5->vector[(int)uVar9].next;
          } while (-1 < (int)uVar9);
        }
        if ((this_00->fields)._freeList < 0) {
          if (pHVar5 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          if ((this_00->fields)._lastIndex == (int)pHVar5->max_length) {
            pMVar1 = pMVar1->klass->rgctx_data[0x2b].method;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Collections__HashHelpers);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar12 = (this_00->fields)._count;
            if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
              FUN_?();
            }
            iVar12 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                              (iVar12,(MethodInfo *)0x0);
            if (iVar12 <= (this_00->fields)._count) {
              uVar16 = func_?(&TypeInfo__System__ArgumentException);
              this_01 = (InvalidEnumArgumentException *)func_?(uVar16);
              pSVar18 = (String *)func_?(&StringLiteral_HashSet_capacity_is_too_big_);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_01,pSVar18,(MethodInfo *)0x0);
              FUN_?(this_01,pMVar1);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__SetCapacity
                      (this_00,iVar12,pMVar1->klass->rgctx_data[0x2a].method);
            pIVar4 = (this_00->fields)._buckets;
            pHVar5 = (this_00->fields)._slots;
            if (pIVar4 == (Int32__Array *)0x0) goto code_?;
            uVar7 = (int)uVar6 % (int)pIVar4->max_length;
          }
          uVar9 = (this_00->fields)._lastIndex;
          piVar15 = &(this_00->fields)._lastIndex;
          *piVar15 = *piVar15 + 1;
          if (pHVar5 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
        }
        else {
          uVar9 = (this_00->fields)._freeList;
          if (pHVar5 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
          if ((uint)pHVar5->max_length <= uVar9) goto code_?;
          (this_00->fields)._freeList = pHVar5->vector[(int)uVar9].next;
        }
        if ((uVar9 < (uint)pHVar5->max_length) &&
           (pHVar5->vector[(int)uVar9].hashCode = uVar6, uVar9 < (uint)pHVar5->max_length)) {
          pHVar5->vector[(int)uVar9].value = handleId;
          pIVar4 = (this_00->fields)._buckets;
          if (pIVar4 == (Int32__Array *)0x0) goto code_?;
          if ((uVar7 < (uint)pIVar4->max_length) && (uVar9 < (uint)pHVar5->max_length)) {
            pHVar5->vector[(int)uVar9].next = pIVar4->vector[(int)uVar7] + -1;
            pIVar4 = (this_00->fields)._buckets;
            if (pIVar4 == (Int32__Array *)0x0) goto code_?;
            if (uVar7 < (uint)pIVar4->max_length) {
              pIVar4->vector[(int)uVar7] = uVar9 + 1;
              piVar15 = &(this_00->fields)._count;
              *piVar15 = *piVar15 + 1;
              piVar15 = &(this_00->fields)._version;
              *piVar15 = *piVar15 + 1;
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ObjectTransformGizmo+ObjectRestrictions() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions__ctor
               (ObjectTransformGizmo_ObjectRestrictions *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&_75C8FD04AD916AEC3E3D5CB76A452B116B3D4D0912A0A485E9FB8E3D240E210C_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __75C8FD04AD916AEC3E3D5CB76A452B116B3D4D0912A0A485E9FB8E3D240E210C_Field,
             (MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._moveAxesMask = pBVar1;
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
  pBVar1 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __75C8FD04AD916AEC3E3D5CB76A452B116B3D4D0912A0A485E9FB8E3D240E210C_Field,
             (MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._scaleAxesMask = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._scaleAxesMask >> 0xc);
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
  pHVar7 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar7,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields)._handleMask = pHVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._handleMask >> 0xc);
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

