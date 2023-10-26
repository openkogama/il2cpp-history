
/* Void AddChunk(IntVector) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  ppMStack_2 = (MethodInfo **)&DAT_?;
  puStack_3 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(0xfc74);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Object_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_Object_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__GetEnumerator
              ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 1;
    while( true ) {
      bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_5);
        *unaff_FS_OFFSET = puStack_3;
        return;
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI = (MVCubeModelBase__Class *)&UNK_?;
      if (this_02 == (MVWorldObjectClientManager *)0x0) break;
      in_stack_5 = (MethodInfo *)0x0;
      cubeInstance = (MVCubeModelBase__Class *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_02,0xADDR,(MethodInfo *)0x0);
      if (cubeInstance == (MVCubeModelBase__Class *)0x0) {
        cubeInstance = (MVCubeModelBase__Class *)0x0;
      }
      else {
        unaff_EDI = TypeInfo__MVCubeModelBase;
        if ((*(byte *)&(cubeInstance->_0).image[4].nameNoExt <
             (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth) ||
           (*(MVCubeModelBase__Class **)
             (((cubeInstance->_0).image[2].typeCount - 4) +
             (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) !=
            TypeInfo__MVCubeModelBase)) goto code_?;
      }
      if (cRam_? == '\0') {
        ppMStack_2 = &
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (this->fields).chunks;
      unaff_EDI = cubeInstance;
      if ((this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) ||
         (this_03 = (CubeModelChunk *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,
                               chunkPos,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              ), this_03 == (CubeModelChunk *)0x0)) break;
      CubeModelChunk::CubeModelChunk_SetInstanceDataRef
                (this_03,chunkPos,(MVCubeModelBase *)cubeInstance,(MethodInfo *)0x0);
    }
  }
  func_?();
  cubeInstance = extraout_EDX;
code_?:
  func_?((short)cubeInstance,unaff_EDI);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean AddCube(IntVector, Cube) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCube
               (RuntimePrototypeCubeModel *this,IntVector pos,Cube *cube,MethodInfo *method)

{
  this_02 = this;
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    uVar1 = 0x10ee;
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
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
  bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
          IntVector,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                    ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *
                     )(this->fields).chunks,*pIVar5,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                        *chunkPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar1[8].klass = (Object__Class *)((int)&((pOVar1[8].klass)->_0).image + 1);
      return;
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pSStack_7 = (String *)0x0;
  iStack_8 = 0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  uStack_9._4_4_ = (Object *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       (&DStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_12 = 0;
    auStack_6._0_4_ = pDVar10->_dictionary;
    auStack_6._4_4_ = pDVar10->_version;
    auStack_6._8_4_ = pDVar10->_index;
    pSStack_7 = (pDVar10->_current).key.AssemblyName;
    uStack_9 = *(undefined8 *)&(pDVar10->_current).key.TypeName;
    iStack_8 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_13 = (Object *)auStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (uStack_9._4_4_ == (Object *)0x0) break;
      uStack_9._4_4_[8].klass = (Object__Class *)((int)&((uStack_9._4_4_[8].klass)->_0).image + 1)
      ;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                   );
    uVar1 = 0x10ee;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x7730);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pMVar3 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  IVar4.z = iVector.x;
  IVar4._0_4_ = &stack0xfffffff4;
  IVar4 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (IVar4,CONCAT22(uVar1,iVector.z),pMVar3);
  pIVar5 = IVar4._0_4_;
  iVar6 = pIVar5->z;
  uVar7._0_2_ = pIVar5->x;
  uVar7._2_2_ = pIVar5->y;
  IVar8 = *pIVar5;
  IVar9 = *pIVar5;
  IVar10 = *pIVar5;
  IVar4 = *pIVar5;
  if ((this->fields).chunks == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
  goto code_?;
  bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
           IntVector,ChunkInstances+ChunkInstanceVariables]::
           Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                     ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                       *)(this->fields).chunks,*pIVar5,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                     );
  if (bVar11 == 0) {
    pCVar12 = (CubeModelChunk *)func_?();
    if (pCVar12 == (CubeModelChunk *)0x0) goto code_?;
    CubeModelChunk::CubeModelChunk__ctor(pCVar12,IVar4,(MethodInfo *)0x0);
    pDVar13 = (this->fields).chunks;
    if (pDVar13 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
    Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar13,IVar10,
               (Object *)pCVar12,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
              );
    cube = (Cube *)0x0;
    RuntimePrototypeCubeModel_AddChunk(this,IVar9,(MethodInfo *)0x0);
    iVector._0_4_ = uVar7;
    iVector.z = iVar6;
  }
  pDVar13 = (this->fields).chunks;
  if (pDVar13 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    pCVar12 = (CubeModelChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar13,IVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (pCVar12 != (CubeModelChunk *)0x0) {
      if (cRam_? == '\0') {
        iVector.z = 0x733c;
        in_stack_14 = 0x10ee;
        func_?();
        iVector._0_4_ =
             &
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                (pCVar12->fields).cells;
      if (this_00 !=
          (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
        IVar10.z = iVector.z;
        IVar10.x = iVector.x;
        IVar10.y = iVector.y;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,ChunkInstances+ChunkInstanceVariables]::
                 Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                           (this_00,IVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                           );
        if (bVar11 == 0) {
          piVar15 = &(pCVar12->fields).cubeCount;
          *piVar15 = *piVar15 + 1;
        }
        pDVar16 = (pCVar12->fields).cells;
        in_stack_14 = 0;
        uVar1 = SUB42(pDVar16,0);
        iVar6 = (int16_t)((uint)pDVar16 >> 0x10);
        pCVar17 = (Cube *)0x0;
        meshGeneratePriority_00 = MeshGeneratePriority__Enum_None;
        Cell::Cell__ctor((Cell *)&stack0xffffffec,cube,(MethodInfo *)0x0);
        pMVar3 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
        ;
        if ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)CONCAT22(iVar6,uVar1) !=
            (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
          IVar9.z = 0;
          IVar9._0_4_ = cube;
          value._4_4_ = meshGeneratePriority_00;
          value.cube = pCVar17;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]
          ::Dictionary_2_MV_WorldObject_IntVector_Cell__set_Item
                    ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)CONCAT22(iVar6,uVar1),IVar9,
                     value,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                    );
          setVisibility = (bool)pMVar3;
          if (setVisibility != 0) {
            IVar8.z = 0;
            IVar8._0_4_ = cube;
            CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
                      (pCVar12,IVar8,(MethodInfo *)0x0);
          }
          uStack18 = 0x1057;
          chunkPos.z = iVar6;
          chunkPos.x = (int16_t)uVar7;
          chunkPos.y = uVar7._2_2_;
          RuntimePrototypeCubeModel_AddToDirtyChunks
                    (this,chunkPos,meshGeneratePriority_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void AddToDirtyChunks(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToDirtyChunks
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,
               MeshGeneratePriority__Enum meshGeneratePriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  if (((this->fields).useMeshGeneratePrioritySystem != 0) &&
     (meshGeneratePriority != MeshGeneratePriority__Enum_None)) {
    this_00 = (this->fields).dirtyChunks;
    if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__Add
              (this_00,chunkPos,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
              );
    if ((this->fields).meshGeneratePriority == 0) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 == (MVNetworkGame *)0x0) ||
          (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 == (WorldNetwork *)0x0)) ||
         (this_01 = (pWVar3->fields)._.worldInventory, this_01 == (MVWorldInventory *)0x0))
      goto code_?;
      MVWorldInventory::MVWorldInventory_AddRuntimePrototypeToDirty(this_01,this,(MethodInfo *)0x0);
    }
    if ((this->fields).meshGeneratePriority < (int)meshGeneratePriority) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DeltaCubes);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    func_?(&TypeInfo__RuntimePrototypeCubeModel);
    cRam_? = '\x01';
  }
  pRVar4 = (RuntimePrototypeCubeModel *)func_?(TypeInfo__RuntimePrototypeCubeModel);
  if (pRVar4 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel__ctor(pRVar4,(MethodInfo *)0x0);
    (pRVar4->fields)._Scale_k__BackingField = (this->fields)._Scale_k__BackingField;
    (pRVar4->fields)._AuthorProfileID_k__BackingField =
         (this->fields)._AuthorProfileID_k__BackingField;
    this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
               *)(this->fields).chunks;
    if (this_00 !=
        (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
         *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)&stack0xffffff7c,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      pMVar6 = (MethodInfo *)(pDVar5->_current).key.AssemblyName;
      uVar7 = *(undefined8 *)&(pDVar5->_current).key.TypeName;
      uStack_1 = 1;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                            *)&stack0xffffff98,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar8 == 0) break;
        this_01 = (pRVar4->fields).chunks;
        pCStack_9 = (CubeModelChunk *)((ulonglong)uVar7 >> 0x20);
        iStack_10 = (int16_t)uVar7;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar12 = (pVVar11->oneVector).x;
        uVar13 = (pVVar11->oneVector).y;
        fVar14 = (this->fields)._Scale_k__BackingField;
        in_stack_15 = (MethodInfo *)((pVVar11->oneVector).z * fVar14);
        if (pCStack_9 == (CubeModelChunk *)0x0) goto code_?;
        scale.y = (float)uVar13 * fVar14;
        scale.x = (float)uVar12 * fVar14;
        scale.z = (float)in_stack_15;
        value = CubeModelChunk::CubeModelChunk_CloneGeometry(pCStack_9,scale,(MethodInfo *)0x0);
        if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        key.z = iStack_10;
        key._0_4_ = pMVar6;
        pMVar6 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff98,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 ,in_stack_15);
      uStack_1 = 0xffffffff;
      if (withDeltaCubes == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return pRVar4;
      }
      pDVar16 = (this->fields).deltaCubes;
      if (pDVar16 != (DeltaCubes *)0x0) {
        cubeChangeOriginal = (pDVar16->fields).cubeChange;
        pDVar16 = (DeltaCubes *)func_?();
        if (pDVar16 != (DeltaCubes *)0x0) {
          DeltaCubes::DeltaCubes__ctor_1
                    (pDVar16,(IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
                              *)cubeChangeOriginal,(MethodInfo *)0x0);
          (pRVar4->fields).deltaCubes = pDVar16;
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pRVar4 = (RuntimePrototypeCubeModel *)(*pcVar17)();
  return pRVar4;
}


/* Boolean CompareGeometry(RuntimePrototypeCubeModel) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
               (RuntimePrototypeCubeModel *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
  }
  iVar4 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
  if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
    iVar5 = RuntimePrototypeCubeModel_get_CubeCount(rpcm,(MethodInfo *)0x0);
    if (iVar4 == iVar5) {
      this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)(this->fields).chunks;
      if (this_00 ==
          (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
           *)0x0) goto code_?;
      pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)&stack0xffffff9c,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      pMVar7 = (MethodInfo *)(pDVar6->_current).key.AssemblyName;
      uVar8 = *(undefined8 *)&(pDVar6->_current).key.TypeName;
      iVar9 = (int16_t)uVar8;
      uStack_1 = 1;
      this_02 = (CubeModelChunk *)((ulonglong)uVar8 >> 0x20);
      do {
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                            *)&stack0xffffffb8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     ,in_stack_11);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  (rpcm->fields).chunks;
        if (this_01 ==
            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
        goto code_?;
        key.z = iVar9;
        key._0_4_ = pMVar7;
        method_00 = pMVar7;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                          (this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                          );
        if (bVar10 == 0) break;
        in_stack_11 = (MethodInfo *)(rpcm->fields).chunks;
        if (in_stack_11 == (MethodInfo *)0x0) goto code_?;
        key_00.z = iVar9;
        key_00._0_4_ = pMVar7;
        chunk = (CubeModelChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)in_stack_11
                           ,key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          );
        if (this_02 == (CubeModelChunk *)0x0) goto code_?;
        iVar9 = (int16_t)this_02;
        pMVar7 = (MethodInfo *)&UNK_?;
        bVar10 = CubeModelChunk::CubeModelChunk_CompareGeometry(this_02,chunk,(MethodInfo *)0x0);
        method_00 = pMVar7;
        this_02 = chunk;
      } while (bVar10 != 0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffb8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 ,method_00);
    }
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar10 = (*pcVar12)();
  return bVar10;
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
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  pSStack_8 = (String *)0x0;
  iStack_9 = 0;
  iStack_10 = 0;
  uStack_11 = 0;
  pCStack_12 = (CubeModelChunk *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  pCStack_13 = (CubeModelChunk *)0x0;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       (&DStack_15,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_16 = 0;
    auStack_7._0_4_ = pDVar14->_dictionary;
    auStack_7._4_4_ = pDVar14->_version;
    auStack_7._8_4_ = pDVar14->_index;
    pSStack_8 = (pDVar14->_current).key.AssemblyName;
    uVar17 = *(undefined8 *)&(pDVar14->_current).key.TypeName;
    iStack_10 = (int16_t)uVar17;
    uStack_11 = (undefined2)((ulonglong)uVar17 >> 0x10);
    pCStack_12 = (CubeModelChunk *)((ulonglong)uVar17 >> 0x20);
    iStack_9 = pDVar14->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_18 = (Object *)auStack_7;
    while( true ) {
      bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      this_02 = pCStack_12;
      if (bVar19 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_20 = CONCAT26(uStack_11,CONCAT24(iStack_10,pSStack_8));
      pCStack_13 = (CubeModelChunk *)0x0;
      if ((rpcm == (RuntimePrototypeCubeModel *)0x0) ||
         (this_01 = (rpcm->fields).chunks,
         this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)) break;
      key.z = iStack_10;
      key._0_4_ = pSStack_8;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryGetValue
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key,
                 (Object **)&pCStack_13,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                );
      if (this_02 == (CubeModelChunk *)0x0) break;
      in_stack_6 = (MethodInfo **)pCStack_13;
      CubeModelChunk::CubeModelChunk_CompareGeometry_1
                (this_02,pCStack_13,matchingCubeCount,investigatedCubeCount,visibleCubesOnly,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  (this->fields).prototypeId = id;
  (this->fields)._Scale_k__BackingField = scale;
  (this->fields)._AuthorProfileID_k__BackingField = authorProfileId;
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_00 != (BytePacker *)0x0) {
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,data,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      func_?(&TypeInfo__Cube);
      cRam_? = '\x01';
    }
    IStack_1.x = 0;
    IStack_1.y = 0;
    IStack_1.z = 0;
    iStack_2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                         (this_00,(MethodInfo *)0x0);
    id = 0;
    if (0 < iStack_2) {
      do {
        uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (this_00,(MethodInfo *)0x0);
        uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (this_00,(MethodInfo *)0x0);
        uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (this_00,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_1,(uint)uVar3,(uint)uVar4,(uint)uVar5,(MethodInfo *)0x0);
        byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                              (this_00,(MethodInfo *)0x0);
        this_01 = (Cube *)func_?(TypeInfo__Cube);
        if (this_01 == (Cube *)0x0) goto code_?;
        Cube::Cube__ctor_1(this_01,this_00,byteFlags,(MethodInfo *)0x0);
        iVector.z = IStack_1.z;
        iVector.x = IStack_1.x;
        iVector.y = IStack_1.y;
        RuntimePrototypeCubeModel_AddToChunk
                  (this,iVector,this_01,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
        }
        iVar6 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubesInRow
                          (byteFlags,(MethodInfo *)0x0);
        iVar7 = 1;
        if (1 < iVar6) {
          do {
            iVar8 = IStack_1.z;
            puVar9 = (undefined *)CONCAT22(IStack_1.y,(short)iVar7 + IStack_1.x);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              puVar9 = &UNK_?;
              func_?(TypeInfo__Cube);
            }
            cube = Cube::Cube_Clone_1(this_01,(MethodInfo *)0x0);
            iVector_00.z = iVar8;
            iVector_00._0_4_ = puVar9;
            RuntimePrototypeCubeModel_AddToChunk
                      (this,iVector_00,cube,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        id = id + 1;
      } while (id < iStack_2);
    }
    RuntimePrototypeCubeModel_SetVisibility(this,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel_RebuildPrototypeMesh(this,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel_set_PrototypeState
              (this,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CreateFromBytePackage(BytePacker) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateFromBytePackage
               (RuntimePrototypeCubeModel *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x60dc);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (bp != (BytePacker *)0x0) {
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (bp,(MethodInfo *)0x0);
    if (0 < iVar2) {
      do {
        uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                          (bp,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xffffffe4,(uint)uVar3,(uint)uVar4,(uint)uVar5,
                   (MethodInfo *)0x0);
        byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                              (bp,(MethodInfo *)0x0);
        this_00 = (Cube *)func_?();
        if (this_00 == (Cube *)0x0) goto code_?;
        Cube::Cube__ctor_1(this_00,bp,byteFlags,(MethodInfo *)0x0);
        iVector.z = 0;
        iVector.x = (short)uVar1;
        iVector.y = (short)(uVar1 >> 0x10);
        RuntimePrototypeCubeModel_AddToChunk
                  (this,iVector,this_00,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar6 = 0;
        iVar2 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubesInRow
                          (byteFlags,(MethodInfo *)0x0);
        iVar7 = 1;
        if (1 < iVar2) {
          do {
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            cube = Cube::Cube_Clone_1(this_00,(MethodInfo *)0x0);
            uVar1 = 0;
            RuntimePrototypeCubeModel_AddToChunk
                      (this,(IntVector)0x0,cube,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0)
            ;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar2);
        }
      } while (iVar6 + 1 < 0xADDR);
    }
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  puStack_4 = &stack0xffffff70;
  pRStack_5 = this;
  puVar6 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(0x4fa0);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  iStack_7 = 0;
  if ((cm != (MVCubeModelBase *)0x0) &&
     (pCVar8 = (cm->fields).chunkInstances, pCVar8 != (ChunkInstances *)0x0)) {
    piStack_9 = (int *)func_?(0,(short)TypeInfo__System__Collections__IEnumerable,pCVar8);
    ppiStack_10 = &piStack_9;
    piStack_11 = &iStack_7;
    uStack_12 = 0;
    uStack_1 = 1;
    while (piStack_9 != (int *)0x0) {
      cVar13 = func_?(0,(short)TypeInfo__System__Collections__IEnumerator,piStack_9);
      uVar14 = SUB42(piStack_9,0);
      if (cVar13 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_7 = func_?(uVar14,TypeInfo__System__IDisposable);
        if (iStack_7 != 0) {
          func_?(0,(short)TypeInfo__System__IDisposable,iStack_7);
        }
        uStack_1 = 0xffffffff;
        pCVar8 = (cm->fields).chunkInstances;
        if (pCVar8 != (ChunkInstances *)0x0) {
          ChunkInstances::ChunkInstances_Clear(pCVar8,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                     *)(this->fields).chunks;
          if (this_00 !=
              (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
               *)0x0) {
            uVar14 = 0x12af;
            uVar15 = 0x1057;
            pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
                      Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
                      Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                                (&DStack_17,this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                                );
            uStack_18 = 0;
            pSVar19 = (pDVar16->_current).key.AssemblyName;
            uVar20 = *(undefined8 *)&(pDVar16->_current).key.TypeName;
            uStack_1 = 4;
            pOStack_21 = (Object *)&stack0xffffff7c;
            goto code_?;
          }
        }
        break;
      }
      piStack_22 = piStack_9;
      if (piStack_9 == (int *)0x0) break;
      iStack_23 = *piStack_9;
      uVar24 = 0;
      uStack_25 = 0;
      uVar26 = *(ushort *)(iStack_23 + 0xb2);
      uStack_27 = (uint)uVar26;
      if (uVar26 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(iStack_23 + 0x58) + (uint)uVar24 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar28 = (undefined4 *)
                     (*(int *)(*(int *)(*piStack_9 + 0x58) + 4 + (uint)uVar24 * 8) * 8 + 0xc4 +
                     *piStack_9);
            goto code_?;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar26);
      }
      puVar28 = (undefined4 *)
               func_?(piStack_9,(short)TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar29 = (int *)(*(code *)*puVar28)(uVar14,puVar28[1]);
      if (piVar29 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar29 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) {
        func_?((short)piVar29,
                        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                       );
        break;
      }
      piVar30 = (int32_t *)func_?(piVar29);
      DStack_17._version = *piVar30;
      DStack_17._index = piVar30[1];
      DStack_17._current.key.AssemblyName = (String *)piVar30[2];
      DStack_17._current.key.TypeName = (String *)piVar30[3];
      DStack_17._current.value = (Object *)piVar30[4];
      DStack_17._getEnumeratorRetType = piVar30[5];
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)DStack_17._current.key.AssemblyName,(MethodInfo *)0x0);
    }
  }
code_?:
  uVar31 = func_?();
  func_?(uVar31);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
code_?:
  bVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
          WorldObject::IntVector,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *)
                     &stack0xffffff7c,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                    );
  if (bVar33 == 0) goto code_?;
  iStack_34 = (int16_t)uVar20;
  uStack_25 = CONCAT22(iStack_34,(undefined2)uStack_25);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
    iStack_34 = uStack_25._2_2_;
  }
  this_01 = (this->fields).chunks;
  if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
  goto code_?;
  key.z = iStack_34;
  key._0_4_ = pSVar19;
  this_03 = (CubeModelChunk *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                      );
  if (this_03 == (CubeModelChunk *)0x0) goto code_?;
  uVar14 = 0x1373;
  uVar15 = 0x1057;
  chunkPos.z = uStack_25._2_2_;
  chunkPos._0_4_ = pSVar19;
  CubeModelChunk::CubeModelChunk_SetInstanceDataRef(this_03,chunkPos,cm,(MethodInfo *)0x0);
  goto code_?;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffff7c,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
             ,(MethodInfo *)CONCAT22(uVar15,uVar14));
  uStack_1 = 0xffffffff;
  this_02 = (HashSet_1_System_Object_ *)(pRStack_5->fields).instances;
  if (this_02 != (HashSet_1_System_Object_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              (this_02,(Object *)(cm->fields)._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  goto code_?;
}


/* Void CubePosToChunkPos(IntVector ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CubePosToChunkPos
               (RuntimePrototypeCubeModel *this,IntVector *cubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  iVar3 = cubePos->z;
  uVar4 = cubePos->x;
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (bp != (BytePacker *)0x0) {
    while( true ) {
      do {
        while( true ) {
          iVar2 = (bp->fields)._position;
          iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                            (bp,(MethodInfo *)0x0);
          if (iVar3 <= iVar2) {
            return;
          }
          uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                            (bp,(MethodInfo *)0x0);
          uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          uVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          uVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    ((IntVector *)&stack0xffffffec,(uint)uVar5,(uint)uVar6,(uint)uVar7,
                     (MethodInfo *)0x0);
          if (uVar4 != 0) break;
          if (rpcm == (RuntimePrototypeCubeModel *)0x0) goto code_?;
          iVector.z = 0;
          iVector.x = (short)uVar1;
          iVector.y = (short)(uVar1 >> 0x10);
          RuntimePrototypeCubeModel_RemoveFromChunk
                    (rpcm,iVector,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        }
      } while (2 < uVar4 - 2);
      if (rpcm == (RuntimePrototypeCubeModel *)0x0) break;
      iVector_00.z = 0;
      iVector_00.x = (short)uVar1;
      iVector_00.y = (short)(uVar1 >> 0x10);
      RuntimePrototypeCubeModel_RemoveFromChunk
                (rpcm,iVector_00,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      this = (Cube *)func_?();
      if (this == (Cube *)0x0) break;
      Cube::Cube__ctor_1(this,bp,uVar4,(MethodInfo *)0x0);
      uVar8 = 0;
      iVector_01.z = 0;
      iVector_01.x = (short)uVar1;
      iVector_01.y = (short)(uVar1 >> 0x10);
      RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                (rpcm,iVector_01,this,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      uVar1 = uVar8;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pSStack_7 = (String *)0x0;
  iStack_8 = 0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  uStack_9._4_4_ = (CubeModelChunk *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       (&DStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_12 = 0;
    auStack_6._0_4_ = pDVar10->_dictionary;
    auStack_6._4_4_ = pDVar10->_version;
    auStack_6._8_4_ = pDVar10->_index;
    pSStack_7 = (pDVar10->_current).key.AssemblyName;
    uStack_9 = *(undefined8 *)&(pDVar10->_current).key.TypeName;
    iStack_8 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_13 = (Object *)auStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (uStack_9._4_4_ == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_Destroy(uStack_9._4_4_,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void FineGrainedTerrainOverrideChunkSize(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_FineGrainedTerrainOverrideChunkSize
               (RuntimePrototypeCubeModel *this,int32_t size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Not_power_of_2);
    func_?(&StringLiteral_Can_not_override_chunk_size_if_c);
    func_?(&StringLiteral_ChunkSize_overwritten);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_IsPowerOfTwo(size,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    iVar2 = RuntimePrototypeCubeModel_get_CubeCount(unaff_ESI,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      (unaff_ESI->fields).chunkSize = size;
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Can_not_override_chunk_size_if_c,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cube>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cube>__get_Value__
                   );
    cRam_? = '\x01';
  }
  pBVar4 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (pBVar4 != (BytePacker *)0x0) {
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(pBVar4,(MethodInfo *)0x0);
    if (cubesDict != (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) {
      if (addCount != 0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)cubesDict,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__get_Count__
                          );
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_7
                  (pBVar4,value,(MethodInfo *)0x0);
      }
      pDStack_5 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                    *)&UNK_?;
      pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)&pDStack_5,
                          (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)cubesDict,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)pDVar6->_index;
      pSVar7 = (pDVar6->_current).key.AssemblyName;
      uVar8 = *(undefined8 *)&(pDVar6->_current).key.TypeName;
      uStack_1 = 1;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                            *)&stack0xffffffac,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffac,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return pBVar4;
        }
        iStack_10 = (int16_t)uVar8;
        pOStack_11 = (Object *)((ulonglong)uVar8 >> 0x20);
        if (pOStack_11 == (Object *)0x0) break;
        byteCorners = (Byte__Array *)pOStack_11[1].monitor;
        materials = pOStack_11[2].klass;
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
                  (pBVar4,(int16_t)pSVar7,(int16_t)((uint)pSVar7 >> 0x10),iStack_10,byteCorners,
                   (Byte__Array *)materials,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pBVar4 = (BytePacker *)(*pcVar12)();
  return pBVar4;
}


/* CubeModelChunk GetChunkFromCubePos(IntVector) */

