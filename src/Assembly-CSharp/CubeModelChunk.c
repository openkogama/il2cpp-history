
/* Void AddToChunk(IntVector, Cube, Boolean) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AddToChunk
               (CubeModelChunk *this,IntVector *iVector,Cube *cube,bool setVisibility,
               MethodInfo *method)

{
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
  pDVar1 = (this->fields).cells;
  if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  IStackX_8.x = iVector->x;
  IStackX_8.y = iVector->y;
  IStackX_8.z = iVector->z;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]
          ::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                    (pDVar1,&IStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                     ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    piVar4 = &(this->fields).cubeCount;
    *piVar4 = *piVar4 + 1;
  }
  pDVar1 = (this->fields).cells;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pCStack_7 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  pCStack_7 = cube;
  if ((cube != (Cube *)0x0) &&
     (uStack_5 = (ulonglong)(((cube->fields)._.unIndentedSides & 0x3f) != 0x3f),
     pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    CStack_11._8_8_ = uStack_5;
    CStack_11.cube = cube;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
    Dictionary_2_MV_WorldObject_IntVector_Cell__TryInsert
              (pDVar1,&IStackX_8,&CStack_11,CONCAT31(in_register_00000089,1),
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
               ->klass->rgctx_data[0x22].method);
    if (setVisibility != 0) {
      IStackX_8.x = iVector->x;
      IStackX_8.y = iVector->y;
      IStackX_8.z = iVector->z;
      CubeModelChunk_SetCubeVisibilityWithNeighbors(this,&IStackX_8,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AdvancedFaceVisibilityTest(FaceFlags, FaceFlags, Cube ByRef, Cube ByRef) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AdvancedFaceVisibilityTest
               (FaceFlags__Enum faceFlagCube,FaceFlags__Enum faceFlagOpposite,Cube **cube,
               Cube **neighborCube,MethodInfo *method)

{
  bVar1 = (byte)faceFlagOpposite;
  FVar2 = faceFlagOpposite & 0xff;
  bVar3 = (byte)faceFlagCube;
  FVar4 = faceFlagCube & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  face_00 = Face__Enum_Left;
  if (bVar3 < 9) {
    if (FVar4 == FaceFlags__Enum_Top) {
code_?:
      face = Face__Enum_Top;
    }
    else if (FVar4 == FaceFlags__Enum_Bottom) {
      face = Face__Enum_Bottom;
    }
    else {
      if (FVar4 == (FaceFlags__Enum_Bottom|FaceFlags__Enum_Top)) goto code_?;
      if (FVar4 == FaceFlags__Enum_Front) {
        face = Face__Enum_Front;
      }
      else {
        if (bVar3 != 8) goto code_?;
        face = Face__Enum_Back;
      }
    }
  }
  else if (bVar3 == 0x10) {
    face = Face__Enum_Left;
  }
  else {
    if (bVar3 != 0x20) goto code_?;
    face = Face__Enum_Right;
  }
  pCVar5 = *cube;
  if (pCVar5 == (Cube *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar6 = (pCVar5->fields)._.byteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                     (pBVar6,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVStackX_18 = Cube::Cube_GetFace_1(pVVar7,face,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar8 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder(face,&pVStackX_18,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (bVar1 < 9) {
    if (FVar2 == FaceFlags__Enum_Top) {
code_?:
      face_00 = Face__Enum_Top;
    }
    else if (FVar2 == FaceFlags__Enum_Bottom) {
      face_00 = Face__Enum_Bottom;
    }
    else {
      if (FVar2 == (FaceFlags__Enum_Bottom|FaceFlags__Enum_Top)) goto code_?;
      if (FVar2 == FaceFlags__Enum_Front) {
        face_00 = Face__Enum_Front;
      }
      else {
        if (bVar1 != 8) goto code_?;
        face_00 = Face__Enum_Back;
      }
    }
  }
  else if (bVar1 != 0x10) {
    if (bVar1 != 0x20) goto code_?;
    face_00 = Face__Enum_Right;
  }
  pCVar5 = *neighborCube;
  if (pCVar5 != (Cube *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pBVar6 = (pCVar5->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                       (pBVar6,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    apVStack_9[0] = Cube::Cube_GetFace_1(pVVar7,face_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar8 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder(face_00,apVStack_9,(MethodInfo *)0x0)
    ;
    if (bVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&UNK_? + (longlong)(int)face * 4) + 0xADDR))
              ((code *)((ulonglong)*(uint *)(&UNK_? + (longlong)(int)face * 4) + 0xADDR
                       ));
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean AllFaceCornersIsTouchingCubeBorder(Face, Vector3[] ByRef) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
               (Face__Enum face,Vector3__Array **faceIndices,MethodInfo *method)

{
  uVar1 = 0;
  fVar2 = _UNK_?;
  uVar3 = 0xffffffff;
  switch(face) {
  case Face__Enum_Top:
    uVar3 = 1;
    break;
  case Face__Enum_Bottom:
    uVar3 = 1;
    fVar2 = _UNK_?;
    break;
  case Face__Enum_Front:
    uVar3 = 2;
    fVar2 = _UNK_?;
    break;
  case Face__Enum_Back:
    uVar3 = 2;
    break;
  case Face__Enum_Left:
    fVar2 = _UNK_?;
  case Face__Enum_Right:
    uVar3 = uVar1;
  }
  pVVar4 = *faceIndices;
  if (pVVar4 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  uVar7 = (uint)pVVar4->max_length;
  pVVar8 = pVVar4->vector;
  while( true ) {
    if ((int)uVar7 <= (int)uVar1) {
      return 1;
    }
    if (uVar7 <= uVar1) break;
    uVar9 = pVVar8->x;
    fVar10 = pVVar8->y;
    if (uVar3 == 0) {
      fVar10 = (float)uVar9;
    }
    else if (uVar3 == 1) {
    }
    else {
      if (uVar3 != 2) {
        uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar11);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,(MethodInfo *)0x0);
        uVar11 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(this,uVar11);
        break;
      }
      fVar10 = pVVar8->z;
    }
    if (fVar10 != fVar2) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    pVVar8 = pVVar8 + 1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void ChunkInstancesChanged(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_ChunkInstancesChanged
               (CubeModelChunk *this,Object *sender,ChunkInstancesChanged *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChunkInstances);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryAdd_System__Guid__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryGetValue_System__Guid__ChunkInstances__ChunkInstanceVariables__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelChunk___ChunkInstanceCh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_remove_instance_becuas);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  uStack_2 = 0;
  pGStack_3 = (GameObject *)0x0;
  uStack_4._0_1_ = 0;
  uStack_4._1_7_ = 0;
  uStack_5 = 0;
  GStack_6._a = 0;
  GStack_6._b = 0;
  GStack_6._c = 0;
  GStack_6._d = 0;
  GStack_6._e = 0;
  GStack_6._f = 0;
  GStack_6._g = 0;
  GStack_6._h = 0;
  GStack_6._i = 0;
  GStack_6._j = 0;
  GStack_6._k = 0;
  pGStack_7 = (GameObject *)0x0;
  pBStack_8 = (BoxCollider *)0x0;
  pMStack_9 = (MeshRenderer *)0x0;
  pMStack_10 = (MeshFilter *)0x0;
  pMStack_11 = (MeshRenderer *)0x0;
  pMStack_12 = (MeshFilter *)0x0;
  GStack_13._a = 0;
  GStack_13._b = 0;
  GStack_13._c = 0;
  GStack_13._d = 0;
  GStack_13._e = 0;
  GStack_13._f = 0;
  GStack_13._g = 0;
  GStack_13._h = 0;
  GStack_13._i = 0;
  GStack_13._j = 0;
  GStack_13._k = 0;
  pGStack_14 = (GameObject *)0x0;
  pBStack_15 = (BoxCollider *)0x0;
  pMStack_16 = (MeshRenderer *)0x0;
  pMStack_17 = (MeshFilter *)0x0;
  if (sender == (Object *)0x0) goto code_?;
  pOVar18 = sender->klass;
  bVar19 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
  if (((pOVar18->_1).naturalAligment < bVar19) ||
     ((MVCubeModelBase__Class *)(pOVar18->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
      TypeInfo__MVCubeModelBase)) {
    bVar19 = (TypeInfo__ChunkInstances->_1).naturalAligment;
    if ((bVar19 <= (pOVar18->_1).naturalAligment) &&
       ((pOVar18->_1).typeHierarchy[(ulonglong)bVar19 - 1] == (Il2CppClass *)TypeInfo__ChunkInstances
       )) goto code_?;
  }
  else {
    sender = (Object *)sender[0x14].monitor;
    if ((ChunkInstances *)sender != (ChunkInstances *)0x0) {
code_?:
      if (e == (ChunkInstancesChanged *)0x0) {
code_?:
        FUN_?();
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      sVar21 = (this->fields).chunkPos.z;
      uVar22._0_2_ = (e->fields).chunkPos.x;
      uVar22._2_2_ = (e->fields).chunkPos.y;
      sVar23 = (e->fields).chunkPos.z;
      uVar24._0_2_ = (this->fields).chunkPos.x;
      uVar24._2_2_ = (this->fields).chunkPos.y;
      aIStack_25[0]._0_4_ = uVar24;
      uStack_26 = uVar22;
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__IntVector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__IntVector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((undefined2)uVar22 != (int16_t)uVar24) {
        return;
      }
      if (uStack_26._2_2_ != aIStack_25[0].y) {
        return;
      }
      if (sVar23 != sVar21) {
        return;
      }
      if ((e->fields).changeType == 0) {
        uVar27._0_2_ = (e->fields).chunkPos.x;
        uVar27._2_2_ = (e->fields).chunkPos.y;
        iVar28 = (e->fields).chunkPos.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar29 = (((ChunkInstances *)sender)->fields).chunkInstances;
        if (pDVar29 !=
            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          aIStack_25[0]._0_4_ = uVar27;
          aIStack_25[0].z = iVar28;
          puVar30 = (undefined8 *)FUN_?(auStack_31,pDVar29,aIStack_25);
          pDVar32 = (this->fields).instances;
          uVar33 = puVar30[6];
          pGVar34 = (GameObject *)puVar30[2];
          pBVar35 = (BoxCollider *)puVar30[3];
          pMVar36 = (MeshRenderer *)puVar30[4];
          pMVar37 = (MeshFilter *)puVar30[5];
          uVar38 = *puVar30;
          uVar39 = puVar30[1];
          CStack_40.gameObject = pGVar34;
          CStack_40.collider = pBVar35;
          CStack_40.renderer = pMVar36;
          CStack_40.filter = pMVar37;
          CStack_40._48_8_ = uVar33;
          if (pDVar32 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
            uVar41 = 0;
            GStack_42._0_8_ = uVar38;
            GStack_42._8_8_ = uVar39;
            CStack_40.guid._0_8_ = uVar38;
            CStack_40.guid._8_8_ = uVar39;
            bVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Guid,ChunkInstances+ChunkInstanceVariables]::
                     Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryInsert
                               (pDVar32,&GStack_42,&CStack_40,InsertionBehavior__Enum_None,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryAdd_System__Guid__ChunkInstances__ChunkInstanceVariables_
                                ->klass->rgctx_data[0x22].method);
            if (bVar43 != 0) {
              return;
            }
            pDVar32 = (this->fields).instances;
            if (pDVar32 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
              GStack_42._0_8_ = uVar38;
              GStack_42._8_8_ = uVar39;
              CStack_40.guid._0_8_ = uVar38;
              CStack_40.guid._8_8_ = uVar39;
              CStack_40.gameObject = pGVar34;
              CStack_40.collider = pBVar35;
              CStack_40.renderer = pMVar36;
              CStack_40.filter = pMVar37;
              CStack_40._48_8_ = uVar33;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Guid,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryInsert
                        (pDVar32,&GStack_42,&CStack_40,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar41 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
          }
        }
        goto code_?;
      }
      if ((e->fields).changeType != 1) {
        if ((e->fields).changeType == 2) {
          pUVar44 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar44,(Object *)this,
                     MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                     ,(MethodInfo *)0x0);
          ChunkInstances::ChunkInstances_remove_Changed
                    ((ChunkInstances *)sender,(EventHandler_1_ChunkInstancesChanged_ *)pUVar44,
                     (MethodInfo *)0x0);
          pDVar32 = (this->fields).instances;
          if (pDVar32 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
            iVar45 = (pDVar32->fields)._count;
            if (0 < iVar45) {
              pIVar46 = (pDVar32->fields)._buckets;
              if (pIVar46 == (Int32__Array *)0x0) goto code_?;
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pDVar32->fields)._buckets,0,(int32_t)pIVar46->max_length,
                         (MethodInfo *)0x0);
              (pDVar32->fields)._count = 0;
              (pDVar32->fields)._freeList = -1;
              (pDVar32->fields)._freeCount = 0;
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pDVar32->fields)._entries,0,iVar45,(MethodInfo *)0x0);
            }
            piVar47 = &(pDVar32->fields)._version;
            *piVar47 = *piVar47 + 1;
            return;
          }
          goto code_?;
        }
        if ((e->fields).changeType == 3) {
          uVar48._0_2_ = (e->fields).chunkPos.x;
          uVar48._2_2_ = (e->fields).chunkPos.y;
          iVar28 = (e->fields).chunkPos.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar29 = (((ChunkInstances *)sender)->fields).chunkInstances;
          if (pDVar29 ==
              (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
          goto code_?;
          aIStack_25[0]._0_4_ = uVar48;
          aIStack_25[0].z = iVar28;
          piVar47 = (int32_t *)FUN_?(auStack_31,pDVar29,aIStack_25);
          pDVar32 = (this->fields).instances;
          CStack_40.renderer = *(MeshRenderer **)(piVar47 + 8);
          CStack_40.filter = *(MeshFilter **)(piVar47 + 10);
          iVar45 = *piVar47;
          iVar49 = piVar47[1];
          iVar50 = piVar47[2];
          iVar51 = piVar47[3];
          CStack_40.gameObject = *(GameObject **)(piVar47 + 4);
          CStack_40.collider = *(BoxCollider **)(piVar47 + 6);
          CStack_40._48_8_ = *(undefined8 *)(piVar47 + 0xc);
          if (pDVar32 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
          goto code_?;
          GStack_42._0_8_ = *(undefined8 *)piVar47;
          GStack_42._8_8_ = *(undefined8 *)(piVar47 + 2);
          cVar52 = FUN_?(pDVar32,&GStack_42,&GStack_6);
          if (cVar52 == '\0') {
            return;
          }
          if ((char)uStack_2 != '\0') {
            return;
          }
          pDVar32 = (this->fields).instances;
          pBStack_53 = pBStack_8;
          GStack_54._a = GStack_6._a;
          GStack_54._b = GStack_6._b;
          GStack_54._c = GStack_6._c;
          GStack_54._d = GStack_6._d;
          GStack_54._e = GStack_6._e;
          GStack_54._f = GStack_6._f;
          GStack_54._g = GStack_6._g;
          GStack_54._h = GStack_6._h;
          GStack_54._i = GStack_6._i;
          GStack_54._j = GStack_6._j;
          GStack_54._k = GStack_6._k;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pBStack_53 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          pGStack_3 = pGStack_7;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pGStack_3 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          pMStack_12 = pMStack_10;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pMStack_12 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          pMStack_11 = pMStack_9;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pMStack_11 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          uStack_4._0_1_ = 1;
          uStack_4._1_7_ = 0;
        }
        else {
          if ((e->fields).changeType != 4) {
            return;
          }
          uVar60._0_2_ = (e->fields).chunkPos.x;
          uVar60._2_2_ = (e->fields).chunkPos.y;
          iVar28 = (e->fields).chunkPos.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar29 = (((ChunkInstances *)sender)->fields).chunkInstances;
          if (pDVar29 ==
              (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
          goto code_?;
          aIStack_25[0]._0_4_ = uVar60;
          aIStack_25[0].z = iVar28;
          piVar47 = (int32_t *)FUN_?(auStack_31,pDVar29,aIStack_25);
          pDVar32 = (this->fields).instances;
          CStack_40.renderer = *(MeshRenderer **)(piVar47 + 8);
          CStack_40.filter = *(MeshFilter **)(piVar47 + 10);
          iVar45 = *piVar47;
          iVar49 = piVar47[1];
          iVar50 = piVar47[2];
          iVar51 = piVar47[3];
          CStack_40.gameObject = *(GameObject **)(piVar47 + 4);
          CStack_40.collider = *(BoxCollider **)(piVar47 + 6);
          CStack_40._48_8_ = *(undefined8 *)(piVar47 + 0xc);
          if (pDVar32 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
          goto code_?;
          GStack_42._0_8_ = *(undefined8 *)piVar47;
          GStack_42._8_8_ = *(undefined8 *)(piVar47 + 2);
          cVar52 = FUN_?(pDVar32,&GStack_42,&GStack_13);
          if (cVar52 == '\0') {
            return;
          }
          if ((char)uStack_5 == '\0') {
            return;
          }
          pDVar32 = (this->fields).instances;
          pBStack_53 = pBStack_15;
          GStack_54._a = GStack_13._a;
          GStack_54._b = GStack_13._b;
          GStack_54._c = GStack_13._c;
          GStack_54._d = GStack_13._d;
          GStack_54._e = GStack_13._e;
          GStack_54._f = GStack_13._f;
          GStack_54._g = GStack_13._g;
          GStack_54._h = GStack_13._h;
          GStack_54._i = GStack_13._i;
          GStack_54._j = GStack_13._j;
          GStack_54._k = GStack_13._k;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pBStack_53 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          pGStack_3 = pGStack_14;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pGStack_3 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          pMStack_12 = pMStack_17;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pMStack_12 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          pMStack_11 = pMStack_16;
          if (iRam_? != 0) {
            uVar55 = (uint)((ulonglong)&pMStack_11 >> 0xc);
            lVar56 = (ulonglong)((uVar55 & 0x1fffff) >> 6) * 8;
            do {
              uVar57 = *(ulonglong *)(lVar56 + 0xADDR);
              puVar58 = (ulonglong *)(lVar56 + 0xADDR);
              LOCK();
              bVar59 = uVar57 == *puVar58;
              if (bVar59) {
                *puVar58 = uVar57 | 1L << (uVar55 & 0x3f);
              }
              UNLOCK();
            } while (!bVar59);
          }
          uStack_4._0_1_ = 0;
          uStack_4._1_7_ = 0;
        }
        if (pDVar32 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          CStack_40.guid._a = GStack_54._a;
          CStack_40.guid._b = GStack_54._b;
          CStack_40.guid._c = GStack_54._c;
          CStack_40.guid._d = GStack_54._d;
          CStack_40.guid._e = GStack_54._e;
          CStack_40.guid._f = GStack_54._f;
          CStack_40.guid._g = GStack_54._g;
          CStack_40.guid._h = GStack_54._h;
          CStack_40.guid._i = GStack_54._i;
          CStack_40.guid._j = GStack_54._j;
          CStack_40.guid._k = GStack_54._k;
          CStack_40.gameObject = pGStack_3;
          CStack_40.collider = pBStack_53;
          CStack_40.renderer = pMStack_11;
          CStack_40.filter = pMStack_12;
          CStack_40.transparent = (bool)uStack_4;
          CStack_40._49_7_ = uStack_4._1_7_;
          GStack_42._b = (short)iVar49;
          GStack_42._c = (short)((uint)iVar49 >> 0x10);
          GStack_42._a = iVar45;
          GStack_42._h = (char)iVar51;
          GStack_42._i = (char)((uint)iVar51 >> 8);
          GStack_42._j = (char)((uint)iVar51 >> 0x10);
          GStack_42._k = (char)((uint)iVar51 >> 0x18);
          GStack_42._d = (char)iVar50;
          GStack_42._e = (char)((uint)iVar50 >> 8);
          GStack_42._f = (char)((uint)iVar50 >> 0x10);
          GStack_42._g = (char)((uint)iVar50 >> 0x18);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Guid,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryInsert
                    (pDVar32,&GStack_42,&CStack_40,0x82dc2701,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
        goto code_?;
      }
      uVar61._0_2_ = (e->fields).chunkPos.x;
      uVar61._2_2_ = (e->fields).chunkPos.y;
      iVar28 = (e->fields).chunkPos.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__ContainsKey_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar29 = (((ChunkInstances *)sender)->fields).chunkInstances;
      if (pDVar29 ==
          (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
      goto code_?;
      aIStack_25[0]._0_4_ = uVar61;
      aIStack_25[0].z = iVar28;
      iVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,ChunkInstances+ChunkInstanceVariables]::
               Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__FindEntry
                         (pDVar29,aIStack_25,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar45) {
        uVar62._0_2_ = (e->fields).chunkPos.x;
        uVar62._2_2_ = (e->fields).chunkPos.y;
        iVar28 = (e->fields).chunkPos.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar29 = (((ChunkInstances *)sender)->fields).chunkInstances;
        if (pDVar29 !=
            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          aIStack_25[0]._0_4_ = uVar62;
          aIStack_25[0].z = iVar28;
          puVar30 = (undefined8 *)FUN_?(auStack_31,pDVar29,aIStack_25);
          uVar33 = *puVar30;
          uVar38 = puVar30[1];
          pUVar44 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar44,(Object *)this,
                     MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                     ,(MethodInfo *)0x0);
          ChunkInstances::ChunkInstances_remove_Changed
                    ((ChunkInstances *)sender,(EventHandler_1_ChunkInstancesChanged_ *)pUVar44,
                     (MethodInfo *)0x0);
          pDVar32 = (this->fields).instances;
          if (pDVar32 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
            GStack_42._0_8_ = uVar33;
            GStack_42._8_8_ = uVar38;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Guid,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                      (pDVar32,&GStack_42,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                      );
            return;
          }
        }
        goto code_?;
      }
      pSVar1 = StringLiteral_Could_not_remove_instance_becuas;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar1 = StringLiteral_Could_not_remove_instance_becuas;
      }
      goto code_?;
    }
  }
  plVar63 = (longlong *)FUN_?(&(pOVar18->_0).byval_arg);
  str0 = StringLiteral_CubeModelChunk___ChunkInstanceCh;
  if (plVar63 != (longlong *)0x0) {
    pSVar1 = (String *)(**(code **)(*plVar63 + 0x168))(plVar63,*(undefined8 *)(*plVar63 + 0x170));
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* CubeModelChunk CloneGeometry(Single) */

