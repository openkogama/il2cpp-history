
/* Void ChunkInstancesOnChanged(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_ChunkInstancesOnChanged
               (CullingTerrainManager *this,Object *sender,
               ChunkInstancesChanged *chunkInstancesChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Remove_MV__WorldObject__IntVector_
                   );
    func_?(0x7050);
    cRam_? = '\x01';
  }
  if (chunkInstancesChanged == (ChunkInstancesChanged *)0x0) goto code_?;
  if ((chunkInstancesChanged->fields).changeType == 1) {
    pDVar1 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    goto code_?;
    unSubscriber = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,
                              (chunkInstancesChanged->fields).chunkPos,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                             );
    if (unSubscriber == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_UnSubscribe
              ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    pDVar1 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
    Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,
               (chunkInstancesChanged->fields).chunkPos,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Remove_MV__WorldObject__IntVector_
              );
  }
  if ((chunkInstancesChanged->fields).changeType == 0) {
    this_00 = (this->fields).chunkInstances;
    pIVar2 = &(chunkInstancesChanged->fields).chunkPos;
    uVar3 = pIVar2->x;
    uVar4 = pIVar2->y;
    intVector.y = uVar4;
    intVector.x = uVar3;
    chunkPos = *pIVar2;
    if (this_00 == (ChunkInstances *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    intVector.z = (chunkInstancesChanged->fields).chunkPos.z;
    pCVar6 = ChunkInstances::ChunkInstances_GetChunk
                        ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffffd8,this_00,intVector
                         ,(MethodInfo *)0x0);
    uVar7 = (pCVar6->guid)._j;
    uVar8 = (pCVar6->guid)._k;
    chunk.guid._k = uVar8;
    chunk.guid._j = uVar7;
    uVar9 = (pCVar6->guid)._a;
    uVar10 = (pCVar6->guid)._b;
    uVar11 = (pCVar6->guid)._c;
    uVar12 = (pCVar6->guid)._d;
    uVar13 = (pCVar6->guid)._e;
    uVar14 = (pCVar6->guid)._f;
    uVar15 = (pCVar6->guid)._g;
    uVar16 = (pCVar6->guid)._h;
    uVar17 = (pCVar6->guid)._i;
    chunk.guid._i = uVar17;
    chunk.guid._h = uVar16;
    chunk.guid._g = uVar15;
    chunk.guid._f = uVar14;
    chunk.guid._e = uVar13;
    chunk.guid._d = uVar12;
    chunk.guid._c = uVar11;
    chunk.guid._b = uVar10;
    chunk.guid._a = uVar9;
    chunk.gameObject = pCVar6->gameObject;
    chunk.collider = pCVar6->collider;
    chunk.renderer = pCVar6->renderer;
    chunk.filter = pCVar6->filter;
    chunk.transparent = pCVar6->transparent;
    chunk._33_3_ = *(undefined3 *)&pCVar6->field_0x21;
    CullingTerrainManager_CreateCullingSubscriber(this,chunkPos,chunk,(MethodInfo *)0x0);
  }
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_Clear
               (CullingTerrainManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
                   );
    cRam_? = '\x01';
  }
  CullingTerrainManager_DestroyCullingSubscribers(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).terrainCullingSubscriberBases;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Clear__
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CreateCullingSubscriber(IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_CreateCullingSubscriber
               (CullingTerrainManager *this,IntVector chunkPos,
               ChunkInstances_ChunkInstanceVariables chunk,MethodInfo *method)

{
  key = chunkPos;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberTerrainChunk);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Add_MV__WorldObject__IntVector__CullingSubscriberTerrainChunk_
                   );
    cRam_? = '\x01';
  }
  if (chunk.collider != (BoxCollider *)0x0) {
    pBVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                       ((Bounds *)&stack0xffffffcc,(Collider *)chunk.collider,(MethodInfo *)0x0);
    pMVar2 = (this->fields).cubeModelBase;
    uVar3 = (pBVar1->m_Extents).z;
    uVar4 = (pBVar1->m_Center).x;
    uVar5 = (pBVar1->m_Center).y;
    uVar6 = (pBVar1->m_Center).z;
    bounds.m_Center.z = (float)uVar6;
    bounds.m_Center.y = (float)uVar5;
    bounds.m_Center.x = (float)uVar4;
    uVar7 = (pBVar1->m_Extents).x;
    uVar8 = (pBVar1->m_Extents).y;
    bounds.m_Extents.y = (float)uVar8;
    bounds.m_Extents.x = (float)uVar7;
    this_01 = (CullingSubscriberTerrainChunk *)
              func_?(TypeInfo__CullingSubscriberTerrainChunk);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,in_stack_9);
    (this_01->fields).cubeModelBase = pMVar2;
    (this_01->fields).chunkPosition.x = chunkPos.x;
    (this_01->fields).chunkPosition.y = chunkPos.y;
    (this_01->fields).chunkPosition.z = chunkPos.z;
    func_?(&(this_01->fields).cubeModelBase,pMVar2);
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this_01,(MethodInfo *)0x0);
    bounds.m_Extents.z = (float)uVar3;
    CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
              (this_01,bounds,(MethodInfo *)0x0);
    this_00 = (this->fields).terrainCullingSubscriberBases;
    if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,key,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Add_MV__WorldObject__IntVector__CullingSubscriberTerrainChunk_
                );
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DestroyCullingSubscribers() */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_DestroyCullingSubscribers
               (CullingTerrainManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key.x = 0;
  DStack_6._current.key.y = 0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._current.key.z = 0;
  DStack_6._current._6_2_ = 0;
  DStack_6._current.value = (Object *)0x0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).terrainCullingSubscriberBases;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key._0_4_ = (pDVar7->_current).key.sheetInstanceID;
    DStack_6._current._4_8_ = *(undefined8 *)&(pDVar7->_current).key.index;
    DStack_6._getEnumeratorRetType = pDVar7->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unSubscriber = DStack_6._current.value;
      if (DStack_6._current.value == (Object *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      CullingApiWrapper::CullingApiWrapper_UnSubscribe
                ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnChanged(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_OnChanged
               (CullingTerrainManager *this,HashSet_1_MV_WorldObject_IntVector_ *chunksChanged,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(0x4804);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&StringLiteral_Changed_chunk_does_not_yet_exist);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_6._current.z = 0;
  HStack_6._18_2_ = 0;
  HStack_6._set = (HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current.x = 0;
  HStack_6._current.y = 0;
  if (chunksChanged != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_8 + 4),
                        chunksChanged,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    uStack_9 = 0;
    HStack_6._set = pHVar7->_set;
    HStack_6._index = pHVar7->_index;
    HStack_6._version = pHVar7->_version;
    HStack_6._current.x = (pHVar7->_current).x;
    HStack_6._current.y = (pHVar7->_current).y;
    HStack_6._16_4_ = *(undefined4 *)&(pHVar7->_current).z;
    uStack_1 = 1;
    pHStack_10 = &HStack_6;
    while( true ) {
      while( true ) {
        bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::
                WorldObject::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          (&HStack_6,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        uVar12 = HStack_6._current._0_4_;
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&HStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                     ,in_stack_13);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        iStack_14 = HStack_6._current.z;
        uStack_15 = HStack_6._18_2_;
        if ((this->fields).terrainCullingSubscriberBases ==
            (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
        goto code_?;
        key.z = HStack_6._current.z;
        key.x = HStack_6._current.x;
        key.y = HStack_6._current.y;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                           (this->fields).terrainCullingSubscriberBases,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__ContainsKey_MV__WorldObject__IntVector_
                          );
        uVar16 = HStack_6._current._0_4_;
        if (bVar11 != 0) break;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Changed_chunk_does_not_yet_exist,(MethodInfo *)0x0);
      }
      in_stack_13 = (MethodInfo *)(this->fields).terrainCullingSubscriberBases;
      if (in_stack_13 == (MethodInfo *)0x0) break;
      key_00.z = (int16_t)_iStack_18;
      HStack_6._current.x = (int16_t)uVar12;
      HStack_6._current.y = SUB42(uVar12,2);
      key_00.x = HStack_6._current.x;
      key_00.y = HStack_6._current.y;
      HStack_6._current._0_4_ = uVar16;
      pCStack_17 = (CullingSubscriberTerrainChunk *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                              in_stack_13,key_00,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                             );
      uVar16 = HStack_6._current._0_4_;
      this_00 = (this->fields).chunkInstances;
      if (this_00 == (ChunkInstances *)0x0) break;
      intVector.z = (int16_t)_iStack_18;
      HStack_6._current.x = (int16_t)uVar12;
      HStack_6._current.y = SUB42(uVar12,2);
      intVector.x = HStack_6._current.x;
      intVector.y = HStack_6._current.y;
      HStack_6._current._0_4_ = uVar16;
      pCVar18 = ChunkInstances::ChunkInstances_GetChunk
                         (&CStack_19,this_00,intVector,(MethodInfo *)0x0);
      iStack_20 = (pCVar18->guid)._a;
      uStack_21._0_2_ = (pCVar18->guid)._b;
      uStack_21._2_2_ = (pCVar18->guid)._c;
      uStack_22._0_1_ = (pCVar18->guid)._d;
      uStack_22._1_1_ = (pCVar18->guid)._e;
      uStack_22._2_1_ = (pCVar18->guid)._f;
      uStack_22._3_1_ = (pCVar18->guid)._g;
      auStack_8._0_4_ = *(undefined4 *)&(pCVar18->guid)._h;
      fStack_23 = *(float *)&pCVar18->transparent;
      if (pCVar18->renderer == (MeshRenderer *)0x0) break;
      pBVar24 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         ((Bounds *)auStack_8,(Renderer *)pCVar18->renderer,(MethodInfo *)0x0);
      if (pCStack_17 == (CullingSubscriberTerrainChunk *)0x0) break;
      CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
                (pCStack_17,*pBVar24,(MethodInfo *)0x0);
      uVar16 = HStack_6._current._0_4_;
      this_01 = (this->fields).terrainCullingSubscriberBases;
      if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
      break;
      key_01.z = (int16_t)_iStack_18;
      HStack_6._current.x = (int16_t)uVar12;
      HStack_6._current.y = SUB42(uVar12,2);
      key_01.x = HStack_6._current.x;
      key_01.y = HStack_6._current.y;
      HStack_6._current._0_4_ = uVar16;
      this_02 = (CullingSubscriberTerrainChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key_01,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                          );
      if (this_02 == (CullingSubscriberTerrainChunk *)0x0) break;
      CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_HandleChange
                (this_02,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* CullingTerrainManager(ChunkInstances, MVCubeModelBase) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager__ctor
               (CullingTerrainManager *this,ChunkInstances *chunkInstances,
               MVCubeModelBase *cubeModelBase,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                   );
    func_?(&
                    MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
                   );
    func_?(&
                    MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
                   );
    func_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).terrainCullingSubscriberBases;
  (this->fields).terrainCullingSubscriberBases =
       (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).chunkInstances = chunkInstances;
  func_?(&this->fields,chunkInstances);
  this_00 = (this->fields).chunkInstances;
  this_02 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
             ,(MethodInfo *)0x0);
  if (this_00 != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_add_Changed
              (this_00,(EventHandler_1_ChunkInstancesChanged_ *)this_02,(MethodInfo *)0x0);
    (this->fields).cubeModelBase = cubeModelBase;
    func_?();
    if (cubeModelBase != (MVCubeModelBase *)0x0) {
      pAVar4 = (cubeModelBase->fields).ChunksChanged;
      this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_03,(Object *)this,
                 MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (cubeModelBase->fields).ChunksChanged =
             (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      }
      else {
        pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                 func_?();
        if (pAVar4 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0
           ) {
          func_?();
code_?:
          func_?();
          goto code_?;
        }
        (cubeModelBase->fields).ChunksChanged = pAVar4;
        iVar6 = func_?();
        if (iVar6 == 0) goto code_?;
      }
      func_?();
      if (chunkInstances != (ChunkInstances *)0x0) {
        piVar7 = (int *)func_?();
        uStack_1 = 1;
        while (piVar7 != (int *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            iVar6 = func_?();
            if (iVar6 != 0) {
              func_?();
            }
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (piVar7 == (int *)0x0) break;
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar7 + 0xb6);
          if (uVar10 != 0) {
            do {
              if (*(IEnumerator__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar9 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar11 = (undefined4 *)
                         (*piVar7 +
                         (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar11 = (undefined4 *)func_?();
code_?:
          piVar12 = (int *)(*(code *)*puVar11)();
          if (piVar12 == (int *)0x0) break;
          if (*(Il2CppClass **)(*piVar12 + 0x20) !=
              (
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
              ->_0).element_class) goto code_?;
          pIVar13 = (IntVector *)func_?();
          uStack_14 = (undefined4)((ulonglong)*(undefined8 *)&pIVar13[5].y >> 0x20);
          chunk.filter = (MeshFilter *)uStack_14;
          chunk._0_28_ = *(undefined1 (*) [28])&pIVar13[1].y;
          chunk._32_4_ = *(undefined4 *)&pIVar13[6].z;
          CullingTerrainManager_CreateCullingSubscriber(this,*pIVar13,chunk,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

