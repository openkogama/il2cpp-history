
/* Void Add(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter_Add
               (TerrainLODComponent_TriangleCounter *this,IntVector *localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).enabledChunks;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    IStackX_8.x = localPos->x;
    IStackX_8.y = localPos->y;
    IStackX_8.z = localPos->z;
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__AddIfNotPresent
              (this_00,&IStackX_8,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
               ->klass->rgctx_data[0x15].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 GetEnabledTriangleCount(RuntimePrototypeCubeModel) */

int32_t Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
        TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                  (TerrainLODComponent_TriangleCounter *this,
                  RuntimePrototypeCubeModel *prototypeCubeModel,MethodInfo *method)

{
  uStackX_8 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
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
  pHStack_1 = (HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  iVar5 = 0;
  pHVar6 = (HashSet_1_MV_WorldObject_IntVector_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  FUN_?(pHVar6,
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pHVar7 = (this->fields).enabledChunks;
  pHStack_8 = pHVar6;
  if (pHVar7 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&uStack_10 >> 0xc);
      lVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    ppHStack_15 = (HashSet_1_MV_WorldObject_IntVector_ **)
                  ((ulonglong)(uint)(pHVar7->fields)._version << 0x20);
    uStack_16 = 0;
    lStack_17 = (longlong)ppHStack_15;
    uStack_18 = 0;
    uStack_10 = 0;
    ppHStack_15 = &pHStack_19;
    pHStack_19 = pHVar7;
    while (cVar20 = FUN_?(&pHStack_19,
                                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                                 ), uVar21 = uStack_18, cVar20 != '\0') {
      uVar22 = (undefined4)uStack_18;
      iVar23 = uStack_18._4_2_;
      if (prototypeCubeModel == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      pDVar24 = (prototypeCubeModel->fields).chunks;
      if (pDVar24 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      aIStack_25[0].x = (int16_t)uStack_18;
      aIStack_25[0].y = uStack_18._2_2_;
      aIStack_25[0].z = uStack_18._4_2_;
      uStack_18 = uVar21;
      iVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar24,aIStack_25,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      uVar21 = uStack_18;
      if (iVar26 < 0) {
        if (pHVar6 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
        uStack_18._0_2_ = (int16_t)uVar22;
        uStack_18._2_2_ = SUB42(uVar22,2);
        aIStack_27[0].x = (int16_t)uStack_18;
        aIStack_27[0].y = uStack_18._2_2_;
        aIStack_27[0].z = iVar23;
        uStack_18 = uVar21;
        FUN_?(pHVar6,aIStack_27,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                     );
      }
      else {
        pDVar24 = (prototypeCubeModel->fields).chunks;
        if (pDVar24 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        uStack_18._0_2_ = (int16_t)uVar22;
        uStack_18._2_2_ = SUB42(uVar22,2);
        aIStack_28[0].x = (int16_t)uStack_18;
        aIStack_28[0].y = uStack_18._2_2_;
        aIStack_28[0].z = iVar23;
        uStack_18 = uVar21;
        pOVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar24,
                             aIStack_28,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            );
        if (pOVar29 == (Object *)0x0) goto code_?;
        iVar5 = iVar5 + *(int *)((longlong)&pOVar29[5].klass + 4);
      }
    }
    if (pHVar6 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&uStack_10 >> 0xc);
        lVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      iStack_3 = *(int *)((longlong)&(pHVar6->fields)._slots + 4);
      uStack_16 = 0;
      uStack_2 = 0;
      uStack_4 = 0;
      uStack_10 = 0;
      ppHStack_15 = &pHStack_1;
      pHStack_1 = pHVar6;
      while (pHStack_1 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
        if ((iStack_3 != *(int *)((longlong)&(pHStack_1->fields)._slots + 4)) ||
           (*(uint *)&(pHStack_1->fields)._slots <= uStack_2)) {
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (pHStack_1 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          if (iStack_3 == *(int *)((longlong)&(pHStack_1->fields)._slots + 4)) {
            return iVar5;
          }
          goto code_?;
        }
        pIVar30 = (pHStack_1->fields)._buckets;
        if (pIVar30 == (Int32__Array *)0x0) goto code_?;
        if ((uint)pIVar30->max_length <= uStack_2) goto code_?;
        uVar22 = *(undefined4 *)((longlong)pIVar30->vector + (longlong)(int)uStack_2 * 6);
        iVar23 = *(int16_t *)((longlong)pIVar30->vector + (longlong)(int)uStack_2 * 6 + 4);
        uStack_4._0_6_ = CONCAT24(iVar23,uVar22);
        uStack_2 = uStack_2 + 1;
        pHVar7 = (this->fields).enabledChunks;
        if (pHVar7 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
        uStackX_8._0_6_ = (IntVector)CONCAT24(iVar23,uVar22);
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
        HashSet_1_MV_WorldObject_IntVector__Remove
                  (pHVar7,(IntVector *)&uStackX_8,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                  );
      }
      goto code_?;
    }
  }
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
  pcVar31 = (code *)swi(3);
  iVar26 = (*pcVar31)();
  return iVar26;
}


/* Void Remove(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter_Remove
               (TerrainLODComponent_TriangleCounter *this,IntVector *localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).enabledChunks;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    IStackX_8.x = localPos->x;
    IStackX_8.y = localPos->y;
    IStackX_8.z = localPos->z;
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__Remove
              (this_00,&IStackX_8,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
              );
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* TerrainLODComponent+TriangleCounter() */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter__ctor
               (TerrainLODComponent_TriangleCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_MV_WorldObject_IntVector_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                        );
  FUN_?(pHVar1);
  bVar2 = iRam_? != 0;
  (this->fields).enabledChunks = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