CubeModelChunk *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CloneGeometry
          (CubeModelChunk *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Add_MV__WorldObject__IntVector__Cell_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_2_ = (this->fields).chunkPos.x;
  uVar1._2_2_ = (this->fields).chunkPos.y;
  iVar2 = (this->fields).chunkPos.z;
  pCVar3 = (CubeModelChunk *)FUN_?(TypeInfo__CubeModelChunk);
  aIStack_4[0]._0_4_ = uVar1;
  aIStack_4[0].z = iVar2;
  CubeModelChunk__ctor(pCVar3,aIStack_4,(MethodInfo *)0x0);
  pDVar5 = (this->fields).cells;
  if (pDVar5 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
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
    uStack_12 = (ulonglong)(uint)(pDVar5->fields)._version;
    uStack_13 = 2;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = uStack_12;
    uStack_18 = 0;
    pCStack_19 = (Cube *)0x0;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 2;
    uStack_23 = 0;
    uStack_24 = 0;
    ppDStack_25 = &pDStack_26;
    pDStack_7 = pDVar5;
    pDStack_26 = pDVar5;
    while (cVar27 = FUN_?(&pDStack_26), original = pCStack_19, cVar27 != '\0') {
      if (pCVar3 == (CubeModelChunk *)0x0) goto code_?;
      pDVar5 = (pCVar3->fields).cells;
      uVar1 = (undefined4)uStack_18;
      iVar2 = uStack_18._4_2_;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Cube);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCStack_28 = Cube::Cube_Clone_1(original,(MethodInfo *)0x0);
      uVar29 = uStack_18;
      uStack_30 = 0;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pCStack_28 >> 0xc);
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
      if (pCStack_28 == (Cube *)0x0) goto code_?;
      uStack_30 = (ulonglong)(((pCStack_28->fields)._.unIndentedSides & 0x3f) != 0x3f);
      if (pDVar5 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      aCStack_31[0]._8_8_ = uStack_30;
      uStack_18._0_2_ = (int16_t)uVar1;
      uStack_18._2_2_ = SUB42(uVar1,2);
      aIStack_4[0].x = (int16_t)uStack_18;
      aIStack_4[0].y = uStack_18._2_2_;
      aIStack_4[0].z = iVar2;
      uStack_18 = uVar29;
      aCStack_31[0].cube = pCStack_28;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__TryInsert
                (pDVar5,aIStack_4,aCStack_31,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCStack_28 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Add_MV__WorldObject__IntVector__Cell_
                 ->klass->rgctx_data[0x22].method);
    }
    if (pCVar3 != (CubeModelChunk *)0x0) {
      (pCVar3->fields).cubeCount = (this->fields).cubeCount;
      CubeModelChunk_RebuildChunk(pCVar3,scale,(MethodInfo *)0x0);
      return pCVar3;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar32 = (code *)swi(3);
  pCVar3 = (CubeModelChunk *)(*pcVar32)();
  return pCVar3;
}


/* Boolean CompareGeometry(CubeModelChunk) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CompareGeometry
               (CubeModelChunk *this,CubeModelChunk *chunk,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCStack_1 = (Cube *)0x0;
  uStack_2 = 0;
  pDVar3 = (this->fields).cells;
  if (pDVar3 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    if ((chunk != (CubeModelChunk *)0x0) &&
       (pDVar4 = (chunk->fields).cells, pDVar4 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0
       )) {
      if ((pDVar3->fields)._count - (pDVar3->fields)._freeCount !=
          (pDVar4->fields)._count - (pDVar4->fields)._freeCount) {
        return 0;
      }
      pDStack_5 = (this->fields).cells;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pDStack_5 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_11 = (ulonglong)(uint)(pDStack_5->fields)._version;
      uStack_12 = 2;
      uStack_13 = 0;
      uStack_14 = 0;
      uStack_15 = 0;
      uStack_16 = uStack_11;
      uStack_17 = 0;
      pCStack_18 = (Cube *)0x0;
      uStack_19 = 0;
      uStack_20 = 2;
      uStack_21 = 0;
      ppDStack_22 = &pDStack_23;
      pDStack_23 = pDStack_5;
      while( true ) {
        cVar24 = FUN_?(&pDStack_23,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                              );
        this_00 = pCStack_18;
        uVar25 = uStack_17;
        if (cVar24 == '\0') {
          return 1;
        }
        uStack_13 = uStack_19;
        pDVar3 = (chunk->fields).cells;
        if (pDVar3 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) break;
        IStackX_8.x = (int16_t)uStack_17;
        IStackX_8.y = uStack_17._2_2_;
        uStack_17._4_2_ = SUB82(uVar25,4);
        IStackX_8.z = uStack_17._4_2_;
        uStack_17 = uVar25;
        uVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                           (pDVar3,&IStackX_8,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                            ->klass->rgctx_data[0x21].method);
        if ((int)uVar6 < 0) {
          return 0;
        }
        pDVar26 = (pDVar3->fields)._entries;
        if (pDVar26 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_Cell___Array *)0x0)
        goto code_?;
        if ((uint)pDVar26->max_length <= uVar6) goto code_?;
        pCVar27 = &pDVar26->vector[(int)uVar6].value;
        cube = pCVar27->cube;
        uStack_2 = *(undefined8 *)&pCVar27->lightValue;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pCStack_1 >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pCStack_1 = cube;
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
        if (this_00 != cube) {
          if (this_00 == (Cube *)0x0) {
            return 0;
          }
          if (cube == (Cube *)0x0) {
            return 0;
          }
          bVar28 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_Equals_1
                             ((CubeBase *)this_00,(CubeBase *)cube,(MethodInfo *)0x0);
          if (bVar28 == 0) {
            return 0;
          }
        }
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
  FUN_?();
  pcVar29 = (code *)swi(3);
  bVar28 = (*pcVar29)();
  return bVar28;
}


/* Boolean CompareGeometry(CubeModelChunk, Int32 ByRef, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CompareGeometry_1
               (CubeModelChunk *this,CubeModelChunk *chunk,int32_t *matchingCubeCount,
               int32_t *investigatedCubeCount,bool visibleCubesOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  alStack_1[1] = 0;
  iVar2 = 0;
  iVar3 = 0;
  pDVar4 = (this->fields).cells;
  if (pDVar4 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
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
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  uStack_7 = 0;
  uStack_8 = 0;
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
    puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar12 = *puVar11;
      LOCK();
      uVar13 = *puVar11;
      if (uVar12 == uVar13) {
        *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar12 != uVar13);
  }
  uStack_14 = (ulonglong)(uint)(pDVar4->fields)._version;
  uStack_15 = 2;
  uStack_16 = 0;
  uStack_17 = uStack_14;
  uStack_18 = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0;
  uStack_19 = 0;
  uStack_20 = 0;
  uStack_21 = 0;
  uStack_22 = 2;
  uStack_23 = 0;
  uStack_24 = 0;
  ppDStack_25 = &pDStack_26;
  pDStack_10 = pDVar4;
  pDStack_26 = pDVar4;
code_?:
  cVar27 = FUN_?(&pDStack_26,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                       );
  if (cVar27 == '\0') {
    *matchingCubeCount = *matchingCubeCount + iVar2;
    *investigatedCubeCount = *investigatedCubeCount + iVar3;
    return iVar2 == iVar3;
  }
  uStack_14 = uStack_19;
  pDStack_10 = uStack_18;
  if (visibleCubesOnly == 0) goto code_?;
  if (uStack_19 != 0) goto code_?;
  goto code_?;
code_?:
  if (*(char *)(uStack_19 + 0x28) != '?') {
code_?:
    if (chunk != (CubeModelChunk *)0x0) {
      pDVar4 = (chunk->fields).cells;
      if (pDVar4 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      uStack_28 = (undefined4)uStack_18;
      uStack_29 = uStack_18._4_2_;
      cVar27 = FUN_?(pDVar4,&uStack_28,alStack_1);
      if (cVar27 != '\0') {
        for (uVar9 = 0; (int)uVar9 < 8; uVar9 = uVar9 + 1) {
          if (uStack_14 == 0) goto code_?;
          lVar30 = *(longlong *)(uStack_14 + 0x18);
          if (lVar30 == 0) goto code_?;
          if (*(uint *)(lVar30 + 0x18) <= uVar9) goto code_?;
          if (alStack_1[0] == 0) goto code_?;
          lVar31 = *(longlong *)(alStack_1[0] + 0x18);
          if (lVar31 == 0) goto code_?;
          if (*(uint *)(lVar31 + 0x18) <= uVar9) goto code_?;
          if (*(char *)((longlong)(int)uVar9 + 0x20 + lVar30) !=
              *(char *)((longlong)(int)uVar9 + 0x20 + lVar31)) goto code_?;
        }
        iVar2 = iVar2 + 1;
      }
    }
code_?:
    iVar3 = iVar3 + 1;
  }
  goto code_?;
}


/* Boolean ContainsCube(IntVector) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_ContainsCube
               (CubeModelChunk *this,IntVector *iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                      (this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_Destroy
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pOStack_5 = (Object_1 *)0x0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  pDVar10 = (this->fields).instances;
  if (pDVar10 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    lVar11 = FUN_?(pDVar10,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                         );
    if (lVar11 != 0) {
      puVar12 = (undefined8 *)FUN_?(auStack_13);
      uStack_1 = *puVar12;
      uStack_2 = puVar12[1];
      uStack_3 = puVar12[2];
      uStack_4 = puVar12[3];
      pOStack_5 = (Object_1 *)puVar12[4];
      uStack_6 = puVar12[5];
      uStack_7 = puVar12[6];
      uStack_8 = puVar12[7];
      uStack_9 = puVar12[8];
      while( true ) {
        cVar14 = FUN_?(&uStack_1);
        obj = pOStack_5;
        if (cVar14 == '\0') break;
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0)
        ;
      }
      SharedMeshData::SharedMeshData_Destroy(&(this->fields).sharedMeshData,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void EvaluateReferenceCount(Int32, Int32) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_EvaluateReferenceCount
               (CubeModelChunk *this,int32_t oldReferenceCount,int32_t newReferenceCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unloading_mesh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Loading_mesh);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (oldReferenceCount == 0) {
    if (newReferenceCount < 1) {
      return;
    }
    CubeModelChunk_RebuildChunk(this,_UNK_?,(MethodInfo *)0x0);
    CubeModelChunk_RestoreSharedMeshOnInstances(this,(MethodInfo *)0x0);
    message = StringLiteral_Loading_mesh;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_Loading_mesh;
    }
  }
  else {
    if (oldReferenceCount < 1) {
      return;
    }
    if (newReferenceCount != 0) {
      return;
    }
    CubeModelChunk_RevokeSharedMeshOnInstances(this,(MethodInfo *)0x0);
    message = StringLiteral_Unloading_mesh;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_Unloading_mesh;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  return;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetCube
                 (CubeModelChunk *this,IntVector *iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cells;
  uStack_1 = 0;
  uStack_2 = 0;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                      (this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar3 < 0) {
      return (Cube *)0x0;
    }
    pDVar4 = (this_00->fields)._entries;
    if (pDVar4 != (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_Cell___Array *)0x0) {
      if ((uint)pDVar4->max_length <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        pCVar6 = (Cube *)(*pcVar5)();
        return pCVar6;
      }
      pCVar6 = pDVar4->vector[(int)uVar3].value.cube;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_1 >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      return pCVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Cube *)(*pcVar5)();
  return pCVar6;
}


/* Vector2[] GetFaceUvs(Vector3[], Face, Single) */

Vector2__Array *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFaceUvs
          (Vector3__Array *faceVertices,Face__Enum face,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,4);
  uVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = fVar3;
  switch(face) {
  case Face__Enum_Top:
    if ((pVVar1 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0)) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      pVVar1 = (Vector2__Array *)(*pcVar5)();
      return pVVar1;
    }
    if ((int)faceVertices->max_length == 0) goto code_?;
    fVar6 = faceVertices->vector[0].z;
    if ((int)pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = faceVertices->vector[0].x;
    pVVar1->vector[0].y = fVar6;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    fVar6 = faceVertices->vector[1].z;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = faceVertices->vector[1].x;
    pVVar1->vector[1].y = fVar6;
    if ((uint)faceVertices->max_length < 3) goto code_?;
    fVar6 = faceVertices->vector[2].z;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = faceVertices->vector[2].x;
    pVVar1->vector[2].y = fVar6;
    if ((uint)faceVertices->max_length < 4) goto code_?;
    fVar6 = faceVertices->vector[3].z;
    if ((uint)pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = faceVertices->vector[3].x;
    pVVar1->vector[3].y = fVar6;
    break;
  case Face__Enum_Bottom:
    if ((pVVar1 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if ((int)faceVertices->max_length == 0) goto code_?;
    if ((int)pVVar1->max_length == 0) goto code_?;
    fVar4 = (float)((uint)faceVertices->vector[0].x ^ _UNK_?);
    pVVar1->vector[0].y = faceVertices->vector[0].z;
    pVVar1->vector[0].x = fVar4;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    fVar4 = faceVertices->vector[1].x;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].y = faceVertices->vector[1].z;
    pVVar1->vector[1].x = (float)((uint)fVar4 ^ uVar2);
    if ((uint)faceVertices->max_length < 3) goto code_?;
    fVar4 = faceVertices->vector[2].x;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].y = faceVertices->vector[2].z;
    pVVar1->vector[2].x = (float)((uint)fVar4 ^ uVar2);
    if ((uint)faceVertices->max_length < 4) goto code_?;
    fVar6 = faceVertices->vector[3].z;
    goto code_?;
  case Face__Enum_Front:
    if ((pVVar1 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if ((int)faceVertices->max_length == 0) goto code_?;
    fVar6 = faceVertices->vector[0].y;
    if ((int)pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = faceVertices->vector[0].x;
    pVVar1->vector[0].y = fVar6;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    fVar6 = faceVertices->vector[1].y;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = faceVertices->vector[1].x;
    pVVar1->vector[1].y = fVar6;
    if ((uint)faceVertices->max_length < 3) goto code_?;
    fVar6 = faceVertices->vector[2].y;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = faceVertices->vector[2].x;
    pVVar1->vector[2].y = fVar6;
    if ((uint)faceVertices->max_length < 4) goto code_?;
    fVar6 = faceVertices->vector[3].y;
    if ((uint)pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = faceVertices->vector[3].x;
    pVVar1->vector[3].y = fVar6;
    break;
  case Face__Enum_Back:
    if ((pVVar1 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if ((int)faceVertices->max_length == 0) goto code_?;
    if ((int)pVVar1->max_length == 0) goto code_?;
    fVar4 = (float)((uint)faceVertices->vector[0].x ^ _UNK_?);
    pVVar1->vector[0].y = faceVertices->vector[0].y;
    pVVar1->vector[0].x = fVar4;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    fVar4 = faceVertices->vector[1].x;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].y = faceVertices->vector[1].y;
    pVVar1->vector[1].x = (float)((uint)fVar4 ^ uVar2);
    if ((uint)faceVertices->max_length < 3) goto code_?;
    fVar4 = faceVertices->vector[2].x;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].y = faceVertices->vector[2].y;
    pVVar1->vector[2].x = (float)((uint)fVar4 ^ uVar2);
    if ((uint)faceVertices->max_length < 4) goto code_?;
    fVar6 = faceVertices->vector[3].y;
code_?:
    fVar4 = faceVertices->vector[3].x;
code_?:
    if ((uint)pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = (float)((uint)fVar4 ^ uVar2);
    pVVar1->vector[3].y = fVar6;
    fVar4 = _UNK_?;
    break;
  case Face__Enum_Left:
    if ((pVVar1 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if ((int)faceVertices->max_length == 0) goto code_?;
    if ((int)pVVar1->max_length == 0) goto code_?;
    fVar4 = (float)((uint)faceVertices->vector[0].z ^ _UNK_?);
    pVVar1->vector[0].y = faceVertices->vector[0].y;
    pVVar1->vector[0].x = fVar4;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    fVar4 = faceVertices->vector[1].z;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].y = faceVertices->vector[1].y;
    pVVar1->vector[1].x = (float)((uint)fVar4 ^ uVar2);
    if ((uint)faceVertices->max_length < 3) goto code_?;
    fVar4 = faceVertices->vector[2].z;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].y = faceVertices->vector[2].y;
    pVVar1->vector[2].x = (float)((uint)fVar4 ^ uVar2);
    if ((uint)faceVertices->max_length < 4) goto code_?;
    fVar4 = faceVertices->vector[3].z;
    fVar6 = faceVertices->vector[3].y;
    goto code_?;
  case Face__Enum_Right:
    if ((pVVar1 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if ((int)faceVertices->max_length == 0) goto code_?;
    fVar6 = faceVertices->vector[0].y;
    if ((int)pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = faceVertices->vector[0].z;
    pVVar1->vector[0].y = fVar6;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    fVar6 = faceVertices->vector[1].y;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = faceVertices->vector[1].z;
    pVVar1->vector[1].y = fVar6;
    if ((uint)faceVertices->max_length < 3) goto code_?;
    fVar6 = faceVertices->vector[2].y;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = faceVertices->vector[2].z;
    pVVar1->vector[2].y = fVar6;
    if ((uint)faceVertices->max_length < 4) goto code_?;
    fVar6 = faceVertices->vector[3].y;
    if ((uint)pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = faceVertices->vector[3].z;
    pVVar1->vector[3].y = fVar6;
    break;
  default:
    if (pVVar1 == (Vector2__Array *)0x0) goto code_?;
  }
  if ((int)pVVar1->max_length != 0) {
    pVVar1->vector[0].x = fVar4 + pVVar1->vector[0].x;
    pVVar1->vector[0].y = pVVar1->vector[0].y + fVar3;
    if (1 < (uint)pVVar1->max_length) {
      fVar6 = pVVar1->vector[1].y;
      pVVar1->vector[1].x = fVar4 + pVVar1->vector[1].x;
      pVVar1->vector[1].y = fVar6 + fVar3;
      if (2 < (uint)pVVar1->max_length) {
        fVar6 = pVVar1->vector[2].y;
        pVVar1->vector[2].x = fVar4 + pVVar1->vector[2].x;
        pVVar1->vector[2].y = fVar6 + fVar3;
        if (3 < (uint)pVVar1->max_length) {
          fVar6 = pVVar1->vector[3].y;
          fVar4 = fVar4 + pVVar1->vector[3].x;
          fVar7 = scale * fVar3;
          pVVar1->vector[3].x = fVar4;
          pVVar1->vector[3].y = fVar6 + fVar3;
          if ((int)pVVar1->max_length != 0) {
            pVVar1->vector[0].x = fVar7 * pVVar1->vector[0].x;
            pVVar1->vector[0].y = fVar7 * pVVar1->vector[0].y;
            if (1 < (uint)pVVar1->max_length) {
              fVar3 = pVVar1->vector[1].y;
              pVVar1->vector[1].x = fVar7 * pVVar1->vector[1].x;
              pVVar1->vector[1].y = fVar7 * fVar3;
              if (2 < (uint)pVVar1->max_length) {
                fVar3 = pVVar1->vector[2].y;
                pVVar1->vector[2].x = fVar7 * pVVar1->vector[2].x;
                pVVar1->vector[2].y = fVar7 * fVar3;
                if (3 < (uint)pVVar1->max_length) {
                  pVVar1->vector[3].y = fVar7 * pVVar1->vector[3].y;
                  pVVar1->vector[3].x = fVar7 * fVar4;
                  return pVVar1;
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
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector2__Array *)(*pcVar5)();
  return pVVar1;
}


/* IntVector GetFirstSolidCubePos() */

IntVector *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFirstSolidCubePos
          (IntVector *__return_storage_ptr__,CubeModelChunk *this,MethodInfo *method)

{
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
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    if ((pDVar1->fields)._count - (pDVar1->fields)._freeCount < 1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_cube_found_in_chunk__This_is_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = TypeInfo__MV__WorldObject__IntVector->static_fields;
      iVar3 = (pIVar2->One).y;
      __return_storage_ptr__->x = (pIVar2->One).x;
      __return_storage_ptr__->y = iVar3;
      __return_storage_ptr__->z = (pIVar2->One).z;
      return __return_storage_ptr__;
    }
    if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)auStack_5 >> 0xc);
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
      __return_storage_ptr__->x = 0;
      __return_storage_ptr__->y = 0;
      __return_storage_ptr__->z = 0;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pIVar10 = (IntVector *)(*pcVar9)();
  return pIVar10;
}


/* Void GetMeshBounds(Bounds ByRef, Dictionary`2[MV.WorldObject.IntVector,Cell]) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetMeshBounds
               (Bounds *bounds,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    FUN_?();
  }
  else {
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
    uStack_9 = (ulonglong)(uint)(cells->fields)._version;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = uStack_9;
    uStack_15 = 0;
    lStack_16 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 2;
    uStack_20 = 0;
    uStack_21 = 0;
    ppDStack_22 = &pDStack_23;
    fVar24 = fVar1;
    fVar25 = fVar1;
    fVar26 = fVar2;
    fVar27 = fVar2;
    pDStack_4 = cells;
    pDStack_23 = cells;
    while( true ) {
      cVar28 = FUN_?(&pDStack_23,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                           );
      uVar29 = uStack_15;
      if (cVar28 == '\0') {
        fVar1 = (fVar1 - fVar27) * _UNK_?;
        fVar25 = (fVar25 - fVar26) * _UNK_?;
        fVar24 = (fVar24 - fVar2) * _UNK_?;
        (bounds->m_Extents).x = fVar1;
        (bounds->m_Extents).y = fVar25;
        (bounds->m_Extents).z = fVar24;
        (bounds->m_Center).x = fVar1 + fVar27;
        (bounds->m_Center).y = fVar25 + fVar26;
        (bounds->m_Center).z = fVar24 + fVar2;
        return;
      }
      uStack_11 = CONCAT44(uStack_18,uStack_17);
      if (lStack_16 == 0) break;
      if (*(char *)(lStack_16 + 0x28) != '?') {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDStack_4 = *(Dictionary_2_MV_WorldObject_IntVector_Cell_ **)
                       &TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
        fVar30 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z * _UNK_?;
        fVar31 = (float)((ulonglong)pDStack_4 >> 0x20) * _UNK_?;
        fVar32 = SUB84(pDStack_4,0) * _UNK_?;
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar33 = (float)((uint)fVar32 ^ _UNK_?) + (float)(int)(short)uVar29;
        sVar34 = (short)((ulonglong)uVar29 >> 0x10);
        fVar35 = (float)((uint)fVar31 ^ _UNK_?) + (float)(int)sVar34;
        sVar36 = (short)((ulonglong)uVar29 >> 0x20);
        fVar37 = (float)((uint)fVar30 ^ _UNK_?) + (float)(int)sVar36;
        fVar32 = (float)(int)(short)uVar29 + fVar32;
        fVar31 = (float)(int)sVar34 + fVar31;
        fVar30 = (float)(int)sVar36 + fVar30;
        if (fVar33 < fVar27) {
          fVar27 = fVar33;
        }
        if (fVar35 < fVar26) {
          fVar26 = fVar35;
        }
        if (fVar37 < fVar2) {
          fVar2 = fVar37;
        }
        if (fVar1 <= fVar32) {
          fVar1 = fVar32;
        }
        if (fVar25 <= fVar31) {
          fVar25 = fVar31;
        }
        if (fVar24 <= fVar30) {
          fVar24 = fVar30;
        }
        if (fVar32 < fVar27) {
          fVar27 = fVar32;
        }
        if (fVar31 < fVar26) {
          fVar26 = fVar31;
        }
        if (fVar30 < fVar2) {
          fVar2 = fVar30;
        }
        if (fVar1 <= fVar33) {
          fVar1 = fVar33;
        }
        if (fVar25 <= fVar35) {
          fVar25 = fVar35;
        }
        if (fVar24 <= fVar37) {
          fVar24 = fVar37;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* String Guids() */

String * Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_Guids
                   (CubeModelChunk *this,MethodInfo *method)

{
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
    FUN_?(&MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_);
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
  pDVar1 = (this->fields).instances;
  if (pDVar1 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  lVar4 = FUN_?(pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                       );
  if (*(int *)&(TypeInfo__CubeModelChunk____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CubeModelChunk____c);
  }
  pSVar3 = ::StringLiteral__;
  this_00 = TypeInfo__CubeModelChunk____c->static_fields->__9__27_0;
  if (this_00 == (Func_3_String_Guid_String_ *)0x0) {
    if (*(int *)&(TypeInfo__CubeModelChunk____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CubeModelChunk____c);
    }
    object = TypeInfo__CubeModelChunk____c->static_fields->__9;
    this_00 = (Func_3_String_Guid_String_ *)
              FUN_?(TypeInfo__System__Func<System::String,_System::Guid,_System::String>);
    mscorlib.dll::System::Func`3[Object,Guid,Object]::Func_3_Object_Guid_Object___ctor
              ((Func_3_Object_Guid_Object_ *)this_00,(Object *)object,
               MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_,
               (MethodInfo *)0x0);
    TypeInfo__CubeModelChunk____c->static_fields->__9__27_0 = this_00;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&TypeInfo__CubeModelChunk____c->static_fields->__9__27_0 >> 0xc);
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
  }
  pMVar9 = 
  System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
  ;
  if ((
      System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (lVar4 == 0) {
    pSVar3 = (String *)func_?(&StringLiteral_source);
    pEVar10 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar3,(MethodInfo *)0x0);
    FUN_?(pEVar10,pMVar9);
code_?:
    FUN_?();
  }
  else {
    if (this_00 == (Func_3_String_Guid_String_ *)0x0) {
      pSVar3 = (String *)func_?(&StringLiteral_func);
      pEVar10 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                          (pSVar3,(MethodInfo *)0x0);
      FUN_?(pEVar10,pMVar9);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    pvVar11 = ((pMVar9->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
      pvVar11 = (void *)FUN_?(pvVar11);
    }
    plVar12 = (longlong *)FUN_?(0,pvVar11,lVar4);
    while (plVar12 != (longlong *)0x0) {
      cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar13 == '\0') {
        if (plVar12 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar12);
        }
        return pSVar3;
      }
      if (plVar12 == (longlong *)0x0) goto code_?;
      pvVar11 = (pMVar9->field7_0x38).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
        pvVar11 = (void *)FUN_?(pvVar11);
      }
      lVar4 = *plVar12;
      uVar14 = 0;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        do {
          if (*(void **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar14 * 0x10) == pvVar11) {
            puVar15 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) * 0x10 +
                       0x138 + lVar4);
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar15 = (undefined8 *)FUN_?(plVar12,pvVar11,0);
code_?:
      puVar16 = (undefined4 *)(*(code *)*puVar15)(auStack_17,plVar12,puVar15[1]);
      uStack_18 = *puVar16;
      uStack_19 = puVar16[1];
      uStack_20 = puVar16[2];
      uStack_21 = puVar16[3];
      pSVar3 = (String *)
                (*(this_00->fields)._._.invoke_impl)
                          ((this_00->fields)._._.method_code,pSVar3,&uStack_18,
                           (this_00->fields)._._.method);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Void RebuildChunk(Single) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildChunk
               (CubeModelChunk *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MeshData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (MeshData *)FUN_?(TypeInfo__MeshData);
  cells = (this->fields).cells;
  if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = CubeModelChunk_RebuildMesh(cells,scale,(MethodInfo *)0x0);
  (this->fields).triangleCount = iVar1;
  if (this_01 == (MeshData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MeshData::MeshData_SetToMesh
            (this_01,&(this->fields).sharedMeshData.mesh,&(this->fields).sharedMeshData.material,
             (MethodInfo *)0x0);
  CubeModelChunk_GetMeshBounds(&(this->fields).meshBounds,(this->fields).cells,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__Add_System__Guid_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Guid>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GStack_3._a = 0;
  GStack_3._b = 0;
  GStack_3._c = 0;
  GStack_3._d = 0;
  GStack_3._e = 0;
  GStack_3._f = 0;
  GStack_3._g = 0;
  GStack_3._h = 0;
  GStack_3._i = 0;
  GStack_3._j = 0;
  GStack_3._k = 0;
  pGStack_4 = (GameObject *)0x0;
  pBStack_5 = (BoxCollider *)0x0;
  pMStack_6 = (MeshRenderer *)0x0;
  pMStack_7 = (MeshFilter *)0x0;
  uStack_8._0_1_ = 0;
  uStack_8._1_7_ = 0;
  this_02 = (List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::Guid>);
  FUN_?(this_02,MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
  pDVar9 = (this->fields).instances;
  if (pDVar9 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)auStack_11 >> 0xc);
      uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    index = 0;
    auStack_11._12_4_ = 0;
    auStack_11._8_4_ = (pDVar9->fields)._version;
    uStack_16 = 2;
    GStack_17._a = 0;
    GStack_17._b = 0;
    GStack_17._c = 0;
    GStack_17._d = 0;
    GStack_17._e = 0;
    GStack_17._f = 0;
    GStack_17._g = 0;
    GStack_17._h = 0;
    GStack_17._i = 0;
    GStack_17._j = 0;
    GStack_17._k = 0;
    uStack_18 = (GameObject *)0x0;
    uStack_19 = (BoxCollider *)0x0;
    uStack_20 = (MeshRenderer *)0x0;
    uStack_21 = (MeshFilter *)0x0;
    uStack_22._0_1_ = 0;
    uStack_22._1_7_ = 0;
    uStack_23 = 0;
    uStack_24 = 0;
    ppDStack_25 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                  auStack_11._8_8_;
    pvStack_26 = (void *)0x0;
    uStack_27._0_4_ = 0.0;
    uStack_27._4_4_ = 0.0;
    GStack_28._a = 0;
    GStack_28._b = 0;
    GStack_28._c = 0;
    GStack_28._d = 0;
    GStack_28._e = 0;
    GStack_28._f = 0;
    GStack_28._g = 0;
    GStack_28._h = 0;
    GStack_28._i = 0;
    GStack_28._j = 0;
    GStack_28._k = 0;
    uStack_29 = (GameObject *)0x0;
    uStack_30 = (BoxCollider *)0x0;
    pMStack_31 = (MeshRenderer *)0x0;
    pMStack_32 = (MeshFilter *)0x0;
    uStack_33._0_1_ = 0;
    uStack_33._1_7_ = 0;
    uStack_34 = 2;
    pDStack_35 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0;
    ppDStack_36 = &pDStack_37;
    auStack_11._0_8_ = pDVar9;
    pDStack_37 = pDVar9;
    while (cVar38 = FUN_?(&pDStack_37,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                                 ), uVar39 = uStack_33, pMVar40 = pMStack_32, this_00 = pMStack_31,
          pBVar41 = uStack_30, pGVar42 = uStack_29, uVar43 = GStack_28._8_8_,
          uVar44 = GStack_28._0_8_, uVar45 = uStack_27, pvVar46 = pvStack_26,
          pMVar47 = 
          MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
          , cVar38 != '\0') {
      iVar1 = GStack_28._a;
      uVar48 = GStack_28._4_4_;
      uVar49 = GStack_28._8_4_;
      uVar50 = GStack_28._12_4_;
      uVar51 = (undefined4)uStack_29;
      uVar52 = uStack_29._4_4_;
      uVar53 = (undefined4)uStack_30;
      uVar54 = uStack_30._4_4_;
      if ((MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if ((pMVar47->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uVar55 = uStack_33;
      uVar56 = GStack_28._8_8_;
      uVar57 = GStack_28._0_8_;
      GStack_28._a = (int32_t)uVar44;
      GStack_28._b = SUB82(uVar44,4);
      GStack_28._c = SUB82(uVar44,6);
      GStack_3._a = GStack_28._a;
      GStack_3._b = GStack_28._b;
      GStack_3._c = GStack_28._c;
      GStack_28._d = (uint8_t)uVar43;
      GStack_28._e = SUB81(uVar43,1);
      GStack_28._f = SUB81(uVar43,2);
      GStack_28._g = SUB81(uVar43,3);
      GStack_28._h = SUB81(uVar43,4);
      GStack_28._i = SUB81(uVar43,5);
      GStack_28._j = SUB81(uVar43,6);
      GStack_28._k = SUB81(uVar43,7);
      GStack_3._d = GStack_28._d;
      GStack_3._e = GStack_28._e;
      GStack_3._f = GStack_28._f;
      GStack_3._g = GStack_28._g;
      GStack_3._h = GStack_28._h;
      GStack_3._i = GStack_28._i;
      GStack_3._j = GStack_28._j;
      GStack_3._k = GStack_28._k;
      pGStack_4 = pGVar42;
      pBStack_5 = pBVar41;
      pMStack_6 = this_00;
      pMStack_7 = pMVar40;
      uStack_33._0_1_ = (bool)uVar39;
      uStack_33._1_7_ = SUB87(uVar39,1);
      uStack_8._0_1_ = (bool)uStack_33;
      uStack_8._1_7_ = uStack_33._1_7_;
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&pGStack_4 >> 0xc);
        uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      uStack_33._0_1_ = (bool)uVar39;
      uStack_33._1_7_ = SUB87(uVar39,1);
      CStack_58.transparent = (bool)uStack_33;
      CStack_58._49_7_ = uStack_33._1_7_;
      CStack_58.guid._a = iVar1;
      CStack_58.guid._4_4_ = uVar48;
      CStack_58.guid._8_4_ = uVar49;
      CStack_58.guid._12_4_ = uVar50;
      CStack_58.gameObject._0_4_ = uVar51;
      CStack_58.gameObject._4_4_ = uVar52;
      CStack_58.collider._0_4_ = uVar53;
      CStack_58.collider._4_4_ = uVar54;
      GStack_28._0_8_ = uVar57;
      GStack_28._8_8_ = uVar56;
      uStack_33 = uVar55;
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar42 == (GameObject *)0x0) {
        bVar15 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar15 = (pGVar42->fields)._.m_CachedPtr != (void *)0x0;
      }
      uVar44 = uStack_27;
      pMVar47 = MethodInfo__System__Collections__Generic__List<System::Guid>__Add_System__Guid_;
      if (bVar15) {
        if (this_00 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  ((Renderer *)this_00,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_03 == (MVWorldObjectClientManager *)0x0) {
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvStack_59 = *(void **)&(this->fields).meshBounds.m_Center;
        _fStack_1c0 = *(undefined8 *)&(this->fields).meshBounds.m_Center.z;
        uStack_60._0_4_ = (this->fields).meshBounds.m_Extents.y;
        uStack_60._4_4_ = (this->fields).meshBounds.m_Extents.z;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (this_03,(Bounds *)&pvStack_59,(MethodInfo *)0x0);
      }
      else {
        if (this_02 == (List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        piVar61 = &(this_02->fields)._version;
        *piVar61 = *piVar61 + 1;
        pPVar62 = (this_02->fields)._items;
        uVar10 = (this_02->fields)._size;
        if (pPVar62 == (Painter2D_Painter2DJobData__Array *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        if (uVar10 < (uint)pPVar62->max_length) {
          (this_02->fields)._size = uVar10 + 1;
          if ((uint)pPVar62->max_length <= uVar10) {
            FUN_?();
            goto code_?;
          }
          pPVar63 = pPVar62->vector + (int)uVar10;
          (pPVar63->node).m_Handle.handle = pvVar46;
          uStack_27._0_4_ = (float)uVar45;
          uStack_27._4_4_ = SUB84(uVar45,4);
          pPVar63->snapshotIndex = (int32_t)(float)uStack_27;
          *(float *)&pPVar63->field_0xc = uStack_27._4_4_;
          uStack_27 = uVar44;
        }
        else {
          pvStack_59 = pvVar46;
          uStack_27._0_4_ = (float)uVar45;
          uStack_27._4_4_ = SUB84(uVar45,4);
          fStack_64 = (float)uStack_27;
          fStack_65 = uStack_27._4_4_;
          uStack_27 = uVar44;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          Painter2D+Painter2DJobData]::
          List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData__AddWithResize
                    (this_02,(Painter2D_Painter2DJobData *)&pvStack_59,
                     pMVar47->klass->rgctx_data[0xe].method);
        }
      }
    }
    if (this_02 != (List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)0x0) {
      uVar10 = (this_02->fields)._size - 1;
      if (-1 < (int)uVar10) {
        lVar66 = (longlong)(int)uVar10;
        lVar67 = (lVar66 + 2) * 0x10;
        do {
          pDVar9 = (this->fields).instances;
          if ((uint)(this_02->fields)._size <= uVar10) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pPVar62 = (this_02->fields)._items;
          if (pPVar62 == (Painter2D_Painter2DJobData__Array *)0x0) goto code_?;
          if ((uint)pPVar62->max_length <= uVar10) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (pDVar9 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
          goto code_?;
          plVar68 = (longlong *)
                   ((longlong)&((Painter2D_Painter2DJobData__Array *)(pPVar62->vector + -2))->klass +
                   lVar67);
          pDStack_35 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)*plVar68;
          ppDStack_36 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                         plVar68[1];
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Guid,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                    (pDVar9,(Guid *)&pDStack_35,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                    );
          uVar10 = uVar10 - 1;
          lVar67 = lVar67 + -0x10;
          lVar66 = lVar66 + -1;
        } while (-1 < lVar66);
      }
      fVar69 = TypeRef__System__Activator__T._0_4_;
      pDVar9 = (this->fields).instances;
      pMVar47 = 
      System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
      ;
      while (System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
                  = pMVar47,
            pDVar9 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
        if ((pDVar9->fields)._count - (pDVar9->fields)._freeCount <= index) {
          return;
        }
        System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt
                  ((KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)auStack_11,
                   (IEnumerable_1_KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables_
                    *)(this->fields).instances,index,pMVar47);
        pMVar70 = 
        MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
        ;
        if ((MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if ((pMVar70->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        uVar45 = uStack_22;
        pGVar42 = uStack_18;
        iVar1 = GStack_17._a;
        uVar48 = GStack_17._4_4_;
        uVar49 = GStack_17._8_4_;
        uVar50 = GStack_17._12_4_;
        GStack_3._a = GStack_17._a;
        GStack_3._b = GStack_17._b;
        GStack_3._c = GStack_17._c;
        GStack_3._d = GStack_17._d;
        GStack_3._e = GStack_17._e;
        GStack_3._f = GStack_17._f;
        GStack_3._g = GStack_17._g;
        GStack_3._h = GStack_17._h;
        GStack_3._i = GStack_17._i;
        GStack_3._j = GStack_17._j;
        GStack_3._k = GStack_17._k;
        uVar51 = (undefined4)uStack_18;
        uVar52 = uStack_18._4_4_;
        uVar53 = (undefined4)uStack_19;
        uVar54 = uStack_19._4_4_;
        pGStack_4 = uStack_18;
        pBStack_5 = uStack_19;
        uVar71 = (undefined4)uStack_20;
        uVar72 = uStack_20._4_4_;
        uVar73 = (undefined4)uStack_21;
        uVar74 = uStack_21._4_4_;
        pMStack_6 = uStack_20;
        pMStack_7 = uStack_21;
        uStack_8._0_1_ = (bool)uStack_22;
        uStack_8._1_7_ = uStack_22._1_7_;
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&pGStack_4 >> 0xc);
          uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        auVar75._8_4_ = (undefined4)uStack_19;
        auVar75._0_8_ = uStack_18;
        auVar75._12_4_ = uStack_19._4_4_;
        pOVar76 = auVar75._8_8_;
        pDStack_35 = *(Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                       &(this->fields).meshBounds.m_Extents;
        fVar77 = (this->fields).meshBounds.m_Extents.z;
        fVar77 = fVar77 + fVar77;
        if (pOVar76 == (Object *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uStack_78 = CONCAT44(SUB84(pDStack_35,4) + SUB84(pDStack_35,4),
                              SUB84(pDStack_35,0) * fVar69);
        fStack_79 = fVar77;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar80 = pOVar76[1].klass;
        if (pOVar80 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar76,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar45 = func_?(&UNK_?);
          FUN_?(uVar45,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar80);
        auVar81._8_4_ = uVar53;
        auVar81._0_8_ = pGVar42;
        auVar81._12_4_ = uVar54;
        pOVar76 = auVar81._8_8_;
        if (pOVar76 == (Object *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvStack_59 = *(void **)&(this->fields).meshBounds.m_Center;
        fStack_64 = (this->fields).meshBounds.m_Center.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar80 = pOVar76[1].klass;
        if (pOVar80 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar76,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar45 = func_?(&UNK_?);
          FUN_?(uVar45,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar80,(Bounds *)&pvStack_59);
        uVar44 = uStack_22;
        pDVar9 = (this->fields).instances;
        if (pDVar9 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
        goto code_?;
        uStack_22._0_1_ = (bool)uVar45;
        uStack_22._1_7_ = SUB87(uVar45,1);
        CStack_58.transparent = (bool)uStack_22;
        CStack_58._49_7_ = uStack_22._1_7_;
        pDStack_35 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)
                      auStack_11._0_8_;
        ppDStack_36 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                       auStack_11._8_8_;
        uStack_22 = uVar44;
        CStack_58.guid._a = iVar1;
        CStack_58.guid._4_4_ = uVar48;
        CStack_58.guid._8_4_ = uVar49;
        CStack_58.guid._12_4_ = uVar50;
        CStack_58.gameObject._0_4_ = uVar51;
        CStack_58.gameObject._4_4_ = uVar52;
        CStack_58.collider._0_4_ = uVar53;
        CStack_58.collider._4_4_ = uVar54;
        CStack_58.renderer._0_4_ = uVar71;
        CStack_58.renderer._4_4_ = uVar72;
        CStack_58.filter._0_4_ = uVar73;
        CStack_58.filter._4_4_ = uVar74;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryInsert
                  (pDVar9,(Guid *)&pDStack_35,&CStack_58,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar47 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                   ->klass->rgctx_data[0x22].method);
        index = index + 1;
        pMVar47 = 
        System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
        ;
        pDVar9 = (this->fields).instances;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 RebuildMesh(Dictionary`2[MV.WorldObject.IntVector,Cell], Single) */

int32_t Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildMesh
                  (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,float scale,MethodInfo *method
                  )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MeshDataPool::MeshDataPool_Reset((MethodInfo *)0x0);
  iVar1 = 0;
  if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
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
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)auStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    auStack_5._8_4_ = (cells->fields)._version;
    auStack_5._0_8_ = cells;
    auStack_5._12_4_ = 0;
    auVar10 = auStack_5;
    uStack_11 = 2;
    uStack_12 = 0;
    auStack_5._12_4_ = 0;
    uStack_13 = auStack_5._8_8_;
    uStack_14 = 0;
    pCStack_15 = (Cube *)0x0;
    uStack_16 = 0;
    uStack_17 = 2;
    uStack_18 = 0;
    ppDStack_19 = &pDStack_20;
    auStack_5 = auVar10;
    pDStack_20 = cells;
    while( true ) {
      do {
        cVar21 = FUN_?(&pDStack_20,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                              );
        cube = pCStack_15;
        if (cVar21 == '\0') {
          return iVar1 * 2;
        }
        auStack_5._8_8_ = pCStack_15;
        auStack_5._0_8_ = uStack_14;
        uVar22 = (undefined4)uStack_14;
        if (pCStack_15 == (Cube *)0x0) goto code_?;
      } while ((pCStack_15->fields).hiddenSides == 0x3f);
      uVar6 = (ulonglong)uStack_14 >> 0x20;
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      aIStack_23[0]._0_4_ = uVar22;
      aIStack_23[0].z = (int16_t)uVar6;
      pFVar24 = Cube::Cube_GenerateCubeFaces(cube,aIStack_23,cells,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pFVar24 == (FaceData__Array *)0x0) break;
      for (; uVar25 = (uint)pFVar24->max_length, (int)uVar4 < (int)uVar25; uVar4 = uVar4 + 1) {
        if (uVar25 <= uVar4) goto code_?;
        pFVar26 = pFVar24->vector[(int)uVar4];
        if (pFVar26 == (FaceData *)0x0) goto code_?;
        FVar27 = (pFVar26->fields).face;
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar28 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                           ((CubeBase *)auStack_5._8_8_,FVar27,(MethodInfo *)0x0);
        uVar25 = (uint)uVar28;
        if (0x44 < uVar28) {
          uVar25 = 0x18;
        }
        pVVar29 = (pFVar26->fields).faceVertices;
        uVar30 = 0;
        if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
        for (; uVar31 = (uint)pVVar29->max_length, (int)uVar30 < (int)uVar31; uVar30 = uVar30 + 1) {
          if (uVar31 <= uVar30) goto code_?;
          VStack_32.x = pVVar29->vector[(int)uVar30].x;
          VStack_32.y = pVVar29->vector[(int)uVar30].y;
          VStack_32.z = pVVar29->vector[(int)uVar30].z;
          MeshDataPool::MeshDataPool_AddVertex(&VStack_32,(MethodInfo *)0x0);
        }
        if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar33 = TextureAtlasData::TextureAtlasData_GetMaterialColorData
                            (aCStack_34,uVar25,(MethodInfo *)0x0);
        fVar35 = pCVar33->r;
        fVar36 = pCVar33->g;
        fVar37 = pCVar33->b;
        for (uVar25 = 0; (int)uVar25 < 4; uVar25 = uVar25 + 1) {
          pSVar38 = (pFVar26->fields).lightValues;
          if (pSVar38 == (Single__Array *)0x0) goto code_?;
          if ((uint)pSVar38->max_length <= uVar25) goto code_?;
          CStack_39.a = pSVar38->vector[(int)uVar25];
          CStack_39.r = fVar35;
          CStack_39.g = fVar36;
          CStack_39.b = fVar37;
          MeshDataPool::MeshDataPool_AddColor(&CStack_39,(MethodInfo *)0x0);
        }
        pVVar29 = (pFVar26->fields).faceVertices;
        FVar27 = (pFVar26->fields).face;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        uvRange = CubeModelChunk_GetFaceUvs(pVVar29,FVar27,scale,(MethodInfo *)0x0);
        MeshDataPool::MeshDataPool_AddUvRange(uvRange,(MethodInfo *)0x0);
        index = iVar1 * 4;
        MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
        MeshDataPool::MeshDataPool_AddIndex(index + 3,(MethodInfo *)0x0);
        MeshDataPool::MeshDataPool_AddIndex(index + 2,(MethodInfo *)0x0);
        MeshDataPool::MeshDataPool_AddIndex(index + 2,(MethodInfo *)0x0);
        MeshDataPool::MeshDataPool_AddIndex(index + 1,(MethodInfo *)0x0);
        MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
        iVar1 = iVar1 + 1;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar40 = (code *)swi(3);
  iVar41 = (*pcVar40)();
  return iVar41;
}


/* Void RemoveFromChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RemoveFromChunk
               (CubeModelChunk *this,IntVector *iVector,MethodInfo *method)

{
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
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                      (pDVar1,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pDVar1 = (this->fields).cells;
      if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      IStackX_8.x = iVector->x;
      IStackX_8.y = iVector->y;
      IStackX_8.z = iVector->z;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Remove
                (pDVar1,&IStackX_8,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                );
      IStackX_8.x = iVector->x;
      IStackX_8.y = iVector->y;
      IStackX_8.z = iVector->z;
      CubeModelChunk_SetCubeVisibilityWithNeighbors(this,&IStackX_8,(MethodInfo *)0x0);
      piVar3 = &(this->fields).cubeCount;
      *piVar3 = *piVar3 + -1;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RestoreSharedMeshOnInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RestoreSharedMeshOnInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  pRStack_7 = (Renderer *)0x0;
  pOStack_8 = (Object *)0x0;
  uStack_9 = 0;
  pDVar10 = (this->fields).instances;
  if ((pDVar10 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) ||
     (lVar11 = FUN_?(pDVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                           ), lVar11 == 0)) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar13 = (undefined8 *)FUN_?(&uStack_14);
  uStack_1 = *puVar13;
  uStack_2 = puVar13[1];
  uStack_3 = puVar13[2];
  uStack_4 = puVar13[3];
  uStack_5 = puVar13[4];
  uStack_6 = puVar13[5];
  pRStack_7 = (Renderer *)puVar13[6];
  pOStack_8 = (Object *)puVar13[7];
  uStack_9 = puVar13[8];
  while( true ) {
    cVar15 = FUN_?(&uStack_1);
    obj = pOStack_8;
    if (cVar15 == '\0') {
      return;
    }
    uStack_14 = uStack_3;
    uStack_16 = uStack_4;
    uStack_17 = uStack_5;
    uStack_18 = uStack_6;
    pRStack_19 = pRStack_7;
    pOStack_20 = pOStack_8;
    uStack_21 = uStack_9;
    pMVar22 = (this->fields).sharedMeshData.mesh;
    if (pOStack_8 == (Object *)0x0) goto code_?;
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
    pOVar23 = obj[1].klass;
    if (pOVar23 == (Object__Class *)0x0) break;
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    if (pMVar22 == (Mesh *)0x0) {
      obj = (Object *)0x0;
    }
    else {
      obj = (pMVar22->fields)._.m_CachedPtr;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24);
code_?:
      FUN_?();
      break;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pOVar23);
    if (pRStack_19 == (Renderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (pRStack_19,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RevokeSharedMeshOnInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RevokeSharedMeshOnInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  pOStack_7 = (Object *)0x0;
  pOStack_8 = (Object__Class *)0x0;
  uStack_9 = 0;
  pDVar10 = (this->fields).instances;
  if ((pDVar10 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) ||
     (lVar11 = FUN_?(pDVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                           ), lVar11 == 0)) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar13 = (undefined8 *)FUN_?(&uStack_14);
  uStack_1 = *puVar13;
  uStack_2 = puVar13[1];
  uStack_3 = puVar13[2];
  uStack_4 = puVar13[3];
  uStack_5 = puVar13[4];
  uStack_6 = puVar13[5];
  pOStack_7 = (Object *)puVar13[6];
  pOStack_8 = (Object__Class *)puVar13[7];
  uStack_9 = puVar13[8];
  while( true ) {
    cVar15 = FUN_?(&uStack_1);
    obj_00 = pOStack_8;
    if (cVar15 == '\0') {
      return;
    }
    uStack_14 = uStack_3;
    uStack_16 = uStack_4;
    uStack_17 = uStack_5;
    uStack_18 = uStack_6;
    pOStack_19 = pOStack_7;
    pOStack_20 = pOStack_8;
    uStack_21 = uStack_9;
    if (pOStack_8 == (Object__Class *)0x0) goto code_?;
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
    obj = (Object *)(obj_00->_0).name;
    if (obj == (Object *)0x0) break;
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar22 = func_?(&UNK_?);
      FUN_?(uVar22);
code_?:
      uVar22 = func_?(&UNK_?);
      FUN_?(uVar22);
code_?:
      uVar22 = func_?(&UNK_?);
      FUN_?(uVar22);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
      FUN_?();
      break;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(obj);
    obj = pOStack_19;
    if (pOStack_19 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj_00 = obj[1].klass;
    if (obj_00 == (Object__Class *)0x0) goto code_?;
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar12;
    (*pcRam_?)(obj_00);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj_00 = obj[1].klass;
    if (obj_00 == (Object__Class *)0x0) goto code_?;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar12;
    (*pcRam_?)(obj_00);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetCubeVisibility(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility
               (CubeModelChunk *this,IntVector *iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).cells;
  pCStack_2 = (Cube *)0x0;
  uStack_3 = 0;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    IStackX_8.x = iVector->x;
    IStackX_8.y = iVector->y;
    IStackX_8.z = iVector->z;
    uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                      (pDVar1,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar4 < 0) {
      return;
    }
    pDVar5 = (pDVar1->fields)._entries;
    if (pDVar5 != (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_Cell___Array *)0x0) {
      if ((uint)pDVar5->max_length <= uVar4) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pCVar7 = &pDVar5->vector[(int)uVar4].value;
      cube = pCVar7->cube;
      uStack_3 = *(undefined8 *)&pCVar7->lightValue;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pCStack_2 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      pCStack_2 = cube;
      if (cube != (Cube *)0x0) {
        (cube->fields).hiddenSides = 0;
        pDVar1 = (this->fields).cells;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        IStackX_8.x = iVector->x;
        IStackX_8.y = iVector->y;
        IStackX_8.z = iVector->z;
        CubeModelChunk_SetCubeVisibility_3(pDVar1,&IStackX_8,cube,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCubeVisibilityWithNeighbors(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
               (CubeModelChunk *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  sVar1 = pos->x;
  sVar2 = pos->y;
  uVar3._0_2_ = pos->x;
  uVar3._2_2_ = pos->y;
  sVar4 = pos->z;
  pCStack_5 = (Cube *)0x0;
  uStack_6 = 0;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (this->fields).cells;
  IStackX_8._0_4_ = uVar3;
  if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  aIStack_8[0].x = pos->x;
  aIStack_8[0].y = pos->y;
  aIStack_8[0].z = sVar4;
  uVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]
           ::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                     (this_00,aIStack_8,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      ->klass->rgctx_data[0x21].method);
  if (-1 < (int)uVar9) {
    pDVar10 = (this_00->fields)._entries;
    if (pDVar10 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_Cell___Array *)0x0)
    goto code_?;
    if ((uint)pDVar10->max_length <= uVar9) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pCVar11 = &pDVar10->vector[(int)uVar9].value;
    cube = pCVar11->cube;
    uStack_6 = *(undefined8 *)&pCVar11->lightValue;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&pCStack_5 >> 0xc);
      uVar12 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pCStack_5 = cube;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
              ((CubeBase *)cube,(MethodInfo *)0x0);
  }
  aIStack_8[0].x = IStackX_8.x;
  aIStack_8[0].y = IStackX_8.y;
  aIStack_8[0].z = sVar4;
  CubeModelChunk_SetCubeVisibility(this,aIStack_8,(MethodInfo *)0x0);
  aIStack_8[0].x = sVar1 + 1;
  aIStack_8[0].y = IStackX_8.y;
  aIStack_8[0].z = sVar4;
  IStackX_8.x = aIStack_8[0].x;
  CubeModelChunk_SetCubeVisibility(this,aIStack_8,(MethodInfo *)0x0);
  IStackX_8.x = sVar1 + -1;
  aIStack_8[0].x = sVar1 + -1;
  aIStack_8[0].y = IStackX_8.y;
  aIStack_8[0].z = sVar4;
  CubeModelChunk_SetCubeVisibility(this,aIStack_8,(MethodInfo *)0x0);
  IStackX_8.y = sVar2 + 1;
  IStackX_8.x = sVar1;
  aIStack_8[0].x = sVar1;
  aIStack_8[0].y = sVar2 + 1;
  aIStack_8[0].z = sVar4;
  CubeModelChunk_SetCubeVisibility(this,aIStack_8,(MethodInfo *)0x0);
  IStackX_8.y = sVar2 + -1;
  aIStack_8[0].x = IStackX_8.x;
  aIStack_8[0].y = sVar2 + -1;
  aIStack_8[0].z = sVar4;
  CubeModelChunk_SetCubeVisibility(this,aIStack_8,(MethodInfo *)0x0);
  IStackX_8.y = sVar2;
  uVar3 = IStackX_8._0_4_;
  IStackX_8.z = sVar4 + 1;
  CubeModelChunk_SetCubeVisibility(this,&IStackX_8,(MethodInfo *)0x0);
  IStackX_8.z = sVar4 + -1;
  IStackX_8._0_4_ = uVar3;
  CubeModelChunk_SetCubeVisibility(this,&IStackX_8,(MethodInfo *)0x0);
  return;
}


/* Void SetCubeVisibility() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_1
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cells = (this->fields).cells;
  if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
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
  uStack_9 = (ulonglong)(uint)(cells->fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_12 = uStack_9;
  uStack_13 = (undefined *)0x0;
  pCStack_14 = (Cube *)0x0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 2;
  uStack_18 = 0;
  pDStack_5 = cells;
  pDStack_19 = cells;
  while (cVar20 = FUN_?(&pDStack_19,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                              ), cube = pCStack_14, cVar20 != '\0') {
    uVar21 = (undefined4)uStack_13;
    iVar22 = uStack_13._4_2_;
    if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar23 = uStack_13;
    uStack_13._0_2_ = (int16_t)uVar21;
    uStack_13._2_2_ = SUB42(uVar21,2);
    aIStackX_8[0].x = (int16_t)uStack_13;
    aIStackX_8[0].y = uStack_13._2_2_;
    aIStackX_8[0].z = iVar22;
    uStack_13 = (undefined *)uVar23;
    CubeModelChunk_SetCubeVisibility_3(cells,aIStackX_8,cube,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetCubeVisibility(Dictionary`2[MV.WorldObject.IntVector,Cell]) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_2
               (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
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
  uStack_9 = (ulonglong)(uint)(cells->fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_12 = uStack_9;
  uStack_13 = 0;
  pCStack_14 = (Cube *)0x0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 2;
  uStack_18 = 0;
  pDStack_5 = cells;
  pDStack_19 = cells;
  while (cVar20 = FUN_?(&pDStack_19,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                              ), cube = pCStack_14, cVar20 != '\0') {
    uVar21 = (undefined4)uStack_13;
    iVar22 = uStack_13._4_2_;
    if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar23 = uStack_13;
    uStack_13._0_2_ = (int16_t)uVar21;
    uStack_13._2_2_ = SUB42(uVar21,2);
    IStackX_8.x = (int16_t)uStack_13;
    IStackX_8.y = uStack_13._2_2_;
    IStackX_8.z = iVar22;
    uStack_13 = uVar23;
    CubeModelChunk_SetCubeVisibility_3(cells,&IStackX_8,cube,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetCubeVisibility(Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector, Cube) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_3
               (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector *pos,Cube *cube,
               MethodInfo *method)

{
  apCStackX_18[0] = cube;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = apCStackX_18[0];
  pCStack_2 = (Cube *)0x0;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pCVar1 != (Cube *)0x0) {
    if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    aIStack_4[0].x = pos->x;
    aIStack_4[0].y = pos->y;
    aIStack_4[0].z = pos->z;
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                       (cells,aIStack_4,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        ->klass->rgctx_data[0x21].method);
    if (-1 < iVar5) {
      sVar6 = pos->x;
      sVar7 = pos->y;
      uVar8._0_2_ = pos->x;
      uVar8._2_2_ = pos->y;
      uVar9._0_2_ = pos->x;
      uVar9._2_2_ = pos->y;
      uVar10._0_2_ = pos->x;
      uVar10._2_2_ = pos->y;
      uVar11._0_2_ = pos->x;
      uVar11._2_2_ = pos->y;
      sVar12 = pos->z;
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      aIStack_4[0].y = sVar7 + 1;
      aIStack_4[0].x = sVar6;
      aIStack_4[0].z = sVar12;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                         (cells,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        pDVar13 = cells;
        aIStack_4[0].z = sVar12;
        puVar14 = (undefined8 *)FUN_?(auStack_15,cells,aIStack_4);
        pCStack_2 = (Cube *)*puVar14;
        pCVar16 = TypeInfo__CubeModelChunk;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  ((FaceFlags__Enum)CONCAT71((int7)((ulonglong)pCVar16 >> 8),1),
                   (FaceFlags__Enum)CONCAT71((int7)((ulonglong)pDVar13 >> 8),2),apCStackX_18,
                   &pCStack_2,(MethodInfo *)0x0);
      }
      aIStack_4[0].y = sVar7 + -1;
      aIStack_4[0].z = sVar12;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                         (cells,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        pDVar13 = cells;
        aIStack_4[0].z = sVar12;
        puVar14 = (undefined8 *)FUN_?(auStack_15,cells,aIStack_4);
        pCStack_2 = (Cube *)*puVar14;
        pCVar16 = TypeInfo__CubeModelChunk;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  ((FaceFlags__Enum)CONCAT71((int7)((ulonglong)pCVar16 >> 8),2),
                   (FaceFlags__Enum)CONCAT71((int7)((ulonglong)pDVar13 >> 8),1),apCStackX_18,
                   &pCStack_2,(MethodInfo *)0x0);
      }
      aIStack_4[0]._0_4_ = uVar11;
      aIStack_4[0].z = sVar12 + 1;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                         (cells,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        pDVar13 = cells;
        aIStack_4[0]._0_4_ = uVar10;
        aIStack_4[0].z = sVar12 + 1;
        puVar14 = (undefined8 *)FUN_?(auStack_15,cells,aIStack_4);
        pCStack_2 = (Cube *)*puVar14;
        pCVar16 = TypeInfo__CubeModelChunk;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  ((FaceFlags__Enum)CONCAT71((int7)((ulonglong)pCVar16 >> 8),8),
                   (FaceFlags__Enum)CONCAT71((int7)((ulonglong)pDVar13 >> 8),4),apCStackX_18,
                   &pCStack_2,(MethodInfo *)0x0);
      }
      aIStack_4[0]._0_4_ = uVar9;
      aIStack_4[0].z = sVar12 + -1;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                         (cells,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        pDVar13 = cells;
        aIStack_4[0]._0_4_ = uVar8;
        aIStack_4[0].z = sVar12 + -1;
        puVar14 = (undefined8 *)FUN_?(auStack_15,cells,aIStack_4);
        pCStack_2 = (Cube *)*puVar14;
        pCVar16 = TypeInfo__CubeModelChunk;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  ((FaceFlags__Enum)CONCAT71((int7)((ulonglong)pCVar16 >> 8),4),
                   (FaceFlags__Enum)CONCAT71((int7)((ulonglong)pDVar13 >> 8),8),apCStackX_18,
                   &pCStack_2,(MethodInfo *)0x0);
      }
      aIStack_4[0].y = sVar7;
      aIStack_4[0].x = sVar6 + 1;
      aIStack_4[0].z = sVar12;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                         (cells,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        pDVar13 = cells;
        aIStack_4[0].z = sVar12;
        puVar14 = (undefined8 *)FUN_?(auStack_15,cells,aIStack_4);
        pCStack_2 = (Cube *)*puVar14;
        pCVar16 = TypeInfo__CubeModelChunk;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  ((FaceFlags__Enum)CONCAT71((int7)((ulonglong)pCVar16 >> 8),0x20),
                   (FaceFlags__Enum)CONCAT71((int7)((ulonglong)pDVar13 >> 8),0x10),apCStackX_18,
                   &pCStack_2,(MethodInfo *)0x0);
      }
      aIStack_4[0].x = sVar6 + -1;
      aIStack_4[0].z = sVar12;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                         (cells,aIStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        aIStack_4[0].z = sVar12;
        puVar14 = (undefined8 *)FUN_?(auStack_15,cells,aIStack_4);
        pCStack_2 = (Cube *)*puVar14;
        pCVar16 = TypeInfo__CubeModelChunk;
        if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
          FUN_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  ((FaceFlags__Enum)CONCAT71((int7)((ulonglong)pCVar16 >> 8),0x10),
                   (FaceFlags__Enum)CONCAT71((int7)((ulonglong)cells >> 8),0x20),apCStackX_18,
                   &pCStack_2,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void SetInstanceDataRef(IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetInstanceDataRef
               (CubeModelChunk *this,IntVector *chunkPos,MVCubeModelBase *cubeInstance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Add_System__Guid__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCStack_1 = (Component__Class *)0x0;
  OStack_2.m_CachedPtr = (void *)0x0;
  pMStack_3 = (MeshFilter *)0x0;
  uStack_4._0_1_ = 0;
  uStack_4._1_7_ = 0;
  if (cubeInstance != (MVCubeModelBase *)0x0) {
    pCVar5 = (cubeInstance->fields).chunkInstances;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
               ,(MethodInfo *)0x0);
    if (pCVar5 != (ChunkInstances *)0x0) {
      ChunkInstances::ChunkInstances_add_Changed
                (pCVar5,(EventHandler_1_ChunkInstancesChanged_ *)this_03,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar6 != (PrefabPool *)0x0) {
        original = (pPVar6->fields).cubeModelChunkPrefab;
        pTVar7 = (cubeInstance->fields)._.transform;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_04 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)original,pTVar7,1,
                             CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab__UnityEngine__Transform__bool_
                            );
        if ((this_04 != (Component *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_04,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                    ((Object_1 *)pGVar8,(this->fields).name,(MethodInfo *)0x0);
          if ((MeshFilter *)this_04[1].monitor != (MeshFilter *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                      ((MeshFilter *)this_04[1].monitor,(this->fields).sharedMeshData.mesh,
                       (MethodInfo *)0x0);
            this_00 = this_04[1].fields._.m_CachedPtr;
            if (this_00 != (Renderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                        (this_00,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_04,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
              if (pTVar7 == (Transform *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uStack_11._0_4_ = (pVVar9->zeroVector).x;
              uStack_11._4_4_ = (pVVar9->zeroVector).y;
              fStack_12 = (pVVar9->zeroVector).z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar7->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar13);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Quaternion);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_15 = *(undefined1 (*) [8])
                             &TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
              uStack_16 = *(ulonglong *)
                            &(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).
                             z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar7->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar13);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_11._0_4_ = (pVVar9->oneVector).x;
              uStack_11._4_4_ = (pVVar9->oneVector).y;
              fStack_12 = (pVVar9->oneVector).z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar7->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar13);
              auStack_15 = *(undefined1 (*) [8])&(this->fields).meshBounds.m_Extents;
              fVar17 = auStack_15._0_4_;
              pCVar18 = this_04[2].klass;
              fVar19 = (this->fields).meshBounds.m_Extents.z;
              if (pCVar18 == (Component__Class *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              auStack_15._4_4_ = auStack_15._4_4_ + auStack_15._4_4_;
              auStack_15._0_4_ = fVar17 * TypeRef__System__Activator__T._0_4_;
              uStack_16 = CONCAT44(uStack_16._4_4_,fVar19 + fVar19);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pcVar20 = (pCVar18->_0).name;
              if (pcVar20 == (char *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar18,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pcVar20);
              pCVar18 = this_04[2].klass;
              if (pCVar18 != (Component__Class *)0x0) {
                uStack_11._0_4_ = (this->fields).meshBounds.m_Center.x;
                uStack_11._4_4_ = (this->fields).meshBounds.m_Center.y;
                fStack_12 = (this->fields).meshBounds.m_Center.z;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pcVar20 = (pCVar18->_0).name;
                if (pcVar20 == (char *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar18,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar14 = func_?(&UNK_?);
                  FUN_?(uVar14,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pcVar20);
                this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_04,(MethodInfo *)0x0);
                pGVar8 = (cubeInstance->fields)._.gameObject;
                if (pGVar8 != (GameObject *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar13 = (pGVar8->fields)._.m_CachedPtr;
                  if (pvVar13 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar14 = func_?(&UNK_?);
                    FUN_?(uVar14,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  value = (*pcRam_?)(pvVar13);
                  if (this_05 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                              (this_05,value,(MethodInfo *)0x0);
                    pCStack_1 = (Component__Class *)0x0;
                    OStack_2.m_CachedPtr = (void *)0x0;
                    pMStack_3 = (MeshFilter *)0x0;
                    uStack_4._0_1_ = 0;
                    uStack_4._1_7_ = 0;
                    auStack_15 = (undefined1  [8])0x0;
                    uStack_16 = 0;
                    mscorlib.dll::Interop::Interop_GetRandomBytes
                              (auStack_15,0x10,(MethodInfo *)0x0);
                    uVar14 = uStack_4;
                    auStack_15 = (undefined1  [8])
                                  ((ulonglong)auStack_15 & 0xfffffffffffffff | 0x4000000000000000);
                    auVar21 = auStack_15;
                    uStack_16 = uStack_16 & 0xffffffffffffff3f | 0x80;
                    uVar22 = uStack_16;
                    uStack_23 = (ulonglong)auStack_15;
                    uStack_24 = uStack_16;
                    if (iRam_? != 0) {
                      uVar25 = (uint)((ulonglong)&pGStack_26 >> 0xc);
                      uVar27 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                      do {
                        uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                        puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                        LOCK();
                        bVar30 = uVar28 == *puVar29;
                        if (bVar30) {
                          *puVar29 = uVar28 | 1L << (uVar25 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar30);
                    }
                    pCVar18 = this_04[2].klass;
                    if (iRam_? != 0) {
                      uVar25 = (uint)((ulonglong)&pCStack_1 >> 0xc);
                      uVar27 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                      do {
                        uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                        puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                        LOCK();
                        bVar30 = uVar28 == *puVar29;
                        if (bVar30) {
                          *puVar29 = uVar28 | 1L << (uVar25 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar30);
                    }
                    pMVar31 = (MeshFilter *)this_04[1].monitor;
                    if (iRam_? != 0) {
                      uVar25 = (uint)((ulonglong)&pMStack_3 >> 0xc);
                      uVar27 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                      do {
                        uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                        puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                        LOCK();
                        bVar30 = uVar28 == *puVar29;
                        if (bVar30) {
                          *puVar29 = uVar28 | 1L << (uVar25 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar30);
                    }
                    pMVar32 = this_04[1].fields._.m_CachedPtr;
                    if (iRam_? != 0) {
                      uVar25 = (uint)((ulonglong)&OStack_2 >> 0xc);
                      uVar27 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                      do {
                        uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                        puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                        LOCK();
                        bVar30 = uVar28 == *puVar29;
                        if (bVar30) {
                          *puVar29 = uVar28 | 1L << (uVar25 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar30);
                    }
                    this_01 = (this->fields).instances;
                    pGStack_26 = this_05;
                    pCStack_1 = pCVar18;
                    OStack_2.m_CachedPtr = pMVar32;
                    pMStack_3 = pMVar31;
                    if (this_01 !=
                        (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
                      uVar33 = 0xADDR;
                      aCStack_34[0].guid._a = auStack_15._0_4_;
                      aCStack_34[0].guid._b = auStack_15._4_2_;
                      aCStack_34[0].guid._c = auStack_15._6_2_;
                      aCStack_34[0].guid._d = (undefined1)uStack_16;
                      aCStack_34[0].guid._e = uStack_16._1_1_;
                      aCStack_34[0].guid._f = uStack_16._2_1_;
                      aCStack_34[0].guid._g = uStack_16._3_1_;
                      aCStack_34[0].guid._h = uStack_16._4_1_;
                      aCStack_34[0].guid._i = uStack_16._5_1_;
                      aCStack_34[0].guid._j = uStack_16._6_1_;
                      aCStack_34[0].guid._k = uStack_16._7_1_;
                      aCStack_34[0].transparent = (bool)uStack_4;
                      aCStack_34[0]._49_7_ = uStack_4._1_7_;
                      aCStack_34[0].gameObject = this_05;
                      aCStack_34[0].collider = (BoxCollider *)pCVar18;
                      aCStack_34[0].renderer = pMVar32;
                      aCStack_34[0].filter = pMVar31;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Guid,ChunkInstances+ChunkInstanceVariables]::
                      Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryInsert
                                (this_01,(Guid *)auStack_15,aCStack_34,0x82dc2702,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Add_System__Guid__ChunkInstances__ChunkInstanceVariables_
                                 ->klass->rgctx_data[0x22].method);
                      pCVar5 = (cubeInstance->fields).chunkInstances;
                      if (pCVar5 != (ChunkInstances *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__ChunkInstancesChanged);
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        uVar35 = uStack_4;
                        uVar27 = uStack_16;
                        auVar36 = auStack_15;
                        this_02 = (pCVar5->fields).chunkInstances;
                        if (this_02 !=
                            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                             *)0x0) {
                          IStackX_18.x = chunkPos->x;
                          IStackX_18.y = chunkPos->y;
                          IStackX_18.z = chunkPos->z;
                          auStack_15._0_4_ = auVar21._0_4_;
                          auStack_15._4_2_ = auVar21._4_2_;
                          auStack_15._6_2_ = auVar21._6_2_;
                          aCStack_34[0].guid._a = auStack_15._0_4_;
                          aCStack_34[0].guid._b = auStack_15._4_2_;
                          aCStack_34[0].guid._c = auStack_15._6_2_;
                          uStack_16._0_1_ = (undefined1)uVar22;
                          uStack_16._1_1_ = SUB81(uVar22,1);
                          uStack_16._2_1_ = SUB81(uVar22,2);
                          uStack_16._3_1_ = SUB81(uVar22,3);
                          uStack_16._4_1_ = SUB81(uVar22,4);
                          uStack_16._5_1_ = SUB81(uVar22,5);
                          uStack_16._6_1_ = SUB81(uVar22,6);
                          uStack_16._7_1_ = SUB81(uVar22,7);
                          aCStack_34[0].guid._d = (undefined1)uStack_16;
                          aCStack_34[0].guid._e = uStack_16._1_1_;
                          aCStack_34[0].guid._f = uStack_16._2_1_;
                          aCStack_34[0].guid._g = uStack_16._3_1_;
                          aCStack_34[0].guid._h = uStack_16._4_1_;
                          aCStack_34[0].guid._i = uStack_16._5_1_;
                          aCStack_34[0].guid._j = uStack_16._6_1_;
                          aCStack_34[0].guid._k = uStack_16._7_1_;
                          uStack_4._0_1_ = (bool)uVar14;
                          uStack_4._1_7_ = SUB87(uVar14,1);
                          aCStack_34[0].transparent = (bool)uStack_4;
                          aCStack_34[0]._49_7_ = uStack_4._1_7_;
                          auStack_15 = auVar36;
                          uStack_16 = uVar27;
                          uStack_4 = uVar35;
                          aCStack_34[0].gameObject = this_05;
                          aCStack_34[0].collider = (BoxCollider *)pCVar18;
                          aCStack_34[0].renderer = pMVar32;
                          aCStack_34[0].filter = pMVar31;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                          IntVector,ChunkInstances+ChunkInstanceVariables]::
                          Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__TryInsert
                                    (this_02,&IStackX_18,aCStack_34,
                                     (InsertionBehavior__Enum)
                                     CONCAT71((int7)((ulonglong)uVar33 >> 8),2),
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                                     ->klass->rgctx_data[0x22].method);
                          pEVar37 = (pCVar5->fields).Changed;
                          if (pEVar37 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
                            lVar38 = FUN_?(TypeInfo__ChunkInstancesChanged);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__System__EventArgs);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            *(undefined4 *)(lVar38 + 0x14) = *(undefined4 *)chunkPos;
                            *(int16_t *)(lVar38 + 0x18) = chunkPos->z;
                            *(undefined4 *)(lVar38 + 0x10) = 0;
                            (*(pEVar37->fields)._._.invoke_impl)
                                      ((pEVar37->fields)._._.method_code,cubeInstance,lVar38,
                                       (pEVar37->fields)._._.method);
                          }
                          return;
                        }
                      }
                    }
                    goto code_?;
                  }
                }
              }
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
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


/* Void SimpleFaceVisibilityTest(FaceFlags, FaceFlags, Cube ByRef, Cube ByRef) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SimpleFaceVisibilityTest
               (FaceFlags__Enum faceFlagCube,FaceFlags__Enum faceFlagOpposite,Cube **cube,
               Cube **neighborCube,MethodInfo *method)

{
  bVar1 = (byte)faceFlagCube;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar2 = *neighborCube;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pCVar2 != (Cube *)0x0) {
    pCVar2 = *cube;
    if (pCVar2 == (Cube *)0x0) goto code_?;
    if (((pCVar2->fields).hiddenSides & bVar1) != 0) {
      return;
    }
    if (((pCVar2->fields)._.unIndentedSides & bVar1) != 0) {
      if (*neighborCube == (Cube *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((*neighborCube)->fields)._.unIndentedSides & (byte)faceFlagOpposite) != 0) {
        puVar4 = &((*cube)->fields).hiddenSides;
        *puVar4 = *puVar4 | bVar1;
        if (*neighborCube != (Cube *)0x0) {
          puVar4 = &((*neighborCube)->fields).hiddenSides;
          *puVar4 = *puVar4 | (byte)faceFlagOpposite;
          return;
        }
        goto code_?;
      }
    }
    if (*(int *)&(TypeInfo__CubeModelChunk->_1).field_0x1c == 0) {
      FUN_?();
    }
    CubeModelChunk_AdvancedFaceVisibilityTest
              (faceFlagCube & 0xff,faceFlagOpposite & 0xff,cube,neighborCube,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_UpdateInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__Add_System__Guid_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Guid>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GStack_1._a = 0;
  GStack_1._b = 0;
  GStack_1._c = 0;
  GStack_1._d = 0;
  GStack_1._e = 0;
  GStack_1._f = 0;
  GStack_1._g = 0;
  GStack_1._h = 0;
  GStack_1._i = 0;
  GStack_1._j = 0;
  GStack_1._k = 0;
  pGStack_2 = (GameObject *)0x0;
  pBStack_3 = (BoxCollider *)0x0;
  pMStack_4 = (MeshRenderer *)0x0;
  pMStack_5 = (MeshFilter *)0x0;
  uStack_6._0_1_ = 0;
  uStack_6._1_7_ = 0;
  this_01 = (List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::Guid>);
  FUN_?(this_01,MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
  pDVar7 = (this->fields).instances;
  if (pDVar7 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)auStack_9 >> 0xc);
      uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    index = 0;
    auStack_9._12_4_ = 0;
    auStack_9._8_4_ = (pDVar7->fields)._version;
    uStack_14 = 2;
    GStack_15._a = 0;
    GStack_15._b = 0;
    GStack_15._c = 0;
    GStack_15._d = 0;
    GStack_15._e = 0;
    GStack_15._f = 0;
    GStack_15._g = 0;
    GStack_15._h = 0;
    GStack_15._i = 0;
    GStack_15._j = 0;
    GStack_15._k = 0;
    uStack_16 = (GameObject *)0x0;
    uStack_17 = (BoxCollider *)0x0;
    uStack_18 = (MeshRenderer *)0x0;
    uStack_19 = (MeshFilter *)0x0;
    uStack_20._0_1_ = 0;
    uStack_20._1_7_ = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    ppDStack_23 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                  auStack_9._8_8_;
    pvStack_24 = (void *)0x0;
    uStack_25._0_4_ = 0.0;
    uStack_25._4_4_ = 0.0;
    GStack_26._a = 0;
    GStack_26._b = 0;
    GStack_26._c = 0;
    GStack_26._d = 0;
    GStack_26._e = 0;
    GStack_26._f = 0;
    GStack_26._g = 0;
    GStack_26._h = 0;
    GStack_26._i = 0;
    GStack_26._j = 0;
    GStack_26._k = 0;
    uStack_27 = (GameObject *)0x0;
    uStack_28 = (BoxCollider *)0x0;
    pMStack_29 = (MeshRenderer *)0x0;
    pMStack_30 = (MeshFilter *)0x0;
    uStack_31._0_1_ = 0;
    uStack_31._1_7_ = 0;
    uStack_32 = 2;
    pDStack_33 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0;
    ppDStack_34 = &pDStack_35;
    auStack_9._0_8_ = pDVar7;
    pDStack_35 = pDVar7;
    while (cVar36 = FUN_?(&pDStack_35,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                                 ), uVar37 = uStack_31, pMVar38 = pMStack_30, this_00 = pMStack_29,
          pBVar39 = uStack_28, pGVar40 = uStack_27, uVar41 = GStack_26._8_8_,
          uVar42 = GStack_26._0_8_, uVar43 = uStack_25, pvVar44 = pvStack_24,
          pMVar45 = 
          MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
          , cVar36 != '\0') {
      iVar46 = GStack_26._a;
      uVar47 = GStack_26._4_4_;
      uVar48 = GStack_26._8_4_;
      uVar49 = GStack_26._12_4_;
      uVar50 = (undefined4)uStack_27;
      uVar51 = uStack_27._4_4_;
      uVar52 = (undefined4)uStack_28;
      uVar53 = uStack_28._4_4_;
      if ((MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if ((pMVar45->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uVar54 = uStack_31;
      uVar55 = GStack_26._8_8_;
      uVar56 = GStack_26._0_8_;
      GStack_26._a = (int32_t)uVar42;
      GStack_26._b = SUB82(uVar42,4);
      GStack_26._c = SUB82(uVar42,6);
      GStack_1._a = GStack_26._a;
      GStack_1._b = GStack_26._b;
      GStack_1._c = GStack_26._c;
      GStack_26._d = (uint8_t)uVar41;
      GStack_26._e = SUB81(uVar41,1);
      GStack_26._f = SUB81(uVar41,2);
      GStack_26._g = SUB81(uVar41,3);
      GStack_26._h = SUB81(uVar41,4);
      GStack_26._i = SUB81(uVar41,5);
      GStack_26._j = SUB81(uVar41,6);
      GStack_26._k = SUB81(uVar41,7);
      GStack_1._d = GStack_26._d;
      GStack_1._e = GStack_26._e;
      GStack_1._f = GStack_26._f;
      GStack_1._g = GStack_26._g;
      GStack_1._h = GStack_26._h;
      GStack_1._i = GStack_26._i;
      GStack_1._j = GStack_26._j;
      GStack_1._k = GStack_26._k;
      pGStack_2 = pGVar40;
      pBStack_3 = pBVar39;
      pMStack_4 = this_00;
      pMStack_5 = pMVar38;
      uStack_31._0_1_ = (bool)uVar37;
      uStack_31._1_7_ = SUB87(uVar37,1);
      uStack_6._0_1_ = (bool)uStack_31;
      uStack_6._1_7_ = uStack_31._1_7_;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pGStack_2 >> 0xc);
        uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      uStack_31._0_1_ = (bool)uVar37;
      uStack_31._1_7_ = SUB87(uVar37,1);
      CStack_57.transparent = (bool)uStack_31;
      CStack_57._49_7_ = uStack_31._1_7_;
      CStack_57.guid._a = iVar46;
      CStack_57.guid._4_4_ = uVar47;
      CStack_57.guid._8_4_ = uVar48;
      CStack_57.guid._12_4_ = uVar49;
      CStack_57.gameObject._0_4_ = uVar50;
      CStack_57.gameObject._4_4_ = uVar51;
      CStack_57.collider._0_4_ = uVar52;
      CStack_57.collider._4_4_ = uVar53;
      GStack_26._0_8_ = uVar56;
      GStack_26._8_8_ = uVar55;
      uStack_31 = uVar54;
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar40 == (GameObject *)0x0) {
        bVar13 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar13 = (pGVar40->fields)._.m_CachedPtr != (void *)0x0;
      }
      uVar42 = uStack_25;
      pMVar45 = MethodInfo__System__Collections__Generic__List<System::Guid>__Add_System__Guid_;
      if (bVar13) {
        if (this_00 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  ((Renderer *)this_00,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 == (MVWorldObjectClientManager *)0x0) {
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        pvStack_59 = *(void **)&(this->fields).meshBounds.m_Center;
        _fStack_1c0 = *(undefined8 *)&(this->fields).meshBounds.m_Center.z;
        uStack_60._0_4_ = (this->fields).meshBounds.m_Extents.y;
        uStack_60._4_4_ = (this->fields).meshBounds.m_Extents.z;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (this_02,(Bounds *)&pvStack_59,(MethodInfo *)0x0);
      }
      else {
        if (this_01 == (List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        piVar61 = &(this_01->fields)._version;
        *piVar61 = *piVar61 + 1;
        pPVar62 = (this_01->fields)._items;
        uVar8 = (this_01->fields)._size;
        if (pPVar62 == (Painter2D_Painter2DJobData__Array *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        if (uVar8 < (uint)pPVar62->max_length) {
          (this_01->fields)._size = uVar8 + 1;
          if ((uint)pPVar62->max_length <= uVar8) {
            FUN_?();
            goto code_?;
          }
          pPVar63 = pPVar62->vector + (int)uVar8;
          (pPVar63->node).m_Handle.handle = pvVar44;
          uStack_25._0_4_ = (float)uVar43;
          uStack_25._4_4_ = SUB84(uVar43,4);
          pPVar63->snapshotIndex = (int32_t)(float)uStack_25;
          *(float *)&pPVar63->field_0xc = uStack_25._4_4_;
          uStack_25 = uVar42;
        }
        else {
          pvStack_59 = pvVar44;
          uStack_25._0_4_ = (float)uVar43;
          uStack_25._4_4_ = SUB84(uVar43,4);
          fStack_64 = (float)uStack_25;
          fStack_65 = uStack_25._4_4_;
          uStack_25 = uVar42;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          Painter2D+Painter2DJobData]::
          List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData__AddWithResize
                    (this_01,(Painter2D_Painter2DJobData *)&pvStack_59,
                     pMVar45->klass->rgctx_data[0xe].method);
        }
      }
    }
    if (this_01 != (List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)0x0) {
      uVar8 = (this_01->fields)._size - 1;
      if (-1 < (int)uVar8) {
        lVar66 = (longlong)(int)uVar8;
        lVar67 = (lVar66 + 2) * 0x10;
        do {
          pDVar7 = (this->fields).instances;
          if ((uint)(this_01->fields)._size <= uVar8) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar58 = (code *)swi(3);
            (*pcVar58)();
            return;
          }
          pPVar62 = (this_01->fields)._items;
          if (pPVar62 == (Painter2D_Painter2DJobData__Array *)0x0) goto code_?;
          if ((uint)pPVar62->max_length <= uVar8) {
            FUN_?();
            pcVar58 = (code *)swi(3);
            (*pcVar58)();
            return;
          }
          if (pDVar7 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
          goto code_?;
          plVar68 = (longlong *)
                   ((longlong)&((Painter2D_Painter2DJobData__Array *)(pPVar62->vector + -2))->klass +
                   lVar67);
          pDStack_33 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)*plVar68;
          ppDStack_34 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                         plVar68[1];
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Guid,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                    (pDVar7,(Guid *)&pDStack_33,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                    );
          uVar8 = uVar8 - 1;
          lVar67 = lVar67 + -0x10;
          lVar66 = lVar66 + -1;
        } while (-1 < lVar66);
      }
      fVar69 = TypeRef__System__Activator__T._0_4_;
      pDVar7 = (this->fields).instances;
      pMVar45 = 
      System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
      ;
      while (System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
                  = pMVar45,
            pDVar7 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
        if ((pDVar7->fields)._count - (pDVar7->fields)._freeCount <= index) {
          return;
        }
        System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt
                  ((KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)auStack_9,
                   (IEnumerable_1_KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables_
                    *)(this->fields).instances,index,pMVar45);
        pMVar70 = 
        MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
        ;
        if ((MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if ((pMVar70->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        uVar43 = uStack_20;
        pGVar40 = uStack_16;
        iVar46 = GStack_15._a;
        uVar47 = GStack_15._4_4_;
        uVar48 = GStack_15._8_4_;
        uVar49 = GStack_15._12_4_;
        GStack_1._a = GStack_15._a;
        GStack_1._b = GStack_15._b;
        GStack_1._c = GStack_15._c;
        GStack_1._d = GStack_15._d;
        GStack_1._e = GStack_15._e;
        GStack_1._f = GStack_15._f;
        GStack_1._g = GStack_15._g;
        GStack_1._h = GStack_15._h;
        GStack_1._i = GStack_15._i;
        GStack_1._j = GStack_15._j;
        GStack_1._k = GStack_15._k;
        uVar50 = (undefined4)uStack_16;
        uVar51 = uStack_16._4_4_;
        uVar52 = (undefined4)uStack_17;
        uVar53 = uStack_17._4_4_;
        pGStack_2 = uStack_16;
        pBStack_3 = uStack_17;
        uVar71 = (undefined4)uStack_18;
        uVar72 = uStack_18._4_4_;
        uVar73 = (undefined4)uStack_19;
        uVar74 = uStack_19._4_4_;
        pMStack_4 = uStack_18;
        pMStack_5 = uStack_19;
        uStack_6._0_1_ = (bool)uStack_20;
        uStack_6._1_7_ = uStack_20._1_7_;
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&pGStack_2 >> 0xc);
          uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        auVar75._8_4_ = (undefined4)uStack_17;
        auVar75._0_8_ = uStack_16;
        auVar75._12_4_ = uStack_17._4_4_;
        pOVar76 = auVar75._8_8_;
        pDStack_33 = *(Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                       &(this->fields).meshBounds.m_Extents;
        fVar77 = (this->fields).meshBounds.m_Extents.z;
        fVar77 = fVar77 + fVar77;
        if (pOVar76 == (Object *)0x0) {
          FUN_?();
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        uStack_78 = CONCAT44(SUB84(pDStack_33,4) + SUB84(pDStack_33,4),
                              SUB84(pDStack_33,0) * fVar69);
        fStack_79 = fVar77;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar80 = pOVar76[1].klass;
        if (pOVar80 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar76,(MethodInfo *)0x0);
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        pcVar58 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar58 = (code *)FUN_?(&UNK_?), pcVar58 == (code *)0x0)) {
          uVar43 = func_?(&UNK_?);
          FUN_?(uVar43,0);
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        pcRam_? = pcVar58;
        (*pcRam_?)(pOVar80);
        auVar81._8_4_ = uVar52;
        auVar81._0_8_ = pGVar40;
        auVar81._12_4_ = uVar53;
        pOVar76 = auVar81._8_8_;
        if (pOVar76 == (Object *)0x0) {
code_?:
          FUN_?();
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        pvStack_59 = *(void **)&(this->fields).meshBounds.m_Center;
        fStack_64 = (this->fields).meshBounds.m_Center.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar80 = pOVar76[1].klass;
        if (pOVar80 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar76,(MethodInfo *)0x0);
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        pcVar58 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar58 = (code *)FUN_?(&UNK_?), pcVar58 == (code *)0x0)) {
          uVar43 = func_?(&UNK_?);
          FUN_?(uVar43,0);
          pcVar58 = (code *)swi(3);
          (*pcVar58)();
          return;
        }
        pcRam_? = pcVar58;
        (*pcRam_?)(pOVar80,(Bounds *)&pvStack_59);
        uVar42 = uStack_20;
        pDVar7 = (this->fields).instances;
        if (pDVar7 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
        goto code_?;
        uStack_20._0_1_ = (bool)uVar43;
        uStack_20._1_7_ = SUB87(uVar43,1);
        CStack_57.transparent = (bool)uStack_20;
        CStack_57._49_7_ = uStack_20._1_7_;
        pDStack_33 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)
                      auStack_9._0_8_;
        ppDStack_34 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ **)
                       auStack_9._8_8_;
        uStack_20 = uVar42;
        CStack_57.guid._a = iVar46;
        CStack_57.guid._4_4_ = uVar47;
        CStack_57.guid._8_4_ = uVar48;
        CStack_57.guid._12_4_ = uVar49;
        CStack_57.gameObject._0_4_ = uVar50;
        CStack_57.gameObject._4_4_ = uVar51;
        CStack_57.collider._0_4_ = uVar52;
        CStack_57.collider._4_4_ = uVar53;
        CStack_57.renderer._0_4_ = uVar71;
        CStack_57.renderer._4_4_ = uVar72;
        CStack_57.filter._0_4_ = uVar73;
        CStack_57.filter._4_4_ = uVar74;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryInsert
                  (pDVar7,(Guid *)&pDStack_33,&CStack_57,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar45 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                   ->klass->rgctx_data[0x22].method);
        index = index + 1;
        pMVar45 = 
        System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
        ;
        pDVar7 = (this->fields).instances;
      }
    }
  }
code_?:
  FUN_?();
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* CubeModelChunk() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FaceData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FaceData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FaceData__Array *)FUN_?(TypeInfo__FaceData);
  pFVar2 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if (pFVar1 == (FaceData__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar2 != (FaceData *)0x0) && (lVar4 = FUN_?(pFVar2), lVar4 == 0)) {
    uVar5 = FUN_?();
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pFVar1,0,pFVar2);
  pFVar2 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if ((pFVar2 != (FaceData *)0x0) &&
     (lVar4 = FUN_?(pFVar2,(pFVar1->klass->_0).element_class), lVar4 == 0)) {
    uVar5 = FUN_?();
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pFVar1,1,pFVar2);
  pFVar2 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if ((pFVar2 != (FaceData *)0x0) &&
     (lVar4 = FUN_?(pFVar2,(pFVar1->klass->_0).element_class), lVar4 == 0)) {
    uVar5 = FUN_?();
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pFVar1,2,pFVar2);
  pFVar2 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if ((pFVar2 != (FaceData *)0x0) &&
     (lVar4 = FUN_?(pFVar2,(pFVar1->klass->_0).element_class), lVar4 == 0)) {
    uVar5 = FUN_?();
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pFVar1,3,pFVar2);
  pFVar2 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if ((pFVar2 != (FaceData *)0x0) &&
     (lVar4 = FUN_?(pFVar2,(pFVar1->klass->_0).element_class), lVar4 == 0)) {
    uVar5 = FUN_?();
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pFVar1,4,pFVar2);
  pFVar2 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if ((pFVar2 != (FaceData *)0x0) &&
     (lVar4 = FUN_?(pFVar2,(pFVar1->klass->_0).element_class), lVar4 == 0)) {
    uVar5 = FUN_?();
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pFVar1,5,pFVar2);
  bVar6 = iRam_? != 0;
  TypeInfo__CubeModelChunk->static_fields->faceData = pFVar1;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)TypeInfo__CubeModelChunk->static_fields >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* CubeModelChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__ctor
               (CubeModelChunk *this,IntVector *iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_chunk);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>
                        );
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Guid]::
           EqualityComparer_1_System_Guid__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_System_Guid_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (pDVar1->fields)._comparer = (IEqualityComparer_1_System_Guid_ *)0x0, bVar3)) {
    uVar4 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = iRam_? != 0;
  (this->fields).instances = pDVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).instances >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pDVar8 = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>
                        );
  pEVar9 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[MV::WorldObject::
           IntVector]::EqualityComparer_1_MV_WorldObject_IntVector__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar9 != (EqualityComparer_1_MV_WorldObject_IntVector_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (pDVar8->fields)._comparer = (IEqualityComparer_1_MV_WorldObject_IntVector_ *)0x0, bVar3)) {
    uVar4 = (uint)((ulonglong)&(pDVar8->fields)._comparer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = iRam_? != 0;
  (this->fields).cells = pDVar8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).cells >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  values = (String__Array *)FUN_?(TypeInfo__System__String);
  if (values == (String__Array *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_?(values,0,StringLiteral_chunk);
  pSVar11 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)iVector,(MethodInfo *)0x0);
  FUN_?(values,1,pSVar11);
  FUN_?(values,2,::StringLiteral__);
  pSVar11 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector->y,(MethodInfo *)0x0);
  FUN_?(values,3,pSVar11);
  FUN_?(values,4,::StringLiteral__);
  mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector->z,(MethodInfo *)0x0);
  FUN_?(values);
  pSVar11 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).name = pSVar11;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).name >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  iVar12 = iVector->y;
  (this->fields).chunkPos.x = iVector->x;
  (this->fields).chunkPos.y = iVar12;
  (this->fields).chunkPos.z = iVector->z;
  this_00 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(this_00,(MethodInfo *)0x0);
  SStack_13.mesh = (Mesh *)0x0;
  SStack_13.material = (Material *)0x0;
  SharedMeshData::SharedMeshData__ctor(&SStack_13,this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).sharedMeshData.mesh = SStack_13.mesh;
  (this->fields).sharedMeshData.material = SStack_13.material;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).sharedMeshData >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}

