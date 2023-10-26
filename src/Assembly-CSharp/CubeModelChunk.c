
/* Void AddToChunk(IntVector, Cube, Boolean) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_AddToChunk
               (CubeModelChunk *this,IntVector iVector,Cube *cube,bool setVisibility,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x7444);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    iVar1 = iVector.z;
    key = iVector;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 == 0) {
      piVar3 = &(this->fields).cubeCount;
      *piVar3 = *piVar3 + 1;
    }
    this_01 = (this->fields).cells;
    iVector._0_4_ = (Cube *)0x0;
    iVector.z._0_1_ = 0;
    stack0x0000000d = 0;
    Cell::Cell__ctor((Cell *)&iVector,cube,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      iVector._0_4_ =
           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
      ;
      CVar4 = _iVector;
      value.lightValue = (uint8_t)iVector.z;
      value._5_3_ = stack0x0000000d;
      value.cube = (Cube *)
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
      ;
      _iVector = CVar4;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__set_Item
                (this_01,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__set_Item_MV__WorldObject__IntVector__Cell_
                );
      if (setVisibility != 0) {
        iStack5 = iVar1;
        CubeModelChunk_SetCubeVisibilityWithNeighbors(this,key,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  faceFlagCube._0_1_ = 0xf4;
  face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                   (faceFlagOpposite,(MethodInfo *)0x0);
  if (*neighborCube == (Cube *)0x0) goto code_?;
  cube = (Cube **)&UNK_?;
  unaff_EBX = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                        ((CubeBase *)*neighborCube,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  neighborCube = (Cube **)&UNK_?;
  pVVar4 = Cube::Cube_GetFace_1(unaff_EBX,face,(MethodInfo *)0x0);
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
    pVVar1 = (Vector3__Array *)0x0;
    pVVar5 = (Vector3__Array *)pVVar2->vector;
    do {
      unaff_EBX = pVVar2;
      if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
      uVar6 = pVVar1 < (Vector3__Array *)pVVar2->max_length;
      if (!(bool)uVar6) goto code_?;
      if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
      uVar6 = 3U - (int)pVVar1 < pVVar4->max_length;
      if (!(bool)uVar6) goto code_?;
      if ((float)pVVar5->klass != *(float *)((int)pVVar4 + (3U - (int)pVVar1) * 0xc + 0x10)) {
        return;
      }
      pVStack7 = pVVar1;
      iVar8 = func_?();
      pVVar9 = *(Vector3__Array **)(iVar8 + 8);
      iVar8 = func_?();
      if ((float)pVVar9 != *(float *)(iVar8 + 8)) {
        return;
      }
      pVVar1 = (Vector3__Array *)((int)&pVVar1->klass + Face__Enum_Bottom);
      pVVar5 = (Vector3__Array *)&pVVar5->max_length;
    } while ((int)pVVar1 < 4);
    goto code_?;
  case (Vector3__Array *)0x2:
  case (Vector3__Array *)0x3:
    pVVar1 = pVVar2;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    pVStack7 = (Vector3__Array *)0x0;
    pfVar10 = (float *)func_?();
    pVVar5 = (Vector3__Array *)*pfVar10;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    pVStack7 = (Vector3__Array *)0x1;
    pfVar10 = (float *)func_?();
    if ((float)pVVar5 != *pfVar10) {
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
    bVar12 = (float)pVVar1 == *pfVar10;
    break;
  case (Vector3__Array *)0x4:
  case (Vector3__Array *)0x5:
    pVVar1 = pVVar2;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    pVStack7 = (Vector3__Array *)0x0;
    iVar8 = func_?();
    pVVar5 = *(Vector3__Array **)(iVar8 + 8);
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    pVStack7 = (Vector3__Array *)0x1;
    iVar8 = func_?();
    if ((float)pVVar5 != *(float *)(iVar8 + 8)) {
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
    bVar12 = (float)pVVar1 == *(float *)(iVar8 + 8);
    break;
  default:
    goto code_?;
  }
  neighborCube = (Cube **)0x2;
  cube = (Cube **)0x3;
  faceFlagOpposite = FaceFlags__Enum_Bottom|FaceFlags__Enum_Top;
  faceFlagCube._0_1_ = FaceFlags__Enum_Bottom;
  if (bVar11 != bVar12) {
    iVar8 = func_?();
    pVVar4 = *(Vector3__Array **)(iVar8 + 4);
    iVar8 = func_?();
    pVVar1 = pVVar2;
    if ((float)pVVar4 == *(float *)(iVar8 + 4)) {
code_?:
      if (*cube != (Cube *)0x0) {
        puVar13 = &((*cube)->fields).hiddenSides;
        *puVar13 = *puVar13 | (undefined1)faceFlagCube;
        if (*neighborCube != (Cube *)0x0) {
          puVar13 = &((*neighborCube)->fields).hiddenSides;
          *puVar13 = *puVar13 | (byte)faceFlagOpposite;
          return;
        }
      }
code_?:
      uVar6 = 0;
      func_?();
      pVVar2 = unaff_EBX;
code_?:
      func_?();
      uVar14 = (undefined3)((uint)extraout_EDX >> 8);
      bVar15 = (byte)((uint)extraout_EDX >> 8);
      pVStack7 = pVVar1;
      if (!(bool)uVar6) {
        pbVar16 = (byte *)(extraout_EDX + 9);
        bVar17 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar15;
        *(char *)&pVVar2->klass = *(char *)&pVVar2->klass + extraout_CL + CARRY1(bVar17,bVar15);
        pcVar18 = (char *)(CONCAT31(uVar14,(byte)extraout_EDX | *(byte *)&pVVar1->vector[0].x) +
                         -0x4defa9f5);
        *pcVar18 = *pcVar18 + bVar15;
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      *(char *)&pVVar2->klass = *(char *)&pVVar2->klass + extraout_CL + '\x01';
      pcVar18 = (char *)(CONCAT31(uVar14,0xb) + -0x33efa9f5);
      *pcVar18 = *pcVar18 + bVar15;
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
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
  pbVar8 = (byte *)(uVar3 + 0xd);
  bVar9 = *pbVar8;
  bVar10 = (byte)((uint)extraout_ECX >> 8);
  *pbVar8 = *pbVar8 + bVar10;
  bVar11 = (byte)((uint)pVVar4 >> 8);
  (&stack0x0d8c1052)[extraout_ECX] =
       (&stack0x0d8c1052)[extraout_ECX] + (unaff_DI | 0x56) +
       (CARRY1(faceIndices._1_1_,bVar11) || CARRY1(faceIndices._1_1_ + bVar11,CARRY1(bVar9,bVar10)));
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* CubeModelChunk CloneGeometry(Vector3) */

