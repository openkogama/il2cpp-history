
/* Void AddToChunk(IntVector, Cube, Boolean) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AddToChunk
               (CubeModelChunk *this,IntVector iVector,Cube *cube,bool setVisibility,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x9aa4);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (pDVar1,iVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 == 0) {
      piVar3 = &(this->fields).cubeCount;
      *piVar3 = *piVar3 + 1;
    }
    pDVar1 = (this->fields).cells;
    uVar4 = ZEXT48(cube);
    func_?(&stack0xfffffff4);
    if ((cube != (Cube *)0x0) && (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)) {
      value._4_2_ = (short)(CONCAT35((int3)(uVar4 >> 0x28),
                                     CONCAT14(((cube->fields)._.unIndentedSides & 0x3f) != 0x3f,
                                              (int)uVar4)) >> 0x20);
      value.cube = (Cube *)(int)uVar4;
      value._6_2_ = (short)(uVar4 >> 0x30);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__set_Item
                (pDVar1,iVector,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                );
      if (setVisibility != 0) {
        CubeModelChunk_SetCubeVisibilityWithNeighbors(this,iVector,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AdvancedFaceVisibilityTest(FaceFlags, FaceFlags, Cube ByRef, Cube ByRef) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AdvancedFaceVisibilityTest
               (FaceFlags__Enum faceFlagCube,FaceFlags__Enum faceFlagOpposite,Cube **cube,
               Cube **neighborCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                   (faceFlagCube,(MethodInfo *)0x0);
  if (*cube == (Cube *)0x0) goto code_?;
  pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)*cube,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  Cube::Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar1 = (Vector3__Array *)&stack0xfffffff8;
  bVar2 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
                    (face,(Vector3__Array **)pVVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  faceFlagCube._0_1_ = 0;
  unaff_EDI = (Vector3__Array *)
              MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                        (0,(MethodInfo *)0x0);
  if (*neighborCube == (Cube *)0x0) goto code_?;
  faceFlagOpposite._0_1_ = 0xce;
  neighborCube = (Cube **)MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                    ((CubeBase *)*neighborCube,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  cube = (Cube **)&UNK_?;
  pVVar3 = Cube::Cube_GetFace_1
                     ((Vector3__Array *)neighborCube,(Face__Enum)unaff_EDI,(MethodInfo *)0x0);
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
                    ((Face__Enum)unaff_EDI,(Vector3__Array **)&stack0xfffffff4,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    uVar4 = 0;
    pVVar5 = pVVar1->vector;
    do {
      if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar1->max_length <= uVar4) goto code_?;
      if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
      unaff_EDI = (Vector3__Array *)(Face__Enum_Back - uVar4);
      if ((Vector3__Array *)pVVar3->max_length <= unaff_EDI) goto code_?;
      if (pVVar5->x != *(float *)((int)pVVar3 + (int)unaff_EDI * 0xc + 0x10)) {
        return;
      }
      pVStack6 = (Vector3__Array *)uVar4;
      iVar7 = func_?();
      pVVar8 = *(Vector3__Array **)(iVar7 + 8);
      iVar7 = func_?();
      if ((float)pVVar8 != *(float *)(iVar7 + 8)) {
        return;
      }
      uVar4 = uVar4 + 1;
      pVVar5 = pVVar5 + 1;
    } while ((int)uVar4 < 4);
    goto code_?;
  case Face__Enum_Front:
  case Face__Enum_Back:
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x0;
    unaff_EDI = pVVar3;
    pfVar9 = (float *)func_?();
    fVar10 = *pfVar9;
    if (unaff_EDI == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x1;
    pfVar9 = (float *)func_?();
    if (fVar10 != *pfVar9) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 4)) {
      return;
    }
    pfVar9 = (float *)func_?();
    fVar10 = *pfVar9;
    pfVar9 = (float *)func_?();
    if (fVar10 != *pfVar9) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 4)) {
      return;
    }
    pfVar9 = (float *)func_?();
    fVar10 = *pfVar9;
    pfVar9 = (float *)func_?();
    if (fVar10 != *pfVar9) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 4)) {
      return;
    }
    pfVar9 = (float *)func_?();
    fVar10 = *pfVar9;
    pfVar9 = (float *)func_?();
    bVar11 = NAN(fVar10) || NAN(*pfVar9);
    bVar12 = fVar10 == *pfVar9;
    break;
  case Face__Enum_Left:
  case Face__Enum_Right:
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x0;
    unaff_EDI = pVVar3;
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 8);
    if (unaff_EDI == (Vector3__Array *)0x0) goto code_?;
    pVStack6 = (Vector3__Array *)0x1;
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 8)) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 4)) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 8);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 8)) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 4)) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 8);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 8)) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 != *(float *)(iVar7 + 4)) {
      return;
    }
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 8);
    iVar7 = func_?();
    bVar11 = NAN(fVar10) || NAN(*(float *)(iVar7 + 8));
    bVar12 = fVar10 == *(float *)(iVar7 + 8);
    break;
  default:
    goto code_?;
  }
  neighborCube = (Cube **)0x3;
  cube = (Cube **)0x2;
  faceFlagOpposite._0_1_ = FaceFlags__Enum_Bottom|FaceFlags__Enum_Top;
  faceFlagCube._0_1_ = FaceFlags__Enum_Bottom|FaceFlags__Enum_Top;
  if (bVar11 != bVar12) {
    iVar7 = func_?();
    fVar10 = *(float *)(iVar7 + 4);
    iVar7 = func_?();
    if (fVar10 == *(float *)(iVar7 + 4)) {
code_?:
      if (*cube != (Cube *)0x0) {
        puVar13 = &((*cube)->fields).hiddenSides;
        *puVar13 = *puVar13 | (undefined1)faceFlagCube;
        if (*neighborCube != (Cube *)0x0) {
          puVar13 = &((*neighborCube)->fields).hiddenSides;
          *puVar13 = *puVar13 | (undefined1)faceFlagOpposite;
          return;
        }
      }
code_?:
      func_?();
code_?:
      uVar4 = func_?();
      bVar12 = (uVar4 & 0x100) != 0;
      pbVar14 = (byte *)(uVar4 - 0x60);
      bVar15 = *pbVar14;
      bVar16 = *pbVar14;
      *pbVar14 = bVar16 + extraout_CH + bVar12;
      *(char *)(uVar4 - 0x60) =
           *(char *)(uVar4 - 0x60) + extraout_CH +
           (CARRY1(bVar15,extraout_CH) || CARRY1(bVar16 + extraout_CH,bVar12));
      pcVar17 = (code *)swi(3);
      pVStack6 = unaff_EDI;
      (*pcVar17)();
      return;
    }
  }
code_?:
  return;
}


/* Boolean AllFaceCornersIsTouchingCubeBorder(Face, Vector3[] ByRef) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
               (Face__Enum face,Vector3__Array **faceIndices,MethodInfo *method)

{
  iStack_1 = -1;
  fStack_2 = _UNK_?;
  switch(face) {
  case Face__Enum_Top:
    iStack_1 = 1;
    break;
  case Face__Enum_Bottom:
    iStack_1 = 1;
    fStack_2 = _UNK_?;
    break;
  case Face__Enum_Front:
    iStack_1 = 2;
    fStack_2 = _UNK_?;
    break;
  case Face__Enum_Back:
    iStack_1 = 2;
    break;
  case Face__Enum_Left:
    fStack_2 = _UNK_?;
  case Face__Enum_Right:
    iStack_1 = 0;
  }
  pbVar3 = (byte *)0x0;
  pVVar4 = *faceIndices;
  if (pVVar4 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    unaff_EDI = pVVar4->vector;
    while( true ) {
      if ((int)pVVar4->max_length <= (int)pbVar3) {
        return 1;
      }
      if ((byte *)pVVar4->max_length <= pbVar3) break;
      VStack_5.z = unaff_EDI->z;
      VStack_5.x = unaff_EDI->x;
      VStack_5.y = unaff_EDI->y;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_5,iStack_1,(MethodInfo *)0x0);
      if (fVar6 != fStack_2) {
        return 0;
      }
      pbVar3 = pbVar3 + 1;
      unaff_EDI = unaff_EDI + 1;
    }
  }
  uVar7 = func_?();
  extraout_EDX[-0x5df0efa9] = extraout_EDX[-0x5df0efa9] | (byte)((ushort)uVar7 >> 8);
  bVar8 = *pbVar3;
  bVar9 = (byte)pVVar4;
  *pbVar3 = *pbVar3 + bVar9;
  uRam_? = (undefined1)uVar7;
  bVar10 = *extraout_EDX;
  bVar11 = (byte)((uint)extraout_EDX >> 8);
  bVar12 = *extraout_EDX + bVar11;
  *extraout_EDX = bVar12 + CARRY1(bVar8,bVar9);
  *extraout_EDX =
       *extraout_EDX + (char)((uint)pVVar4 >> 8) +
       (CARRY1(bVar10,bVar11) || CARRY1(bVar12,CARRY1(bVar8,bVar9)));
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)(unaff_EDI,unaff_EDI,unaff_EDI);
  return bVar14;
}


/* Void ChunkInstancesChanged(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_ChunkInstancesChanged
               (CubeModelChunk *this,Object *sender,ChunkInstancesChanged *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstances);
    func_?(0xc3dc);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(0x2ab0);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryAdd_System__Guid__ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryGetValue_System__Guid__ChunkInstances__ChunkInstanceVariables__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&StringLiteral_CubeModelChunk___ChunkInstanceCh);
    func_?(&StringLiteral_Could_not_remove_instance_becuas);
    cRam_? = '\x01';
  }
  cVar1 = '\0';
  uStack_2 = 0;
  uStack_3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if (sender != (Object *)0x0) {
    pOVar12 = sender->klass;
    bVar13 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((pOVar12->_1).naturalAligment < bVar13) ||
       ((MVCubeModelBase__Class *)(pOVar12->_1).typeHierarchy[bVar13 - 1] != TypeInfo__MVCubeModelBase
       )) {
      bVar13 = (TypeInfo__ChunkInstances->_1).naturalAligment;
      if (((pOVar12->_1).naturalAligment < bVar13) ||
         (this_00 = (ChunkInstances *)sender,
         (pOVar12->_1).typeHierarchy[bVar13 - 1] != (Il2CppClass *)TypeInfo__ChunkInstances))
      goto code_?;
    }
    else {
      this_00 = (ChunkInstances *)sender[0x1b].monitor;
      if ((ChunkInstances *)sender[0x1b].monitor == (ChunkInstances *)0x0) {
code_?:
        pTVar14 = mscorlib.dll::System::Object::Object_GetType(sender,(MethodInfo *)0x0);
        pSVar15 = StringLiteral_CubeModelChunk___ChunkInstanceCh;
        if (pTVar14 == (Type *)0x0) {
          str1 = (String *)0x0;
        }
        else {
          str1 = (String *)
                 (*(code *)(pTVar14->klass->vtable).ToString.method)
                           (pTVar14,(pTVar14->klass->vtable).GetCustomAttributes.methodPtr);
        }
        pSVar15 = mscorlib.dll::System::String::String_Concat_3(pSVar15,str1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar15,(MethodInfo *)0x0);
        return;
      }
    }
    if (e != (ChunkInstancesChanged *)0x0) {
      uVar16 = (e->fields).chunkPos.x;
      uVar17 = (e->fields).chunkPos.y;
      a.y = uVar17;
      a.x = uVar16;
      iStack_18 = (e->fields).chunkPos.z;
      b = (this->fields).chunkPos;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        cVar1 = '\0';
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      a.z = iStack_18;
      bVar19 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                         (a,b,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        return;
      }
      iVar20 = (e->fields).changeType;
      if (iVar20 == 0) {
        pCVar21 = ChunkInstances::ChunkInstances_GetChunk
                            ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                             (e->fields).chunkPos,(MethodInfo *)0x0);
        pDVar22 = (this->fields).instances;
        uVar4 = *(undefined4 *)&pCVar21->transparent;
        GVar23 = pCVar21->guid;
        GVar24 = pCVar21->guid;
        uVar25 = (pCVar21->guid)._f;
        uVar26 = (pCVar21->guid)._g;
        GVar27._g = uVar26;
        GVar27._f = uVar25;
        uVar28 = (pCVar21->guid)._a;
        uVar29 = (pCVar21->guid)._b;
        uVar30 = (pCVar21->guid)._c;
        uVar31 = (pCVar21->guid)._d;
        uVar32 = (pCVar21->guid)._e;
        GVar27._e = uVar32;
        GVar27._d = uVar31;
        GVar27._c = uVar30;
        GVar27._b = uVar29;
        GVar27._a = uVar28;
        uVar33 = (pCVar21->guid)._h;
        uVar34 = (pCVar21->guid)._i;
        uVar35 = (pCVar21->guid)._j;
        uVar36 = (pCVar21->guid)._k;
        GVar27._k = uVar36;
        GVar27._j = uVar35;
        GVar27._i = uVar34;
        GVar27._h = uVar33;
        pGVar37 = pCVar21->gameObject;
        pBVar38 = pCVar21->collider;
        pMVar39 = pCVar21->renderer;
        pMVar40 = pCVar21->filter;
        if (pDVar22 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          uVar41 = (pCVar21->guid)._j;
          uVar42 = (pCVar21->guid)._k;
          value_00.guid._k = uVar42;
          value_00.guid._j = uVar41;
          uVar43 = (pCVar21->guid)._a;
          uVar44 = (pCVar21->guid)._b;
          uVar45 = (pCVar21->guid)._c;
          uVar46 = (pCVar21->guid)._d;
          uVar47 = (pCVar21->guid)._e;
          uVar48 = (pCVar21->guid)._f;
          uVar49 = (pCVar21->guid)._g;
          uVar50 = (pCVar21->guid)._h;
          uVar51 = (pCVar21->guid)._i;
          value_00.guid._i = uVar51;
          value_00.guid._h = uVar50;
          value_00.guid._g = uVar49;
          value_00.guid._f = uVar48;
          value_00.guid._e = uVar47;
          value_00.guid._d = uVar46;
          value_00.guid._c = uVar45;
          value_00.guid._b = uVar44;
          value_00.guid._a = uVar43;
          value_00.gameObject = pCVar21->gameObject;
          value_00.collider = pCVar21->collider;
          value_00.renderer = pCVar21->renderer;
          value_00.filter._0_2_ = (short)pCVar21->filter;
          value_00.filter._2_2_ = (short)((uint)pCVar21->filter >> 0x10);
          value_00._32_4_ = uVar4;
          bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Guid,ChunkInstances+ChunkInstanceVariables]::
                   Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryAdd
                             (pDVar22,GVar27,value_00,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryAdd_System__Guid__ChunkInstances__ChunkInstanceVariables_
                             );
          if (bVar19 != 0) {
            return;
          }
          pDVar22 = (this->fields).instances;
          if (pDVar22 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
            value_01.gameObject = pGVar37;
            value_01.guid = GVar23;
            value_01.collider = pBVar38;
            value_01.renderer = pMVar39;
            value_01.filter = pMVar40;
            value_01._32_4_ = uVar4;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Guid,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__set_Item
                      (pDVar22,GVar24,value_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                      );
            return;
          }
        }
      }
      else if (iVar20 == 1) {
        bVar19 = ChunkInstances::ChunkInstances_Contains
                           (this_00,(e->fields).chunkPos,(MethodInfo *)0x0);
        if (bVar19 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Could_not_remove_instance_becuas,(MethodInfo *)0x0);
          return;
        }
        pCVar21 = ChunkInstances::ChunkInstances_GetChunk
                            ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                             (e->fields).chunkPos,(MethodInfo *)0x0);
        uVar52 = (pCVar21->guid)._c;
        uVar53 = (pCVar21->guid)._a;
        uVar54 = (pCVar21->guid)._b;
        GVar24._b = uVar54;
        GVar24._a = uVar53;
        uVar55 = (pCVar21->guid)._d;
        uVar56 = (pCVar21->guid)._e;
        uVar57 = (pCVar21->guid)._f;
        uVar58 = (pCVar21->guid)._g;
        GVar24._g = uVar58;
        GVar24._f = uVar57;
        GVar24._e = uVar56;
        GVar24._d = uVar55;
        uVar4._0_1_ = (pCVar21->guid)._h;
        uVar4._1_1_ = (pCVar21->guid)._i;
        uVar4._2_1_ = (pCVar21->guid)._j;
        uVar4._3_1_ = (pCVar21->guid)._k;
        pEVar59 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar59,(Object *)this,
                   MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                   ,(MethodInfo *)0x0);
        ChunkInstances::ChunkInstances_remove_Changed
                  (this_00,(EventHandler_1_ChunkInstancesChanged_ *)pEVar59,(MethodInfo *)0x0);
        pDVar22 = (this->fields).instances;
        if (pDVar22 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          GVar24._c = uVar52;
          GVar24._h = (char)(short)uVar4;
          GVar24._i = (char)((ushort)(short)uVar4 >> 8);
          GVar24._j = uVar4._2_1_;
          GVar24._k = uVar4._3_1_;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Guid,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                    (pDVar22,GVar24,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                    );
          return;
        }
      }
      else if (iVar20 == 2) {
        pEVar59 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar59,(Object *)this,
                   MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                   ,(MethodInfo *)0x0);
        ChunkInstances::ChunkInstances_remove_Changed
                  (this_00,(EventHandler_1_ChunkInstancesChanged_ *)pEVar59,(MethodInfo *)0x0);
        pDVar22 = (this->fields).instances;
        if (pDVar22 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)pDVar22,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Clear__
                    );
          return;
        }
      }
      else {
        if (iVar20 != 3) {
          if (iVar20 == 4) {
            ChunkInstances::ChunkInstances_GetChunk
                      ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                       (e->fields).chunkPos,(MethodInfo *)0x0);
            if ((this->fields).instances ==
                (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
            goto code_?;
            func_?();
          }
          return;
        }
        pCVar21 = ChunkInstances::ChunkInstances_GetChunk
                            ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                             (e->fields).chunkPos,(MethodInfo *)0x0);
        GVar27 = pCVar21->guid;
        if ((this->fields).instances !=
            (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          cVar60 = func_?();
          if (cVar60 == '\0') {
            return;
          }
          if (cVar1 != '\0') {
            return;
          }
          pDVar22 = (this->fields).instances;
          uStack_2 = 0;
          uStack_3 = 0;
          func_?();
          func_?();
          uStack_2._4_4_ = uVar11;
          func_?();
          uStack_2 = CONCAT44(uStack_2._4_4_,uVar10);
          func_?(&uStack_2);
          uVar10 = uStack_3;
          uStack_3 = CONCAT31(uStack_3._1_3_,1);
          if (pDVar22 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
            value.guid._b = (short)uVar5;
            value.guid._c = (short)((uint)uVar5 >> 0x10);
            value.guid._a = uVar4;
            value.guid._d = (char)uVar6;
            value.guid._e = (char)((uint)uVar6 >> 8);
            value.guid._f = (char)((uint)uVar6 >> 0x10);
            value.guid._g = (char)((uint)uVar6 >> 0x18);
            value.guid._h = (char)uVar7;
            value.guid._i = (char)((uint)uVar7 >> 8);
            value.guid._j = (char)((uint)uVar7 >> 0x10);
            value.guid._k = (char)((uint)uVar7 >> 0x18);
            value.gameObject = (GameObject *)uVar8;
            value.collider = (BoxCollider *)uVar9;
            value.renderer._0_2_ = (short)uStack_2;
            value.renderer._2_2_ = (short)((ulonglong)uStack_2 >> 0x10);
            value.filter = (MeshFilter *)uStack_2._4_4_;
            value._32_2_ = (short)uStack_3;
            value._34_2_ = (short)((uint)uVar10 >> 0x10);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Guid,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__set_Item
                      (pDVar22,GVar27,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar61 = (code *)swi(3);
  (*pcVar61)();
  return;
}


/* CubeModelChunk CloneGeometry(Single) */

