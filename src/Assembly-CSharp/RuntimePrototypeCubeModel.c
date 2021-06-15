
/* Void AddChunk(IntVector) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).instances;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_9,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_6.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar8->hashset;
    CStack_6.monitor = (MonitorData *)pHVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar8->stamp;
    CStack_6.fields.syncRoot = (Object *)pHVar8->current;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x4f;
        uStack_1 = 0xffffffff;
        func_?((short)&CStack_6,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_6,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (this_01,(int32_t)id,(MethodInfo *)0x0);
      cubeInstance = (MVCubeModelBase *)func_?();
      RuntimePrototypeCubeModel_SetInstanceDataRef(this,chunkPos,cubeInstance,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean AddCube(IntVector, Cube) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCube
               (RuntimePrototypeCubeModel *this,IntVector pos,Cube *cube,MethodInfo *method)

{
  this_02 = this;
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  iStack_3 = pos.y;
  IVar4.z = pos.x;
  IVar4._0_4_ = &stack0xfffffff4;
  IVar4 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar4,CONCAT22(uVar1,pos.z),method_00);
  pIVar5 = IVar4._0_4_;
  uVar6 = pIVar5->x;
  uVar7 = pIVar5->y;
  iStack8 = uVar7;
  if ((this->fields).chunks == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
  goto code_?;
  bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System
          ::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                    ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this->fields).chunks,
                     *pIVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                    );
  if (bVar9 != 0) {
    this_00 = (this->fields).chunks;
    if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
    goto code_?;
    key.y = iStack8;
    key.x = uVar6;
    this._2_2_ = (int16_t)((uint)
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          >> 0x10);
    key.z = this._2_2_;
    this_03 = (CubeModelChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_03 == (CubeModelChunk *)0x0) goto code_?;
    cube._0_2_ = pos.z;
    iStack8 = iStack_3;
    bVar9 = CubeModelChunk::CubeModelChunk_ContainsCube(this_03,pos,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      return 0;
    }
  }
  iStack8 = (int16_t)((uint)this_02 >> 0x10);
  RuntimePrototypeCubeModel_AddToChunk
            (this_02,pos,(Cube *)CONCAT22(cube._2_2_,(int16_t)cube),
             MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
  this_01 = (this_02->fields).deltaCubes;
  if (this_01 != (DeltaCubes *)0x0) {
    DeltaCubes::DeltaCubes_Enqueue(this_01,pos,CubeAction__Enum_Added,(MethodInfo *)0x0);
    return 1;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void AddCubeNetworkUpdate(IntVector, Cube, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
               (RuntimePrototypeCubeModel *this,IntVector iVector,Cube *cube,
               MeshGeneratePriority__Enum priority,MethodInfo *method)

{
  RuntimePrototypeCubeModel_AddToChunk(this,iVector,cube,priority,1,(MethodInfo *)0x0);
  return;
}


/* Void AddRefenceToChunk(IntVector ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddRefenceToChunk
               (RuntimePrototypeCubeModel *this,IntVector *chunkPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                         *chunkPosition,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
      pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      SpawnRolePreviewer::SpawnRolePreviewer_set_PreviewGameObject
                ((SpawnRolePreviewer *)this_01,(GameObject *)((int)&pOVar1->klass + 1),
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddReferenceToAllChunks() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_AddReferenceToAllChunks
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

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
  this_00 = (this->fields).chunks;
  puStack_8 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_10,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
        *puStack_8 = 0x4c;
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar12 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_10.current,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar12->x;
      CStack_6.monitor = (MonitorData *)pVVar12->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar12->z;
      this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) break;
      pOVar13 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      SpawnRolePreviewer::SpawnRolePreviewer_set_PreviewGameObject
                ((SpawnRolePreviewer *)this_01,(GameObject *)((int)&pOVar13->klass + 1),
                 (MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void AddToChunk(IntVector, Cube, MeshGeneratePriority, Boolean) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
               (RuntimePrototypeCubeModel *this,IntVector iVector,Cube *cube,
               MeshGeneratePriority__Enum meshGeneratePriority,bool setVisibility,MethodInfo *method
               )

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  IVar3.z = iVector.x;
  IVar3._0_4_ = &stack0xfffffff4;
  IVar3 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar3,CONCAT22(uVar1,iVector.z),method_00);
  pIVar4 = IVar3._0_4_;
  key = *pIVar4;
  chunkPos_00 = *pIVar4;
  chunkPos = *pIVar4;
  IVar5 = *pIVar4;
  IVar3 = *pIVar4;
  if ((this->fields).chunks != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this->fields).chunks
                       ,*pIVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar6 == 0) {
      pCVar7 = (CubeModelChunk *)func_?();
      CubeModelChunk::CubeModelChunk__ctor(pCVar7,IVar3,(MethodInfo *)0x0);
      pDVar8 = (this->fields).chunks;
      if (pDVar8 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8,IVar5,
                 (Object *)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                );
      _setVisibility = (Cube *)0x0;
      in_stack_9 = (undefined2)((uint)this >> 0x10);
      iVector.x = -0x3e9c;
      iVector.y = 0x1028;
      RuntimePrototypeCubeModel_AddChunk(this,chunkPos,(MethodInfo *)0x0);
    }
    pDVar8 = (this->fields).chunks;
    if (pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      pCVar7 = (CubeModelChunk *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                         );
      if (pCVar7 != (CubeModelChunk *)0x0) {
        IVar5.y = iVector.y;
        IVar5.x = iVector.x;
        iVector.z = (int16_t)_setVisibility;
        in_stack_9 = (undefined2)((uint)_setVisibility >> 0x10);
        IVar5.z = iVector.z;
        cube._0_1_ = (bool)_setVisibility;
        CubeModelChunk::CubeModelChunk_AddToChunk
                  (pCVar7,IVar5,_setVisibility,(bool)cube,(MethodInfo *)0x0);
        RuntimePrototypeCubeModel_AddToDirtyChunks
                  (this,chunkPos_00,MeshGeneratePriority__Enum_None,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AddToDirtyChunks(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToDirtyChunks
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,
               MeshGeneratePriority__Enum meshGeneratePriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).useMeshGeneratePrioritySystem != 0) &&
     (meshGeneratePriority != MeshGeneratePriority__Enum_None)) {
    this_00 = (this->fields).dirtyChunks;
    if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__Add
              (this_00,chunkPos,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
              );
    iVar1 = (this->fields).meshGeneratePriority;
    if (iVar1 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame *)0x0) {
code_?:
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_02 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_01,(MethodInfo *)0x0);
      if (this_02 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
      goto code_?;
      this_03 = (MVWorldInventory *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (this_02,(MethodInfo *)0x0);
      if (this_03 == (MVWorldInventory *)0x0) goto code_?;
      MVWorldInventory::MVWorldInventory_AddRuntimePrototypeToDirty(this_03,this,(MethodInfo *)0x0);
      iVar1 = (this->fields).meshGeneratePriority;
    }
    if (iVar1 < (int)meshGeneratePriority) {
      (this->fields).meshGeneratePriority = meshGeneratePriority;
    }
  }
  return;
}


/* RuntimePrototypeCubeModel CloneGeometry(Boolean) */

RuntimePrototypeCubeModel *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
          (RuntimePrototypeCubeModel *this,bool withDeltaCubes,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff6c;
  puVar5 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (Il2CppType *)0x0;
  auStack_7._12_4_ = (char *)0x0;
  auStack_7._16_4_ = (Il2CppClass *)0x0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffff6c;
  puStack_4 = &stack0xffffff6c;
  pRVar9 = (RuntimePrototypeCubeModel *)func_?(TypeInfo__RuntimePrototypeCubeModel);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  uStack_10 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (uStack_10 != (LoggerManager *)0x0) {
    pIVar11 = LoggerManager::LoggerManager_GetLogger(uStack_10,type,(MethodInfo *)0x0);
    (((MonoBehaviour__Fields *)&(pRVar9->fields).logger)->_)._._.m_CachedPtr = pIVar11;
    pHVar12 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar12,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    (pRVar9->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar12;
    (pRVar9->fields).useMeshGeneratePrioritySystem = 1;
    (pRVar9->fields).chunkSize = 0x20;
    (pRVar9->fields).prototypeState = 1;
    method_01 = TypeInfo__System__Collections__Generic__List<unsigned_char>;
    this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    (pRVar9->fields).pendingDeltaCubes = (List_1_System_Byte__1 *)this_01;
    (pRVar9->fields).prototypeId = -1;
    this_02 = (DeltaCubes *)func_?();
    DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
    (pRVar9->fields).deltaCubes = this_02;
    pDVar13 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar13,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
              );
    (pRVar9->fields).chunks = pDVar13;
    pHVar12 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar12,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (pRVar9->fields).instances = (HashSet_1_System_Int32_ *)pHVar12;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)pRVar9,0.0,(MethodInfo *)method_01);
    (pRVar9->fields)._Scale_k__BackingField = (float)(this->fields)._Scale_k__BackingField;
    (pRVar9->fields)._AuthorProfileID_k__BackingField =
         (this->fields)._AuthorProfileID_k__BackingField;
    pDVar13 = (this->fields).chunks;
    pRStack_14 = pRVar9;
    if (pDVar13 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::TerrainAPI
      ::TerrainUtility+TerrainMap+TileCoord,System::Object]::
      Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                (&DStack_15,
                 (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                  *)pDVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar16 = func_?(), cVar16 != '\0') {
        method_00 = (MethodInfo *)auStack_7;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)method_00,(InputToPlayerMovementAndroid *)&stack0xffffff78,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                           );
        auStack_7._12_4_ = pVVar17->x;
        auStack_7._16_4_ = pVVar17->y;
        pIStack_6 = (Il2CppType *)pVVar17->z;
        if (pRVar9 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        pDVar13 = (pRVar9->fields).chunks;
        puVar18 = (undefined4 *)func_?();
        uStack_19 = *puVar18;
        uStack_10 = (LoggerManager *)CONCAT22(*(undefined2 *)(puVar18 + 1),(undefined2)uStack_10);
        pCStack_20 = (CubeModelChunk *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)(auStack_7 + 0xc),
                                MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                               );
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                           (&VStack_21,(MethodInfo *)0x0);
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&DStack_15.current,*pVVar17,
                            (this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
        if ((pCStack_20 == (CubeModelChunk *)0x0) ||
           (value = CubeModelChunk::CubeModelChunk_CloneGeometry(pCStack_20,*pVVar17,method_00),
           pDVar13 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0))
        goto code_?;
        key.z = uStack_10._2_2_;
        key._0_4_ = uStack_19;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar13,key,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                  );
      }
      *puStack_8 = 0x84;
      uStack_1 = 0xffffffff;
      func_?(&stack0xffffff78,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     );
      if (withDeltaCubes == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return pRVar9;
      }
      this_00 = (Collection_1_VoxelHit_ *)(this->fields).deltaCubes;
      if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
        cubeChangeOriginal =
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        pRStack_14 = (RuntimePrototypeCubeModel *)func_?();
        DeltaCubes::DeltaCubes__ctor_1
                  ((DeltaCubes *)pRStack_14,
                   (IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
                    *)cubeChangeOriginal,(MethodInfo *)0x0);
        if (pRVar9 != (RuntimePrototypeCubeModel *)0x0) {
          (pRVar9->fields).deltaCubes = (DeltaCubes *)pRStack_14;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  pRVar9 = (RuntimePrototypeCubeModel *)(*pcVar22)();
  return pRVar9;
}