CubeModelChunk *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetChunkFromCubePos
          (RuntimePrototypeCubeModel *this,IntVector cubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                   );
    uVar1 = 0x1057;
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                   );
    uVar1 = 0x1057;
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pMVar3 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  CVar4 = _cubePos;
  IVar5.z = cubePos.x;
  IVar5._0_4_ = &cubePos;
  IVar5 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                    (IVar5,CONCAT22(uVar1,cubePos.z),pMVar3);
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
    ;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__TryGetValue
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,*IVar5._0_4_,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                      );
    if ((bVar6 == 0) || (pMVar3 == (MethodInfo *)0x0)) {
      return (Cube *)0x0;
    }
    if (cRam_? == '\0') {
      cubePos._0_4_ = (Cube *)0xADDR;
      cubePos.z._0_1_ = 0xc0;
      stack0x0000000d = 0x10ee73;
      func_?();
      cRam_? = '\x01';
    }
    cubePos._0_4_ = (Cube *)0x0;
    cubePos.z._0_1_ = 0;
    stack0x0000000d = 0;
    if ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pMVar3[1].return_type !=
        (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      stack0x0000000c =
           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
      ;
      cubePos._0_4_ = (Cube *)&cubePos;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                        ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pMVar3[1].return_type,
                         CVar4._0_6_,(Cell *)&cubePos,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                        );
      if (bVar6 == 0) {
        cubePos._0_4_ = (Cube *)0x0;
      }
      return (Cube *)cubePos._0_4_;
    }
  }
  stack0x0000000c = &UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar8 = (Cube *)(*pcVar7)();
  return pCVar8;
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
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  pSStack_8 = (String *)0x0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  pOStack_10 = (Object *)0x0;
  pGVar11 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  pGStack_12 = pGVar11;
  if (pGVar11 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar11,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
               *)(this->fields).chunks;
    pGStack_13 = pGVar11;
    if (this_00 !=
        (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
         *)0x0) {
      pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)&stack0xffffff8c,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      uStack_15 = 0;
      auStack_7._0_4_ = pDVar14->_dictionary;
      auStack_7._4_4_ = pDVar14->_version;
      auStack_7._8_4_ = pDVar14->_index;
      pSStack_8 = (pDVar14->_current).key.AssemblyName;
      uVar16 = *(undefined8 *)&(pDVar14->_current).key.TypeName;
      uStack_9 = (undefined4)uVar16;
      pOStack_10 = (Object *)((ulonglong)uVar16 >> 0x20);
      iStack_6 = pDVar14->_getEnumeratorRetType;
      uStack_1 = 1;
      pOStack_17 = (Object *)auStack_7;
      while( true ) {
        bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                            *)auStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar18 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     ,in_stack_19);
          *unaff_FS_OFFSET = uStack_3;
          return pGStack_12;
        }
        uStack_20 = CONCAT44(uStack_9,pSStack_8);
        pOStack_21 = pOStack_10;
        pGVar11 = (GameObject *)func_?();
        if (pGVar11 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                  (pGVar11,(MethodInfo *)0x0);
        pTStack_22 = (Transform *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                               (pGVar11,
                                UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                               );
        this_01 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar11,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                            );
        if ((pOStack_21 == (Object *)0x0) || (this_01 == (MeshFilter *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (this_01,(Mesh *)pOStack_21[2].monitor,(MethodInfo *)0x0);
        if (pTStack_22 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pTStack_22,(Material *)pOStack_21[3].klass,(MethodInfo *)0x0);
        pTStack_22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar11,(MethodInfo *)0x0);
        pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGStack_12,(MethodInfo *)0x0);
        if (pTStack_22 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTStack_22,pTVar23,(MethodInfo *)0x0);
        pTStack_22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar11,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        if (pTStack_22 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTStack_22,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar11,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar23 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar23,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
      }
    }
  }
  uVar24 = func_?();
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  pGVar11 = (GameObject *)(*pcVar25)();
  return pGVar11;
}


