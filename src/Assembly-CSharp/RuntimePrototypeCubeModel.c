
/* Void AddChunk(IntVector) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddChunk
               (RuntimePrototypeCubeModel *this,IntVector *chunkPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).instances;
  if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  iStack_8 = (pHVar1->fields)._version;
  uStack_9 = 0;
  uStack_4._0_4_ = SUB84(pHVar1,0);
  uStack_4._4_4_ = (undefined4)((ulonglong)pHVar1 >> 0x20);
  uStack_10 = (undefined4)uStack_4;
  uStack_11 = uStack_4._4_4_;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_4 = 0;
  puStack_14 = &uStack_10;
  while( true ) {
    cVar15 = FUN_?(&uStack_10,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
    if (cVar15 == '\0') {
      return;
    }
    key = (int32_t)uStack_13;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar16 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar17 = (pMVar16->fields).game;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    if (((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) ||
       (pMVar18 = (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar18 == (MVWorldObjectClientManagerNetwork *)0x0)) {
code_?:
      FUN_?();
      break;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMStackX_20 = (MVCubeModelBase *)0x0;
    this_00 = (pMVar18->fields)._.worldObjects;
    if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&pMStackX_20,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    cubeInstance = (MVCubeModelBase *)0x0;
    pMVar19 = pMStackX_20;
    if (pMStackX_20 != (MVCubeModelBase *)0x0) {
      bVar20 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if (((bVar20 <= (pMStackX_20->klass->_1).naturalAligment) &&
          ((MVCubeModelBase__Class *)(pMStackX_20->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
           TypeInfo__MVCubeModelBase)) &&
         (cubeInstance = pMStackX_20, pMStackX_20 != (MVCubeModelBase *)0x0))
      goto code_?;
code_?:
      FUN_?(pMVar19);
      goto code_?;
    }
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (this->fields).chunks;
    if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    IStackX_8.x = chunkPos->x;
    IStackX_8.y = chunkPos->y;
    IStackX_8.z = chunkPos->z;
    pMVar19 = (MVCubeModelBase *)
              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
    ;
    this_02 = (CubeModelChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,&IStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_02 == (CubeModelChunk *)0x0) {
      FUN_?();
      goto code_?;
    }
    aIStack_21[0].x = chunkPos->x;
    aIStack_21[0].y = chunkPos->y;
    aIStack_21[0].z = chunkPos->z;
    CubeModelChunk::CubeModelChunk_SetInstanceDataRef
              (this_02,aIStack_21,cubeInstance,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean AddCube(IntVector, Cube) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCube
               (RuntimePrototypeCubeModel *this,IntVector *pos,Cube *cube,MethodInfo *method)

{
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
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8.x = pos->x;
  IStackX_8.y = pos->y;
  IStackX_8.z = pos->z;
  pIVar2 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (&IStackX_10,&IStackX_8,iVar1,(MethodInfo *)0x0);
  pDVar3 = (this->fields).chunks;
  uVar4._0_2_ = pIVar2->x;
  uVar4._2_2_ = pIVar2->y;
  iVar5 = pIVar2->z;
  if (pDVar3 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
  goto code_?;
  IStackX_8._0_4_ = uVar4;
  IStackX_8.z = iVar5;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System
          ::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                    ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    pDVar3 = (this->fields).chunks;
    if ((pDVar3 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) ||
       (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar5,
       pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          ), pOVar6 == (Object *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar6[6].klass == (Object__Class *)0x0) goto code_?;
    IStackX_8.x = pos->x;
    IStackX_8.y = pos->y;
    IStackX_8.z = pos->z;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pOVar6[6].klass,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      return 0;
    }
  }
  IStackX_8.x = pos->x;
  IStackX_8.y = pos->y;
  IStackX_8.z = pos->z;
  RuntimePrototypeCubeModel_AddToChunk
            (this,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
             (MethodInfo *)0x0);
  this_00 = (this->fields).deltaCubes;
  if (this_00 != (DeltaCubes *)0x0) {
    IStackX_8.x = pos->x;
    IStackX_8.y = pos->y;
    IStackX_8.z = pos->z;
    DeltaCubes::DeltaCubes_Enqueue
              (this_00,&IStackX_8,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),2),
               (MethodInfo *)0x0);
    return 1;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void AddCubeNetworkUpdate(IntVector, Cube, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddCubeNetworkUpdate
               (RuntimePrototypeCubeModel *this,IntVector *iVector,Cube *cube,
               MeshGeneratePriority__Enum priority,MethodInfo *method)

{
  aIStackX_18[0].x = iVector->x;
  aIStackX_18[0].y = iVector->y;
  aIStackX_18[0].z = iVector->z;
  RuntimePrototypeCubeModel_AddToChunk(this,aIStackX_18,cube,priority,1,(MethodInfo *)0x0);
  return;
}


/* Void AddRefenceToChunk(IntVector ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddRefenceToChunk
               (RuntimePrototypeCubeModel *this,IntVector *chunkPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = chunkPosition->x;
    IStackX_8.y = chunkPosition->y;
    IStackX_8.z = chunkPosition->z;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
    if (pOVar1 != (Object *)0x0) {
      *(int *)&pOVar1[5].monitor = *(int *)&pOVar1[5].monitor + 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddReferenceToAllChunks() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_AddReferenceToAllChunks
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
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
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    *(int *)&DStack_11._current.value[5].monitor = *(int *)&DStack_11._current.value[5].monitor + 1;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddToChunk(IntVector, Cube, MeshGeneratePriority, Boolean) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
               (RuntimePrototypeCubeModel *this,IntVector *iVector,Cube *cube,
               MeshGeneratePriority__Enum meshGeneratePriority,bool setVisibility,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8.x = iVector->x;
  IStackX_8.y = iVector->y;
  IStackX_8.z = iVector->z;
  uVar2 = 0;
  pIVar3 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                      (&IStackX_10,&IStackX_8,iVar1,(MethodInfo *)0x0);
  pDVar4 = (this->fields).chunks;
  uVar5._0_2_ = pIVar3->x;
  uVar5._2_2_ = pIVar3->y;
  iVar6 = pIVar3->z;
  if (pDVar4 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8._0_4_ = uVar5;
    IStackX_8.z = iVar6;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar4,&IStackX_8,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                        ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pCVar7 = (CubeModelChunk *)FUN_?(TypeInfo__CubeModelChunk);
      IStackX_8._0_4_ = uVar5;
      IStackX_8.z = iVar6;
      CubeModelChunk::CubeModelChunk__ctor(pCVar7,&IStackX_8,(MethodInfo *)0x0);
      pDVar4 = (this->fields).chunks;
      if (pDVar4 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      IStackX_8._0_4_ = uVar5;
      IStackX_8.z = iVar6;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar4,&IStackX_8,
                 (Object *)pCVar7,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                 ->klass->rgctx_data[0x22].method);
      IStackX_8._0_4_ = uVar5;
      IStackX_8.z = iVar6;
      RuntimePrototypeCubeModel_AddChunk(this,&IStackX_8,(MethodInfo *)0x0);
    }
    pDVar4 = (this->fields).chunks;
    if ((pDVar4 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (IStackX_8._0_4_ = uVar5, IStackX_8.z = iVar6,
       pCVar7 = (CubeModelChunk *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar4,
                            &IStackX_8,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                           ), pCVar7 != (CubeModelChunk *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar8 = (pCVar7->fields).cells;
      if (pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
        IStackX_8.x = iVector->x;
        IStackX_8.y = iVector->y;
        IStackX_8.z = iVector->z;
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                           (pDVar8,&IStackX_8,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                            ->klass->rgctx_data[0x21].method);
        if (iVar1 < 0) {
          piVar9 = &(pCVar7->fields).cubeCount;
          *piVar9 = *piVar9 + 1;
        }
        pDVar8 = (pCVar7->fields).cells;
        uStack_10 = 0;
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&pCStack_12 >> 0xc);
          puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar14 = *puVar13;
            LOCK();
            uVar15 = *puVar13;
            if (uVar14 == uVar15) {
              *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar14 != uVar15);
        }
        pCStack_12 = cube;
        if ((cube != (Cube *)0x0) &&
           (uStack_10 = (ulonglong)(((cube->fields)._.unIndentedSides & 0x3f) != 0x3f),
           pDVar8 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)) {
          IStackX_8.x = iVector->x;
          IStackX_8.y = iVector->y;
          IStackX_8.z = iVector->z;
          CStack_16._8_8_ = uStack_10;
          CStack_16.cube = cube;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]
          ::Dictionary_2_MV_WorldObject_IntVector_Cell__TryInsert
                    (pDVar8,&IStackX_8,&CStack_16,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                     ->klass->rgctx_data[0x22].method);
          if (setVisibility != 0) {
            IStackX_8.x = iVector->x;
            IStackX_8.y = iVector->y;
            IStackX_8.z = iVector->z;
            CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
                      (pCVar7,&IStackX_8,(MethodInfo *)0x0);
          }
          IStackX_8._0_4_ = uVar5;
          IStackX_8.z = iVar6;
          RuntimePrototypeCubeModel_AddToDirtyChunks
                    (this,&IStackX_8,meshGeneratePriority,(MethodInfo *)0x0);
          return;
        }
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void AddToDirtyChunks(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToDirtyChunks
               (RuntimePrototypeCubeModel *this,IntVector *chunkPos,
               MeshGeneratePriority__Enum meshGeneratePriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).useMeshGeneratePrioritySystem != 0) &&
     (meshGeneratePriority != MeshGeneratePriority__Enum_None)) {
    this_00 = (this->fields).dirtyChunks;
    if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
    IStackX_8.x = chunkPos->x;
    IStackX_8.y = chunkPos->y;
    IStackX_8.z = chunkPos->z;
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__AddIfNotPresent
              (this_00,&IStackX_8,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
               ->klass->rgctx_data[0x15].method);
    if ((this->fields).meshGeneratePriority == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 == (WorldNetwork *)0x0)) ||
         (pMVar3 = (pWVar2->fields)._.worldInventory, pMVar3 == (MVWorldInventory *)0x0)) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__Add_RuntimePrototypeCubeModel_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = 
      MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__Add_RuntimePrototypeCubeModel_
      ;
      this_01 = (pMVar3->fields).dirtyRPCM;
      if (this_01 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto code_?;
      piVar6 = &(this_01->fields)._version;
      *piVar6 = *piVar6 + 1;
      pRVar7 = (this_01->fields)._items;
      if (pRVar7 == (RuntimePrototypeCubeModel__Array *)0x0) goto code_?;
      uVar8 = (this_01->fields)._size;
      if (uVar8 < (uint)pRVar7->max_length) {
        (this_01->fields)._size = uVar8 + 1;
        FUN_?(pRVar7,(longlong)(int)uVar8,this);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_01,(Object *)this,
                   pMVar5->klass->rgctx_data[0xe].method);
      }
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeltaCubes);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RuntimePrototypeCubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RuntimePrototypeCubeModel *)FUN_?(TypeInfo__RuntimePrototypeCubeModel);
  RuntimePrototypeCubeModel__ctor(pRVar1,(MethodInfo *)0x0);
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    (pRVar1->fields)._Scale_k__BackingField = (this->fields)._Scale_k__BackingField;
    (pRVar1->fields)._AuthorProfileID_k__BackingField =
         (this->fields)._AuthorProfileID_k__BackingField;
    pDVar2 = (this->fields).chunks;
    if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uStack_9 = (ulonglong)(uint)(pDVar2->fields)._version;
      uStack_10 = 2;
      uStack_11 = 0;
      uStack_12 = 0;
      DStack_13._version = (undefined4)uStack_9;
      DStack_13._index = uStack_9._4_4_;
      DStack_13._current.key.x = 0;
      DStack_13._current.key.y = 0;
      DStack_13._current.key.z = 0;
      DStack_13._current._6_2_ = 0;
      DStack_13._current.value = (Object *)0x0;
      DStack_13._getEnumeratorRetType = 2;
      DStack_13._36_4_ = 0;
      uStack_14 = 0;
      pDStack_15 = &DStack_13;
      pDStack_4 = pDVar2;
      DStack_13._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::Object]
                     ::
                     Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                               (&DStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                               ), bVar16 != 0) {
        this_00 = (pRVar1->fields).chunks;
        uVar17 = DStack_13._current.key._0_4_;
        iVar18 = DStack_13._current.key.z;
        if ((CubeModelChunk *)DStack_13._current.value == (CubeModelChunk *)0x0)
        goto code_?;
        value = CubeModelChunk::CubeModelChunk_CloneGeometry
                          ((CubeModelChunk *)DStack_13._current.value,
                           (this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
        uVar19 = DStack_13._current._0_8_;
        if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        DStack_13._current.key.x = (int16_t)uVar17;
        DStack_13._current.key.y = SUB42(uVar17,2);
        aIStack_20[0].x = DStack_13._current.key.x;
        aIStack_20[0].y = DStack_13._current.key.y;
        aIStack_20[0].z = iVar18;
        pDVar2 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)
                  CONCAT71((int7)((ulonglong)pDVar2 >> 8),2);
        DStack_13._current._0_8_ = uVar19;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,aIStack_20,
                   (Object *)value,(InsertionBehavior__Enum)pDVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Add_MV__WorldObject__IntVector__CubeModelChunk_
                   ->klass->rgctx_data[0x22].method);
      }
      if (withDeltaCubes != 0) {
        pDVar21 = (this->fields).deltaCubes;
        if (pDVar21 == (DeltaCubes *)0x0) goto code_?;
        cubeChangeOriginal = (pDVar21->fields).cubeChange;
        pDVar21 = (DeltaCubes *)FUN_?(TypeInfo__DeltaCubes);
        DeltaCubes::DeltaCubes__ctor_1
                  (pDVar21,(IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
                           *)cubeChangeOriginal,(MethodInfo *)0x0);
        (pRVar1->fields).deltaCubes = pDVar21;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(pRVar1->fields).deltaCubes >> 0xc);
          uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      RuntimePrototypeCubeModel_SetVisibility(pRVar1,(MethodInfo *)0x0);
      return pRVar1;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  pRVar1 = (RuntimePrototypeCubeModel *)(*pcVar22)();
  return pRVar1;
}


/* Boolean CompareGeometry(RuntimePrototypeCubeModel) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
               (RuntimePrototypeCubeModel *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
  if (rpcm == (RuntimePrototypeCubeModel *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = RuntimePrototypeCubeModel_get_CubeCount(rpcm,(MethodInfo *)0x0);
  if (iVar1 == iVar4) {
    pDVar5 = (this->fields).chunks;
    if (pDVar5 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
    goto code_?;
    uStack_6 = 0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    uStack_13 = (ulonglong)(uint)(pDVar5->fields)._version;
    uStack_14 = 2;
    DStack_15._version = (undefined4)uStack_13;
    DStack_15._index = uStack_13._4_4_;
    DStack_15._current.key.x = 0;
    DStack_15._current.key.y = 0;
    DStack_15._current.key.z = 0;
    DStack_15._current._6_2_ = 0;
    DStack_15._current.value = (Object *)0x0;
    DStack_15._getEnumeratorRetType = 2;
    DStack_15._36_4_ = 0;
    uStack_16 = 0;
    pDStack_17 = &DStack_15;
    pDStack_9 = pDVar5;
    DStack_15._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar5;
    do {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_15,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      this_00 = DStack_15._current.value;
      iVar18 = DStack_15._current.key.z;
      if (bVar3 == 0) {
        return 1;
      }
      uVar19._0_2_ = DStack_15._current.key.x;
      uVar19._2_2_ = DStack_15._current.key.y;
      pDVar5 = (rpcm->fields).chunks;
      if (pDVar5 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      aIStack_20[0].x = DStack_15._current.key.x;
      aIStack_20[0].y = DStack_15._current.key.y;
      aIStack_20[0].z = DStack_15._current.key.z;
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar5,aIStack_20,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        return 0;
      }
      pDVar5 = (rpcm->fields).chunks;
      if (pDVar5 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
      goto code_?;
      aIStack_21[0].z = iVar18;
      aIStack_21[0]._0_4_ = uVar19;
      chunk = (CubeModelChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar5,aIStack_21,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
      if ((CubeModelChunk *)this_00 == (CubeModelChunk *)0x0) goto code_?;
      bVar3 = CubeModelChunk::CubeModelChunk_CompareGeometry
                        ((CubeModelChunk *)this_00,chunk,(MethodInfo *)0x0);
    } while (bVar3 != 0);
  }
  return 0;
}


/* Void CompareGeometryDetailed(RuntimePrototypeCubeModel, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_CompareGeometryDetailed
               (RuntimePrototypeCubeModel *this,RuntimePrototypeCubeModel *rpcm,
               bool visibleCubesOnly,int32_t *matchingCubeCount,int32_t *investigatedCubeCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCStack_1 = (CubeModelChunk *)0x0;
  pDStack_2 = (this->fields).chunks;
  if (pDStack_2 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_2 >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDStack_2->fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_12 = 0;
  DStack_13._version = (undefined4)uStack_9;
  DStack_13._index = uStack_9._4_4_;
  DStack_13._current.key.x = 0;
  DStack_13._current.key.y = 0;
  DStack_13._current.key.z = 0;
  DStack_13._current._6_2_ = 0;
  DStack_13._current.value = (Object *)0x0;
  DStack_13._getEnumeratorRetType = 2;
  DStack_13._36_4_ = 0;
  uStack_14 = 0;
  pDStack_15 = &DStack_13;
  DStack_13._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDStack_2;
  while( true ) {
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      (&DStack_13,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    this_01 = DStack_13._current.value;
    uVar17 = DStack_13._current._0_8_;
    if (bVar16 == 0) {
      return;
    }
    if (rpcm == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    this_00 = (rpcm->fields).chunks;
    if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) break;
    IStackX_8.x = DStack_13._current.key.x;
    IStackX_8.y = DStack_13._current.key.y;
    DStack_13._current.key.z = SUB82(uVar17,4);
    IStackX_8.z = DStack_13._current.key.z;
    DStack_13._current._0_8_ = uVar17;
    uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                       ->klass->rgctx_data[0x21].method);
    if (-1 < (int)uVar4) {
      pDVar18 = (this_00->fields)._entries;
      if (pDVar18 != (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_CubeModelChunk___Array
                     *)0x0) {
        if (uVar4 < (uint)pDVar18->max_length) {
          pCStack_1 = pDVar18->vector[(int)uVar4].value;
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&pCStack_1 >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          goto code_?;
        }
        FUN_?();
        goto code_?;
      }
code_?:
      FUN_?();
      break;
    }
    pCStack_1 = (CubeModelChunk *)0x0;
code_?:
    if ((CubeModelChunk *)this_01 == (CubeModelChunk *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    CubeModelChunk::CubeModelChunk_CompareGeometry_1
              ((CubeModelChunk *)this_01,pCStack_1,matchingCubeCount,investigatedCubeCount,
               visibleCubesOnly,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CornersChanged(IntVector, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CornersChanged
               (RuntimePrototypeCubeModel *this,IntVector *iVector,Cube *cube,MethodInfo *method)

{
  uVar1 = SUB84(cube,0);
  IStackX_8.x = iVector->x;
  IStackX_8.y = iVector->y;
  IStackX_8.z = iVector->z;
  RuntimePrototypeCubeModel_AddToChunk
            (this,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
             (MethodInfo *)0x0);
  this_00 = (this->fields).deltaCubes;
  if (this_00 != (DeltaCubes *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    DeltaCubes::DeltaCubes_Enqueue
              (this_00,&IStackX_8,CONCAT31((int3)((uint)uVar1 >> 8),1),(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CornersChangedDone(IntVector, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CornersChangedDone
               (RuntimePrototypeCubeModel *this,IntVector *iVector,Cube *cube,MethodInfo *method)

{
  uVar1 = SUB84(cube,0);
  IStackX_8.x = iVector->x;
  IStackX_8.y = iVector->y;
  IStackX_8.z = iVector->z;
  RuntimePrototypeCubeModel_AddToChunk
            (this,&IStackX_8,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
             (MethodInfo *)0x0);
  this_00 = (this->fields).deltaCubes;
  if (this_00 != (DeltaCubes *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    DeltaCubes::DeltaCubes_Enqueue
              (this_00,&IStackX_8,CONCAT31((int3)((uint)uVar1 >> 8),4),(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Create(Int32, Int32, Single, Byte[]) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Create
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker,CONCAT44(in_register_00000014,id),
                  CONCAT44(in_register_00000084,authorProfileId),in_R9,
                  CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._Scale_k__BackingField = scale;
  (this->fields).prototypeId = id;
  (this->fields)._AuthorProfileID_k__BackingField = authorProfileId;
  this_01 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(this_01,data,(MethodInfo *)0x0)
  ;
  RuntimePrototypeCubeModel_CreateFromBytePackage(this,this_01,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_SetVisibility(this,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_RebuildPrototypeMesh(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prototypeId_is__1_which_means_th);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pendingDeltaCubes_Count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeState = 0;
  if ((this->fields).prototypeId != -1) {
    pIVar1 = (this->fields).logger;
    if ((this->fields).pendingDeltaCubes != (List_1_System_Byte_ *)0x0) {
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0x00000010,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_pendingDeltaCubes_Count_,pSVar2,(MethodInfo *)0x0);
      if (pIVar1 != (ILogger *)0x0) {
        FUN_?(0,TypeInfo__ILogger,pIVar1);
        pLVar3 = (this->fields).pendingDeltaCubes;
        if (pLVar3 != (List_1_System_Byte_ *)0x0) {
          if ((pLVar3->fields)._size < 1) {
            return;
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          pLVar3 = (this->fields).pendingDeltaCubes;
          worldInventoryID = (this->fields).prototypeId;
          if ((pLVar3 != (List_1_System_Byte_ *)0x0) &&
             (prototypeData =
                   (Byte__Array *)
                   FUN_?(pLVar3,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                ), this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                      (this_00,worldInventoryID,prototypeData,(MethodInfo *)0x0);
            pLVar3 = (this->fields).pendingDeltaCubes;
            if (pLVar3 != (List_1_System_Byte_ *)0x0) {
              piVar4 = &(pLVar3->fields)._version;
              *piVar4 = *piVar4 + 1;
              (pLVar3->fields)._size = 0;
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = StringLiteral_prototypeId_is__1_which_means_th;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,0,pSVar2);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateFromBytePackage(BytePacker) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateFromBytePackage
               (RuntimePrototypeCubeModel *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  if (0 < (int)uVar2) {
    uStack_3 = (ulonglong)uVar2;
    do {
      iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                            (bp,(MethodInfo *)0x0);
      this_00 = (Cube *)FUN_?(TypeInfo__Cube);
      Cube::Cube__ctor_1(this_00,bp,byteFlags,(MethodInfo *)0x0);
      aIStack_7[0].x = iVar4;
      aIStack_7[0].y = uVar5;
      aIStack_7[0].z = iVar6;
      RuntimePrototypeCubeModel_AddToChunk
                (this,aIStack_7,this_00,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar8 = 1;
      if (1 < byteFlags >> 2) {
        iStackX_20 = (uint)uVar5 << 0x10;
        do {
          sVar9 = iVar4 + (short)iVar8;
          iStackX_20 = CONCAT22(iStackX_20._2_2_,sVar9);
          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
            FUN_?();
          }
          cube = Cube::Cube_Clone_1(this_00,(MethodInfo *)0x0);
          aIStack_10[0].x = sVar9;
          aIStack_10[0].y = iStackX_20._2_2_;
          aIStack_10[0].z = iVar6;
          RuntimePrototypeCubeModel_AddToChunk
                    (this,aIStack_10,cube,MeshGeneratePriority__Enum_None,0,(MethodInfo *)0x0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)(byteFlags >> 2));
      }
      uStack_3 = uStack_3 - 1;
    } while (uStack_3 != 0);
  }
  return;
}


/* Void CreateInstance(MVCubeModelBase) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
               (RuntimePrototypeCubeModel *this,MVCubeModelBase *cm,MethodInfo *method)

{
  pRStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
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
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                 );
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStack_2 = (MVCubeModelBase *)0x0;
  pLStack_3 = (List_1_MV_WorldObject_IntVector_ *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  aDStack_7[0]._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
  aDStack_7[0]._version = 0;
  aDStack_7[0]._index = 0;
  aDStack_7[0]._current.key.x = 0;
  aDStack_7[0]._current.key.y = 0;
  aDStack_7[0]._current.key.z = 0;
  aDStack_7[0]._current._6_2_ = 0;
  aDStack_7[0]._current.value = (Object *)0x0;
  aDStack_7[0]._getEnumeratorRetType = 0;
  aDStack_7[0]._36_4_ = 0;
  this_02 = (List_1_MV_WorldObject_IntVector_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  FUN_?(this_02,
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pLStack_8 = this_02;
  if ((cm == (MVCubeModelBase *)0x0) ||
     (method = (MethodInfo *)0x0, (cm->fields).chunkInstances == (ChunkInstances *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    pMVar9 = (MVCubeModelBase *)method;
code_?:
    plVar10 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar10,pMVar9);
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
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pMStackX_20 = (MVCubeModelBase *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  pLStack_12 = (List_1_MV_WorldObject_IntVector_ *)0x0;
  pDStack_13 = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *)
                &pMStackX_20;
  ppMStack_14 = &pMStack_2;
code_?:
  while (pMStackX_20 != (MVCubeModelBase *)0x0) {
    method = (MethodInfo *)pMStackX_20;
    cVar15 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    pMVar9 = pMStackX_20;
    if (cVar15 == '\0') {
      pMVar9 = (MVCubeModelBase *)FUN_?(pMStackX_20,TypeInfo__System__IDisposable);
      pMStack_2 = pMVar9;
      if (pMVar9 != (MVCubeModelBase *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,pMVar9);
        method = (MethodInfo *)pMVar9;
      }
      if (this_02 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
        if (iRam_? != 0) {
          uVar16 = (uint)((ulonglong)&pLStack_12 >> 0xc);
          uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
          do {
            uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
            puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
            LOCK();
            bVar20 = uVar18 == *puVar19;
            if (bVar20) {
              *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
            }
            UNLOCK();
          } while (!bVar20);
        }
        uStack_5 = (this_02->fields)._version;
        pDStack_13 = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *
                      )((ulonglong)uStack_5 << 0x20);
        ppMStack_14 = (MVCubeModelBase **)0x0;
        uStack_4 = 0;
        uStack_6 = 0;
        pLStack_8 = (List_1_MV_WorldObject_IntVector_ *)0x0;
        ppLStack_21 = &pLStack_3;
        pLStack_12 = this_02;
        pLStack_3 = this_02;
        while( true ) {
          if (pLStack_3 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          if ((uStack_5 != (pLStack_3->fields)._version) ||
             ((uint)(pLStack_3->fields)._size <= uStack_4)) break;
          pIVar22 = (pLStack_3->fields)._items;
          if (pIVar22 == (IntVector__Array *)0x0) goto code_?;
          if ((uint)pIVar22->max_length <= uStack_4) goto code_?;
          uVar23._0_2_ = pIVar22->vector[(int)uStack_4].x;
          uVar23._2_2_ = pIVar22->vector[(int)uStack_4].y;
          iVar24 = pIVar22->vector[(int)uStack_4].z;
          uStack_6._0_6_ = CONCAT24(iVar24,uVar23);
          uStack_4 = uStack_4 + 1;
          this_00 = (cm->fields).chunkInstances;
          if (this_00 == (ChunkInstances *)0x0) goto code_?;
          aIStack_25[0]._0_4_ = uVar23;
          aIStack_25[0].z = iVar24;
          ChunkInstances::ChunkInstances_Remove(this_00,aIStack_25,(MethodInfo *)0x0);
        }
        method = 
        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
        ;
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (pLStack_3 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
        if (uStack_5 != (pLStack_3->fields)._version) goto code_?;
        uStack_4 = (pLStack_3->fields)._size + 1;
        uStack_6 = uStack_6 & 0xffff000000000000;
        pDVar26 = (this->fields).chunks;
        if (pDVar26 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar16 = (uint)((ulonglong)&pLStack_12 >> 0xc);
          uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
          method = (MethodInfo *)(ulonglong)(uVar16 & 0x3f);
          do {
            uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
            puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
            LOCK();
            bVar20 = uVar18 == *puVar19;
            if (bVar20) {
              *puVar19 = uVar18 | 1L << (longlong)method;
            }
            UNLOCK();
          } while (!bVar20);
        }
        pDStack_13 = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_ *
                      )(ulonglong)(uint)(pDVar26->fields)._version;
        uStack_27 = 2;
        ppMStack_14 = (MVCubeModelBase **)0x0;
        uStack_28 = 0;
        aDStack_7[0]._8_8_ = pDStack_13;
        aDStack_7[0]._current.key.x = 0;
        aDStack_7[0]._current.key.y = 0;
        aDStack_7[0]._current.key.z = 0;
        aDStack_7[0]._current._6_2_ = 0;
        aDStack_7[0]._current.value = (Object *)0x0;
        aDStack_7[0]._getEnumeratorRetType = 2;
        aDStack_7[0]._36_4_ = 0;
        pLStack_12 = (List_1_MV_WorldObject_IntVector_ *)0x0;
        pDStack_13 = aDStack_7;
        aDStack_7[0]._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar26;
        while( true ) {
          bVar29 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                             (aDStack_7,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                             );
          uVar30 = aDStack_7[0]._current._0_8_;
          if (bVar29 == 0) {
            this_01 = (pRStack_1->fields).instances;
            if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__AddIfNotPresent
                        (this_01,(cm->fields)._._.id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                         rgctx_data[0x15].method);
              return;
            }
            goto code_?;
          }
          uVar23 = aDStack_7[0]._current.key._0_4_;
          iVar24 = aDStack_7[0]._current.key.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uVar31 = aDStack_7[0]._current._0_8_;
          pDVar26 = (this->fields).chunks;
          if (pDVar26 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
          goto code_?;
          aDStack_7[0]._current.key.x = (int16_t)uVar23;
          aDStack_7[0]._current.key.y = SUB42(uVar23,2);
          aIStack_25[0].x = aDStack_7[0]._current.key.x;
          aIStack_25[0].y = aDStack_7[0]._current.key.y;
          aIStack_25[0].z = iVar24;
          aDStack_7[0]._current._0_8_ = uVar31;
          this_03 = (CubeModelChunk *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar26,
                               aIStack_25,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              );
          if (this_03 == (CubeModelChunk *)0x0) break;
          pLStack_8._0_6_ = SUB86(uVar30,0);
          method = (MethodInfo *)cm;
          CubeModelChunk::CubeModelChunk_SetInstanceDataRef
                    (this_03,(IntVector *)&pLStack_8,cm,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      goto code_?;
    }
    if (pMStackX_20 == (MVCubeModelBase *)0x0) goto code_?;
    pIVar32 = ((Il2CppClass_0 *)&pMStackX_20->klass)->image;
    uVar33 = 0;
    uVar34 = *(ushort *)((longlong)&pIVar32[4].nameNoExt + 6);
    if (uVar34 != 0) {
      do {
        if (*(IEnumerator__Class **)
             (*(longlong *)&pIVar32[2].customAttributeCount + (ulonglong)uVar33 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar35 = &pIVar32[4].typeCount +
                    (longlong)
                    (*(int *)(*(longlong *)&pIVar32[2].customAttributeCount + 8 +
                             (ulonglong)uVar33 * 0x10) + 1) * 4;
          goto code_?;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < uVar34);
    }
    puVar35 = (uint32_t *)FUN_?(pMStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar10 = (longlong *)(**(code **)puVar35)(pMVar9,*(undefined8 *)(puVar35 + 2));
    if (plVar10 == (longlong *)0x0) goto code_?;
    pMVar9 = (MVCubeModelBase *)
              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar10 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) goto code_?;
    lVar36 = plVar10[2];
    iVar24 = *(int16_t *)((longlong)plVar10 + 0x12);
    uVar23 = *(undefined4 *)(plVar10 + 2);
    iVar37 = *(int16_t *)((longlong)plVar10 + 0x14);
    obj = (Object_1 *)plVar10[5];
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar9 = (MVCubeModelBase *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
    method = 
    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
    ;
    if (this_02 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
    piVar38 = &(this_02->fields)._version;
    *piVar38 = *piVar38 + 1;
    pIVar22 = (this_02->fields)._items;
    uVar16 = (this_02->fields)._size;
    if (pIVar22 == (IntVector__Array *)0x0) goto code_?;
    if (uVar16 < (uint)pIVar22->max_length) {
      (this_02->fields)._size = uVar16 + 1;
      if (uVar16 < (uint)pIVar22->max_length) goto code_?;
      goto code_?;
    }
    aIStack_25[0]._0_4_ = uVar23;
    aIStack_25[0].z = iVar37;
    mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
    List_1_MV_WorldObject_IntVector__AddWithResize
              (this_02,aIStack_25,method->klass->rgctx_data[0xe].method);
  }
  goto code_?;
code_?:
  pIVar22->vector[(int)uVar16].x = (int16_t)lVar36;
  pIVar22->vector[(int)uVar16].y = iVar24;
  pIVar22->vector[(int)uVar16].z = iVar37;
  goto code_?;
}


/* Void CubePosToChunkPos(IntVector ByRef) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CubePosToChunkPos
               (RuntimePrototypeCubeModel *this,IntVector *cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_2_ = cubePos->x;
  uVar1._2_2_ = cubePos->y;
  iVar2 = cubePos->z;
  chunkSize = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8._0_4_ = uVar1;
  IStackX_8.z = iVar2;
  pIVar3 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (&IStackX_10,&IStackX_8,chunkSize,(MethodInfo *)0x0);
  uVar4 = pIVar3->x;
  uVar5 = pIVar3->y;
  sVar6 = pIVar3->z;
  cubePos->x = cubePos->x - (short)(this->fields).chunkSize * uVar4;
  cubePos->y = cubePos->y - (short)(this->fields).chunkSize * uVar5;
  cubePos->z = cubePos->z - (short)(this->fields).chunkSize * sVar6;
  return;
}


/* Void DecodeBytePacker(BytePacker, RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_DecodeBytePacker
               (BytePacker *bp,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    while( true ) {
      iVar1 = (bp->fields)._position;
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar2 = (bp->fields)._buffer;
      if (pLVar2 == (List_1_System_Byte_ *)0x0) break;
      if ((pLVar2->fields)._size <= iVar1) {
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
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (uVar3 == 0) {
        if (rpcm == (RuntimePrototypeCubeModel *)0x0) break;
        aIStack_7[0].x = iVar4;
        aIStack_7[0].y = iVar5;
        aIStack_7[0].z = iVar6;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (rpcm,aIStack_7,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
      }
      else if (uVar3 - 2 < 3) {
        if (rpcm == (RuntimePrototypeCubeModel *)0x0) break;
        aIStack_8[0].x = iVar4;
        aIStack_8[0].y = iVar5;
        aIStack_8[0].z = iVar6;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (rpcm,aIStack_8,MeshGeneratePriority__Enum_Low,(MethodInfo *)0x0);
        aIStack_9[0].y = iVar5;
        aIStack_9[0].x = iVar4;
        uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        this = (Cube *)FUN_?(TypeInfo__Cube);
        Cube::Cube__ctor_1(this,bp,uVar3,(MethodInfo *)0x0);
        aIStack_10[0].x = aIStack_9[0].x;
        aIStack_10[0].y = aIStack_9[0].y;
        aIStack_10[0].z = iVar6;
        RuntimePrototypeCubeModel_AddToChunk
                  (rpcm,aIStack_10,this,MeshGeneratePriority__Enum_Low,1,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
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
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if ((CubeModelChunk *)DStack_11._current.value == (CubeModelChunk *)0x0) break;
    CubeModelChunk::CubeModelChunk_Destroy
              ((CubeModelChunk *)DStack_11._current.value,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FineGrainedTerrainOverrideChunkSize(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_FineGrainedTerrainOverrideChunkSize
               (RuntimePrototypeCubeModel *this,int32_t size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_power_of_2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_not_override_chunk_size_if_c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChunkSize_overwritten);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  if ((size & size - 1U) == 0) {
    iVar1 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      (this->fields).chunkSize = size;
      return;
    }
    pSVar2 = StringLiteral_Can_not_override_chunk_size_if_c;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar2 = StringLiteral_Can_not_override_chunk_size_if_c;
    }
  }
  else {
    pSVar2 = StringLiteral_Not_power_of_2;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar2 = StringLiteral_Not_power_of_2;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
  return;
}


/* BytePacker GetBytePackerFromCubeDict(Dictionary`2[MV.WorldObject.IntVector,Cube], Boolean) */

