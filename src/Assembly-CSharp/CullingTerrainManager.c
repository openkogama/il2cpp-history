
/* Void ChunkInstancesOnChanged(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_ChunkInstancesOnChanged
               (CullingTerrainManager *this,Object *sender,
               ChunkInstancesChanged *chunkInstancesChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Remove_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (chunkInstancesChanged == (ChunkInstancesChanged *)0x0) goto code_?;
  if ((chunkInstancesChanged->fields).changeType == 1) {
    pDVar1 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    goto code_?;
    IStackX_18.x = (chunkInstancesChanged->fields).chunkPos.x;
    IStackX_18.y = (chunkInstancesChanged->fields).chunkPos.y;
    IStackX_18.z = (chunkInstancesChanged->fields).chunkPos.z;
    unSubscriber = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,
                              &IStackX_18,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                             );
    if (unSubscriber == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    CullingApiWrapper::CullingApiWrapper_UnSubscribe
              ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    pDVar1 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    goto code_?;
    IStackX_18.x = (chunkInstancesChanged->fields).chunkPos.x;
    IStackX_18.y = (chunkInstancesChanged->fields).chunkPos.y;
    IStackX_18.z = (chunkInstancesChanged->fields).chunkPos.z;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
    Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,&IStackX_18,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Remove_MV__WorldObject__IntVector_
              );
  }
  if ((chunkInstancesChanged->fields).changeType != 0) {
    return;
  }
  pCVar2 = (this->fields).chunkInstances;
  uVar3._0_2_ = (chunkInstancesChanged->fields).chunkPos.x;
  uVar3._2_2_ = (chunkInstancesChanged->fields).chunkPos.y;
  iVar4 = (chunkInstancesChanged->fields).chunkPos.z;
  if (pCVar2 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar5 = (pCVar2->fields).chunkInstances;
    if (pDVar5 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  0x0) {
      IStackX_18._0_4_ = uVar3;
      IStackX_18.z = iVar4;
      puVar6 = (undefined8 *)FUN_?(auStack_7,pDVar5,&IStackX_18);
      CStack_8.guid._0_8_ = *puVar6;
      CStack_8.guid._8_8_ = puVar6[1];
      CStack_8.gameObject = (GameObject *)puVar6[2];
      CStack_8.collider = (BoxCollider *)puVar6[3];
      CStack_8.renderer = (MeshRenderer *)puVar6[4];
      CStack_8.filter = (MeshFilter *)puVar6[5];
      CStack_8._48_8_ = puVar6[6];
      IStackX_18._0_4_ = uVar3;
      IStackX_18.z = iVar4;
      CullingTerrainManager_CreateCullingSubscriber(this,&IStackX_18,&CStack_8,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_Clear
               (CullingTerrainManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CullingTerrainManager_DestroyCullingSubscribers(this,(MethodInfo *)0x0);
  pDVar1 = (this->fields).terrainCullingSubscriberBases;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
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


/* Void CreateCullingSubscriber(IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_CreateCullingSubscriber
               (CullingTerrainManager *this,IntVector *chunkPos,
               ChunkInstances_ChunkInstanceVariables *chunk,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberTerrainChunk,chunkPos,chunk,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Add_MV__WorldObject__IntVector__CullingSubscriberTerrainChunk_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = chunk->collider;
  if (obj != (BoxCollider *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    pMVar5 = (this->fields).cubeModelBase;
    this_01 = (CullingSubscriberTerrainChunk *)
              FUN_?(TypeInfo__CullingSubscriberTerrainChunk);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar6 = iRam_? != 0;
    iVar7 = chunkPos->y;
    iVar8 = chunkPos->z;
    (this_01->fields).chunkPosition.x = chunkPos->x;
    (this_01->fields).chunkPosition.y = iVar7;
    (this_01->fields).chunkPosition.z = iVar8;
    (this_01->fields).cubeModelBase = pMVar5;
    if (bVar6) {
      uVar9 = (uint)((ulonglong)&(this_01->fields).cubeModelBase >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this_01,(MethodInfo *)0x0);
    aBStack_13[0].m_Center.x = 0.0;
    aBStack_13[0].m_Center.y = 0.0;
    aBStack_13[0].m_Center.z = 0.0;
    aBStack_13[0].m_Extents.x = 0.0;
    aBStack_13[0].m_Extents.y = 0.0;
    aBStack_13[0].m_Extents.z = 0.0;
    CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
              (this_01,aBStack_13,(MethodInfo *)0x0);
    this_00 = (this->fields).terrainCullingSubscriberBases;
    if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
      IStackX_18.x = chunkPos->x;
      IStackX_18.y = chunkPos->y;
      IStackX_18.z = chunkPos->z;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_18,
                 (Object *)this_01,CONCAT31((int3)((uint)uVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Add_MV__WorldObject__IntVector__CullingSubscriberTerrainChunk_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DestroyCullingSubscribers() */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_DestroyCullingSubscribers
               (CullingTerrainManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).terrainCullingSubscriberBases;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_1 >> 0xc);
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
  uStack_7 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_8 = 2;
  uStack_9 = 0;
  uStack_10 = 0;
  DStack_11._version = (undefined4)uStack_7;
  DStack_11._index = uStack_7._4_4_;
  DStack_11._current.key.x = 0;
  DStack_11._current.key.y = 0;
  DStack_11._current.key.z = 0;
  DStack_11._current._6_2_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__MoveNext__
                      );
    unSubscriber = DStack_11._current.value;
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    CullingApiWrapper::CullingApiWrapper_UnSubscribe
              ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnChanged(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_OnChanged
               (CullingTerrainManager *this,HashSet_1_MV_WorldObject_IntVector_ *chunksChanged,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (chunksChanged == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
  ppHStack_7 = (HashSet_1_MV_WorldObject_IntVector_ **)
                 ((ulonglong)(uint)(chunksChanged->fields)._version << 0x20);
  uStack_8 = 0;
  lStack_9 = (longlong)ppHStack_7;
  uStack_10 = 0;
  uStack_3 = 0;
  ppHStack_7 = &pHStack_11;
  pHStack_11 = chunksChanged;
  while( true ) {
    while( true ) {
      cVar12 = FUN_?(&pHStack_11,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                            );
      uVar13 = uStack_10;
      if (cVar12 == '\0') {
        return;
      }
      uVar14 = (undefined4)uStack_10;
      iVar15 = uStack_10._4_2_;
      pDVar16 = (this->fields).terrainCullingSubscriberBases;
      if (pDVar16 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
      goto code_?;
      aIStack_17[0].x = (int16_t)uStack_10;
      aIStack_17[0].y = uStack_10._2_2_;
      aIStack_17[0].z = uStack_10._4_2_;
      uStack_10 = uVar13;
      iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,aIStack_17
                          ,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__ContainsKey_MV__WorldObject__IntVector_
                           ->klass->rgctx_data[0x21].method);
      uVar13 = uStack_10;
      if (-1 < iVar18) break;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Changed_chunk_does_not_yet_exist,(MethodInfo *)0x0);
    }
    pDVar16 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar16 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    break;
    uStack_10._0_2_ = (int16_t)uVar14;
    uStack_10._2_2_ = SUB42(uVar14,2);
    aIStack_19[0].x = (int16_t)uStack_10;
    aIStack_19[0].y = uStack_10._2_2_;
    aIStack_19[0].z = iVar15;
    uStack_10 = uVar13;
    pCVar20 = (CullingSubscriberTerrainChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,aIStack_19,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    pCVar21 = (this->fields).chunkInstances;
    if (pCVar21 == (ChunkInstances *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar13 = uStack_10;
    if ((pCVar21->fields).chunkInstances ==
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    uStack_10._0_2_ = (int16_t)uVar14;
    uStack_10._2_2_ = SUB42(uVar14,2);
    aIStack_22[0].x = (int16_t)uStack_10;
    aIStack_22[0].y = uStack_10._2_2_;
    aIStack_22[0].z = iVar15;
    uStack_10 = uVar13;
    lVar23 = FUN_?(auStack_24);
    if (*(Renderer **)(lVar23 + 0x20) == (Renderer *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pBVar25 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                        (&BStack_26,*(Renderer **)(lVar23 + 0x20),(MethodInfo *)0x0);
    if (pCVar20 == (CullingSubscriberTerrainChunk *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    aBStack_27[0].m_Center.x = (pBVar25->m_Center).x;
    aBStack_27[0].m_Center.y = (pBVar25->m_Center).y;
    aBStack_27[0]._8_8_ = *(undefined8 *)&(pBVar25->m_Center).z;
    aBStack_27[0].m_Extents.y = (pBVar25->m_Extents).y;
    aBStack_27[0].m_Extents.z = (pBVar25->m_Extents).z;
    CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
              (pCVar20,aBStack_27,(MethodInfo *)0x0);
    uVar13 = uStack_10;
    pDVar16 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar16 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    uStack_10._0_2_ = (int16_t)uVar14;
    uStack_10._2_2_ = SUB42(uVar14,2);
    aIStack_28[0].x = (int16_t)uStack_10;
    aIStack_28[0].y = uStack_10._2_2_;
    aIStack_28[0].z = iVar15;
    uStack_10 = uVar13;
    pCVar20 = (CullingSubscriberTerrainChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,aIStack_28,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (pCVar20 == (CullingSubscriberTerrainChunk *)0x0) {
      FUN_?();
      goto code_?;
    }
    CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_HandleChange
              (pCVar20,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CullingTerrainManager(ChunkInstances, MVCubeModelBase) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager__ctor
               (CullingTerrainManager *this,ChunkInstances *chunkInstances,
               MVCubeModelBase *cubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
            );
  (this->fields).terrainCullingSubscriberBases =
       (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)this_01;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).terrainCullingSubscriberBases >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  (this->fields).chunkInstances = chunkInstances;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_00 = (this->fields).chunkInstances;
  this_02 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
             ,(MethodInfo *)0x0);
  if (this_00 != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_add_Changed
              (this_00,(EventHandler_1_ChunkInstancesChanged_ *)this_02,(MethodInfo *)0x0);
    (this->fields).cubeModelBase = cubeModelBase;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).cubeModelBase >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if (cubeModelBase == (MVCubeModelBase *)0x0) goto code_?;
    pAVar8 = (cubeModelBase->fields).ChunksChanged;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
               ,(MethodInfo *)0x0);
    pKVar9 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
               *)0x0;
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_03,(MethodInfo *)0x0);
    pAVar11 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    if (pDVar10 == (Delegate *)0x0) {
      (cubeModelBase->fields).ChunksChanged =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
    }
    else {
      pAVar8 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                FUN_?(pDVar10,
                              TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
      if (pAVar8 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (cubeModelBase->fields).ChunksChanged = pAVar8;
      pAVar11 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      lVar3 = FUN_?(pDVar10,
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                            );
      if (lVar3 == 0) {
        plVar13 = (longlong *)FUN_?(pDVar10,pAVar11);
code_?:
        FUN_?(plVar13,pKVar9);
code_?:
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(cubeModelBase->fields).ChunksChanged >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if (chunkInstances != (ChunkInstances *)0x0) {
      plStackX_10 = (longlong *)
                    FUN_?(0,TypeInfo__System__Collections__IEnumerable,chunkInstances);
      alStack_1[1] = 0;
      pplStack_14 = &plStackX_10;
      plStack_15 = alStack_1;
      while (plStackX_10 != (longlong *)0x0) {
        cVar16 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        plVar13 = plStackX_10;
        if (cVar16 == '\0') {
          alStack_1[0] = FUN_?(plStackX_10,TypeInfo__System__IDisposable);
          if (alStack_1[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
          }
          return;
        }
        if (plStackX_10 == (longlong *)0x0) goto code_?;
        lVar3 = *plStackX_10;
        uVar17 = 0;
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar18 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) + 1) *
                        0x10 + 0x138 + lVar3);
              goto code_?;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar18 = (undefined8 *)
                 FUN_?(plStackX_10,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar13 = (longlong *)(*(code *)*puVar18)(plVar13,puVar18[1]);
        if (plVar13 == (longlong *)0x0) goto code_?;
        pKVar9 = 
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar13 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) goto code_?;
        IStackX_8.x = (int16_t)plVar13[2];
        IStackX_8.y = *(int16_t *)((longlong)plVar13 + 0x12);
        IStackX_8.z = *(int16_t *)((longlong)plVar13 + 0x14);
        uStack_19 = *(undefined2 *)((longlong)plVar13 + 0x16);
        uStack_20 = (undefined2)plVar13[3];
        uStack_21 = *(undefined2 *)((longlong)plVar13 + 0x1a);
        uStack_22 = *(undefined2 *)((longlong)plVar13 + 0x1c);
        uStack_23 = *(undefined2 *)((longlong)plVar13 + 0x1e);
        CStack_24.guid._0_8_ = plVar13[3];
        lStack_25 = plVar13[4];
        pGStack_26 = (GameObject *)plVar13[5];
        pBStack_27 = (BoxCollider *)plVar13[6];
        pMStack_28 = (MeshRenderer *)plVar13[7];
        pMStack_29 = (MeshFilter *)plVar13[8];
        lStack_30 = plVar13[9];
        iStack_31 = IStackX_8.x;
        iStack_32 = IStackX_8.y;
        iStack_33 = IStackX_8.z;
        CStack_24.guid._8_8_ = lStack_25;
        CStack_24.gameObject = pGStack_26;
        CStack_24.collider = pBStack_27;
        CStack_24.renderer = pMStack_28;
        CStack_24.filter = pMStack_29;
        CStack_24._48_8_ = lStack_30;
        CullingTerrainManager_CreateCullingSubscriber(this,&IStackX_8,&CStack_24,(MethodInfo *)0x0);
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