CubeModelChunk *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CloneGeometry
          (CubeModelChunk *this,float scale,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(0x9904);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  IVar6 = (this->fields).chunkPos;
  pCVar7 = (CubeModelChunk *)func_?(TypeInfo__CubeModelChunk);
  pCStack_8 = pCVar7;
  CubeModelChunk__ctor(pCVar7,IVar6,(MethodInfo *)0x0);
  this_00 = (this->fields).cells;
  pCStack_9 = pCVar7;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffff7c,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_12._0_4_ = pDVar10->_dictionary;
    auStack_12._4_4_ = pDVar10->_version;
    auStack_12._8_4_ = pDVar10->_index;
    auStack_12._12_4_ = (pDVar10->_current).key._options;
    auStack_12._16_4_ = (pDVar10->_current).key._cultureKey;
    pCStack_13 = (Cube *)(pDVar10->_current).key._pattern;
    pOStack_14 = (pDVar10->_current).value;
    iStack_15 = pDVar10->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_16 = (Object *)auStack_12;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      pCVar18 = pCStack_13;
      if (bVar17 == 0) break;
      if (pCVar7 == (CubeModelChunk *)0x0) goto code_?;
      pDStack_19 = (pCVar7->fields).cells;
      iStack_20 = auStack_12._12_4_;
      iStack_21 = auStack_12._16_2_;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar18 = Cube::Cube_Clone_1(pCVar18,(MethodInfo *)0x0);
      uStack_22 = ZEXT48(pCVar18);
      func_?();
      if (pCVar18 == (Cube *)0x0) goto code_?;
      uStack_22._0_5_ =
           CONCAT14(((pCVar18->fields)._.unIndentedSides & 0x3f) != 0x3f,(Cube *)uStack_22);
      if (pDStack_19 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      IVar6.z = iStack_21;
      IVar6.x = (undefined2)iStack_20;
      IVar6.y = iStack_20._2_2_;
      value._4_4_ = uStack_22._4_4_;
      value.cube = (Cube *)uStack_22;
      in_stack_23 = uStack_22._4_4_;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Add
                (pDStack_19,IVar6,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Add_MV__WorldObject__IntVector__Cell_
                );
      pCVar7 = pCStack_8;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_12,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
               ,in_stack_23);
    uStack_1 = 0xffffffff;
    if (pCVar7 != (CubeModelChunk *)0x0) {
      (pCVar7->fields).cubeCount = (this->fields).cubeCount;
      CubeModelChunk_RebuildChunk(pCVar7,scale,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return pCVar7;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar24 = (code *)swi(3);
  pCVar7 = (CubeModelChunk *)(*pcVar24)();
  return pCVar7;
}


/* Boolean CompareGeometry(CubeModelChunk) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CompareGeometry
               (CubeModelChunk *this,CubeModelChunk *chunk,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(0x99f4);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.cube = (Cube *)0x0;
  CStack_6.lightValue = 0;
  CStack_6._5_3_ = 0;
  pDVar7 = (this->fields).cells;
  if (pDVar7 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                      );
    if ((chunk != (CubeModelChunk *)0x0) &&
       (pDVar7 = (chunk->fields).cells, pDVar7 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0
       )) {
      iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                         ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)pDVar7,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                         );
      if (iVar8 == iVar9) {
        pDVar7 = (this->fields).cells;
        if (pDVar7 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                            (&DStack_11,
                             (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)pDVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                            );
        uStack_12 = 0;
        method_01 = (MethodInfo *)pDVar10->_index;
        pSVar13 = (String *)(pDVar10->_current).key._options;
        pSVar14 = (pDVar10->_current).key._cultureKey;
        key = *(IntVector *)&(pDVar10->_current).key;
        pCVar15 = (CubeBase *)(pDVar10->_current).key._pattern;
        pOVar16 = (pDVar10->_current).value;
        uStack_1 = 1;
        pOStack_17 = (Object *)&stack0xffffff98;
        do {
          bVar18 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,Cell]::
                  Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                             &stack0xffffff98,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                            );
          if (bVar18 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffff98,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
          pDVar7 = (chunk->fields).cells;
          DStack_11._current.key._cultureKey = pSVar13;
          DStack_11._current.key._pattern = pSVar14;
          DStack_11._current.value = (Object *)pCVar15;
          DStack_11._getEnumeratorRetType = (int32_t)pOVar16;
          if (pDVar7 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
          bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                            (pDVar7,key,&CStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                            );
          if (bVar18 == 0) break;
          b = CStack_6.cube;
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                            ((CubeBase *)DStack_11._current.value,(CubeBase *)b,(MethodInfo *)0x0);
        } while (bVar18 == 0);
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffff98,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   ,method_01);
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar18 = (*pcVar19)();
  return bVar18;
}


/* Boolean CompareGeometry(CubeModelChunk, Int32 ByRef, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CompareGeometry_1
               (CubeModelChunk *this,CubeModelChunk *chunk,int32_t *matchingCubeCount,
               int32_t *investigatedCubeCount,bool visibleCubesOnly,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  iStack_7 = 0;
  uStack_8 = 0;
  pDVar9 = (this->fields).cells;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar10 = func_?();
    func_?(uVar10);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
           ::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                     (&DStack_14,
                      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)pDVar9,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                     );
  uStack_15 = 0;
  auStack_16._0_4_ = pDVar13->_dictionary;
  auStack_16._4_4_ = pDVar13->_version;
  auStack_16._8_4_ = pDVar13->_index;
  auStack_16._12_4_ = (pDVar13->_current).key._options;
  pSStack_17 = (pDVar13->_current).key._cultureKey;
  pCStack_18 = (Cube *)(pDVar13->_current).key._pattern;
  pOStack_19 = (pDVar13->_current).value;
  iStack_20 = pDVar13->_getEnumeratorRetType;
  uStack_1 = 1;
  iVar21 = 0;
  pOStack_22 = (Object *)auStack_16;
code_?:
  iStack_23 = iStack_6;
  bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
          WorldObject::IntVector,Cell]::
          Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                     auStack_16,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                    );
  if (bVar12 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_16,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
               ,unaff_EBX);
    *matchingCubeCount = *matchingCubeCount + iStack_6;
    *investigatedCubeCount = *investigatedCubeCount + iStack_7;
    *unaff_FS_OFFSET = uStack_3;
    return iStack_23 == iVar21;
  }
  DStack_14._current.key._cultureKey = (String *)auStack_16._12_4_;
  DStack_14._current.key._pattern = pSStack_17;
  DStack_14._current.value = (Object *)pCStack_18;
  DStack_14._getEnumeratorRetType = (int32_t)pOStack_19;
  if (visibleCubesOnly == 0) goto code_?;
  if (pCStack_18 != (Cube *)0x0) goto code_?;
  goto code_?;
code_?:
  iVar21 = iStack_7;
  if ((pCStack_18->fields).hiddenSides != 0x3f) {
code_?:
    if (chunk != (CubeModelChunk *)0x0) {
      pDVar9 = (chunk->fields).cells;
      if (pDVar9 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      cVar24 = func_?(pDVar9,auStack_16._12_4_,(uint)pSStack_17 & 0xffff);
      if (cVar24 != '\0') {
        for (uVar25 = 0; (int)uVar25 < 8; uVar25 = uVar25 + 1) {
          if (((Cube *)DStack_14._current.value == (Cube *)0x0) ||
             (pBVar26 = (((Cube__Fields *)((int)DStack_14._current.value + 8))->_).byteCorners,
             pBVar26 == (Byte__Array *)0x0)) goto code_?;
          if (pBVar26->max_length <= uVar25) {
            func_?();
            goto code_?;
          }
          if (((int)uStack_8 == 0) || (iVar21 = *(int *)((int)uStack_8 + 0xc), iVar21 == 0))
          goto code_?;
          if (*(uint *)(iVar21 + 0xc) <= uVar25) goto code_?;
          if (pBVar26->vector[uVar25] != *(uint8_t *)(iVar21 + 0x10 + uVar25)) goto code_?;
        }
        iStack_6 = iStack_6 + 1;
        iVar21 = iStack_7 + 1;
        iStack_7 = iVar21;
        goto code_?;
      }
    }
code_?:
    iVar21 = iStack_7 + 1;
    iStack_7 = iVar21;
  }
  goto code_?;
}


/* Boolean ContainsCube(IntVector) */

bool Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_ContainsCube
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (this_00,iVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_Destroy
               (CubeModelChunk *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).instances;
  if (this_00 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
               *)mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                           );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[MV::WorldObject::
               IntVector,ChunkInstances+ChunkInstanceVariables]::
               Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                           *)&stack0xffffff80,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                         );
      uStack_7 = 0;
      DStack_8._dictionary =
           (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)pDVar6->_dictionary;
      DStack_8._index = pDVar6->_index;
      DStack_8._version = pDVar6->_version;
      DStack_8._currentValue.guid._a = (pDVar6->_currentValue).guid._a;
      DStack_8._currentValue.guid._b = (pDVar6->_currentValue).guid._b;
      DStack_8._currentValue.guid._c = (pDVar6->_currentValue).guid._c;
      DStack_8._currentValue.guid._d = (pDVar6->_currentValue).guid._d;
      DStack_8._currentValue.guid._e = (pDVar6->_currentValue).guid._e;
      DStack_8._currentValue.guid._f = (pDVar6->_currentValue).guid._f;
      DStack_8._currentValue.guid._g = (pDVar6->_currentValue).guid._g;
      DStack_8._currentValue.guid._h = (pDVar6->_currentValue).guid._h;
      DStack_8._currentValue.guid._i = (pDVar6->_currentValue).guid._i;
      DStack_8._currentValue.guid._j = (pDVar6->_currentValue).guid._j;
      DStack_8._currentValue.guid._k = (pDVar6->_currentValue).guid._k;
      DStack_8._currentValue.gameObject = (pDVar6->_currentValue).gameObject;
      DStack_8._currentValue.collider = (pDVar6->_currentValue).collider;
      DStack_8._currentValue.renderer = (pDVar6->_currentValue).renderer;
      DStack_8._currentValue.filter = (pDVar6->_currentValue).filter;
      DStack_8._currentValue.transparent = (pDVar6->_currentValue).transparent;
      DStack_8._currentValue._33_3_ = *(undefined3 *)&(pDVar6->_currentValue).field_0x21;
      uStack_1 = 1;
      pDStack_9 = &DStack_8;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Guid,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                          );
        obj_00 = DStack_8._currentValue.gameObject;
        if (bVar10 == 0) break;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj_00,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                 ,in_stack_11);
      uStack_1 = 0xffffffff;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      obj = (this->fields).sharedMeshData.mesh;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void EvaluateReferenceCount(Int32, Int32) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_EvaluateReferenceCount
               (CubeModelChunk *this,int32_t oldReferenceCount,int32_t newReferenceCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Unloading_mesh);
    func_?(&StringLiteral_Loading_mesh);
    cRam_? = '\x01';
  }
  if (oldReferenceCount == 0) {
    if (0 < newReferenceCount) {
      CubeModelChunk_RebuildChunk(this,4.0,(MethodInfo *)0x0);
      CubeModelChunk_RestoreSharedMeshOnInstances(this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Loading_mesh,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((0 < oldReferenceCount) && (newReferenceCount == 0)) {
    CubeModelChunk_RevokeSharedMeshOnInstances(this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Unloading_mesh,(MethodInfo *)0x0);
  }
  return;
}


/* Cube GetCube(IntVector) */

Cube * Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetCube
                 (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    cRam_? = '\x01';
  }
  CStack_1.cube = (Cube *)0x0;
  CStack_1.lightValue = 0;
  CStack_1._5_3_ = 0;
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                      (this_00,iVector,&CStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      );
    if (bVar2 == 0) {
      CStack_1.cube = (Cube *)0x0;
    }
    return CStack_1.cube;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pCVar4 = (Cube *)(*pcVar3)();
  return pCVar4;
}


/* Vector2[] GetFaceUvs(Vector3[], Face, Single) */

Vector2__Array *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFaceUvs
          (Vector3__Array *faceVertices,Face__Enum face,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppVStack_1 = &TypeInfo__UnityEngine__Vector2;
    func_?();
    cRam_? = '\x01';
  }
  ppVStack_1 = (Vector2__Array__Class **)0x4;
  pVStack_2 = TypeInfo__UnityEngine__Vector2;
  pVVar3 = (Vector2__Array *)func_?();
  uVar4 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  fVar5 = _UNK_?;
  fVar6 = fVar5;
  switch(face) {
  case Face__Enum_Top:
    if ((pVVar3 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0)) {
code_?:
      ppVStack_1 = (Vector2__Array__Class **)&stack0xfffffffc;
      uVar7 = func_?(&puStack_8);
      func_?(uVar7);
      pcVar9 = (code *)swi(3);
      pVVar3 = (Vector2__Array *)(*pcVar9)();
      return pVVar3;
    }
    if (faceVertices->max_length == 0) goto code_?;
    fVar10 = faceVertices->vector[0].z;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = faceVertices->vector[0].x;
    pVVar3->vector[0].y = fVar10;
    if (faceVertices->max_length < 2) goto code_?;
    fVar10 = faceVertices->vector[1].z;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].x = faceVertices->vector[1].x;
    pVVar3->vector[1].y = fVar10;
    if (faceVertices->max_length < 3) goto code_?;
    fVar10 = faceVertices->vector[2].z;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].x = faceVertices->vector[2].x;
    pVVar3->vector[2].y = fVar10;
    if (faceVertices->max_length < 4) goto code_?;
    fVar10 = faceVertices->vector[3].z;
    if (pVVar3->max_length < 4) goto code_?;
    pVVar3->vector[3].x = faceVertices->vector[3].x;
    pVVar3->vector[3].y = fVar10;
    break;
  case Face__Enum_Bottom:
    if ((pVVar3 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (faceVertices->max_length == 0) goto code_?;
    if (pVVar3->max_length == 0) goto code_?;
    fVar6 = (float)((uint)faceVertices->vector[0].x ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pVVar3->vector[0].y = faceVertices->vector[0].z;
    pVVar3->vector[0].x = fVar6;
    if (faceVertices->max_length < 2) goto code_?;
    fVar6 = faceVertices->vector[1].x;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].y = faceVertices->vector[1].z;
    pVVar3->vector[1].x = (float)((uint)fVar6 ^ uVar4);
    if (faceVertices->max_length < 3) goto code_?;
    fVar6 = faceVertices->vector[2].x;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].y = faceVertices->vector[2].z;
    pVVar3->vector[2].x = (float)((uint)fVar6 ^ uVar4);
    if (faceVertices->max_length < 4) goto code_?;
    fVar10 = faceVertices->vector[3].z;
    goto code_?;
  case Face__Enum_Front:
    if ((pVVar3 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (faceVertices->max_length == 0) goto code_?;
    fVar10 = faceVertices->vector[0].y;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = faceVertices->vector[0].x;
    pVVar3->vector[0].y = fVar10;
    if (faceVertices->max_length < 2) goto code_?;
    fVar10 = faceVertices->vector[1].y;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].x = faceVertices->vector[1].x;
    pVVar3->vector[1].y = fVar10;
    if (faceVertices->max_length < 3) goto code_?;
    fVar10 = faceVertices->vector[2].y;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].x = faceVertices->vector[2].x;
    pVVar3->vector[2].y = fVar10;
    if (faceVertices->max_length < 4) goto code_?;
    fVar10 = faceVertices->vector[3].y;
    if (pVVar3->max_length < 4) goto code_?;
    pVVar3->vector[3].x = faceVertices->vector[3].x;
    pVVar3->vector[3].y = fVar10;
    break;
  case Face__Enum_Back:
    if ((pVVar3 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (faceVertices->max_length == 0) goto code_?;
    if (pVVar3->max_length == 0) goto code_?;
    fVar6 = (float)((uint)faceVertices->vector[0].x ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pVVar3->vector[0].y = faceVertices->vector[0].y;
    pVVar3->vector[0].x = fVar6;
    if (faceVertices->max_length < 2) goto code_?;
    fVar6 = faceVertices->vector[1].x;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].y = faceVertices->vector[1].y;
    pVVar3->vector[1].x = (float)((uint)fVar6 ^ uVar4);
    if (faceVertices->max_length < 3) goto code_?;
    fVar6 = faceVertices->vector[2].x;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].y = faceVertices->vector[2].y;
    pVVar3->vector[2].x = (float)((uint)fVar6 ^ uVar4);
    if (faceVertices->max_length < 4) goto code_?;
    fVar10 = faceVertices->vector[3].y;
code_?:
    fVar6 = faceVertices->vector[3].x;
code_?:
    if (pVVar3->max_length < 4) goto code_?;
    pVVar3->vector[3].x = (float)((uint)fVar6 ^ uVar4);
    pVVar3->vector[3].y = fVar10;
    fVar6 = _UNK_?;
    break;
  case Face__Enum_Left:
    if ((pVVar3 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (faceVertices->max_length == 0) goto code_?;
    if (pVVar3->max_length == 0) goto code_?;
    fVar6 = (float)((uint)faceVertices->vector[0].z ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pVVar3->vector[0].y = faceVertices->vector[0].y;
    pVVar3->vector[0].x = fVar6;
    if (faceVertices->max_length < 2) goto code_?;
    fVar6 = faceVertices->vector[1].z;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].y = faceVertices->vector[1].y;
    pVVar3->vector[1].x = (float)((uint)fVar6 ^ uVar4);
    if (faceVertices->max_length < 3) goto code_?;
    fVar6 = faceVertices->vector[2].z;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].y = faceVertices->vector[2].y;
    pVVar3->vector[2].x = (float)((uint)fVar6 ^ uVar4);
    if (faceVertices->max_length < 4) goto code_?;
    fVar6 = faceVertices->vector[3].z;
    fVar10 = faceVertices->vector[3].y;
    goto code_?;
  case Face__Enum_Right:
    if ((pVVar3 == (Vector2__Array *)0x0) || (faceVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (faceVertices->max_length == 0) goto code_?;
    fVar10 = faceVertices->vector[0].y;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = faceVertices->vector[0].z;
    pVVar3->vector[0].y = fVar10;
    if (faceVertices->max_length < 2) goto code_?;
    fVar10 = faceVertices->vector[1].y;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].x = faceVertices->vector[1].z;
    pVVar3->vector[1].y = fVar10;
    if (faceVertices->max_length < 3) goto code_?;
    fVar10 = faceVertices->vector[2].y;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].x = faceVertices->vector[2].z;
    pVVar3->vector[2].y = fVar10;
    if (faceVertices->max_length < 4) goto code_?;
    fVar10 = faceVertices->vector[3].y;
    if (pVVar3->max_length < 4) goto code_?;
    pVVar3->vector[3].x = faceVertices->vector[3].z;
    pVVar3->vector[3].y = fVar10;
    break;
  default:
    if (pVVar3 == (Vector2__Array *)0x0) goto code_?;
  }
  if (pVVar3->max_length != 0) {
    pVVar3->vector[0].x = fVar6 + pVVar3->vector[0].x;
    pVVar3->vector[0].y = pVVar3->vector[0].y + fVar5;
    if (1 < pVVar3->max_length) {
      fVar10 = pVVar3->vector[1].y;
      pVVar3->vector[1].x = fVar6 + pVVar3->vector[1].x;
      pVVar3->vector[1].y = fVar10 + fVar5;
      if (2 < pVVar3->max_length) {
        fVar10 = pVVar3->vector[2].y;
        pVVar3->vector[2].x = fVar6 + pVVar3->vector[2].x;
        pVVar3->vector[2].y = fVar10 + fVar5;
        if (3 < pVVar3->max_length) {
          fVar10 = pVVar3->vector[3].y;
          pVVar3->vector[3].x = fVar6 + pVVar3->vector[3].x;
          pVVar3->vector[3].y = fVar10 + fVar5;
          fVar5 = scale * fVar5;
          if (pVVar3->max_length != 0) {
            pVVar3->vector[0].x = pVVar3->vector[0].x * fVar5;
            pVVar3->vector[0].y = pVVar3->vector[0].y * fVar5;
            if (1 < pVVar3->max_length) {
              fVar6 = pVVar3->vector[1].y;
              pVVar3->vector[1].x = pVVar3->vector[1].x * fVar5;
              pVVar3->vector[1].y = fVar6 * fVar5;
              if (2 < pVVar3->max_length) {
                fVar6 = pVVar3->vector[2].y;
                pVVar3->vector[2].x = pVVar3->vector[2].x * fVar5;
                pVVar3->vector[2].y = fVar6 * fVar5;
                if (3 < pVVar3->max_length) {
                  fVar6 = pVVar3->vector[3].y;
                  pVVar3->vector[3].x = pVVar3->vector[3].x * fVar5;
                  pVVar3->vector[3].y = fVar6 * fVar5;
                  return pVVar3;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  ppVStack_1 = (Vector2__Array__Class **)0x0;
  pVStack_2 = (Vector2__Array__Class *)func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar3 = (Vector2__Array *)(*pcVar9)();
  return pVVar3;
}


/* IntVector GetFirstSolidCubePos() */

IntVector Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFirstSolidCubePos
                    (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&StringLiteral_No_cube_found_in_chunk__This_is_);
    cRam_? = '\x01';
  }
  if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)method[1].return_type !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)method[1].return_type,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                      );
    if (iVar1 < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_cube_found_in_chunk__This_is_,(MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar2 = TypeInfo__MV__WorldObject__IntVector->static_fields;
      this->klass = *(CubeModelChunk__Class **)&pIVar2->One;
      *(int16_t *)&this->monitor = (pIVar2->One).z;
      IVar3.z = (int16_t)pIVar2;
      IVar3._0_4_ = this;
      return IVar3;
    }
    if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
        method[1].return_type !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffdc,
                          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method[1].return_type,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                         );
      uVar5 = *(undefined2 *)&(pDVar4->_current).key._cultureKey;
      this->klass = (CubeModelChunk__Class *)(pDVar4->_current).key._options;
      *(undefined2 *)&this->monitor = uVar5;
      IVar6.z = extraout_DX;
      IVar6._0_4_ = this;
      return IVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  IVar6 = (IntVector)(*pcVar7)();
  return IVar6;
}


/* Void GetMeshBounds(Bounds ByRef, Dictionary`2[MV.WorldObject.IntVector,Cell]) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetMeshBounds
               (Bounds *bounds,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,MethodInfo *method
               )

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffeb0;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffeb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  pSStack_8 = (String *)0x0;
  iStack_9 = 0;
  fStack_10 = _UNK_?;
  fStack_11 = _UNK_?;
  fStack_12 = _UNK_?;
  fStack_13 = _UNK_?;
  fStack_14 = _UNK_?;
  fStack_15 = _UNK_?;
  fStack_16 = _UNK_?;
  uStack_17 = 0;
  uStack_18 = 0;
  uStack_19 = 0;
  fStack_20 = _UNK_?;
  fStack_21 = _UNK_?;
  fStack_22 = _UNK_?;
  fStack_23 = _UNK_?;
  fStack_24 = _UNK_?;
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       (&DStack_26,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)cells,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_27 = 0;
    auStack_28._0_4_ = pDVar25->_dictionary;
    auStack_28._4_4_ = pDVar25->_version;
    auStack_28._8_4_ = pDVar25->_index;
    auStack_28._12_4_ = (pDVar25->_current).key._options;
    pSStack_29 = (pDVar25->_current).key._cultureKey;
    pCStack_30 = (Cube *)(pDVar25->_current).key._pattern;
    pOStack_31 = (pDVar25->_current).value;
    iStack_32 = pDVar25->_getEnumeratorRetType;
    uStack_2 = 1;
    pOStack_33 = (Object *)auStack_28;
    while( true ) {
      bVar34 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_28,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      if (bVar34 == 0) {
        uStack_2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)auStack_28,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   ,unaff_EDI);
        fVar35 = (fStack_23 - fStack_14) * _UNK_?;
        fVar36 = (fStack_16 - fStack_10) * _UNK_?;
        fVar37 = (fStack_21 - fStack_12) * _UNK_?;
        (bounds->m_Extents).x = fVar36;
        (bounds->m_Extents).y = fVar37;
        (bounds->m_Extents).z = fVar35;
        (bounds->m_Center).x = fVar36 + fStack_10;
        (bounds->m_Center).y = fVar37 + fStack_12;
        (bounds->m_Center).z = fVar35 + fStack_14;
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      DStack_26._current.key._cultureKey = (String *)auStack_28._12_4_;
      DStack_26._current.key._pattern = pSStack_29;
      DStack_26._current.value = (Object *)pCStack_30;
      DStack_26._getEnumeratorRetType = (int32_t)pOStack_31;
      if (pCStack_30 == (Cube *)0x0) break;
      if ((pCStack_30->fields).hiddenSides != 0x3f) {
        puVar38 = (undefined8 *)func_?(auStack_39,0);
        pSVar40 = DStack_26._current.key._cultureKey;
        uVar41 = *puVar38;
        fStack_42 = *(float *)(puVar38 + 1);
        uStack_43._0_4_ = (float)uVar41;
        fStack_44 = (float)uStack_43 * _UNK_?;
        uStack_43._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
        fStack_45 = uStack_43._4_4_ * _UNK_?;
        fStack_46 = fStack_42 * _UNK_?;
        iStack_9 = (int16_t)DStack_26._current.key._pattern;
        pSStack_8 = DStack_26._current.key._cultureKey;
        uStack_43 = uVar41;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        pVVar47 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                           (&VStack_48,(IntVector *)&pSStack_8,(MethodInfo *)0x0);
        uStack_49._0_4_ = pVVar47->x;
        uStack_49._4_4_ = pVVar47->y;
        fStack_50 = pVVar47->z;
        fStack_51 = fStack_50 +
                    (float)((uint)fStack_46 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_52 = (float)uStack_49._4_4_ +
                    (float)((uint)fStack_45 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_53 = (float)(undefined4)uStack_49 +
                    (float)((uint)fStack_44 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        iStack_9 = (int16_t)DStack_26._current.key._pattern;
        pSStack_8 = pSVar40;
        pVVar47 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                           (&VStack_54,(IntVector *)&pSStack_8,(MethodInfo *)0x0);
        uStack_55._0_4_ = pVVar47->x;
        uStack_55._4_4_ = pVVar47->y;
        fStack_56 = pVVar47->z;
        fVar36 = (float)(undefined4)uStack_55 + fStack_44;
        fVar35 = (float)uStack_55._4_4_ + fStack_45;
        fStack_44 = fStack_56 + fStack_46;
        if (fStack_53 < fStack_10) {
          fStack_10 = fStack_53;
        }
        if (fStack_52 < fStack_12) {
          fStack_12 = fStack_52;
        }
        if (fStack_51 < fStack_14) {
          fStack_14 = fStack_51;
        }
        if (fStack_16 <= fVar36) {
          uStack_17 = 0;
          uStack_18 = 0;
          uStack_19 = 0;
          fStack_16 = fVar36;
        }
        if (fStack_21 <= fVar35) {
          fStack_21 = fVar35;
        }
        fStack_24 = fStack_23;
        if (fStack_23 <= fStack_44) {
          fStack_24 = fStack_44;
        }
        if (fVar36 < fStack_10) {
          fStack_10 = fVar36;
        }
        if (fVar35 < fStack_12) {
          fStack_12 = fVar35;
        }
        if (fStack_44 < fStack_14) {
          fStack_14 = fStack_44;
        }
        if (fStack_16 <= fStack_53) {
          uStack_17 = 0;
          uStack_18 = 0;
          uStack_19 = 0;
          fStack_16 = fStack_53;
        }
        fStack_22 = fStack_21;
        if (fStack_21 <= fStack_52) {
          fStack_22 = fStack_52;
        }
        fStack_20 = fStack_16;
        fStack_11 = fStack_10;
        fStack_13 = fStack_12;
        fStack_15 = fStack_14;
        fStack_21 = fStack_22;
        fStack_23 = fStack_24;
        if (fStack_24 <= fStack_51) {
          fStack_24 = fStack_51;
          fStack_23 = fStack_51;
        }
      }
    }
  }
  uVar57 = func_?();
  func_?(uVar57);
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* String Guids() */

String * Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_Guids
                   (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                   );
    func_?(&
                    System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
                   );
    func_?(&TypeInfo__System__Func<System::String,_System::Guid,_System::String>);
    func_?(&MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_);
    func_?(&TypeInfo__CubeModelChunk____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).instances;
  if (this_00 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                       ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                       );
    if ((TypeInfo__CubeModelChunk____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar1 = ::StringLiteral__;
    this_01 = TypeInfo__CubeModelChunk____c->static_fields->__9__27_0;
    if (this_01 == (Func_3_String_Guid_String_ *)0x0) {
      if ((TypeInfo__CubeModelChunk____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CubeModelChunk____c);
      }
      object = TypeInfo__CubeModelChunk____c->static_fields->__9;
      this_01 = (Func_3_String_Guid_String_ *)
                func_?(TypeInfo__System__Func<System::String,_System::Guid,_System::String>
                               );
      mscorlib.dll::System::Func`3[Object,Guid,Object]::Func_3_Object_Guid_Object___ctor
                ((Func_3_Object_Guid_Object_ *)this_01,(Object *)object,
                 MethodInfo__CubeModelChunk____c___Guids_b__27_0_System__String__System__Guid_,
                 (MethodInfo *)0x0);
      TypeInfo__CubeModelChunk____c->static_fields->__9__27_0 = this_01;
      func_?(&TypeInfo__CubeModelChunk____c->static_fields->__9__27_0,this_01);
    }
    pSVar1 = (String *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_Aggregate_1
                       ((IEnumerable_1_System_Guid_ *)source,(Object *)pSVar1,
                        (Func_3_Object_Guid_Object_ *)this_01,
                        System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Guid,_System::String>_System__Collections__Generic__IEnumerable<System::Guid>__System__String__System__Func<System::String,_System::Guid,_System::String>_
                       );
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void RebuildChunk(Single) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildChunk
               (CubeModelChunk *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__MeshData);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MeshData;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  cells = (this->fields).cells;
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CubeModelChunk);
  }
  iVar1 = CubeModelChunk_RebuildMesh(cells,scale,(MethodInfo *)0x0);
  (this->fields).triangleCount = iVar1;
  if (value != (Object *)0x0) {
    MeshData::MeshData_SetToMesh
              ((MeshData *)value,&(this->fields).sharedMeshData.mesh,
               &(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
    CubeModelChunk_GetMeshBounds(&(this->fields).meshBounds,(this->fields).cells,(MethodInfo *)0x0);
    CubeModelChunk_UpdateInstances(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 RebuildMesh(Dictionary`2[MV.WorldObject.IntVector,Cell], Single) */

int32_t Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildMesh
                  (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,float scale,MethodInfo *method
                  )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff60;
  puVar5 = &stack0xffffff60;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(0xff10);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar6 != (MeshDataPool *)0x0) {
    bVar7 = cRam_? == '\0';
    (pMVar6->fields).indicesPos = 0;
    if (bVar7) {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar6 != (MeshDataPool *)0x0) {
      bVar7 = cRam_? == '\0';
      (pMVar6->fields).colorPos = 0;
      if (bVar7) {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 != (MeshDataPool *)0x0) {
        bVar7 = cRam_? == '\0';
        (pMVar6->fields).uvPos = 0;
        if (bVar7) {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar6 != (MeshDataPool *)0x0) {
          (pMVar6->fields).vertexPos = 0;
          iStack_8 = 0;
          if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
            pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&stack0xffffff6c,
                                 (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)cells,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                                );
            uStack_10 = 0;
            auStack_11._0_4_ = pDVar9->_dictionary;
            auStack_11._4_4_ = pDVar9->_version;
            auStack_11._8_4_ = pDVar9->_index;
            auStack_11._12_4_ = (pDVar9->_current).key._options;
            auStack_11._16_4_ = (pDVar9->_current).key._cultureKey;
            pCStack_12 = (Cube *)(pDVar9->_current).key._pattern;
            pOStack_13 = (pDVar9->_current).value;
            iStack_14 = pDVar9->_getEnumeratorRetType;
            uStack_1 = 1;
            pOStack_15 = (Object *)auStack_11;
            while( true ) {
              bVar16 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,Cell]::
                      Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_
                                  *)auStack_11,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                                );
              cube = pCStack_12;
              if (bVar16 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)auStack_11,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                           ,(MethodInfo *)unaff_EBX);
                *unaff_FS_OFFSET = uStack_3;
                return iStack_8 * 2;
              }
              if (pCStack_12 == (Cube *)0x0) break;
              if ((pCStack_12->fields).hiddenSides != 0x3f) {
                uStack_17 = auStack_11._12_4_;
                uStack_18 = (FaceData *)CONCAT22(auStack_11._16_2_,(undefined2)uStack_18);
                cube_00 = pCStack_12;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                cubePos.z = uStack_18._2_2_;
                cubePos.x = (undefined2)uStack_17;
                cubePos.y = uStack_17._2_2_;
                pFStack_19 = Cube::Cube_GenerateCubeFaces(cube,cubePos,cells,(MethodInfo *)0x0);
                uStack_17 = 0;
                while( true ) {
                  if (pFStack_19 == (FaceData__Array *)0x0) goto code_?;
                  if ((int)pFStack_19->max_length <= (int)uStack_17) break;
                  if (pFStack_19->max_length <= uStack_17) {
                    func_?();
code_?:
                    func_?();
                    goto code_?;
                  }
                  pFVar20 = pFStack_19->vector[uStack_17];
                  uStack_18 = pFVar20;
                  if (pFVar20 == (FaceData *)0x0) goto code_?;
                  FStack_21 = (pFVar20->fields).face;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MV__WorldObject__CubeBase);
                  }
                  uVar22 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                    ((CubeBase *)cube_00,FStack_21,(MethodInfo *)0x0);
                  FStack_21 = (Face__Enum)uVar22;
                  if (0x44 < FStack_21) {
                    FStack_21 = 0x18;
                  }
                  MeshDataPool::MeshDataPool_AddVertexRange
                            ((pFVar20->fields).faceVertices,(MethodInfo *)0x0);
                  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__TextureAtlasData);
                  }
                  pCVar23 = TextureAtlasData::TextureAtlasData_GetMaterialColorData
                                      ((Color *)&stack0xffffff7c,FStack_21,(MethodInfo *)0x0);
                  fVar24 = pCVar23->r;
                  fVar25 = pCVar23->g;
                  fVar26 = pCVar23->b;
                  for (uVar27 = 0; (int)uVar27 < 4; uVar27 = uVar27 + 1) {
                    pSVar28 = (uStack_18->fields).lightValues;
                    if (pSVar28 == (Single__Array *)0x0) goto code_?;
                    if (pSVar28->max_length <= uVar27) goto code_?;
                    color.g = fVar25;
                    color.r = fVar24;
                    color.b = fVar26;
                    color.a = pSVar28->vector[uVar27];
                    MeshDataPool::MeshDataPool_AddColor(color,(MethodInfo *)0x0);
                  }
                  faceVertices = (uStack_18->fields).faceVertices;
                  FStack_21 = (uStack_18->fields).face;
                  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__CubeModelChunk);
                  }
                  unaff_EBX = CubeModelChunk_GetFaceUvs
                                        (faceVertices,FStack_21,scale,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddUvRange(unaff_EBX,(MethodInfo *)0x0);
                  index = iStack_8 * 4;
                  MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(index + 3,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(index + 2,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(index + 2,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(index + 1,(MethodInfo *)0x0);
                  cube_00 = (Cube *)&UNK_?;
                  MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
                  iStack_8 = iStack_8 + 1;
                  uStack_17 = uStack_17 + 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  iVar30 = (*pcVar29)();
  return iVar30;
}


/* Void RemoveFromChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RemoveFromChunk
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x99b8);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (pDVar1,iVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 != 0) {
      pDVar1 = (this->fields).cells;
      if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Remove
                (pDVar1,iVector,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                );
      uStack3 = 0;
      CubeModelChunk_SetCubeVisibilityWithNeighbors(this,iVector,(MethodInfo *)0x0);
      piVar4 = &(this->fields).cubeCount;
      *piVar4 = *piVar4 + -1;
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RestoreSharedMeshOnInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RestoreSharedMeshOnInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).instances;
  if (this_00 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
               *)mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                           );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[MV::WorldObject::
               IntVector,ChunkInstances+ChunkInstanceVariables]::
               Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                         (&DStack_7,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                         );
      uStack_8 = 0;
      DStack_9._dictionary =
           (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)pDVar6->_dictionary;
      DStack_9._index = pDVar6->_index;
      DStack_9._version = pDVar6->_version;
      DStack_9._currentValue.guid._a = (pDVar6->_currentValue).guid._a;
      DStack_9._currentValue.guid._b = (pDVar6->_currentValue).guid._b;
      DStack_9._currentValue.guid._c = (pDVar6->_currentValue).guid._c;
      DStack_9._currentValue.guid._d = (pDVar6->_currentValue).guid._d;
      DStack_9._currentValue.guid._e = (pDVar6->_currentValue).guid._e;
      DStack_9._currentValue.guid._f = (pDVar6->_currentValue).guid._f;
      DStack_9._currentValue.guid._g = (pDVar6->_currentValue).guid._g;
      DStack_9._currentValue.guid._h = (pDVar6->_currentValue).guid._h;
      DStack_9._currentValue.guid._i = (pDVar6->_currentValue).guid._i;
      DStack_9._currentValue.guid._j = (pDVar6->_currentValue).guid._j;
      DStack_9._currentValue.guid._k = (pDVar6->_currentValue).guid._k;
      DStack_9._currentValue.gameObject = (pDVar6->_currentValue).gameObject;
      DStack_9._currentValue.collider = (pDVar6->_currentValue).collider;
      DStack_9._currentValue.renderer = (pDVar6->_currentValue).renderer;
      DStack_9._currentValue.filter = (pDVar6->_currentValue).filter;
      DStack_9._currentValue.transparent = (pDVar6->_currentValue).transparent;
      DStack_9._currentValue._33_3_ = *(undefined3 *)&(pDVar6->_currentValue).field_0x21;
      uStack_1 = 1;
      pDStack_10 = &DStack_9;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Guid,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_9,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        DStack_7._currentValue.guid._a = DStack_9._currentValue.guid._a;
        DStack_7._currentValue.guid._b = DStack_9._currentValue.guid._b;
        DStack_7._currentValue.guid._c = DStack_9._currentValue.guid._c;
        DStack_7._currentValue.guid._d = DStack_9._currentValue.guid._d;
        DStack_7._currentValue.guid._e = DStack_9._currentValue.guid._e;
        DStack_7._currentValue.guid._f = DStack_9._currentValue.guid._f;
        DStack_7._currentValue.guid._g = DStack_9._currentValue.guid._g;
        DStack_7._currentValue.guid._h = DStack_9._currentValue.guid._h;
        DStack_7._currentValue.guid._i = DStack_9._currentValue.guid._i;
        DStack_7._currentValue.guid._j = DStack_9._currentValue.guid._j;
        DStack_7._currentValue.guid._k = DStack_9._currentValue.guid._k;
        DStack_7._currentValue.gameObject = DStack_9._currentValue.gameObject;
        DStack_7._currentValue.collider = DStack_9._currentValue.collider;
        DStack_7._currentValue.renderer = DStack_9._currentValue.renderer;
        DStack_7._currentValue.filter = DStack_9._currentValue.filter;
        if (DStack_9._currentValue.filter == (MeshFilter *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (DStack_9._currentValue.filter,(this->fields).sharedMeshData.mesh,
                   (MethodInfo *)0x0);
        if ((MethodInfo *)DStack_7._currentValue.renderer == (MethodInfo *)0x0) break;
        method_00 = (MethodInfo *)DStack_7._currentValue.renderer;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)DStack_7._currentValue.renderer,
                   (this->fields).sharedMeshData.material,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RevokeSharedMeshOnInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RevokeSharedMeshOnInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).instances;
  if (this_00 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
               *)mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Values__
                           );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[MV::WorldObject::
               IntVector,ChunkInstances+ChunkInstanceVariables]::
               Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                         (&DStack_7,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                         );
      uStack_8 = 0;
      DStack_9._dictionary =
           (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)pDVar6->_dictionary;
      DStack_9._index = pDVar6->_index;
      DStack_9._version = pDVar6->_version;
      DStack_9._currentValue.guid._a = (pDVar6->_currentValue).guid._a;
      DStack_9._currentValue.guid._b = (pDVar6->_currentValue).guid._b;
      DStack_9._currentValue.guid._c = (pDVar6->_currentValue).guid._c;
      DStack_9._currentValue.guid._d = (pDVar6->_currentValue).guid._d;
      DStack_9._currentValue.guid._e = (pDVar6->_currentValue).guid._e;
      DStack_9._currentValue.guid._f = (pDVar6->_currentValue).guid._f;
      DStack_9._currentValue.guid._g = (pDVar6->_currentValue).guid._g;
      DStack_9._currentValue.guid._h = (pDVar6->_currentValue).guid._h;
      DStack_9._currentValue.guid._i = (pDVar6->_currentValue).guid._i;
      DStack_9._currentValue.guid._j = (pDVar6->_currentValue).guid._j;
      DStack_9._currentValue.guid._k = (pDVar6->_currentValue).guid._k;
      DStack_9._currentValue.gameObject = (pDVar6->_currentValue).gameObject;
      DStack_9._currentValue.collider = (pDVar6->_currentValue).collider;
      DStack_9._currentValue.renderer = (pDVar6->_currentValue).renderer;
      DStack_9._currentValue.filter = (pDVar6->_currentValue).filter;
      DStack_9._currentValue.transparent = (pDVar6->_currentValue).transparent;
      DStack_9._currentValue._33_3_ = *(undefined3 *)&(pDVar6->_currentValue).field_0x21;
      uStack_1 = 1;
      pDStack_10 = &DStack_9;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Guid,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_9,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        DStack_7._currentValue.guid._a = DStack_9._currentValue.guid._a;
        DStack_7._currentValue.guid._b = DStack_9._currentValue.guid._b;
        DStack_7._currentValue.guid._c = DStack_9._currentValue.guid._c;
        DStack_7._currentValue.guid._d = DStack_9._currentValue.guid._d;
        DStack_7._currentValue.guid._e = DStack_9._currentValue.guid._e;
        DStack_7._currentValue.guid._f = DStack_9._currentValue.guid._f;
        DStack_7._currentValue.guid._g = DStack_9._currentValue.guid._g;
        DStack_7._currentValue.guid._h = DStack_9._currentValue.guid._h;
        DStack_7._currentValue.guid._i = DStack_9._currentValue.guid._i;
        DStack_7._currentValue.guid._j = DStack_9._currentValue.guid._j;
        DStack_7._currentValue.guid._k = DStack_9._currentValue.guid._k;
        DStack_7._currentValue.gameObject = DStack_9._currentValue.gameObject;
        DStack_7._currentValue.collider = DStack_9._currentValue.collider;
        DStack_7._currentValue.renderer = DStack_9._currentValue.renderer;
        DStack_7._currentValue.filter = DStack_9._currentValue.filter;
        if (DStack_9._currentValue.filter == (MeshFilter *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (DStack_9._currentValue.filter,(Mesh *)0x0,(MethodInfo *)0x0);
        this_01 = DStack_7._currentValue.renderer;
        if ((MethodInfo *)DStack_7._currentValue.renderer == (MethodInfo *)0x0) break;
        method_00 = (MethodInfo *)DStack_7._currentValue.renderer;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)DStack_7._currentValue.renderer,(Material *)0x0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)this_01,0,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetCubeVisibility(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    cRam_? = '\x01';
  }
  cube = (Cube *)0x0;
  pDVar1 = (this->fields).cells;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                      (pDVar1,iVector,(Cell *)&stack0xfffffff4,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      );
    if (bVar2 != 0) {
      if (cube == (Cube *)0x0) goto code_?;
      (cube->fields).hiddenSides = 0;
      pDVar1 = (this->fields).cells;
      if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CubeModelChunk_SetCubeVisibility_3(pDVar1,iVector,cube,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCubeVisibilityWithNeighbors(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibilityWithNeighbors
               (CubeModelChunk *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  uStack_1._0_1_ = 0;
  uStack_1._1_3_ = 0;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&uStack_1,pos._0_4_,pos._2_4_,CONCAT22(in_stack_2,pos.z),
             (MethodInfo *)0x0);
  this_00 = (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    cube = (CubeBase__Class *)&stack0xffffffec;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                      (this_00,pos,(Cell *)cube,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                      );
    if (bVar3 != 0) {
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)cube,(MethodInfo *)0x0);
    }
    uVar4 = uStack_1;
    iVector_05.z = (int16_t)this;
    iVector_05._0_4_ = uVar4;
    pCVar5 = this;
    CubeModelChunk_SetCubeVisibility(this,iVector_05,(MethodInfo *)0x0);
    in_stack_2 = uStack_1._2_2_;
    sVar6 = (short)pCVar5;
    iVector.y = uStack_1._2_2_;
    iVector.x = (short)uStack_1 + 1;
    iVector.z = sVar6;
    uStack_1._0_2_ = (short)uStack_1 + 1;
    CubeModelChunk_SetCubeVisibility(this,iVector,(MethodInfo *)0x0);
    uStack_1._0_2_ = (short)uStack_1 + -2;
    iVector_00.z = sVar6;
    iVector_00._0_4_ = uStack_1;
    CubeModelChunk_SetCubeVisibility(this,iVector_00,(MethodInfo *)0x0);
    uStack_1._2_2_ = uStack_1._2_2_ + 1;
    uStack_1._0_2_ = (short)uStack_1 + 1;
    iVector_01.z = sVar6;
    iVector_01._0_4_ = uStack_1;
    CubeModelChunk_SetCubeVisibility(this,iVector_01,(MethodInfo *)0x0);
    uStack_1._2_2_ = uStack_1._2_2_ + -2;
    iVector_02.z = sVar6;
    iVector_02._0_4_ = uStack_1;
    CubeModelChunk_SetCubeVisibility(this,iVector_02,(MethodInfo *)0x0);
    uStack_1._2_2_ = uStack_1._2_2_ + 1;
    sVar6 = sVar6 + 1;
    iVector_03.z = sVar6;
    iVector_03._0_4_ = uStack_1;
    CubeModelChunk_SetCubeVisibility(this,iVector_03,(MethodInfo *)0x0);
    iVector_04.z = sVar6 + -2;
    iVector_04._0_4_ = uStack_1;
    CubeModelChunk_SetCubeVisibility(this,iVector_04,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetCubeVisibility() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_1
               (CubeModelChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    cRam_? = '\x01';
  }
  cells = (this->fields).cells;
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CubeModelChunk);
  }
  CubeModelChunk_SetCubeVisibility_2(cells,(MethodInfo *)0x0);
  return;
}


/* Void SetCubeVisibility(Dictionary`2[MV.WorldObject.IntVector,Cell]) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_2
               (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffff98,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)cells,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_7 = 0;
    auStack_8._0_4_ = pDVar6->_dictionary;
    auStack_8._4_4_ = pDVar6->_version;
    auStack_8._8_4_ = pDVar6->_index;
    auStack_8._12_4_ = (pDVar6->_current).key._options;
    auStack_8._16_4_ = (pDVar6->_current).key._cultureKey;
    pCStack_9 = (Cube *)(pDVar6->_current).key._pattern;
    pOStack_10 = (pDVar6->_current).value;
    iStack_11 = pDVar6->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_8;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      uVar14 = auStack_8._12_4_;
      if (bVar13 == 0) break;
      iStack_15 = auStack_8._16_2_;
      pCStack_16 = pCStack_9;
      if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar17 = auStack_8._12_4_;
      pos.z = iStack_15;
      auStack_8._12_2_ = (undefined2)uVar14;
      auStack_8._14_2_ = SUB42(uVar14,2);
      pos.x = auStack_8._12_2_;
      pos.y = auStack_8._14_2_;
      auStack_8._12_4_ = uVar17;
      CubeModelChunk_SetCubeVisibility_3(cells,pos,pCStack_16,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
               ,in_stack_18);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SetCubeVisibility(Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector, Cube) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetCubeVisibility_3
               (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector pos,Cube *cube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)cube,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    x = pos._0_4_;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                      (cells,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      y = pos._2_4_;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,x,y,CONCAT22(in_stack_3,pos.z),
                 (MethodInfo *)0x0);
      sVar4 = (short)((uint)x >> 0x10) + 1;
      uVar5._0_2_ = (int16_t)x;
      uVar5._2_2_ = sVar4;
      cube = (Cube *)
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
      ;
      sVar6 = (short)y;
      key.y = sVar4;
      key.x = (int16_t)uVar5;
      key.z = sVar6;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        method = (MethodInfo *)cells;
        cube = (Cube *)&UNK_?;
        key_00.z = sVar6;
        key_00.x = (int16_t)uVar5;
        key_00.y = SUB42(uVar5,2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Top,FaceFlags__Enum_Bottom,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar4 = SUB42(uVar5,2) + -2;
      uVar7._0_2_ = (int16_t)uVar5;
      uVar7._2_2_ = sVar4;
      key_01.z = sVar6;
      key_01.x = (int16_t)uVar7;
      key_01.y = sVar4;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_01,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_02.z = sVar6;
        key_02.x = (int16_t)uVar7;
        key_02.y = SUB42(uVar7,2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_02,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Bottom,FaceFlags__Enum_Top,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar4 = SUB42(uVar7,2) + 1;
      uVar8._0_2_ = (int16_t)uVar7;
      uVar8._2_2_ = sVar4;
      sVar6 = sVar6 + 1;
      key_03.z = sVar6;
      key_03.x = (int16_t)uVar8;
      key_03.y = sVar4;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_03,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_04.z = sVar6;
        key_04.x = (int16_t)uVar8;
        key_04.y = SUB42(uVar8,2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_04,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Back,FaceFlags__Enum_Front,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar6 = sVar6 + -2;
      key_05.z = sVar6;
      key_05.x = (int16_t)uVar8;
      key_05.y = SUB42(uVar8,2);
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_05,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_06.z = sVar6;
        key_06.x = (int16_t)uVar8;
        key_06.y = SUB42(uVar8,2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_06,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Front,FaceFlags__Enum_Back,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar4 = (short)uVar8 + 1;
      uVar9._2_2_ = SUB42(uVar8,2);
      uVar9._0_2_ = sVar4;
      sVar6 = sVar6 + 1;
      key_07.z = sVar6;
      key_07.x = sVar4;
      key_07.y = uVar9._2_2_;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_07,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_08.z = sVar6;
        key_08.x = (int16_t)uVar9;
        key_08.y = SUB42(uVar9,2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_08,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Right,FaceFlags__Enum_Left,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
      sVar4 = (short)uVar9 + -2;
      uVar10._2_2_ = SUB42(uVar9,2);
      uVar10._0_2_ = sVar4;
      key_09.z = sVar6;
      key_09.x = sVar4;
      key_09.y = uVar10._2_2_;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                        (cells,key_09,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar1 != 0) {
        key_10.z = sVar6;
        key_10.x = (int16_t)uVar10;
        key_10.y = SUB42(uVar10,2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__get_Item
                  (cells,key_10,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                  );
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uStack11 = 0x1057;
        CubeModelChunk_SimpleFaceVisibilityTest
                  (FaceFlags__Enum_Left,FaceFlags__Enum_Right,&cube,(Cube **)&stack0xfffffff8,
                   (MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void SetInstanceDataRef(IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SetInstanceDataRef
               (CubeModelChunk *this,IntVector chunkPos,MVCubeModelBase *cubeInstance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Add_System__Guid__ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    func_?(&
                    CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cubeInstance != (MVCubeModelBase *)0x0) {
    this_00 = (cubeInstance->fields).chunkInstances;
    this_03 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
               ,(MethodInfo *)0x0);
    if (this_00 != (ChunkInstances *)0x0) {
      ChunkInstances::ChunkInstances_add_Changed
                (this_00,(EventHandler_1_ChunkInstancesChanged_ *)this_03,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar1 != (PrefabPool *)0x0) {
        original = (pPVar1->fields).cubeModelChunkPrefab;
        pTVar2 = (cubeInstance->fields)._.transform;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_04 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)original,pTVar2,1,
                             CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab__UnityEngine__Transform__bool_
                            );
        if (this_04 != (Component *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_04,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)pGVar3,(this->fields).name,(MethodInfo *)0x0);
            if ((MeshFilter *)this_04[1].monitor != (MeshFilter *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                        ((MeshFilter *)this_04[1].monitor,(this->fields).sharedMeshData.mesh,
                         (MethodInfo *)0x0);
              this_01 = this_04[1].fields._.m_CachedPtr;
              if (this_01 != (Renderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                          (this_01,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   (this_04,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector3);
                  cRam_? = '\x01';
                }
                if (pTVar2 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(0x7a9c);
                    cRam_? = '\x01';
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->
                                    identityQuaternion,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                             (MethodInfo *)0x0);
                  uVar4 = (this->fields).meshBounds.m_Extents.x;
                  uVar5 = (this->fields).meshBounds.m_Extents.y;
                  if (this_04[2].klass != (Component__Class *)0x0) {
                    value.y = (float)uVar5 * _UNK_?;
                    value.x = (float)uVar4 * _UNK_?;
                    value.z = (this->fields).meshBounds.m_Extents.z * _UNK_?;
                    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                              ((BoxCollider *)this_04[2].klass,value,(MethodInfo *)0x0);
                    if (this_04[2].klass != (Component__Class *)0x0) {
                      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::
                      BoxCollider_set_center
                                ((BoxCollider *)this_04[2].klass,(this->fields).meshBounds.m_Center,
                                 (MethodInfo *)0x0);
                      this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(this_04,(MethodInfo *)0x0);
                      pGVar3 = (cubeInstance->fields)._.gameObject;
                      if (pGVar3 != (GameObject *)0x0) {
                        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_layer(pGVar3,(MethodInfo *)0x0);
                        if (this_05 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                                    (this_05,iVar6,(MethodInfo *)0x0);
                          uVar7 = 0;
                          pGVar8 = mscorlib.dll::System::Guid::Guid_NewGuid
                                              ((Guid *)&stack0xffffffdc,(MethodInfo *)0x0);
                          iVar6 = pGVar8->_a;
                          iVar9 = pGVar8->_b;
                          uVar10 = pGVar8->_c;
                          uVar11._0_1_ = pGVar8->_d;
                          uVar11._1_1_ = pGVar8->_e;
                          uVar11._2_1_ = pGVar8->_f;
                          uVar11._3_1_ = pGVar8->_g;
                          uVar12._0_1_ = pGVar8->_h;
                          uVar12._1_1_ = pGVar8->_i;
                          uVar12._2_1_ = pGVar8->_j;
                          uVar12._3_1_ = pGVar8->_k;
                          func_?(&stack0xffffffc8,this_05);
                          pCVar13 = this_04[2].klass;
                          func_?(&stack0xffffffcc,pCVar13);
                          pMVar14 = this_04[1].monitor;
                          func_?(&stack0xffffffd4,pMVar14);
                          pvVar15 = this_04[1].fields._.m_CachedPtr;
                          func_?(&stack0xffffffd0,pvVar15);
                          uVar16._2_2_ = uVar10;
                          uVar16._0_2_ = iVar9;
                          this_02 = (this->fields).instances;
                          if (this_02 !=
                              (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0
                             ) {
                            key._b = iVar9;
                            key._c = uVar10;
                            key._a = iVar6;
                            key._d = (uint8_t)uVar11;
                            key._e = SUB41(uVar11,1);
                            key._f = SUB41(uVar11,2);
                            key._g = SUB41(uVar11,3);
                            key._h = (char)uVar12;
                            key._i = (char)((uint)uVar12 >> 8);
                            key._j = (char)((uint)uVar12 >> 0x10);
                            key._k = (char)((uint)uVar12 >> 0x18);
                            value_00.guid._b = iVar9;
                            value_00.guid._c = uVar10;
                            value_00.guid._a = iVar6;
                            value_00.guid._d = (uint8_t)uVar11;
                            value_00.guid._e = SUB41(uVar11,1);
                            value_00.guid._f = SUB41(uVar11,2);
                            value_00.guid._g = SUB41(uVar11,3);
                            value_00.guid._h = (char)uVar12;
                            value_00.guid._i = (char)((uint)uVar12 >> 8);
                            value_00.guid._j = (char)((uint)uVar12 >> 0x10);
                            value_00.guid._k = (char)((uint)uVar12 >> 0x18);
                            value_00.gameObject = this_05;
                            value_00.collider = (BoxCollider *)pCVar13;
                            value_00.renderer = pvVar15;
                            value_00.filter = (MeshFilter *)pMVar14;
                            value_00._32_4_ = uVar7;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Guid,ChunkInstances+ChunkInstanceVariables]::
                            Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Add
                                      (this_02,key,value_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Add_System__Guid__ChunkInstances__ChunkInstanceVariables_
                                      );
                            civ.guid._b = (int16_t)uVar16;
                            civ.guid._c = SUB42(uVar16,2);
                            civ.guid._a = iVar6;
                            civ.guid._d = (uint8_t)uVar11;
                            civ.guid._e = SUB41(uVar11,1);
                            civ.guid._f = SUB41(uVar11,2);
                            civ.guid._g = SUB41(uVar11,3);
                            civ.guid._h = (char)uVar12;
                            civ.guid._i = (char)((uint)uVar12 >> 8);
                            civ.guid._j = (char)((uint)uVar12 >> 0x10);
                            civ.guid._k = (char)((uint)uVar12 >> 0x18);
                            civ.gameObject = this_05;
                            civ.collider = (BoxCollider *)pCVar13;
                            civ.renderer = pvVar15;
                            civ.filter = (MeshFilter *)pMVar14;
                            civ._32_4_ = uVar7;
                            MVCubeModelBase::MVCubeModelBase_AddToChunkInstances
                                      (cubeInstance,chunkPos,civ,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SimpleFaceVisibilityTest(FaceFlags, FaceFlags, Cube ByRef, Cube ByRef) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_SimpleFaceVisibilityTest
               (FaceFlags__Enum faceFlagCube,FaceFlags__Enum faceFlagOpposite,Cube **cube,
               Cube **neighborCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__CubeModelChunk);
    cRam_? = '\x01';
  }
  pCVar1 = *neighborCube;
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)pCVar1,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pCVar1 = *cube;
    if (pCVar1 == (Cube *)0x0) goto code_?;
    bVar3 = (byte)faceFlagCube;
    if (((pCVar1->fields).hiddenSides & bVar3) == 0) {
      if (((pCVar1->fields)._.unIndentedSides & bVar3) == 0) {
code_?:
        if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CubeModelChunk);
        }
        CubeModelChunk_AdvancedFaceVisibilityTest
                  (faceFlagCube,faceFlagOpposite,cube,neighborCube,(MethodInfo *)0x0);
        return;
      }
      if (*neighborCube != (Cube *)0x0) {
        if ((((*neighborCube)->fields)._.unIndentedSides & (byte)faceFlagOpposite) == 0)
        goto code_?;
        puVar4 = &(pCVar1->fields).hiddenSides;
        *puVar4 = *puVar4 | bVar3;
        if (*neighborCube != (Cube *)0x0) {
          puVar4 = &((*neighborCube)->fields).hiddenSides;
          *puVar4 = *puVar4 | (byte)faceFlagOpposite;
          return;
        }
      }
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void UpdateInstances() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_UpdateInstances
               (CubeModelChunk *this,MethodInfo *method)

{
  pCVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffe98;
  method_00 = in_stack_6;
  puVar7 = &stack0xfffffe98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&
                    System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__Add_System__Guid_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Guid>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Guid>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    method_00 = in_stack_6;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  func_?(&KStack_8,0,0x34);
  CStack_9.transparent = 0;
  CStack_9._33_3_ = 0;
  auStack_10 = (undefined1  [4])0x0;
  pSStack_11 = (String *)0x0;
  pMStack_12 = (MeshRenderer *)0x0;
  pTStack_13 = (Type *)0x0;
  CStack_9.guid._a = 0;
  CStack_9.guid._b = 0;
  CStack_9.guid._c = 0;
  CStack_9.guid._d = 0;
  CStack_9.guid._e = 0;
  CStack_9.guid._f = 0;
  CStack_9.guid._g = 0;
  CStack_9.guid._h = 0;
  CStack_9.guid._i = 0;
  CStack_9.guid._j = 0;
  CStack_9.guid._k = 0;
  CStack_9.gameObject = (GameObject *)0x0;
  CStack_9.collider = (BoxCollider *)0x0;
  CStack_9.renderer = (MeshRenderer *)0x0;
  CStack_9.filter = (MeshFilter *)0x0;
  this_01 = (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Guid>);
  pLStack_14 = this_01;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
  pDVar15 = (this->fields).instances;
  pLStack_16 = this_01;
  if (pDVar15 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Guid,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables_
                          *)&stack0xfffffea4,pDVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                        );
    uStack_18 = uStack_18 & 0xffffffff;
    DStack_19._dictionary = pDVar17->_dictionary;
    DStack_19._version = pDVar17->_version;
    DStack_19._index = pDVar17->_index;
    DStack_19._current.key._a = (pDVar17->_current).key._a;
    DStack_19._current.key._b = (pDVar17->_current).key._b;
    DStack_19._current.key._c = (pDVar17->_current).key._c;
    DStack_19._current.key._d = (pDVar17->_current).key._d;
    DStack_19._current.key._e = (pDVar17->_current).key._e;
    DStack_19._current.key._f = (pDVar17->_current).key._f;
    DStack_19._current.key._g = (pDVar17->_current).key._g;
    DStack_19._current.key._h = (pDVar17->_current).key._h;
    DStack_19._current.key._i = (pDVar17->_current).key._i;
    DStack_19._current.key._j = (pDVar17->_current).key._j;
    DStack_19._current.key._k = (pDVar17->_current).key._k;
    DStack_19._current.value.guid._a = (pDVar17->_current).value.guid._a;
    DStack_19._current.value.guid._b = (pDVar17->_current).value.guid._b;
    DStack_19._current.value.guid._c = (pDVar17->_current).value.guid._c;
    DStack_19._current.value.guid._d = (pDVar17->_current).value.guid._d;
    DStack_19._current.value.guid._e = (pDVar17->_current).value.guid._e;
    DStack_19._current.value.guid._f = (pDVar17->_current).value.guid._f;
    DStack_19._current.value.guid._g = (pDVar17->_current).value.guid._g;
    DStack_19._current.value.guid._h = (pDVar17->_current).value.guid._h;
    DStack_19._current.value.guid._i = (pDVar17->_current).value.guid._i;
    DStack_19._current.value.guid._j = (pDVar17->_current).value.guid._j;
    DStack_19._current.value.guid._k = (pDVar17->_current).value.guid._k;
    DStack_19._current.value.gameObject = (pDVar17->_current).value.gameObject;
    DStack_19._current.value.collider = (pDVar17->_current).value.collider;
    DStack_19._current.value.renderer = (pDVar17->_current).value.renderer;
    DStack_19._current.value.filter = (pDVar17->_current).value.filter;
    DStack_19._current.value.transparent = (pDVar17->_current).value.transparent;
    DStack_19._current.value._33_3_ = *(undefined3 *)&(pDVar17->_current).value.field_0x21;
    DStack_19._getEnumeratorRetType = pDVar17->_getEnumeratorRetType;
    uStack_2 = 1;
    pDStack_20 = &DStack_19;
    while (bVar21 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::
                    Guid,ChunkInstances+ChunkInstanceVariables]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                              (&DStack_19,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                              ), bVar21 != 0) {
      KStack_8.value.transparent = DStack_19._current.value.transparent;
      KStack_8.value._33_3_ = DStack_19._current.value._33_3_;
      KStack_8.key._a = DStack_19._current.key._a;
      KStack_8.key._b = DStack_19._current.key._b;
      KStack_8.key._c = DStack_19._current.key._c;
      KStack_8.key._d = DStack_19._current.key._d;
      KStack_8.key._e = DStack_19._current.key._e;
      KStack_8.key._f = DStack_19._current.key._f;
      KStack_8.key._g = DStack_19._current.key._g;
      KStack_8.key._h = DStack_19._current.key._h;
      KStack_8.key._i = DStack_19._current.key._i;
      KStack_8.key._j = DStack_19._current.key._j;
      KStack_8.key._k = DStack_19._current.key._k;
      KStack_8.value.guid._a = DStack_19._current.value.guid._a;
      KStack_8.value.guid._b = DStack_19._current.value.guid._b;
      KStack_8.value.guid._c = DStack_19._current.value.guid._c;
      KStack_8.value.guid._d = DStack_19._current.value.guid._d;
      KStack_8.value.guid._e = DStack_19._current.value.guid._e;
      KStack_8.value.guid._f = DStack_19._current.value.guid._f;
      KStack_8.value.guid._g = DStack_19._current.value.guid._g;
      KStack_8.value.guid._h = DStack_19._current.value.guid._h;
      KStack_8.value.guid._i = DStack_19._current.value.guid._i;
      KStack_8.value.guid._j = DStack_19._current.value.guid._j;
      KStack_8.value.guid._k = DStack_19._current.value.guid._k;
      KStack_8.value.gameObject = DStack_19._current.value.gameObject;
      KStack_8.value.collider = DStack_19._current.value.collider;
      KStack_8.value.renderer = DStack_19._current.value.renderer;
      KStack_8.value.filter = DStack_19._current.value.filter;
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
      Guid,ChunkInstances+ChunkInstanceVariables]::
      KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Deconstruct
                (&KStack_8,(Guid *)auStack_10,&CStack_9,
                 MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                );
      this_00 = CStack_9.renderer;
      pSStack_22 = (String *)auStack_10;
      pSStack_23 = pSStack_11;
      pMStack_24 = pMStack_12;
      pTStack_25 = pTStack_13;
      pSStack_26 = (String *)CStack_9.gameObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pSStack_26,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar21 == 0) {
        if (pLStack_14 == (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)0x0)
        goto code_?;
        func_?(pLStack_14);
      }
      else {
        if (this_00 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)this_00,(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
        method_00 = (MethodInfo *)(this->fields).meshBounds.m_Extents.z;
        uVar27 = (this->fields).meshBounds.m_Center.x;
        uVar28 = (this->fields).meshBounds.m_Center.y;
        uVar29 = (this->fields).meshBounds.m_Center.z;
        bounds.m_Center.z = (float)uVar29;
        bounds.m_Center.y = (float)uVar28;
        bounds.m_Center.x = (float)uVar27;
        uVar30 = (this->fields).meshBounds.m_Extents.x;
        uVar31 = (this->fields).meshBounds.m_Extents.y;
        bounds.m_Extents.y = (float)uVar31;
        bounds.m_Extents.x = (float)uVar30;
        bounds.m_Extents.z = (float)method_00;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (this_02,bounds,(MethodInfo *)0x0);
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_19,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
               ,method_00);
    uStack_2 = 0xffffffff;
    if (pLStack_14 != (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)0x0) {
      iVar32 = (pLStack_14->fields)._size;
      while (iVar32 = iVar32 + -1, -1 < iVar32) {
        pDVar15 = (this->fields).instances;
        pGVar33 = (Guid *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements
                          ::VisualTreeAsset+AssetEntry]::
                          List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                                    (&VStack_34,pLStack_14,iVar32,
                                     MethodInfo__System__Collections__Generic__List<System::Guid>__get_Item_int_
                                    );
        if (pDVar15 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                  (pDVar15,*pGVar33,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                  );
      }
      pDVar15 = (this->fields).instances;
      this = (CubeModelChunk *)0x0;
      while (pDVar15 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
        iVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                           ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)pDVar15,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                           );
        if (iVar32 <= (int)this) {
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        pKVar35 = System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt
                            ((KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)
                             &stack0xfffffeb4,
                             (IEnumerable_1_KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables_
                              *)(pCVar1->fields).instances,(int32_t)this,
                             System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_MethodInfo__System__Linq__Enumerable__ElementAt<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>_>__int_
                            );
        KStack_8.key._a = (pKVar35->key)._a;
        KStack_8.key._b = (pKVar35->key)._b;
        KStack_8.key._c = (pKVar35->key)._c;
        KStack_8.key._d = (pKVar35->key)._d;
        KStack_8.key._e = (pKVar35->key)._e;
        KStack_8.key._f = (pKVar35->key)._f;
        KStack_8.key._g = (pKVar35->key)._g;
        KStack_8.key._h = (pKVar35->key)._h;
        KStack_8.key._i = (pKVar35->key)._i;
        KStack_8.key._j = (pKVar35->key)._j;
        KStack_8.key._k = (pKVar35->key)._k;
        KStack_8.value.guid._a = (pKVar35->value).guid._a;
        KStack_8.value.guid._b = (pKVar35->value).guid._b;
        KStack_8.value.guid._c = (pKVar35->value).guid._c;
        KStack_8.value.guid._d = (pKVar35->value).guid._d;
        KStack_8.value.guid._e = (pKVar35->value).guid._e;
        KStack_8.value.guid._f = (pKVar35->value).guid._f;
        KStack_8.value.guid._g = (pKVar35->value).guid._g;
        KStack_8.value.guid._h = (pKVar35->value).guid._h;
        KStack_8.value.guid._i = (pKVar35->value).guid._i;
        KStack_8.value.guid._j = (pKVar35->value).guid._j;
        KStack_8.value.guid._k = (pKVar35->value).guid._k;
        KStack_8.value.gameObject = (pKVar35->value).gameObject;
        KStack_8.value.collider = (pKVar35->value).collider;
        KStack_8.value.renderer = (pKVar35->value).renderer;
        KStack_8.value.filter = (pKVar35->value).filter;
        KStack_8.value.transparent = (pKVar35->value).transparent;
        KStack_8.value._33_3_ = *(undefined3 *)&(pKVar35->value).field_0x21;
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Deconstruct
                  (&KStack_8,(Guid *)auStack_10,&CStack_9,
                   MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                  );
        uVar36 = CStack_9._32_4_;
        uVar37 = CStack_9.guid._12_4_;
        uVar38 = CStack_9.guid._8_4_;
        uVar39 = CStack_9.guid._4_4_;
        iVar32 = CStack_9.guid._a;
        VStack_34.path = (String *)auStack_10;
        VStack_34.typeFullName = pSStack_11;
        VStack_34.asset = (Object_1 *)pMStack_12;
        VStack_34.m_CachedType = pTStack_13;
        pDStack_20 = (Dictionary_2_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables_
                      *)(pCVar1->fields).meshBounds.m_Extents.z;
        uStack_18._0_4_ = (pCVar1->fields).meshBounds.m_Extents.x;
        uStack_18._4_4_ = (pCVar1->fields).meshBounds.m_Extents.y;
        fStack_40 = (float)(undefined4)uStack_18 * _UNK_?;
        pSStack_22 = (String *)CStack_9.gameObject;
        pSStack_23 = (String *)CStack_9.collider;
        pMStack_24 = CStack_9.renderer;
        pTStack_25 = (Type *)CStack_9.filter;
        fStack_41 = (float)uStack_18._4_4_ * _UNK_?;
        fStack_42 = (float)pDStack_20 * _UNK_?;
        if (((String *)CStack_9.collider == (String *)0x0) ||
           (value.y = fStack_41, value.x = fStack_40, value.z = fStack_42,
           UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                     (CStack_9.collider,value,(MethodInfo *)0x0), pSStack_23 == (String *)0x0))
        break;
        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                  ((BoxCollider *)pSStack_23,(pCVar1->fields).meshBounds.m_Center,(MethodInfo *)0x0)
        ;
        uVar43 = CStack_9._32_4_;
        uVar44 = CStack_9.guid._12_4_;
        uVar45 = CStack_9.guid._8_4_;
        uVar46 = CStack_9.guid._4_4_;
        pDVar15 = (pCVar1->fields).instances;
        if (pDVar15 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
        key._4_4_ = VStack_34.typeFullName;
        key._a = (int32_t)VStack_34.path;
        key._8_4_ = VStack_34.asset;
        key._12_4_ = VStack_34.m_CachedType;
        CStack_9.guid._b = (int16_t)uVar39;
        CStack_9.guid._c = SUB42(uVar39,2);
        value_00.guid._b = CStack_9.guid._b;
        value_00.guid._c = CStack_9.guid._c;
        value_00.guid._a = iVar32;
        CStack_9.guid._d = (uint8_t)uVar38;
        CStack_9.guid._e = SUB41(uVar38,1);
        CStack_9.guid._f = SUB41(uVar38,2);
        CStack_9.guid._g = SUB41(uVar38,3);
        value_00.guid._d = CStack_9.guid._d;
        value_00.guid._e = CStack_9.guid._e;
        value_00.guid._f = CStack_9.guid._f;
        value_00.guid._g = CStack_9.guid._g;
        CStack_9.guid._h = (uint8_t)uVar37;
        CStack_9.guid._i = SUB41(uVar37,1);
        CStack_9.guid._j = SUB41(uVar37,2);
        CStack_9.guid._k = SUB41(uVar37,3);
        value_00.guid._h = CStack_9.guid._h;
        value_00.guid._i = CStack_9.guid._i;
        value_00.guid._j = CStack_9.guid._j;
        value_00.guid._k = CStack_9.guid._k;
        value_00.gameObject = (GameObject *)pSStack_22;
        value_00.collider = (BoxCollider *)pSStack_23;
        value_00.renderer = pMStack_24;
        value_00.filter = (MeshFilter *)pTStack_25;
        CStack_9.transparent = (bool)uVar36;
        CStack_9._33_3_ = SUB43(uVar36,1);
        value_00.transparent = CStack_9.transparent;
        value_00._33_3_ = CStack_9._33_3_;
        CStack_9.guid._4_4_ = uVar46;
        CStack_9.guid._8_4_ = uVar45;
        CStack_9.guid._12_4_ = uVar44;
        CStack_9._32_4_ = uVar43;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__set_Item
                  (pDVar15,key,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                  );
        this = (CubeModelChunk *)((int)&this->klass + 1);
        pDVar15 = (pCVar1->fields).instances;
      }
    }
  }
code_?:
  func_?();
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
  return;
}


/* CubeModelChunk() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__FaceData);
    func_?(&TypeInfo__FaceData);
    cRam_? = '\x01';
  }
  pFVar1 = (FaceData__Array *)func_?(TypeInfo__FaceData,6);
  pFVar2 = (FaceData *)func_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
  if (pFVar1 == (FaceData__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pFVar2 != (FaceData *)0x0) {
      iVar4 = func_?(pFVar2,(pFVar1->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (pFVar1->max_length == 0) goto code_?;
    pFVar1->vector[0] = pFVar2;
    func_?(pFVar1->vector,pFVar2);
    pFVar2 = (FaceData *)func_?(TypeInfo__FaceData);
    FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
    if (pFVar2 != (FaceData *)0x0) {
      iVar4 = func_?(pFVar2,(pFVar1->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (pFVar1->max_length < 2) goto code_?;
    pFVar1->vector[1] = pFVar2;
    func_?(pFVar1->vector + 1,pFVar2);
    pFVar2 = (FaceData *)func_?(TypeInfo__FaceData);
    FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
    if (pFVar2 != (FaceData *)0x0) {
      iVar4 = func_?(pFVar2,(pFVar1->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (pFVar1->max_length < 3) goto code_?;
    pFVar1->vector[2] = pFVar2;
    func_?(pFVar1->vector + 2,pFVar2);
    pFVar2 = (FaceData *)func_?(TypeInfo__FaceData);
    FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
    if (pFVar2 != (FaceData *)0x0) {
      iVar4 = func_?(pFVar2,(pFVar1->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (pFVar1->max_length < 4) goto code_?;
    pFVar1->vector[3] = pFVar2;
    func_?(pFVar1->vector + 3,pFVar2);
    pFVar2 = (FaceData *)func_?(TypeInfo__FaceData);
    FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
    if (pFVar2 != (FaceData *)0x0) {
      iVar4 = func_?(pFVar2,(pFVar1->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (pFVar1->max_length < 5) goto code_?;
    pFVar1->vector[4] = pFVar2;
    func_?(pFVar1->vector + 4,pFVar2);
    pFVar2 = (FaceData *)func_?(TypeInfo__FaceData);
    FaceData::FaceData__ctor(pFVar2,(MethodInfo *)0x0);
    if (pFVar2 != (FaceData *)0x0) {
      iVar4 = func_?(pFVar2,(pFVar1->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (5 < pFVar1->max_length) {
      pFVar1->vector[5] = pFVar2;
      func_?(pFVar1->vector + 5,pFVar2);
      TypeInfo__CubeModelChunk->static_fields->faceData = pFVar1;
      func_?(TypeInfo__CubeModelChunk->static_fields,pFVar1);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CubeModelChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__ctor
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_chunk);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Guid,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
            );
  ppDVar1 = &(this->fields).instances;
  *ppDVar1 = this_00;
  func_?(ppDVar1,this_00);
  this_01 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).cells;
  *(Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ **)method_00 =
       this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  if (values == (String__Array *)0x0) {
    func_?();
  }
  else if (values->max_length != 0) {
    values->vector[0] = StringLiteral_chunk;
    func_?();
    pSVar2 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector,(MethodInfo *)0x0);
    if (1 < values->max_length) {
      values->vector[1] = pSVar2;
      func_?();
      if (2 < values->max_length) {
        values->vector[2] = ::StringLiteral__;
        func_?();
        pSVar2 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector.y,(MethodInfo *)0x0);
        if (3 < values->max_length) {
          values->vector[3] = pSVar2;
          func_?();
          if (4 < values->max_length) {
            values->vector[4] = ::StringLiteral__;
            func_?();
            pSVar2 = mscorlib.dll::System::Int16::Int16_ToString
                               ((Int16 *)&iVector.z,(MethodInfo *)0x0);
            if (5 < values->max_length) {
              values->vector[5] = pSVar2;
              func_?();
              pSVar2 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              (this->fields).name = pSVar2;
              func_?();
              (this->fields).chunkPos.x = iVector.x;
              (this->fields).chunkPos.y = iVector.y;
              (this->fields).chunkPos.z = iVector.z;
              this_02 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(this_02,(MethodInfo *)0x0);
              uVar3 = ZEXT48(this_02);
              func_?(&stack0xfffffff4,this_02);
              uVar3 = uVar3 & 0xffffffff;
              func_?(&stack0xfffffff8,0);
              pSVar4 = &(this->fields).sharedMeshData;
              pSVar4->mesh = (Mesh *)uVar3;
              (this->fields).sharedMeshData.material = (Material *)(uVar3 >> 0x20);
              func_?(pSVar4,0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