CubeModelChunk *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_CloneGeometry
          (CubeModelChunk *this,Vector3 scale,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(0x7310);
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
  iStack_7._0_2_ = (this->fields).chunkPos.x;
  iStack_7._2_2_ = (this->fields).chunkPos.y;
  iStack_8 = (this->fields).chunkPos.z;
  pSStack_9 = (String *)0x0;
  pCStack_10 = (Cube *)0x0;
  pOStack_11 = (Object *)0x0;
  iStack_12 = 0;
  uStack_13._0_4_ = (Cube *)0x0;
  uStack_13._4_1_ = 0;
  uStack_13._5_3_ = 0;
  pCVar14 = (CubeModelChunk *)func_?(TypeInfo__CubeModelChunk);
  pCStack_15 = pCVar14;
  if (pCVar14 != (CubeModelChunk *)0x0) {
    iVector.z = iStack_8;
    iVector.x = (undefined2)iStack_7;
    iVector.y = iStack_7._2_2_;
    CubeModelChunk__ctor(pCVar14,iVector,(MethodInfo *)0x0);
    pDVar16 = (this->fields).cells;
    pCStack_17 = pCVar14;
    if (pDVar16 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
      pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffff88,
                          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)pDVar16,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                         );
      uStack_19 = 0;
      auStack_6._0_4_ = pDVar18->_dictionary;
      auStack_6._4_4_ = pDVar18->_version;
      auStack_6._8_4_ = pDVar18->_index;
      auStack_6._12_4_ = (pDVar18->_current).key._options;
      pSStack_9 = (pDVar18->_current).key._cultureKey;
      pCStack_10 = (Cube *)(pDVar18->_current).key._pattern;
      pOStack_11 = (pDVar18->_current).value;
      iStack_12 = pDVar18->_getEnumeratorRetType;
      uStack_1 = 1;
      pOStack_20 = (Object *)auStack_6;
      while( true ) {
        bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,Cell]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                           auStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                          );
        if (bVar21 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                     ,in_stack_22);
          uStack_1 = 0xffffffff;
          (pCVar14->fields).cubeCount = (this->fields).cubeCount;
          CubeModelChunk_RebuildChunk(pCVar14,scale,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pCVar14;
        }
        pDVar16 = (pCVar14->fields).cells;
        iStack_7 = auStack_6._12_4_;
        iStack_8 = (int16_t)pSStack_9;
        uStack_13._4_4_ = pOStack_11;
        uStack_13._0_4_ = pCStack_10;
        value = Cell::Cell_Clone((Cell *)&uStack_13,(MethodInfo *)0x0);
        if (pDVar16 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) break;
        in_stack_22 = value._4_4_;
        key.z = iStack_8;
        key.x = (undefined2)iStack_7;
        key.y = iStack_7._2_2_;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
        Dictionary_2_MV_WorldObject_IntVector_Cell__Add
                  (pDVar16,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Add_MV__WorldObject__IntVector__Cell_
                  );
        pCVar14 = pCStack_15;
      }
    }
  }
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  pCVar14 = (CubeModelChunk *)(*pcVar23)();
  return pCVar14;
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
    func_?(0x73c0);
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
    iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                      );
    if ((chunk != (CubeModelChunk *)0x0) &&
       (pDVar6 = (chunk->fields).cells, pDVar6 != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0
       )) {
      iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                         ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.promotionImage = (Image *)0x0;
  LStack_6._current.promotionActionType = 0;
  LStack_6._current.promotionText = (String *)0x0;
  LStack_6._current.validOnKogamaPortal = 0;
  LStack_6._current.validOnAnonymousExternalPortal = 0;
  LStack_6._current._10_2_ = 0;
  this_00 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)(this->fields).instances;
  if (this_00 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
             PromotionLooksData+LooksData]::
             List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__GetEnumerator
                       ((List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)
                        &stack0xffffffa8,this_00,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    uStack_8 = 0;
    LStack_6._list = pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current.promotionImage = (pLVar7->_current).promotionImage;
    LStack_6._current.promotionText = (pLVar7->_current).promotionText;
    LStack_6._current.validOnKogamaPortal = (pLVar7->_current).validOnKogamaPortal;
    LStack_6._current.validOnAnonymousExternalPortal =
         (pLVar7->_current).validOnAnonymousExternalPortal;
    LStack_6._current._10_2_ = *(undefined2 *)&(pLVar7->_current).field_0xa;
    LStack_6._current.promotionActionType = (pLVar7->_current).promotionActionType;
    uStack_1 = 1;
    pLStack_9 = &LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[AdIntegration::
              InHouse::PromotionLooksData+LooksData]::
              List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__MoveNext__
                        );
      obj_00 = LStack_6._current.promotionImage;
      if (bVar10 == 0) break;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj_00,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
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
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar2 = (pVVar1->oneVector).x;
      uVar3 = (pVVar1->oneVector).y;
      scale.y = (float)uVar3 * _UNK_?;
      scale.x = (float)uVar2 * _UNK_?;
      scale.z = (pVVar1->oneVector).z * _UNK_?;
      CubeModelChunk_RebuildChunk(this,scale,(MethodInfo *)0x0);
      CubeModelChunk_RestoreSharedMeshOnInstances(this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Loading_mesh,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((0 < oldReferenceCount) && (newReferenceCount == 0)) {
    CubeModelChunk_RevokeSharedMeshOnInstances(this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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


/* Vector2[] GetFaceUvs(Vector3[], Face, Vector3) */

Vector2__Array *
Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetFaceUvs
          (Vector3__Array *faceVertices,Face__Enum face,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_algorithm_does_not_support_non_u);
    cRam_? = '\x01';
  }
  if ((scale.x != scale.y) || (scale.x != scale.z)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_algorithm_does_not_support_non_u,(MethodInfo *)0x0);
  }
  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CubeModelChunk);
  }
  pCVar1 = TypeInfo__CubeModelChunk->static_fields;
  fVar2 = (pCVar1->uvOffsetVector0).y;
  (pCVar1->uvOffsetVector).x = (pCVar1->uvOffsetVector0).x;
  (pCVar1->uvOffsetVector).y = fVar2;
  switch(face) {
  case Face__Enum_Top:
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar4 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar4 = 0;
      fVar2 = faceVertices->vector[0].z;
      if (pVVar3->max_length == 0) goto code_?;
      pVVar3->vector[0].x = faceVertices->vector[0].x;
      pVVar3->vector[0].y = fVar2;
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = faceVertices->max_length == 0;
        if (faceVertices->max_length < 2) goto code_?;
        bVar4 = pVVar3->max_length == 0;
        fVar2 = faceVertices->vector[1].z;
        if (pVVar3->max_length < 2) goto code_?;
        pVVar3->vector[1].x = faceVertices->vector[1].x;
        pVVar3->vector[1].y = fVar2;
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = faceVertices->max_length < 2;
          if (faceVertices->max_length < 3) goto code_?;
          bVar4 = pVVar3->max_length < 2;
          fVar2 = faceVertices->vector[2].z;
          if (pVVar3->max_length < 3) goto code_?;
          pVVar3->vector[2].x = faceVertices->vector[2].x;
          pVVar3->vector[2].y = fVar2;
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = faceVertices->max_length < 3;
            if (faceVertices->max_length < 4) goto code_?;
            fVar2 = faceVertices->vector[3].x;
            fVar5 = faceVertices->vector[3].z;
code_?:
            bVar4 = pVVar3->max_length < 3;
            if (pVVar3->max_length < 4) goto code_?;
            pVVar3->vector[3].y = fVar5;
            pVVar3->vector[3].x = fVar2;
            goto code_?;
          }
        }
      }
    }
    break;
  case Face__Enum_Bottom:
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    uVar6 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar4 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar4 = 0;
      if (pVVar3->max_length == 0) goto code_?;
      fVar2 = (float)((uint)faceVertices->vector[0].x ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar3->vector[0].y = faceVertices->vector[0].z;
      pVVar3->vector[0].x = fVar2;
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = faceVertices->max_length == 0;
        if (faceVertices->max_length < 2) goto code_?;
        bVar4 = pVVar3->max_length == 0;
        fVar2 = faceVertices->vector[1].x;
        if (pVVar3->max_length < 2) goto code_?;
        pVVar3->vector[1].y = faceVertices->vector[1].z;
        pVVar3->vector[1].x = (float)((uint)fVar2 ^ uVar6);
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = faceVertices->max_length < 2;
          if (faceVertices->max_length < 3) goto code_?;
          bVar4 = pVVar3->max_length < 2;
          fVar2 = faceVertices->vector[2].x;
          if (pVVar3->max_length < 3) goto code_?;
          pVVar3->vector[2].y = faceVertices->vector[2].z;
          pVVar3->vector[2].x = (float)((uint)fVar2 ^ uVar6);
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = faceVertices->max_length < 3;
            if (faceVertices->max_length < 4) goto code_?;
            fVar2 = faceVertices->vector[3].x;
            fVar5 = faceVertices->vector[3].z;
code_?:
            bVar4 = pVVar3->max_length < 3;
            if (pVVar3->max_length < 4) goto code_?;
            pVVar3->vector[3].x = (float)((uint)fVar2 ^ uVar6);
code_?:
            pVVar3->vector[3].y = fVar5;
            pCVar1 = TypeInfo__CubeModelChunk->static_fields;
            fVar2 = (pCVar1->uvOffsetVector1).y;
            (pCVar1->uvOffsetVector).x = (pCVar1->uvOffsetVector1).x;
            (pCVar1->uvOffsetVector).y = fVar2;
            goto code_?;
          }
        }
      }
    }
    break;
  case Face__Enum_Front:
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar4 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar4 = 0;
      fVar2 = faceVertices->vector[0].y;
      if (pVVar3->max_length == 0) goto code_?;
      pVVar3->vector[0].x = faceVertices->vector[0].x;
      pVVar3->vector[0].y = fVar2;
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = faceVertices->max_length == 0;
        if (faceVertices->max_length < 2) goto code_?;
        bVar4 = pVVar3->max_length == 0;
        fVar2 = faceVertices->vector[1].y;
        if (pVVar3->max_length < 2) goto code_?;
        pVVar3->vector[1].x = faceVertices->vector[1].x;
        pVVar3->vector[1].y = fVar2;
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = faceVertices->max_length < 2;
          if (faceVertices->max_length < 3) goto code_?;
          bVar4 = pVVar3->max_length < 2;
          fVar2 = faceVertices->vector[2].y;
          if (pVVar3->max_length < 3) goto code_?;
          pVVar3->vector[2].x = faceVertices->vector[2].x;
          pVVar3->vector[2].y = fVar2;
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = faceVertices->max_length < 3;
            if (faceVertices->max_length < 4) goto code_?;
            fVar2 = faceVertices->vector[3].x;
