
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
    func_?(0xf250);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
    HashSet_1_System_UInt32__GetEnumerator
              ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 1;
    while( true ) {
      bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_5);
        *unaff_FS_OFFSET = puStack_3;
        return;
      }
      unaff_EDI = (MVCubeModelBase *)&UNK_?;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClientManager *)0x0) break;
      in_stack_5 = (MethodInfo *)0x0;
      unaff_EDI = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_02,0xADDR,(MethodInfo *)0x0);
      if ((unaff_EDI != (MVCubeModelBase *)0x0) &&
         ((pMVar6 = TypeInfo__MVCubeModelBase,
          (unaff_EDI->klass->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment
          || ((MVCubeModelBase__Class *)
              (unaff_EDI->klass->_1).typeHierarchy
              [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] != TypeInfo__MVCubeModelBase))))
      goto code_?;
      if (cRam_? == '\0') {
        ppMStack_2 = &
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (this->fields).chunks;
      if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) break;
      this_03 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,chunkPos,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          );
      if (this_03 == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_SetInstanceDataRef
                (this_03,chunkPos,unaff_EDI,(MethodInfo *)0x0);
    }
  }
  func_?();
  pMVar6 = extraout_EDX;
code_?:
  func_?((short)unaff_EDI,pMVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    uVar1 = 0x119a;
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
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (DStack_6._current.value == (Object *)0x0) break;
      DStack_6._current.value[8].klass =
           (Object__Class *)((int)&((DStack_6._current.value[8].klass)->_0).image + 1);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    uVar1 = 0x119c;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x354c);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).chunkSize;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  IVar3.z = iVector.x;
  IVar3._0_4_ = &stack0xfffffff4;
  IVar3 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (IVar3,CONCAT22(uVar1,iVector.z),method_00);
  pIVar4 = IVar3._0_4_;
  iVar5 = pIVar4->z;
  IVar6 = *pIVar4;
  IVar7 = *pIVar4;
  IVar8 = *pIVar4;
  IVar3 = *pIVar4;
  if ((this->fields).chunks != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this->fields).chunks
                       ,*pIVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar9 == 0) {
      pCVar10 = (CubeModelChunk *)func_?();
      iVar11 = (int16_t)pCVar10;
      uVar1 = (undefined2)((uint)pCVar10 >> 0x10);
      CubeModelChunk::CubeModelChunk__ctor(pCVar10,IVar3,(MethodInfo *)0x0);
      pDVar12 = (this->fields).chunks;
      if (pDVar12 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar12,IVar8,
                 (Object *)CONCAT22(uVar1,iVar11),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                );
      iVector.z = 0;
      in_stack_13 = 0;
      RuntimePrototypeCubeModel_AddChunk(this,IVar7,(MethodInfo *)0x0);
      iVector.x = iVar5;
    }
    pDVar12 = (this->fields).chunks;
    if (pDVar12 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      pCVar10 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar12,IVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          );
      if (pCVar10 != (CubeModelChunk *)0x0) {
        if (cRam_? == '\0') {
          iVector.x = 0x2fe8;
          iVector.y = 0x119c;
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pDVar14 = (pCVar10->fields).cells;
        if (pDVar14 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
          IVar8.y = iVector.y;
          IVar8.x = iVector.x;
          IVar8.z = iVector.z;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                            (pDVar14,IVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                            );
          if (bVar9 == 0) {
            piVar15 = &(pCVar10->fields).cubeCount;
            *piVar15 = *piVar15 + 1;
          }
          pDVar14 = (pCVar10->fields).cells;
          iVar5 = (int16_t)pDVar14;
          uVar16 = (undefined2)((uint)pDVar14 >> 0x10);
          uVar17 = 0;
          uVar1 = 0;
          pCVar18 = (CubeModelChunk__Class *)cube;
          func_?();
          if (cube != (Cube *)0x0) {
            if (CONCAT22(uVar16,iVar5) != 0) {
              value._5_1_ = uVar17;
              value.lightValue = ((cube->fields)._.unIndentedSides & 0x3f) != 0x3f;
              iVar11 = (int16_t)pCVar18;
              iVar19 = (int16_t)((uint)pCVar18 >> 0x10);
              IVar7.z._0_1_ = (char)iVector.z;
              IVar7._0_4_ = cube;
              IVar7.z._1_1_ = (char)((ushort)iVector.z >> 8);
              value.cube = (Cube *)pCVar18;
              value._6_2_ = uVar1;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__set_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)CONCAT22(uVar16,iVar5),
                         IVar7,value,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                        );
              pCVar20 = (CubeModelChunk *)&stack0xffffffe8;
              if (setVisibility != 0) {
                IVar6.z = iVector.z;
                IVar6._0_4_ = cube;
                CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
                          (pCVar10,IVar6,(MethodInfo *)0x0);
                pCVar20 = pCVar10;
              }
              chunkPos.y = iVar19;
              chunkPos.x = iVar11;
              setVisibility = (bool)((uint)pCVar20 >> 0x10);
              uStack21 = (undefined1)((uint)pCVar20 >> 0x18);
              in_stack_13 = 0x1059;
              chunkPos.z._0_1_ = setVisibility;
              chunkPos.z._1_1_ = uStack21;
              RuntimePrototypeCubeModel_AddToDirtyChunks
                        (this,chunkPos,meshGeneratePriority,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    HashSet_1_MV_WorldObject_IntVector__System_Collections_Generic_ICollection_T__Add
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
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key.x = 0;
  DStack_6._current.key.y = 0;
  DStack_6._current.key.z = 0;
  DStack_6._current._6_2_ = 0;
  DStack_6._current.value = (Object *)0x0;
  pRVar7 = (RuntimePrototypeCubeModel *)func_?(TypeInfo__RuntimePrototypeCubeModel);
  pRStack_8 = pRVar7;
  RuntimePrototypeCubeModel__ctor(pRVar7,(MethodInfo *)0x0);
  if (pRVar7 != (RuntimePrototypeCubeModel *)0x0) {
    (pRVar7->fields)._Scale_k__BackingField = (this->fields)._Scale_k__BackingField;
    (pRVar7->fields)._AuthorProfileID_k__BackingField =
         (this->fields)._AuthorProfileID_k__BackingField;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).chunks;
    pRStack_9 = pRVar7;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffff94,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_6._dictionary =
           (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar10->_dictionary;
      DStack_6._version = pDVar10->_version;
      DStack_6._index = pDVar10->_index;
      DStack_6._current.key._0_4_ = (pDVar10->_current).key.sheetInstanceID;
      DStack_6._current._4_8_ = *(undefined8 *)&(pDVar10->_current).key.index;
      DStack_6._getEnumeratorRetType = pDVar10->_getEnumeratorRetType;
      uStack_1 = 1;
      pDStack_12 = &DStack_6;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar13 == 0) break;
        pDStack_14 = (pRVar7->fields).chunks;
        iStack_15._0_2_ = DStack_6._current.key.x;
        iStack_15._2_2_ = DStack_6._current.key.y;
        iStack_16 = DStack_6._current.key.z;
        if ((CubeModelChunk *)DStack_6._current.value == (CubeModelChunk *)0x0)
        goto code_?;
        value = CubeModelChunk::CubeModelChunk_CloneGeometry
                          ((CubeModelChunk *)DStack_6._current.value,
                           (this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
        if (pDStack_14 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        key.z = iStack_16;
        key.x = (undefined2)iStack_15;
        key.y = iStack_15._2_2_;
        in_stack_17 = iStack_16;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDStack_14,key,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 ,(MethodInfo *)CONCAT22(in_stack_18,in_stack_17));
      uStack_1 = 0xffffffff;
      if (withDeltaCubes != 0) {
        pDVar19 = (this->fields).deltaCubes;
        if (pDVar19 == (DeltaCubes *)0x0) goto code_?;
        cubeChangeOriginal = (pDVar19->fields).cubeChange;
        pDVar19 = (DeltaCubes *)func_?();
        DeltaCubes::DeltaCubes__ctor_1
                  (pDVar19,(IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
                           *)cubeChangeOriginal,(MethodInfo *)0x0);
        pRVar7 = pRStack_8;
        (pRStack_8->fields).deltaCubes = pDVar19;
        func_?();
      }
      RuntimePrototypeCubeModel_SetVisibility(pRVar7,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return pRVar7;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pRVar7 = (RuntimePrototypeCubeModel *)(*pcVar20)();
  return pRVar7;
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
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields).chunks;
      if (this_00 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffff9c,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      pMVar7 = (MethodInfo *)(pDVar6->_current).key.sheetInstanceID;
      uVar8 = *(undefined8 *)&(pDVar6->_current).key.index;
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     ,in_stack_11);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        this_01 = (rpcm->fields).chunks;
        if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        key.z = iVar9;
        key._0_4_ = pMVar7;
        method_00 = pMVar7;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key,
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  DStack_7._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key.x = 0;
  DStack_7._current.key.y = 0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._current.key.z = 0;
  DStack_7._current._6_2_ = 0;
  DStack_7._current.value = (Object *)0x0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  pCStack_8 = (CubeModelChunk *)0x0;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_10,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_7._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key._0_4_ = (pDVar9->_current).key.sheetInstanceID;
    uVar12 = *(undefined8 *)&(pDVar9->_current).key.index;
    DStack_7._current.key.z = (int16_t)uVar12;
    DStack_7._current._6_2_ = SUB82((ulonglong)uVar12 >> 0x10,0);
    DStack_7._current.value = (Object *)((ulonglong)uVar12 >> 0x20);
    DStack_7._getEnumeratorRetType = pDVar9->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_13 = &DStack_7;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      this_02 = DStack_7._current.value;
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_15 = CONCAT26(DStack_7._current._6_2_,
                           CONCAT24(DStack_7._current.key.z,DStack_7._current.key._0_4_));
      pCStack_8 = (CubeModelChunk *)0x0;
      if ((rpcm == (RuntimePrototypeCubeModel *)0x0) ||
         (this_01 = (rpcm->fields).chunks,
         this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)) break;
      key.z = DStack_7._current.key.z;
      key.x = DStack_7._current.key.x;
      key.y = DStack_7._current.key.y;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryGetValue
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key,
                 (Object **)&pCStack_8,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                );
      if ((CubeModelChunk *)this_02 == (CubeModelChunk *)0x0) break;
      in_stack_6 = (MethodInfo **)pCStack_8;
      CubeModelChunk::CubeModelChunk_CompareGeometry_1
                ((CubeModelChunk *)this_02,pCStack_8,matchingCubeCount,investigatedCubeCount,
                 visibleCubesOnly,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                       (bp,(MethodInfo *)0x0);
  if (0 < iStack_2) {
    do {
      uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffe8,(uint)uVar3,(uint)uVar4,(uint)uVar5,(MethodInfo *)0x0
                );
      puVar6 = &UNK_?;
      byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                            (bp,(MethodInfo *)0x0);
      puVar7 = &UNK_?;
      cube = (Cube *)func_?();
      if (cRam_? == '\0') {
        func_?(0x5164);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?((short)TypeInfo__MV__WorldObject__CubeBase);
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_1
                ((CubeBase *)cube,bp,byteFlags,(MethodInfo *)0x0);
      iVector.z = (int16_t)puVar7;
      iVector._0_4_ = puVar6;
      RuntimePrototypeCubeModel_AddToChunk
                (this,iVector,cube,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      iVar8 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubesInRow
                        (byteFlags,(MethodInfo *)0x0);
      iVar9 = 1;
      if (1 < iVar8) {
        do {
          iVar10 = (int16_t)puVar7;
          uVar11 = CONCAT22((short)((uint)puVar6 >> 0x10),(short)iVar9 + (short)puVar6);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          cube_00 = Cube::Cube_Clone_1(cube,(MethodInfo *)0x0);
          iVector_00.z = iVar10;
          iVector_00.x = (short)uVar11;
          iVector_00.y = (short)((uint)uVar11 >> 0x10);
          RuntimePrototypeCubeModel_AddToChunk
                    (this,iVector_00,cube_00,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      iStack_2 = iStack_2 + -1;
    } while (iStack_2 != 0);
  }
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
  puStack_4 = &stack0xffffff34;
  puVar5 = &stack0xffffff34;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
    ;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(0xf940);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_7 = 0;
  DStack_8._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key.x = 0;
  DStack_8._current.key.y = 0;
  DStack_8._current.key.z = 0;
  DStack_8._current._6_2_ = 0;
  DStack_9._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_9._version = 0;
  DStack_9._index = 0;
  DStack_9._current.key.x = 0;
  DStack_9._current.key.y = 0;
  DStack_9._getEnumeratorRetType = 0;
  DStack_9._current.key.z = 0;
  DStack_9._current._6_2_ = 0;
  DStack_9._current.value = (Object *)0x0;
  pDVar10 = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>
                           );
  pDStack_11 = pDVar10;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pDVar10,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pDStack_12 = pDVar10;
  if ((cm != (MVCubeModelBase *)0x0) && ((cm->fields).chunkInstances != (ChunkInstances *)0x0)) {
    OStack_13.klass = (Object__Class *)func_?(0);
    piStack_14 = &iStack_7;
    pOStack_15 = &OStack_13;
    iStack_16 = 0;
    uStack_1 = 1;
    while (OStack_13.klass != (Object__Class *)0x0) {
      cVar17 = func_?(0);
      if (cVar17 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_7 = func_?();
        if (iStack_7 != 0) {
          func_?(0);
        }
        uStack_1 = 0xffffffff;
        if (pDVar10 !=
            (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *)0x0) {
          uVar18 = SUB42(pDVar10,0);
          uVar19 = (undefined2)((uint)pDVar10 >> 0x10);
          pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
                    List_1_MV_WorldObject_IntVector__GetEnumerator
                              ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_21 + 8),
                               (List_1_MV_WorldObject_IntVector_ *)pDVar10,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                              );
          uStack_22 = 0;
          DStack_8._dictionary =
               (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pLVar20->_list;
          DStack_8._version = pLVar20->_index;
          DStack_8._index = pLVar20->_version;
          DStack_8._current.key.x = (pLVar20->_current).x;
          DStack_8._current.key.y = (pLVar20->_current).y;
          DStack_8._current._4_4_ = *(undefined4 *)&(pLVar20->_current).z;
          uStack_1 = 4;
          pDStack_12 = &DStack_8;
          goto code_?;
        }
        break;
      }
      pOStack_23 = OStack_13.klass;
      if (OStack_13.klass == (Object__Class *)0x0) break;
      pIStack_24 = ((OStack_13.klass)->_0).image;
      uVar25 = 0;
      OStack_13.monitor = (MonitorData *)0x0;
      uVar26 = *(ushort *)((int)&pIStack_24[4].nameNoExt + 2);
      DStack_8._getEnumeratorRetType = (int32_t)uVar26;
      if (uVar26 != 0) {
        do {
          pDVar10 = pDStack_11;
          if (*(IEnumerator__Class **)(pIStack_24[2].name + (uint)uVar25 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            pIVar27 = ((OStack_13.klass)->_0).image;
            pp_Var13 = &pIVar27[4].metadataHandle +
                       *(int *)(pIVar27[2].name + (uint)uVar25 * 8 + 4) * 2;
            goto code_?;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar26);
      }
      pp_Var13 = (Il2CppMetadataImageHandle *)func_?(OStack_13.klass);
code_?:
      piVar28 = (int *)(*(code *)*pp_Var13)();
      if (piVar28 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar28 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      puVar29 = (undefined4 *)func_?();
      iVar30 = (int16_t)puVar29[1];
      uVar18 = (undefined2)*puVar29;
      uStack_31 = (undefined2)((uint)*puVar29 >> 0x10);
      obj = (Object_1 *)puVar29[6];
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
      pMVar32 = 
      MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
      ;
      if (pDVar10 ==
          (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *)0x0) break;
      piVar33 = &(pDVar10->_current).key.z;
      *(int *)piVar33 = *(int *)piVar33 + 1;
      iVar34 = pDVar10->_index;
      uVar35 = *(uint *)&(pDVar10->_current).key;
      if (iVar34 == 0) break;
      if (uVar35 < *(uint *)(iVar34 + 0xc)) {
        *(uint *)&(pDVar10->_current).key = uVar35 + 1;
        if (*(uint *)(iVar34 + 0xc) <= uVar35) {
          func_?();
          break;
        }
        iVar34 = iVar34 + uVar35 * 6;
        *(uint *)(iVar34 + 0x10) = CONCAT22(uStack_31,uVar18);
        *(int16_t *)(iVar34 + 0x14) = iVar30;
      }
      else {
        item.y = uStack_31;
        item.x = uVar18;
        item.z = iVar30;
        mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
        List_1_MV_WorldObject_IntVector__AddWithResize
                  ((List_1_MV_WorldObject_IntVector_ *)pDVar10,item,
                   pMVar32->klass->rgctx_data[0xe].method);
      }
    }
  }
  goto code_?;
code_?:
  bVar36 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject::
           IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                     ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&DStack_8,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                     );
  if (bVar36 == 0) goto code_?;
  this_00 = (cm->fields).chunkInstances;
  if (this_00 == (ChunkInstances *)0x0) goto code_?;
  intVector.z = DStack_8._current.key.z;
  intVector.x = DStack_8._current.key.x;
  intVector.y = DStack_8._current.key.y;
  ChunkInstances::ChunkInstances_Remove(this_00,intVector,(MethodInfo *)0x0);
  goto code_?;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)&DStack_8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
             ,(MethodInfo *)in_stack_6);
  uStack_1 = 0xffffffff;
  this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  if (this_01 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar37 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)auStack_21,this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                        );
    uStack_22 = 0;
    DStack_9._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar37->_dictionary;
    DStack_9._version = pDVar37->_version;
    DStack_9._index = pDVar37->_index;
    DStack_9._current.key._0_4_ = (pDVar37->_current).key.sheetInstanceID;
    DStack_9._current._4_8_ = *(undefined8 *)&(pDVar37->_current).key.index;
    DStack_9._getEnumeratorRetType = pDVar37->_getEnumeratorRetType;
    uStack_1 = 7;
    pDStack_12 = &DStack_9;
    while (bVar36 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::Object]
                    ::
                    Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                              (&DStack_9,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                              ), uVar38 = DStack_9._current.key._0_4_, bVar36 != 0) {
      OStack_13.monitor = (MonitorData *)CONCAT22(DStack_9._current.key.z,OStack_13.monitor._0_2_);
      iVar30 = DStack_9._current.key.z;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
        cRam_? = '\x01';
        iVar30 = OStack_13.monitor._2_2_;
      }
      uVar39 = DStack_9._current.key._0_4_;
      this_02 = (this->fields).chunks;
      if ((this_02 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) ||
         (key.z = iVar30, DStack_9._current.key.x = (int16_t)uVar38,
         DStack_9._current.key.y = SUB42(uVar38,2), key.x = DStack_9._current.key.x,
         key.y = DStack_9._current.key.y, DStack_9._current.key._0_4_ = uVar39,
         this_04 = (CubeModelChunk *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,System::Object]::
                   Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_02,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                             ), uVar39 = DStack_9._current.key._0_4_,
         this_04 == (CubeModelChunk *)0x0)) goto code_?;
      uVar18 = 0x4cc5;
      uVar19 = 0x1059;
      chunkPos.z = OStack_13.monitor._2_2_;
      DStack_9._current.key.x = (int16_t)uVar38;
      DStack_9._current.key.y = SUB42(uVar38,2);
      chunkPos.x = DStack_9._current.key.x;
      chunkPos.y = DStack_9._current.key.y;
      DStack_9._current.key._0_4_ = uVar39;
      CubeModelChunk::CubeModelChunk_SetInstanceDataRef(this_04,chunkPos,cm,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
               ,(MethodInfo *)CONCAT22(uVar19,uVar18));
    uStack_1 = 0xffffffff;
    this_03 = (this->fields).instances;
    if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_03,(cm->fields)._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
code_?:
  uVar38 = func_?();
  func_?(uVar38);
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
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
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
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
          uStack_7 = (uint)uVar6;
          uVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                            (bp,(MethodInfo *)0x0);
          uStack_8 = (uint)uVar6;
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_1,(uint)uVar5,uStack_7,uStack_8,(MethodInfo *)0x0);
          if (uVar4 != 0) break;
          if (rpcm == (RuntimePrototypeCubeModel *)0x0) goto code_?;
          iVector_00.z = IStack_1.z;
          iVector_00.x = IStack_1.x;
          iVector_00.y = IStack_1.y;
          RuntimePrototypeCubeModel_RemoveFromChunk
                    (rpcm,iVector_00,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        }
      } while (2 < uVar4 - 2);
      if (rpcm == (RuntimePrototypeCubeModel *)0x0) break;
      iVector_01.z = IStack_1.z;
      iVector_01.x = IStack_1.x;
      iVector_01.y = IStack_1.y;
      RuntimePrototypeCubeModel_RemoveFromChunk
                (rpcm,iVector_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      iVar9 = IStack_1.z;
      uVar10 = IStack_1._0_4_;
      uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      _uStack_10 = CONCAT31(uStack_11,uVar4);
      this = (Cube *)func_?(TypeInfo__Cube);
      Cube::Cube__ctor_1(this,bp,(uint8_t)_uStack_10,(MethodInfo *)0x0);
      uVar12 = IStack_1._0_4_;
      iVector.z = iVar9;
      IStack_1.x = (int16_t)uVar10;
      IStack_1.y = SUB42(uVar10,2);
      iVector.x = IStack_1.x;
      iVector.y = IStack_1.y;
      IStack_1._0_4_ = uVar12;
      RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                (rpcm,iVector,this,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((CubeModelChunk *)DStack_6._current.value == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_Destroy
                ((CubeModelChunk *)DStack_6._current.value,(MethodInfo *)0x0);
    }
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Not_power_of_2);
    func_?(&StringLiteral_Can_not_override_chunk_size_if_c);
    func_?(&StringLiteral_ChunkSize_overwritten);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Can_not_override_chunk_size_if_c,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(pBVar4,(MethodInfo *)0x0);
  if (cubesDict != (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) {
    if (addCount != 0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)cubesDict,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__get_Count__
                        );
      if (pBVar4 == (BytePacker *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_6
                (pBVar4,iVar5,(MethodInfo *)0x0);
    }
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffff94,
                        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)cubesDict,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pDVar6->_index;
    iVar5 = (pDVar6->_current).key.sheetInstanceID;
    uVar7 = *(undefined8 *)&(pDVar6->_current).key.index;
    uStack_1 = 1;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)&stack0xffffffb0,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return pBVar4;
      }
      iStack_9 = (int16_t)uVar7;
      pOStack_10 = (Object *)((ulonglong)uVar7 >> 0x20);
      if (pOStack_10 == (Object *)0x0) break;
      byteCorners = (Byte__Array *)pOStack_10[1].monitor;
      materials = pOStack_10[2].klass;
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
                (pBVar4,(int16_t)iVar5,(int16_t)((uint)iVar5 >> 0x10),iStack_9,byteCorners,
                 (Byte__Array *)materials,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pBVar4 = (BytePacker *)(*pcVar11)();
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
    uVar1 = 0x1059;
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
    uVar1 = 0x1059;
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
      cubePos.z._0_1_ = 0x9c;
      stack0x0000000d = 0x119c30;
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
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key.x = 0;
  DStack_6._current.key.y = 0;
  DStack_6._current.key.z = 0;
  DStack_6._current._6_2_ = 0;
  DStack_6._current.value = (Object *)0x0;
  pGVar7 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  pGStack_8 = pGVar7;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar7,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  pGStack_9 = pGVar7;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffff90,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_6._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar10->_dictionary;
    DStack_6._version = pDVar10->_version;
    DStack_6._index = pDVar10->_index;
    DStack_6._current.key._0_4_ = (pDVar10->_current).key.sheetInstanceID;
    uVar12 = *(undefined8 *)&(pDVar10->_current).key.index;
    DStack_6._current._4_4_ = SUB84(uVar12,0);
    DStack_6._current.value = (Object *)((ulonglong)uVar12 >> 0x20);
    DStack_6._getEnumeratorRetType = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_13 = &DStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      pOVar15 = DStack_6._current.value;
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,in_stack_16);
        *unaff_FS_OFFSET = uStack_3;
        return pGStack_8;
      }
      uStack_17 = CONCAT44(DStack_6._current._4_4_,DStack_6._current.key._0_4_);
      pGVar7 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                (pGVar7,(MethodInfo *)0x0);
      if (pGVar7 == (GameObject *)0x0) break;
      pRStack_18 = (Renderer *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (pGVar7,
                              UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                             );
      this_01 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar7,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                          );
      if ((pOVar15 == (Object *)0x0) || (this_01 == (MeshFilter *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (this_01,(Mesh *)pOVar15[2].monitor,(MethodInfo *)0x0);
      if (pRStack_18 == (Renderer *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRStack_18,(Material *)pOVar15[3].klass,(MethodInfo *)0x0);
      pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar7,(MethodInfo *)0x0);
      if (pGStack_8 == (GameObject *)0x0) break;
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGStack_8,(MethodInfo *)0x0);
      if (pTVar19 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar19,value,(MethodInfo *)0x0);
      pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar7,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      if (pTVar19 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar19,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0)
      ;
      pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar7,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar19 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar19,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
    }
  }
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  pGVar7 = (GameObject *)(*pcVar21)();
  return pGVar7;
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                       );
    index = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
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
          if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)pOVar3[8].monitor !=
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)pOVar3[8].monitor,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                              );
            if (iVar4 < 1) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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