/* Vector3 GetRandomCubePos(GameObject) */

Vector3 * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetRandomCubePos
                    (Vector3 *__return_storage_ptr__,RuntimePrototypeCubeModel *this,GameObject *go,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                   );
    func_?(&
                    System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__get_Item_int_
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                       );
    index = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_4
                      ((IEnumerable_1_MV_WorldObject_IntVector_ *)source,
                       System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                      );
    this_01 = (this->fields).chunks;
    if (index != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                            (0,(index->fields)._size,(MethodInfo *)0x0);
      IVar1 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
               List_1_MV_WorldObject_IntVector__get_Item
                         ((List_1_MV_WorldObject_IntVector_ *)&VStack_2.y,(int32_t)index,method_00)
      ;
      if (this_01 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,
                            *IVar1._0_4_,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                           );
        if (pOVar3 != (Object *)0x0) {
          if (cRam_? == '\0') {
            VStack_2.z = (float)&UNK_?;
            func_?();
            VStack_2.z = (float)&
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
            ;
            VStack_2.y = (float)&UNK_?;
            func_?();
            VStack_2.y = (float)&
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
            ;
            VStack_2.x = (float)&UNK_?;
            func_?();
            VStack_2.x = (float)&
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
            ;
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )pOVar3[8].monitor !=
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) {
            iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                              ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)pOVar3[8].monitor,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                              );
            if (iVar4 < 1) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_No_cube_found_in_chunk__This_is_,(MethodInfo *)0x0)
              ;
              if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MV__WorldObject__IntVector);
              }
              pIVar5 = TypeInfo__MV__WorldObject__IntVector->static_fields;
              iVar4._0_2_ = (pIVar5->One).x;
              iVar4._2_2_ = (pIVar5->One).y;
              iVar6 = (pIVar5->One).z;
            }
            else {
              if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)pOVar3[8].monitor ==
                  (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
              pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                       RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                   *)&stack0xffffffd0,
                                  (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                   *)pOVar3[8].monitor,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                                 );
              iVar4 = (pDVar7->_current).key._options;
              iVar6 = (int16_t)(pDVar7->_current).key._cultureKey;
            }
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCubeFunctions);
            }
            IVar1.z = iVar6;
            IVar1.x = (short)iVar4;
            IVar1.y = (short)((uint)iVar4 >> 0x10);
            pVVar8 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                               (&VStack_2,go,IVar1,(MethodInfo *)0x0);
            fVar9 = pVVar8->y;
            fVar10 = pVVar8->z;
            __return_storage_ptr__->x = pVVar8->x;
            __return_storage_ptr__->y = fVar9;
            __return_storage_ptr__->z = fVar10;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar11)();
  return pVVar8;
}


