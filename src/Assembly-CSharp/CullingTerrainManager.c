
/* Void ChunkInstancesOnChanged(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_ChunkInstancesOnChanged
               (CullingTerrainManager *this,Object *sender,
               ChunkInstancesChanged *chunkInstancesChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  if (chunkInstancesChanged == (ChunkInstancesChanged *)0x0) goto code_?;
  iVar1 = (chunkInstancesChanged->fields).changeType;
  if (iVar1 == 1) {
    pDVar2 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar2 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    goto code_?;
    unSubscriber = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2,
                              (chunkInstancesChanged->fields).chunkPos,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                             );
    if (unSubscriber == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_UnSubscribe
              ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    pDVar2 = (this->fields).terrainCullingSubscriberBases;
    if (pDVar2 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
    Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2,
               (chunkInstancesChanged->fields).chunkPos,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Remove_MV__WorldObject__IntVector_
              );
    iVar1 = (chunkInstancesChanged->fields).changeType;
  }
  if (iVar1 == 0) {
    this_00 = (this->fields).chunkInstances;
    pIVar3 = &(chunkInstancesChanged->fields).chunkPos;
    uVar4 = pIVar3->x;
    uVar5 = pIVar3->y;
    intVector.y = uVar5;
    intVector.x = uVar4;
    chunkPos = *pIVar3;
    if (this_00 == (ChunkInstances *)0x0) {
code_?:
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    intVector.z = (chunkInstancesChanged->fields).chunkPos.z;
    pCVar7 = ChunkInstances::ChunkInstances_GetChunk
                       ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffffec,this_00,intVector,
                        (MethodInfo *)0x0);
    CullingTerrainManager_CreateCullingSubscriber(this,chunkPos,*pCVar7,(MethodInfo *)0x0);
  }
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_Clear
               (CullingTerrainManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CullingTerrainManager_DestroyCullingSubscribers(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).terrainCullingSubscriberBases;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (chunk.collider != (BoxCollider *)0x0) {
    pBVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                       (&BStack_2,(Collider *)chunk.collider,(MethodInfo *)0x0);
    fStack_3 = (pBVar1->m_Center).x;
    fStack_4 = (pBVar1->m_Center).y;
    fStack_5 = (pBVar1->m_Center).z;
    fStack_6 = (pBVar1->m_Extents).x;
    pMVar7 = (this->fields).cubeModelBase;
    uStack_8._0_4_ = (pBVar1->m_Extents).y;
    uStack_8._4_4_ = (pBVar1->m_Extents).z;
    this_01 = (ScaleAnimationBase *)func_?(TypeInfo__CullingSubscriberTerrainChunk);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_9);
    (this_01->fields)._._._._.m_CachedPtr = (void *)chunkPos._0_4_;
    *(int16_t *)&(this_01->fields).state = chunkPos.z;
    (this_01->fields).originalScale.x = (float)pMVar7;
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this_01,(MethodInfo *)0x0);
    bounds.m_Center.y = fStack_4;
    bounds.m_Center.x = fStack_3;
    bounds.m_Center.z = fStack_5;
    bounds.m_Extents.x = fStack_6;
    bounds.m_Extents.y = (float)(int)uStack_8;
    bounds.m_Extents.z = (float)((ulonglong)uStack_8 >> 0x20);
    CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
              ((CullingSubscriberTerrainChunk *)this_01,bounds,(MethodInfo *)0x0);
    this_00 = (this->fields).terrainCullingSubscriberBases;
    if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,chunkPos,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Add_MV__WorldObject__IntVector__CullingSubscriberTerrainChunk_
                );
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.fields.list = (IList_1_VoxelHit_ *)0x0;
  CStack_6.klass = (Collection_1_VoxelHit___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  IStack_7.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_7.monitor = (MonitorData *)0x0;
  IStack_7.fields.jump = 0;
  IStack_7.fields.jumpFrameUpdate = 0;
  IStack_7.fields.jumpFixedUpdate = 0;
  IStack_7.fields._3_1_ = 0;
  IStack_7.fields.direction.x = 0.0;
  IStack_7.fields.direction.y = 0.0;
  IStack_7.fields.direction.z = 0.0;
  func_?();
  this_00 = (this->fields).terrainCullingSubscriberBases;
  puStack_8 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_10,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__GetEnumerator__
                       );
    IStack_7.klass = (InputToPlayerMovementAndroid__Class *)pDVar9->dictionary;
    IStack_7.monitor = (MonitorData *)pDVar9->next;
    IStack_7.fields._0_4_ = pDVar9->stamp;
    IStack_7.fields.direction.x = (float)(pDVar9->current).key.tileX;
    IStack_7.fields.direction._4_8_ = *(undefined8 *)&(pDVar9->current).key.tileZ;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_8 = 0x44;
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar12 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_10.current,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar12->x;
      CStack_6.monitor = (MonitorData *)pVVar12->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar12->z;
      unSubscriber = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               (&CStack_6,
                                MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Value__
                               );
      if (unSubscriber == (IList_1_VoxelHit_ *)0x0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      CullingApiWrapper::CullingApiWrapper_UnSubscribe
                ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnChanged(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::CullingTerrainManager::CullingTerrainManager_OnChanged
               (CullingTerrainManager *this,HashSet_1_MV_WorldObject_IntVector_ *chunksChanged,
               MethodInfo *method)

{
  fStack_1 = -NAN;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Il2CppClass *)0x0;
  auStack_6._0_4_ = (HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  auStack_6._4_4_ = (Il2CppMethodPointer)0x0;
  auStack_6._8_4_ = (InvokerMethod)0x0;
  auStack_6._12_4_ = (char *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  if (chunksChanged != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffff8c;
    puStack_4 = &stack0xffffff8c;
    pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_6 + 0x14),
                        chunksChanged,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    auStack_6._0_4_ = pHVar8->hashset;
    auStack_6._4_4_ = pHVar8->next;
    auStack_6._8_4_ = pHVar8->stamp;
    auStack_6._12_4_ = *(undefined4 *)&pHVar8->current;
    auStack_6._16_4_ = *(undefined4 *)&(pHVar8->current).z;
    fStack_1 = 0.0;
    while( true ) {
      while( true ) {
        cVar9 = func_?();
        if (cVar9 == '\0') {
          *puStack_7 = 0x8e;
          fStack_1 = -NAN;
          func_?(auStack_6,
                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                         );
          *unaff_FS_OFFSET = fStack_3;
          return;
        }
        IVar10 = GUICellCursor::GUICellCursor_get_LocalPos
                           ((GUICellCursor *)&stack0xffffffd8,(MethodInfo *)auStack_6);
        pIVar11 = IVar10._0_4_;
        unaff_EDI = (this->fields).terrainCullingSubscriberBases;
        iStack_12 = pIVar11->x;
        uStack_13 = pIVar11->y;
        iVar14 = pIVar11->z;
        if (unaff_EDI == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0
           ) goto code_?;
        bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)unaff_EDI,*pIVar11
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__ContainsKey_MV__WorldObject__IntVector_
                          );
        if (bVar15 != 0) break;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Changed_chunk_does_not_yet_exist,(MethodInfo *)0x0);
      }
      pDVar16 = (this->fields).terrainCullingSubscriberBases;
      if (pDVar16 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0)
      break;
      IVar10.z = iVar14;
      IVar10.x = iStack_12;
      IVar10.y = uStack_13;
      unaff_EDI = (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,IVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                            );
      this_00 = (this->fields).chunkInstances;
      if (this_00 == (ChunkInstances *)0x0) break;
      intVector.z = iVar14;
      intVector.x = iStack_12;
      intVector.y = uStack_13;
      pCVar17 = ChunkInstances::ChunkInstances_GetChunk
                         (&CStack_18,this_00,intVector,in_stack_19);
      if ((pCVar17->renderer == (MeshRenderer *)0x0) ||
         (pBVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                              (&BStack_21,(Renderer *)pCVar17->renderer,in_stack_22),
         unaff_EDI == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0))
      break;
      in_stack_22 = (MethodInfo *)(pBVar20->m_Extents).x;
      in_stack_19 = (MethodInfo *)&UNK_?;
      CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
                ((CullingSubscriberTerrainChunk *)unaff_EDI,*pBVar20,in_stack_23);
      pDVar16 = (this->fields).terrainCullingSubscriberBases;
      if ((pDVar16 == (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)0x0) ||
         (key.z = iVar14, key.x = iStack_12, key.y = uStack_13,
         this_01 = (CullingSubscriberTerrainChunk *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__get_Item_MV__WorldObject__IntVector_
                             ), this_01 == (CullingSubscriberTerrainChunk *)0x0)) break;
      CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_HandleChange
                (this_01,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_4 = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)0x0;
  pMStack_5 = (MonitorData *)0x0;
  func_?();
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>
  ;
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_CullingSubscriberTerrainChunk_ *)
            func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CullingSubscriberTerrainChunk>__Dictionary__
            );
  (this->fields).terrainCullingSubscriberBases = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).chunkInstances = chunkInstances;
  pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar6,(Object *)this,
             MethodInfo__CullingTerrainManager__ChunkInstancesOnChanged_System__Object__ChunkInstancesChanged_
             ,
             MethodInfo__System__EventHandler<ChunkInstancesChanged>__EventHandler_System__Object__void__
            );
  if (chunkInstances != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_add_Changed
              (chunkInstances,(EventHandler_1_ChunkInstancesChanged_ *)pUVar6,(MethodInfo *)0x0);
    (this->fields).cubeModelBase = cubeModelBase;
    if (cubeModelBase != (MVCubeModelBase *)0x0) {
      pAVar7 = (cubeModelBase->fields).ChunksChanged;
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__CullingTerrainManager__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 ,
                 MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Action_System__Object__void__
                );
      pAVar8 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)pUVar6,(MethodInfo *)0x0);
      pAVar7 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      if (pAVar8 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        if (pAVar8->klass ==
            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
           ) {
          pAVar7 = pAVar8;
        }
        if (pAVar7 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0
           ) goto code_?;
      }
      (cubeModelBase->fields).ChunksChanged = pAVar7;
      pIVar9 = TypeInfo__System__Collections__IEnumerable;
      piVar10 = (int *)func_?();
      uStack_1 = 0;
      while (piVar10 != (int *)0x0) {
        cVar11 = func_?();
        if (cVar11 == '\0') {
          (pIVar9->_0).image = (Il2CppImage *)0xa8;
          uStack_1 = 0xffffffff;
          iVar12 = func_?();
          if (iVar12 != 0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        iVar12 = *piVar10;
        uVar13 = 0;
        if (*(ushort *)(iVar12 + 0xb6) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(int *)(iVar12 + 0x58) + (uint)uVar13 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar14 = (undefined4 *)
                       (iVar12 + 0xc0 + *(int *)(*(int *)(iVar12 + 0x58) + 4 + (uint)uVar13 * 8) * 8)
              ;
              goto code_?;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(iVar12 + 0xb6));
        }
        puVar14 = (undefined4 *)func_?();
code_?:
        piVar15 = (int *)(*(code *)*puVar14)();
        if (piVar15 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar15 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
          func_?();
          break;
        }
        puVar14 = (undefined4 *)func_?();
        pSStack_4 = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)*puVar14;
        pMStack_5 = (MonitorData *)puVar14[1];
        pIVar16 = (IntVector *)func_?();
        chunkPos = *pIVar16;
        pCVar17 = (ChunkInstances_ChunkInstanceVariables *)
                  SubscribableVariableBase`1[UnityEngine::Quaternion]::
                  SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                            ((Quaternion *)&stack0xffffffc4,
                             (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)&pSStack_4,
                             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                            );
        CullingTerrainManager_CreateCullingSubscriber(this,chunkPos,*pCVar17,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