/* String Guids() */

String * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Guids
                   (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
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
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_NA);
    func_?(&::StringLiteral_____);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  aIStack_7[0].x = 0;
  aIStack_7[0].y = 0;
  aIStack_7[0].z = 0;
  DStack_8._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key.x = 0;
  DStack_8._current.key.y = 0;
  DStack_8._getEnumeratorRetType = 0;
  DStack_8._current.key.z = 0;
  DStack_8._current._6_2_ = 0;
  DStack_8._current.value = (Object *)0x0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  pSStack_9 = ::StringLiteral__;
  pSStack_10 = ::StringLiteral__;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffff84,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_12 = 0;
    DStack_8._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar11->_dictionary;
    DStack_8._version = pDVar11->_version;
    DStack_8._index = pDVar11->_index;
    DStack_8._current.key._0_4_ = (pDVar11->_current).key.sheetInstanceID;
    uVar13 = *(undefined8 *)&(pDVar11->_current).key.index;
    DStack_8._current._4_4_ = SUB84(uVar13,0);
    DStack_8._current.value = (Object *)((ulonglong)uVar13 >> 0x20);
    DStack_8._getEnumeratorRetType = pDVar11->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_14 = &DStack_8;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      pOVar16 = DStack_8._current.value;
      if (bVar15 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,in_stack_17);
        *unaff_FS_OFFSET = uStack_3;
        return pSVar6;
      }
      uStack_18 = CONCAT44(DStack_8._current._4_4_,DStack_8._current.key._0_4_);
      pSStack_19 = StringLiteral_NA;
      values = (String__Array *)func_?();
      if (values == (String__Array *)0x0) goto code_?;
      if (values->max_length == 0) break;
      values->vector[0] = pSStack_9;
      func_?(values->vector,pSStack_9);
      uVar13 = uStack_18;
      aIStack_7[0].x = (int16_t)uStack_18;
      aIStack_7[0].y = uStack_18._2_2_;
      uStack_18._4_2_ = SUB82(uVar13,4);
      aIStack_7[0].z = uStack_18._4_2_;
      uStack_18 = uVar13;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      pSVar6 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                         (aIStack_7,(MethodInfo *)0x0);
      if (values->max_length < 2) goto code_?;
      values->vector[1] = pSVar6;
      func_?();
      if (values->max_length < 3) goto code_?;
      values->vector[2] = ::StringLiteral____;
      func_?();
      if (values->max_length < 4) goto code_?;
      values->vector[3] = pSStack_19;
      func_?();
      if (values->max_length < 5) goto code_?;
      values->vector[4] = ::StringLiteral_____;
      func_?();
      if (pOVar16 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                       );
        func_?(&
                        System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
                       );
        func_?(&TypeInfo__System__Func<System::String,_System::Guid,_System::String>);
        func_?(&
                        MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_
                       );
        func_?(&TypeInfo__CubeModelChunk____c);
        func_?(&::StringLiteral__);
        cRam_? = '\x01';
      }
      this_01 = pOVar16[2].klass;
      if (this_01 == (Object__Class *)0x0) goto code_?;
      pDStack_20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                             ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                             );
      if ((TypeInfo__CubeModelChunk____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_02 = TypeInfo__CubeModelChunk____c->static_fields->__9__27_0;
      pSVar6 = ::StringLiteral__;
      if (this_02 == (Func_3_String_Guid_String_ *)0x0) {
        pSStack_9 = ::StringLiteral__;
        if ((TypeInfo__CubeModelChunk____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSStack_19 = (String *)TypeInfo__CubeModelChunk____c->static_fields->__9;
        this_02 = (Func_3_String_Guid_String_ *)func_?();
        mscorlib.dll::System::Func`3[Object,Guid,Object]::Func_3_Object_Guid_Object___ctor
                  ((Func_3_Object_Guid_Object_ *)this_02,(Object *)pSStack_19,
                   MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_,
                   (MethodInfo *)0x0);
        TypeInfo__CubeModelChunk____c->static_fields->__9__27_0 = this_02;
        func_?();
        pSVar6 = pSStack_9;
      }
      in_stack_17 =
           (MethodInfo *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_Aggregate_1
                     ((IEnumerable_1_System_Guid_ *)pDStack_20,(Object *)pSVar6,
                      (Func_3_Object_Guid_Object_ *)this_02,
                      System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
                     );
      if (values->max_length < 6) goto code_?;
      values->vector[5] = (String *)in_stack_17;
      func_?();
      pSVar6 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      pSStack_10 = pSVar6;
      pSStack_9 = pSVar6;
    }
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
code_?:
  uVar21 = func_?();
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar22)();
  return pSVar6;
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
        this_00 = (this->fields).pendingDeltaCubes;
        if (this_00 == (List_1_System_Byte_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
        List_1_System_Byte__AddRange
                  (this_00,(IEnumerable_1_System_Byte_ *)prototypeData,
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
  method_00 = (MethodInfo *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                             );
  System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
  HashSet_1_MV_WorldObject_IntVector___ctor
            ((HashSet_1_MV_WorldObject_IntVector_ *)method_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  pHVar4 = (this->fields).dirtyChunks;
  if (pHVar4 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa8,pHVar4,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    pMVar6 = *(MethodInfo **)&pHVar5->_current;
    uVar7 = *(undefined4 *)&(pHVar5->_current).z;
    uStack_1 = 1;
    do {
      bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::WorldObject
              ::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                        ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   ,in_stack_9);
        uStack_1 = 0xffffffff;
        if (method_00 != (MethodInfo *)0x0) goto code_?;
        goto code_?;
      }
      iVar10 = (int16_t)uVar7;
      chunkPos.z = iVar10;
      chunkPos._0_4_ = pMVar6;
      RuntimePrototypeCubeModel_RebuildChunk
                (this,chunkPos,(this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) goto code_?;
      in_stack_9 = (MethodInfo *)&UNK_?;
      item_00.z = iVar10;
      item_00._0_4_ = pMVar6;
      pMVar6 = 
      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
      ;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_MV_WorldObject_IntVector_ *)method_00,item_00,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                );
      iVar11 = *meshUpdates;
      *meshUpdates = iVar11 + -1;
    } while (0 < iVar11 + -1);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
               ,in_stack_12);
code_?:
    uStack_1 = 0xffffffff;
    pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa8,
                        (HashSet_1_MV_WorldObject_IntVector_ *)method_00,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    uVar13._0_2_ = (pHVar5->_current).x;
    uVar13._2_2_ = (pHVar5->_current).y;
    uVar7 = *(undefined4 *)&(pHVar5->_current).z;
    uStack_1 = 4;
    while( true ) {
      bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::WorldObject
              ::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                        ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                        );
      if (bVar8 == 0) break;
      pHVar4 = (this->fields).dirtyChunks;
      if (pHVar4 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
      iStack_14 = (int16_t)uVar7;
      item.z = iStack_14;
      item.x = (int16_t)uVar13;
      item.y = SUB42(uVar13,2);
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__Remove
                (pHVar4,item,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                );
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pAVar15 = (this->fields).DirtyChunksRegenerated;
    if (pAVar15 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      (*(pAVar15->fields)._._.invoke_impl)();
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
code_?:
  func_?();
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  bVar8 = (*pcVar16)();
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
  this_00 = (HashSet_1_MV_WorldObject_IntVector_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
  HashSet_1_MV_WorldObject_IntVector___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  pHVar4 = (this->fields).dirtyChunks;
  if (pHVar4 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa8,pHVar4,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    pIVar6 = &pHVar5->_current;
    pMVar7 = *(MethodInfo **)pIVar6;
    chunkPos = *pIVar6;
    item = *pIVar6;
    uStack_1 = 1;
    while( true ) {
      bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::WorldObject
              ::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                        ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__System_Collections_Generic_ICollection_T__Add
                (this_00,item,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                );
      in_stack_9 = pMVar7;
      RuntimePrototypeCubeModel_RebuildChunk
                (this,chunkPos,(this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
      *meshUpdates = *meshUpdates + -1;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
               ,in_stack_9);
    uStack_1 = 0xffffffff;
    pHVar4 = (this->fields).dirtyChunks;
    if (pHVar4 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pHVar4,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Clear__
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pAVar10 = (this->fields).DirtyChunksRegenerated;
      if (pAVar10 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        (*(pAVar10->fields)._._.invoke_impl)();
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
  pcVar11 = (code *)swi(3);
  bVar8 = (*pcVar11)();
  return bVar8;
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


/* Void RebuildChunk(IntVector, Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunk
               (RuntimePrototypeCubeModel *this,IntVector chunkPos,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(0x345c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&StringLiteral_Chunk_not_contained_);
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
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Chunk_not_contained_,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).chunks;
    if ((pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (this_00 = (CubeModelChunk *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,chunkPos
                             ,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            ), this_00 != (CubeModelChunk *)0x0)) {
      uStack3 = 0;
      CubeModelChunk::CubeModelChunk_RebuildChunk(this_00,scale,(MethodInfo *)0x0);
      if ((this->fields).OnChunkRebuilt == (Action_1_MV_WorldObject_IntVector_ *)0x0) {
        return;
      }
      pAVar4 = (this->fields).OnChunkRebuilt;
      pvStack5 = (pAVar4->fields)._._.method;
      uStack3 = (undefined2)((uint)(pAVar4->fields)._._.method_code >> 0x10);
      (*(pAVar4->fields)._._.invoke_impl)();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RebuildChunks() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunks
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
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((CubeModelChunk *)DStack_6._current.value == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_RebuildChunk
                ((CubeModelChunk *)DStack_6._current.value,(this->fields)._Scale_k__BackingField,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((CubeModelChunk *)DStack_6._current.value == (CubeModelChunk *)0x0) break;
      CubeModelChunk::CubeModelChunk_RebuildChunk
                ((CubeModelChunk *)DStack_6._current.value,(this->fields)._Scale_k__BackingField,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(0x354c);
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
    func_?(0x59b4);
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                       );
    this_02 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(0xf250);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_6._set = (HashSet_1_System_UInt32_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = 0;
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       (&HStack_8,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    HStack_6._set = pHVar7->_set;
    HStack_6._index = pHVar7->_index;
    HStack_6._version = pHVar7->_version;
    HStack_6._current = pHVar7->_current;
    HStack_8._version = 0;
    uStack_1 = 1;
    HStack_8._current = (uint32_t)&HStack_6;
    while( true ) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        (&HStack_6,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      unaff_EDI = (MVWorldObject *)HStack_6._current;
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&HStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_10);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      unaff_EDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,(int32_t)unaff_EDI,(MethodInfo *)0x0);
      if (unaff_EDI == (MVWorldObject *)0x0) break;
      pMVar11 = TypeInfo__MVCubeModelBase;
      if (((unaff_EDI->klass->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment)
         || ((MVCubeModelBase__Class *)
             (unaff_EDI->klass->_1).typeHierarchy
             [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] != TypeInfo__MVCubeModelBase))
      goto code_?;
      in_stack_10 = (MethodInfo *)unaff_EDI[2].monitor;
      if (in_stack_10 == (MethodInfo *)0x0) break;
      pCVar12 = ChunkInstances::ChunkInstances_GetChunk
                         ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff80,
                          (ChunkInstances *)in_stack_10,chunkPos,(MethodInfo *)0x0);
      obj = pCVar12->gameObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      if ((ChunkInstances *)unaff_EDI[2].monitor == (ChunkInstances *)0x0) break;
      ChunkInstances::ChunkInstances_Remove
                ((ChunkInstances *)unaff_EDI[2].monitor,chunkPos,(MethodInfo *)0x0);
    }
  }
  func_?();
  pMVar11 = extraout_EDX;
code_?:
  func_?((short)unaff_EDI,pMVar11);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    uVar1 = 0x119a;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                   );
    uVar1 = 0x119c;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(0xedb4);
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
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this->fields).chunks
                       ,*pIVar7,
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
        in_stack_13 = 0x1059;
        func_?();
        cRam_? = '\x01';
        meshGeneratePriority =
             (MeshGeneratePriority__Enum)
             &
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
        ;
      }
      meshGeneratePriority._2_2_ = (undefined2)(meshGeneratePriority >> 0x10);
      this_00 = (pCVar12->fields).cells;
      if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
        key.z = iVar3;
        key.x = iVector.x;
        key.y = iVector.y;
        in_stack_13 = iStack_4;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
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
          key_00.z = 0x1059;
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
              chunkPos.z = 0x1059;
              chunkPos.x = uVar8;
              chunkPos.y = uVar9;
              RuntimePrototypeCubeModel_AddToDirtyChunks
                        (this,chunkPos,CONCAT22(meshGeneratePriority._2_2_,0x1059),(MethodInfo *)0x0
                        );
              return;
            }
            pDVar11 = (this->fields).chunks;
            if ((pDVar11 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
               (key_02.z = 0x1059, key_02.x = uVar8, key_02.y = uVar9,
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
                key_03.z = 0x1059;
                key_03.x = uVar8;
                key_03.y = uVar9;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar11,key_03,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                          );
                IVar6.z = 0x1059;
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
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__Remove
              (this_00,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
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
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (DStack_6._current.value == (Object *)0x0) break;
      DStack_6._current.value[8].klass =
           (Object__Class *)((int)&DStack_6._current.value[8].klass[-1].vtable.ToString.method + 3)
      ;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(0x50ec);
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
      pIVar6 = pIVar3->klass;
      uVar7 = 0;
      uVar8._0_1_ = (pIVar6->_1).rank;
      uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar9 = &(&(pIVar3->klass->vtable).get_Current)
                       [pIVar3->klass->interfaceOffsets[uVar7].offset].method;
            cube = enumType;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      pIVar3 = (IEnumerator *)&UNK_?;
      ppMVar9 = (MethodInfo **)func_?();
      cube = enumType;
code_?:
      piVar10 = (int *)(*(code *)*ppMVar9)();
      if (piVar10 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar10 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      puVar11 = (uint *)func_?();
      uVar12 = *puVar11;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((cube == (Cube *)0x0) ||
         (pBVar13 = (cube->fields)._.faceMaterials, pBVar13 == (Byte__Array *)0x0)) break;
      if (pBVar13->max_length <= uVar12) {
        func_?();
        break;
      }
      pBVar13->vector[uVar12] = materialId;
      enumType = cube;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
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
  DStack_7._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key.x = 0;
  DStack_7._current.key.y = 0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._current.key.z = 0;
  DStack_7._current._6_2_ = 0;
  DStack_7._current.value = (Object *)0x0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_9,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8->_dictionary;
    DStack_7._version = pDVar8->_version;
    DStack_7._index = pDVar8->_index;
    DStack_7._current.key._0_4_ = (pDVar8->_current).key.sheetInstanceID;
    uVar11 = *(undefined8 *)&(pDVar8->_current).key.index;
    DStack_7._current.key.z = (int16_t)uVar11;
    DStack_7._current._6_2_ = SUB82((ulonglong)uVar11 >> 0x10,0);
    DStack_7._current.value = (Object *)((ulonglong)uVar11 >> 0x20);
    DStack_7._getEnumeratorRetType = pDVar8->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_12 = &DStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      pOVar14 = DStack_7._current.value;
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_15 = CONCAT26(DStack_7._current._6_2_,
                           CONCAT24(DStack_7._current.key.z,DStack_7._current.key._0_4_));
      if (cm == (MVCubeModelInstance *)0x0) break;
      chunkPos.z = DStack_7._current.key.z;
      chunkPos.x = DStack_7._current.key.x;
      chunkPos.y = DStack_7._current.key.y;
      pCVar16 = MVCubeModelInstance::MVCubeModelInstance_GetChunkInstance
                         (&CStack_17,cm,chunkPos,(MethodInfo *)0x0);
      iStack_18 = (pCVar16->guid)._a;
      uStack_19._0_2_ = (pCVar16->guid)._b;
      uStack_19._2_2_ = (pCVar16->guid)._c;
      DStack_9._dictionary =
           *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             **)&(pCVar16->guid)._d;
      DStack_9._version._0_1_ = (pCVar16->guid)._h;
      DStack_9._version._1_1_ = (pCVar16->guid)._i;
      DStack_9._version._2_1_ = (pCVar16->guid)._j;
      DStack_9._version._3_1_ = (pCVar16->guid)._k;
      DStack_9._index = (int32_t)pCVar16->gameObject;
      DStack_9._current.key.sheetInstanceID = (int32_t)pCVar16->collider;
      DStack_9._current.key.index = (int32_t)pCVar16->renderer;
      DStack_9._current.value = (Object *)pCVar16->filter;
      if ((pOVar14 == (Object *)0x0) ||
         ((MeshRenderer *)DStack_9._current.key.index == (MeshRenderer *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)DStack_9._current.key.index,(Material *)pOVar14[3].klass,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
    func_?(0x50ec);
    cRam_? = '\x01';
  }
  cube = RuntimePrototypeCubeModel_GetCube(this,iVector,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if ((cube != (Cube *)0x0) &&
     (pBVar2 = (cube->fields)._.faceMaterials, pBVar2 != (Byte__Array *)0x0)) {
    if (pBVar2->max_length <= face) goto code_?;
    pBVar2->vector[face] = materialId;
    RuntimePrototypeCubeModel_AddToChunk
              ((RuntimePrototypeCubeModel *)0x1,iVector,cube,
               MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
    if (pDRam0000003d != (DeltaCubes *)0x0) {
      iStack3 = iVector.z;
      DeltaCubes::DeltaCubes_Enqueue
                (pDRam0000003d,iVector,CubeAction__Enum_FaceChanged,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
             *)(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_6._current.value;
      if (DStack_6._current.value == (Object *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CubeModelChunk);
        cRam_? = '\x01';
      }
      cells = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pOVar12[8].monitor;
      if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CubeModelChunk);
      }
      CubeModelChunk::CubeModelChunk_SetCubeVisibility_2(cells,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(0xf288);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_6._set = (HashSet_1_System_UInt32_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  auStack_7._8_4_ = (IntVector__Class *)0x0;
  uStack_8 = (HashSet_1_T_Enumerator_System_UInt32_ *)((uint)uStack_8._2_2_ << 0x10);
  if (bp != (BytePacker *)0x0) {
    while( true ) {
      iVar9 = (bp->fields)._position;
      iVar10 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                         (bp,(MethodInfo *)0x0);
      if (iVar10 <= iVar9) break;
      uVar11 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      uStack_12 = CONCAT11(uVar11,(undefined1)uStack_12);
      uVar13 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar14 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                         (bp,(MethodInfo *)0x0);
      uStack_15 = (uint)uVar14;
      uVar14 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                         (bp,(MethodInfo *)0x0);
      pMStack_16 = (MethodInfo *)(uint)uVar14;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        auStack_7._8_4_ = TypeInfo__MV__WorldObject__IntVector;
        auStack_7._4_4_ = &UNK_?;
        func_?();
      }
      in_stack_17 = pMStack_16;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)(auStack_7 + 8),(uint)uVar13,uStack_15,(int32_t)pMStack_16,
                 (MethodInfo *)0x0);
      if (uStack_12._1_1_ == 0) {
        if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_00.z = (int16_t)uStack_8;
        iVector_00.x = auStack_7._8_2_;
        iVector_00.y = auStack_7._10_2_;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,iVector_00,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
      else if (uStack_12._1_1_ - 2 < 3) {
        if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector_01.z = (int16_t)uStack_8;
        iVector_01.x = auStack_7._8_2_;
        iVector_01.y = auStack_7._10_2_;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,iVector_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        uVar18 = auStack_7._8_4_;
        uStack_12 = (int16_t)uStack_8;
        uVar11 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        _uStack_24 = CONCAT31(uStack_19,uVar11);
        this_01 = (Cube *)func_?(TypeInfo__Cube);
        Cube::Cube__ctor_1(this_01,bp,(uint8_t)_uStack_24,(MethodInfo *)0x0);
        uVar20 = auStack_7._8_4_;
        in_stack_17 = (MethodInfo *)0x0;
        iVector.z = uStack_12;
        auStack_7._8_2_ = (undefined2)uVar18;
        auStack_7._10_2_ = SUB42(uVar18,2);
        iVector.x = auStack_7._8_2_;
        iVector.y = auStack_7._10_2_;
        auStack_7._8_4_ = uVar20;
        RuntimePrototypeCubeModel_AddCubeNetworkUpdate
                  (this,iVector,this_01,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar21 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar21 != (GameSessionData *)0x0) {
      if ((pGVar21->fields).gameMode != 1) {
        this_00 = (HashSet_1_System_UInt32_ *)(this->fields).instances;
        if (this_00 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
        pHVar22 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                  HashSet_1_System_UInt32__GetEnumerator
                            ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_7,this_00,
                             MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                            );
        HStack_6._set = pHVar22->_set;
        HStack_6._index = pHVar22->_index;
        HStack_6._version = pHVar22->_version;
        HStack_6._current = pHVar22->_current;
        auStack_7._8_4_ = (IntVector__Class *)0x0;
        uStack_1 = 1;
        uStack_8 = &HStack_6;
        while( true ) {
          bVar23 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            (&HStack_6,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          id = HStack_6._current;
          if (bVar23 == 0) break;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
          in_stack_17 = (MethodInfo *)0x0;
          pMVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_02,id,(MethodInfo *)0x0);
          if (pMVar24 == (MVWorldObject *)0x0) goto code_?;
          if ((pMVar24->fields).ownerActorNr != 0) {
            iVar9 = (pMVar24->fields).ownerActorNr;
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_03 == (MVNetworkGame *)0x0) goto code_?;
            pMVar25 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
            if (pMVar25 == (MVLocalPlayer *)0x0) goto code_?;
            if (iVar9 != (pMVar25->fields)._._ActorNr_k__BackingField) {
              in_stack_17 = (MethodInfo *)&UNK_?;
              func_?(0x45,pMVar24,_UNK_?,(short)_UNK_?,_UNK_?,
                              _UNK_?);
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&HStack_6,
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
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void UpdatePrototypeScale(Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
               (RuntimePrototypeCubeModel *this,float scale,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  method_00 = (MVCubeModelInstance__Class *)0x0;
  (this->fields)._Scale_k__BackingField = scale;
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields).instances;
  if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    pHVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffb4,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    id = pHVar4->_current;
    iStack_1 = 1;
    while (bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                             ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffff94,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                             ), bVar5 != 0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
      method_00 = (MVCubeModelInstance__Class *)0x0;
      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,id,(MethodInfo *)0x0);
      if (((pMVar6 != (MVWorldObject *)0x0) &&
          ((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
           (pMVar6->klass->_1).naturalAligment)) &&
         ((MVCubeModelInstance__Class *)
          (pMVar6->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1]
          == TypeInfo__MVCubeModelInstance)) {
        if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        item = (Object *)func_?();
        if (item == (Object *)0x0) {
          func_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                  );
      }
    }
    iStack_1 = -1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               (MethodInfo *)method_00);
    iStack_1 = -1;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &stack0xffffffb4,this_01,
                 MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__GetEnumerator__
                );
      iStack_1 = 4;
      while( true ) {
        this_03 = (MVCubeModelInstance *)&stack0xffffffa4;
        bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)this_03,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                          );
        if (bVar5 == 0) break;
        if (this_03 == (MVCubeModelInstance *)0x0) goto code_?;
        MVCubeModelInstance::MVCubeModelInstance_Rebuild(this_03,(MethodInfo *)0x0);
      }
      iStack_1 = -1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffa4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__Dispose__
                 ,(MethodInfo *)in_stack_7);
      iStack_1 = -1;
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffb4,this_01,
                          MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__GetEnumerator__
                         );
      iStack_1 = 7;
      this_04 = pLVar8->_current;
      while( true ) {
        bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffa4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                          );
        if (bVar5 == 0) {
          iStack_1 = -1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffa4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__Dispose__
                     ,in_stack_9);
          *unaff_FS_OFFSET = fStack_3;
          return;
        }
        RVar10 = this_04;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (this_04 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)this_04 + 0x108))();
        MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency
                  ((MVCubeModelBase *)this_04,(MethodInfo *)0x0);
        this_04 = RVar10;
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    this_01 = (HashSet_1_MV_WorldObject_IntVector_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    (this->fields).dirtyChunks = this_01;
    func_?(&(this->fields).dirtyChunks,this_01);
    (this->fields).useMeshGeneratePrioritySystem = 1;
    (this->fields).chunkSize = 0x20;
    (this->fields).prototypeState = 1;
    this_02 = (List_1_System_Byte_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    (this->fields).pendingDeltaCubes = this_02;
    func_?(&(this->fields).pendingDeltaCubes,this_02);
    (this->fields).prototypeId = -1;
    this_03 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
    DeltaCubes::DeltaCubes__ctor(this_03,(MethodInfo *)0x0);
    (this->fields).deltaCubes = this_03;
    func_?();
    pDStack2 =
         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
    ;
    this_04 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
              func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
              );
    (this->fields).chunks = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)this_04;
    func_?();
    this_05 = (HashSet_1_System_Int32_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_05,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    method_00 = (MethodInfo *)&(this->fields).instances;
    (this->fields).instances = this_05;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
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
    this_01 = (HashSet_1_MV_WorldObject_IntVector_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    (this->fields).dirtyChunks = this_01;
    func_?(&(this->fields).dirtyChunks,this_01);
    (this->fields).useMeshGeneratePrioritySystem = 1;
    (this->fields).chunkSize = 0x20;
    (this->fields).prototypeState = 1;
    this_02 = (List_1_System_Byte_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    (this->fields).pendingDeltaCubes = this_02;
    func_?(&(this->fields).pendingDeltaCubes,this_02);
    (this->fields).prototypeId = -1;
    this_03 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
    DeltaCubes::DeltaCubes__ctor(this_03,(MethodInfo *)0x0);
    (this->fields).deltaCubes = this_03;
    func_?();
    scale_00 = 
    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>;
    this_04 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
              func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
              );
    (this->fields).chunks = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)this_04;
    func_?();
    this_05 = (HashSet_1_System_Int32_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_05,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    method_00 = (MethodInfo *)&(this->fields).instances;
    (this->fields).instances = this_05;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    RuntimePrototypeCubeModel_Create
              (this,(int32_t)&(this->fields).chunks,(int32_t)this_04,(float)scale_00,
               (Byte__Array *)&(this->fields).deltaCubes,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[], Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_2
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,int32_t chunkSize,MethodInfo *method)

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
  if (this_00 == (LoggerManager *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  (this->fields).logger = pIVar2;
  func_?(&this->fields,pIVar2);
  this_01 = (HashSet_1_MV_WorldObject_IntVector_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
  HashSet_1_MV_WorldObject_IntVector___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  (this->fields).dirtyChunks = this_01;
  func_?(&(this->fields).dirtyChunks,this_01);
  (this->fields).useMeshGeneratePrioritySystem = 1;
  (this->fields).chunkSize = 0x20;
  (this->fields).prototypeState = 1;
  this_02 = (List_1_System_Byte_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  (this->fields).pendingDeltaCubes = this_02;
  func_?(&(this->fields).pendingDeltaCubes,this_02);
  (this->fields).prototypeId = -1;
  this_03 = (DeltaCubes *)func_?(TypeInfo__DeltaCubes);
  DeltaCubes::DeltaCubes__ctor(this_03,(MethodInfo *)0x0);
  (this->fields).deltaCubes = this_03;
  func_?();
  scale_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>;
  this_04 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_04,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
            );
  (this->fields).chunks = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)this_04;
  func_?();
  this_05 = (HashSet_1_System_Int32_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_05,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar3 = (MethodInfo *)&(this->fields).instances;
  (this->fields).instances = this_05;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar3);
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_IsPowerOfTwo
                    ((int32_t)this_03,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar3 = (MethodInfo *)0x0;
    message = StringLiteral_Not_power_of_2;
  }
  else {
    pMVar3 = (MethodInfo *)0x0;
    iVar5 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
    if (iVar5 < 1) {
      (this->fields).chunkSize = (int32_t)this_03;
      goto code_?;
    }
    message = StringLiteral_Can_not_override_chunk_size_if_c;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      message = StringLiteral_Can_not_override_chunk_size_if_c;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError((Object *)message,pMVar3);
code_?:
  RuntimePrototypeCubeModel_Create
            (this,(int32_t)&(this->fields).chunks,(int32_t)this_04,(float)scale_00,
             (Byte__Array *)&(this->fields).deltaCubes,(MethodInfo *)0x0);
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
  DStack_7._current.key.z = 0;
  DStack_7._current._6_2_ = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key.x = 0;
  DStack_7._current.key.y = 0;
  DStack_7._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).chunks;
  iStack_8 = 0;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       (&DStack_10,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_7._dictionary =
         (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key._0_4_ = (pDVar9->_current).key.sheetInstanceID;
    DStack_7._current._4_8_ = *(undefined8 *)&(pDVar9->_current).key.index;
    DStack_7._getEnumeratorRetType = pDVar9->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_12 = &DStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return iVar6;
      }
      if (DStack_7._current.value == (Object *)0x0) break;
      iVar6 = (int)&((DStack_7._current.value[7].klass)->_0).image + iVar6;
      iStack_8 = iVar6;
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  iVar16 = (*pcVar15)();
  return iVar16;
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
  collection = (this->fields).instances;
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor_1
            (this_00,(IEnumerable_1_System_Int32_ *)collection,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
            );
  return this_00;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
        uVar8._0_1_ = (pIStack_7->_1).rank;
        uVar8._1_1_ = (pIStack_7->_1).minimumAlignment;
        if (uVar8 != 0) {
          do {
            if (pIStack_7->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILogger
               ) {
              ppMVar9 = &(&pIStack_7->vtable)[pIStack_7->interfaceOffsets[uVar6].offset].Log.method;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        pIVar5 = TypeInfo__ILogger;
        ppMVar9 = (MethodInfo **)func_?(pIStack_3,TypeInfo__ILogger,0);
code_?:
        (*(code *)*ppMVar9)(pIStack_3,pIVar5,ppMVar9[1]);
        pLVar1 = (this->fields).pendingDeltaCubes;
        if (pLVar1 != (List_1_System_Byte_ *)0x0) {
          if ((pLVar1->fields)._size < 1) goto code_?;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          worldInventoryID = (this->fields).prototypeId;
          this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)(this->fields).pendingDeltaCubes;
          if ((this_00 !=
               (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)0x0) &&
             (prototypeData =
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
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

