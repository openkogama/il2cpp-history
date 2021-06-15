
/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Destroy
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (this_00,(this->fields)._._._.id,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_Destroy((MVCubeModelBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ChunkInstances+ChunkInstanceVariables GetChunkInstance(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_GetChunkInstance
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,
          MVCubeModelPrototypeTerrain *this,IntVector chunkPos,MethodInfo *method)

{
  this_00 = (this->fields)._.chunkInstances;
  if (this_00 != (ChunkInstances *)0x0) {
    pCVar1 = ChunkInstances::ChunkInstances_GetChunk(&CStack_2,this_00,chunkPos,(MethodInfo *)0x0);
    pBVar3 = pCVar1->collider;
    pMVar4 = pCVar1->renderer;
    pMVar5 = pCVar1->filter;
    __return_storage_ptr__->gameObject = pCVar1->gameObject;
    __return_storage_ptr__->collider = pBVar3;
    __return_storage_ptr__->renderer = pMVar4;
    __return_storage_ptr__->filter = pMVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pCVar1 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar6)();
  return pCVar1;
}


/* Vector3 GetRandomCubePos() */

Vector3 * Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
          MVCubeModelPrototypeTerrain_GetRandomCubePos
                    (Vector3 *__return_storage_ptr__,MVCubeModelPrototypeTerrain *this,
                    MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    pVVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetRandomCubePos
                       (&VStack_2,this_00,(this->fields)._._.gameObject,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Initialize
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  chunkInstances = (this->fields)._.chunkInstances;
  this_00 = (CullingTerrainManager *)func_?(TypeInfo__CullingTerrainManager);
  CullingTerrainManager::CullingTerrainManager__ctor
            (this_00,chunkInstances,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void RemoveCubeNetworkUpdate(IntVector) */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemoveCubeNetworkUpdate
               (MVCubeModelPrototypeTerrain *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).removedCubes;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_This_has_already_been_destroyed,(MethodInfo *)0x0);
      return;
    }
    pRVar3 = (this->fields)._.prototypeCubeModel;
    pDVar1 = (this->fields).removedCubes;
    if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
      value = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                        (pRVar3,pos,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
        in_stack_4 =
             (undefined2)
             ((uint)
              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
             >> 0x10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,pos,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Add_MV__WorldObject__IntVector__MV__WorldObject__CubeBase_
                  );
        pRVar3 = (this->fields)._.prototypeCubeModel;
        if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
          in_stack_4 = 0x1040;
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCubeNetworkUpdate
                    (pRVar3,pos,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean RemovedCubesContainsKey(IntVector) */

bool Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
               (MVCubeModelPrototypeTerrain *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,intVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_Reset
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  method_00 = unaff_EDI;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.fields.list = (IList_1_VoxelHit_ *)0x0;
  CStack_6.klass = (Collection_1_VoxelHit___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  this_00 = (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::TerrainAPI::
    TerrainUtility+TerrainMap+TileCoord,System::Object]::
    Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
              (&DStack_8,
               (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar9 = func_?(), cVar9 != '\0') {
      pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_8.current,
                          (InputToPlayerMovementAndroid *)&stack0xffffff9c,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar10->x;
      CStack_6.monitor = (MonitorData *)pVVar10->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar10->z;
      iVar11 = func_?();
      uStack_12 = *(undefined2 *)(iVar11 + 4);
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items
                (&CStack_6,
                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Value__
                );
      DStack_8.dictionary =
           (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
            *)(this->klass->vtable).DirtyChunksRegeneratedHandler.methodPtr;
      (*(code *)(this->klass->vtable).AddCubeNetworkUpdate_1.method)();
    }
    unaff_EDI = (MethodInfo *)0x0;
    *puStack_7 = 0x52;
    uStack_1 = 0xffffffff;
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).removedCubes;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Clear__
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  func_?(unaff_EDI);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVCubeModelPrototypeTerrain(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

void Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
               (MVCubeModelPrototypeTerrain *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
               Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  pIStack_3 = (IEnumerable *)0x0;
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__Dictionary__
            );
  (this->fields).removedCubes = this_01;
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  this_00 = (this->fields)._._.gameObject;
  *(undefined4 *)&(this->fields)._._.interactionFlags = 4;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  if (this_00 != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?();
    }
    pNVar4 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                       ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffc8,transform,
                        (MethodInfo *)0x0);
    pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
                 (pNVar4->value).m_Center.x;
    pMStack_2 = (MonitorData *)(pNVar4->value).m_Center.y;
    pIStack_3 = (IEnumerable *)(pNVar4->value).m_Center.z;
    uVar5 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Byte]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&pEStack_1,
                       *(MethodInfo **)&pNVar4->has_value);
    if (uVar5 == 0) {
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_8 = 0;
      uStack_9 = 0;
      uStack_10 = 0;
    }
    else {
      puVar11 = (undefined4 *)func_?();
      uStack_6 = *puVar11;
      uStack_7 = puVar11[1];
      uStack_8 = puVar11[2];
      uStack_9 = puVar11[3];
      uStack_10 = *(undefined8 *)(puVar11 + 4);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      bounds.m_Center.y = (float)uStack_7;
      bounds.m_Center.x = (float)uStack_6;
      bounds.m_Center.z = (float)uStack_8;
      bounds.m_Extents.x = (float)uStack_9;
      bounds.m_Extents.y = (float)uStack_10;
      bounds.m_Extents.z = (float)((ulonglong)uStack_10 >> 0x20);
      MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                (this_02,bounds,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean get_RequiresResetToEdit() */

bool Assembly-CSharp.dll::MVCubeModelPrototypeTerrain::
     MVCubeModelPrototypeTerrain_get_RequiresResetToEdit
               (MVCubeModelPrototypeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).removedCubes;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Count__
                       );
    return 0 < (int)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