/* Int32 GetRefenceCountFromChunk(IntVector ByRef) */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::
        RuntimePrototypeCubeModel_GetRefenceCountFromChunk
                  (RuntimePrototypeCubeModel *this,IntVector *chunkPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                        *chunkPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
    if (pOVar1 != (Object *)0x0) {
      return (int32_t)pOVar1[8].klass;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void HandleDelta() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_HandleDelta
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).deltaCubes;
  while (pDVar1 != (DeltaCubes *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pQVar2 = (pDVar1->fields).cubeChange;
    if (pQVar2 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
    break;
    if ((pQVar2->fields)._size < 1) {
      return;
    }
    pDVar1 = (this->fields).deltaCubes;
    if (pDVar1 == (DeltaCubes *)0x0) break;
    prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar1,this,(MethodInfo *)0x0);
    if (prototypeData != (Byte__Array *)0x0) {
      if ((this->fields).prototypeState == 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                  (this_01,(this->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
      }
      else if ((this->fields).prototypeState == 1) {
        this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  (this->fields).pendingDeltaCubes;
        if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                  (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           prototypeData,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                  );
      }
    }
    pDVar1 = (this->fields).deltaCubes;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean MeshGenerateDirtyChunks(Int32 ByRef) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_MeshGenerateDirtyChunks
               (RuntimePrototypeCubeModel *this,int32_t *meshUpdates,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                           );
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    pHVar4 = (this->fields).dirtyChunks;
    if (pHVar4 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]
               ::HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                         ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa8,
                          pHVar4,
                          MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                         );
      uVar6._0_2_ = (pHVar5->_current).x;
      uVar6._2_2_ = (pHVar5->_current).y;
      uStack_1 = 1;
      pMVar7 = *(MethodInfo **)&(pHVar5->_current).z;
      do {
        bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::
                WorldObject::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffff94,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        method_00 = pMVar7;
        if (bVar8 == 0) break;
        fVar9 = (this->fields)._Scale_k__BackingField;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar11._0_4_ = (pVVar10->oneVector).x;
        uVar11._4_4_ = (pVVar10->oneVector).y;
        uVar12._0_2_ = 0;
        uVar12._2_2_ = 0;
        chunkPos.z = (int16_t)pMVar7;
        chunkPos.x = (int16_t)uVar6;
        chunkPos.y = SUB42(uVar6,2);
        scale.y = (float)uVar11._4_4_ * fVar9;
        scale.x = (float)(undefined4)uVar11 * fVar9;
        scale.z = (pVVar10->oneVector).z * fVar9;
        RuntimePrototypeCubeModel_RebuildChunk(this,chunkPos,scale,(MethodInfo *)0x0);
        in_stack_13 =
             CONCAT44((int)((ulonglong)uVar11 >> 0x20),
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                     );
        item.z = (int16_t)pMVar7;
        item.x = (int16_t)uVar6;
        item.y = SUB42(uVar6,2);
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
        HashSet_1_MV_WorldObject_IntVector__Add
                  ((HashSet_1_MV_WorldObject_IntVector_ *)this_00,item,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                  );
        iVar14 = *meshUpdates;
        *meshUpdates = iVar14 + -1;
        uVar6 = uVar12;
        pMVar7 = method_00;
      } while (0 < iVar14 + -1);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff94,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]
               ::HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                         ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa8,
                          (HashSet_1_MV_WorldObject_IntVector_ *)this_00,
                          MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                         );
      uVar15._0_2_ = (pHVar5->_current).x;
      uVar15._2_2_ = (pHVar5->_current).y;
      uVar6 = *(undefined4 *)&(pHVar5->_current).z;
      uStack_1 = 4;
      while( true ) {
        pMVar7 = (MethodInfo *)((ulonglong)in_stack_13 >> 0x20);
        bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::
                WorldObject::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffff94,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        if (bVar8 == 0) break;
        pHVar4 = (this->fields).dirtyChunks;
        if (pHVar4 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
        in_stack_13 =
             CONCAT44(pMVar7,
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                     );
        item_00.z = (int16_t)uVar6;
        item_00.x = (int16_t)uVar15;
        item_00.y = SUB42(uVar15,2);
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
        HashSet_1_MV_WorldObject_IntVector__Remove
                  (pHVar4,item_00,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff94,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 ,pMVar7);
      uStack_1 = 0xffffffff;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pAVar16 = (this->fields).DirtyChunksRegenerated;
      if (pAVar16 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        (*(pAVar16->fields)._._.invoke_impl)();
        pHVar4 = (this->fields).dirtyChunks;
        if (pHVar4 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
          if ((pHVar4->fields)._count != 0) {
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          (this->fields).meshGeneratePriority = 0;
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  bVar8 = (*pcVar17)();
  return bVar8;
}


/* Boolean MeshGenerateDirtyChunksAll(Int32 ByRef) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
               (RuntimePrototypeCubeModel *this,int32_t *meshUpdates,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    cRam_? = '\x01';
  }
  pHVar4 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                           );
  if (pHVar4 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (pHVar4,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    pHVar5 = (this->fields).dirtyChunks;
    if (pHVar5 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      pHVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]
                ::HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                          ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffac,
                           pHVar5,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                          );
      method_00 = *(MethodInfo **)&(pHVar6->_current).z;
      uStack_1 = 1;
      while( true ) {
        bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::
                WorldObject::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffff98,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        pMVar8 = 
        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
        ;
        if (bVar7 == 0) break;
        iVar9 = (int16_t)method_00;
        item.z = iVar9;
        item._0_4_ = 
        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
        ;
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
        HashSet_1_MV_WorldObject_IntVector__Add
                  ((HashSet_1_MV_WorldObject_IntVector_ *)pHVar4,item,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                  );
        fVar10 = (this->fields)._Scale_k__BackingField;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar12 = (pVVar11->oneVector).x;
        uVar13 = (pVVar11->oneVector).y;
        method_00 = (MethodInfo *)((float)uVar12 * fVar10);
        chunkPos.z = iVar9;
        chunkPos._0_4_ = pMVar8;
        scale.y = (float)uVar13 * fVar10;
        scale.x = (float)method_00;
        scale.z = (pVVar11->oneVector).z * fVar10;
        RuntimePrototypeCubeModel_RebuildChunk(this,chunkPos,scale,(MethodInfo *)0x0);
        *meshUpdates = *meshUpdates + -1;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff98,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pHVar4 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).dirtyChunks;
      if (pHVar4 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
                  (pHVar4,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Clear__
                  );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pAVar14 = (this->fields).DirtyChunksRegenerated;
        if (pAVar14 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0
           ) {
          (*(pAVar14->fields)._._.invoke_impl)();
          pHVar5 = (this->fields).dirtyChunks;
          if (pHVar5 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
            if ((pHVar5->fields)._count != 0) {
              *unaff_FS_OFFSET = uStack_3;
              return 0;
            }
            (this->fields).meshGeneratePriority = 0;
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  bVar7 = (*pcVar15)();
  return bVar7;
}


/* Boolean MeshGenerateStatus(HashSet`1[MV.WorldObject.IntVector]) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateStatus
               (RuntimePrototypeCubeModel *this,HashSet_1_MV_WorldObject_IntVector_ *generatedChunks
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).DirtyChunksRegenerated;
  if (pAVar1 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,generatedChunks,(pAVar1->fields)._._.method);
    pHVar2 = (this->fields).dirtyChunks;
    if (pHVar2 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      if ((pHVar2->fields)._count != 0) {
        return 0;
      }
      (this->fields).meshGeneratePriority = 0;
      return 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void RebuildChunk(IntVector, Vector3) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(0x7680);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&StringLiteral_Chunk_not_contained_);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this_00,chunkPos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Chunk_not_contained_,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).chunks;
    if ((this_01 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (this_02 = (CubeModelChunk *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,
                             chunkPos,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            ), this_02 != (CubeModelChunk *)0x0)) {
      uStack2 = 0;
      CubeModelChunk::CubeModelChunk_RebuildChunk(this_02,scale,(MethodInfo *)0x0);
      if ((this->fields).OnChunkRebuilt == (Action_1_MV_WorldObject_IntVector_ *)0x0) {
        return;
      }
      pAVar3 = (this->fields).OnChunkRebuilt;
      pvStack4 = (pAVar3->fields)._._.method;
      (*(pAVar3->fields)._._.invoke_impl)();
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pSStack_7 = (String *)0x0;
  iStack_8 = 0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  uStack_9._4_4_ = (CubeModelChunk *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                         *)&stack0xffffff90,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_6._0_4_ = pDVar10->_dictionary;
    auStack_6._4_4_ = pDVar10->_version;
    auStack_6._8_4_ = pDVar10->_index;
    pSStack_7 = (pDVar10->_current).key.AssemblyName;
    uStack_9 = *(undefined8 *)&(pDVar10->_current).key.TypeName;
    iStack_8 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,in_stack_14);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = uStack_9._4_4_;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_16._0_4_ = (pVVar15->oneVector).x;
      uStack_16._4_4_ = (pVVar15->oneVector).y;
      fStack_17 = (pVVar15->oneVector).z;
      fStack_18 = (this->fields)._Scale_k__BackingField;
      fStack_19 = fStack_17 * fStack_18;
      fStack_20 = (float)uStack_16._4_4_ * fStack_18;
      fStack_18 = (float)(undefined4)uStack_16 * fStack_18;
      if (this_01 == (CubeModelChunk *)0x0) break;
      scale.y = fStack_20;
      scale.x = fStack_18;
      scale.z = fStack_19;
      CubeModelChunk::CubeModelChunk_RebuildChunk(this_01,scale,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void RemoveAllCubesLocal() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveAllCubesLocal
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                   );
    func_?(0x7730);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                   );
    func_?(&
                    System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(0x5f5c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_7._list = (List_1_MV_WorldObject_IntVector_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.x = 0;
  LStack_7._current.y = 0;
  LStack_7._current.z = 0;
  LStack_7._18_2_ = 0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                       );
    this_02 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_4
                        ((IEnumerable_1_MV_WorldObject_IntVector_ *)source,
                         System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                        );
    if (this_02 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
               List_1_MV_WorldObject_IntVector__GetEnumerator
                         ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffb4,this_02,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                         );
      uStack_9 = 0;
      LStack_7._list = pLVar8->_list;
      LStack_7._index = pLVar8->_index;
      LStack_7._version = pLVar8->_version;
      LStack_7._current.x = (pLVar8->_current).x;
      LStack_7._current.y = (pLVar8->_current).y;
      LStack_7._16_4_ = *(undefined4 *)&(pLVar8->_current).z;
      uStack_1 = 1;
      pLStack_10 = &LStack_7;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject::
                IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        uVar12 = LStack_7._current._0_4_;
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        iStack_13 = LStack_7._current.z;
        uStack_14 = LStack_7._18_2_;
        if ((this->fields).chunks == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        break;
        key.z = LStack_7._current.z;
        key.x = LStack_7._current.x;
        key.y = LStack_7._current.y;
        this_03 = (CubeModelChunk *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                             (this->fields).chunks,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            );
        if (this_03 == (CubeModelChunk *)0x0) break;
        CubeModelChunk::CubeModelChunk_Destroy(this_03,(MethodInfo *)0x0);
        uVar15 = LStack_7._current._0_4_;
        this_01 = (this->fields).chunks;
        if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) break;
        key_00.z = (int16_t)_iStack_18;
        LStack_7._current.x = (int16_t)uVar12;
        LStack_7._current.y = SUB42(uVar12,2);
        key_00.x = LStack_7._current.x;
        key_00.y = LStack_7._current.y;
        LStack_7._current._0_4_ = uVar15;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                  );
        uVar15 = LStack_7._current._0_4_;
        chunkPos.z = (int16_t)_iStack_18;
        LStack_7._current.x = (int16_t)uVar12;
        LStack_7._current.y = SUB42(uVar12,2);
        chunkPos.x = LStack_7._current.x;
        chunkPos.y = LStack_7._current.y;
        LStack_7._current._0_4_ = uVar15;
        RuntimePrototypeCubeModel_RemoveChunk(this,chunkPos,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void RemoveChunk(IntVector) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,MethodInfo *method)

{
  pIStack_1 = (Il2CppGenericClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffffac;
  pIVar5 = (Il2CppClass *)&stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(0xfc74);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  this_00 = (HashSet_1_System_Object_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_Object_ *)0x0) {
    pHVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
             HashSet_1_System_Object__GetEnumerator
                       (&HStack_7,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    id = (MVCubeModelBase__Class *)pHVar6->_current;
    HStack_7._version = 0;
    pIStack_1 = (Il2CppGenericClass *)0x1;
    HStack_7._current = (Object *)&stack0xffffffc8;
    while( true ) {
      bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar8 == 0) {
        pIStack_1 = (Il2CppGenericClass *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_9);
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI = id;
      if (this_02 == (MVWorldObjectClientManager *)0x0) break;
      pMVar10 = (MVCubeModelBase__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,(int32_t)id,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__MVCubeModelBase;
      if (pMVar10 == (MVCubeModelBase__Class *)0x0) break;
      unaff_EDI = TypeInfo__MVCubeModelBase;
      if ((*(byte *)&(pMVar10->_0).image[4].nameNoExt <
           (TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth) ||
         (*(MVCubeModelBase__Class **)
           (((pMVar10->_0).image[2].typeCount - 4) +
           (uint)(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth * 4) !=
          TypeInfo__MVCubeModelBase)) goto code_?;
      in_stack_9 = (MethodInfo *)(pMVar10->vtable).get_Position.methodPtr;
      unaff_EDI = pMVar10;
      if (in_stack_9 == (MethodInfo *)0x0) break;
      pCVar11 = ChunkInstances::ChunkInstances_GetChunk
                         ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffffb8,
                          (ChunkInstances *)in_stack_9,chunkPos,(MethodInfo *)0x0);
      obj = pCVar11->gameObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        HStack_7._current = (Object *)TypeInfo__UnityEngine__Object;
        HStack_7._version = (int32_t)&UNK_?;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      this_01 = (ChunkInstances *)(pMVar10->vtable).get_Position.methodPtr;
      if (this_01 == (ChunkInstances *)0x0) break;
      ChunkInstances::ChunkInstances_Remove(this_01,chunkPos,(MethodInfo *)0x0);
    }
  }
  func_?();
  pMVar10 = extraout_EDX;
code_?:
  func_?((short)pMVar10,unaff_EDI);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean RemoveCube(IntVector) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCube
               (RuntimePrototypeCubeModel *this,IntVector iVector,MethodInfo *method)

{
  this_02 = this;
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    uVar1 = 0x10ee;
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
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
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                        *)(this->fields).chunks,*pIVar5,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                   );
    uVar1 = 0x10ee;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(0x93fc);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  iVar3 = iVector.x;
  iStack_4 = iVector.y;
  IVar5.z = iVar3;
  IVar5._0_4_ = &stack0xfffffff4;
  IVar6 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (IVar5,CONCAT22(uVar1,iVector.z),method_00);
  pIVar7 = IVar6._0_4_;
  uVar8 = pIVar7->x;
  uVar9 = pIVar7->y;
  IVar6.y = uVar9;
  IVar6.x = uVar8;
  IVar5 = *pIVar7;
  if ((this->fields).chunks != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                        *)(this->fields).chunks,*pIVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar10 == 0) {
      return;
    }
    pDVar11 = (this->fields).chunks;
    if ((pDVar11 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (pCVar12 = (CubeModelChunk *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar11,IVar5,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                           ), pCVar12 != (CubeModelChunk *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        in_stack_13 = 0x1057;
        func_?();
        cRam_? = '\x01';
        meshGeneratePriority =
             (MeshGeneratePriority__Enum)
             &
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
        ;
      }
      meshGeneratePriority._2_2_ = (undefined2)(meshGeneratePriority >> 0x10);
      this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                (pCVar12->fields).cells;
      if (this_00 !=
          (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
        key.z = iVar3;
        key.x = iVector.x;
        key.y = iVector.y;
        in_stack_13 = iStack_4;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          );
        if (bVar10 != 0) {
          this_01 = (pCVar12->fields).cells;
          if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
          key_01.z = iVar3;
          key_01._0_4_ = this_00;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]
          ::Dictionary_2_MV_WorldObject_IntVector_Cell__Remove
                    (this_01,key_01,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                    );
          pos.z = iVar3;
          pos._0_4_ = this_00;
          CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
                    (pCVar12,pos,(MethodInfo *)0x0);
          piVar14 = &(pCVar12->fields).cubeCount;
          *piVar14 = *piVar14 + -1;
        }
        pDVar11 = (this->fields).chunks;
        if (pDVar11 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
          key_00.z = 0x1057;
          key_00.x = uVar8;
          key_00.y = uVar9;
          in_stack_13 = uVar9;
          pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar11,key_00
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              );
          if (pOVar15 != (Object *)0x0) {
            if (pOVar15[7].klass != (Object__Class *)0x0) {
              chunkPos.z = 0x1057;
              chunkPos.x = uVar8;
              chunkPos.y = uVar9;
              RuntimePrototypeCubeModel_AddToDirtyChunks
                        (this,chunkPos,CONCAT22(meshGeneratePriority._2_2_,0x1057),(MethodInfo *)0x0
                        );
              return;
            }
            pDVar11 = (this->fields).chunks;
            if ((pDVar11 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
               (key_02.z = 0x1057, key_02.x = uVar8, key_02.y = uVar9,
               pCVar12 = (CubeModelChunk *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                        IntVector,System::Object]::
                        Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar11,
                                   key_02,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                                  ), pCVar12 != (CubeModelChunk *)0x0)) {
              CubeModelChunk::CubeModelChunk_Destroy(pCVar12,(MethodInfo *)0x0);
              pDVar11 = (this->fields).chunks;
              if (pDVar11 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
                key_03.z = 0x1057;
                key_03.x = uVar8;
                key_03.y = uVar9;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar11,key_03,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                          );
                IVar6.z = 0x1057;
                RuntimePrototypeCubeModel_RemoveChunk(this,IVar6,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void RemoveInstance(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
               (RuntimePrototypeCubeModel *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).instances;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__Remove
              (pHVar1,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    pHVar1 = (this->fields).instances;
    if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
      if ((pHVar1->fields)._count == 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                        *chunkPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar1[8].klass = (Object__Class *)((int)&pOVar1[8].klass[-1].vtable.ToString.method + 3);
      return;
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pSStack_7 = (String *)0x0;
  iStack_8 = 0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  uStack_9._4_4_ = (Object *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       (&DStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_12 = 0;
    auStack_6._0_4_ = pDVar10->_dictionary;
    auStack_6._4_4_ = pDVar10->_version;
    auStack_6._8_4_ = pDVar10->_index;
    pSStack_7 = (pDVar10->_current).key.AssemblyName;
    uStack_9 = *(undefined8 *)&(pDVar10->_current).key.TypeName;
    iStack_8 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_13 = (Object *)auStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (uStack_9._4_4_ == (Object *)0x0) break;
      uStack_9._4_4_[8].klass =
           (Object__Class *)((int)&uStack_9._4_4_[8].klass[-1].vtable.ToString.method + 3);
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ReplaceCube(IntVector, Byte) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
               (RuntimePrototypeCubeModel *this,IntVector iVector,uint8_t materialId,
               MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0x6064);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  cube = RuntimePrototypeCubeModel_GetCube(this,iVector,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  handle = TypeRef__MV__WorldObject__Face;
  if (bVar2 != 0) {
code_?:
    *unaff_FS_OFFSET = uVar1;
    return;
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = (Cube *)mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)enumType,(MethodInfo *)0x0);
  if (this_01 != (Array *)0x0) {
    pIVar3 = mscorlib.dll::System::Array::Array_GetEnumerator(this_01,(MethodInfo *)0x0);
    while (pIVar3 != (IEnumerator *)0x0) {
      pIVar3 = (IEnumerator *)&UNK_?;
      cVar4 = func_?();
      if (cVar4 == '\0') {
        iVar5 = func_?();
        if (iVar5 != 0) {
          func_?();
        }
        RuntimePrototypeCubeModel_AddToChunk
                  (this,iVector,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
                   (MethodInfo *)0x0);
        this_00 = (this->fields).deltaCubes;
        if (this_00 != (DeltaCubes *)0x0) {
          uVar1 = 3;
          DeltaCubes::DeltaCubes_Enqueue
                    (this_00,iVector,CubeAction__Enum_FaceChanged,(MethodInfo *)0x0);
          goto code_?;
        }
        break;
      }
      if (pIVar3 == (IEnumerator *)0x0) break;
      uVar6 = 0;
      uVar7 = (pIVar3->klass->_1).interface_offsets_count;
      if (uVar7 != 0) {
        do {
          if (pIVar3->klass->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar8 = &(pIVar3->klass->vtable).get_Current +
                     pIVar3->klass->interfaceOffsets[uVar6].offset;
            cube = enumType;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      pIVar3 = (IEnumerator *)&UNK_?;
      pVVar8 = (VirtualInvokeData *)func_?();
      cube = enumType;
code_?:
      piVar9 = (int *)(*pVVar8->methodPtr)();
      if (piVar9 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar9 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      {
        func_?();
        break;
      }
      pFVar10 = (Face__Enum *)func_?();
      face = *pFVar10;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        cube = (Cube *)&UNK_?;
        func_?();
      }
      enumType = _materialId;
      Cube::Cube_SetMaterial(cube,face,materialId,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetSharedMaterials(MVCubeModelInstance) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ResetSharedMaterials
               (RuntimePrototypeCubeModel *this,MVCubeModelInstance *cm,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  pSStack_8 = (String *)0x0;
  iStack_9 = 0;
  iStack_10 = 0;
  uStack_11 = 0;
  pOStack_12 = (Object *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                         *)auStack_14,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_15 = 0;
    auStack_7._0_4_ = pDVar13->_dictionary;
    auStack_7._4_4_ = pDVar13->_version;
    auStack_7._8_4_ = pDVar13->_index;
    pSStack_8 = (pDVar13->_current).key.AssemblyName;
    uVar16 = *(undefined8 *)&(pDVar13->_current).key.TypeName;
    iStack_10 = (int16_t)uVar16;
    uStack_11 = (undefined2)((ulonglong)uVar16 >> 0x10);
    pOStack_12 = (Object *)((ulonglong)uVar16 >> 0x20);
    iStack_9 = pDVar13->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_17 = (Object *)auStack_7;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      pOVar19 = pOStack_12;
      if (bVar18 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_20 = CONCAT26(uStack_11,CONCAT24(iStack_10,pSStack_8));
      if (cm == (MVCubeModelInstance *)0x0) break;
      chunkPos.z = iStack_10;
      chunkPos._0_4_ = pSStack_8;
      pCVar21 = MVCubeModelInstance::MVCubeModelInstance_GetChunkInstance
                         ((ChunkInstances_ChunkInstanceVariables *)(auStack_14 + 0xc),cm,chunkPos,
                          (MethodInfo *)0x0);
      if ((pOVar19 == (Object *)0x0) || (pCVar21->renderer == (MeshRenderer *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pCVar21->renderer,(Material *)pOVar19[3].klass,(MethodInfo *)0x0);
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
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
  func_?();
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
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0x6064);
    cRam_? = '\x01';
  }
  cube = RuntimePrototypeCubeModel_GetCube(this,iVector,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pSStack_7 = (String *)0x0;
  iStack_8 = 0;
  uStack_9._0_2_ = 0;
  uStack_9._2_2_ = 0;
  uStack_9._4_4_ = (Object *)0x0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       (&DStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_12 = 0;
    auStack_6._0_4_ = pDVar10->_dictionary;
    auStack_6._4_4_ = pDVar10->_version;
    auStack_6._8_4_ = pDVar10->_index;
    pSStack_7 = (pDVar10->_current).key.AssemblyName;
    uStack_9 = *(undefined8 *)&(pDVar10->_current).key.TypeName;
    iStack_8 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_13 = (Object *)auStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar15 = uStack_9._4_4_;
      if (uStack_9._4_4_ == (Object *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CubeModelChunk);
        cRam_? = '\x01';
      }
      cells = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pOVar15[8].monitor;
      if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CubeModelChunk);
      }
      CubeModelChunk::CubeModelChunk_SetCubeVisibility_2(cells,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UnIndentCubeFace(IntVector, Face, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UnIndentCubeFace
               (RuntimePrototypeCubeModel *this,IntVector localPos,Face__Enum face,Cube *cube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_UnIndentCubeFace);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_UnIndentCubeFace,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Cube::Cube_UnIndentFace(cube,face,(MethodInfo *)0x0);
    uStack2 = 0;
    RuntimePrototypeCubeModel_AddToChunk
              ((RuntimePrototypeCubeModel *)0x3,localPos,cube,
               MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
    if (pDRam0000003f == (DeltaCubes *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DeltaCubes::DeltaCubes_Enqueue
              (pDRam0000003f,localPos,CubeAction__Enum_CornersChangedDone,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  puStack_4 = (undefined *)0x0;
  if (bp != (BytePacker *)0x0) {
    while( true ) {
      iVar5 = (bp->fields)._position;
      iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                         (bp,(MethodInfo *)0x0);
      if (iVar6 <= iVar5) break;
      uVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      uVar8 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar9 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar10 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&puStack_4,(uint)uVar8,(uint)uVar9,(uint)uVar10,(MethodInfo *)0x0);
      puVar11 = puStack_4;
      if (uVar7 == 0) {
        if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_00.z = (int16_t)this;
        iVector_00._0_4_ = puVar11;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,iVector_00,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
      else if (uVar7 - 2 < 3) {
        if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_01.z = (int16_t)this;
        iVector_01._0_4_ = puVar11;
        pRVar12 = this;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,iVector_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        uVar13 = 0x4523;
        uVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        this_01 = (Cube *)func_?();
        if (this_01 == (Cube *)0x0) goto code_?;
        Cube::Cube__ctor_1(this_01,bp,uVar7,(MethodInfo *)0x0);
        iVector.y = 0x1057;
        iVector.x = uVar13;
        iVector.z = (int16_t)pRVar12;
        RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                  (this,iVector,this_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar14 != (GameSessionData *)0x0) {
      if ((pGVar14->fields).gameMode != 1) {
        this_00 = (HashSet_1_System_Object_ *)(this->fields).instances;
        if (this_00 == (HashSet_1_System_Object_ *)0x0) goto code_?;
        pHVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                  HashSet_1_System_Object__GetEnumerator
                            ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,this_00,
                             MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                            );
        id = pHVar15->_current;
        puStack_4 = (undefined *)0x0;
        uStack_1 = 1;
        while( true ) {
          bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                            ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar16 == 0) break;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
          in_stack_17 = (MethodInfo *)0x0;
          pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_02,(int32_t)id,(MethodInfo *)0x0);
          if (pMVar18 == (MVWorldObject *)0x0) goto code_?;
          if ((pMVar18->fields).ownerActorNr != 0) {
            iVar5 = (pMVar18->fields).ownerActorNr;
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_03 == (MVNetworkGame *)0x0) goto code_?;
            pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
            if (pMVar19 == (MVLocalPlayer *)0x0) goto code_?;
            if (iVar5 != (pMVar19->fields)._._ActorNr_k__BackingField) {
              in_stack_17 = (MethodInfo *)&UNK_?;
              func_?(0x46,pMVar18,_UNK_?,_UNK_?,_UNK_?,_UNK_?);
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_17);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdatePrototypeScale(Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
               (RuntimePrototypeCubeModel *this,float scale,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
  }
  (this->fields)._Scale_k__BackingField = scale;
  RuntimePrototypeCubeModel_RebuildPrototypeMesh(this,(MethodInfo *)0x0);
  this_00 = (HashSet_1_System_Object_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_Object_ *)0x0) {
    pHVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
             HashSet_1_System_Object__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    id = (MVWorldObject *)pHVar4->_current;
    uStack_1 = 1;
    while( true ) {
      bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      id = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(int32_t)id,(MethodInfo *)0x0);
      fVar7 = (this->fields)._Scale_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar8 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).x;
      in_stack_6 = (MethodInfo *)((float)uVar8 * fVar7);
      if (id == (MVWorldObject *)0x0) break;
      (*(id->klass->vtable).set_Scale.methodPtr)();
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* RuntimePrototypeCubeModel() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DeltaCubes);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    func_?(&TypeRef__RuntimePrototypeCubeModel);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar1 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields).logger = pIVar1;
    func_?(&this->fields,pIVar1);
    pHVar2 = (HashSet_1_UnityEngine_Vector3_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                            );
    if (pHVar2 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (pHVar2,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                );
      (this->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar2;
      func_?(&(this->fields).dirtyChunks,pHVar2);
      (this->fields).useMeshGeneratePrioritySystem = 1;
      (this->fields).chunkSize = 0x20;
      (this->fields).prototypeState = 1;
      this_01 = (List_1_System_Byte_ *)
                func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
      if (this_01 != (List_1_System_Byte_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
        (this->fields).pendingDeltaCubes = this_01;
        func_?(&(this->fields).pendingDeltaCubes,this_01);
        (this->fields).prototypeId = -1;
        this_02 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
        if (this_02 != (DeltaCubes *)0x0) {
          DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
          (this->fields).deltaCubes = this_02;
          func_?(&(this->fields).deltaCubes,this_02);
          this_03 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                                   );
          if (this_03 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                      );
            (this->fields).chunks = this_03;
            func_?(&(this->fields).chunks,this_03);
            pHVar2 = (HashSet_1_UnityEngine_Vector3_ *)
                     func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
            if (pHVar2 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
              HashSet_1_UnityEngine_Vector3___ctor
                        (pHVar2,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
              method_00 = (MethodInfo *)&(this->fields).instances;
              (this->fields).instances = (HashSet_1_System_Int32_ *)pHVar2;
              func_?(method_00,pHVar2);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)this,ExceptionArgument__Enum_obj,method_00);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[]) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DeltaCubes);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    func_?(&TypeRef__RuntimePrototypeCubeModel);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar1 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields).logger = pIVar1;
    func_?(&this->fields,pIVar1);
    pHVar2 = (HashSet_1_UnityEngine_Vector3_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                            );
    if (pHVar2 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (pHVar2,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                );
      (this->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar2;
      func_?(&(this->fields).dirtyChunks,pHVar2);
      (this->fields).useMeshGeneratePrioritySystem = 1;
      (this->fields).chunkSize = 0x20;
      (this->fields).prototypeState = 1;
      this_01 = (List_1_System_Byte_ *)
                func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
      if (this_01 != (List_1_System_Byte_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
        (this->fields).pendingDeltaCubes = this_01;
        func_?(&(this->fields).pendingDeltaCubes,this_01);
        (this->fields).prototypeId = -1;
        this_02 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
        if (this_02 != (DeltaCubes *)0x0) {
          DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
          (this->fields).deltaCubes = this_02;
          func_?(&(this->fields).deltaCubes,this_02);
          this_03 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                                   );
          if (this_03 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                      );
            (this->fields).chunks = this_03;
            func_?(&(this->fields).chunks,this_03);
            pHVar2 = (HashSet_1_UnityEngine_Vector3_ *)
                     func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
            if (pHVar2 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
              HashSet_1_UnityEngine_Vector3___ctor
                        (pHVar2,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
              method_00 = (MethodInfo *)&(this->fields).instances;
              (this->fields).instances = (HashSet_1_System_Int32_ *)pHVar2;
              func_?(method_00,pHVar2);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)this,ExceptionArgument__Enum_obj,method_00);
              RuntimePrototypeCubeModel_Create(this,(int32_t)data,0,scale,data,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[], Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_2
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,int32_t chunkSize,MethodInfo *method)

{
  id_00 = chunkSize;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DeltaCubes);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    func_?(&TypeRef__RuntimePrototypeCubeModel);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  handle = TypeRef__RuntimePrototypeCubeModel;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 == (LoggerManager *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  (this->fields).logger = pIVar2;
  func_?(&this->fields,pIVar2);
  pHVar3 = (HashSet_1_UnityEngine_Vector3_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                          );
  if (pHVar3 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3___ctor
            (pHVar3,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  (this->fields).dirtyChunks = (HashSet_1_MV_WorldObject_IntVector_ *)pHVar3;
  func_?(&(this->fields).dirtyChunks,pHVar3);
  (this->fields).useMeshGeneratePrioritySystem = 1;
  (this->fields).chunkSize = 0x20;
  (this->fields).prototypeState = 1;
  this_01 = (List_1_System_Byte_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  if (this_01 == (List_1_System_Byte_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  (this->fields).pendingDeltaCubes = this_01;
  func_?(&(this->fields).pendingDeltaCubes,this_01);
  (this->fields).prototypeId = -1;
  this_02 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
  if (this_02 == (DeltaCubes *)0x0) goto code_?;
  DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).deltaCubes = this_02;
  func_?(&(this->fields).deltaCubes,this_02);
  this_03 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                           );
  if (this_03 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
  goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
            );
  (this->fields).chunks = this_03;
  func_?(&(this->fields).chunks,this_03);
  pHVar3 = (HashSet_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (pHVar3 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3___ctor
            (pHVar3,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = (MethodInfo *)&(this->fields).instances;
  (this->fields).instances = (HashSet_1_System_Int32_ *)pHVar3;
  func_?(method_00,pHVar3);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_IsPowerOfTwo
                    (chunkSize,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    chunkSize = (int32_t)StringLiteral_Not_power_of_2;
  }
  else {
    data = (Byte__Array *)&UNK_?;
    iVar5 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
    if (iVar5 < 1) {
      (this->fields).chunkSize = chunkSize;
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    chunkSize = (int32_t)StringLiteral_Can_not_override_chunk_size_if_c;
  }
  data = (Byte__Array *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)chunkSize,(MethodInfo *)0x0);
code_?:
  RuntimePrototypeCubeModel_Create(this,id_00,0,scale,data,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = 0;
  uStack_7._0_2_ = 0;
  uStack_7._2_2_ = 0;
  uStack_7._4_4_ = (Object *)0x0;
  auStack_8._0_4_ = (Object__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = 0;
  pSStack_9 = (String *)0x0;
  iStack_10 = 0;
  this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)(this->fields).chunks;
  iStack_11 = 0;
  if (this_00 !=
      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
       *)0x0) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
             Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
             Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                       (&DStack_13,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_14 = 0;
    auStack_8._0_4_ = pDVar12->_dictionary;
    auStack_8._4_4_ = pDVar12->_version;
    auStack_8._8_4_ = pDVar12->_index;
    pSStack_9 = (pDVar12->_current).key.AssemblyName;
    uStack_7 = *(undefined8 *)&(pDVar12->_current).key.TypeName;
    iStack_10 = pDVar12->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_15 = (Object *)auStack_8;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)auStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar16 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return iVar6;
      }
      if (uStack_7._4_4_ == (Object *)0x0) break;
      iVar6 = (int)&((uStack_7._4_4_[7].klass)->_0).image + iVar6;
      iStack_11 = iVar6;
    }
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
}


/* Int32 get_DeltaCubesCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::
        RuntimePrototypeCubeModel_get_DeltaCubesCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  pDVar1 = (this->fields).deltaCubes;
  if (pDVar1 != (DeltaCubes *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pQVar2 = (pDVar1->fields).cubeChange;
    if (pQVar2 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
    {
      return (pQVar2->fields)._size;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* HashSet`1[System.Int32] get_Instances() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_Instances
          (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).instances;
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_Vector3_ *)pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
              );
    return (HashSet_1_System_Int32_ *)this_00;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar2)();
  return pHVar1;
}


/* Int32 get_InstancesCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pHVar2 = (this->fields).instances;
  if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
    return (pHVar2->fields)._count;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_PrototypeState(PrototypeState) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
               (RuntimePrototypeCubeModel *this,PrototypeState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ILogger);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    func_?(&StringLiteral_prototypeId_is__1_which_means_th);
    func_?(&StringLiteral_pendingDeltaCubes_Count_);
    cRam_? = '\x01';
  }
  if (value == PrototypeState__Enum_Pending) {
    (this->fields).prototypeId = -1;
  }
  else if (value == PrototypeState__Enum_Registered) {
    if ((this->fields).prototypeId == -1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    if (pLVar1 != (List_1_System_Byte_ *)0x0) {
      IStack_4.m_value = (pLVar1->fields)._size;
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
      pIVar5 = (ILogger__Class *)
               mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_pendingDeltaCubes_Count_,str1,(MethodInfo *)0x0);
      if (pIVar2 != (ILogger *)0x0) {
        uVar6 = 0;
        pIStack_7 = pIStack_3->klass;
        uVar8 = (pIStack_7->_1).interface_offsets_count;
        if (uVar8 != 0) {
          do {
            if (pIStack_7->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILogger
               ) {
              pVVar9 = &(&pIStack_7->vtable)[pIStack_7->interfaceOffsets[uVar6].offset].Log;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        pIVar5 = TypeInfo__ILogger;
        pVVar9 = (VirtualInvokeData *)func_?(pIStack_3,TypeInfo__ILogger,0);
code_?:
        (*pVVar9->methodPtr)(pIStack_3,pIVar5,pVVar9->method);
        pLVar1 = (this->fields).pendingDeltaCubes;
        if (pLVar1 != (List_1_System_Byte_ *)0x0) {
          if ((pLVar1->fields)._size < 1) goto code_?;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          worldInventoryID = (this->fields).prototypeId;
          this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    (this->fields).pendingDeltaCubes;
          if ((this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) &&
             (prototypeData =
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                             ), this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                      (this_01,worldInventoryID,(Byte__Array *)prototypeData,(MethodInfo *)0x0);
            pLVar1 = (this->fields).pendingDeltaCubes;
            if (pLVar1 != (List_1_System_Byte_ *)0x0) {
              piVar10 = &(pLVar1->fields)._version;
              *piVar10 = *piVar10 + 1;
              (pLVar1->fields)._size = 0;
              (this->fields).prototypeState = 0;
              return;
            }
          }
        }
      }
    }
    func_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
code_?:
  (this->fields).prototypeState = value;
  return;
}