BytePacker *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetBytePackerFromCubeDict
          (Dictionary_2_MV_WorldObject_IntVector_Cube_ *cubesDict,bool addCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cube>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cube>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(pBVar1,(MethodInfo *)0x0);
  if (cubesDict == (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)0x0) goto code_?;
  if (addCount != 0) {
    if (pBVar1 == (BytePacker *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pBVar1 = (BytePacker *)(*pcVar2)();
      return pBVar1;
    }
    iVar3 = (cubesDict->fields)._count - (cubesDict->fields)._freeCount;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Byte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pBVar4 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if (((((int)pBVar4->max_length == 0) ||
         (pBVar4->vector[0] = (uint8_t)((uint)iVar3 >> 0x18), (uint)pBVar4->max_length < 2)) ||
        (pBVar4->vector[1] = (uint8_t)((uint)iVar3 >> 0x10), (uint)pBVar4->max_length < 3)) ||
       (pBVar4->vector[2] = (uint8_t)((uint)iVar3 >> 8), (uint)pBVar4->max_length < 4)) {
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    pBVar4->vector[3] = (uint8_t)iVar3;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_2
              (pBVar1,pBVar4,0,(int32_t)pBVar4->max_length,(MethodInfo *)0x0);
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(cubesDict->fields)._version;
  uStack_11 = 2;
  uStack_12 = 0;
  uStack_13 = 0;
  DStack_14._version = (undefined4)uStack_10;
  DStack_14._index = uStack_10._4_4_;
  DStack_14._current.key.x = 0;
  DStack_14._current.key.y = 0;
  DStack_14._current.key.z = 0;
  DStack_14._current._6_2_ = 0;
  DStack_14._current.value = (Object *)0x0;
  DStack_14._getEnumeratorRetType = 2;
  DStack_14._36_4_ = 0;
  pDStack_6 = cubesDict;
  DStack_14._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)cubesDict;
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      (&DStack_14,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cube>__MoveNext__
                      );
    if (bVar15 == 0) {
      return pBVar1;
    }
    value = DStack_14._current.key.x;
    value_00 = DStack_14._current.key.y;
    value_01 = DStack_14._current.key.z;
    if (DStack_14._current.value == (Object *)0x0) break;
    pBVar4 = (Byte__Array *)DStack_14._current.value[1].monitor;
    materials = DStack_14._current.value[2].klass;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pBVar1 == (BytePacker *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
              (pBVar1,value,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
              (pBVar1,value_00,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
              (pBVar1,value_01,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCubeData
              (pBVar1,pBVar4,(Byte__Array *)materials,(MethodInfo *)0x0);
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (BytePacker *)(*pcVar2)();
  return pBVar1;
}


/* CubeModelChunk GetChunkFromCubePos(IntVector) */

CubeModelChunk *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetChunkFromCubePos
          (RuntimePrototypeCubeModel *this,IntVector *cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  chunkSize = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8.x = cubePos->x;
  IStackX_8.y = cubePos->y;
  IStackX_8.z = cubePos->z;
  pIVar1 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (aIStackX_10,&IStackX_8,chunkSize,(MethodInfo *)0x0);
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = pIVar1->x;
    IStackX_8.y = pIVar1->y;
    IStackX_8.z = pIVar1->z;
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar2 < 0) {
      return (CubeModelChunk *)0x0;
    }
    pDVar3 = (this_00->fields)._entries;
    if (pDVar3 != (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_CubeModelChunk___Array *)
                  0x0) {
      if ((uint)pDVar3->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pCVar5 = (CubeModelChunk *)(*pcVar4)();
        return pCVar5;
      }
      pCVar5 = pDVar3->vector[(int)uVar2].value;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)auStackX_20 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      return pCVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pCVar5 = (CubeModelChunk *)(*pcVar4)();
  return pCVar5;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                 (RuntimePrototypeCubeModel *this,IntVector *cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  chunkSize = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8.x = cubePos->x;
  IStackX_8.y = cubePos->y;
  IStackX_8.z = cubePos->z;
  pIVar1 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (aIStackX_10,&IStackX_8,chunkSize,(MethodInfo *)0x0);
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = pIVar1->x;
    IStackX_8.y = pIVar1->y;
    IStackX_8.z = pIVar1->z;
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__TryGetValue_MV__WorldObject__IntVector__CubeModelChunk__
                       ->klass->rgctx_data[0x21].method);
    if (-1 < (int)uVar2) {
      pDVar3 = (this_00->fields)._entries;
      if (pDVar3 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_CubeModelChunk___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar3->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pCVar5 = (Cube *)(*pcVar4)();
        return pCVar5;
      }
      pCStackX_20 = pDVar3->vector[(int)uVar2].value;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pCStackX_20 >> 0xc);
        lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      if (pCStackX_20 != (CubeModelChunk *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (pCStackX_20->fields).cells;
        uStack_10 = 0;
        uStack_11 = 0;
        if (this_01 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
          IStackX_8.x = cubePos->x;
          IStackX_8.y = cubePos->y;
          IStackX_8.z = cubePos->z;
          uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                            (this_01,&IStackX_8,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                             ->klass->rgctx_data[0x21].method);
          if ((int)uVar2 < 0) {
            return (Cube *)0x0;
          }
          pDVar12 = (this_01->fields)._entries;
          if (pDVar12 != (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_Cell___Array *)0x0)
          {
            if (uVar2 < (uint)pDVar12->max_length) {
              pCVar5 = pDVar12->vector[(int)uVar2].value.cube;
              if (iRam_? != 0) {
                uVar2 = (uint)((ulonglong)&uStack_10 >> 0xc);
                lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                  LOCK();
                  bVar9 = uVar7 == *puVar8;
                  if (bVar9) {
                    *puVar8 = uVar7 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              return pCVar5;
            }
            FUN_?();
            pcVar4 = (code *)swi(3);
            pCVar5 = (Cube *)(*pcVar4)();
            return pCVar5;
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pCVar5 = (Cube *)(*pcVar4)();
        return pCVar5;
      }
    }
    return (Cube *)0x0;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pCVar5 = (Cube *)(*pcVar4)();
  return pCVar5;
}


/* GameObject GetMesh() */

GameObject *
Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetMesh
          (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,(String *)0x0,(MethodInfo *)0x0);
  pDVar2 = (this->fields).chunks;
  if (pDVar2 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_R15,(MethodInfo *)0x0);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RDI._.m_CachedPtr,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_R15,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_R15,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    DStack_13._version = (undefined4)uStack_9;
    DStack_13._index = uStack_9._4_4_;
    DStack_13._current.key.x = 0;
    DStack_13._current.key.y = 0;
    DStack_13._current.key.z = 0;
    DStack_13._current._6_2_ = 0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    pDStack_5 = pDVar2;
    DStack_13._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_13,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      pOVar15 = DStack_13._current.value;
      if (bVar14 == 0) {
        return pGVar1;
      }
      unaff_R15 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                (unaff_R15,(String *)0x0,(MethodInfo *)0x0);
      if (unaff_R15 == (GameObject *)0x0) break;
      this_00 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (unaff_R15,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      this = (RuntimePrototypeCubeModel *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (unaff_R15,
                        UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                       );
      if (pOVar15 == (Object *)0x0) goto code_?;
      pOVar16 = pOVar15[2].klass;
      if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MeshFilter>_UnityEngine__MeshFilter_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      unaff_RDI._.m_CachedPtr =
           (Object_1__Fields)(((Component__Fields *)&(this->fields).OnChunkRebuilt)->_).m_CachedPtr;
      if (unaff_RDI._.m_CachedPtr == (void *)0x0) goto code_?;
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pOVar16 == (Object__Class *)0x0) {
        this = (RuntimePrototypeCubeModel *)0x0;
      }
      else {
        this = (RuntimePrototypeCubeModel *)(pOVar16->_0).name;
      }
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      (*pcRam_?)(unaff_RDI._.m_CachedPtr);
      if (this_00 == (Renderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                (this_00,(Material *)pOVar15[2].monitor,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (unaff_R15->fields)._.m_CachedPtr;
      if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      pvVar18 = (void *)(*pcRam_?)(this);
      unaff_RDI._.m_CachedPtr =
           (Object_1__Fields)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar18,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (pGVar1->fields)._.m_CachedPtr;
      if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      pvVar18 = (void *)(*pcRam_?)(this);
      this = (RuntimePrototypeCubeModel *)
             UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar18,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
      if (unaff_RDI._.m_CachedPtr == (void *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__RectTransform);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar19 = (Transform *)0x0;
      if (((Transform *)unaff_RDI._.m_CachedPtr)->klass ==
          (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar19 = (Transform *)unaff_RDI._.m_CachedPtr;
      }
      if (pTVar19 != (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)StringLiteral_Parent_of_RectTransform_is_being,
                   (Object_1 *)unaff_RDI._.m_CachedPtr,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                ((Transform *)unaff_RDI._.m_CachedPtr,(Transform *)this,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (unaff_R15->fields)._.m_CachedPtr;
      if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      pvVar18 = (void *)(*pcRam_?)(this);
      unaff_RDI._.m_CachedPtr =
           (Object_1__Fields)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar18,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI._.m_CachedPtr == (void *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (((Transform *)unaff_RDI._.m_CachedPtr)->fields)._._.m_CachedPtr;
      if (this == (void *)0x0) goto code_?;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      (*pcRam_?)(this);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (unaff_R15->fields)._.m_CachedPtr;
      if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      pvVar18 = (void *)(*pcRam_?)(this);
      this = (RuntimePrototypeCubeModel *)
             UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar18,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar20 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (this == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      uStack_21._0_4_ = (pQVar20->identityQuaternion).x;
      uStack_21._4_4_ = (pQVar20->identityQuaternion).y;
      uStack_22._0_4_ = (pQVar20->identityQuaternion).z;
      uStack_22._4_4_ = (pQVar20->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      unaff_RDI._.m_CachedPtr = ((Component__Fields *)&(this->fields).OnChunkRebuilt)->_;
      if (unaff_RDI._.m_CachedPtr == (void *)0x0) goto code_?;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      (*pcRam_?)(unaff_RDI._.m_CachedPtr,&uStack_21);
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar17)();
  return pGVar1;
}


/* Vector3 GetRandomCubePos(GameObject) */

Vector3 * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetRandomCubePos
                    (Vector3 *__return_storage_ptr__,RuntimePrototypeCubeModel *this,GameObject *go,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                           );
    pMVar1 = 
    System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
    ;
    if ((
        System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                   );
    }
    if (collection ==
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar2 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar2,pMVar1);
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pvVar5 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    this_02 = (List_1_MV_WorldObject_IntVector_ *)FUN_?(pvVar5);
    mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
    List_1_MV_WorldObject_IntVector___ctor_1
              (this_02,(IEnumerable_1_MV_WorldObject_IntVector_ *)collection,
               (pMVar1->field7_0x38).rgctx_data[2].method);
    this_01 = (this->fields).chunks;
    if (this_02 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      iVar6 = (this_02->fields)._size;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(), pcVar3 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar3 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar3)();
        return pVVar4;
      }
      pcRam_? = pcVar3;
      uVar8 = (*pcRam_?)(0,iVar6);
      if ((uint)(this_02->fields)._size <= uVar8) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar3)();
        return pVVar4;
      }
      pIVar9 = (this_02->fields)._items;
      if (pIVar9 != (IntVector__Array *)0x0) {
        if ((uint)pIVar9->max_length <= uVar8) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          pVVar4 = (Vector3 *)(*pcVar3)();
          return pVVar4;
        }
        if (this_01 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
          IStackX_8.x = pIVar9->vector[(int)uVar8].x;
          IStackX_8.y = pIVar9->vector[(int)uVar8].y;
          IStackX_8.z = pIVar9->vector[(int)uVar8].z;
          pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,
                               &IStackX_8,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                              );
          if (pOVar10 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__MV__WorldObject__IntVector);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_No_cube_found_in_chunk__This_is_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar11 = pOVar10[6].klass;
            if (pOVar11 != (Object__Class *)0x0) {
              if ((pOVar11->_0).byval_arg.data.__klassIndex - *(int *)&(pOVar11->_0).byval_arg.attrs <
                  1) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_No_cube_found_in_chunk__This_is_,
                           (MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__MV__WorldObject__IntVector);
                }
                pIVar12 = TypeInfo__MV__WorldObject__IntVector->static_fields;
                uVar13._0_2_ = (pIVar12->One).x;
                uVar13._2_2_ = (pIVar12->One).y;
                iVar14 = (pIVar12->One).z;
              }
              else {
                if (pOVar11 == (Object__Class *)0x0) goto code_?;
                uStack_15 = 0;
                uStack_16 = 0;
                if (iRam_? != 0) {
                  uVar8 = (uint)((ulonglong)&pOStack_17 >> 0xc);
                  uVar18 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                  do {
                    uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
                    puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
                    LOCK();
                    bVar21 = uVar19 == *puVar20;
                    if (bVar21) {
                      *puVar20 = uVar19 | 1L << (uVar8 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar21);
                }
                uStack_22 = 0;
                uStack_23 = 0;
                uStack_24 = 0;
                uVar13._0_2_ = 0;
                uVar13._2_2_ = 0;
                iVar14 = 0;
                pOStack_17 = pOVar11;
              }
              IStackX_8._0_4_ = uVar13;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (go != (GameObject *)0x0) {
                obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (go,(MethodInfo *)0x0);
                fStack_25 = (float)(int)iVar14;
                if (obj != (Transform *)0x0) {
                  uStack_26 = CONCAT44((float)(int)IStackX_8.y,(float)(int)(short)uVar13);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_27 = 0;
                  fStack_28 = 0.0;
                  pvVar5 = (obj->fields)._._.m_CachedPtr;
                  if (pvVar5 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar3 = (code *)swi(3);
                    pVVar4 = (Vector3 *)(*pcVar3)();
                    return pVVar4;
                  }
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar7 = func_?(&UNK_?);
                    FUN_?(uVar7,0);
                    pcVar3 = (code *)swi(3);
                    pVVar4 = (Vector3 *)(*pcVar3)();
                    return pVVar4;
                  }
                  pcRam_? = pcVar3;
                  (*pcRam_?)(pvVar5,&uStack_26,&uStack_27);
                  __return_storage_ptr__->x = (float)(undefined4)uStack_27;
                  __return_storage_ptr__->y = (float)uStack_27._4_4_;
                  __return_storage_ptr__->z = fStack_28;
                  return __return_storage_ptr__;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar3)();
  return pVVar4;
}


/* Int32 GetRefenceCountFromChunk(IntVector ByRef) */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::
        RuntimePrototypeCubeModel_GetRefenceCountFromChunk
                  (RuntimePrototypeCubeModel *this,IntVector *chunkPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = chunkPosition->x;
    IStackX_8.y = chunkPosition->y;
    IStackX_8.z = chunkPosition->z;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
    if (pOVar1 != (Object *)0x0) {
      return *(int32_t *)&pOVar1[5].monitor;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* String Guids() */

String * Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Guids
                   (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NA);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral_____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pDVar2 = (this->fields).chunks;
  if (pDVar2 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
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
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    DStack_13._version = (undefined4)uStack_9;
    DStack_13._index = uStack_9._4_4_;
    DStack_13._current.key.x = 0;
    DStack_13._current.key.y = 0;
    DStack_13._current.key.z = 0;
    DStack_13._current._6_2_ = 0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    pDStack_4 = pDVar2;
    DStack_13._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
               WorldObject::IntVector,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                         (&DStack_13,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                         );
      pOVar15 = DStack_13._current.value;
      uVar16 = DStack_13._current._0_8_;
      pSVar17 = StringLiteral_NA;
      if (bVar14 == 0) {
        return pSVar1;
      }
      uVar18 = DStack_13._current.key._0_4_;
      values = (String__Array *)FUN_?(TypeInfo__System__String);
      if (values == (String__Array *)0x0) break;
      if ((int)values->max_length == 0) goto code_?;
      values->vector[0] = pSVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)values->vector >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      IStackX_8.z = SUB82(uVar16,4);
      IStackX_8._0_4_ = uVar18;
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                          (&IStackX_8,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto code_?;
      values->vector[1] = pSVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 1) >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      iVar19 = iRam_?;
      if ((uint)values->max_length < 3) goto code_?;
      values->vector[2] = ::StringLiteral____;
      if (iVar19 != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 2) >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar19 = iRam_?;
        } while (!bVar8);
      }
      if ((uint)values->max_length < 4) goto code_?;
      values->vector[3] = pSVar17;
      iVar20 = 0;
      if (iVar19 != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 3) >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar20 = iRam_?;
        } while (!bVar8);
      }
      if ((uint)values->max_length < 5) goto code_?;
      values->vector[4] = ::StringLiteral_____;
      if (iVar20 != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 4) >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      if (pOVar15 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Func<System::String,_System::Guid,_System::String>);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CubeModelChunk____c);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar21 = pOVar15[1].monitor;
      if (pMVar21 == (MonitorData *)0x0) goto code_?;
      source = (IEnumerable_1_System_Guid_ *)
               FUN_?(pMVar21,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                            );
      if (*(int *)&(TypeInfo__CubeModelChunk____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar1 = ::StringLiteral__;
      this_00 = TypeInfo__CubeModelChunk____c->static_fields->__9__27_0;
      if (this_00 == (Func_3_String_Guid_String_ *)0x0) {
        if (*(int *)&(TypeInfo__CubeModelChunk____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__CubeModelChunk____c->static_fields->__9;
        this_00 = (Func_3_String_Guid_String_ *)
                  FUN_?(TypeInfo__System__Func<System::String,_System::Guid,_System::String>
                               );
        mscorlib.dll::System::Func`3[Object,Guid,Object]::Func_3_Object_Guid_Object___ctor
                  ((Func_3_Object_Guid_Object_ *)this_00,(Object *)object,
                   MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_,
                   (MethodInfo *)0x0);
        TypeInfo__CubeModelChunk____c->static_fields->__9__27_0 = this_00;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__CubeModelChunk____c->static_fields->__9__27_0 >> 0xc
                         );
          lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      pSVar1 = (String *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_Aggregate_1
                          (source,(Object *)pSVar1,(Func_3_Object_Guid_Object_ *)this_00,
                           System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
                          );
      if ((uint)values->max_length < 6) goto code_?;
      values->vector[5] = pSVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 5) >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar22)();
  return pSVar1;
}


/* Void HandleDelta() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_HandleDelta
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).deltaCubes;
  while (pDVar1 != (DeltaCubes *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
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
        List_1_System_Byte__InsertRange
                  (this_00,(this_00->fields)._size,(IEnumerable_1_System_Byte_ *)prototypeData,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   ->klass->rgctx_data[0x12].method);
      }
    }
    pDVar1 = (this->fields).deltaCubes;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean MeshGenerateDirtyChunks(Int32 ByRef) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_MeshGenerateDirtyChunks
               (RuntimePrototypeCubeModel *this,int32_t *meshUpdates,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
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
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MV_WorldObject_IntVector_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                         );
  FUN_?(this_00);
  pHVar1 = (this->fields).dirtyChunks;
  if (pHVar1 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    ppHStack_8 = (HashSet_1_MV_WorldObject_IntVector_ **)
                  ((ulonglong)(uint)(pHVar1->fields)._version << 0x20);
    uStack_9 = 0;
    lStack_10 = (longlong)ppHStack_8;
    uStack_11 = 0;
    uStack_3 = 0;
    ppHStack_8 = &pHStack_12;
    pHStack_12 = pHVar1;
    do {
      cVar13 = FUN_?(&pHStack_12,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                           );
      uVar14 = uStack_11;
      if (cVar13 == '\0') {
        if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
        break;
      }
      uVar15 = (undefined4)uStack_11;
      iVar16 = uStack_11._4_2_;
      aIStack_17[0].x = (int16_t)uStack_11;
      aIStack_17[0].y = uStack_11._2_2_;
      aIStack_17[0].z = uStack_11._4_2_;
      uStack_11 = uVar14;
      RuntimePrototypeCubeModel_RebuildChunk
                (this,aIStack_17,(this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
      uVar14 = uStack_11;
      if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
      uStack_11._0_2_ = (int16_t)uVar15;
      uStack_11._2_2_ = SUB42(uVar15,2);
      aIStack_18[0].x = (int16_t)uStack_11;
      aIStack_18[0].y = uStack_11._2_2_;
      aIStack_18[0].z = iVar16;
      uStack_11 = uVar14;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__AddIfNotPresent
                (this_00,aIStack_18,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 ->klass->rgctx_data[0x15].method);
      *meshUpdates = *meshUpdates + -1;
    } while (0 < *meshUpdates);
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_9 = 0;
    lStack_10 = (ulonglong)(uint)(this_00->fields)._version << 0x20;
    uStack_11 = 0;
    uStack_3 = 0;
    ppHStack_8 = &pHStack_12;
    pHStack_12 = this_00;
    while( true ) {
      cVar13 = FUN_?(&pHStack_12,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                           );
      uVar14 = uStack_11;
      if (cVar13 == '\0') {
        bVar19 = RuntimePrototypeCubeModel_MeshGenerateStatus(this,this_00,(MethodInfo *)0x0);
        return bVar19;
      }
      pHVar1 = (this->fields).dirtyChunks;
      if (pHVar1 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) break;
      aIStack_18[0].x = (int16_t)uStack_11;
      aIStack_18[0].y = uStack_11._2_2_;
      uStack_11._4_2_ = SUB82(uVar14,4);
      aIStack_18[0].z = uStack_11._4_2_;
      uStack_11 = uVar14;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__Remove
                (pHVar1,aIStack_18,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                );
    }
  }
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  bVar19 = (*pcVar20)();
  return bVar19;
}


/* Boolean MeshGenerateDirtyChunksAll(Int32 ByRef) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
               (RuntimePrototypeCubeModel *this,int32_t *meshUpdates,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
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
  this_00 = (HashSet_1_MV_WorldObject_IntVector_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                         );
  FUN_?(this_00);
  pHVar1 = (this->fields).dirtyChunks;
  if (pHVar1 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    iStack_8 = (pHVar1->fields)._version;
    uStack_9 = 0;
    uStack_3._0_4_ = SUB84(pHVar1,0);
    uStack_3._4_4_ = (undefined4)((ulonglong)pHVar1 >> 0x20);
    uStack_10 = (undefined4)uStack_3;
    uStack_11 = uStack_3._4_4_;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_3 = 0;
    puStack_14 = &uStack_10;
    while (cVar15 = FUN_?(&uStack_10), uVar16 = uStack_13, cVar15 != '\0') {
      uVar17 = (undefined4)uStack_13;
      iVar18 = uStack_13._4_2_;
      if (this_00 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
      aIStack_19[0].x = (int16_t)uStack_13;
      aIStack_19[0].y = uStack_13._2_2_;
      aIStack_19[0].z = uStack_13._4_2_;
      uStack_13 = uVar16;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
      HashSet_1_MV_WorldObject_IntVector__AddIfNotPresent
                (this_00,aIStack_19,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 ->klass->rgctx_data[0x15].method);
      uVar16 = uStack_13;
      uStack_13._0_2_ = (int16_t)uVar17;
      uStack_13._2_2_ = SUB42(uVar17,2);
      aIStack_20[0].x = (int16_t)uStack_13;
      aIStack_20[0].y = uStack_13._2_2_;
      aIStack_20[0].z = iVar18;
      uStack_13 = uVar16;
      RuntimePrototypeCubeModel_RebuildChunk
                (this,aIStack_20,(this->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
      *meshUpdates = *meshUpdates + -1;
    }
    pHVar1 = (this->fields).dirtyChunks;
    if (pHVar1 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      if (0 < (pHVar1->fields)._lastIndex) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar1->fields)._slots,0,(pHVar1->fields)._lastIndex,(MethodInfo *)0x0)
        ;
        pIVar21 = (pHVar1->fields)._buckets;
        if (pIVar21 == (Int32__Array *)0x0) goto code_?;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar1->fields)._buckets,0,(int32_t)pIVar21->max_length,
                   (MethodInfo *)0x0);
        (pHVar1->fields)._count = 0;
        (pHVar1->fields)._lastIndex = 0;
        (pHVar1->fields)._freeList = -1;
      }
      piVar22 = &(pHVar1->fields)._version;
      *piVar22 = *piVar22 + 1;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar23 = (this->fields).DirtyChunksRegenerated;
      if (pAVar23 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0)
      {
        (*(pAVar23->fields)._._.invoke_impl)
                  ((pAVar23->fields)._._.method_code,this_00,(pAVar23->fields)._._.method);
        pHVar1 = (this->fields).dirtyChunks;
        if (pHVar1 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
          bVar7 = (pHVar1->fields)._count == 0;
          if (bVar7) {
            (this->fields).meshGeneratePriority = 0;
          }
          return bVar7;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
}


/* Boolean MeshGenerateStatus(HashSet`1[MV.WorldObject.IntVector]) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateStatus
               (RuntimePrototypeCubeModel *this,HashSet_1_MV_WorldObject_IntVector_ *generatedChunks
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__get_Count__
                 );
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void RebuildChunk(IntVector, Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunk
               (RuntimePrototypeCubeModel *this,IntVector *chunkPos,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_Chunk_not_contained_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunks;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = chunkPos->x;
    IStackX_8.y = chunkPos->y;
    IStackX_8.z = chunkPos->z;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Chunk_not_contained_,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).chunks;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
      IStackX_8.x = chunkPos->x;
      IStackX_8.y = chunkPos->y;
      IStackX_8.z = chunkPos->z;
      this_00 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,&IStackX_8
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          );
      if (this_00 != (CubeModelChunk *)0x0) {
        CubeModelChunk::CubeModelChunk_RebuildChunk(this_00,scale,(MethodInfo *)0x0);
        if ((this->fields).OnChunkRebuilt == (Action_1_MV_WorldObject_IntVector_ *)0x0) {
          return;
        }
        pAVar3 = (this->fields).OnChunkRebuilt;
        IStackX_8.x = chunkPos->x;
        IStackX_8.y = chunkPos->y;
        IStackX_8.z = chunkPos->z;
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,&IStackX_8,(pAVar3->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RebuildChunks() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildChunks
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key.x = 0;
  DStack_12._current.key.y = 0;
  DStack_12._current.key.z = 0;
  DStack_12._current._6_2_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDStack_1;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    if (bVar13 == 0) {
      return;
    }
    if ((CubeModelChunk *)DStack_12._current.value == (CubeModelChunk *)0x0) break;
    CubeModelChunk::CubeModelChunk_RebuildChunk
              ((CubeModelChunk *)DStack_12._current.value,(this->fields)._Scale_k__BackingField,
               (MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RebuildPrototypeMesh() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RebuildPrototypeMesh
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key.x = 0;
  DStack_12._current.key.y = 0;
  DStack_12._current.key.z = 0;
  DStack_12._current._6_2_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDStack_1;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    if (bVar13 == 0) {
      return;
    }
    if ((CubeModelChunk *)DStack_12._current.value == (CubeModelChunk *)0x0) break;
    CubeModelChunk::CubeModelChunk_RebuildChunk
              ((CubeModelChunk *)DStack_12._current.value,(this->fields)._Scale_k__BackingField,
               (MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveAllCubesLocal() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveAllCubesLocal
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).chunks;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Keys__
                           );
    pMVar1 = 
    System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
    ;
    if ((
        System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                   );
    }
    if (collection ==
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar2 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar2,pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    this_01 = (List_1_MV_WorldObject_IntVector_ *)FUN_?(pvVar4);
    mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
    List_1_MV_WorldObject_IntVector___ctor_1
              (this_01,(IEnumerable_1_MV_WorldObject_IntVector_ *)collection,
               (pMVar1->field7_0x38).rgctx_data[2].method);
    if (this_01 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      iStack_10 = (this_01->fields)._version;
      uStack_11 = 0;
      uStack_6._0_4_ = SUB84(this_01,0);
      uStack_6._4_4_ = (undefined4)((ulonglong)this_01 >> 0x20);
      uStack_12 = (undefined4)uStack_6;
      uStack_13 = uStack_6._4_4_;
      uStack_14 = 0;
      uStack_15 = 0;
      uStack_6 = 0;
      puStack_16 = &uStack_12;
      while( true ) {
        cVar17 = FUN_?(&uStack_12,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                              );
        uVar18 = uStack_15;
        if (cVar17 == '\0') {
          return;
        }
        uVar19 = (undefined4)uStack_15;
        iVar20 = uStack_15._4_2_;
        pDVar21 = (this->fields).chunks;
        if (pDVar21 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0)
        goto code_?;
        IStackX_8.x = (int16_t)uStack_15;
        IStackX_8.y = uStack_15._2_2_;
        IStackX_8.z = uStack_15._4_2_;
        uStack_15 = uVar18;
        this_02 = (CubeModelChunk *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar21,
                             &IStackX_8,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                            );
        if (this_02 == (CubeModelChunk *)0x0) break;
        CubeModelChunk::CubeModelChunk_Destroy(this_02,(MethodInfo *)0x0);
        uVar18 = uStack_15;
        pDVar21 = (this->fields).chunks;
        if (pDVar21 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
          FUN_?();
          break;
        }
        uStack_15._0_2_ = (int16_t)uVar19;
        uStack_15._2_2_ = SUB42(uVar19,2);
        aIStackX_18[0].x = (int16_t)uStack_15;
        aIStackX_18[0].y = uStack_15._2_2_;
        aIStackX_18[0].z = iVar20;
        uStack_15 = uVar18;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar21,aIStackX_18,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                  );
        uVar18 = uStack_15;
        uStack_15._0_2_ = (int16_t)uVar19;
        uStack_15._2_2_ = SUB42(uVar19,2);
        aIStack_22[0].x = (int16_t)uStack_15;
        aIStack_22[0].y = uStack_15._2_2_;
        aIStack_22[0].z = iVar20;
        uStack_15 = uVar18;
        RuntimePrototypeCubeModel_RemoveChunk(this,aIStack_22,(MethodInfo *)0x0);
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveChunk(IntVector) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveChunk
               (RuntimePrototypeCubeModel *this,IntVector *chunkPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).instances;
  if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iStack_9 = (pHVar1->fields)._version;
  uStack_10 = 0;
  uStack_4._0_4_ = SUB84(pHVar1,0);
  uStack_4._4_4_ = (undefined4)((ulonglong)pHVar1 >> 0x20);
  uStack_11 = (undefined4)uStack_4;
  uStack_12 = uStack_4._4_4_;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_4 = 0;
  puStack_15 = &uStack_11;
  while( true ) {
    cVar16 = FUN_?(&uStack_11,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
    if (cVar16 == '\0') {
      return;
    }
    key = (int32_t)uStack_14;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar17 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar18 = (pMVar17->fields).game;
    if (pMVar18 == (MVNetworkGame *)0x0) break;
    if (((pMVar18->fields).worldNetwork == (WorldNetwork *)0x0) ||
       (pMVar19 = (((pMVar18->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar19 == (MVWorldObjectClientManagerNetwork *)0x0)) {
code_?:
      FUN_?();
      break;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOStackX_20 = (Object *)0x0;
    this_00 = (pMVar19->fields)._.worldObjects;
    if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_20,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    pOVar20 = pOStackX_20;
    pOVar21 = pOStackX_20;
    if (pOStackX_20 == (Object *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?(pOVar21);
      goto code_?;
    }
    bVar22 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((((pOStackX_20->klass->_1).naturalAligment < bVar22) ||
        ((MVCubeModelBase__Class *)(pOStackX_20->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
         TypeInfo__MVCubeModelBase)) || (pOStackX_20 == (Object *)0x0)) goto code_?;
    pMVar23 = pOStackX_20[0x14].monitor;
    if (pMVar23 == (MonitorData *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(longlong *)(pMVar23 + 0x10) == 0) goto code_?;
    lVar24 = FUN_?(auStack_25);
    obj = *(Object_1 **)(lVar24 + 0x10);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar21 = (Object *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
    if ((ChunkInstances *)pOVar20[0x14].monitor == (ChunkInstances *)0x0) goto code_?;
    aIStack_26[0].x = chunkPos->x;
    aIStack_26[0].y = chunkPos->y;
    aIStack_26[0].z = chunkPos->z;
    ChunkInstances::ChunkInstances_Remove
              ((ChunkInstances *)pOVar20[0x14].monitor,aIStack_26,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean RemoveCube(IntVector) */

bool Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveCube
               (RuntimePrototypeCubeModel *this,IntVector *iVector,MethodInfo *method)

{
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
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8.x = iVector->x;
  IStackX_8.y = iVector->y;
  IStackX_8.z = iVector->z;
  pIVar2 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (&IStackX_10,&IStackX_8,iVar1,(MethodInfo *)0x0);
  pDVar3 = (this->fields).chunks;
  uVar4._0_2_ = pIVar2->x;
  uVar4._2_2_ = pIVar2->y;
  iVar5 = pIVar2->z;
  if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8._0_4_ = uVar4;
    IStackX_8.z = iVar5;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    pDVar3 = (this->fields).chunks;
    if ((pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar5,
       pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          ), pOVar6 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar6[6].klass != (Object__Class *)0x0) {
        IStackX_8.x = iVector->x;
        IStackX_8.y = iVector->y;
        IStackX_8.z = iVector->z;
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                          ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)pOVar6[6].klass,&IStackX_8
                           ,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                            ->klass->rgctx_data[0x21].method);
        if (iVar1 < 0) {
          return 0;
        }
        IStackX_8.x = iVector->x;
        IStackX_8.y = iVector->y;
        IStackX_8.z = iVector->z;
        RuntimePrototypeCubeModel_RemoveFromChunk
                  (this,&IStackX_8,MeshGeneratePriority__Enum_HighGenerateAllDirty,(MethodInfo *)0x0
                  );
        this_00 = (this->fields).deltaCubes;
        if (this_00 != (DeltaCubes *)0x0) {
          IStackX_8.x = iVector->x;
          IStackX_8.y = iVector->y;
          IStackX_8.z = iVector->z;
          DeltaCubes::DeltaCubes_Enqueue
                    (this_00,&IStackX_8,CubeAction__Enum_Deleted,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void RemoveCubeNetworkUpdate(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_RemoveCubeNetworkUpdate
               (RuntimePrototypeCubeModel *this,IntVector *iVector,
               MeshGeneratePriority__Enum priority,MethodInfo *method)

{
  aIStack_1[0].x = iVector->x;
  aIStack_1[0].y = iVector->y;
  aIStack_1[0].z = iVector->z;
  RuntimePrototypeCubeModel_RemoveFromChunk(this,aIStack_1,priority,(MethodInfo *)0x0);
  return;
}


/* Void RemoveFromChunk(IntVector, MeshGeneratePriority) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveFromChunk
               (RuntimePrototypeCubeModel *this,IntVector *iVector,
               MeshGeneratePriority__Enum meshGeneratePriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).chunkSize;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IStackX_8.x = iVector->x;
  IStackX_8.y = iVector->y;
  IStackX_8.z = iVector->z;
  pIVar2 = SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
                     (&IStackX_10,&IStackX_8,iVar1,(MethodInfo *)0x0);
  pDVar3 = (this->fields).chunks;
  uVar4._0_2_ = pIVar2->x;
  uVar4._2_2_ = pIVar2->y;
  iVar5 = pIVar2->z;
  if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8._0_4_ = uVar4;
    IStackX_8.z = iVar5;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pDVar3 = (this->fields).chunks;
    if ((pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
       (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar5,
       pCVar6 = (CubeModelChunk *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                          ), pCVar6 != (CubeModelChunk *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar7 = (pCVar6->fields).cells;
      if (pDVar7 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
        IStackX_8.x = iVector->x;
        IStackX_8.y = iVector->y;
        IStackX_8.z = iVector->z;
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                          (pDVar7,&IStackX_8,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar1) {
          pDVar7 = (pCVar6->fields).cells;
          if (pDVar7 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)
          goto code_?;
          IStackX_8.x = iVector->x;
          IStackX_8.y = iVector->y;
          IStackX_8.z = iVector->z;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]
          ::Dictionary_2_MV_WorldObject_IntVector_Cell__Remove
                    (pDVar7,&IStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                    );
          IStackX_8.x = iVector->x;
          IStackX_8.y = iVector->y;
          IStackX_8.z = iVector->z;
          CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
                    (pCVar6,&IStackX_8,(MethodInfo *)0x0);
          piVar8 = &(pCVar6->fields).cubeCount;
          *piVar8 = *piVar8 + -1;
        }
        pDVar3 = (this->fields).chunks;
        if ((pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
           (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar5,
           pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                     IntVector,System::Object]::
                     Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                               ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,
                                &IStackX_8,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                               ), pOVar9 != (Object *)0x0)) {
          if (*(int *)&pOVar9[5].klass != 0) {
            IStackX_8._0_4_ = uVar4;
            IStackX_8.z = iVar5;
            RuntimePrototypeCubeModel_AddToDirtyChunks
                      (this,&IStackX_8,meshGeneratePriority,(MethodInfo *)0x0);
            return;
          }
          pDVar3 = (this->fields).chunks;
          if ((pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) &&
             (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar5,
             pCVar6 = (CubeModelChunk *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      IntVector,System::Object]::
                      Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,
                                 &IStackX_8,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                                ), pCVar6 != (CubeModelChunk *)0x0)) {
            CubeModelChunk::CubeModelChunk_Destroy(pCVar6,(MethodInfo *)0x0);
            pDVar3 = (this->fields).chunks;
            if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
              IStackX_8._0_4_ = uVar4;
              IStackX_8.z = iVar5;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar3,&IStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Remove_MV__WorldObject__IntVector_
                        );
              IStackX_8._0_4_ = uVar4;
              IStackX_8.z = iVar5;
              RuntimePrototypeCubeModel_RemoveChunk(this,&IStackX_8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RemoveInstance(Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
               (RuntimePrototypeCubeModel *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
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
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = chunkPosition->x;
    IStackX_8.y = chunkPosition->y;
    IStackX_8.z = chunkPosition->z;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,System::Object]::
             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                       );
    if (pOVar1 != (Object *)0x0) {
      *(int *)&pOVar1[5].monitor = *(int *)&pOVar1[5].monitor + -1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveReferenceFromAllChunks() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::
     RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
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
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    *(int *)&DStack_11._current.value[5].monitor = *(int *)&DStack_11._current.value[5].monitor + -1
    ;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReplaceCube(IntVector, Byte) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
               (RuntimePrototypeCubeModel *this,IntVector *iVector,uint8_t materialId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)0x0;
  alStack_2[0] = 0;
  apCStack_3[0] = (Cube *)CONCAT26(apCStack_3[0]._6_2_,*iVector);
  cube = RuntimePrototypeCubeModel_GetCube(this,(IntVector *)apCStack_3,(MethodInfo *)0x0);
  apCStack_3[0] = cube;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeRef__MV__WorldObject__Face;
  if (cube == (Cube *)0x0) {
    return;
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar4 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar5 = FUN_?(pIVar4,1);
    plVar1 = (longlong *)FUN_?(lVar5 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar6);
    paramName = (String *)func_?(&StringLiteral_enumType);
    pFVar7 = (Face__Enum__Class *)0x0;
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar6 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar6);
code_?:
    FUN_?();
code_?:
    plVar1 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar1,pFVar7);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    this_01 = (Array *)(**(code **)(*plVar1 + 0x888))(plVar1);
    if (this_01 == (Array *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pIStack_9 = mscorlib.dll::System::Array::Array_GetEnumerator(this_01,(MethodInfo *)0x0);
    uStack_10 = 0;
    ppIStack_11 = &pIStack_9;
    plStack_12 = alStack_2;
    while (pIStack_9 != (IEnumerator *)0x0) {
      cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      pIVar14 = pIStack_9;
      if (cVar13 == '\0') {
        alStack_2[0] = FUN_?(pIStack_9,TypeInfo__System__IDisposable);
        if (alStack_2[0] != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,alStack_2[0]);
        }
        apCStack_3[0] = (Cube *)CONCAT26(apCStack_3[0]._6_2_,*iVector);
        RuntimePrototypeCubeModel_AddToChunk
                  (this,(IntVector *)apCStack_3,cube,
                   MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaCubes;
        if (this_00 != (DeltaCubes *)0x0) {
          apCStack_3[0] = (Cube *)CONCAT26(apCStack_3[0]._6_2_,*iVector);
          DeltaCubes::DeltaCubes_Enqueue
                    (this_00,(IntVector *)apCStack_3,
                     (CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),3),(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (pIStack_9 == (IEnumerator *)0x0) goto code_?;
      pIVar15 = pIStack_9->klass;
      uVar16 = 0;
      uVar17._0_1_ = (pIVar15->_1).rank;
      uVar17._1_1_ = (pIVar15->_1).minimumAlignment;
      if (uVar17 != 0) {
        do {
          if (pIVar15->interfaceOffsets[uVar16].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar18 = &(pIVar15->vtable).MoveNext + (pIVar15->interfaceOffsets[uVar16].offset + 1);
            goto code_?;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar17);
      }
      pVVar18 = (VirtualInvokeData *)
                FUN_?(pIStack_9,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      plVar1 = (longlong *)(*pVVar18->methodPtr)(pIVar14,pVVar18->method);
      if (plVar1 == (longlong *)0x0) goto code_?;
      pFVar7 = TypeInfo__MV__WorldObject__Face;
      if (*(Il2CppClass **)(*plVar1 + 0x40) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      uVar19 = *(uint *)(plVar1 + 2);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      pBVar20 = (cube->fields)._.faceMaterials;
      if (pBVar20 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar20->max_length <= uVar19) goto code_?;
      pBVar20->vector[(int)uVar19] = materialId;
    }
  }
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetSharedMaterials(MVCubeModelInstance) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ResetSharedMaterials
               (RuntimePrototypeCubeModel *this,MVCubeModelInstance *cm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
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
  lStack_9 = 0;
  lStack_10 = 0;
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
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    pOVar13 = DStack_11._current.value;
    if (bVar12 == 0) {
      return;
    }
    if (cm == (MVCubeModelInstance *)0x0) goto code_?;
    pCVar14 = (cm->fields)._.chunkInstances;
    if (pCVar14 == (ChunkInstances *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pCVar14->fields).chunkInstances ==
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
code_?:
      FUN_?();
      break;
    }
    plVar15 = (longlong *)FUN_?(auStack_16);
    pDStack_1 = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)*plVar15;
    uStack_7 = plVar15[1];
    lStack_9 = plVar15[2];
    lStack_10 = plVar15[3];
    lStack_17 = plVar15[6];
    if (pOVar13 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if ((Renderer *)plVar15[4] == (Renderer *)0x0) {
      FUN_?();
      goto code_?;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)plVar15[4],(Material *)pOVar13[2].monitor,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetInstanceDataRef(IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetInstanceDataRef
               (RuntimePrototypeCubeModel *this,IntVector *chunkPos,MVCubeModelBase *cubeInstance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunks;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    IStackX_8.x = chunkPos->x;
    IStackX_8.y = chunkPos->y;
    IStackX_8.z = chunkPos->z;
    this_01 = (CubeModelChunk *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,&IStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                        );
    if (this_01 != (CubeModelChunk *)0x0) {
      IStackX_8.x = chunkPos->x;
      IStackX_8.y = chunkPos->y;
      IStackX_8.z = chunkPos->z;
      CubeModelChunk::CubeModelChunk_SetInstanceDataRef
                (this_01,&IStackX_8,cubeInstance,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetMaterial(IntVector, Face, Byte) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetMaterial
               (RuntimePrototypeCubeModel *this,IntVector *iVector,Face__Enum face,
               uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStack_1[0].x = iVector->x;
  aIStack_1[0].y = iVector->y;
  aIStack_1[0].z = iVector->z;
  cube = RuntimePrototypeCubeModel_GetCube(this,aIStack_1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cube == (Cube *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar2 = (cube->fields)._.faceMaterials;
  if (pBVar2 != (Byte__Array *)0x0) {
    if ((Face__Enum)pBVar2->max_length <= face) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    aIStack_1[0].x = iVector->x;
    aIStack_1[0].y = iVector->y;
    aIStack_1[0].z = iVector->z;
    pBVar2->vector[(int)face] = materialId;
    RuntimePrototypeCubeModel_AddToChunk
              (this,aIStack_1,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
               (MethodInfo *)0x0);
    this_00 = (this->fields).deltaCubes;
    if (this_00 != (DeltaCubes *)0x0) {
      aIStack_1[0].x = iVector->x;
      aIStack_1[0].y = iVector->y;
      aIStack_1[0].z = iVector->z;
      DeltaCubes::DeltaCubes_Enqueue
                (this_00,aIStack_1,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),3),
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_SetVisibility
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunks;
  if (pDStack_1 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
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
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    pOVar13 = DStack_11._current.value;
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CubeModelChunk);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cells = pOVar13[6].klass;
    if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
      FUN_?();
    }
    CubeModelChunk::CubeModelChunk_SetCubeVisibility_2
              ((Dictionary_2_MV_WorldObject_IntVector_Cell_ *)cells,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnIndentCubeFace(IntVector, Face, Cube) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UnIndentCubeFace
               (RuntimePrototypeCubeModel *this,IntVector *localPos,Face__Enum face,Cube *cube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnIndentCubeFace);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_UnIndentCubeFace,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cube != (Cube *)0x0) {
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    Cube::Cube_UnIndentFace(cube,face,(MethodInfo *)0x0);
    aIStack_1[0].x = localPos->x;
    aIStack_1[0].y = localPos->y;
    aIStack_1[0].z = localPos->z;
    RuntimePrototypeCubeModel_AddToChunk
              (this,aIStack_1,cube,MeshGeneratePriority__Enum_HighGenerateAllDirty,1,
               (MethodInfo *)0x0);
    this_00 = (this->fields).deltaCubes;
    if (this_00 == (DeltaCubes *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    aIStack_1[0].x = localPos->x;
    aIStack_1[0].y = localPos->y;
    aIStack_1[0].z = localPos->z;
    DeltaCubes::DeltaCubes_Enqueue
              (this_00,aIStack_1,(CubeAction__Enum)CONCAT71((int7)((ulonglong)cube >> 8),4),
               (MethodInfo *)0x0);
  }
  return;
}


/* Void UpdatePrototype(BytePacker) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
               (RuntimePrototypeCubeModel *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RuntimePrototypeCubeModel_DecodeBytePacker(bp,this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 1) {
      return;
    }
    pHStack_2 = (this->fields).instances;
    if (pHStack_2 != (HashSet_1_System_Int32_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pHStack_2 >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      lVar8 = _UNK_?;
      pHVar9 = _UNK_?;
      lStack_10 = (ulonglong)(uint)(pHStack_2->fields)._version << 0x20;
      uStack_11 = 0;
      lStack_12 = lStack_10;
      uStack_13 = 0;
      pHStack_14 = pHStack_2;
code_?:
      cVar15 = FUN_?(&pHStack_14,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
      if (cVar15 == '\0') {
        return;
      }
      key = (int32_t)uStack_13;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar16 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar17 = (pMVar16->fields).game;
      if (pMVar17 != (MVNetworkGame *)0x0) {
        if (((pMVar17->fields).worldNetwork != (WorldNetwork *)0x0) &&
           (pMVar18 = (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager,
           pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOStackX_10 = (Object *)0x0;
          this_00 = (pMVar18->fields)._.worldObjects;
          if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            pOVar19 = pOStackX_10;
            if (pOStackX_10 != (Object *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  if (*(int *)&pOStackX_10[3].monitor != 0) {
    iVar21 = *(int *)&pOStackX_10[3].monitor;
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar17 != (MVNetworkGame *)0x0) {
      this_01 = (pMVar17->fields).playerContainer;
      if (this_01 != (MVPlayerContainer *)0x0) {
        pMVar22 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (pMVar22 != (MVLocalPlayer *)0x0) {
          if (iVar21 != (pMVar22->fields)._._ActorNr_k__BackingField) {
            pOVar23 = pOVar19->klass;
            pHStack_2 = pHVar9;
            lStack_10 = lVar8;
            (**(code **)&pOVar23[3]._1.naturalAligment)
                      (pOVar19,&pHStack_2,pOVar23[3].vtable.Equals.methodPtr);
          }
          goto code_?;
        }
        FUN_?();
      }
      FUN_?();
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
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  goto code_?;
}


/* Void UpdatePrototypeScale(Single) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
               (RuntimePrototypeCubeModel *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])0x0;
  puStack_2 = (undefined1 *)0x0;
  pMStack_3 = (MVCubeModelBase *)0x0;
  (this->fields)._Scale_k__BackingField = scale;
  this_03 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
  pHVar4 = (this->fields).instances;
  pHStack_5 = this_03;
  if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pHStack_7 >> 0xc);
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
    puStack_12 = (undefined1 *)((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
    uStack_13 = 0;
    puStack_14 = puStack_12;
    uStack_15 = 0;
    uStack_16 = 0;
    ppHStack_17 = &pHStack_18;
    pHStack_7 = pHVar4;
    pHStack_18 = pHVar4;
code_?:
    cVar19 = FUN_?(&pHStack_18,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
    if (cVar19 != '\0') {
      key = (int32_t)uStack_15;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar20 != (MVGameControllerBase *)0x0) {
        pMVar21 = (pMVar20->fields).game;
        if (pMVar21 != (MVNetworkGame *)0x0) {
          if (((pMVar21->fields).worldNetwork != (WorldNetwork *)0x0) &&
             (pMVar22 = (((pMVar21->fields).worldNetwork)->fields)._.worldObjectClientManager,
             pMVar22 != (MVWorldObjectClientManagerNetwork *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOStackX_20 = (Object *)0x0;
            this_00 = (pMVar22->fields)._.worldObjects;
            if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
            goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pHStack_7 >> 0xc);
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
      puStack_12 = (undefined1 *)
                   ((ulonglong)(uint)*(int32_t *)((longlong)&(this_03->fields)._slots + 4) << 0x20);
      uStack_13 = 0;
      puStack_2 = puStack_12;
      pMStack_3 = (MVCubeModelBase *)0x0;
      uStack_16 = 0;
      ppHStack_17 = (HashSet_1_System_Int32_ **)auStack_1;
      pHStack_7 = this_03;
      auStack_1 = (undefined1  [8])this_03;
      while (bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                                ), bVar23 != 0) {
        if (pMStack_3 == (MVCubeModelBase *)0x0) goto code_?;
        this_01 = (pMStack_3->fields).prototypeCubeModel;
        if (this_01 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        RuntimePrototypeCubeModel_RebuildChunks(this_01,(MethodInfo *)0x0);
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pHStack_7 >> 0xc);
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
      puStack_12 = (undefined1 *)
                   ((ulonglong)(uint)*(int32_t *)((longlong)&(this_03->fields)._slots + 4) << 0x20);
      uStack_13 = 0;
      puStack_2 = puStack_12;
      pMStack_3 = (MVCubeModelBase *)0x0;
      pHStack_7 = (HashSet_1_System_Int32_ *)0x0;
      puStack_12 = auStack_1;
      auStack_1 = (undefined1  [8])this_03;
      while( true ) {
        bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCubeModelInstance>__MoveNext__
                           );
        this_02 = pMStack_3;
        if (bVar23 == 0) {
          return;
        }
        fVar24 = (this->fields)._Scale_k__BackingField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar26 = (pVVar25->oneVector).x;
        uVar27 = (pVVar25->oneVector).y;
        if (this_02 == (MVCubeModelBase *)0x0) break;
        pHStack_5 = (HashSet_1_System_Int32_ *)CONCAT44((float)uVar27 * fVar24,(float)uVar26 * fVar24);
        fStack_28 = (pVVar25->oneVector).z * fVar24;
        (*(this_02->klass->vtable).set_Scale.methodPtr)
                  (this_02,&pHStack_5,(this_02->klass->vtable).set_Scale.method);
        MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency(this_02,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
code_?:
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_20,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  if (pOStackX_20 != (Object *)0x0) {
    pOVar30 = pOStackX_20->klass;
    bVar31 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((bVar31 <= (pOVar30->_1).naturalAligment) &&
        ((MVCubeModelInstance__Class *)(pOVar30->_1).typeHierarchy[(ulonglong)bVar31 - 1] ==
         TypeInfo__MVCubeModelInstance)) && (pOStackX_20 != (Object *)0x0)) {
      if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
        bVar31 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if ((bVar31 <= (pOVar30->_1).naturalAligment) &&
           ((MVCubeModelInstance__Class *)(pOVar30->_1).typeHierarchy[(ulonglong)bVar31 - 1] ==
            TypeInfo__MVCubeModelInstance)) {
          FUN_?(this_03,pOStackX_20,
                        MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                       );
          goto code_?;
        }
        FUN_?(pOStackX_20);
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
      FUN_?();
      goto code_?;
    }
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* RuntimePrototypeCubeModel() */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor
               (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeltaCubes);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeId = -1;
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  pIVar1 = TypeRef__RuntimePrototypeCubeModel;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 == (Il2CppType *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pIVar1,1);
    type = (Type *)FUN_?(lVar2 + 0x20);
  }
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).logger = pIVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).logger >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pHVar9 = (HashSet_1_MV_WorldObject_IntVector_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                        );
  FUN_?(pHVar9);
  bVar5 = iRam_? != 0;
  (this->fields).dirtyChunks = pHVar9;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).dirtyChunks >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  (this->fields).useMeshGeneratePrioritySystem = 1;
  (this->fields).chunkSize = 0x20;
  (this->fields).prototypeState = 1;
  pLVar10 = (List_1_System_Byte_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  FUN_?(pLVar10);
  bVar5 = iRam_? != 0;
  (this->fields).pendingDeltaCubes = pLVar10;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).pendingDeltaCubes >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  this_01 = (DeltaCubes *)FUN_?(TypeInfo__DeltaCubes);
  DeltaCubes::DeltaCubes__ctor(this_01,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).deltaCubes = this_01;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).deltaCubes >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  this_02 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
            );
  bVar5 = iRam_? != 0;
  (this->fields).chunks = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)this_02;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).chunks >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pHVar11 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar11,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar5 = iRam_? != 0;
  (this->fields).instances = pHVar11;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).instances >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[]) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeltaCubes);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeId = -1;
  this_01 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  pIVar2 = TypeRef__RuntimePrototypeCubeModel;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar2 == (Il2CppType *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar2,1);
    type = (Type *)FUN_?(lVar3 + 0x20);
  }
  if (this_01 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar5 = LoggerManager::LoggerManager_GetLogger(this_01,type,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).logger = pIVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).logger >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pHVar11 = (HashSet_1_MV_WorldObject_IntVector_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                         );
  FUN_?(pHVar11);
  bVar6 = iRam_? != 0;
  (this->fields).dirtyChunks = pHVar11;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).dirtyChunks >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).useMeshGeneratePrioritySystem = 1;
  (this->fields).chunkSize = 0x20;
  (this->fields).prototypeState = 1;
  pLVar12 = (List_1_System_Byte_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  FUN_?(pLVar12);
  bVar6 = iRam_? != 0;
  (this->fields).pendingDeltaCubes = pLVar12;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).pendingDeltaCubes >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_02 = (DeltaCubes *)FUN_?(TypeInfo__DeltaCubes);
  DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).deltaCubes = this_02;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).deltaCubes >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_03 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
            );
  bVar6 = iRam_? != 0;
  (this->fields).chunks = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)this_03;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).chunks >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pHVar13 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar13,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar6 = iRam_? != 0;
  (this->fields).instances = pHVar13;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).instances >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._Scale_k__BackingField = scale;
  (this->fields).prototypeId = id;
  (this->fields)._AuthorProfileID_k__BackingField = authorProfileId;
  this_04 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(this_04,data,(MethodInfo *)0x0)
  ;
  RuntimePrototypeCubeModel_CreateFromBytePackage(this,this_04,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_SetVisibility(this,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_RebuildPrototypeMesh(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prototypeId_is__1_which_means_th);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pendingDeltaCubes_Count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeState = 0;
  if ((this->fields).prototypeId != -1) {
    pIVar5 = (this->fields).logger;
    if ((this->fields).pendingDeltaCubes != (List_1_System_Byte_ *)0x0) {
      pSVar14 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0x00000010,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_pendingDeltaCubes_Count_,pSVar14,(MethodInfo *)0x0);
      if (pIVar5 != (ILogger *)0x0) {
        FUN_?(0,TypeInfo__ILogger,pIVar5);
        pLVar12 = (this->fields).pendingDeltaCubes;
        if (pLVar12 != (List_1_System_Byte_ *)0x0) {
          if ((pLVar12->fields)._size < 1) {
            return;
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          pLVar12 = (this->fields).pendingDeltaCubes;
          worldInventoryID = (this->fields).prototypeId;
          if ((pLVar12 != (List_1_System_Byte_ *)0x0) &&
             (prototypeData =
                   (Byte__Array *)
                   FUN_?(pLVar12,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                ), this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                      (this_00,worldInventoryID,prototypeData,(MethodInfo *)0x0);
            pLVar12 = (this->fields).pendingDeltaCubes;
            if (pLVar12 != (List_1_System_Byte_ *)0x0) {
              piVar15 = &(pLVar12->fields)._version;
              *piVar15 = *piVar15 + 1;
              (pLVar12->fields)._size = 0;
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar14 = StringLiteral_prototypeId_is__1_which_means_th;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar16 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar16 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar16,0,pSVar14,uVar1,unaff_RBX);
  return;
}


/* RuntimePrototypeCubeModel(Int32, Int32, Single, Byte[], Int32) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_2
               (RuntimePrototypeCubeModel *this,int32_t id,int32_t authorProfileId,float scale,
               Byte__Array *data,int32_t chunkSize,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeltaCubes);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeId = -1;
  this_01 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  pIVar2 = TypeRef__RuntimePrototypeCubeModel;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar2 == (Il2CppType *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar2,1);
    type = (Type *)FUN_?(lVar3 + 0x20);
  }
  if (this_01 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar5 = LoggerManager::LoggerManager_GetLogger(this_01,type,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).logger = pIVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).logger >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pHVar11 = (HashSet_1_MV_WorldObject_IntVector_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                         );
  FUN_?(pHVar11);
  bVar6 = iRam_? != 0;
  (this->fields).dirtyChunks = pHVar11;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).dirtyChunks >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).useMeshGeneratePrioritySystem = 1;
  (this->fields).chunkSize = 0x20;
  (this->fields).prototypeState = 1;
  pLVar12 = (List_1_System_Byte_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  FUN_?(pLVar12);
  bVar6 = iRam_? != 0;
  (this->fields).pendingDeltaCubes = pLVar12;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).pendingDeltaCubes >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_02 = (DeltaCubes *)FUN_?(TypeInfo__DeltaCubes);
  DeltaCubes::DeltaCubes__ctor(this_02,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).deltaCubes = this_02;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).deltaCubes >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_03 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__Dictionary__
            );
  bVar6 = iRam_? != 0;
  (this->fields).chunks = (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)this_03;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).chunks >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pHVar13 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar13);
  bVar6 = iRam_? != 0;
  (this->fields).instances = pHVar13;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).instances >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_power_of_2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_not_override_chunk_size_if_c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChunkSize_overwritten);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_ChunkSize_overwritten,(MethodInfo *)0x0);
  if ((chunkSize & chunkSize - 1U) == 0) {
    iVar14 = RuntimePrototypeCubeModel_get_CubeCount(this,(MethodInfo *)0x0);
    if (iVar14 < 1) {
      (this->fields).chunkSize = chunkSize;
      goto code_?;
    }
    pSVar15 = StringLiteral_Can_not_override_chunk_size_if_c;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar15 = StringLiteral_Can_not_override_chunk_size_if_c;
    }
  }
  else {
    pSVar15 = StringLiteral_Not_power_of_2;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar15 = StringLiteral_Not_power_of_2;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar15,(MethodInfo *)0x0);
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._Scale_k__BackingField = scale;
  (this->fields).prototypeId = id;
  (this->fields)._AuthorProfileID_k__BackingField = authorProfileId;
  this_04 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(this_04,data,(MethodInfo *)0x0)
  ;
  RuntimePrototypeCubeModel_CreateFromBytePackage(this,this_04,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_SetVisibility(this,(MethodInfo *)0x0);
  RuntimePrototypeCubeModel_RebuildPrototypeMesh(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prototypeId_is__1_which_means_th);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pendingDeltaCubes_Count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeState = 0;
  if ((this->fields).prototypeId != -1) {
    pIVar5 = (this->fields).logger;
    if ((this->fields).pendingDeltaCubes != (List_1_System_Byte_ *)0x0) {
      pSVar15 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0x00000010,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_pendingDeltaCubes_Count_,pSVar15,(MethodInfo *)0x0);
      if (pIVar5 != (ILogger *)0x0) {
        FUN_?(0,TypeInfo__ILogger,pIVar5);
        pLVar12 = (this->fields).pendingDeltaCubes;
        if (pLVar12 != (List_1_System_Byte_ *)0x0) {
          if ((pLVar12->fields)._size < 1) {
            return;
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          pLVar12 = (this->fields).pendingDeltaCubes;
          iVar14 = (this->fields).prototypeId;
          if ((pLVar12 != (List_1_System_Byte_ *)0x0) &&
             (prototypeData =
                   (Byte__Array *)
                   FUN_?(pLVar12,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                ), this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                      (this_00,iVar14,prototypeData,(MethodInfo *)0x0);
            pLVar12 = (this->fields).pendingDeltaCubes;
            if (pLVar12 != (List_1_System_Byte_ *)0x0) {
              piVar16 = &(pLVar12->fields)._version;
              *piVar16 = *piVar16 + 1;
              (pLVar12->fields)._size = 0;
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar15 = StringLiteral_prototypeId_is__1_which_means_th;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar17 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar17 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar17,0,pSVar15,uVar1,unaff_RBX);
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
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pDVar2 = (this->fields).chunks;
  if (pDVar2 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    DStack_12._version = (undefined4)uStack_10;
    DStack_12._index = uStack_10._4_4_;
    DStack_12._current.key.x = 0;
    DStack_12._current.key.y = 0;
    DStack_12._current.key.z = 0;
    DStack_12._current._6_2_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_6 = pDVar2;
    DStack_12._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar2;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        (&DStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                        );
      if (bVar13 == 0) {
        return iVar1;
      }
      if (DStack_12._current.value == (Object *)0x0) break;
      iVar1 = iVar1 + *(int *)&DStack_12._current.value[5].klass;
    }
  }
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* Int32 get_DeltaCubesCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::
        RuntimePrototypeCubeModel_get_DeltaCubesCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  pDVar1 = (this->fields).deltaCubes;
  if (pDVar1 != (DeltaCubes *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar2 = (pDVar1->fields).cubeChange;
    if (pQVar2 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
    {
      return (pQVar2->fields)._size;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields).instances;
  this_00 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
  ;
  comparer = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
             EqualityComparer_1_System_Int32__get_Default
                       (MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                        ->klass->rgctx_data->method);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor_4
            (this_00,(IEnumerable_1_System_Int32_ *)collection,
             (IEqualityComparer_1_System_Int32_ *)comparer,pMVar1->klass->rgctx_data[8].method);
  return this_00;
}


/* Int32 get_InstancesCount() */

int32_t Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                  (RuntimePrototypeCubeModel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).instances;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    return (pHVar1->fields)._count;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_PrototypeState(PrototypeState) */

void Assembly-CSharp.dll::RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
               (RuntimePrototypeCubeModel *this,PrototypeState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prototypeId_is__1_which_means_th);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pendingDeltaCubes_Count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).prototypeState = value;
  if (value == PrototypeState__Enum_Pending) {
    (this->fields).prototypeId = -1;
    return;
  }
  if ((this->fields).prototypeId != -1) {
    pLVar1 = (this->fields).pendingDeltaCubes;
    pIVar2 = (this->fields).logger;
    if (pLVar1 != (List_1_System_Byte_ *)0x0) {
      aIStackX_10[0].m_value = (pLVar1->fields)._size;
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_pendingDeltaCubes_Count_,pSVar3,(MethodInfo *)0x0);
      if (pIVar2 != (ILogger *)0x0) {
        FUN_?(0,TypeInfo__ILogger,pIVar2);
        pLVar1 = (this->fields).pendingDeltaCubes;
        if (pLVar1 != (List_1_System_Byte_ *)0x0) {
          if ((pLVar1->fields)._size < 1) {
            return;
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          pLVar1 = (this->fields).pendingDeltaCubes;
          worldInventoryID = (this->fields).prototypeId;
          if ((pLVar1 != (List_1_System_Byte_ *)0x0) &&
             (prototypeData =
                   (Byte__Array *)
                   FUN_?(pLVar1,
                                 MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                ), this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                      (this_00,worldInventoryID,prototypeData,(MethodInfo *)0x0);
            pLVar1 = (this->fields).pendingDeltaCubes;
            if (pLVar1 != (List_1_System_Byte_ *)0x0) {
              piVar4 = &(pLVar1->fields)._version;
              *piVar4 = *piVar4 + 1;
              (pLVar1->fields)._size = 0;
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar3 = StringLiteral_prototypeId_is__1_which_means_th;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,0,pSVar3);
  return;
}