code_?:
            fVar5 = faceVertices->vector[3].y;
            goto code_?;
          }
        }
      }
    }
    break;
  case Face__Enum_Back:
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    uVar6 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar4 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar4 = 0;
      if (pVVar3->max_length == 0) goto code_?;
      fVar2 = (float)((uint)faceVertices->vector[0].x ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar3->vector[0].y = faceVertices->vector[0].y;
      pVVar3->vector[0].x = fVar2;
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = faceVertices->max_length == 0;
        if (faceVertices->max_length < 2) goto code_?;
        bVar4 = pVVar3->max_length == 0;
        fVar2 = faceVertices->vector[1].x;
        if (pVVar3->max_length < 2) goto code_?;
        pVVar3->vector[1].y = faceVertices->vector[1].y;
        pVVar3->vector[1].x = (float)((uint)fVar2 ^ uVar6);
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = faceVertices->max_length < 2;
          if (faceVertices->max_length < 3) goto code_?;
          bVar4 = pVVar3->max_length < 2;
          fVar2 = faceVertices->vector[2].x;
          if (pVVar3->max_length < 3) goto code_?;
          pVVar3->vector[2].y = faceVertices->vector[2].y;
          pVVar3->vector[2].x = (float)((uint)fVar2 ^ uVar6);
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = faceVertices->max_length < 3;
            if (faceVertices->max_length < 4) goto code_?;
            bVar4 = pVVar3->max_length < 3;
            fVar5 = faceVertices->vector[3].y;
            if (pVVar3->max_length < 4) goto code_?;
            pVVar3->vector[3].x = (float)((uint)faceVertices->vector[3].x ^ uVar6);
            goto code_?;
          }
        }
      }
    }
    break;
  case Face__Enum_Left:
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    uVar6 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar4 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar4 = 0;
      if (pVVar3->max_length == 0) goto code_?;
      fVar2 = (float)((uint)faceVertices->vector[0].z ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar3->vector[0].y = faceVertices->vector[0].y;
      pVVar3->vector[0].x = fVar2;
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = faceVertices->max_length == 0;
        if (faceVertices->max_length < 2) goto code_?;
        bVar4 = pVVar3->max_length == 0;
        fVar2 = faceVertices->vector[1].z;
        if (pVVar3->max_length < 2) goto code_?;
        pVVar3->vector[1].y = faceVertices->vector[1].y;
        pVVar3->vector[1].x = (float)((uint)fVar2 ^ uVar6);
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = faceVertices->max_length < 2;
          if (faceVertices->max_length < 3) goto code_?;
          bVar4 = pVVar3->max_length < 2;
          fVar2 = faceVertices->vector[2].z;
          if (pVVar3->max_length < 3) goto code_?;
          pVVar3->vector[2].y = faceVertices->vector[2].y;
          pVVar3->vector[2].x = (float)((uint)fVar2 ^ uVar6);
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = faceVertices->max_length < 3;
            if (faceVertices->max_length < 4) goto code_?;
            fVar2 = faceVertices->vector[3].z;
            fVar5 = faceVertices->vector[3].y;
            goto code_?;
          }
        }
      }
    }
    break;
  case Face__Enum_Right:
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
    if ((pVVar3 != (Vector2__Array *)0x0) && (faceVertices != (Vector3__Array *)0x0)) {
      bVar4 = 0;
      if (faceVertices->max_length == 0) goto code_?;
      bVar4 = 0;
      fVar2 = faceVertices->vector[0].y;
      if (pVVar3->max_length == 0) goto code_?;
      pVVar3->vector[0].x = faceVertices->vector[0].z;
      pVVar3->vector[0].y = fVar2;
      pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = faceVertices->max_length == 0;
        if (faceVertices->max_length < 2) goto code_?;
        bVar4 = pVVar3->max_length == 0;
        fVar2 = faceVertices->vector[1].y;
        if (pVVar3->max_length < 2) goto code_?;
        pVVar3->vector[1].x = faceVertices->vector[1].z;
        pVVar3->vector[1].y = fVar2;
        pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = faceVertices->max_length < 2;
          if (faceVertices->max_length < 3) goto code_?;
          bVar4 = pVVar3->max_length < 2;
          fVar2 = faceVertices->vector[2].y;
          if (pVVar3->max_length < 3) goto code_?;
          pVVar3->vector[2].x = faceVertices->vector[2].z;
          pVVar3->vector[2].y = fVar2;
          pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = faceVertices->max_length < 3;
            if (faceVertices->max_length < 4) goto code_?;
            fVar2 = faceVertices->vector[3].z;
            goto code_?;
          }
        }
      }
    }
    break;
  default:
