
/* Single AddDamageToCube(Single, IntVector) */

float Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
      RuntimeEventManager_AccumulatedCubeDamages_AddDamageToCube
                (RuntimeEventManager_AccumulatedCubeDamages *this,float damage,IntVector *position,
                MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage,
                  in_RDX,position,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).accumulatedCubeDamages;
  if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) {
    IStackX_8.x = position->x;
    IStackX_8.y = position->y;
    IStackX_8.z = position->z;
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (iVar3 < 0) {
      pDVar2 = (this->fields).accumulatedCubeDamages;
      pOVar4 = (Object *)
               FUN_?(
                            TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage
                            );
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        fVar7 = (float)(*pcVar5)();
        return fVar7;
      }
      pcRam_? = pcVar5;
      uVar8 = (*pcRam_?)();
      *(undefined4 *)&pOVar4[1].klass = uVar8;
      if (pDVar2 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                     *)0x0) goto code_?;
      IStackX_8.x = position->x;
      IStackX_8.y = position->y;
      IStackX_8.z = position->z;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2,&IStackX_8,pOVar4,
                 CONCAT31((int3)((uint)uVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar2 = (this->fields).accumulatedCubeDamages;
    if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                   *)0x0) {
      IStackX_8.x = position->x;
      IStackX_8.y = position->y;
      IStackX_8.z = position->z;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2,&IStackX_8,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                         );
      if (pOVar4 != (Object *)0x0) {
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          fVar7 = (float)(*pcVar5)();
          return fVar7;
        }
        pcRam_? = pcVar5;
        uVar1 = (*pcRam_?)();
        fVar7 = damage + *(float *)((longlong)&pOVar4[1].klass + 4);
        *(undefined4 *)&pOVar4[1].klass = uVar1;
        *(float *)((longlong)&pOVar4[1].klass + 4) = fVar7;
        return fVar7;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar7 = (float)(*pcVar5)();
  return fVar7;
}


/* Void Clear() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages_Clear
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accumulatedCubeDamages;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages_UpdateControllerUpdate
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  uStackX_8 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Remove_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  lVar4 = FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  FUN_?(lVar4,
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pDVar5 = (this->fields).accumulatedCubeDamages;
  lStackX_20 = lVar4;
  if (pDVar5 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
      uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    fVar12 = _UNK_?;
    puStack_13 = (undefined1 *)(ulonglong)(uint)(pDVar5->fields)._version;
    uStack_14 = 2;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = (ulonglong)puStack_13;
    KStack_18.key.x = 0;
    KStack_18.key.y = 0;
    KStack_18.key.z = 0;
    KStack_18._6_2_ = 0;
    KStack_18.value = (Object *)0x0;
    uStack_19._0_4_ = 2;
    uStack_19._4_4_ = 0;
    uStack_7 = 0;
    puStack_13 = (undefined1 *)&pDStack_20;
    pDStack_20 = pDVar5;
code_?:
    bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                        *)&pDStack_20,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__MoveNext__
                      );
    pOVar22 = KStack_18.value;
    uVar23 = KStack_18._0_8_;
    if (bVar21 != 0) {
      uVar24 = KStack_18.key._0_4_;
      if (KStack_18.value != (Object *)0x0) {
        pcVar25 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar25 = (code *)FUN_?(), pcVar25 != (code *)0x0)) goto code_?;
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        goto code_?;
      }
      goto code_?;
    }
    if (lVar4 != 0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      puStack_13 = (undefined1 *)((ulonglong)*(uint *)(lVar4 + 0x1c) << 0x20);
      uStack_15 = 0;
      uStack_2 = (longlong)puStack_13;
      uStack_3 = 0;
      uStack_7 = 0;
      puStack_13 = (undefined1 *)&lStack_1;
      lStack_1 = lVar4;
      while (lStack_1 != 0) {
        if (uStack_2._4_4_ != *(int *)(lStack_1 + 0x1c)) {
code_?:
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (lStack_1 == 0) goto code_?;
          if (uStack_2._4_4_ == *(int *)(lStack_1 + 0x1c)) {
            return;
          }
          goto code_?;
        }
        if (*(uint *)(lStack_1 + 0x18) <= (uint)uStack_2) goto code_?;
        lVar4 = *(longlong *)(lStack_1 + 0x10);
        if (lVar4 == 0) goto code_?;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uStack_2) goto code_?;
        uVar24 = *(undefined4 *)(lVar4 + 0x20 + (longlong)(int)(uint)uStack_2 * 6);
        iVar26 = *(int16_t *)(lVar4 + 0x24U + (longlong)(int)(uint)uStack_2 * 6);
        uStack_3._0_6_ = CONCAT24(iVar26,uVar24);
        uStack_2 = CONCAT44(uStack_2._4_4_,(uint)uStack_2 + 1);
        pDVar5 = (this->fields).accumulatedCubeDamages;
        if (pDVar5 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                       *)0x0) goto code_?;
        uStackX_8._0_6_ = (IntVector)CONCAT24(iVar26,uVar24);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar5,
                   (IntVector *)&uStackX_8,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Remove_MV__WorldObject__IntVector_
                  );
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
code_?:
  pcRam_? = pcVar25;
  fVar27 = (float)(*pcRam_?)();
  if (fVar12 < fVar27 - *(float *)&pOVar22[1].klass) {
    if (lVar4 == 0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      goto code_?;
    }
    iStackX_1c = SUB82(uVar23,4);
    uStackX_18 = uVar24;
    FUN_?(lVar4,&uStackX_18,
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
  }
  goto code_?;
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


/* RuntimeEventManager+AccumulatedCubeDamages() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages__ctor
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_6 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_7 = 2;
  uStack_8 = 1;
  uStack_6 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar9 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar9 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((uint)pLVar9->max_length < 3) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pLVar9->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_11 = (undefined4)uStack_6;
      uStack_12 = uStack_6._4_4_;
      uStack_13 = uStack_7;
      uStack_14 = uStack_8;
      FUN_?(pLVar9->vector[2],&uStack_11,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