/* Boolean CompareGeometry(RuntimePrototypeCubeModel) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
               (RuntimePrototypeCubeModel *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  aCStack_6[0].fields.list = (IList_1_VoxelHit_ *)0x0;
  iStack_7 = 0;
  aCStack_6[0].klass = (Collection_1_VoxelHit___Class *)0x0;
  aCStack_6[0].monitor = (MonitorData *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  piStack_9 = (int *)&stack0xffffff84;
  puStack_4 = &stack0xffffff84;
  iVar10 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
  if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
    iVar11 = RuntimePrototypeCubeModel_get_CubeCount(rpcm,(MethodInfo *)0x0);
    if (iVar10 != iVar11) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    pDVar12 = (this->fields).chunks;
    if (pDVar12 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::TerrainAPI
      ::TerrainUtility+TerrainMap+TileCoord,System::Object]::
      Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                (&DStack_13,
                 (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                  *)pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar14 = func_?();
        piVar15 = piStack_9;
        if (cVar14 == '\0') {
          *piStack_9 = 0x93;
          goto code_?;
        }
        method_00 = (InputToPlayerMovementAndroid__Class *)&UNK_?;
        pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)&DStack_13.current,
                            (InputToPlayerMovementAndroid *)&stack0xffffff90,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                           );
        aCStack_6[0].klass = (Collection_1_VoxelHit___Class *)pVVar16->x;
        aCStack_6[0].monitor = (MonitorData *)pVVar16->y;
        DStack_13.dictionary =
             (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
              *)
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
        ;
        pDVar12 = (rpcm->fields).chunks;
        aCStack_6[0].fields.list = (IList_1_VoxelHit_ *)pVVar16->z;
        pIVar17 = (IntVector *)func_?();
        if (pDVar12 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar12,*pIVar17,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                          );
        if (bVar18 == 0) break;
        this_00 = (CubeModelChunk *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            (aCStack_6,
                             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                            );
        pDVar12 = (rpcm->fields).chunks;
        pIVar17 = (IntVector *)func_?();
        if ((pDVar12 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) ||
           (chunk = (CubeModelChunk *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar12,
                               *pIVar17,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              ), this_00 == (CubeModelChunk *)0x0)) goto code_?;
        bVar18 = CubeModelChunk::CubeModelChunk_CompareGeometry
                          (this_00,chunk,(MethodInfo *)method_00);
      } while (bVar18 != 0);
      piVar15 = piStack_9;
      *piStack_9 = 0x95;
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (iStack_7 == 0) {
        if (*piVar15 != 0x95) {
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar18 = (*pcVar19)();
  return bVar18;
}


/* Void CompareGeometryDetailed(RuntimePrototypeCubeModel, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_CompareGeometryDetailed
               (RuntimePrototypeCubeModel *this,RuntimePrototypeCubeModel *rpcm,
               bool visibleCubesOnly,int32_t *matchingCubeCount,int32_t *investigatedCubeCount,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
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
  auStack_7._0_4_ = (InputToPlayerMovementAndroid__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  pMStack_8 = (MethodInfo *)0x0;
  fStack_9 = 0.0;
  pCStack_10 = (CubeModelChunk *)0x0;
  uStack_11._0_4_ = 0.0;
  uStack_11._4_4_ = 0.0;
  func_?();
  this_00 = (this->fields).chunks;
  puStack_12 = (undefined4 *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_12 = (undefined4 *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_14,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    fStack_9 = (float)(pDVar13->current).key.tileX;
    uStack_11 = *(undefined8 *)&(pDVar13->current).key.tileZ;
    uStack_1 = 0;
    while( true ) {
      pMStack_8 = 
      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
      ;
      auStack_7._4_4_ = auStack_7;
      auStack_7._0_4_ = &UNK_?;
      cVar15 = func_?();
      if (cVar15 == '\0') {
        *puStack_12 = 0x61;
        uStack_1 = 0xffffffff;
        func_?(auStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar16 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_14.current,(InputToPlayerMovementAndroid *)auStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar16->x;
      CStack_6.monitor = (MonitorData *)pVVar16->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar16->z;
      pCStack_10 = (CubeModelChunk *)0x0;
      if (rpcm == (RuntimePrototypeCubeModel *)0x0) break;
      unaff_ESI = (rpcm->fields).chunks;
      pIVar17 = (IntVector *)
               func_?(&CStack_6.fields.syncRoot,&CStack_6,
                               MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                              );
      if (unaff_ESI == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryGetValue
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)unaff_ESI,*pIVar17,
                 (Object **)&pCStack_10,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                );
      this_01 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_CompareGeometry_1
                (this_01,pCStack_10,matchingCubeCount,investigatedCubeCount,visibleCubesOnly,
                 (MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void CornersChanged(IntVector, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CornersChanged
               (RuntimePrototypeCubeModel *this,IntVector iVector,Cube *cube,MethodInfo *method)

{
  RuntimePrototypeCubeModel_AddToChunk
            (this,iVector,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
  this_00 = (this->fields).deltaCubes;
  if (this_00 != (DeltaCubes *)0x0) {
    DeltaCubes::DeltaCubes_Enqueue
              (this_00,iVector,CubeAction__Enum_CornersChanged,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CornersChangedDone(IntVector, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CornersChangedDone
               (RuntimePrototypeCubeModel *this,IntVector iVector,Cube *cube,MethodInfo *method)

{
  RuntimePrototypeCubeModel_AddToChunk
            (this,iVector,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
  this_00 = (this->fields).deltaCubes;
  if (this_00 != (DeltaCubes *)0x0) {
    DeltaCubes::DeltaCubes_Enqueue
              (this_00,iVector,CubeAction__Enum_CornersChangedDone,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Create(Int32, Int32, Single, Byte[]) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Create
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).prototypeId = id;
  (this->fields)._Scale_k__BackingField = scale;
  (this->fields)._AuthorProfileID_k__BackingField = authorProfileId;
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0)
  ;
  RuntimePrototypeCubeModel_CreateFromBytePackage(this,this_00,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_SetVisibility(this,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_RebuildPrototypeMesh(this,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_set_PrototypeState
            (this,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
  return;
}


/* Void CreateFromBytePackage(BytePacker) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateFromBytePackage
               (RuntimePrototypeCubeModel *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  iStack_2 = 0;
  if (bp != (BytePacker *)0x0) {
    iStack_3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                         (bp,(MethodInfo *)0x0);
    if (0 < iStack_3) {
      do {
        iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        func_?(&uStack_1,iVar4,iVar5,iVar6,0);
        uVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        _uStack_c = CONCAT31(uStack_8,uVar7);
        pCVar9 = (Cube *)func_?(TypeInfo__Cube);
        uVar7 = (uint8_t)_uStack_c;
        pCStack_10 = pCVar9;
        Cube::Cube__ctor_1(pCVar9,bp,uVar7,(MethodInfo *)0x0);
        iVector.z = iStack_2;
        iVector.x = (undefined2)uStack_1;
        iVector.y = uStack_1._2_2_;
        RuntimePrototypeCubeModel_AddToChunk
                  (this,iVector,pCVar9,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000
             ) != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
          func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
        }
        iVar11 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubesInRow
                          (uVar7,(MethodInfo *)0x0);
        iVar12 = 1;
        if (1 < iVar11) {
          do {
            iVar4 = iStack_2;
            sVar13 = (short)uStack_1;
            uStack_14._2_2_ = (undefined2)((uint)uStack_1 >> 0x10);
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?(TypeInfo__Cube);
            }
            pCVar9 = Cube::Cube_Clone_1(pCStack_10,(MethodInfo *)0x0);
            iVector_00.z = iVar4;
            iVector_00.x = (short)iVar12 + sVar13;
            iVector_00.y = uStack_14._2_2_;
            RuntimePrototypeCubeModel_AddToChunk
                      (this,iVector_00,pCVar9,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar11);
        }
        iStack_3 = iStack_3 + -1;
      } while (iStack_3 != 0);
    }
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void CreateInstance(MVCubeModelBase) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
               (RuntimePrototypeCubeModel *this,MVCubeModelBase *cm,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff60;
  puVar5 = &stack0xffffff60;
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  pHStack_7 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
  uStack_8 = 0;
  IStack_9.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_9.monitor = (MonitorData *)0x0;
  IStack_9.fields.jump = 0;
  IStack_9.fields.jumpFrameUpdate = 0;
  IStack_9.fields.jumpFixedUpdate = 0;
  IStack_9.fields._3_1_ = 0;
  IStack_9.fields.direction.x = 0.0;
  IStack_9.fields.direction.y = 0.0;
  IStack_9.fields.direction.z = 0.0;
  func_?();
  uStack_10 = 0xffffffff;
  piStack_11 = (int *)&stack0xffffff60;
  puStack_4 = &stack0xffffff60;
  if ((cm == (MVCubeModelBase *)0x0) ||
     (piStack_11 = (int *)&stack0xffffff60, puStack_4 = &stack0xffffff60,
     pMVar12 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                        ((MVMovingPlatformNode *)cm,(MethodInfo *)0x0),
     pMVar12 == (MVMovingPlatformNode *)0x0)) {
code_?:
    pHVar13 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)func_?();
    pHVar14 = unaff_EDI;
code_?:
    func_?(pHVar13,0,0);
code_?:
    func_?((short)pHVar14);
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar16 = func_?(0);
  uStack_1 = 0;
  iStack_17 = iVar16;
code_?:
  if (iVar16 != 0) {
    cVar18 = func_?(1);
    if (cVar18 == '\0') {
      unaff_EDI = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
      *piStack_11 = 0x55;
      uStack_1 = 0xffffffff;
      uVar19 = 0xcf14;
      uVar20 = 0x1028;
      iVar16 = func_?();
      if (iVar16 != 0) {
        uVar19 = (undefined2)iVar16;
        uVar20 = (undefined2)((uint)iVar16 >> 0x10);
        func_?(0,TypeInfo__System__IDisposable);
      }
      pHVar13 = pHStack_7;
      pHVar14 = unaff_EDI;
      if (pHStack_7 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        if (*piStack_11 == 0x55) {
          unaff_EDI = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0xffffffff;
        }
        if ((cm != (MVCubeModelBase *)0x0) &&
           (pMVar12 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                               ((MVMovingPlatformNode *)cm,(MethodInfo *)CONCAT22(uVar20,uVar19)),
           pMVar12 != (MVMovingPlatformNode *)0x0)) {
          ChunkInstances::ChunkInstances_Clear((ChunkInstances *)pMVar12,(MethodInfo *)0x0);
          this_00 = (this->fields).chunks;
          if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
            pDVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     Experimental::TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
                     Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                                 *)auStack_22,
                                (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                                 *)this_00,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                               );
            IStack_9.klass = (InputToPlayerMovementAndroid__Class *)pDVar21->dictionary;
            IStack_9.monitor = (MonitorData *)pDVar21->next;
            IStack_9.fields._0_4_ = pDVar21->stamp;
            IStack_9.fields.direction.x = (float)(pDVar21->current).key.tileX;
            IStack_9.fields.direction._4_8_ = *(undefined8 *)&(pDVar21->current).key.tileZ;
            uStack_1 = 2;
            while (cVar18 = func_?(), pHVar14 = pHStack_7, cVar18 != '\0') {
              pVVar23 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                 (&VStack_24,&IStack_9,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                                 );
              uStack_8._0_4_ = pVVar23->x;
              uStack_8._4_4_ = pVVar23->y;
              IStack_9.klass =
                   (InputToPlayerMovementAndroid__Class *)
                   MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
              ;
              fStack_6 = pVVar23->z;
              pIVar25 = (IntVector *)func_?();
              RuntimePrototypeCubeModel_SetInstanceDataRef(this,*pIVar25,cm,(MethodInfo *)0x0);
            }
            piStack_11[(int)((int)&unaff_EDI->klass + 1)] = 0xa8;
            uStack_1 = 0xffffffff;
            func_?();
            if (pHVar14 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
            goto code_?;
            unaff_EDI = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                        (this->fields).instances;
            if ((cm != (MVCubeModelBase *)0x0) &&
               (item = (UnityWebRequest *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)cm,(MethodInfo *)0x0),
               unaff_EDI != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)) {
              System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
              UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                        (unaff_EDI,item,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    piVar26 = (int *)func_?(0);
    if (piVar26 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar26 + 0x20) ==
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      func_?();
    }
  }
  goto code_?;
code_?:
  func_?();
  pQVar27 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
           SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                     ((Quaternion *)(auStack_22 + 8),
                      (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)&stack0xffffff6c,
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                     );
  pOStack_28 = (Object_1 *)pQVar27->x;
  VStack_24.x = pQVar27->y;
  VStack_24.y = pQVar27->z;
  VStack_24.z = pQVar27->w;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?((short)TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOStack_28,(MethodInfo *)0x0);
  goto code_?;
}


/* Void CubePosToChunkPos(IntVector ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CubePosToChunkPos
               (RuntimePrototypeCubeModel *this,IntVector *cubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar3 = cubePos->z;
  uVar4 = cubePos->x;
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  IVar5.z = uVar4;
  IVar5._0_4_ = auStack_6;
  IVar5 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar5,CONCAT22(uVar1,iVar3),method_00);
  uVar7 = *IVar5._0_4_;
  sVar8 = *(short *)(IVar5._0_4_ + 1);
  cubePos->x = cubePos->x - (short)(this->fields).chunkSize * (short)uVar7;
  cubePos->y = cubePos->y - (short)((uint)uVar7 >> 0x10) * (short)(this->fields).chunkSize;
  cubePos->z = cubePos->z - (short)(this->fields).chunkSize * sVar8;
  return;
}


/* Void DecodeBytePacker(BytePacker, RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_DecodeBytePacker
               (BytePacker *bp,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    do {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)bp,
                          (MethodInfo *)0x0);
      iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                        (bp,(MethodInfo *)0x0);
      if (iVar2 <= (int)pOVar1) {
        return;
      }
      uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar7 = 0;
      func_?(&stack0xfffffff0,iVar4,iVar5,iVar6);
      switch(uVar3) {
      case 0:
        if (rpcm == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_00.z = 0;
        iVector_00.x = (short)uVar7;
        iVector_00.y = (short)(uVar7 >> 0x10);
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (rpcm,iVector_00,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        break;
      case 2:
      case 3:
      case 4:
        if (rpcm == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_01.z = 0;
        iVector_01.x = (short)uVar7;
        iVector_01.y = (short)(uVar7 >> 0x10);
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (rpcm,iVector_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        this = (Cube *)func_?(TypeInfo__Cube);
        Cube::Cube__ctor_1(this,bp,uVar3,(MethodInfo *)0x0);
        iVector.z = 0;
        iVector.x = (short)uVar7;
        iVector.y = (short)(uVar7 >> 0x10);
        RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                  (rpcm,iVector,this,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
    } while( true );
  }
code_?:
  cVar8 = '\0';
  pbVar9 = (byte *)func_?(0);
  bVar10 = (byte)extraout_ECX;
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 >> (bVar10 & 0x1f);
  bVar12 = (extraout_ECX & 0x1f) == 0;
  bVar13 = bVar12 * cVar8 | !bVar12 * ((bVar11 >> (bVar10 & 0x1f) - 1 & 1) != 0);
  bVar14 = (byte)(extraout_ECX >> 8);
  bVar15 = bVar10 + bVar14 + bVar13;
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 >> (bVar15 & 0x1f);
  bVar12 = (bVar15 & 0x1f) == 0;
  bVar13 = bVar12 * (CARRY1(bVar10,bVar14) || CARRY1(bVar10 + bVar14,bVar13)) |
           !bVar12 * ((bVar11 >> (bVar15 & 0x1f) - 1 & 1) != 0);
  bVar10 = bVar15 + bVar14 + bVar13;
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 >> (bVar10 & 0x1f);
  bVar12 = (bVar10 & 0x1f) == 0;
  *pbVar9 = *pbVar9 >>
             (bVar10 + bVar14 +
              (bVar12 * (CARRY1(bVar15,bVar14) || CARRY1(bVar15 + bVar14,bVar13)) |
              !bVar12 * ((bVar11 >> (bVar10 & 0x1f) - 1 & 1) != 0)) & 0x1f);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
  this_00 = (this->fields).chunks;
  puStack_4 = &stack0xffffffa0;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_4 = &stack0xffffffa0;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_9,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    IStack_7.klass = (InputToPlayerMovementAndroid__Class *)pDVar8->dictionary;
    IStack_7.monitor = (MonitorData *)pDVar8->next;
    IStack_7.fields._0_4_ = pDVar8->stamp;
    IStack_7.fields.direction.x = (float)(pDVar8->current).key.tileX;
    IStack_7.fields.direction._4_8_ = *(undefined8 *)&(pDVar8->current).key.tileZ;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar11 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_9.current,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar11->x;
      CStack_6.monitor = (MonitorData *)pVVar11->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar11->z;
      this_01 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_Destroy(this_01,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void FineGrainedTerrainOverrideChunkSize(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_FineGrainedTerrainOverrideChunkSize
               (RuntimePrototypeCubeModel *this,int32_t size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_IsPowerOfTwo(size,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    iVar2 = RuntimePrototypeCubeModel_get_CubeCount(unaff_EDI,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      (unaff_EDI->fields).chunkSize = size;
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Can_not_override_chunk_size_if_c,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Not_power_of_2,(MethodInfo *)0x0);
  return;
}


/* BytePacker GetBytePackerFromCubeDict(Dictionary`2[MV.WorldObject.IntVector,Cube], Boolean) */