code_?:
    fVar2 = _UNK_? / scale.x;
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    pCVar1 = TypeInfo__CubeModelChunk->static_fields;
    pVVar3 = pCVar1->uvs;
    if (pVVar3 != (Vector2__Array *)0x0) {
      bVar4 = 0;
      if (pVVar3->max_length == 0) goto code_?;
      fVar5 = (pCVar1->uvOffsetVector).y;
      pVVar3->vector[0].x = pVVar3->vector[0].x + (pCVar1->uvOffsetVector).x;
      pVVar3->vector[0].y = pVVar3->vector[0].y + fVar5;
      pCVar1 = TypeInfo__CubeModelChunk->static_fields;
      pVVar3 = pCVar1->uvs;
      if (pVVar3 != (Vector2__Array *)0x0) {
        bVar4 = pVVar3->max_length == 0;
        if (pVVar3->max_length < 2) goto code_?;
        fVar5 = pVVar3->vector[1].y;
        fVar7 = (pCVar1->uvOffsetVector).y;
        pVVar3->vector[1].x = pVVar3->vector[1].x + (pCVar1->uvOffsetVector).x;
        pVVar3->vector[1].y = fVar5 + fVar7;
        pCVar1 = TypeInfo__CubeModelChunk->static_fields;
        pVVar3 = pCVar1->uvs;
        if (pVVar3 != (Vector2__Array *)0x0) {
          bVar4 = pVVar3->max_length < 2;
          if (pVVar3->max_length < 3) goto code_?;
          fVar5 = pVVar3->vector[2].y;
          fVar7 = (pCVar1->uvOffsetVector).y;
          pVVar3->vector[2].x = pVVar3->vector[2].x + (pCVar1->uvOffsetVector).x;
          pVVar3->vector[2].y = fVar5 + fVar7;
          pCVar1 = TypeInfo__CubeModelChunk->static_fields;
          pVVar3 = pCVar1->uvs;
          if (pVVar3 != (Vector2__Array *)0x0) {
            bVar4 = pVVar3->max_length < 3;
            if (pVVar3->max_length < 4) goto code_?;
            fVar5 = pVVar3->vector[3].y;
            fVar7 = (pCVar1->uvOffsetVector).y;
            pVVar3->vector[3].x = pVVar3->vector[3].x + (pCVar1->uvOffsetVector).x;
            pVVar3->vector[3].y = fVar5 + fVar7;
            pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
            if (pVVar3 != (Vector2__Array *)0x0) {
              bVar4 = 0;
              if (pVVar3->max_length == 0) goto code_?;
              pVVar3->vector[0].x = pVVar3->vector[0].x / fVar2;
              pVVar3->vector[0].y = pVVar3->vector[0].y / fVar2;
              pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
              if (pVVar3 != (Vector2__Array *)0x0) {
                bVar4 = pVVar3->max_length == 0;
                if (pVVar3->max_length < 2) goto code_?;
                fVar5 = pVVar3->vector[1].y;
                pVVar3->vector[1].x = pVVar3->vector[1].x / fVar2;
                pVVar3->vector[1].y = fVar5 / fVar2;
                pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
                if (pVVar3 != (Vector2__Array *)0x0) {
                  bVar4 = pVVar3->max_length < 2;
                  if (pVVar3->max_length < 3) goto code_?;
                  fVar5 = pVVar3->vector[2].y;
                  pVVar3->vector[2].x = pVVar3->vector[2].x / fVar2;
                  pVVar3->vector[2].y = fVar5 / fVar2;
                  pVVar3 = TypeInfo__CubeModelChunk->static_fields->uvs;
                  if (pVVar3 != (Vector2__Array *)0x0) {
                    bVar4 = pVVar3->max_length < 3;
                    if (3 < pVVar3->max_length) {
                      fVar5 = pVVar3->vector[3].y;
                      pVVar3->vector[3].x = pVVar3->vector[3].x / fVar2;
                      pVVar3->vector[3].y = fVar5 / fVar2;
                      return TypeInfo__CubeModelChunk->static_fields->uvs;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = 0;
  func_?();
code_?:
  uVar8 = func_?();
  uRam_? = (undefined4)uVar8;
  *unaff_EDI = (char)uVar8;
  faceVertices->vector[0].x =
       (float)(((int)faceVertices->vector[0].x - (int)((ulonglong)uVar8 >> 0x20)) - (uint)bVar4);
  pcVar9 = (code *)swi(3);
  pVVar3 = (Vector2__Array *)(*pcVar9)(faceVertices);
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
  if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
      method[1].return_type !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)method[1].return_type,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Count__
                      );
    if (iVar1 < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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


/* Void GetMeshBounds(Bounds ByRef, Dictionary`2[MV.WorldObject.IntVector,Cell], Vector3) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_GetMeshBounds
               (Bounds *bounds,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,Vector3 scale,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff00;
  puVar5 = &stack0xffffff00;
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
  pSStack_7 = (String *)0x0;
  pSStack_8 = (String *)0x0;
  pSStack_9 = (String *)0x0;
  pCStack_10 = (Cube *)0x0;
  pOStack_11 = (Object *)0x0;
  iStack_12 = 0;
  iStack_13 = 0;
  fStack_14 = _UNK_?;
  fStack_15 = _UNK_?;
  fStack_16 = _UNK_?;
  fStack_17 = _UNK_?;
  fStack_18 = _UNK_?;
  fStack_18 = _UNK_?;
  fStack_19 = _UNK_?;
  fStack_20 = _UNK_?;
  fStack_21 = _UNK_?;
  fStack_22 = _UNK_?;
  fStack_22 = _UNK_?;
  fStack_23 = _UNK_?;
  fStack_24 = _UNK_?;
  fStack_25 = _UNK_?;
  if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
    pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       (&DStack_27,
                        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)cells,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                       );
    uStack_28 = 0;
    auStack_6._0_4_ = pDVar26->_dictionary;
    auStack_6._4_4_ = pDVar26->_version;
    auStack_6._8_4_ = pDVar26->_index;
    pSStack_7 = (String *)(pDVar26->_current).key._options;
    pSStack_9 = (pDVar26->_current).key._cultureKey;
    pCStack_10 = (Cube *)(pDVar26->_current).key._pattern;
    pOStack_11 = (pDVar26->_current).value;
    iStack_12 = pDVar26->_getEnumeratorRetType;
    uStack_1 = 1;
    pOStack_29 = (Object *)auStack_6;
    while( true ) {
      bVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,Cell]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                        );
      if (bVar30 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        min.y = fStack_19;
        min.x = fStack_18;
        min.z = fStack_16;
        max.y = fStack_23;
        max.x = fStack_22;
        max.z = fStack_25;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                  (bounds,min,max,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      DStack_27._current.key._cultureKey = pSStack_7;
      DStack_27._current.key._pattern = pSStack_9;
      DStack_27._current.value = (Object *)pCStack_10;
      DStack_27._getEnumeratorRetType = (int32_t)pOStack_11;
      if (pCStack_10 == (Cube *)0x0) break;
      if ((pCStack_10->fields).hiddenSides != 0x3f) {
        puVar31 = (undefined8 *)func_?(auStack_32,0);
        pSVar33 = DStack_27._current.key._cultureKey;
        uVar34 = *puVar31;
        fStack_35 = *(float *)(puVar31 + 1);
        uStack_36._0_4_ = (float)uVar34;
        fVar37 = (float)uStack_36 * _UNK_?;
        uStack_36._4_4_ = (float)((ulonglong)uVar34 >> 0x20);
        fStack_38 = uStack_36._4_4_ * _UNK_?;
        fStack_39 = fStack_35 * _UNK_?;
        iStack_13 = (int16_t)DStack_27._current.key._pattern;
        pSStack_8 = DStack_27._current.key._cultureKey;
        uStack_36 = uVar34;
        pVVar40 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                           (&VStack_41,(IntVector *)&pSStack_8,(MethodInfo *)0x0);
        uStack_42._0_4_ = pVVar40->x;
        uStack_42._4_4_ = pVVar40->y;
        fStack_43 = pVVar40->z;
        fStack_44 = fStack_43 +
                    (float)((uint)fStack_39 ^
                           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
        ;
        fStack_45 = (float)uStack_42._4_4_ +
                    (float)((uint)fStack_38 ^
                           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
        ;
        fStack_46 = (float)(undefined4)uStack_42 +
                    (float)((uint)fVar37 ^
                           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
        ;
        iStack_13 = (int16_t)DStack_27._current.key._pattern;
        pSStack_8 = pSVar33;
        pVVar40 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                           (&VStack_47,(IntVector *)&pSStack_8,(MethodInfo *)0x0);
        uStack_48._0_4_ = pVVar40->x;
        uStack_48._4_4_ = pVVar40->y;
        fStack_49 = pVVar40->z;
        fVar37 = (float)(undefined4)uStack_48 + fVar37;
        fVar50 = (float)uStack_48._4_4_ + fStack_38;
        fVar51 = fStack_49 + fStack_39;
        if (fStack_46 < fStack_14) {
          fStack_14 = fStack_46;
        }
        if (fStack_45 < fStack_17) {
          fStack_17 = fStack_45;
        }
        if (fStack_44 < fStack_15) {
          fStack_15 = fStack_44;
        }
        if (fStack_20 <= fVar37) {
          fStack_20 = fVar37;
        }
        if (fStack_21 <= fVar50) {
          fStack_21 = fVar50;
        }
        fStack_25 = fStack_24;
        if (fStack_24 <= fVar51) {
          fStack_25 = fVar51;
        }
        if (fVar37 < fStack_14) {
          fStack_14 = fVar37;
        }
        if (fVar50 < fStack_17) {
          fStack_17 = fVar50;
        }
        fStack_16 = fStack_15;
        if (fVar51 < fStack_15) {
          fStack_16 = fVar51;
        }
        if (fStack_20 <= fStack_46) {
          fStack_20 = fStack_46;
        }
        if (fStack_21 <= fStack_45) {
          fStack_21 = fStack_45;
        }
        fStack_24 = fStack_25;
        fStack_15 = fStack_16;
        fStack_22 = fStack_20;
        fStack_23 = fStack_21;
        fStack_18 = fStack_14;
        fStack_19 = fStack_17;
        if (fStack_25 <= fStack_44) {
          fStack_25 = fStack_44;
          fStack_24 = fStack_44;
        }
      }
    }
  }
  func_?();
  pcVar52 = (code *)swi(3);
  (*pcVar52)();
  return;
}


/* Void RebuildChunk(Vector3) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildChunk
               (CubeModelChunk *this,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__MeshData);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MeshData);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    cells = (this->fields).cells;
    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CubeModelChunk);
    }
    iVar1 = CubeModelChunk_RebuildMesh(cells,scale,(MethodInfo *)0x0);
    (this->fields).triangleCount = iVar1;
    MeshData::MeshData_SetToMesh
              ((MeshData *)value,&(this->fields).sharedMeshData.mesh,
               &(this->fields).sharedMeshData.material,(MethodInfo *)0x0);
    CubeModelChunk_GetMeshBounds
              (&(this->fields).meshBounds,(this->fields).cells,scale,(MethodInfo *)0x0);
    CubeModelChunk_UpdateInstances(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 RebuildMesh(Dictionary`2[MV.WorldObject.IntVector,Cell], Vector3) */

int32_t Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RebuildMesh
                  (Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,Vector3 scale,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff40;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff40;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_Cell>__get_Value__
                   );
    func_?(&TypeInfo__TextureAtlas);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  iStack_8 = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar9 != (MeshDataPool *)0x0) {
    bVar10 = cRam_? == '\0';
    (pMVar9->fields).indicesPos = 0;
    if (bVar10) {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar9 != (MeshDataPool *)0x0) {
      bVar10 = cRam_? == '\0';
      (pMVar9->fields).colorPos = 0;
      if (bVar10) {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar9 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar9 != (MeshDataPool *)0x0) {
        bVar10 = cRam_? == '\0';
        (pMVar9->fields).uvPos = 0;
        if (bVar10) {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar9 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar9 != (MeshDataPool *)0x0) {
          (pMVar9->fields).vertexPos = 0;
          iStack_11 = 0;
          if (cells != (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) {
            pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                     RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)&stack0xffffff70,
                                (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)cells,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__GetEnumerator__
                               );
            puStack_13 = &stack0xffffff50;
            uStack_14 = 0;
            faceData = (CubeModelChunk__Class *)(pDVar12->_current).key._options;
            index = (CubeModelChunk__Class *)(pDVar12->_current).key._cultureKey;
            pSVar15 = (pDVar12->_current).key._pattern;
            iVar16 = (int16_t)pSVar15;
            uVar17 = (undefined2)((uint)pSVar15 >> 0x10);
            uStack_2 = 1;
            while( true ) {
              this = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                     &stack0xffffff50;
              pSVar15 = (String *)&UNK_?;
              pCVar18 = (CubeModelChunk__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
              ;
              bVar19 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,Cell]::
                      Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell__MoveNext
                                (this,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__MoveNext__
                                );
              if (bVar19 == 0) {
                uStack_2 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)&stack0xffffff50,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_Cell>__Dispose__
                           ,(MethodInfo *)in_stack_20);
                *unaff_FS_OFFSET = uStack_4;
                return iStack_11 * 2;
              }
              cube = (Cube *)CONCAT22(uVar17,iVar16);
              if (cube == (Cube *)0x0) break;
              in_stack_20 = index;
              if ((cube->fields).hiddenSides != 0x3f) {
                iStack_8 = 0;
                if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
                  faceData = TypeInfo__CubeModelChunk;
                  func_?();
                  in_stack_20 = index;
                }
                index = faceData;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar16 = (int16_t)in_stack_20;
                faceData = (CubeModelChunk__Class *)TypeInfo__CubeModelChunk->static_fields;
                iVector.z = iVar16;
                iVector._0_4_ = index;
                Cube::Cube_GetVisibleFaceVertices
                          (cube,(CubeModelChunk_FaceData__Array **)faceData,iVector,cells,&iStack_8
                           ,(MethodInfo *)0x0);
                for (uVar21 = 0; (int)uVar21 < iStack_8; uVar21 = uVar21 + 1) {
                  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
                    this = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_Cell_ *)
                           &UNK_?;
                    pCVar18 = TypeInfo__CubeModelChunk;
                    func_?();
                  }
                  pCVar22 = TypeInfo__CubeModelChunk->static_fields->faceData;
                  if (pCVar22 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                  if (pCVar22->max_length <= uVar21) {
                    func_?();
code_?:
                    func_?();
code_?:
                    func_?();
code_?:
                    func_?();
code_?:
                    func_?();
                    goto code_?;
                  }
                  if (pCVar22->vector[uVar21] == (CubeModelChunk_FaceData *)0x0)
                  goto code_?;
                  FStack_23 = (pCVar22->vector[uVar21]->fields).face;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MV__WorldObject__CubeBase);
                  }
                  uVar24 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                    ((CubeBase *)cube,FStack_23,(MethodInfo *)0x0);
                  uStack_25 = (uint)uVar24;
                  if (0x44 < uStack_25) {
                    uStack_25 = 0x18;
                  }
                  for (FStack_23 = 0; (int)FStack_23 < 4; FStack_23 = FStack_23 + 1) {
                    if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__TextureAtlas);
                    }
                    VStack_26 = TextureAtlas::TextureAtlas_GetAtlasPoint
                                          (uStack_25,(MethodInfo *)0x0);
                    if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pCVar22 = TypeInfo__CubeModelChunk->static_fields->faceData;
                    if (pCVar22 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                    if (pCVar22->max_length <= uVar21) goto code_?;
                    if ((pCVar22->vector[uVar21] == (CubeModelChunk_FaceData *)0x0) ||
                       ((pCVar22->vector[uVar21]->fields).colors == (Color__Array *)0x0))
                    goto code_?;
                    iVar27 = func_?(FStack_23);
                    *(float *)(iVar27 + 4) = VStack_26.x;
                    pCVar22 = TypeInfo__CubeModelChunk->static_fields->faceData;
                    if (pCVar22 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                    if (pCVar22->max_length <= uVar21) goto code_?;
                    if ((pCVar22->vector[uVar21] == (CubeModelChunk_FaceData *)0x0) ||
                       ((pCVar22->vector[uVar21]->fields).colors == (Color__Array *)0x0))
                    goto code_?;
                    iVar27 = func_?(FStack_23);
                    *(float *)(iVar27 + 8) = VStack_26.y;
                    pCVar22 = TypeInfo__CubeModelChunk->static_fields->faceData;
                    if (pCVar22 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                    if (pCVar22->max_length <= uVar21) goto code_?;
                    if ((pCVar22->vector[uVar21] == (CubeModelChunk_FaceData *)0x0) ||
                       ((pCVar22->vector[uVar21]->fields).faceVertices == (Vector3__Array *)0x0))
                    goto code_?;
                    func_?(&uStack_28,FStack_23);
                    vertex.z = fStack_29;
                    vertex.x = (float)(undefined4)uStack_28;
                    vertex.y = (float)uStack_28._4_4_;
                    MeshDataPool::MeshDataPool_AddVertex(vertex,(MethodInfo *)0x0);
                    pCVar22 = TypeInfo__CubeModelChunk->static_fields->faceData;
                    if (pCVar22 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                    if (pCVar22->max_length <= uVar21) goto code_?;
                    if ((pCVar22->vector[uVar21] == (CubeModelChunk_FaceData *)0x0) ||
                       ((pCVar22->vector[uVar21]->fields).colors == (Color__Array *)0x0))
                    goto code_?;
                    func_?(&stack0xffffff80,FStack_23);
                    color.g = (float)pSVar15;
                    color.r = (float)in_stack_30;
                    color.b = (float)this;
                    color.a = (float)pCVar18;
                    MeshDataPool::MeshDataPool_AddColor(color,(MethodInfo *)0x0);
                  }
                  if ((TypeInfo__CubeModelChunk->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__CubeModelChunk);
                  }
                  pCVar22 = TypeInfo__CubeModelChunk->static_fields->faceData;
                  if (pCVar22 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                  if (pCVar22->max_length <= uVar21) goto code_?;
                  if (pCVar22->vector[uVar21] == (CubeModelChunk_FaceData *)0x0)
                  goto code_?;
                  pCVar31 = TypeInfo__CubeModelChunk->static_fields->faceData;
                  if (pCVar31 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
                  if (pCVar31->max_length <= uVar21) goto code_?;
                  if (pCVar31->vector[uVar21] == (CubeModelChunk_FaceData *)0x0)
                  goto code_?;
                  uvRange = CubeModelChunk_GetFaceUvs
                                      ((pCVar22->vector[uVar21]->fields).faceVertices,
                                       (pCVar31->vector[uVar21]->fields).face,scale,(MethodInfo *)0x0
                                      );
                  MeshDataPool::MeshDataPool_AddUvRange(uvRange,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(iStack_11 * 4,(MethodInfo *)0x0);
                  index = (CubeModelChunk__Class *)(iStack_11 * 4 + 3);
                  faceData = (CubeModelChunk__Class *)&UNK_?;
                  MeshDataPool::MeshDataPool_AddIndex((int32_t)index,(MethodInfo *)0x0);
                  iVar16 = 0x2e1a;
                  uVar17 = 0x1056;
                  MeshDataPool::MeshDataPool_AddIndex(iStack_11 * 4 + 2,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(iStack_11 * 4 + 2,(MethodInfo *)0x0);
                  MeshDataPool::MeshDataPool_AddIndex(iStack_11 * 4 + 1,(MethodInfo *)0x0);
                  in_stack_30 = (String *)(iStack_11 * 4);
                  pSVar15 = (String *)0x0;
                  MeshDataPool::MeshDataPool_AddIndex((int32_t)in_stack_30,(MethodInfo *)0x0);
                  iStack_11 = iStack_11 + 1;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  iVar33 = (*pcVar32)();
  return iVar33;
}


/* Void RemoveFromChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk_RemoveFromChunk
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x7394);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            (this->fields).cells;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this_00,iVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields).cells;
      if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,Cell]::
      Dictionary_2_MV_WorldObject_IntVector_Cell__Remove
                (this_01,iVector,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Remove_MV__WorldObject__IntVector_
                );
      uStack2 = 0;
      CubeModelChunk_SetCubeVisibilityWithNeighbors(this,iVector,(MethodInfo *)0x0);
      piVar3 = &(this->fields).cubeCount;
      *piVar3 = *piVar3 + -1;
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  auStack_4._40_4_ = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = (undefined1 *)auStack_4._40_4_;
  }
  auStack_4._40_4_ = puVar5;
  this_00 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)(this->fields).instances;
  auStack_6._16_4_ = (String *)0x0;
  auStack_6[0x14] = 0;
  auStack_6[0x15] = 0;
  auStack_6._22_2_ = 0;
  pMStack_7 = (MeshFilter *)0x0;
  auStack_6._0_4_ = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0;
  auStack_6._4_4_ = 0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = (Image *)0x0;
  if (this_00 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
    method_00 = (MethodInfo *)auStack_4;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
             PromotionLooksData+LooksData]::
             List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__GetEnumerator
                       ((List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)
                        method_00,this_00,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    auStack_4._28_4_ = (Il2CppRGCTXData *)0x0;
    auStack_6._0_4_ = pLVar8->_list;
    auStack_6._4_4_ = pLVar8->_index;
    auStack_6._8_4_ = pLVar8->_version;
    auStack_6._12_4_ = (pLVar8->_current).promotionImage;
    auStack_6._16_4_ = (pLVar8->_current).promotionText;
    auStack_6[0x14] = (pLVar8->_current).validOnKogamaPortal;
    auStack_6[0x15] = (pLVar8->_current).validOnAnonymousExternalPortal;
    auStack_6._22_2_ = *(undefined2 *)&(pLVar8->_current).field_0xa;
    pMStack_7 = (MeshFilter *)(pLVar8->_current).promotionActionType;
    uStack_1 = 1;
    auStack_4._32_4_ = (Il2CppGenericMethod *)auStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[AdIntegration::
              InHouse::PromotionLooksData+LooksData]::
              List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData__MoveNext
                        ((List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      auStack_4._12_4_ = auStack_6._12_4_;
      auStack_4._16_4_ = auStack_6._16_4_;
      auStack_4._20_4_ = auStack_6._20_4_;
      auStack_4._24_4_ = pMStack_7;
      if (pMStack_7 == (MeshFilter *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (pMStack_7,(this->fields).sharedMeshData.mesh,(MethodInfo *)0x0);
      if ((MethodInfo *)auStack_4._20_4_ == (MethodInfo *)0x0) break;
      method_00 = (MethodInfo *)auStack_4._20_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)auStack_4._20_4_,(this->fields).sharedMeshData.material,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  auStack_4._40_4_ = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = (undefined1 *)auStack_4._40_4_;
  }
  auStack_4._40_4_ = puVar5;
  auStack_6._0_4_ = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0;
  auStack_6._4_4_ = 0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = (Image *)0x0;
  pMStack_7 = (MeshFilter *)0x0;
  auStack_6._16_4_ = (String *)0x0;
  auStack_6[0x14] = 0;
  auStack_6[0x15] = 0;
  auStack_6._22_2_ = 0;
  this_00 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)(this->fields).instances;
  if (this_00 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
    method_00 = (MethodInfo *)auStack_4;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
             PromotionLooksData+LooksData]::
             List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__GetEnumerator
                       ((List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)
                        method_00,this_00,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    auStack_4._28_4_ = (Il2CppRGCTXData *)0x0;
    auStack_6._0_4_ = pLVar8->_list;
    auStack_6._4_4_ = pLVar8->_index;
    auStack_6._8_4_ = pLVar8->_version;
    auStack_6._12_4_ = (pLVar8->_current).promotionImage;
    auStack_6._16_4_ = (pLVar8->_current).promotionText;
    auStack_6[0x14] = (pLVar8->_current).validOnKogamaPortal;
    auStack_6[0x15] = (pLVar8->_current).validOnAnonymousExternalPortal;
    auStack_6._22_2_ = *(undefined2 *)&(pLVar8->_current).field_0xa;
    pMStack_7 = (MeshFilter *)(pLVar8->_current).promotionActionType;
    uStack_1 = 1;
    auStack_4._32_4_ = (Il2CppGenericMethod *)auStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[AdIntegration::
              InHouse::PromotionLooksData+LooksData]::
              List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData__MoveNext
                        ((List_1_T_Enumerator_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChunkInstances::ChunkInstanceVariables>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      auStack_4._12_4_ = auStack_6._12_4_;
      auStack_4._16_4_ = auStack_6._16_4_;
      auStack_4._20_4_ = auStack_6._20_4_;
      auStack_4._24_4_ = pMStack_7;
      if (pMStack_7 == (MeshFilter *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (pMStack_7,(Mesh *)0x0,(MethodInfo *)0x0);
      this_01 = auStack_4._20_4_;
      if ((MethodInfo *)auStack_4._20_4_ == (MethodInfo *)0x0) break;
      method_00 = (MethodInfo *)auStack_4._20_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)auStack_4._20_4_,(Material *)0x0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)this_01,0,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    cRam_? = '\x01';
  }
  uStack_1._0_1_ = 0;
  uStack_1._1_3_ = 0;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                        *)cells,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 != 0) {
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
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                          *)cells,key,
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
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                          *)cells,key_01,
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
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                          *)cells,key_03,
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
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                          *)cells,key_05,
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
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                          *)cells,key_07,
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
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                          *)cells,key_09,
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
        uStack11 = 0x1056;
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
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__Add_ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&
                    CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    original = (pPVar1->fields).cubeModelChunkPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_01 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         CubeModelChunkPrefab_MethodInfo__UnityEngine__Object__Instantiate<CubeModelChunkPrefab>_CubeModelChunkPrefab_
                        );
    if (this_01 != (Component *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_01,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar2,(this->fields).name,(MethodInfo *)0x0);
        if (this_01[1].klass != (Component__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    ((MeshFilter *)this_01[1].klass,(this->fields).sharedMeshData.mesh,
                     (MethodInfo *)0x0);
          if ((Renderer *)this_01[1].monitor != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      ((Renderer *)this_01[1].monitor,(this->fields).sharedMeshData.material,
                       (MethodInfo *)0x0);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (this_01,(MethodInfo *)0x0);
            if ((cubeInstance != (MVCubeModelBase *)0x0) && (pTVar3 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar3,(cubeInstance->fields)._.transform,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar3 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           (MethodInfo *)0x0);
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_01,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->
                                     identityQuaternion,(MethodInfo *)0x0);
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(this_01,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar3 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                               (MethodInfo *)0x0);
                    pBVar4 = this_01[1].fields._.m_CachedPtr;
                    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                                        ((Vector3 *)&stack0xffffffec,&(this->fields).meshBounds,
                                         (MethodInfo *)0x0);
                    if (pBVar4 != (BoxCollider *)0x0) {
                      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                                (pBVar4,*pVVar5,(MethodInfo *)0x0);
                      pBVar4 = this_01[1].fields._.m_CachedPtr;
                      pRVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                                Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                          ((Regex_CachedCodeEntryKey *)&stack0xffffffec,
                                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                            *)&(this->fields).meshBounds,(MethodInfo *)0x0);
                      if (pBVar4 != (BoxCollider *)0x0) {
                        in_stack_7 = 0;
                        UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::
                        BoxCollider_set_center(pBVar4,(Vector3)*pRVar6,(MethodInfo *)0x0);
                        in_stack_7 = 0;
                        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject(this_01,(MethodInfo *)0x0);
                        pGVar2 = (cubeInstance->fields)._.gameObject;
                        if (pGVar2 != (GameObject *)0x0) {
                          value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_layer(pGVar2,(MethodInfo *)0x0);
                          if (this_02 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_set_layer(this_02,value,(MethodInfo *)0x0);
                            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject(this_01,(MethodInfo *)0x0);
                            func_?();
                            pBVar4 = this_01[1].fields._.m_CachedPtr;
                            func_?();
                            pCVar8 = this_01[1].klass;
                            func_?();
                            pMVar9 = (MeshRenderer *)this_01[1].monitor;
                            func_?();
                            pMVar10 = 
                            MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__Add_ChunkInstances__ChunkInstanceVariables_
                            ;
                            pLVar11 = (this->fields).instances;
                            if (pLVar11 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
                              piVar12 = &(pLVar11->fields)._version;
                              *piVar12 = *piVar12 + 1;
                              pCVar13 = (pLVar11->fields)._items;
                              if (pCVar13 != (ChunkInstances_ChunkInstanceVariables__Array *)0x0) {
                                uVar14 = (pLVar11->fields)._size;
                                if (uVar14 < pCVar13->max_length) {
                                  (pLVar11->fields)._size = uVar14 + 1;
                                  if (pCVar13->max_length <= uVar14) goto code_?;
                                  pCVar15 = pCVar13->vector + uVar14;
                                  pCVar15->gameObject = pGVar2;
                                  pCVar15->collider = pBVar4;
                                  pCVar15->renderer = pMVar9;
                                  pCVar15->filter = (MeshFilter *)pCVar8;
                                  func_?(pCVar13->vector + uVar14,0);
                                }
                                else {
                                  (*(pMVar10->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                                            ((short)pLVar11,pGVar2,pBVar4,pMVar9,pCVar8,
                                             pMVar10->klass->rgctx_data[0xb].rgctxDataDummy);
                                }
                                this_00 = (cubeInstance->fields).chunkInstances;
                                if (this_00 != (ChunkInstances *)0x0) {
                                  intVector.z = 0;
                                  intVector._0_4_ = this_01;
                                  gameObject.collider = pBVar4;
                                  gameObject.gameObject = pGVar2;
                                  gameObject.renderer = pMVar9;
                                  gameObject.filter = (MeshFilter *)pCVar8;
                                  ChunkInstances::ChunkInstances_Add
                                            (this_00,intVector,gameObject,(MethodInfo *)0x0);
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
      }
    }
  }
  func_?();
code_?:
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
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__RemoveAt_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__set_Item_int__ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    this_04 = this_00;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    iVar1 = 0;
    pLVar2 = (this->fields).instances;
    while (pLVar2 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      if ((pLVar2->fields)._size <= iVar1) {
        iVar1 = (this_00->fields)._size + -1;
        if (-1 < iVar1) goto code_?;
        goto code_?;
      }
      pLVar3 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)
               (this->fields).instances;
      if (pLVar3 == (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) break;
      pPVar4 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
               PromotionLooksData+LooksData]::
               List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__get_Item
                         ((PromotionLooksData_LooksData *)&pIStack_5,pLVar3,iVar1,
                          MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                         );
      x = pPVar4->promotionImage;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        func_?(this_00,iVar1,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                       );
      }
      else {
        pLVar2 = (this->fields).instances;
        if (pLVar2 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) break;
        iVar7 = func_?(&stack0xffffffe8,pLVar2,iVar1,
                                 MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                                );
        if (*(Renderer **)(iVar7 + 8) == (Renderer *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  (*(Renderer **)(iVar7 + 8),(this->fields).sharedMeshData.material,
                   (MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClientManager *)0x0) break;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (this_01,(this->fields).meshBounds,(MethodInfo *)0x0);
      }
      iVar1 = iVar1 + 1;
      pLVar2 = (this->fields).instances;
    }
  }
  goto code_?;
  while( true ) {
    mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
    PromotionLooksData+LooksData]::
    List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__RemoveAt
              (pLVar3,(int32_t)index,
               MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__RemoveAt_int_
              );
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) break;
code_?:
    pLVar3 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)(this->fields).instances;
    index = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_04,iVar1,
                       MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    if (pLVar3 == (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0)
    goto code_?;
  }
code_?:
  iVar1 = 0;
  pLVar2 = (this->fields).instances;
  while (pLVar2 != (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    if ((pLVar2->fields)._size <= iVar1) {
      return;
    }
    pLVar3 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)(this->fields).instances;
    if (pLVar3 == (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) break;
    pPVar4 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
             PromotionLooksData+LooksData]::
             List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__get_Item
                       ((PromotionLooksData_LooksData *)&pIStack_8,pLVar3,iVar1,
                        MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__get_Item_int_
                       );
    this_03 = pPVar4->promotionText;
    uVar9 = pPVar4->validOnKogamaPortal;
    uVar10 = pPVar4->validOnAnonymousExternalPortal;
    uVar11 = *(undefined2 *)&pPVar4->field_0xa;
    value._10_2_ = uVar11;
    value.validOnAnonymousExternalPortal = uVar10;
    value.validOnKogamaPortal = uVar9;
    iVar12 = pPVar4->promotionActionType;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                        ((Vector3 *)&stack0xffffffec,&(this->fields).meshBounds,(MethodInfo *)0x0);
    if (this_03 == (String *)0x0) break;
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
              ((BoxCollider *)this_03,*pVVar13,(MethodInfo *)0x0);
    uVar14 = 0;
    this_02 = &(this->fields).meshBounds;
    pRVar15 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        ((Regex_CachedCodeEntryKey *)&stack0xffffffdc,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)this_02,(MethodInfo *)0x0);
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
              ((BoxCollider *)this_03,(Vector3)*pRVar15,(MethodInfo *)0x0);
    pLVar3 = (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)(this->fields).instances;
    if (pLVar3 == (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) break;
    value.promotionText = (String *)uVar14;
    value.promotionImage = (Image *)this_02;
    value.promotionActionType = iVar12;
    mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
    PromotionLooksData+LooksData]::
    List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__set_Item
              (pLVar3,iVar1,value,
               MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__set_Item_int__ChunkInstances__ChunkInstanceVariables_
              );
    iVar1 = iVar1 + 1;
    pLVar2 = (this->fields).instances;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* CubeModelChunk() */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk);
    func_?(&TypeInfo__CubeModelChunk__FaceData);
    func_?(&TypeInfo__CubeModelChunk__FaceData);
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pCVar1 = (CubeModelChunk_FaceData__Array *)func_?(TypeInfo__CubeModelChunk__FaceData,6);
  pCVar2 = (CubeModelChunk_FaceData *)func_?(TypeInfo__CubeModelChunk__FaceData);
  if (pCVar2 == (CubeModelChunk_FaceData *)0x0) {
code_?:
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
  }
  else {
    CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor(pCVar2,(MethodInfo *)0x0);
    if (pCVar1 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    iVar4 = func_?(pCVar2,(pCVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pCVar1->max_length == 0) goto code_?;
    pCVar1->vector[0] = pCVar2;
    func_?(pCVar1->vector,pCVar2);
    pCVar2 = (CubeModelChunk_FaceData *)func_?(TypeInfo__CubeModelChunk__FaceData);
    if (pCVar2 == (CubeModelChunk_FaceData *)0x0) goto code_?;
    CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor(pCVar2,(MethodInfo *)0x0);
    iVar4 = func_?(pCVar2,(pCVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pCVar1->max_length < 2) goto code_?;
    pCVar1->vector[1] = pCVar2;
    func_?(pCVar1->vector + 1,pCVar2);
    pCVar2 = (CubeModelChunk_FaceData *)func_?(TypeInfo__CubeModelChunk__FaceData);
    if (pCVar2 == (CubeModelChunk_FaceData *)0x0) goto code_?;
    CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor(pCVar2,(MethodInfo *)0x0);
    iVar4 = func_?(pCVar2,(pCVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pCVar1->max_length < 3) goto code_?;
    pCVar1->vector[2] = pCVar2;
    func_?(pCVar1->vector + 2,pCVar2);
    pCVar2 = (CubeModelChunk_FaceData *)func_?(TypeInfo__CubeModelChunk__FaceData);
    if (pCVar2 == (CubeModelChunk_FaceData *)0x0) goto code_?;
    CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor(pCVar2,(MethodInfo *)0x0);
    iVar4 = func_?(pCVar2,(pCVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pCVar1->max_length < 4) goto code_?;
    pCVar1->vector[3] = pCVar2;
    func_?(pCVar1->vector + 3,pCVar2);
    pCVar2 = (CubeModelChunk_FaceData *)func_?(TypeInfo__CubeModelChunk__FaceData);
    if (pCVar2 == (CubeModelChunk_FaceData *)0x0) goto code_?;
    CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor(pCVar2,(MethodInfo *)0x0);
    iVar4 = func_?(pCVar2,(pCVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pCVar1->max_length < 5) goto code_?;
    pCVar1->vector[4] = pCVar2;
    func_?(pCVar1->vector + 4,pCVar2);
    pCVar2 = (CubeModelChunk_FaceData *)func_?(TypeInfo__CubeModelChunk__FaceData);
    if (pCVar2 == (CubeModelChunk_FaceData *)0x0) goto code_?;
    CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor(pCVar2,(MethodInfo *)0x0);
    iVar4 = func_?(pCVar2,(pCVar1->klass->_0).element_class);
    if (iVar4 != 0) {
      if (5 < pCVar1->max_length) {
        pCVar1->vector[5] = pCVar2;
        func_?(pCVar1->vector + 5,pCVar2);
        TypeInfo__CubeModelChunk->static_fields->faceData = pCVar1;
        func_?(TypeInfo__CubeModelChunk->static_fields,pCVar1);
        pVVar5 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,4);
        TypeInfo__CubeModelChunk->static_fields->uvs = pVVar5;
        func_?(&TypeInfo__CubeModelChunk->static_fields->uvs,pVVar5);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar6 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
        pCVar7 = TypeInfo__CubeModelChunk->static_fields;
        (pCVar7->uvOffsetVector0).x =
             (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
        (pCVar7->uvOffsetVector0).y = fVar6;
        pCVar7 = TypeInfo__CubeModelChunk->static_fields;
        (pCVar7->uvOffsetVector1).x = -0.5;
        (pCVar7->uvOffsetVector1).y = 0.5;
        pCVar7 = TypeInfo__CubeModelChunk->static_fields;
        (pCVar7->uvOffsetVector).x = 0.0;
        (pCVar7->uvOffsetVector).y = 0.0;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CubeModelChunk(IntVector) */

void Assembly-CSharp.dll::CubeModelChunk::CubeModelChunk__ctor
               (CubeModelChunk *this,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_chunk);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>
                           );
  if (this_00 == (List_1_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<ChunkInstances::ChunkInstanceVariables>__List__
              );
    (this->fields).instances = this_00;
    func_?(&(this->fields).instances,this_00);
    this_01 = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>
                             );
    if (this_01 == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__Dictionary__
              );
    method_00 = (MethodInfo *)&(this->fields).cells;
    (this->fields).cells = this_01;
    func_?(method_00,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    values = (String__Array *)func_?(TypeInfo__System__String,6);
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_chunk != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_chunk,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral_chunk;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_chunk;
    func_?(values->vector,pSVar3);
    pSVar3 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector,(MethodInfo *)0x0);
    if ((pSVar3 != (String *)0x0) &&
       (iVar2 = func_?(pSVar3,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar3;
    func_?(values->vector + 1,pSVar3);
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar2 = func_?(::StringLiteral__,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = ::StringLiteral__;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = ::StringLiteral__;
    func_?(values->vector + 2,pSVar3);
    pSVar3 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector.y,(MethodInfo *)0x0);
    if ((pSVar3 != (String *)0x0) &&
       (iVar2 = func_?(pSVar3,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar3;
    func_?(values->vector + 3,pSVar3);
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar2 = func_?(::StringLiteral__,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = ::StringLiteral__;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = ::StringLiteral__;
    func_?(values->vector + 4,pSVar3);
    pSVar3 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&iVector.z,(MethodInfo *)0x0);
    if ((pSVar3 == (String *)0x0) ||
       (iVar2 = func_?(pSVar3,(values->klass->_0).element_class), iVar2 != 0)) {
      if (values->max_length < 6) goto code_?;
      values->vector[5] = pSVar3;
      func_?(values->vector + 5,pSVar3);
      pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      (this->fields).name = pSVar3;
      func_?(&(this->fields).name,pSVar3);
      (this->fields).chunkPos.x = iVector.x;
      (this->fields).chunkPos.y = iVector.y;
      (this->fields).chunkPos.z = iVector.z;
      this_02 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
      if (this_02 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(this_02,(MethodInfo *)0x0);
        uStack_4 = ZEXT48(this_02);
        func_?(&uStack_4,this_02);
        uStack_4 = uStack_4 & 0xffffffff;
        func_?((int)&uStack_4 + 4,0);
        (this->fields).sharedMeshData.mesh = (Mesh *)uStack_4;
        (this->fields).sharedMeshData.material = uStack_4._4_4_;
        func_?(&(this->fields).sharedMeshData,0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

