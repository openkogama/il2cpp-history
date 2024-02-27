
/* Void AddToChunk(IntVector, Cube, Boolean) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AddToChunk
               (CubeModelChunk *this,IntVector iVector,Cube *cube,bool setVisibility,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x13ac);
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
  pVVar1 = (Vector3__Array *)
           MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                     (faceFlagCube,(MethodInfo *)0x0);
  if (*cube == (Cube *)0x0) goto code_?;
  pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)*cube,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Cube::Cube_GetFace_1(pVVar2,(Face__Enum)pVVar1,(MethodInfo *)0x0);
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar2 = pVVar1;
  bVar3 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
                    ((Face__Enum)pVVar1,(Vector3__Array **)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    faceFlagOpposite = (FaceFlags__Enum)&UNK_?;
    func_?();
  }
  faceFlagCube._0_1_ = 0x54;
  face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                   (faceFlagOpposite,(MethodInfo *)0x0);
  if (*neighborCube == (Cube *)0x0) goto code_?;
  cube = (Cube **)&UNK_?;
  pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)*neighborCube,(MethodInfo *)0x0);
  unaff_EBX = pVVar2;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    unaff_EBX = pVVar2;
  }
  neighborCube = (Cube **)&UNK_?;
  pVVar2 = Cube::Cube_GetFace_1(pVVar4,face,(MethodInfo *)0x0);
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = CubeModelChunk_AllFaceCornersIsTouchingCubeBorder
                    (face,(Vector3__Array **)&stack0xfffffff4,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  switch(pVVar1) {
  case (Vector3__Array *)0x0:
  case (Vector3__Array *)0x1:
    uVar5 = 0;
    pVVar1 = (Vector3__Array *)unaff_EBX->vector;
    do {
      if (unaff_EBX == (Vector3__Array *)0x0) goto code_?;
      cVar6 = uVar5 < unaff_EBX->max_length;
      if (!(bool)cVar6) goto code_?;
      if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
      cVar6 = 3 - uVar5 < pVVar2->max_length;
      if (!(bool)cVar6) goto code_?;
      if ((float)pVVar1->klass != *(float *)((int)pVVar2 + (3 - uVar5) * 0xc + 0x10)) {
        return;
      }
      puStack7 = (undefined *)uVar5;
      iVar8 = func_?();
      pVVar4 = *(Vector3__Array **)(iVar8 + 8);
      iVar8 = func_?();
      if ((float)pVVar4 != *(float *)(iVar8 + 8)) {
        return;
      }
      uVar5 = uVar5 + 1;
      pVVar1 = (Vector3__Array *)&pVVar1->max_length;
    } while ((int)uVar5 < 4);
    goto code_?;
  case (Vector3__Array *)0x2:
  case (Vector3__Array *)0x3:
    bVar9 = unaff_EBX == (Vector3__Array *)0x0;
    unaff_EBX = pVVar4;
    if (bVar9) goto code_?;
    puStack7 = (undefined *)0x0;
    pfVar10 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar10;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    puStack7 = (undefined *)0x1;
    pfVar10 = (float *)func_?();
    if ((float)pVVar1 != *pfVar10) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 4)) {
      return;
    }
    pfVar10 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar10;
    pfVar10 = (float *)func_?();
    if ((float)pVVar1 != *pfVar10) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 4)) {
      return;
    }
    pfVar10 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar10;
    pfVar10 = (float *)func_?();
    if ((float)pVVar1 != *pfVar10) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 4)) {
      return;
    }
    pfVar10 = (float *)func_?();
    pVVar1 = (Vector3__Array *)*pfVar10;
    pfVar10 = (float *)func_?();
    bVar11 = NAN((float)pVVar1) || NAN(*pfVar10);
    bVar9 = (float)pVVar1 == *pfVar10;
    break;
  case (Vector3__Array *)0x4:
  case (Vector3__Array *)0x5:
    bVar9 = unaff_EBX == (Vector3__Array *)0x0;
    unaff_EBX = pVVar4;
    if (bVar9) goto code_?;
    puStack7 = (undefined *)0x0;
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 8);
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    puStack7 = (undefined *)0x1;
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 8)) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 4)) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 8);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 8)) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 4)) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 8);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 8)) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    if ((float)pVVar1 != *(float *)(iVar8 + 4)) {
      return;
    }
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 8);
    iVar8 = func_?();
    bVar11 = NAN((float)pVVar1) || NAN(*(float *)(iVar8 + 8));
    bVar9 = (float)pVVar1 == *(float *)(iVar8 + 8);
    break;
  default:
    goto code_?;
  }
  neighborCube = (Cube **)0x2;
  cube = (Cube **)0x3;
  faceFlagOpposite = FaceFlags__Enum_Bottom|FaceFlags__Enum_Top;
  faceFlagCube._0_1_ = FaceFlags__Enum_Bottom;
  if (bVar11 != bVar9) {
    iVar8 = func_?();
    pVVar1 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    unaff_EBX = pVVar4;
    if ((float)pVVar1 == *(float *)(iVar8 + 4)) {
code_?:
      if (*cube != (Cube *)0x0) {
        puVar12 = &((*cube)->fields).hiddenSides;
        *puVar12 = *puVar12 | (undefined1)faceFlagCube;
        if (*neighborCube != (Cube *)0x0) {
          puVar12 = &((*neighborCube)->fields).hiddenSides;
          *puVar12 = *puVar12 | (byte)faceFlagOpposite;
          return;
        }
      }
code_?:
      cVar6 = '\0';
      func_?();
code_?:
      func_?();
      bVar13 = ((byte)extraout_ECX & 0x1f) % 9;
      uVar14 = CONCAT11(cVar6,*extraout_ECX) >> bVar13 |
              CONCAT11(cVar6,*extraout_ECX) << 9 - bVar13;
      *extraout_ECX = (char)uVar14;
      bVar15 = (bVar13 == 0) * cVar6 | (bVar13 != 0) * ((uVar14 & 0x100) != 0);
      bVar13 = (byte)extraout_EDX;
      bVar16 = bVar13 * '\x02' + bVar15;
      pbVar17 = (byte *)CONCAT31((int3)((uint)extraout_EDX >> 8),bVar16);
      *(int *)(in_stack_18 + 0x10) =
           (*(int *)(in_stack_18 + 0x10) - (int)unaff_EBX) -
           (uint)(CARRY1(bVar13,bVar13) || CARRY1(bVar13 * '\x02',bVar15));
      lVar19 = (longlong)*(int *)pbVar17 * 0x58;
      bVar9 = (int)lVar19 != lVar19;
      pbVar20 = (byte *)((int)lVar19 + 0x1a);
      bVar15 = (byte)((uint)extraout_ECX >> 8);
      bVar13 = *pbVar20 + bVar15;
      bVar11 = CARRY1(*pbVar20,bVar15) || CARRY1(bVar13,bVar9);
      *pbVar20 = bVar13 + bVar9;
      bVar13 = *pbVar17;
      bVar15 = *pbVar17;
      *pbVar17 = bVar15 + bVar16 + bVar11;
      *pbVar17 = *pbVar17 + bVar16 +
                 (in_stack_21 < 0x58 ||
                 (byte)(in_stack_21 + 0xa8) <
                 (CARRY1(bVar13,bVar16) || CARRY1(bVar15 + bVar16,bVar11)));
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
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
  uVar3 = 0;
  pVVar4 = *faceIndices;
  if (pVVar4 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar5 = pVVar4->vector;
    while( true ) {
      if ((int)pVVar4->max_length <= (int)uVar3) {
        return 1;
      }
      if (pVVar4->max_length <= uVar3) break;
      VStack_6.z = pVVar5->z;
      VStack_6.x = pVVar5->x;
      VStack_6.y = pVVar5->y;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (&VStack_6,iStack_1,(MethodInfo *)0x0);
      if (fVar7 != fStack_2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      pVVar5 = pVVar5 + 1;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void ChunkInstancesChanged(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_ChunkInstancesChanged
               (CubeModelChunk *this,Object *sender,ChunkInstancesChanged *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstances);
    func_?(0x3778);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(0xa4fc);
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
    if (((pOVar12->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment) ||
       ((MVCubeModelBase__Class *)
        (pOVar12->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelBase)) {
      if (((pOVar12->_1).naturalAligment < (TypeInfo__ChunkInstances->_1).naturalAligment) ||
         (this_00 = (ChunkInstances *)sender,
         (pOVar12->_1).typeHierarchy[(TypeInfo__ChunkInstances->_1).naturalAligment - 1] !=
         (Il2CppClass *)TypeInfo__ChunkInstances)) goto code_?;
    }
    else {
      this_00 = (ChunkInstances *)sender[0x1b].monitor;
      if ((ChunkInstances *)sender[0x1b].monitor == (ChunkInstances *)0x0) {
code_?:
        pTVar13 = mscorlib.dll::System::Object::Object_GetType(sender,(MethodInfo *)0x0);
        pSVar14 = StringLiteral_CubeModelChunk___ChunkInstanceCh;
        if (pTVar13 == (Type *)0x0) {
          str1 = (String *)0x0;
        }
        else {
          str1 = (String *)
                 (*(code *)(pTVar13->klass->vtable).ToString.method)
                           (pTVar13,(pTVar13->klass->vtable).GetCustomAttributes.methodPtr);
        }
        pSVar14 = mscorlib.dll::System::String::String_Concat_3(pSVar14,str1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar14,(MethodInfo *)0x0);
        return;
      }
    }
    if (e != (ChunkInstancesChanged *)0x0) {
      uVar15 = (e->fields).chunkPos.x;
      uVar16 = (e->fields).chunkPos.y;
      a.y = uVar16;
      a.x = uVar15;
      iStack_17 = (e->fields).chunkPos.z;
      b = (this->fields).chunkPos;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        cVar1 = '\0';
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      a.z = iStack_17;
      bVar18 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                         (a,b,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        return;
      }
      if ((e->fields).changeType == 0) {
        pCVar19 = ChunkInstances::ChunkInstances_GetChunk
                            ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                             (e->fields).chunkPos,(MethodInfo *)0x0);
        pDVar20 = (this->fields).instances;
        uVar4 = *(undefined4 *)&pCVar19->transparent;
        GVar21 = pCVar19->guid;
        GVar22 = pCVar19->guid;
        uVar23 = (pCVar19->guid)._f;
        uVar24 = (pCVar19->guid)._g;
        GVar25._g = uVar24;
        GVar25._f = uVar23;
        uVar26 = (pCVar19->guid)._a;
        uVar27 = (pCVar19->guid)._b;
        uVar28 = (pCVar19->guid)._c;
        uVar29 = (pCVar19->guid)._d;
        uVar30 = (pCVar19->guid)._e;
        GVar25._e = uVar30;
        GVar25._d = uVar29;
        GVar25._c = uVar28;
        GVar25._b = uVar27;
        GVar25._a = uVar26;
        uVar31 = (pCVar19->guid)._h;
        uVar32 = (pCVar19->guid)._i;
        uVar33 = (pCVar19->guid)._j;
        uVar34 = (pCVar19->guid)._k;
        GVar25._k = uVar34;
        GVar25._j = uVar33;
        GVar25._i = uVar32;
        GVar25._h = uVar31;
        pGVar35 = pCVar19->gameObject;
        pBVar36 = pCVar19->collider;
        pMVar37 = pCVar19->renderer;
        pMVar38 = pCVar19->filter;
        if (pDVar20 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          uVar39 = (pCVar19->guid)._j;
          uVar40 = (pCVar19->guid)._k;
          value_00.guid._k = uVar40;
          value_00.guid._j = uVar39;
          uVar41 = (pCVar19->guid)._a;
          uVar42 = (pCVar19->guid)._b;
          uVar43 = (pCVar19->guid)._c;
          uVar44 = (pCVar19->guid)._d;
          uVar45 = (pCVar19->guid)._e;
          uVar46 = (pCVar19->guid)._f;
          uVar47 = (pCVar19->guid)._g;
          uVar48 = (pCVar19->guid)._h;
          uVar49 = (pCVar19->guid)._i;
          value_00.guid._i = uVar49;
          value_00.guid._h = uVar48;
          value_00.guid._g = uVar47;
          value_00.guid._f = uVar46;
          value_00.guid._e = uVar45;
          value_00.guid._d = uVar44;
          value_00.guid._c = uVar43;
          value_00.guid._b = uVar42;
          value_00.guid._a = uVar41;
          value_00.gameObject = pCVar19->gameObject;
          value_00.collider = pCVar19->collider;
          value_00.renderer = pCVar19->renderer;
          value_00.filter._0_2_ = (short)pCVar19->filter;
          value_00.filter._2_2_ = (short)((uint)pCVar19->filter >> 0x10);
          value_00._32_4_ = uVar4;
          bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Guid,ChunkInstances+ChunkInstanceVariables]::
                   Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__TryAdd
                             (pDVar20,GVar25,value_00,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__TryAdd_System__Guid__ChunkInstances__ChunkInstanceVariables_
                             );
          if (bVar18 != 0) {
            return;
          }
          pDVar20 = (this->fields).instances;
          if (pDVar20 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
            value_01.gameObject = pGVar35;
            value_01.guid = GVar21;
            value_01.collider = pBVar36;
            value_01.renderer = pMVar37;
            value_01.filter = pMVar38;
            value_01._32_4_ = uVar4;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Guid,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__set_Item
                      (pDVar20,GVar22,value_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                      );
            return;
          }
        }
      }
      else if ((e->fields).changeType == 1) {
        bVar18 = ChunkInstances::ChunkInstances_Contains
                           (this_00,(e->fields).chunkPos,(MethodInfo *)0x0);
        if (bVar18 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Could_not_remove_instance_becuas,(MethodInfo *)0x0);
          return;
        }
        pCVar19 = ChunkInstances::ChunkInstances_GetChunk
                            ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                             (e->fields).chunkPos,(MethodInfo *)0x0);
        uVar50 = (pCVar19->guid)._c;
        uVar51 = (pCVar19->guid)._a;
        uVar52 = (pCVar19->guid)._b;
        GVar22._b = uVar52;
        GVar22._a = uVar51;
        uVar53 = (pCVar19->guid)._d;
        uVar54 = (pCVar19->guid)._e;
        uVar55 = (pCVar19->guid)._f;
        uVar56 = (pCVar19->guid)._g;
        GVar22._g = uVar56;
        GVar22._f = uVar55;
        GVar22._e = uVar54;
        GVar22._d = uVar53;
        uVar4._0_1_ = (pCVar19->guid)._h;
        uVar4._1_1_ = (pCVar19->guid)._i;
        uVar4._2_1_ = (pCVar19->guid)._j;
        uVar4._3_1_ = (pCVar19->guid)._k;
        pUVar57 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar57,(Object *)this,
                   MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                   ,(MethodInfo *)0x0);
        ChunkInstances::ChunkInstances_remove_Changed
                  (this_00,(EventHandler_1_ChunkInstancesChanged_ *)pUVar57,(MethodInfo *)0x0);
        pDVar20 = (this->fields).instances;
        if (pDVar20 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          GVar22._c = uVar50;
          GVar22._h = (char)(short)uVar4;
          GVar22._i = (char)((ushort)(short)uVar4 >> 8);
          GVar22._j = uVar4._2_1_;
          GVar22._k = uVar4._3_1_;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Guid,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                    (pDVar20,GVar22,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                    );
          return;
        }
      }
      else if ((e->fields).changeType == 2) {
        pUVar57 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar57,(Object *)this,
                   MethodInfo__CubeModelChunk__ChunkInstancesChanged_System__Object__ChunkInstancesChanged_
                   ,(MethodInfo *)0x0);
        ChunkInstances::ChunkInstances_remove_Changed
                  (this_00,(EventHandler_1_ChunkInstancesChanged_ *)pUVar57,(MethodInfo *)0x0);
        pDVar20 = (this->fields).instances;
        if (pDVar20 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)pDVar20,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Clear__
                    );
          return;
        }
      }
      else {
        if ((e->fields).changeType != 3) {
          if ((e->fields).changeType == 4) {
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
        pCVar19 = ChunkInstances::ChunkInstances_GetChunk
                            ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff1c,this_00,
                             (e->fields).chunkPos,(MethodInfo *)0x0);
        GVar25 = pCVar19->guid;
        if ((this->fields).instances !=
            (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          cVar58 = func_?();
          if (cVar58 == '\0') {
            return;
          }
          if (cVar1 != '\0') {
            return;
          }
          pDVar20 = (this->fields).instances;
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
          if (pDVar20 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
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
                      (pDVar20,GVar25,value,
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
  pcVar59 = (code *)swi(3);
  (*pcVar59)();
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
    func_?(0x1208);
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = 0;
  IVar7 = (this->fields).chunkPos;
  pSStack_8 = (String *)0x0;
  pCStack_9 = (Cube *)0x0;
  pOStack_10 = (Object *)0x0;
  iStack_11 = 0;
  pCVar12 = (CubeModelChunk *)func_?(TypeInfo__CubeModelChunk);
  pCStack_13 = pCVar12;
  CubeModelChunk__ctor(pCVar12,IVar7,(MethodInfo *)0x0);
  this_00 = (this->fields).cells;
  pCStack_14 = pCVar12;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffff7c,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_16 = 0;
    auStack_6._0_4_ = pDVar15->_dictionary;
    auStack_6._4_4_ = pDVar15->_version;
    auStack_6._8_4_ = pDVar15->_index;
    auStack_6._12_4_ = (pDVar15->_current).key._options;
    pSStack_8 = (pDVar15->_current).key._cultureKey;
    pCStack_9 = (Cube *)(pDVar15->_current).key._pattern;
    pOStack_10 = (pDVar15->_current).value;
    iStack_11 = pDVar15->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_17 = (Object *)auStack_6;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      pCVar19 = pCStack_9;
      if (bVar18 == 0) break;
      if (pCVar12 == (CubeModelChunk *)0x0) goto code_?;
      pDStack_20 = (pCVar12->fields).cells;
      iStack_21 = auStack_6._12_4_;
      iStack_22 = (int16_t)pSStack_8;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar19 = Cube::Cube_Clone_1(pCVar19,(MethodInfo *)0x0);
      uStack_23 = ZEXT48(pCVar19);
      func_?();
      if (pCVar19 == (Cube *)0x0) goto code_?;
      uStack_23._0_5_ =
           CONCAT14(((pCVar19->fields)._.unIndentedSides & 0x3f) != 0x3f,(Cube *)uStack_23);
      if (pDStack_20 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      IVar7.z = iStack_22;
      IVar7.x = (undefined2)iStack_21;
      IVar7.y = iStack_21._2_2_;
      value._4_4_ = uStack_23._4_4_;
      value.cube = (Cube *)uStack_23;
      in_stack_24 = uStack_23._4_4_;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Add
                (pDStack_20,IVar7,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Add_MV__WorldObject__IntVector__Cell_
                );
      pCVar12 = pCStack_13;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
               ,in_stack_24);
    uStack_1 = 0xffffffff;
    if (pCVar12 != (CubeModelChunk *)0x0) {
      (pCVar12->fields).cubeCount = (this->fields).cubeCount;
      CubeModelChunk_RebuildChunk(pCVar12,scale,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return pCVar12;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  pCVar12 = (CubeModelChunk *)(*pcVar25)();
  return pCVar12;
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
    func_?(0x12f8);
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
  pDVar6 = (this->fields).cells;
  CStack_7.cube = (Cube *)0x0;
  CStack_7.lightValue = 0;
  CStack_7._5_3_ = 0;
  if (pDVar6 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                      );
    if ((chunk != (CubeModelChunk *)0x0) &&
       (pDVar6 = (chunk->fields).cells, pDVar6 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0
       )) {
      iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                         ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)pDVar6,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                         );
      if (iVar8 == iVar9) {
        pDVar6 = (this->fields).cells;
        if (pDVar6 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                            (&DStack_11,
                             (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)pDVar6,
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
          pDVar6 = (chunk->fields).cells;
          DStack_11._current.key._cultureKey = pSVar13;
          DStack_11._current.key._pattern = pSVar14;
          DStack_11._current.value = (Object *)pCVar15;
          DStack_11._getEnumeratorRetType = (int32_t)pOVar16;
          if (pDVar6 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
          bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                            (pDVar6,key,&CStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                            );
          if (bVar18 == 0) break;
          b = CStack_7.cube;
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
  uStack_6 = 0;
  iStack_7 = 0;
  auStack_8._0_4_ = (Object__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = 0;
  pSStack_9 = (String *)0x0;
  pDVar10 = (this->fields).cells;
  iStack_11 = 0;
  pSStack_12 = (String *)0x0;
  pCStack_13 = (Cube *)0x0;
  pOStack_14 = (Object *)0x0;
  iStack_15 = 0;
  if (pDVar10 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar16 = func_?();
    func_?(uVar16);
    pcVar17 = (code *)swi(3);
    bVar18 = (*pcVar17)();
    return bVar18;
  }
  pDVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
           ::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                     (&DStack_20,
                      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)pDVar10,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                     );
  uStack_21 = 0;
  auStack_8._0_4_ = pDVar19->_dictionary;
  auStack_8._4_4_ = pDVar19->_version;
  auStack_8._8_4_ = pDVar19->_index;
  pSStack_9 = (String *)(pDVar19->_current).key._options;
  pSStack_12 = (pDVar19->_current).key._cultureKey;
  pCStack_13 = (Cube *)(pDVar19->_current).key._pattern;
  pOStack_14 = (pDVar19->_current).value;
  iStack_15 = pDVar19->_getEnumeratorRetType;
  uStack_1 = 1;
  iVar22 = 0;
  pOStack_23 = (Object *)auStack_8;
code_?:
  iStack_24 = iStack_7;
  bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
          WorldObject::IntVector,Cell]::
          Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                     auStack_8,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                    );
  if (bVar18 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
               ,unaff_EBX);
    *matchingCubeCount = *matchingCubeCount + iStack_7;
    *investigatedCubeCount = *investigatedCubeCount + iStack_11;
    *unaff_FS_OFFSET = uStack_3;
    return iStack_24 == iVar22;
  }
  DStack_20._current.key._cultureKey = pSStack_9;
  DStack_20._current.key._pattern = pSStack_12;
  DStack_20._current.value = (Object *)pCStack_13;
  DStack_20._getEnumeratorRetType = (int32_t)pOStack_14;
  if (visibleCubesOnly == 0) goto code_?;
  if (pCStack_13 != (Cube *)0x0) goto code_?;
  goto code_?;
code_?:
  iVar22 = iStack_11;
  if ((pCStack_13->fields).hiddenSides != 0x3f) {
code_?:
    if (chunk != (CubeModelChunk *)0x0) {
      pDVar10 = (chunk->fields).cells;
      if (pDVar10 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      cVar25 = func_?(pDVar10,pSStack_9,(uint)pSStack_12 & 0xffff);
      if (cVar25 != '\0') {
        for (uVar26 = 0; (int)uVar26 < 8; uVar26 = uVar26 + 1) {
          if (((Cube *)DStack_20._current.value == (Cube *)0x0) ||
             (pBVar27 = (((Cube__Fields *)((int)DStack_20._current.value + 8))->_).byteCorners,
             pBVar27 == (Byte__Array *)0x0)) goto code_?;
          if (pBVar27->max_length <= uVar26) {
            func_?();
            goto code_?;
          }
          if (((int)uStack_6 == 0) || (iVar22 = *(int *)((int)uStack_6 + 0xc), iVar22 == 0))
          goto code_?;
          if (*(uint *)(iVar22 + 0xc) <= uVar26) goto code_?;
          if (pBVar27->vector[uVar26] != *(uint8_t *)(iVar22 + 0x10 + uVar26)) goto code_?;
        }
        iStack_7 = iStack_7 + 1;
        iVar22 = iStack_11 + 1;
        iStack_11 = iVar22;
        goto code_?;
      }
    }
code_?:
    iVar22 = iStack_11 + 1;
    iStack_11 = iVar22;
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
  func_?(&DStack_6,0,0x30);
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
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[MV::WorldObject::
               IntVector,ChunkInstances+ChunkInstanceVariables]::
               Dictionary_2_TKey_TValue_ValueCollection_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                           *)&stack0xffffff80,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                         );
      uStack_8 = 0;
      DStack_6._dictionary =
           (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue.guid._a = (pDVar7->_currentValue).guid._a;
      DStack_6._currentValue.guid._b = (pDVar7->_currentValue).guid._b;
      DStack_6._currentValue.guid._c = (pDVar7->_currentValue).guid._c;
      DStack_6._currentValue.guid._d = (pDVar7->_currentValue).guid._d;
      DStack_6._currentValue.guid._e = (pDVar7->_currentValue).guid._e;
      DStack_6._currentValue.guid._f = (pDVar7->_currentValue).guid._f;
      DStack_6._currentValue.guid._g = (pDVar7->_currentValue).guid._g;
      DStack_6._currentValue.guid._h = (pDVar7->_currentValue).guid._h;
      DStack_6._currentValue.guid._i = (pDVar7->_currentValue).guid._i;
      DStack_6._currentValue.guid._j = (pDVar7->_currentValue).guid._j;
      DStack_6._currentValue.guid._k = (pDVar7->_currentValue).guid._k;
      DStack_6._currentValue.gameObject = (pDVar7->_currentValue).gameObject;
      DStack_6._currentValue.collider = (pDVar7->_currentValue).collider;
      DStack_6._currentValue.renderer = (pDVar7->_currentValue).renderer;
      DStack_6._currentValue.filter = (pDVar7->_currentValue).filter;
      DStack_6._currentValue.transparent = (pDVar7->_currentValue).transparent;
      DStack_6._currentValue._33_3_ = *(undefined3 *)&(pDVar7->_currentValue).field_0x21;
      uStack_1 = 1;
      pDStack_9 = &DStack_6;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Guid,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                          );
        obj_00 = DStack_6._currentValue.gameObject;
        if (bVar10 == 0) break;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj_00,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
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
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,4);
  uVar2 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  fVar3 = _UNK_?;
  fVar4 = fVar3;
  switch(face) {
  case Face__Enum_Top:
    if ((pVVar1 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar5 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar5 = 0;
      fVar6 = faceVertices->vector[0].z;
      if (pVVar1->max_length == 0) goto code_?;
      pVVar1->vector[0].x = faceVertices->vector[0].x;
      pVVar1->vector[0].y = fVar6;
      bVar5 = faceVertices->max_length == 0;
      if (faceVertices->max_length < 2) goto code_?;
      bVar5 = pVVar1->max_length == 0;
      fVar6 = faceVertices->vector[1].z;
      if (pVVar1->max_length < 2) goto code_?;
      pVVar1->vector[1].x = faceVertices->vector[1].x;
      pVVar1->vector[1].y = fVar6;
      bVar5 = faceVertices->max_length < 2;
      if (faceVertices->max_length < 3) goto code_?;
      bVar5 = pVVar1->max_length < 2;
      fVar6 = faceVertices->vector[2].z;
      if (pVVar1->max_length < 3) goto code_?;
      pVVar1->vector[2].x = faceVertices->vector[2].x;
      pVVar1->vector[2].y = fVar6;
      bVar5 = faceVertices->max_length < 3;
      if (faceVertices->max_length < 4) goto code_?;
      bVar5 = pVVar1->max_length < 3;
      fVar6 = faceVertices->vector[3].z;
      if (pVVar1->max_length < 4) goto code_?;
      pVVar1->vector[3].x = faceVertices->vector[3].x;
      pVVar1->vector[3].y = fVar6;
code_?:
      bVar5 = 0;
      if (pVVar1->max_length != 0) {
        pVVar1->vector[0].x = fVar4 + pVVar1->vector[0].x;
        pVVar1->vector[0].y = fVar3 + pVVar1->vector[0].y;
        bVar5 = pVVar1->max_length == 0;
        if (1 < pVVar1->max_length) {
          fVar6 = pVVar1->vector[1].y;
          pVVar1->vector[1].x = fVar4 + pVVar1->vector[1].x;
          pVVar1->vector[1].y = fVar3 + fVar6;
          bVar5 = pVVar1->max_length < 2;
          if (2 < pVVar1->max_length) {
            fVar6 = pVVar1->vector[2].y;
            pVVar1->vector[2].x = fVar4 + pVVar1->vector[2].x;
            pVVar1->vector[2].y = fVar3 + fVar6;
            bVar5 = pVVar1->max_length < 3;
            if (3 < pVVar1->max_length) {
              fVar6 = pVVar1->vector[3].y;
              pVVar1->vector[3].x = fVar4 + pVVar1->vector[3].x;
              pVVar1->vector[3].y = fVar3 + fVar6;
              bVar5 = 0;
              fVar3 = scale * fVar3;
              if (pVVar1->max_length != 0) {
                pVVar1->vector[0].x = pVVar1->vector[0].x * fVar3;
                pVVar1->vector[0].y = pVVar1->vector[0].y * fVar3;
                bVar5 = pVVar1->max_length == 0;
                if (1 < pVVar1->max_length) {
                  fVar4 = pVVar1->vector[1].y;
                  pVVar1->vector[1].x = pVVar1->vector[1].x * fVar3;
                  pVVar1->vector[1].y = fVar4 * fVar3;
                  bVar5 = pVVar1->max_length < 2;
                  if (2 < pVVar1->max_length) {
                    fVar4 = pVVar1->vector[2].y;
                    pVVar1->vector[2].x = pVVar1->vector[2].x * fVar3;
                    pVVar1->vector[2].y = fVar4 * fVar3;
                    bVar5 = pVVar1->max_length < 3;
                    if (3 < pVVar1->max_length) {
                      fVar4 = pVVar1->vector[3].y;
                      pVVar1->vector[3].x = pVVar1->vector[3].x * fVar3;
                      pVVar1->vector[3].y = fVar4 * fVar3;
                      return pVVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    break;
  case Face__Enum_Bottom:
    if ((pVVar1 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar5 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar5 = 0;
      if (pVVar1->max_length == 0) goto code_?;
      fVar4 = (float)((uint)faceVertices->vector[0].x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pVVar1->vector[0].y = faceVertices->vector[0].z;
      pVVar1->vector[0].x = fVar4;
      bVar5 = faceVertices->max_length == 0;
      if (faceVertices->max_length < 2) goto code_?;
      bVar5 = pVVar1->max_length == 0;
      fVar4 = faceVertices->vector[1].x;
      if (pVVar1->max_length < 2) goto code_?;
      pVVar1->vector[1].y = faceVertices->vector[1].z;
      pVVar1->vector[1].x = (float)((uint)fVar4 ^ uVar2);
      bVar5 = faceVertices->max_length < 2;
      if (faceVertices->max_length < 3) goto code_?;
      bVar5 = pVVar1->max_length < 2;
      fVar4 = faceVertices->vector[2].x;
      if (pVVar1->max_length < 3) goto code_?;
      pVVar1->vector[2].y = faceVertices->vector[2].z;
      pVVar1->vector[2].x = (float)((uint)fVar4 ^ uVar2);
      bVar5 = faceVertices->max_length < 3;
      if (faceVertices->max_length < 4) goto code_?;
      fVar6 = faceVertices->vector[3].z;
code_?:
      fVar4 = faceVertices->vector[3].x;
code_?:
      bVar5 = pVVar1->max_length < 3;
      if (pVVar1->max_length < 4) goto code_?;
      pVVar1->vector[3].x = (float)((uint)fVar4 ^ uVar2);
      pVVar1->vector[3].y = fVar6;
      fVar4 = _UNK_?;
      goto code_?;
    }
    break;
  case Face__Enum_Front:
    if ((pVVar1 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar5 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar5 = 0;
      fVar6 = faceVertices->vector[0].y;
      if (pVVar1->max_length == 0) goto code_?;
      pVVar1->vector[0].x = faceVertices->vector[0].x;
      pVVar1->vector[0].y = fVar6;
      bVar5 = faceVertices->max_length == 0;
      if (faceVertices->max_length < 2) goto code_?;
      bVar5 = pVVar1->max_length == 0;
      fVar6 = faceVertices->vector[1].y;
      if (pVVar1->max_length < 2) goto code_?;
      pVVar1->vector[1].x = faceVertices->vector[1].x;
      pVVar1->vector[1].y = fVar6;
      bVar5 = faceVertices->max_length < 2;
      if (faceVertices->max_length < 3) goto code_?;
      bVar5 = pVVar1->max_length < 2;
      fVar6 = faceVertices->vector[2].y;
      if (pVVar1->max_length < 3) goto code_?;
      pVVar1->vector[2].x = faceVertices->vector[2].x;
      pVVar1->vector[2].y = fVar6;
      bVar5 = faceVertices->max_length < 3;
      if (faceVertices->max_length < 4) goto code_?;
      bVar5 = pVVar1->max_length < 3;
      fVar6 = faceVertices->vector[3].y;
      if (pVVar1->max_length < 4) goto code_?;
      pVVar1->vector[3].x = faceVertices->vector[3].x;
      pVVar1->vector[3].y = fVar6;
      goto code_?;
    }
    break;
  case Face__Enum_Back:
    if ((pVVar1 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar5 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar5 = 0;
      if (pVVar1->max_length == 0) goto code_?;
      fVar4 = (float)((uint)faceVertices->vector[0].x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pVVar1->vector[0].y = faceVertices->vector[0].y;
      pVVar1->vector[0].x = fVar4;
      bVar5 = faceVertices->max_length == 0;
      if (faceVertices->max_length < 2) goto code_?;
      bVar5 = pVVar1->max_length == 0;
      fVar4 = faceVertices->vector[1].x;
      if (pVVar1->max_length < 2) goto code_?;
      pVVar1->vector[1].y = faceVertices->vector[1].y;
      pVVar1->vector[1].x = (float)((uint)fVar4 ^ uVar2);
      bVar5 = faceVertices->max_length < 2;
      if (faceVertices->max_length < 3) goto code_?;
      bVar5 = pVVar1->max_length < 2;
      fVar4 = faceVertices->vector[2].x;
      if (pVVar1->max_length < 3) goto code_?;
      pVVar1->vector[2].y = faceVertices->vector[2].y;
      pVVar1->vector[2].x = (float)((uint)fVar4 ^ uVar2);
      bVar5 = faceVertices->max_length < 3;
      if (faceVertices->max_length < 4) goto code_?;
      fVar6 = faceVertices->vector[3].y;
      goto code_?;
    }
    break;
  case Face__Enum_Left:
    if ((pVVar1 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar5 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar5 = 0;
      if (pVVar1->max_length == 0) goto code_?;
      fVar4 = (float)((uint)faceVertices->vector[0].z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pVVar1->vector[0].y = faceVertices->vector[0].y;
      pVVar1->vector[0].x = fVar4;
      bVar5 = faceVertices->max_length == 0;
      if (faceVertices->max_length < 2) goto code_?;
      bVar5 = pVVar1->max_length == 0;
      fVar4 = faceVertices->vector[1].z;
      if (pVVar1->max_length < 2) goto code_?;
      pVVar1->vector[1].y = faceVertices->vector[1].y;
      pVVar1->vector[1].x = (float)((uint)fVar4 ^ uVar2);
      bVar5 = faceVertices->max_length < 2;
      if (faceVertices->max_length < 3) goto code_?;
      bVar5 = pVVar1->max_length < 2;
      fVar4 = faceVertices->vector[2].z;
      if (pVVar1->max_length < 3) goto code_?;
      pVVar1->vector[2].y = faceVertices->vector[2].y;
      pVVar1->vector[2].x = (float)((uint)fVar4 ^ uVar2);
      bVar5 = faceVertices->max_length < 3;
      if (faceVertices->max_length < 4) goto code_?;
      fVar4 = faceVertices->vector[3].z;
      fVar6 = faceVertices->vector[3].y;
      goto code_?;
    }
    break;
  case Face__Enum_Right:
    if ((pVVar1 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar5 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar5 = 0;
      fVar6 = faceVertices->vector[0].y;
      if (pVVar1->max_length == 0) goto code_?;
      pVVar1->vector[0].x = faceVertices->vector[0].z;
      pVVar1->vector[0].y = fVar6;
      bVar5 = faceVertices->max_length == 0;
      if (faceVertices->max_length < 2) goto code_?;
      bVar5 = pVVar1->max_length == 0;
      fVar6 = faceVertices->vector[1].y;
      if (pVVar1->max_length < 2) goto code_?;
      pVVar1->vector[1].x = faceVertices->vector[1].z;
      pVVar1->vector[1].y = fVar6;
      bVar5 = faceVertices->max_length < 2;
      if (faceVertices->max_length < 3) goto code_?;
      bVar5 = pVVar1->max_length < 2;
      fVar6 = faceVertices->vector[2].y;
      if (pVVar1->max_length < 3) goto code_?;
      pVVar1->vector[2].x = faceVertices->vector[2].z;
      pVVar1->vector[2].y = fVar6;
      bVar5 = faceVertices->max_length < 3;
      if (faceVertices->max_length < 4) goto code_?;
      bVar5 = pVVar1->max_length < 3;
      fVar6 = faceVertices->vector[3].y;
      if (pVVar1->max_length < 4) goto code_?;
      pVVar1->vector[3].x = faceVertices->vector[3].z;
      pVVar1->vector[3].y = fVar6;
      goto code_?;
    }
    break;
  default:
    if (pVVar1 != (Vector2__Array *)0x0) goto code_?;
  }
  bVar5 = 0;
  func_?();
code_?:
  bVar7 = func_?();
  *(char *)(unaff_EDI + 0x78105830) =
       *(char *)(unaff_EDI + 0x78105830) + (char)((uint)unaff_ESI >> 8) + (0x99 < bVar7 | bVar5);
  *(uint *)(unaff_ESI + 0x10) = *(uint *)(unaff_ESI + 0x10) ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  auStack_25._0_4_ = (Object__Class *)0x0;
  auStack_25._4_4_ = (MonitorData *)0x0;
  auStack_25._8_4_ = 0;
  pSStack_26 = (String *)0x0;
  pSStack_27 = (String *)0x0;
  pCStack_28 = (Cube *)0x0;
  pOStack_29 = (Object *)0x0;
  iStack_30 = 0;
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       (&DStack_32,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)cells,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_33 = 0;
    auStack_25._0_4_ = pDVar31->_dictionary;
    auStack_25._4_4_ = pDVar31->_version;
    auStack_25._8_4_ = pDVar31->_index;
    pSStack_26 = (String *)(pDVar31->_current).key._options;
    pSStack_27 = (pDVar31->_current).key._cultureKey;
    pCStack_28 = (Cube *)(pDVar31->_current).key._pattern;
    pOStack_29 = (pDVar31->_current).value;
    iStack_30 = pDVar31->_getEnumeratorRetType;
    uStack_2 = 1;
    pOStack_34 = (Object *)auStack_25;
    while( true ) {
      bVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_25,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      if (bVar35 == 0) {
        uStack_2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)auStack_25,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   ,unaff_EDI);
        fVar36 = (fStack_23 - fStack_14) * _UNK_?;
        fVar37 = (fStack_16 - fStack_10) * _UNK_?;
        fVar38 = (fStack_21 - fStack_12) * _UNK_?;
        (bounds->m_Extents).x = fVar37;
        (bounds->m_Extents).y = fVar38;
        (bounds->m_Extents).z = fVar36;
        (bounds->m_Center).x = fVar37 + fStack_10;
        (bounds->m_Center).y = fVar38 + fStack_12;
        (bounds->m_Center).z = fVar36 + fStack_14;
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      DStack_32._current.key._cultureKey = pSStack_26;
      DStack_32._current.key._pattern = pSStack_27;
      DStack_32._current.value = (Object *)pCStack_28;
      DStack_32._getEnumeratorRetType = (int32_t)pOStack_29;
      if (pCStack_28 == (Cube *)0x0) break;
      if ((pCStack_28->fields).hiddenSides != 0x3f) {
        puVar39 = (undefined8 *)func_?(auStack_40,0);
        pSVar41 = DStack_32._current.key._cultureKey;
        uVar42 = *puVar39;
        fStack_43 = *(float *)(puVar39 + 1);
        uStack_44._0_4_ = (float)uVar42;
        fStack_45 = (float)uStack_44 * _UNK_?;
        uStack_44._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
        fStack_46 = uStack_44._4_4_ * _UNK_?;
        fStack_47 = fStack_43 * _UNK_?;
        iStack_9 = (int16_t)DStack_32._current.key._pattern;
        pSStack_8 = DStack_32._current.key._cultureKey;
        uStack_44 = uVar42;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        pVVar48 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                           (&VStack_49,(IntVector *)&pSStack_8,(MethodInfo *)0x0);
        uStack_50._0_4_ = pVVar48->x;
        uStack_50._4_4_ = pVVar48->y;
        fStack_51 = pVVar48->z;
        fStack_52 = fStack_51 +
                    (float)((uint)fStack_47 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_53 = (float)uStack_50._4_4_ +
                    (float)((uint)fStack_46 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_54 = (float)(undefined4)uStack_50 +
                    (float)((uint)fStack_45 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        iStack_9 = (int16_t)DStack_32._current.key._pattern;
        pSStack_8 = pSVar41;
        pVVar48 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                           (&VStack_55,(IntVector *)&pSStack_8,(MethodInfo *)0x0);
        uStack_56._0_4_ = pVVar48->x;
        uStack_56._4_4_ = pVVar48->y;
        fStack_57 = pVVar48->z;
        fVar37 = (float)(undefined4)uStack_56 + fStack_45;
        fVar36 = (float)uStack_56._4_4_ + fStack_46;
        fStack_45 = fStack_57 + fStack_47;
        if (fStack_54 < fStack_10) {
          fStack_10 = fStack_54;
        }
        if (fStack_53 < fStack_12) {
          fStack_12 = fStack_53;
        }
        if (fStack_52 < fStack_14) {
          fStack_14 = fStack_52;
        }
        if (fStack_16 <= fVar37) {
          uStack_17 = 0;
          uStack_18 = 0;
          uStack_19 = 0;
          fStack_16 = fVar37;
        }
        if (fStack_21 <= fVar36) {
          fStack_21 = fVar36;
        }
        fStack_24 = fStack_23;
        if (fStack_23 <= fStack_45) {
          fStack_24 = fStack_45;
        }
        if (fVar37 < fStack_10) {
          fStack_10 = fVar37;
        }
        if (fVar36 < fStack_12) {
          fStack_12 = fVar36;
        }
        if (fStack_45 < fStack_14) {
          fStack_14 = fStack_45;
        }
        if (fStack_16 <= fStack_54) {
          uStack_17 = 0;
          uStack_18 = 0;
          uStack_19 = 0;
          fStack_16 = fStack_54;
        }
        fStack_22 = fStack_21;
        if (fStack_21 <= fStack_53) {
          fStack_22 = fStack_53;
        }
        fStack_20 = fStack_16;
        fStack_11 = fStack_10;
        fStack_13 = fStack_12;
        fStack_15 = fStack_14;
        fStack_21 = fStack_22;
        fStack_23 = fStack_24;
        if (fStack_24 <= fStack_52) {
          fStack_24 = fStack_52;
          fStack_23 = fStack_52;
        }
      }
    }
  }
  uVar58 = func_?();
  func_?(uVar58);
  pcVar59 = (code *)swi(3);
  (*pcVar59)();
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
    func_?(0x762c);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = 0;
  pSStack_7 = (String *)0x0;
  pCStack_8 = (Cube *)0x0;
  pOStack_9 = (Object *)0x0;
  iStack_10 = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar11 != (MeshDataPool *)0x0) {
    bVar12 = cRam_? == '\0';
    (pMVar11->fields).indicesPos = 0;
    if (bVar12) {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar11 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar11 != (MeshDataPool *)0x0) {
      bVar12 = cRam_? == '\0';
      (pMVar11->fields).colorPos = 0;
      if (bVar12) {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar11 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar11 != (MeshDataPool *)0x0) {
        bVar12 = cRam_? == '\0';
        (pMVar11->fields).uvPos = 0;
        if (bVar12) {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar11 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar11 != (MeshDataPool *)0x0) {
          (pMVar11->fields).vertexPos = 0;
          iStack_13 = 0;
          if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
            pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&stack0xffffff6c,
                                 (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)cells,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                                );
            uStack_15 = 0;
            auStack_6._0_4_ = pDVar14->_dictionary;
            auStack_6._4_4_ = pDVar14->_version;
            auStack_6._8_4_ = pDVar14->_index;
            auStack_6._12_4_ = (pDVar14->_current).key._options;
            pSStack_7 = (pDVar14->_current).key._cultureKey;
            pCStack_8 = (Cube *)(pDVar14->_current).key._pattern;
            pOStack_9 = (pDVar14->_current).value;
            iStack_10 = pDVar14->_getEnumeratorRetType;
            uStack_1 = 1;
            pOStack_16 = (Object *)auStack_6;
            while( true ) {
              do {
                bVar17 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,Cell]::
                        Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                                  ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_
                                    *)auStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                                  );
                cube = pCStack_8;
                if (bVar17 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)auStack_6,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                             ,(MethodInfo *)unaff_EBX);
                  *unaff_FS_OFFSET = uStack_3;
                  return iStack_13 * 2;
                }
                if (pCStack_8 == (Cube *)0x0) goto code_?;
              } while ((pCStack_8->fields).hiddenSides == 0x3f);
              uStack_18 = auStack_6._12_4_;
              uStack_19 = (FaceData *)CONCAT22((int16_t)pSStack_7,(undefined2)uStack_19);
              cube_00 = pCStack_8;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              cubePos.z = uStack_19._2_2_;
              cubePos.x = (undefined2)uStack_18;
              cubePos.y = uStack_18._2_2_;
              pFStack_20 = Cube::Cube_GenerateCubeFaces(cube,cubePos,cells,(MethodInfo *)0x0);
              uStack_18 = 0;
              if (pFStack_20 == (FaceData__Array *)0x0) break;
              for (; (int)uStack_18 < (int)pFStack_20->max_length; uStack_18 = uStack_18 + 1) {
                if (pFStack_20->max_length <= uStack_18) {
                  func_?();
code_?:
                  func_?();
                  goto code_?;
                }
                pFVar21 = pFStack_20->vector[uStack_18];
                uStack_19 = pFVar21;
                if (pFVar21 == (FaceData *)0x0) goto code_?;
                FStack_22 = (pFVar21->fields).face;
                if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MV__WorldObject__CubeBase);
                }
                uVar23 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                  ((CubeBase *)cube_00,FStack_22,(MethodInfo *)0x0);
                FStack_22 = (Face__Enum)uVar23;
                if (0x44 < uVar23) {
                  FStack_22 = 0x18;
                }
                MeshDataPool::MeshDataPool_AddVertexRange
                          ((pFVar21->fields).faceVertices,(MethodInfo *)0x0);
                if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__TextureAtlasData);
                }
                pCVar24 = TextureAtlasData::TextureAtlasData_GetMaterialColorData
                                    ((Color *)&stack0xffffff7c,FStack_22,(MethodInfo *)0x0);
                fVar25 = pCVar24->r;
                fVar26 = pCVar24->g;
                fVar27 = pCVar24->b;
                for (uVar28 = 0; (int)uVar28 < 4; uVar28 = uVar28 + 1) {
                  pSVar29 = (uStack_19->fields).lightValues;
                  if (pSVar29 == (Single__Array *)0x0) goto code_?;
                  if (pSVar29->max_length <= uVar28) goto code_?;
                  color.g = fVar26;
                  color.r = fVar25;
                  color.b = fVar27;
                  color.a = pSVar29->vector[uVar28];
                  MeshDataPool::MeshDataPool_AddColor(color,(MethodInfo *)0x0);
                }
                faceVertices = (uStack_19->fields).faceVertices;
                FStack_22 = (uStack_19->fields).face;
                if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__CubeModelChunk);
                }
                unaff_EBX = CubeModelChunk_GetFaceUvs
                                      (faceVertices,FStack_22,scale,(MethodInfo *)0x0);
                MeshDataPool::MeshDataPool_AddUvRange(unaff_EBX,(MethodInfo *)0x0);
                index = iStack_13 * 4;
                MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
                MeshDataPool::MeshDataPool_AddIndex(index + 3,(MethodInfo *)0x0);
                MeshDataPool::MeshDataPool_AddIndex(index + 2,(MethodInfo *)0x0);
                MeshDataPool::MeshDataPool_AddIndex(index + 2,(MethodInfo *)0x0);
                MeshDataPool::MeshDataPool_AddIndex(index + 1,(MethodInfo *)0x0);
                cube_00 = (Cube *)&UNK_?;
                MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
                iStack_13 = iStack_13 + 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  iVar31 = (*pcVar30)();
  return iVar31;
}


/* Void RemoveFromChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RemoveFromChunk
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x12bc);
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
  func_?(&stack0xffffff80,0,0x30);
  this_00 = (this->fields).instances;
  if (this_00 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
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
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                           *)auStack_7,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                         );
      uStack_8 = 0;
      puVar9 = (undefined *)(pDVar6->_currentValue).guid._a;
      method_00 = *(MethodInfo **)&(pDVar6->_currentValue).guid._b;
      value = *(Material **)&(pDVar6->_currentValue).guid._d;
      uVar10._0_1_ = (pDVar6->_currentValue).guid._h;
      uVar10._1_1_ = (pDVar6->_currentValue).guid._i;
      uVar10._2_1_ = (pDVar6->_currentValue).guid._j;
      uVar10._3_1_ = (pDVar6->_currentValue).guid._k;
      pGVar11 = (pDVar6->_currentValue).gameObject;
      pBVar12 = (pDVar6->_currentValue).collider;
      pMVar13 = (MethodInfo *)(pDVar6->_currentValue).renderer;
      this_01 = (pDVar6->_currentValue).filter;
      uStack_1 = 1;
      pOStack_14 = (Object *)&stack0xffffff80;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Guid,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables_
                            *)&stack0xffffff80,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                          );
        if (bVar15 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffff80,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        auStack_7._12_4_ = puVar9;
        auStack_7._16_4_ = method_00;
        pMStack_16 = value;
        uStack_17 = uVar10;
        pGStack_18 = pGVar11;
        pBStack_19 = pBVar12;
        pMStack_20 = pMVar13;
        pMStack_21 = this_01;
        if (this_01 == (MeshFilter *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (this_01,(this->fields).sharedMeshData.mesh,(MethodInfo *)0x0);
        if (pMStack_20 == (MethodInfo *)0x0) break;
        uVar10._0_1_ = 0;
        uVar10._1_1_ = 0;
        uVar10._2_1_ = 0;
        uVar10._3_1_ = 0;
        value = (this->fields).sharedMeshData.material;
        puVar9 = &UNK_?;
        method_00 = pMStack_20;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pMStack_20,value,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  func_?(&stack0xffffff80,0,0x30);
  this_00 = (this->fields).instances;
  if (this_00 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
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
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                           *)auStack_7,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                         );
      uStack_8 = 0;
      puVar9 = (undefined *)(pDVar6->_currentValue).guid._a;
      method_00 = *(MethodInfo **)&(pDVar6->_currentValue).guid._b;
      uVar10._0_1_ = (pDVar6->_currentValue).guid._d;
      uVar10._1_1_ = (pDVar6->_currentValue).guid._e;
      uVar10._2_1_ = (pDVar6->_currentValue).guid._f;
      uVar10._3_1_ = (pDVar6->_currentValue).guid._g;
      puVar11 = *(undefined **)&(pDVar6->_currentValue).guid._h;
      this_03 = (MethodInfo *)(pDVar6->_currentValue).gameObject;
      pBVar12 = (pDVar6->_currentValue).collider;
      pMVar13 = (MethodInfo *)(pDVar6->_currentValue).renderer;
      this_01 = (pDVar6->_currentValue).filter;
      uStack_1 = 1;
      pOStack_14 = (Object *)&stack0xffffff80;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Guid,ChunkInstances+ChunkInstanceVariables]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables_
                            *)&stack0xffffff80,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                          );
        if (bVar15 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffff80,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        auStack_7._12_4_ = puVar9;
        auStack_7._16_4_ = method_00;
        auStack_7._20_4_ = uVar10;
        puStack_16 = puVar11;
        pMStack_17 = this_03;
        pBStack_18 = pBVar12;
        pMStack_19 = pMVar13;
        pMStack_20 = this_01;
        if (this_01 == (MeshFilter *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                  (this_01,(Mesh *)0x0,(MethodInfo *)0x0);
        this_03 = pMStack_19;
        if (pMStack_19 == (MethodInfo *)0x0) break;
        uVar10._0_1_ = 0;
        uVar10._1_1_ = 0;
        uVar10._2_1_ = 0;
        uVar10._3_1_ = 0;
        puVar9 = &UNK_?;
        method_00 = pMStack_19;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pMStack_19,(Material *)0x0,(MethodInfo *)0x0);
        pMVar13 = (MethodInfo *)0x0;
        pBVar12 = (BoxCollider *)0x0;
        puVar11 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)this_03,0,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  auStack_6._12_2_ = 0;
  auStack_6._14_2_ = 0;
  uStack_7._0_2_ = 0;
  uStack_7._2_2_ = 0;
  pCStack_8 = (Cube *)0x0;
  pOStack_9 = (Object *)0x0;
  iStack_10 = 0;
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffff98,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)cells,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_12 = 0;
    auStack_6._0_4_ = pDVar11->_dictionary;
    auStack_6._4_4_ = pDVar11->_version;
    auStack_6._8_4_ = pDVar11->_index;
    auStack_6._12_4_ = (pDVar11->_current).key._options;
    uStack_7 = (pDVar11->_current).key._cultureKey;
    pCStack_8 = (Cube *)(pDVar11->_current).key._pattern;
    pOStack_9 = (pDVar11->_current).value;
    iStack_10 = pDVar11->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_13 = (Object *)auStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      uVar15 = auStack_6._12_4_;
      if (bVar14 == 0) break;
      iStack_16 = (int16_t)uStack_7;
      pCStack_17 = pCStack_8;
      if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar18 = auStack_6._12_4_;
      pos.z = iStack_16;
      auStack_6._12_2_ = (undefined2)uVar15;
      auStack_6._14_2_ = SUB42(uVar15,2);
      pos.x = auStack_6._12_2_;
      pos.y = auStack_6._14_2_;
      auStack_6._12_4_ = uVar18;
      CubeModelChunk_SetCubeVisibility_3(cells,pos,pCStack_17,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
               ,in_stack_19);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
        uStack11 = 0x1058;
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
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
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
                    func_?();
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
                        value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_layer(pGVar3,(MethodInfo *)0x0);
                        if (this_05 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                                    (this_05,value_01,(MethodInfo *)0x0);
                          uVar6 = 0;
                          pGVar7 = mscorlib.dll::System::Guid::Guid_NewGuid
                                             ((Guid *)&stack0xffffffdc,(MethodInfo *)0x0);
                          uVar8._0_4_ = pGVar7->_a;
                          uVar8._4_2_ = pGVar7->_b;
                          uStack_9 = pGVar7->_c;
                          uVar10._0_1_ = pGVar7->_d;
                          uVar10._1_1_ = pGVar7->_e;
                          uVar10._2_1_ = pGVar7->_f;
                          uVar10._3_1_ = pGVar7->_g;
                          uVar11._0_1_ = pGVar7->_h;
                          uVar11._1_1_ = pGVar7->_i;
                          uVar11._2_1_ = pGVar7->_j;
                          uVar11._3_1_ = pGVar7->_k;
                          func_?(&stack0xffffffc8,this_05);
                          pCVar12 = this_04[2].klass;
                          func_?(&stack0xffffffcc,pCVar12);
                          pMVar13 = this_04[1].monitor;
                          func_?(&stack0xffffffd4,pMVar13);
                          pvVar14 = this_04[1].fields._.m_CachedPtr;
                          func_?(&stack0xffffffd0,pvVar14);
                          uVar15 = uVar8;
                          this_02 = (this->fields).instances;
                          if (this_02 !=
                              (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0
                             ) {
                            key._d = (char)uVar10;
                            key._e = (char)((uint)uVar10 >> 8);
                            key._f = (char)((uint)uVar10 >> 0x10);
                            key._g = (char)((uint)uVar10 >> 0x18);
                            uVar8._4_2_ = (undefined2)((ulonglong)uVar8 >> 0x20);
                            uStack_9 = (undefined2)((ulonglong)uVar15 >> 0x30);
                            key._a = (undefined4)uVar8;
                            key._b = uVar8._4_2_;
                            key._c = uStack_9;
                            key._h = (char)uVar11;
                            key._i = (char)((uint)uVar11 >> 8);
                            key._j = (char)((uint)uVar11 >> 0x10);
                            key._k = (char)((uint)uVar11 >> 0x18);
                            value_00.guid._d = (char)uVar10;
                            value_00.guid._e = (char)((uint)uVar10 >> 8);
                            value_00.guid._f = (char)((uint)uVar10 >> 0x10);
                            value_00.guid._g = (char)((uint)uVar10 >> 0x18);
                            uVar8._0_4_ = (undefined4)uVar15;
                            uVar8._4_2_ = (undefined2)((ulonglong)uVar15 >> 0x20);
                            uStack_9 = (undefined2)((ulonglong)uVar15 >> 0x30);
                            value_00.guid._a = (undefined4)uVar8;
                            value_00.guid._b = uVar8._4_2_;
                            value_00.guid._c = uStack_9;
                            value_00.guid._h = (char)uVar11;
                            value_00.guid._i = (char)((uint)uVar11 >> 8);
                            value_00.guid._j = (char)((uint)uVar11 >> 0x10);
                            value_00.guid._k = (char)((uint)uVar11 >> 0x18);
                            value_00.gameObject = this_05;
                            value_00.collider = (BoxCollider *)pCVar12;
                            value_00.renderer = pvVar14;
                            value_00.filter = (MeshFilter *)pMVar13;
                            value_00._32_4_ = uVar6;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Guid,ChunkInstances+ChunkInstanceVariables]::
                            Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Add
                                      (this_02,key,value_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Add_System__Guid__ChunkInstances__ChunkInstanceVariables_
                                      );
                            civ.guid._d = (char)uVar10;
                            civ.guid._e = (char)((uint)uVar10 >> 8);
                            civ.guid._f = (char)((uint)uVar10 >> 0x10);
                            civ.guid._g = (char)((uint)uVar10 >> 0x18);
                            uVar8._0_4_ = (undefined4)uVar15;
                            uVar8._4_2_ = (undefined2)((ulonglong)uVar15 >> 0x20);
                            uStack_9 = (undefined2)((ulonglong)uVar15 >> 0x30);
                            civ.guid._a = (undefined4)uVar8;
                            civ.guid._b = uVar8._4_2_;
                            civ.guid._c = uStack_9;
                            civ.guid._h = (char)uVar11;
                            civ.guid._i = (char)((uint)uVar11 >> 8);
                            civ.guid._j = (char)((uint)uVar11 >> 0x10);
                            civ.guid._k = (char)((uint)uVar11 >> 0x18);
                            civ.gameObject = this_05;
                            civ.collider = (BoxCollider *)pCVar12;
                            civ.renderer = (MeshRenderer *)0x0;
                            civ.filter = (MeshFilter *)pMVar13;
                            civ._32_4_ = uVar6;
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
        if (*cube != (Cube *)0x0) {
          puVar4 = &((*cube)->fields).hiddenSides;
          *puVar4 = *puVar4 | bVar3;
          if (*neighborCube != (Cube *)0x0) {
            puVar4 = &((*neighborCube)->fields).hiddenSides;
            *puVar4 = *puVar4 | (byte)faceFlagOpposite;
            return;
          }
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
  func_?(&DStack_8,0,0x44);
  func_?(&KStack_9,0,0x34);
  CStack_10.transparent = 0;
  CStack_10._33_3_ = 0;
  auStack_11 = (undefined1  [4])0x0;
  pSStack_12 = (String *)0x0;
  pMStack_13 = (MeshRenderer *)0x0;
  pTStack_14 = (Type *)0x0;
  CStack_10.guid._a = 0;
  CStack_10.guid._b = 0;
  CStack_10.guid._c = 0;
  CStack_10.guid._d = 0;
  CStack_10.guid._e = 0;
  CStack_10.guid._f = 0;
  CStack_10.guid._g = 0;
  CStack_10.guid._h = 0;
  CStack_10.guid._i = 0;
  CStack_10.guid._j = 0;
  CStack_10.guid._k = 0;
  CStack_10.gameObject = (GameObject *)0x0;
  CStack_10.collider = (BoxCollider *)0x0;
  CStack_10.renderer = (MeshRenderer *)0x0;
  CStack_10.filter = (MeshFilter *)0x0;
  this_01 = (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Guid>);
  pLStack_15 = this_01;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::Guid>__List__);
  pDVar16 = (this->fields).instances;
  pLStack_17 = this_01;
  if (pDVar16 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Guid,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables_
                          *)&stack0xfffffea4,pDVar16,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                        );
    uStack_19 = uStack_19 & 0xffffffff;
    DStack_8._dictionary = pDVar18->_dictionary;
    DStack_8._version = pDVar18->_version;
    DStack_8._index = pDVar18->_index;
    DStack_8._current.key._a = (pDVar18->_current).key._a;
    DStack_8._current.key._b = (pDVar18->_current).key._b;
    DStack_8._current.key._c = (pDVar18->_current).key._c;
    DStack_8._current.key._d = (pDVar18->_current).key._d;
    DStack_8._current.key._e = (pDVar18->_current).key._e;
    DStack_8._current.key._f = (pDVar18->_current).key._f;
    DStack_8._current.key._g = (pDVar18->_current).key._g;
    DStack_8._current.key._h = (pDVar18->_current).key._h;
    DStack_8._current.key._i = (pDVar18->_current).key._i;
    DStack_8._current.key._j = (pDVar18->_current).key._j;
    DStack_8._current.key._k = (pDVar18->_current).key._k;
    DStack_8._current.value.guid._a = (pDVar18->_current).value.guid._a;
    DStack_8._current.value.guid._b = (pDVar18->_current).value.guid._b;
    DStack_8._current.value.guid._c = (pDVar18->_current).value.guid._c;
    DStack_8._current.value.guid._d = (pDVar18->_current).value.guid._d;
    DStack_8._current.value.guid._e = (pDVar18->_current).value.guid._e;
    DStack_8._current.value.guid._f = (pDVar18->_current).value.guid._f;
    DStack_8._current.value.guid._g = (pDVar18->_current).value.guid._g;
    DStack_8._current.value.guid._h = (pDVar18->_current).value.guid._h;
    DStack_8._current.value.guid._i = (pDVar18->_current).value.guid._i;
    DStack_8._current.value.guid._j = (pDVar18->_current).value.guid._j;
    DStack_8._current.value.guid._k = (pDVar18->_current).value.guid._k;
    DStack_8._current.value.gameObject = (pDVar18->_current).value.gameObject;
    DStack_8._current.value.collider = (pDVar18->_current).value.collider;
    DStack_8._current.value.renderer = (pDVar18->_current).value.renderer;
    DStack_8._current.value.filter = (pDVar18->_current).value.filter;
    DStack_8._current.value.transparent = (pDVar18->_current).value.transparent;
    DStack_8._current.value._33_3_ = *(undefined3 *)&(pDVar18->_current).value.field_0x21;
    DStack_8._getEnumeratorRetType = pDVar18->_getEnumeratorRetType;
    uStack_2 = 1;
    pDStack_20 = &DStack_8;
    while (bVar21 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::
                    Guid,ChunkInstances+ChunkInstanceVariables]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables__MoveNext
                              (&DStack_8,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                              ), bVar21 != 0) {
      KStack_9.value.transparent = DStack_8._current.value.transparent;
      KStack_9.value._33_3_ = DStack_8._current.value._33_3_;
      KStack_9.key._a = DStack_8._current.key._a;
      KStack_9.key._b = DStack_8._current.key._b;
      KStack_9.key._c = DStack_8._current.key._c;
      KStack_9.key._d = DStack_8._current.key._d;
      KStack_9.key._e = DStack_8._current.key._e;
      KStack_9.key._f = DStack_8._current.key._f;
      KStack_9.key._g = DStack_8._current.key._g;
      KStack_9.key._h = DStack_8._current.key._h;
      KStack_9.key._i = DStack_8._current.key._i;
      KStack_9.key._j = DStack_8._current.key._j;
      KStack_9.key._k = DStack_8._current.key._k;
      KStack_9.value.guid._a = DStack_8._current.value.guid._a;
      KStack_9.value.guid._b = DStack_8._current.value.guid._b;
      KStack_9.value.guid._c = DStack_8._current.value.guid._c;
      KStack_9.value.guid._d = DStack_8._current.value.guid._d;
      KStack_9.value.guid._e = DStack_8._current.value.guid._e;
      KStack_9.value.guid._f = DStack_8._current.value.guid._f;
      KStack_9.value.guid._g = DStack_8._current.value.guid._g;
      KStack_9.value.guid._h = DStack_8._current.value.guid._h;
      KStack_9.value.guid._i = DStack_8._current.value.guid._i;
      KStack_9.value.guid._j = DStack_8._current.value.guid._j;
      KStack_9.value.guid._k = DStack_8._current.value.guid._k;
      KStack_9.value.gameObject = DStack_8._current.value.gameObject;
      KStack_9.value.collider = DStack_8._current.value.collider;
      KStack_9.value.renderer = DStack_8._current.value.renderer;
      KStack_9.value.filter = DStack_8._current.value.filter;
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
      Guid,ChunkInstances+ChunkInstanceVariables]::
      KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Deconstruct
                (&KStack_9,(Guid *)auStack_11,&CStack_10,
                 MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                );
      this_00 = CStack_10.renderer;
      pSStack_22 = (String *)auStack_11;
      pSStack_23 = pSStack_12;
      pMStack_24 = pMStack_13;
      pTStack_25 = pTStack_14;
      pSStack_26 = (String *)CStack_10.gameObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pSStack_26,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar21 == 0) {
        if (pLStack_15 == (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)0x0)
        goto code_?;
        func_?(pLStack_15);
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
              ((Object *)&DStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Dispose__
               ,method_00);
    uStack_2 = 0xffffffff;
    if (pLStack_15 != (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)0x0) {
      iVar32 = (pLStack_15->fields)._size;
      while (iVar32 = iVar32 + -1, -1 < iVar32) {
        pDVar16 = (this->fields).instances;
        pGVar33 = (Guid *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements
                          ::VisualTreeAsset+AssetEntry]::
                          List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                                    (&VStack_34,pLStack_15,iVar32,
                                     MethodInfo__System__Collections__Generic__List<System::Guid>__get_Item_int_
                                    );
        if (pDVar16 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Remove
                  (pDVar16,*pGVar33,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Remove_System__Guid_
                  );
      }
      pDVar16 = (this->fields).instances;
      this = (CubeModelChunk *)0x0;
      while (pDVar16 != (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
        iVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                           ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)pDVar16,
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
        KStack_9.key._a = (pKVar35->key)._a;
        KStack_9.key._b = (pKVar35->key)._b;
        KStack_9.key._c = (pKVar35->key)._c;
        KStack_9.key._d = (pKVar35->key)._d;
        KStack_9.key._e = (pKVar35->key)._e;
        KStack_9.key._f = (pKVar35->key)._f;
        KStack_9.key._g = (pKVar35->key)._g;
        KStack_9.key._h = (pKVar35->key)._h;
        KStack_9.key._i = (pKVar35->key)._i;
        KStack_9.key._j = (pKVar35->key)._j;
        KStack_9.key._k = (pKVar35->key)._k;
        KStack_9.value.guid._a = (pKVar35->value).guid._a;
        KStack_9.value.guid._b = (pKVar35->value).guid._b;
        KStack_9.value.guid._c = (pKVar35->value).guid._c;
        KStack_9.value.guid._d = (pKVar35->value).guid._d;
        KStack_9.value.guid._e = (pKVar35->value).guid._e;
        KStack_9.value.guid._f = (pKVar35->value).guid._f;
        KStack_9.value.guid._g = (pKVar35->value).guid._g;
        KStack_9.value.guid._h = (pKVar35->value).guid._h;
        KStack_9.value.guid._i = (pKVar35->value).guid._i;
        KStack_9.value.guid._j = (pKVar35->value).guid._j;
        KStack_9.value.guid._k = (pKVar35->value).guid._k;
        KStack_9.value.gameObject = (pKVar35->value).gameObject;
        KStack_9.value.collider = (pKVar35->value).collider;
        KStack_9.value.renderer = (pKVar35->value).renderer;
        KStack_9.value.filter = (pKVar35->value).filter;
        KStack_9.value.transparent = (pKVar35->value).transparent;
        KStack_9.value._33_3_ = *(undefined3 *)&(pKVar35->value).field_0x21;
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        KeyValuePair_2_System_Guid_ChunkInstances_ChunkInstanceVariables__Deconstruct
                  (&KStack_9,(Guid *)auStack_11,&CStack_10,
                   MethodInfo__System__Collections__Generic__KeyValuePair<System::Guid,_ChunkInstances::ChunkInstanceVariables>__Deconstruct_System__Guid___ChunkInstances__ChunkInstanceVariables__
                  );
        uVar36 = CStack_10._32_4_;
        uVar37 = CStack_10.guid._12_4_;
        uVar38 = CStack_10.guid._8_4_;
        uVar39 = CStack_10.guid._4_4_;
        iVar32 = CStack_10.guid._a;
        pDStack_20 = (Dictionary_2_TKey_TValue_Enumerator_System_Guid_ChunkInstances_ChunkInstanceVariables_
                      *)(pCVar1->fields).meshBounds.m_Extents.z;
        VStack_34.path = (String *)auStack_11;
        VStack_34.typeFullName = pSStack_12;
        VStack_34.asset = (Object_1 *)pMStack_13;
        VStack_34.m_CachedType = pTStack_14;
        pSStack_22 = (String *)CStack_10.gameObject;
        pSStack_23 = (String *)CStack_10.collider;
        pMStack_24 = CStack_10.renderer;
        pTStack_25 = (Type *)CStack_10.filter;
        uStack_19._0_4_ = (pCVar1->fields).meshBounds.m_Extents.x;
        uStack_19._4_4_ = (pCVar1->fields).meshBounds.m_Extents.y;
        fStack_40 = (float)(undefined4)uStack_19 * _UNK_?;
        fStack_41 = (float)uStack_19._4_4_ * _UNK_?;
        fStack_42 = (float)pDStack_20 * _UNK_?;
        if (((String *)CStack_10.collider == (String *)0x0) ||
           (value.y = fStack_41, value.x = fStack_40, value.z = fStack_42,
           UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                     (CStack_10.collider,value,(MethodInfo *)0x0), pSStack_23 == (String *)0x0))
        break;
        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                  ((BoxCollider *)pSStack_23,(pCVar1->fields).meshBounds.m_Center,(MethodInfo *)0x0)
        ;
        uVar43 = CStack_10._32_4_;
        uVar44 = CStack_10.guid._12_4_;
        uVar45 = CStack_10.guid._8_4_;
        uVar46 = CStack_10.guid._4_4_;
        pDVar16 = (pCVar1->fields).instances;
        if (pDVar16 == (Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
        key._4_4_ = VStack_34.typeFullName;
        key._a = (int32_t)VStack_34.path;
        key._8_4_ = VStack_34.asset;
        key._12_4_ = VStack_34.m_CachedType;
        CStack_10.guid._b = (int16_t)uVar39;
        CStack_10.guid._c = SUB42(uVar39,2);
        value_00.guid._b = CStack_10.guid._b;
        value_00.guid._c = CStack_10.guid._c;
        value_00.guid._a = iVar32;
        CStack_10.guid._d = (uint8_t)uVar38;
        CStack_10.guid._e = SUB41(uVar38,1);
        CStack_10.guid._f = SUB41(uVar38,2);
        CStack_10.guid._g = SUB41(uVar38,3);
        value_00.guid._d = CStack_10.guid._d;
        value_00.guid._e = CStack_10.guid._e;
        value_00.guid._f = CStack_10.guid._f;
        value_00.guid._g = CStack_10.guid._g;
        CStack_10.guid._h = (uint8_t)uVar37;
        CStack_10.guid._i = SUB41(uVar37,1);
        CStack_10.guid._j = SUB41(uVar37,2);
        CStack_10.guid._k = SUB41(uVar37,3);
        value_00.guid._h = CStack_10.guid._h;
        value_00.guid._i = CStack_10.guid._i;
        value_00.guid._j = CStack_10.guid._j;
        value_00.guid._k = CStack_10.guid._k;
        value_00.gameObject = (GameObject *)pSStack_22;
        value_00.collider = (BoxCollider *)pSStack_23;
        value_00.renderer = pMStack_24;
        value_00.filter = (MeshFilter *)pTStack_25;
        CStack_10.transparent = (bool)uVar36;
        CStack_10._33_3_ = SUB43(uVar36,1);
        value_00.transparent = CStack_10.transparent;
        value_00._33_3_ = CStack_10._33_3_;
        CStack_10.guid._4_4_ = uVar46;
        CStack_10.guid._8_4_ = uVar45;
        CStack_10.guid._12_4_ = uVar44;
        CStack_10._32_4_ = uVar43;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Guid,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_System_Guid_ChunkInstances_ChunkInstanceVariables__set_Item
                  (pDVar16,key,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Guid,_ChunkInstances::ChunkInstanceVariables>__set_Item_System__Guid__ChunkInstances__ChunkInstanceVariables_
                  );
        this = (CubeModelChunk *)((int)&this->klass + 1);
        pDVar16 = (pCVar1->fields).instances;
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
  (this->fields).instances = this_00;
  func_?(&(this->fields).instances,this_00);
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
  (this->fields).cells = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)this_01;
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
    pSVar1 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector,(MethodInfo *)0x0);
    if (1 < values->max_length) {
      values->vector[1] = pSVar1;
      func_?();
      if (2 < values->max_length) {
        values->vector[2] = ::StringLiteral__;
        func_?();
        pSVar1 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector.y,(MethodInfo *)0x0);
        if (3 < values->max_length) {
          values->vector[3] = pSVar1;
          func_?();
          if (4 < values->max_length) {
            values->vector[4] = ::StringLiteral__;
            func_?();
            pSVar1 = mscorlib.dll::System::Int16::Int16_ToString
                               ((Int16 *)&iVector.z,(MethodInfo *)0x0);
            if (5 < values->max_length) {
              values->vector[5] = pSVar1;
              func_?();
              pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              (this->fields).name = pSVar1;
              func_?();
              (this->fields).chunkPos.x = iVector.x;
              (this->fields).chunkPos.y = iVector.y;
              (this->fields).chunkPos.z = iVector.z;
              this_02 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(this_02,(MethodInfo *)0x0);
              uVar2 = ZEXT48(this_02);
              func_?(&stack0xfffffff4,this_02);
              uVar2 = uVar2 & 0xffffffff;
              func_?(&stack0xfffffff8,0);
              (this->fields).sharedMeshData.mesh = (Mesh *)uVar2;
              (this->fields).sharedMeshData.material = (Material *)(uVar2 >> 0x20);
              func_?(&(this->fields).sharedMeshData,0);
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