BytePacker *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetBytePackerFromCubeDict
          (Dictionary_2_MV_WorldObject_IntVector_Cube_ *cubesDict,bool addCount,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this = (MethodInfo *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor
            ((BytePacker *)this,(MethodInfo *)0x0);
  if (addCount != 0) {
    if ((cubesDict == (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) ||
       (unaff_EBX = (MethodInfo *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                    KeyValuePair`2[System::Object,System::Object],System::Object]::
                    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                *)cubesDict,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__get_Count__
                              ), this == (MethodInfo *)0x0)) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_6
              ((BytePacker *)this,(int32_t)unaff_EBX,(MethodInfo *)0x0);
  }
  if (cubesDict != (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::TerrainAPI::
    TerrainUtility+TerrainMap+TileCoord,System::Object]::
    Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                *)&stack0xffffff8c,
               (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                *)cubesDict,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (BytePacker *)this;
      }
      InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                ((Vector3 *)&puStack_5,(InputToPlayerMovementAndroid *)&stack0xffffff74,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__get_Current__
                );
      puVar6 = (undefined4 *)func_?();
      uVar7 = *puVar6;
      puVar6 = (undefined4 *)func_?();
      uVar8 = *puVar6;
      iVar9 = func_?();
      z = *(int16_t *)(iVar9 + 4);
      this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)&stack0xffffffa4,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cube>__get_Value__
                          );
      if (this_00 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
      byteCorners = (Byte__Array *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (this_00,unaff_EBX);
      this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)&stack0xffffffa4,
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cube>__get_Value__
                             );
      if (this_01 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) break;
      materials = (Byte__Array *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_EBX = this;
      MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
                ((BytePacker *)this,(int16_t)uVar7,(int16_t)((uint)uVar8 >> 0x10),z,byteCorners,
                 materials,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pBVar11 = (BytePacker *)(*pcVar10)();
  return pBVar11;
}


/* CubeModelChunk GetChunkFromCubePos(IntVector) */

CubeModelChunk *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetChunkFromCubePos
          (RuntimePrototypeCubeModel *this,IntVector cubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  IVar3.z = cubePos.x;
  IVar3._0_4_ = &cubePos;
  IVar3 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar3,CONCAT22(uVar1,cubePos.z),method_00);
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    value = (CubeModelChunk__Class *)&stack0xfffffff8;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__TryGetValue
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,*IVar3._0_4_,
                       (Object **)value,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                      );
    if (bVar4 == 0) {
      value = (CubeModelChunk__Class *)0x0;
    }
    return (CubeModelChunk *)value;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (CubeModelChunk *)(*pcVar5)();
  return pCVar6;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                 (RuntimePrototypeCubeModel *this,IntVector cubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  iVar3 = cubePos.z;
  iVector.y = cubePos.y;
  iVector.x = cubePos.x;
  IVar4.z = cubePos.x;
  IVar4._0_4_ = &cubePos;
  IVar4 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar4,CONCAT22(uVar1,cubePos.z),method_00);
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    this_01 = (CubeModelChunk *)
              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
    ;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__TryGetValue
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,*IVar4._0_4_,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                      );
    if ((bVar5 != 0) && (this_01 != (CubeModelChunk *)0x0)) {
      cubePos.z = 0;
      uStack6 = 0;
      cubePos.x = iVar3;
      iVector.z = iVar3;
      pCVar7 = CubeModelChunk::CubeModelChunk_GetCube(this_01,iVector,(MethodInfo *)0x0);
      return pCVar7;
    }
    return (Cube *)0x0;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pCVar7 = (Cube *)(*pcVar8)();
  return pCVar7;
}


/* GameObject GetMesh() */

GameObject *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetMesh
          (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_4 = (undefined4 *)&stack0xffffff48;
  func_?();
  pGVar5 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar5,(MethodInfo *)0x0);
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::TerrainAPI::
    TerrainUtility+TerrainMap+TileCoord,System::Object]::
    Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                *)&stack0xffffff70,
               (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar6 = func_?();
      if (cVar6 == '\0') {
        *puStack_4 = 0xbd;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return pGVar5;
      }
      method_00 = (InputToPlayerMovementAndroid__Class *)
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
      ;
      pVVar7 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&stack0xffffff98,
                          (InputToPlayerMovementAndroid *)&stack0xffffff58,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      method_01 = (MethodInfo *)pVVar7->z;
      pMVar8 = (MethodInfo *)&UNK_?;
      this_01 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                (this_01,(MethodInfo *)0x0);
      if (this_01 == (GameObject *)0x0) break;
      this_02 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (this_01,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (this_01,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                          );
      pCVar9 = (CubeModelChunk *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)&stack0xffffffac,
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                         );
      if (pCVar9 == (CubeModelChunk *)0x0) break;
      SVar10 = CubeModelChunk::CubeModelChunk_GetMeshData(pCVar9,(MethodInfo *)method_00);
      if (this_03 == (Worker *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                ((MeshFilter *)this_03,SVar10.mesh,pMVar8);
      pCVar9 = (CubeModelChunk *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)&stack0xffffffac,
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                         );
      if (pCVar9 == (CubeModelChunk *)0x0) break;
      SVar10 = CubeModelChunk::CubeModelChunk_GetMeshData(pCVar9,in_stack_11);
      if (this_02 == (MethodInfo *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)this_02,SVar10.material,in_stack_12);
      pMVar8 = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      if ((pGVar5 == (GameObject *)0x0) ||
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar5,in_stack_14), pMVar8 == (MethodInfo *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                ((Transform *)pMVar8,pTVar13,in_stack_15);
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      in_stack_11 = this_02;
      in_stack_14 = pMVar8;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
        in_stack_11 = this_02;
        in_stack_14 = pMVar8;
      }
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xffffff88,(MethodInfo *)0x0);
      if (pTVar13 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar13,*pVVar7,method_01);
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&stack0xffffff78,(MethodInfo *)0x0);
      if (pTVar13 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar13,*pQVar16,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?();
  pcVar17 = (code *)swi(3);
  pGVar5 = (GameObject *)(*pcVar17)();
  return pGVar5;
}


/* Vector3 GetRandomCubePos(GameObject) */

Vector3 * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetRandomCubePos
                    (Vector3 *__return_storage_ptr__,RuntimePrototypeCubeModel *this,GameObject *go,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunks;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                       );
    this_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source,
                         System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                        );
    pDVar1 = (this->fields).chunks;
    if (this_00 != (List_1_UseInteractor_ *)0x0) {
      max = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__get_Count__
                      );
      pMVar2 = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                         (0,(int32_t)max,(MethodInfo *)0x0);
      IVar3 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
              List_1_MV_WorldObject_IntVector__get_Item
                        ((List_1_MV_WorldObject_IntVector_ *)&stack0xfffffff4,(int32_t)this_00,
                         pMVar2);
      if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
        gameObject = *(GameObject **)IVar3._0_4_;
        pMVar2 = (MethodInfo *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,
                            *IVar3._0_4_,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                           );
        if (pMVar2 != (MethodInfo *)0x0) {
          IVar3 = CubeModelChunk::CubeModelChunk_GetFirstSolidCubePos
                            ((CubeModelChunk *)&stack0xfffffff4,pMVar2);
          IVar3 = *IVar3._0_4_;
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar4 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                             ((Vector3 *)&stack0xfffffff0,gameObject,IVar3,(MethodInfo *)0x0);
          _UNK_? = pVVar4->x;
          _UNK_? = pVVar4->y;
          _UNK_? = pVVar4->z;
          return (Vector3 *)&UNK_?;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar5)();
  return pVVar4;
}


/* Int32 GetRefenceCountFromChunk(IntVector ByRef) */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::
        RuntimePrototypeCubeModel_GetRefenceCountFromChunk
                  (RuntimePrototypeCubeModel *this,IntVector *chunkPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                         *chunkPosition,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
      pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      return (int32_t)pOVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void HandleDelta() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_HandleDelta
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).deltaCubes;
  while (pDVar1 != (DeltaCubes *)0x0) {
    iVar2 = DeltaCubes::DeltaCubes_get_Count(pDVar1,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return;
    }
    pDVar1 = (this->fields).deltaCubes;
    if (pDVar1 == (DeltaCubes *)0x0) break;
    prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar1,this,(MethodInfo *)0x0);
    if (prototypeData != (Byte__Array *)0x0) {
      iVar3 = (this->fields).prototypeState;
      if (iVar3 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                  (this_01,(this->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
      }
      else if (iVar3 == 1) {
        this_00 = (List_1_VoxelHit_ *)(this->fields).pendingDeltaCubes;
        if (this_00 == (List_1_VoxelHit_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                  (this_00,(IEnumerable_1_VoxelHit_ *)prototypeData,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                  );
      }
    }
    pDVar1 = (this->fields).deltaCubes;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean MeshGenerateDirtyChunks(Int32 ByRef) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_MeshGenerateDirtyChunks
               (RuntimePrototypeCubeModel *this,int32_t *meshUpdates,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pGStack_3 = (GUICellCursor_Fader *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pGStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Il2CppClass *)0x0;
  iStack_7 = 0;
  auStack_6._0_4_ = (HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  auStack_6._4_4_ = (Il2CppType **)0x0;
  auStack_6._8_4_ = (Il2CppRGCTXData *)0x0;
  auStack_6._12_4_ = (Il2CppGenericMethod *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  piStack_9 = (int *)&stack0xffffff64;
  puStack_4 = &stack0xffffff64;
  pHVar10 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  pHStack_11 = pHVar10;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar10,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  pHVar12 = (this->fields).dirtyChunks;
  pHStack_13 = pHVar10;
  if (pHVar12 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pHVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_6 + 0x14),
                        pHVar12,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    auStack_6._0_4_ = pHVar14->hashset;
    auStack_6._4_4_ = pHVar14->next;
    auStack_6._8_4_ = pHVar14->stamp;
    auStack_6._12_4_ = *(undefined4 *)&pHVar14->current;
    auStack_6._16_4_ = *(undefined4 *)&(pHVar14->current).z;
    uStack_1 = 0;
    do {
      cVar15 = func_?();
      if (cVar15 == '\0') break;
      IVar16 = GUICellCursor::GUICellCursor_get_LocalPos
                         ((GUICellCursor *)(aVStack_17 + 1),(MethodInfo *)auStack_6);
      puVar18 = IVar16._0_4_;
      fStack_19 = (this->fields)._Scale_k__BackingField;
      uStack_20 = *puVar18;
      iStack_21 = *(int16_t *)(puVar18 + 1);
      uStack_22 = *puVar18;
      iStack_23 = *(int16_t *)(puVar18 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                          (aVStack_17,(MethodInfo *)0x0);
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          (&VStack_25,fStack_19,*pVVar24,(MethodInfo *)0x0);
      IVar16.z = iStack_23;
      IVar16.x = (undefined2)uStack_22;
      IVar16.y = uStack_22._2_2_;
      RuntimePrototypeCubeModel_RebuildChunk(this,IVar16,*pVVar24,(MethodInfo *)0x0);
      if (pHVar10 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) goto code_?;
      item.z = iStack_21;
      item.x = (undefined2)uStack_20;
      item.y = uStack_20._2_2_;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__Add
                ((HashSet_1_MV_WorldObject_IntVector_ *)pHVar10,item,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                );
      iVar26 = *meshUpdates;
      *meshUpdates = iVar26 + -1;
    } while (0 < iVar26 + -1);
    iVar26 = 0;
    *piStack_9 = 0x70;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_7 == 0) {
      if (*piStack_9 == 0x70) {
        iVar26 = -1;
      }
      if (pHVar10 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
        HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                  ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_6 + 0x14),
                   (HashSet_1_MV_WorldObject_IntVector_ *)pHVar10,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                  );
        uStack_1 = 2;
        while( true ) {
          cVar15 = func_?();
          iVar27 = iStack_7;
          pHVar10 = pHStack_11;
          if (cVar15 == '\0') break;
          IVar16 = GUICellCursor::GUICellCursor_get_LocalPos
                             ((GUICellCursor *)(aVStack_17 + 1),(MethodInfo *)&stack0xffffff70);
          pHVar12 = (this->fields).dirtyChunks;
          if (pHVar12 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
          HashSet_1_MV_WorldObject_IntVector__Remove
                    (pHVar12,*IVar16._0_4_,
                     MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                    );
        }
        piStack_9[iVar26 + 1] = 0xb1;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar27 == 0) {
          bVar28 = RuntimePrototypeCubeModel_MeshGenerateStatus
                            (this,(HashSet_1_MV_WorldObject_IntVector_ *)pHVar10,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pGStack_3;
          return bVar28;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  bVar28 = (*pcVar29)();
  return bVar28;
}


/* Boolean MeshGenerateDirtyChunksAll(Int32 ByRef) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
               (RuntimePrototypeCubeModel *this,int32_t *meshUpdates,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pMStack_3 = (Material *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Il2CppClass *)0x0;
  iStack_7 = 0;
  auStack_6._0_4_ = (Il2CppMethodPointer)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (InvokerMethod)0x0;
  auStack_6._12_4_ = (char *)0x0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffff84;
  puStack_4 = &stack0xffffff84;
  pHVar9 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  pHStack_10 = pHVar9;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar9,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  this_00 = (this->fields).dirtyChunks;
  pHStack_11 = pHVar9;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_6 + 0x14),
                        this_00,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    auStack_6._8_4_ = pHVar12->stamp;
    auStack_6._12_4_ = *(undefined4 *)&pHVar12->current;
    auStack_6._16_4_ = *(undefined4 *)&(pHVar12->current).z;
    uStack_1 = 0;
    while( true ) {
      auStack_6._4_4_ =
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
      ;
      auStack_6._0_4_ = auStack_6;
      cVar13 = func_?();
      pHVar9 = pHStack_10;
      if (cVar13 == '\0') break;
      IVar14 = GUICellCursor::GUICellCursor_get_LocalPos
                         ((GUICellCursor *)(aVStack_15 + 1),(MethodInfo *)auStack_6);
      pIVar16 = IVar14._0_4_;
      uStack_17._0_2_ = pIVar16->x;
      uStack_17._2_2_ = pIVar16->y;
      iStack_18 = pIVar16->z;
      if (pHStack_10 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)
      goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__Add
                ((HashSet_1_MV_WorldObject_IntVector_ *)pHStack_10,*pIVar16,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                );
      fStack_19 = (this->fields)._Scale_k__BackingField;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         (aVStack_15,(MethodInfo *)0x0);
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                         (&VStack_21,fStack_19,*pVVar20,(MethodInfo *)0x0);
      IVar14.z = iStack_18;
      IVar14.x = (undefined2)uStack_17;
      IVar14.y = uStack_17._2_2_;
      RuntimePrototypeCubeModel_RebuildChunk(this,IVar14,*pVVar20,(MethodInfo *)0x0);
      *meshUpdates = *meshUpdates + -1;
    }
    *puStack_8 = 99;
    uStack_1 = 0xffffffff;
    func_?(auStack_6,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    iVar22 = iStack_7;
    if (iStack_7 != 0) goto code_?;
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).dirtyChunks;
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Clear__
                );
      bVar23 = RuntimePrototypeCubeModel_MeshGenerateStatus
                        (this,(HashSet_1_MV_WorldObject_IntVector_ *)pHVar9,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pMStack_3;
      return bVar23;
    }
  }
code_?:
  iVar22 = func_?(0);
code_?:
  func_?(iVar22,0,0);
  pcVar24 = (code *)swi(3);
  bVar23 = (*pcVar24)();
  return bVar23;
}


/* Boolean MeshGenerateStatus(HashSet`1[MV.WorldObject.IntVector]) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateStatus
               (RuntimePrototypeCubeModel *this,HashSet_1_MV_WorldObject_IntVector_ *generatedChunks
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).DirtyChunksRegenerated;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)generatedChunks,
               MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Invoke_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
              );
    this_01 = (this->fields).dirtyChunks;
    if (this_01 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      JVar1 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_01,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__get_Count__
                        );
      if (JVar1 != JsonSchemaType__Enum_None) {
        return 0;
      }
      (this->fields).meshGeneratePriority = 0;
      return 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void RebuildChunk(IntVector, Vector3) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunks;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,chunkPos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Chunk_not_contained_,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).chunks;
    if ((pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (this_01 = (CubeModelChunk *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,chunkPos
                             ,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            ), this_01 != (CubeModelChunk *)0x0)) {
      uStack3 = 0;
      CubeModelChunk::CubeModelChunk_RebuildChunk(this_01,scale,(MethodInfo *)0x0);
      this_00 = (this->fields).OnChunkRebuilt;
      if (this_00 == (Action_1_MV_WorldObject_IntVector_ *)0x0) {
        return;
      }
      mscorlib.dll::System::Action`1[MV::WorldObject::IntVector]::
      Action_1_MV_WorldObject_IntVector__Invoke
                (this_00,chunkPos,
                 MethodInfo__System__Action<MV::WorldObject::IntVector>__Invoke_MV__WorldObject__IntVector_
                );
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RebuildPrototypeMesh() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildPrototypeMesh
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
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
  this_00 = (this->fields).chunks;
  puStack_8 = (undefined4 *)&stack0xffffff84;
  puStack_4 = &stack0xffffff84;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffff84;
    puStack_4 = &stack0xffffff84;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_10,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    IStack_7.fields._0_4_ = pDVar9->stamp;
    IStack_7.fields.direction.x = (float)(pDVar9->current).key.tileX;
    IStack_7.fields.direction._4_8_ = *(undefined8 *)&(pDVar9->current).key.tileZ;
    uStack_1 = 0;
    while( true ) {
      IStack_7.monitor =
           (MonitorData *)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
      ;
      IStack_7.klass = (InputToPlayerMovementAndroid__Class *)&IStack_7;
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_8 = 0x54;
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar12 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         (&VStack_13,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar12->x;
      CStack_6.monitor = (MonitorData *)pVVar12->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar12->z;
      this_01 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         (&VStack_14,(MethodInfo *)0x0);
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&DStack_10.current,*pVVar12,
                          (this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
      if (this_01 == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_RebuildChunk(this_01,*pVVar12,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RemoveAllCubesLocal() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveAllCubesLocal
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  auStack_4._40_4_ = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = (undefined1 *)auStack_4._40_4_;
  }
  auStack_4._40_4_ = puVar5;
  auStack_4._16_4_ = (Il2CppClass *)0x0;
  auStack_4._0_4_ = (Il2CppMethodPointer)0x0;
  auStack_4._4_4_ = (MethodInfo *)0x0;
  auStack_4._8_4_ = (InvokerMethod)0x0;
  auStack_4._12_4_ = (char *)0x0;
  func_?();
  pDVar6 = (this->fields).chunks;
  auStack_4._32_4_ = (Il2CppGenericMethod *)&stack0xffffffa4;
  auStack_4._40_4_ = &stack0xffffffa4;
  if (pDVar6 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    auStack_4._32_4_ = (Il2CppGenericMethod *)&stack0xffffffa4;
    auStack_4._40_4_ = &stack0xffffffa4;
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                       );
    this_00 = (List_1_UnityEngine_Vector2_ *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source,
                         System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                        );
    if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Vector2_ *)&stack0xffffffb0,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                         );
      auStack_4._8_4_ = pLVar7->ver;
      auStack_4._12_4_ = (pLVar7->current).x;
      auStack_4._16_4_ = (pLVar7->current).y;
      uStack_1 = 0;
      while( true ) {
        auStack_4._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
        ;
        auStack_4._0_4_ = auStack_4;
        cVar8 = func_?();
        if (cVar8 == '\0') {
          *(MethodInfo **)auStack_4._32_4_ = (MethodInfo *)0x69;
          uStack_1 = 0xffffffff;
          func_?(auStack_4,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                         );
          *unaff_FS_OFFSET = fStack_3;
          return;
        }
        IVar9 = GUICellCursor::GUICellCursor_get_LocalPos
                           ((GUICellCursor *)(auStack_4 + 0x14),(MethodInfo *)auStack_4);
        pIVar10 = IVar9._0_4_;
        unaff_EDI = (this->fields).chunks;
        auStack_4._36_2_ = pIVar10->x;
        auStack_4._38_2_ = pIVar10->y;
        iVar11 = pIVar10->z;
        if ((unaff_EDI == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) ||
           (this_01 = (CubeModelChunk *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      IntVector,System::Object]::
                      Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)unaff_EDI,
                                 *pIVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                                ), this_01 == (CubeModelChunk *)0x0)) break;
        CubeModelChunk::CubeModelChunk_Destroy(this_01,(MethodInfo *)0x0);
        uVar12 = auStack_4._36_4_;
        pDVar6 = (this->fields).chunks;
        if (pDVar6 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) break;
        IVar9.z = iVar11;
        IVar9.x = auStack_4._36_2_;
        IVar9.y = auStack_4._38_2_;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar6,IVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                  );
        uVar13 = auStack_4._36_4_;
        chunkPos.z = iVar11;
        auStack_4._36_2_ = (undefined2)uVar12;
        auStack_4._38_2_ = SUB42(uVar12,2);
        chunkPos.x = auStack_4._36_2_;
        chunkPos.y = auStack_4._38_2_;
        auStack_4._36_4_ = uVar13;
        RuntimePrototypeCubeModel_RemoveChunk(this,chunkPos,(MethodInfo *)0x0);
      }
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void RemoveChunk(IntVector) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).instances;
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_9,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_6.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar8->hashset;
    CStack_6.monitor = (MonitorData *)pHVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar8->stamp;
    CStack_6.fields.syncRoot = (Object *)pHVar8->current;
    uStack_1 = 0;
    while( true ) {
      CStack_10.gameObject =
           (GameObject *)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_7 = 0x6e;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_6,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?((short)TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (this_01,(int32_t)id,(MethodInfo *)0x0);
      pMVar12 = (MVMovingPlatformNode *)func_?();
      if ((pMVar12 == (MVMovingPlatformNode *)0x0) ||
         (this_02 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next(pMVar12,in_stack_13),
         this_02 == (MVMovingPlatformNode *)0x0)) break;
      in_stack_13 = (MethodInfo *)chunkPos._0_4_;
      pCVar14 = ChunkInstances::ChunkInstances_GetChunk
                         (&CStack_10,(ChunkInstances *)this_02,chunkPos,in_stack_15);
      HStack_9.hashset = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pCVar14->gameObject;
      HStack_9.next = (int32_t)pCVar14->collider;
      HStack_9.stamp = (int32_t)pCVar14->renderer;
      HStack_9.current = (int32_t)pCVar14->filter;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)HStack_9.hashset,(MethodInfo *)0x0);
      pMVar12 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next(pMVar12,(MethodInfo *)0x0);
      if (pMVar12 == (MVMovingPlatformNode *)0x0) break;
      ChunkInstances::ChunkInstances_Remove((ChunkInstances *)pMVar12,chunkPos,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean RemoveCube(IntVector) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCube
               (RuntimePrototypeCubeModel *this,IntVector iVector,MethodInfo *method)

{
  this_02 = this;
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  iStack_3 = iVector.y;
  IVar4.z = iVector.x;
  IVar4._0_4_ = &stack0xfffffff4;
  IVar4 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar4,CONCAT22(uVar1,iVector.z),method_00);
  pIVar5 = IVar4._0_4_;
  uVar6 = pIVar5->x;
  uVar7 = pIVar5->y;
  iStack8 = uVar7;
  if ((this->fields).chunks != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this->fields).chunks
                       ,*pIVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar9 == 0) {
      return 0;
    }
    this_00 = (this->fields).chunks;
    if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      key.y = iStack8;
      key.x = uVar6;
      this._2_2_ = (int16_t)((uint)
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            >> 0x10);
      key.z = this._2_2_;
      this_03 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          );
      if (this_03 != (CubeModelChunk *)0x0) {
        iStack8 = iStack_3;
        bVar9 = CubeModelChunk::CubeModelChunk_ContainsCube(this_03,iVector,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          return 0;
        }
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this_02,iVector,MeshGeneratePriority__Enum_HighGenerateAllDirty,(MethodInfo *)0x0
                  );
        this_01 = (this_02->fields).deltaCubes;
        if (this_01 != (DeltaCubes *)0x0) {
          DeltaCubes::DeltaCubes_Enqueue(this_01,iVector,CubeAction__Enum_Deleted,(MethodInfo *)0x0)
          ;
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void RemoveCubeNetworkUpdate(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_RemoveCubeNetworkUpdate
               (RuntimePrototypeCubeModel *this,IntVector iVector,
               MeshGeneratePriority__Enum priority,MethodInfo *method)

{
  RuntimePrototypeCubeModel_RemoveFromChunk(this,iVector,priority,(MethodInfo *)0x0);
  return;
}


/* Void RemoveFromChunk(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveFromChunk
               (RuntimePrototypeCubeModel *this,IntVector iVector,
               MeshGeneratePriority__Enum meshGeneratePriority,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  iVar3 = iVector.x;
  iStack_4 = iVector.y;
  IVar5.z = iVar3;
  IVar5._0_4_ = &stack0xfffffff4;
  IVar5 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar5,CONCAT22(uVar1,iVector.z),method_00);
  pIVar6 = IVar5._0_4_;
  chunkPos_00 = *pIVar6;
  key_01 = *pIVar6;
  key_00 = *pIVar6;
  chunkPos = *pIVar6;
  key = *pIVar6;
  IVar5 = *pIVar6;
  if ((this->fields).chunks != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this->fields).chunks
                       ,*pIVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar7 == 0) {
      return;
    }
    pDVar8 = (this->fields).chunks;
    if ((pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (pCVar9 = (CubeModelChunk *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8,IVar5,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                           ), pCVar9 != (CubeModelChunk *)0x0)) {
      iVector_00.z = iVar3;
      iVector_00.x = iVector.x;
      iVector_00.y = iVector.y;
      in_stack_10 = iStack_4;
      CubeModelChunk::CubeModelChunk_RemoveFromChunk(pCVar9,iVector_00,(MethodInfo *)0x0);
      pDVar8 = (this->fields).chunks;
      if ((pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
         (this_00 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8,key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              ), this_00 != (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0))
      {
        pOVar11 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                           (this_00,(MethodInfo *)0x0);
        if (pOVar11 != (Object *)0x0) {
          RuntimePrototypeCubeModel_AddToDirtyChunks
                    (this,chunkPos,CONCAT22(meshGeneratePriority._2_2_,iVar3),(MethodInfo *)0x0);
          return;
        }
        pDVar8 = (this->fields).chunks;
        if ((pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
           (pCVar9 = (CubeModelChunk *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                     IntVector,System::Object]::
                     Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                               ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8,
                                key_00,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                               ), pCVar9 != (CubeModelChunk *)0x0)) {
          CubeModelChunk::CubeModelChunk_Destroy(pCVar9,(MethodInfo *)0x0);
          pDVar8 = (this->fields).chunks;
          if (pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8,key_01,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                      );
            RuntimePrototypeCubeModel_RemoveChunk(this,chunkPos_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uStack12 = 0x1028;
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RemoveInstance(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
               (RuntimePrototypeCubeModel *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
    FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
              (this_00,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    this_01 = (this->fields).instances;
    if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
      JVar1 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_01,
                         MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
      if (JVar1 == JsonSchemaType__Enum_None) {
        RuntimePrototypeCubeModel_Destroy(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveRefenceFromChunk(IntVector ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_RemoveRefenceFromChunk
               (RuntimePrototypeCubeModel *this,IntVector *chunkPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                         *chunkPosition,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
      pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      SpawnRolePreviewer::SpawnRolePreviewer_set_PreviewGameObject
                ((SpawnRolePreviewer *)this_01,(GameObject *)((int)&pOVar1[-1].monitor + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveReferenceFromAllChunks() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

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
  this_00 = (this->fields).chunks;
  puStack_8 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_10,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
        *puStack_8 = 0x4c;
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar12 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_10.current,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar12->x;
      CStack_6.monitor = (MonitorData *)pVVar12->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar12->z;
      this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) break;
      pOVar13 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      SpawnRolePreviewer::SpawnRolePreviewer_set_PreviewGameObject
                ((SpawnRolePreviewer *)this_01,(GameObject *)((int)&pOVar13[-1].monitor + 3),
                 (MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ReplaceCube(IntVector, Byte) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
               (RuntimePrototypeCubeModel *this,IntVector iVector,uint8_t materialId,
               MethodInfo *method)

{
  this_01 = (DeltaCubes *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  cube = RuntimePrototypeCubeModel_GetCube(this,iVector,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  handle = TypeRef__MV__WorldObject__Face;
  if (bVar1 != 0) {
code_?:
    *unaff_FS_OFFSET = this_01;
    return;
  }
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  puVar2 = (undefined4 *)&UNK_?;
  this_00 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_00 != (Array *)0x0) {
    pIVar3 = mscorlib.dll::System::Array::Array_GetEnumerator(this_00,(MethodInfo *)0x0);
    while (pIVar3 != (IEnumerator *)0x0) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        *puVar2 = 0x67;
        iVar5 = func_?();
        if (iVar5 != 0) {
          func_?();
        }
        RuntimePrototypeCubeModel_AddToChunk
                  (this,iVector,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
                   (MethodInfo *)0x0);
        this_01 = (this->fields).deltaCubes;
        if (this_01 != (DeltaCubes *)0x0) {
          DeltaCubes::DeltaCubes_Enqueue
                    (this_01,iVector,CubeAction__Enum_FaceChanged,(MethodInfo *)0x0);
          goto code_?;
        }
        break;
      }
      piVar6 = (int *)func_?();
      if (piVar6 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar6 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      {
        func_?();
        break;
      }
      puVar2 = (undefined4 *)func_?();
      puVar2 = (undefined4 *)*puVar2;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      Cube::Cube_SetMaterial(cube,(Face__Enum)puVar2,materialId,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ResetSharedMaterials(MVCubeModelInstance) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ResetSharedMaterials
               (RuntimePrototypeCubeModel *this,MVCubeModelInstance *cm,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  pIStack_4 = (Il2CppGenericClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_4;
  puStack_5 = &stack0xffffff50;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff50;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  aCStack_8[0].fields.list = (IList_1_VoxelHit_ *)0x0;
  aCStack_8[0].klass = (Collection_1_VoxelHit___Class *)0x0;
  aCStack_8[0].monitor = (MonitorData *)0x0;
  _Stack_a0.dummy = (Collection_1_VoxelHit_ *)0x0;
  _Stack_9c.dummy = (MethodInfo *)0x0;
  _Stack_98.dummy = (void *)0x0;
  _Stack_94.dummy = (void *)0x0;
  uStack_9 = 0;
  func_?();
  this_00 = (this->fields).chunks;
  puStack_10 = (undefined4 *)&stack0xffffff50;
  puStack_5 = &stack0xffffff50;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    method_00.genericMethod = (Il2CppGenericMethod *)auStack_11;
    puStack_10 = (undefined4 *)&stack0xffffff50;
    puStack_5 = &stack0xffffff50;
    p_Var5 = (_union_86 *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)method_00.genericMethod,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    _Stack_a0 = *p_Var5;
    _Stack_9c = p_Var5[1];
    _Stack_98 = p_Var5[2];
    _Stack_94 = p_Var5[3];
    uStack_9 = *(undefined8 *)(p_Var5 + 4);
    uStack_2 = 0;
    while( true ) {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_10 = 0x66;
        uStack_2 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = pIStack_4;
        return;
      }
      pVVar13 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         (&VStack_14,(InputToPlayerMovementAndroid *)&_Stack_a0,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      aCStack_8[0].klass = (Collection_1_VoxelHit___Class *)pVVar13->x;
      aCStack_8[0].monitor = (MonitorData *)pVVar13->y;
      _Stack_9c.typeHandle =
           (Il2CppMetadataTypeHandle)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
      ;
      aCStack_8[0].fields.list = (IList_1_VoxelHit_ *)pVVar13->z;
      _Stack_a0.dummy = aCStack_8;
      pIVar15 = (IntVector *)func_?();
      if (cm == (MVCubeModelInstance *)0x0) break;
      pCVar16 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_GetChunkInstance
                         (&CStack_17,(MVCubeModelPrototypeTerrain *)cm,*pIVar15,in_stack_18);
      pGStack_19 = pCVar16->gameObject;
      _Stack_6c = (_union_154)pCVar16->collider;
      _Stack_68 = (_union_155)pCVar16->renderer;
      pMStack_20 = pCVar16->filter;
      this_01 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (aCStack_8,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (CubeModelChunk *)0x0) break;
      SVar21 = CubeModelChunk::CubeModelChunk_GetMeshData
                        (this_01,(MethodInfo *)method_00.genericMethod);
      if ((MethodInfo *)_Stack_68.genericMethod == (MethodInfo *)0x0) break;
      method_00 = _Stack_68;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)_Stack_68.genericMethod,SVar21.material,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetInstanceDataRef(IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetInstanceDataRef
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,MVCubeModelBase *cubeInstance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    this_01 = (CubeModelChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,chunkPos,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_01 != (CubeModelChunk *)0x0) {
      CubeModelChunk::CubeModelChunk_SetInstanceDataRef
                (this_01,chunkPos,cubeInstance,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetMaterial(IntVector, Face, Byte) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetMaterial
               (RuntimePrototypeCubeModel *this,IntVector iVector,Face__Enum face,uint8_t materialId
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cube = RuntimePrototypeCubeModel_GetCube(this,iVector,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?();
    }
    Cube::Cube_SetMaterial(cube,face,materialId,(MethodInfo *)0x0);
    uStack2 = (undefined2)((uint)cube >> 0x10);
    RuntimePrototypeCubeModel_AddToChunk
              (_materialId,iVector,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
               (MethodInfo *)0x0);
    this_00 = (_materialId->fields).deltaCubes;
    if (this_00 == (DeltaCubes *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DeltaCubes::DeltaCubes_Enqueue(this_00,iVector,CubeAction__Enum_FaceChanged,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetVisibility
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
  this_00 = (this->fields).chunks;
  puStack_4 = &stack0xffffffa0;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_4 = &stack0xffffffa0;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_9,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    IStack_7.klass = (InputToPlayerMovementAndroid__Class *)pDVar8->dictionary;
    IStack_7.monitor = (MonitorData *)pDVar8->next;
    IStack_7.fields._0_4_ = pDVar8->stamp;
    IStack_7.fields.direction.x = (float)(pDVar8->current).key.tileX;
    IStack_7.fields.direction._4_8_ = *(undefined8 *)&(pDVar8->current).key.tileZ;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pVVar11 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_9.current,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar11->x;
      CStack_6.monitor = (MonitorData *)pVVar11->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar11->z;
      this_01 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_SetCubeVisibility_1(this_01,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UnIndentCubeFace(IntVector, Face, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UnIndentCubeFace
               (RuntimePrototypeCubeModel *this,IntVector localPos,Face__Enum face,Cube *cube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_UnIndentCubeFace,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?();
    }
    Cube::Cube_UnIndentFace(cube,face,(MethodInfo *)0x0);
    uStack2 = 0;
    RuntimePrototypeCubeModel_AddToChunk
              ((RuntimePrototypeCubeModel *)0x3,localPos,cube,
               MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
    if (pDRam00000033 == (DeltaCubes *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DeltaCubes::DeltaCubes_Enqueue
              (pDRam00000033,localPos,CubeAction__Enum_CornersChangedDone,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdatePrototype(BytePacker) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
               (RuntimePrototypeCubeModel *this,BytePacker *bp,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  auStack_4._40_4_ = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = (undefined1 *)auStack_4._40_4_;
  }
  auStack_4._40_4_ = puVar5;
  auStack_4._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  auStack_4._4_4_ = (MonitorData *)0x0;
  auStack_4._8_4_ = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  auStack_4._12_4_ = (Object *)0x0;
  func_?();
  auStack_4._28_4_ = (Il2CppRGCTXData *)&stack0xffffffa8;
  auStack_4._40_4_ = &stack0xffffffa8;
  if (cRam_? == '\0') {
    auStack_4._28_4_ = (Il2CppRGCTXData *)&stack0xffffffa8;
    auStack_4._40_4_ = &stack0xffffffa8;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_4._16_4_ = (Il2CppClass *)0x0;
  auStack_4._20_2_ = 0;
  if (bp != (BytePacker *)0x0) {
    while( true ) {
      unaff_ESI = (MVWorldObject *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)bp,
                             (MethodInfo *)0x0);
      iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                        (bp,(MethodInfo *)0x0);
      if (iVar6 <= (int)unaff_ESI) break;
      uVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      auStack_4[0x27] = uVar7;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
      uVar8 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      unaff_ESI = (MVWorldObject *)(uint)uVar8;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
      func_?(auStack_4 + 0x10);
      switch(auStack_4[0x27]) {
      case 0:
        if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_00.z = auStack_4._20_2_;
        iVector_00.x = auStack_4._16_2_;
        iVector_00.y = auStack_4._18_2_;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,iVector_00,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        break;
      case 2:
      case 3:
      case 4:
        if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_01.z = auStack_4._20_2_;
        iVector_01.x = auStack_4._16_2_;
        iVector_01.y = auStack_4._18_2_;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,iVector_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        uVar9 = auStack_4._16_4_;
        auStack_4._38_2_ = auStack_4._20_2_;
        uVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        auStack_4[0x22] = uVar7;
        this_01 = (Cube *)func_?(TypeInfo__Cube);
        Cube::Cube__ctor_1(this_01,bp,(uint8_t)auStack_4._34_4_,(MethodInfo *)0x0);
        uVar10 = auStack_4._16_4_;
        iVector.z = auStack_4._38_2_;
        auStack_4._16_2_ = (undefined2)uVar9;
        auStack_4._18_2_ = SUB42(uVar9,2);
        iVector.x = auStack_4._16_2_;
        iVector.y = auStack_4._18_2_;
        auStack_4._16_4_ = uVar10;
        RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                  (this,iVector,this_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar11 != (GameSessionData *)0x0) {
      if ((pGVar11->fields).gameMode != 1) {
        this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).instances;
        if (this_00 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
        goto code_?;
        pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffffb4,this_00,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        auStack_4._0_4_ = pHVar12->hashset;
        auStack_4._4_4_ = pHVar12->next;
        auStack_4._8_4_ = pHVar12->stamp;
        auStack_4._12_4_ = pHVar12->current;
        uStack_1 = 0;
        while( true ) {
          method_01 = (MethodInfo *)auStack_4;
          cVar13 = func_?();
          if (cVar13 == '\0') break;
          unaff_ESI = (MVWorldObject *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                 auStack_4,
                                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                                );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
             (unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (this_02,(int32_t)unaff_ESI,(MethodInfo *)0x0),
             unaff_ESI == (MVWorldObject *)0x0)) goto code_?;
          method_00 = unaff_ESI;
          pOVar14 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)unaff_ESI,method_01)
          ;
          if (pOVar14 != (Object *)0x0) {
            pSVar15 = (String *)
                      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)unaff_ESI,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((this_03 == (MVNetworkGame *)0x0) ||
               (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
               this_04 == (MVLocalPlayer *)0x0)) goto code_?;
            pSVar16 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_04,
                                 (MethodInfo *)method_00);
            if (pSVar15 != pSVar16) {
              UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                        ((Color *)&stack0xffffffb4,(MethodInfo *)0x0);
              func_?();
            }
          }
        }
        *(Il2CppRGCTXData *)auStack_4._28_4_ = (Il2CppRGCTXData)0x8c;
        uStack_1 = 0xffffffff;
        func_?((short)auStack_4,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar17 = (char *)func_?(unaff_ESI,0,0);
  *pcVar17 = *pcVar17 - extraout_DL;
  return;
}


/* Void UpdatePrototypeScale(Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
               (RuntimePrototypeCubeModel *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_This_must_be_reimplemented_,(MethodInfo *)0x0);
  return;
}


/* RuntimePrototypeCubeModel() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar1 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields).logger = pIVar1;
    pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar2,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    (this->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar2;
    (this->fields).useMeshGeneratePrioritySystem = 1;
    (this->fields).chunkSize = 0x20;
    (this->fields).prototypeState = 1;
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    (this->fields).pendingDeltaCubes = (List_1_System_Byte__1 *)this_01;
    (this->fields).prototypeId = -1;
    this_02 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
    DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
    (this->fields).deltaCubes = this_02;
    this_03 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
              );
    (this->fields).chunks = this_03;
    pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar2,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (this->fields).instances = (HashSet_1_System_Int32_ *)pHVar2;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_3);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[]) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar1 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields).logger = pIVar1;
    pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar2,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    (this->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar2;
    (this->fields).useMeshGeneratePrioritySystem = 1;
    (this->fields).chunkSize = 0x20;
    (this->fields).prototypeState = 1;
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    (this->fields).pendingDeltaCubes = (List_1_System_Byte__1 *)this_01;
    (this->fields).prototypeId = -1;
    this_02 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
    DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
    (this->fields).deltaCubes = this_02;
    this_03 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
              );
    (this->fields).chunks = this_03;
    pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar2,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (this->fields).instances = (HashSet_1_System_Int32_ *)pHVar2;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_3);
    RuntimePrototypeCubeModel_Create(this,id,authorProfileId,scale,data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[], Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_2
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 == (LoggerManager *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  (this->fields).logger = pIVar2;
  pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar3,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  (this->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar3;
  (this->fields).useMeshGeneratePrioritySystem = 1;
  (this->fields).chunkSize = 0x20;
  (this->fields).prototypeState = 1;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  (this->fields).pendingDeltaCubes = (List_1_System_Byte__1 *)this_01;
  (this->fields).prototypeId = -1;
  this_02 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
  DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).deltaCubes = this_02;
  this_03 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
            );
  (this->fields).chunks = this_03;
  pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar3,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).instances = (HashSet_1_System_Int32_ *)pHVar3;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_4);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_IsPowerOfTwo
                    (chunkSize,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    method_00 = (MethodInfo *)0x0;
    message = StringLiteral_Not_power_of_2;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    iVar6 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
    if (iVar6 < 1) {
      (this->fields).chunkSize = chunkSize;
      goto code_?;
    }
    message = StringLiteral_Can_not_override_chunk_size_if_c;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
      message = StringLiteral_Can_not_override_chunk_size_if_c;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError((Object *)message,method_00);
code_?:
  RuntimePrototypeCubeModel_Create(this,id,authorProfileId,scale,data,(MethodInfo *)0x0);
  return;
}


/* Boolean get_ContainsCubes() */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_ContainsCubes
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  iVar1 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
  return iVar1 != 0;
}


/* Int32 get_CubeCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
  iVar8 = 0;
  iStack_9 = 0;
  this_00 = (this->fields).chunks;
  puStack_10 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       (&DStack_12,
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    IStack_7.klass = (InputToPlayerMovementAndroid__Class *)pDVar11->dictionary;
    IStack_7.monitor = (MonitorData *)pDVar11->next;
    IStack_7.fields._0_4_ = pDVar11->stamp;
    IStack_7.fields.direction.x = (float)(pDVar11->current).key.tileX;
    IStack_7.fields.direction._4_8_ = *(undefined8 *)&(pDVar11->current).key.tileZ;
    uStack_1 = 0;
    while( true ) {
      cVar13 = func_?();
      if (cVar13 == '\0') {
        *puStack_10 = 0x49;
        uStack_1 = 0xffffffff;
        func_?(&IStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return iVar8;
      }
      pVVar14 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&DStack_12.current,&IStack_7,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar14->x;
      CStack_6.monitor = (MonitorData *)pVVar14->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar14->z;
      this_01 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                          );
      if (this_01 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) break;
      pOVar15 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      iVar8 = (int)&pOVar15->klass + iVar8;
      iStack_9 = iVar8;
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar16 = (code *)swi(3);
  iVar17 = (*pcVar16)();
  return iVar17;
}


/* Int32 get_DeltaCubesCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::
        RuntimePrototypeCubeModel_get_DeltaCubesCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  pDVar1 = (this->fields).deltaCubes;
  if (pDVar1 == (DeltaCubes *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pDVar1->fields).cubeChange;
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                       );
    return (int32_t)pIVar4;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* HashSet`1[System.Int32] get_Instances() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_Instances
          (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  capacity = (this->fields).instances;
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
  SortedList_2_System_Single_System_Object___ctor_1
            ((SortedList_2_System_Single_System_Object_ *)this_00,(int32_t)capacity,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
            );
  return this_00;
}


/* Int32 get_InstancesCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).instances;
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    JVar1 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)this_00,
                       MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    return JVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_PrototypeId(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
               (RuntimePrototypeCubeModel *this,int32_t value,MethodInfo *method)

{
  (this->fields).prototypeId = value;
  return;
}


/* Void set_PrototypeState(PrototypeState) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
               (RuntimePrototypeCubeModel *this,PrototypeState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == PrototypeState__Enum_Pending) {
    (this->fields).prototypeId = -1;
  }
  else if (value == PrototypeState__Enum_Registered) {
    if ((this->fields).prototypeId == -1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_prototypeId_is__1_which_means_th,(MethodInfo *)0x0);
      (this->fields).prototypeState = 0;
      return;
    }
    pLVar1 = (this->fields).pendingDeltaCubes;
    pIVar2 = (this->fields).logger;
    pIStack_3 = pIVar2;
    if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
      pOStack_4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                             );
      pIStack_5 = (ILogger_1__Class *)func_?(TypeInfo__System__Int32,&pOStack_4);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_pendingDeltaCubes_Count_,(Object *)pIStack_5,
                          (MethodInfo *)0x0);
      if (pIVar2 != (ILogger_1 *)0x0) {
        uVar7 = 0;
        pIStack_5 = pIStack_3->klass;
        uVar8._0_1_ = (pIStack_5->_1).rank;
        uVar8._1_1_ = (pIStack_5->_1).minimumAlignment;
        if (uVar8 != 0) {
          do {
            if (pIStack_5->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)TypeInfo__ILogger
               ) {
              ppMVar9 = &(&pIStack_5->vtable)[pIStack_5->interfaceOffsets[uVar7].offset].Log.method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        ppMVar9 = (MethodInfo **)func_?(pIStack_3,TypeInfo__ILogger,0);
code_?:
        (*(code *)*ppMVar9)(pIStack_3,pSVar6,ppMVar9[1]);
        pLVar1 = (this->fields).pendingDeltaCubes;
        if (pLVar1 != (List_1_System_Byte__1 *)0x0) {
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                             );
          if ((int)pOVar10 < 1) goto code_?;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          worldInventoryID = (this->fields).prototypeId;
          this_00 = (List_1_VoxelHit_ *)(this->fields).pendingDeltaCubes;
          if ((this_00 != (List_1_VoxelHit_ *)0x0) &&
             (prototypeData =
                   mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                             ), this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                      (this_02,worldInventoryID,(Byte__Array *)prototypeData,(MethodInfo *)0x0);
            this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).pendingDeltaCubes;
            if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
              List_1_UnityEngine_UIVertex__Clear
                        (this_01,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
              (this->fields).prototypeState = 0;
              return;
            }
          }
        }
      }
    }
    func_?(0);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
code_?:
  (this->fields).prototypeState = value;
  return;
}


/* Void set_Scale(Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_Scale
               (RuntimePrototypeCubeModel *this,float value,MethodInfo *method)

{
  (this->fields)._Scale_k__BackingField = value;
  return;
}

