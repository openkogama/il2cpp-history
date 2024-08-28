
/* Void AddDeltaToFace(Vector3[] ByRef, Single, Vector3) */

void Assembly-CSharp.dll::Cube::Cube_AddDeltaToFace
               (Vector3__Array **faceVertices,float delta,Vector3 axis,MethodInfo *method)

{
  uVar1 = 0;
  pVVar2 = *faceVertices;
  if (pVVar2 != (Vector3__Array *)0x0) {
    iVar3 = 0;
    do {
      if ((int)pVVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uVar1) goto code_?;
      uVar4 = *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3);
      fStack_5 = (float)uVar4;
      fStack_6 = (float)((ulonglong)uVar4 >> 0x20);
      uVar1 = uVar1 + 1;
      *(ulonglong *)((int)&pVVar2->vector[0].x + iVar3) =
           CONCAT44(fStack_6 + axis.y * delta,fStack_5 + axis.x * delta);
      *(float *)((int)&pVVar2->vector[0].z + iVar3) =
           *(float *)((int)&pVVar2->vector[0].z + iVar3) + axis.z * delta;
      iVar3 = iVar3 + 0xc;
      pVVar2 = *faceVertices;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Single CalculateAOBleed(FaceData, Int32) */

float Assembly-CSharp.dll::Cube::Cube_CalculateAOBleed
                (FaceData *faceData,int32_t index,MethodInfo *method)

{
  if ((faceData != (FaceData *)0x0) &&
     (pSVar1 = (faceData->fields).lightValues, pSVar1 != (Single__Array *)0x0)) {
    if (pSVar1->max_length <= (uint)index) goto code_?;
    fStack_2 = pSVar1->vector[index];
    pVVar3 = (faceData->fields).faceVertices;
    if (pVVar3 != (Vector3__Array *)0x0) {
      if (pVVar3->max_length <= (uint)index) goto code_?;
      iStack_4 = 1;
      uVar5 = pVVar3->vector[index].x;
      uVar6 = pVVar3->vector[index].y;
      fVar7 = pVVar3->vector[index].z;
      while( true ) {
        index = index + 1;
        pVVar3 = (faceData->fields).faceVertices;
        if (pVVar3 == (Vector3__Array *)0x0) break;
        uVar8 = index & 0x80000003;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
        }
        if (pVVar3->max_length <= uVar8) goto code_?;
        uVar9 = pVVar3->vector[uVar8].x;
        uVar10 = pVVar3->vector[uVar8].y;
        fVar11 = pVVar3->vector[uVar8].z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        fVar11 = fVar7 - fVar11;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar12 = (double)(((float)uVar6 - (float)uVar10) * ((float)uVar6 - (float)uVar10) +
                          ((float)uVar5 - (float)uVar9) * ((float)uVar5 - (float)uVar9) +
                         fVar11 * fVar11);
        if (dVar12 < 0.0) {
          func_?();
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        fVar11 = (float)dVar12;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (_UNK_? < fVar11) {
          fVar11 = _UNK_?;
        }
        pSVar1 = (faceData->fields).lightValues;
        if (pSVar1 == (Single__Array *)0x0) break;
        if (pSVar1->max_length <= uVar8) goto code_?;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (_UNK_? < fVar11) {
          fVar11 = _UNK_?;
        }
        fStack_13 = (_UNK_? - pSVar1->vector[uVar8]) * fVar11 + pSVar1->vector[uVar8];
        if (fStack_2 < fStack_13) {
          fStack_13 = fStack_2;
        }
        iStack_4 = iStack_4 + 1;
        fStack_2 = fStack_13;
        if (3 < iStack_4) {
          return fStack_13;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  fVar15 = (float10)(*pcVar14)();
  return (float)fVar15;
}


/* Single CalculateAOLightCheap(Face, Int32, Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector,
   Boolean) */

float Assembly-CSharp.dll::Cube::Cube_CalculateAOLightCheap
                (Face__Enum face,int32_t faceCornerIndex,
                Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector cubePos,bool inside,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(0x9a68);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  uVar2 = faceCornerIndex + face * 4;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pIVar3 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
  if (pIVar3 != (IntVector__Array__Array *)0x0) {
    if (pIVar3->max_length <= uVar2) goto code_?;
    pIVar4 = TypeInfo__SharedCubeFunctions->static_fields->LightTestInwardsOffset;
    pIStack_5 = pIVar3->vector[uVar2];
    if (pIVar4 != (IntVector__Array *)0x0) {
      if (pIVar4->max_length <= face) goto code_?;
      uVar2 = 0;
      uStack_6._0_2_ = pIVar4->vector[face].x;
      uStack_6._2_2_ = pIVar4->vector[face].y;
      pIVar7 = pIStack_5->vector;
      iVar8 = pIVar4->vector[face].z;
      while (uVar9 = (undefined2)((uint)in_stack_10 >> 0x10),
            pIStack_5 != (IntVector__Array *)0x0) {
        if (pIStack_5->max_length <= uVar2) goto code_?;
        iVar11 = pIVar7->z;
        uVar12 = pIVar7->x;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        in_stack_10 = (MethodInfo *)CONCAT22(uVar9,iVar11);
        IVar13.z = cubePos.x;
        IVar13._0_4_ = auStack_14;
        i2.y = in_stack_15;
        i2.x = cubePos.z;
        i2.z = uVar12;
        IVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (IVar13,i2,in_stack_10);
        uVar9 = (undefined2)((uint)in_stack_10 >> 0x10);
        iVar11 = *(int16_t *)(IVar13._0_4_ + 1);
        uVar16 = *IVar13._0_4_;
        if (inside != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__IntVector);
          }
          in_stack_10 = (MethodInfo *)CONCAT22(uVar9,iVar8);
          i1.z = (int16_t)uVar16;
          i1._0_4_ = auStack_17;
          i2_00.y = in_stack_15;
          i2_00.x = iVar11;
          i2_00.z = (int16_t)uStack_6;
          IVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                             (i1,i2_00,in_stack_10);
          iVar11 = *(int16_t *)(IVar13._0_4_ + 1);
          uVar16 = *IVar13._0_4_;
        }
        if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) break;
        key.z = iVar11;
        key.x = (short)uVar16;
        key.y = (short)((uint)uVar16 >> 0x10);
        bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__ContainsKey
                          (cells,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                          );
        if (bVar18 == 0) {
          uVar19 = 1;
        }
        else {
          func_?(cells,uVar16,iVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__get_Item_MV__WorldObject__IntVector_
                         );
          uVar19 = extraout_EDX & 0xff;
        }
        uVar2 = uVar2 + 1;
        iStack_1 = iStack_1 + uVar19;
        pIVar7 = pIVar7 + 1;
        if (3 < (int)uVar2) {
          return (float)iStack_1 * _UNK_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  fVar21 = (float10)(*pcVar20)();
  return (float)fVar21;
}


/* Single CalculateAOLightExpensive(Face, Int32, Dictionary`2[MV.WorldObject.IntVector,Cell],
   IntVector, Int32[], Vector3) */

float Assembly-CSharp.dll::Cube::Cube_CalculateAOLightExpensive
                (Face__Enum face,int32_t faceCornerIndex,
                Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector cubePos,
                Int32__Array *cornerIndexToVertex,Vector3 normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    in_stack_1 = 0x1057;
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uStack_2 = 0.0;
  iStack_3 = 0;
  IStack_4.x = 0;
  IStack_4.y = 0;
  IStack_4.z = 0;
  pIVar5 = (Il2CppMethodPointer)(faceCornerIndex + face * 4);
  CStack_6.cube = (Cube *)0x0;
  CStack_6.lightValue = 0;
  CStack_6._5_3_ = 0;
  uStack_7 = 0;
  pIStack_8 = pIVar5;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar9 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (cornerIndexToVertex != (Int32__Array *)0x0) {
    if (cornerIndexToVertex->max_length <= (uint)faceCornerIndex) goto code_?;
    if (pVVar9 != (Vector3__Array *)0x0) {
      uVar10 = cornerIndexToVertex->vector[faceCornerIndex];
      if (pVVar9->max_length <= uVar10) goto code_?;
      auStack_11._24_4_ = pVVar9->vector[uVar10].x;
      _Stack_c0 = (_union_154)pVVar9->vector[uVar10].y;
      _Stack_bc = (_union_155)pVVar9->vector[uVar10].z;
      VStack_12._0_8_ = unique0x0000a400;
      _Stack_6c = _Stack_bc;
      pVStack_13 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pSVar14 = TypeInfo__SharedCubeFunctions->static_fields;
      pIVar15 = pSVar14->LightTestOffsets;
      if (pIVar15 != (IntVector__Array__Array *)0x0) {
        if ((Il2CppMethodPointer)pIVar15->max_length <= pIVar5) goto code_?;
        pIStack_16 = pIVar15->vector[(int)pIVar5];
        pIVar17 = pSVar14->LightTestInwardsOffset;
        if (pIVar17 != (IntVector__Array *)0x0) {
          if (pIVar17->max_length <= face) goto code_?;
          uStack_18._0_2_ = pIVar17->vector[face].x;
          uStack_18._2_2_ = pIVar17->vector[face].y;
          iStack_19 = pIVar17->vector[face].z;
          pIVar20 = pSVar14->LightTestOppositeFaceCorners;
          if (pIVar20 != (Int32__Array__Array *)0x0) {
            if (pIVar20->max_length <= face) goto code_?;
            pIVar21 = pSVar14->LightTestSameFaceCorners;
            pIVar22 = pIVar20->vector[face];
            pIStack_23 = pIVar22;
            if (pIVar21 != (Int32__Array__Array *)0x0) {
              if (pIVar21->max_length <= face) goto code_?;
              pIStack_24 = pIVar21->vector[face];
              if (pSVar14->FaceHeightAxis != (Int32__Array *)0x0) {
                if (pSVar14->FaceHeightAxis->max_length <= face) goto code_?;
                pIVar25 = pSVar14->FaceDirectionScalar;
                iStack_26 = pSVar14->FaceHeightAxis->vector[face];
                if (pIVar25 != (Int32__Array *)0x0) {
                  if (face < pIVar25->max_length) {
                    fStack_27 = (float)pIVar25->vector[face];
                    piStack_28 = pIVar22->vector;
                    pMStack_29 = (MethodInfo *)0x0;
                    iStack_30 = (int)pIStack_24 - (int)pIVar22;
                    pIStack_31 = pIStack_16->vector;
                    uStack_32 = 0x10;
                    piStack_33 = (int32_t *)0x0;
                    pIStack_34 = pIStack_31;
                    piStack_35 = piStack_28;
                    do {
                      pMVar36 = pMStack_29;
                      if (pIStack_16 == (IntVector__Array *)0x0) goto code_?;
                      if ((MethodInfo *)pIStack_16->max_length <= pMStack_29) goto code_?;
                      uStack_2 = *(float *)pIStack_31;
                      iStack_3 = pIStack_31->z;
                      pVStack_37 = *(Vector3__Array **)pIStack_31;
                      uStack_38 = (Vector3__Array *)CONCAT22(pIStack_31->z,(undefined2)uStack_38);
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?(TypeInfo__MV__WorldObject__IntVector);
                      }
                      IVar39.z = cubePos.x;
                      IVar39._0_4_ = auStack_40;
                      i2_00.y = in_stack_41;
                      i2_00.x = cubePos.z;
                      i2_00.z = (int16_t)pVStack_37;
                      IVar39 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (IVar39,i2_00,
                                          (MethodInfo *)CONCAT22(in_stack_42,uStack_38._2_2_))
                      ;
                      if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)
                      goto code_?;
                      value = cells;
                      bVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                               WorldObject::IntVector,Cell]::
                               Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                                         (cells,*IVar39._0_4_,&CStack_6,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                                         );
                      if (bVar43 != 0) {
                        pVStack_37 = (Vector3__Array *)CStack_6.cube;
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?(TypeInfo__MV__WorldObject__CubeBase);
                        }
                        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                                  ((CubeBase *)pVStack_37,&pVStack_13,(MethodInfo *)0x0);
                        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__SharedCubeFunctions);
                        }
                        pFVar44 = TypeInfo__SharedCubeFunctions->static_fields->
                                  LightTestNormalTargetFaces;
                        if (pFVar44 == (Face__Enum__Array__Array *)0x0) goto code_?;
                        if ((Il2CppMethodPointer)pFVar44->max_length <= pIStack_8)
                        goto code_?;
                        pFVar45 = pFVar44->vector[(int)pIStack_8];
                        if (pFVar45 == (Face__Enum__Array *)0x0) goto code_?;
                        if ((MethodInfo *)pFVar45->max_length <= pMVar36) goto code_?;
                        pDVar46 = TypeInfo__SharedCubeFunctions->static_fields->
                                  VertexIndexToFaceIndexes;
                        if (pDVar46 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0)
                        goto code_?;
                        uStack_38 = *(Vector3__Array **)((int)pFVar45->vector + (uStack_32 - 0x10));
                        if ((Vector3__Array *)pDVar46->max_length <= uStack_38)
                        goto code_?;
                        if (pIVar22 == (Int32__Array *)0x0) goto code_?;
                        if ((MethodInfo *)pIVar22->max_length <= pMVar36) goto code_?;
                        if ((Dictionary_2_System_Int32_System_Object_ *)
                            pDVar46->vector[(int)uStack_38] ==
                            (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
                        pVStack_47 = (Vector3__Array *)
                                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32,System::Object]::
                                     Dictionary_2_System_Int32_System_Object__get_Item
                                               ((Dictionary_2_System_Int32_System_Object_ *)
                                                pDVar46->vector[(int)uStack_38],*piStack_35,
                                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                               );
                        pVStack_37 = pVStack_13;
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Cube);
                        }
                        pVVar9 = Cube_GetNormals(pVStack_37,(Face__Enum)uStack_38,(MethodInfo *)0x0
                                                 );
                        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                        VStack_48.y = (float)pVStack_47;
                        VStack_48.x = (float)auStack_11;
                        func_?();
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?(TypeInfo__MV__WorldObject__IntVector);
                        }
                        pVVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            (&VStack_50,(IntVector *)&uStack_2,(MethodInfo *)0x0);
                        uStack_51._0_4_ = pVVar49->x;
                        uStack_51._4_4_ = pVVar49->y;
                        fStack_52 = pVVar49->z;
                        if (pIStack_24 == (Int32__Array *)0x0) goto code_?;
                        if ((MethodInfo *)pIStack_24->max_length <= pMVar36) goto code_?;
                        if (pVStack_13 == (Vector3__Array *)0x0) goto code_?;
                        func_?(&fStack_53,*(undefined4 *)(iStack_30 + (int)piStack_35));
                        fStack_54 = fStack_52 + fStack_55;
                        VStack_56.y = uStack_51._4_4_ + fStack_57;
                        VStack_56.x = fStack_53 + (float)uStack_51;
                        VStack_56.z = fStack_54;
                        pVVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            (&VStack_58,(IntVector *)&uStack_2,(MethodInfo *)0x0);
                        uStack_59._0_4_ = pVVar49->x;
                        uStack_59._4_4_ = pVVar49->y;
                        fStack_60 = pVVar49->z;
                        if ((MethodInfo *)pIVar22->max_length <= pMVar36) goto code_?;
                        if (pVStack_13 == (Vector3__Array *)0x0) goto code_?;
                        func_?(&fStack_61,*piStack_35);
                        VStack_62.z = fStack_60 + fStack_63;
                        fStack_64 = (float)uStack_59 + fStack_61;
                        pIStack_65 = (Int32__Array *)(uStack_59._4_4_ + fStack_66);
                        uStack_67 = 0;
                        uStack_68 = 0;
                        VStack_69.y = (float)pIStack_65;
                        VStack_69.x = fStack_64;
                        VStack_69.z = VStack_62.z;
                        pVVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            ((Vector3 *)&stack0xfffffe40,(IntVector *)&uStack_2,
                                             (MethodInfo *)0x0);
                        uStack_70._0_4_ = pVVar49->x;
                        uStack_70._4_4_ = pVVar49->y;
                        fStack_71 = pVVar49->z;
                        uVar10 = (uint)((int)&pMVar36->methodPointer + 1U) & 0x80000003;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                        }
                        if (pIVar22->max_length <= uVar10) goto code_?;
                        if (pVStack_13 == (Vector3__Array *)0x0) goto code_?;
                        func_?(&fStack_72,pIVar22->vector[uVar10]);
                        uStack_73 = CONCAT44(uStack_70._4_4_ + fStack_74,
                                             (float)uStack_70 + fStack_72);
                        fStack_75 = fStack_71 + fStack_76;
                        pVVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            (&VStack_48,(IntVector *)&uStack_2,(MethodInfo *)0x0);
                        uStack_77._0_4_ = pVVar49->x;
                        uStack_77._4_4_ = pVVar49->y;
                        fStack_78 = pVVar49->z;
                        uVar10 = (uint)((int)&pMVar36->methodPointer + 3U) & 0x80000003;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                        }
                        if (pIVar22->max_length <= uVar10) goto code_?;
                        if (pVStack_13 == (Vector3__Array *)0x0) goto code_?;
                        func_?(auStack_11 + 0xc,pIVar22->vector[uVar10]);
                        fVar79 = VStack_62.z;
                        fStack_80 = (float)uStack_77 + (float)auStack_11._12_4_;
                        puStack_81 = (undefined *)0x0;
                        iStack_82 = 0;
                        uStack_83 = 0;
                        pVStack_47 = (Vector3__Array *)(uStack_77._4_4_ + (float)auStack_11._16_4_);
                        pMStack_84 = (MethodInfo *)(fStack_78 + (float)auStack_11._20_4_);
                        fVar85 = (float10)func_?(SUB42(fStack_64,0),(short)pIStack_65,
                                                          VStack_62.z,(int)uStack_73,
                                                          (int)((ulonglong)uStack_73 >> 0x20),
                                                          fStack_75,0);
                        pVStack_37 = (Vector3__Array *)(float)fVar85;
                        fVar85 = (float10)func_?(SUB42(fStack_64,0),(short)pIStack_65,
                                                          fVar79,fStack_80,pVStack_47,pMStack_84,0
                                                         );
                        pVStack_47 = (Vector3__Array *)(float)fVar85;
                        pMVar36 = (MethodInfo *)0x0;
                        uVar86 = VStack_12.x._2_2_;
                        in_stack_1 = _Stack_6c._2_2_;
                        fVar85 = (float10)func_?(VStack_12.x._0_2_,VStack_12.y._0_2_,
                                                          _Stack_6c._0_2_,fStack_64,pIStack_65,
                                                          fVar79,0);
                        fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                           ((float)fVar85,pMVar36);
                        uStack_38 = (Vector3__Array *)(1.0 - fVar79);
                        pVStack_47 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)pVStack_47,(MethodInfo *)0x0);
                        fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                           ((float)pVStack_37,(MethodInfo *)0x0);
                        index = iStack_26;
                        pVStack_37 = (Vector3__Array *)
                                     (fVar79 * (float)pVStack_47 * (float)uStack_38);
                        pVStack_47 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item(&VStack_56,iStack_26,(MethodInfo *)0x0);
                        uStack_38 = (Vector3__Array *)((float)pVStack_47 * fStack_27);
                        pVStack_87 = (Vector3__Array *)
                                     ((float)(auStack_11._0_4_ ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             ) * normal.x +
                                      (float)(auStack_11._4_4_ ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             ) * normal.y +
                                      (float)(auStack_11._8_4_ ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             ) * normal.z + _UNK_?);
                        pVStack_47 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item((Vector3 *)(auStack_11 + 0x18),index,
                                                      (MethodInfo *)0x0);
                        uStack_38 = (Vector3__Array *)
                                    (((float)uStack_38 - (float)pVStack_47 * fStack_27) *
                                    (float)pVStack_37);
                        fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                           ((float)pVStack_87 + (float)pVStack_87,(MethodInfo *)0x0)
                        ;
                        iVar88 = (index + 1) % 3;
                        pVStack_87 = uStack_38;
                        pVStack_47 = (Vector3__Array *)(fVar79 * (float)uStack_38);
                        VStack_48.z = (float)&UNK_?;
                        pVStack_87 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item(&VStack_56,iVar88,(MethodInfo *)0x0);
                        VStack_48.z = (float)&UNK_?;
                        fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                           (&VStack_69,iVar88,(MethodInfo *)0x0);
                        iVar88 = (index + 2) % 3;
                        pVStack_87 = (Vector3__Array *)((float)pVStack_87 - fVar79);
                        pVStack_47 = (Vector3__Array *)
                                     ((_UNK_? - (float)((uint)pVStack_87 & _UNK_?)) *
                                     (float)pVStack_47);
                        VStack_48.z = (float)&UNK_?;
                        pVStack_87 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item(&VStack_56,iVar88,(MethodInfo *)0x0);
                        VStack_48.z = (float)&UNK_?;
                        fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                           (&VStack_69,iVar88,(MethodInfo *)0x0);
                        pVStack_87 = (Vector3__Array *)
                                     ((_UNK_? -
                                      (float)((uint)((float)pVStack_87 - fVar79) & _UNK_?)) *
                                     (float)pVStack_47);
                        uStack_38 = pVStack_87;
                        iVar88 = func_?();
                        iStack_82 = (int)uStack_2._2_2_;
                        uStack_83 = 0;
                        iVar89 = func_?();
                        fStack_80 = (float)(int)iStack_3;
                        puStack_81 = (undefined *)0x0;
                        iVar90 = func_?();
                        pIVar22 = pIStack_23;
                        pVVar9 = pVStack_87;
                        if (iVar90 + iVar89 + iVar88 == 3) {
                          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__SharedCubeFunctions);
                          }
                          pMVar36 = pMStack_29;
                          pIVar22 = pIStack_23;
                          pFVar45 = TypeInfo__SharedCubeFunctions->static_fields->
                                    LightTestNormalSecondaryTargetFaces;
                          if (pFVar45 == (Face__Enum__Array *)0x0) goto code_?;
                          if ((Il2CppMethodPointer)pFVar45->max_length <= pIStack_8)
                          goto code_?;
                          pDVar46 = TypeInfo__SharedCubeFunctions->static_fields->
                                    VertexIndexToFaceIndexes;
                          if (pDVar46 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0)
                          goto code_?;
                          pVStack_47 = (Vector3__Array *)pFVar45->vector[(int)pIStack_8];
                          if (((Vector3__Array *)pDVar46->max_length <= pVStack_47) ||
                             ((MethodInfo *)pIStack_23->max_length <= pMStack_29))
                          goto code_?;
                          if ((Dictionary_2_System_Int32_System_Object_ *)
                              pDVar46->vector[(int)pVStack_47] ==
                              (Dictionary_2_System_Int32_System_Object_ *)0x0)
                          goto code_?;
                          pVStack_37 = (Vector3__Array *)
                                       mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Int32,System::Object]::
                                       Dictionary_2_System_Int32_System_Object__get_Item
                                                 ((Dictionary_2_System_Int32_System_Object_ *)
                                                  pDVar46->vector[(int)pVStack_47],*piStack_35,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                 );
                          pVStack_87 = pVStack_13;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__Cube);
                          }
                          pVVar9 = Cube_GetNormals(pVStack_87,(Face__Enum)pVStack_47,
                                                    (MethodInfo *)0x0);
                          if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                          VStack_48.y = (float)pVStack_37;
                          VStack_48.x = (float)&VStack_12.z;
                          func_?();
                          fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                             ((float)((uint)VStack_12.z ^
                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ) * normal.x +
                                              (float)((uint)fStack_91 ^
                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ) * normal.y +
                                              (float)((uint)fStack_92 ^
                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ) * normal.z + _UNK_?,(MethodInfo *)0x0);
                          uStack_38 = (Vector3__Array *)(fVar79 * (float)uStack_38);
                          pMStack_29 = pMVar36;
                          pVVar9 = uStack_38;
                        }
                        value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                ((uint)uVar86 << 0x10);
                        piStack_33 = (int32_t *)((float)piStack_33 + (float)pVVar9);
                        pMVar36 = pMStack_29;
                      }
                      corners = (Vector3__Array **)((uint)in_stack_1 << 0x10);
                      pMStack_29 = (MethodInfo *)((int)&pMVar36->methodPointer + 1);
                      uStack_32 = uStack_32 + 4;
                      piStack_35 = piStack_35 + 1;
                      pIStack_31 = pIStack_31 + 1;
                    } while ((int)uStack_32 < 0x20);
                    piStack_35 = (int32_t *)0x0;
                    uStack_32 = 0;
                    while (uVar93 = (undefined2)((uint)in_stack_94 >> 0x10),
                          uStack_32 < pIStack_16->max_length) {
                      uVar95 = pIStack_34->x;
                      uStack_38 = (Vector3__Array *)CONCAT22(pIStack_34->z,(undefined2)uStack_38);
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?(TypeInfo__MV__WorldObject__IntVector);
                      }
                      in_stack_94 = (MethodInfo *)CONCAT22(uVar93,iStack_19);
                      i1.z = uVar95;
                      i1._0_4_ = auStack_40;
                      i2.y = in_stack_96;
                      i2.x = uStack_38._2_2_;
                      i2.z = (int16_t)uStack_18;
                      IVar39 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (i1,i2,in_stack_94);
                      pIVar97 = IVar39._0_4_;
                      IStack_4.x = pIVar97->x;
                      IStack_4.y = pIVar97->y;
                      IStack_4.z = pIVar97->z;
                      bVar43 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                                         (*pIVar97,TypeInfo__MV__WorldObject__IntVector->
                                                   static_fields->Zero,(MethodInfo *)0x0);
                      uVar98 = IStack_4._0_4_;
                      uVar99 = (ushort)((uint)corners >> 0x10);
                      uVar86 = (ushort)((uint)value >> 0x10);
                      if (bVar43 == 0) {
                        uStack_38 = (Vector3__Array *)CONCAT22(IStack_4.z,(undefined2)uStack_38);
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          uVar99 = 0x1057;
                          func_?(TypeInfo__MV__WorldObject__IntVector);
                        }
                        i1_00.z = cubePos.x;
                        i1_00._0_4_ = (int)&uStack_51 + 4;
                        i2_01.y = uVar86;
                        i2_01.x = cubePos.z;
                        i2_01.z = (int16_t)uVar98;
                        IVar39 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition
                                           (i1_00,i2_01,
                                            (MethodInfo *)CONCAT22(uVar99,uStack_38._2_2_));
                        cVar100 = func_?(cells,*IVar39._0_4_,
                                                 *(undefined2 *)(IVar39._0_4_ + 1),&uStack_7,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                                                );
                        corners = (Vector3__Array **)((uint)uVar99 << 0x10);
                        value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                ((uint)uVar86 << 0x10);
                        if (cVar100 != '\0') {
                          cube = (CubeBase *)uStack_7;
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?(TypeInfo__MV__WorldObject__CubeBase);
                          }
                          corners = &pVStack_13;
                          uVar86 = 0x1057;
                          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                                    (cube,corners,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?(TypeInfo__MV__WorldObject__IntVector);
                          }
                          pVVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                    IntVector_ToVector3(&VStack_48,&IStack_4,(MethodInfo *)0x0);
                          uVar10 = uStack_32;
                          VStack_56.x = pVVar49->x;
                          VStack_56.y = pVVar49->y;
                          VStack_56.z = pVVar49->z;
                          if (pIStack_24 == (Int32__Array *)0x0) goto code_?;
                          if (pIStack_24->max_length <= uStack_32) break;
                          if (pVStack_13 == (Vector3__Array *)0x0) goto code_?;
                          func_?(&VStack_12.z,*(undefined4 *)((int)piStack_28 + iStack_30))
                          ;
                          VStack_62.z = VStack_56.z + fStack_92;
                          fStack_80 = VStack_56.x + VStack_12.z;
                          pIStack_65 = (Int32__Array *)(VStack_56.y + fStack_91);
                          puStack_81 = (undefined *)0x0;
                          iStack_82 = 0;
                          uStack_83 = 0;
                          uStack_67 = 0;
                          uStack_68 = 0;
                          fStack_64 = fStack_80;
                          VStack_62.x = fStack_80;
                          VStack_62.y = (float)pIStack_65;
                          auStack_11._20_4_ = VStack_62.z;
                          pIStack_23 = pIStack_65;
                          uStack_38 = (Vector3__Array *)VStack_62.z;
                          pVVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                    IntVector_ToVector3((Vector3 *)&stack0xfffffe40,&IStack_4,
                                                        (MethodInfo *)0x0);
                          uStack_73._0_4_ = pVVar49->x;
                          uStack_73._4_4_ = pVVar49->y;
                          fStack_75 = pVVar49->z;
                          if (pIVar22 == (Int32__Array *)0x0) goto code_?;
                          if (pIVar22->max_length <= uVar10) break;
                          if (pVStack_13 == (Vector3__Array *)0x0) goto code_?;
                          func_?(&VStack_69,*piStack_28);
                          pMVar36 = (MethodInfo *)(fStack_75 + VStack_69.z);
                          VStack_50.x = (float)uStack_73 + VStack_69.x;
                          VStack_50.y = uStack_73._4_4_ + VStack_69.y;
                          VStack_50.z = 0.0;
                          puStack_101 = (undefined *)0x0;
                          pMStack_84 = pMVar36;
                          auStack_11._0_4_ = VStack_50.x;
                          auStack_11._4_4_ = VStack_50.y;
                          auStack_11._8_4_ = pMVar36;
                          pIStack_31 = (IntVector *)VStack_50.x;
                          pIStack_8 = (Il2CppMethodPointer)VStack_50.y;
                          pMStack_29 = pMVar36;
                          fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                   Vector3_get_Item((Vector3 *)(auStack_11 + 0x18),iStack_26,
                                                    (MethodInfo *)0x0);
                          pVStack_87 = (Vector3__Array *)(fVar79 * fStack_27);
                          pVStack_37 = (Vector3__Array *)
                                       UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                       Vector3_get_Item(&VStack_62,iStack_26,(MethodInfo *)0x0);
                          in_stack_94 = (MethodInfo *)auStack_11;
                          fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                   Vector3_get_Item((Vector3 *)in_stack_94,iStack_26,
                                                    (MethodInfo *)0x0);
                          value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                  ((uint)uVar86 << 0x10);
                          pVStack_47 = (Vector3__Array *)(fVar79 * fStack_27);
                          if (((float)pVStack_87 <= (float)pVStack_47) ||
                             ((float)pVStack_37 * fStack_27 <= (float)pVStack_87)) {
                            if ((float)pVStack_87 < (float)pVStack_47) {
                              uVar86 = 0;
                              fVar85 = (float10)func_?(VStack_12.x._0_2_,VStack_12.y._0_2_,
                                                                _Stack_6c._0_2_,
                                                                SUB42(VStack_50.x,0),
                                                                SUB42(VStack_50.y,0),(short)pMVar36
                                                                ,0,0);
                              value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)(float)fVar85;
                              fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                                 ((float)value,pMVar36);
                              corners = (Vector3__Array **)((uint)uVar86 << 0x10);
                              piStack_35 = (int32_t *)((1.0 - fVar79) + (float)piStack_35);
                            }
                          }
                          else {
                            fStack_54 = (float)uStack_38 - (float)pMStack_29;
                            fStack_76 = (float)_Stack_bc - (float)pMStack_29;
                            puVar102 = (undefined8 *)
                                      func_?((short)&VStack_58,
                                                      SUB42((float)auStack_11._24_4_ -
                                                            (float)pIStack_31,0),
                                                      SUB42((float)_Stack_c0 - (float)pIStack_8,0),
                                                      SUB42(fStack_76,0),
                                                      SUB42(fStack_80 - (float)pIStack_31,0),
                                                      SUB42((float)pIStack_23 - (float)pIStack_8,0)
                                                      ,SUB42(fStack_54,0),0);
                            uVar103 = *puVar102;
                            fStack_78 = *(float *)(puVar102 + 1);
                            uStack_77._0_4_ = (float)uVar103;
                            uStack_77._4_4_ = (float)((ulonglong)uVar103 >> 0x20);
                            fVar104 = (float)uStack_77 + (float)pIStack_31;
                            fVar79 = uStack_77._4_4_ + (float)pIStack_8;
                            fStack_63 = fStack_78 + (float)pMStack_29;
                            pMVar36 = (MethodInfo *)0x0;
                            uVar93 = _Stack_6c._0_2_;
                            uStack_77 = uVar103;
                            fVar85 = (float10)func_?(VStack_12.x._0_2_,VStack_12.y._0_2_,
                                                              uVar93,SUB42(fVar104,0),SUB42(fVar79,0)
                                                              ,SUB42(fStack_63,0),0);
                            fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)fVar85,pMVar36);
                            pVStack_87 = (Vector3__Array *)(1.0 - fVar79);
                            uVar105 = SUB42(fStack_64,0);
                            uVar106 = (undefined2)((uint)fStack_64 >> 0x10);
                            uVar86 = (ushort)((uint)pIStack_65 >> 0x10);
                            fVar85 = (float10)func_?(VStack_12.x._0_2_,VStack_12.y._0_2_,
                                                              uVar93,uVar105,(short)pIStack_65,
                                                              auStack_11._20_4_,0,0);
                            value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)(float)fVar85;
                            fVar79 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)value,(MethodInfo *)CONCAT22(uVar106,uVar105));
                            corners = (Vector3__Array **)((uint)uVar86 << 0x10);
                            piStack_35 = (int32_t *)(fVar79 * (float)pVStack_87 + (float)piStack_35)
                            ;
                          }
                        }
                      }
                      uStack_32 = uStack_32 + 1;
                      piStack_28 = piStack_28 + 1;
                      pIStack_34 = pIStack_34 + 1;
                      if (3 < (int)uStack_32) {
                        if ((float)piStack_33 <= (float)piStack_35) {
                          piStack_33 = piStack_35;
                        }
                        return 1.0 - (float)piStack_33 * _UNK_?;
                      }
                    }
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar107 = (code *)swi(3);
  fVar85 = (float10)(*pcVar107)();
  return (float)fVar85;
}


/* Void ClampFace(Vector3[] ByRef) */

void Assembly-CSharp.dll::Cube::Cube_ClampFace(Vector3__Array **faceVertices,MethodInfo *method)

{
  uVar1 = 0;
  pVVar2 = *faceVertices;
  if (pVVar2 != (Vector3__Array *)0x0) {
    iVar3 = 0;
    do {
      if ((int)pVVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uVar1) goto code_?;
      MathFunctions::MathFunctions_ClampVector
                ((Vector3 *)((int)&pVVar2->vector[0].x + iVar3),-0.5,0.5,(MethodInfo *)0x0);
      pVVar2 = *faceVertices;
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uVar1) goto code_?;
      vector.z = *(float *)((int)&pVVar2->vector[0].z + iVar3);
      vector._0_8_ = *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3);
      pVVar4 = MathFunctions::MathFunctions_RoundVector
                         ((Vector3 *)&stack0xfffffff0,vector,3,(MethodInfo *)0x0);
      fVar5 = pVVar4->z;
      if (pVVar2->max_length <= uVar1) goto code_?;
      *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3) = *(undefined8 *)pVVar4;
      uVar1 = uVar1 + 1;
      *(float *)((int)&pVVar2->vector[0].z + iVar3) = fVar5;
      iVar3 = iVar3 + 0xc;
      pVVar2 = *faceVertices;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Cube Clone() */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone(Cube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte,in_ECX,unaff_EBP);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)this,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (Cube *)0x0;
  }
  if ((this != (Cube *)0x0) && (pBVar2 = (this->fields)._.byteCorners, pBVar2 != (Byte__Array *)0x0)
     ) {
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
             PlayableBehaviour_Clone((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
    pBVar2 = (this->fields)._.faceMaterials;
    if (pBVar2 != (Byte__Array *)0x0) {
      pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
               PlayableBehaviour_Clone((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
      pCVar5 = (Cube *)func_?(TypeInfo__Cube);
      if ((pOVar4 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
        if (pOVar3 == (Object *)0x0) {
          pBVar2 = (Byte__Array *)0x0;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                    ((CubeBase *)pCVar5,pBVar2,(Byte__Array *)0x0,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                    ((CubeBase *)pCVar5,(MethodInfo *)0x0);
          return pCVar5;
        }
        pBVar2 = (Byte__Array *)func_?();
        if (pBVar2 != (Byte__Array *)0x0) goto code_?;
        func_?();
      }
      func_?();
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar5 = (Cube *)(*pcVar7)();
  return pCVar5;
}


/* Cube Clone(Cube) */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone_1(Cube *original,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)original,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (Cube *)0x0;
  }
  if ((original != (Cube *)0x0) &&
     (pBVar2 = (original->fields)._.byteCorners, pBVar2 != (Byte__Array *)0x0)) {
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
             PlayableBehaviour_Clone((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
    pBVar2 = (original->fields)._.faceMaterials;
    if (pBVar2 != (Byte__Array *)0x0) {
      pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
               PlayableBehaviour_Clone((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
      pCVar5 = (Cube *)func_?(TypeInfo__Cube);
      if ((pOVar4 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
        if (pOVar3 == (Object *)0x0) {
          pBVar2 = (Byte__Array *)0x0;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                    ((CubeBase *)pCVar5,pBVar2,(Byte__Array *)0x0,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                    ((CubeBase *)pCVar5,(MethodInfo *)0x0);
          return pCVar5;
        }
        pBVar2 = (Byte__Array *)func_?();
        if (pBVar2 != (Byte__Array *)0x0) goto code_?;
        func_?();
      }
      func_?();
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar5 = (Cube *)(*pcVar7)();
  return pCVar5;
}


/* List`1[UnityEngine.Vector3] CreateCubeCornersFromTopFace(List`1[UnityEngine.Vector3], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_CreateCubeCornersFromTopFace
          (List_1_UnityEngine_Vector3_ *cubeCorners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_1 = &TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>;
    in_stack_2 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,8,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_)
  ;
  this_00 = (MethodInfo *)func_?();
  puVar3 = &UNK_?;
  pMVar4 = this_00;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)this_00,8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  iVar5 = 0;
  if (cubeCorners == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  while (iVar5 < (cubeCorners->fields)._size) {
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,
                         iVar5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar8 = *(undefined8 *)pVVar6;
    pVVar9 = pVVar6->asset;
    VVar10 = *pVVar6;
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
    piVar11 = &(this->fields)._version;
    *piVar11 = *piVar11 + 1;
    pMVar12 = (this->fields)._items;
    if (pMVar12 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    uVar13 = (this->fields)._size;
    if (uVar13 < pMVar12->max_length) {
      (this->fields)._size = uVar13 + 1;
      if (pMVar12->max_length <= uVar13) goto code_?;
      *(undefined8 *)(&pMVar12->vector[0].index + uVar13 * 3) = uVar8;
      (&pMVar12->vector[0].actualWidth)[uVar13 * 3] = (float)pVVar9;
      iVar5 = iVar5 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::
      List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
      List_1_AnimatedTextureOffset_TextureOffsetAnimationData__AddWithResize
                ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,
                 (AnimatedTextureOffset_TextureOffsetAnimationData)VVar10,
                 pMVar7->klass->rgctx_data[0xe].method);
      iVar5 = iVar5 + 1;
    }
  }
  iVar5 = 0;
  while (iVar5 < (cubeCorners->fields)._size) {
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,
                         iVar5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar8 = *(undefined8 *)pVVar6;
    pVVar9 = pVVar6->asset;
    VVar10 = *pVVar6;
    if (this_00 == (MethodInfo *)0x0) goto code_?;
    this_00->klass = (Il2CppClass *)((int)&this_00->klass->image + 1);
    pMVar12 = ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___Fields
                *)&this_00->invoker_method)->_items;
    if (pMVar12 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    pcVar14 = this_00->name;
    if (pcVar14 < (char *)pMVar12->max_length) {
      this_00->name = pcVar14 + 1;
      if ((char *)pMVar12->max_length <= pcVar14) goto code_?;
      *(undefined8 *)(&pMVar12->vector[0].index + (int)pcVar14 * 3) = uVar8;
      (&pMVar12->vector[0].actualWidth)[(int)pcVar14 * 3] = (float)pVVar9;
      iVar5 = iVar5 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::
      List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
      List_1_AnimatedTextureOffset_TextureOffsetAnimationData__AddWithResize
                ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,
                 (AnimatedTextureOffset_TextureOffsetAnimationData)VVar10,
                 pMVar7->klass->rgctx_data[0xe].method);
      iVar5 = iVar5 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    puVar16 = (undefined8 *)&stack0x000000d8;
    direction = (Face__Enum)this;
    goto code_?;
  case Face__Enum_Front:
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    puVar16 = (undefined8 *)&stack0x000000d8;
    direction = (Face__Enum)this;
    goto code_?;
  case Face__Enum_Back:
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this_00 == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar17 = pVVar6->alias;
    uVar18 = pVVar6->path;
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_19 = pVVar6->asset;
    in_stack_20 = (VisualTreeAsset_UsingEntry *)uVar17;
    in_stack_21 = (MethodInfo *)uVar18;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_20 = (VisualTreeAsset_UsingEntry *)&stack0xffffffec;
    in_stack_19 = (VisualTreeAsset *)0x2;
    in_stack_21 = this_00;
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (in_stack_20,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 5;
    break;
  case Face__Enum_Left:
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this_00 == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar22 = pVVar6->alias;
    uVar23 = pVVar6->path;
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_19 = pVVar6->asset;
    in_stack_20 = (VisualTreeAsset_UsingEntry *)uVar22;
    in_stack_21 = (MethodInfo *)uVar23;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_20 = (VisualTreeAsset_UsingEntry *)&stack0xffffffec;
    in_stack_19 = (VisualTreeAsset *)0x1;
    in_stack_21 = this_00;
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (in_stack_20,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 6;
    break;
  case Face__Enum_Right:
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this_00 == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar24 = pVVar6->alias;
    uVar25 = pVVar6->path;
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_19 = pVVar6->asset;
    in_stack_20 = (VisualTreeAsset_UsingEntry *)uVar24;
    in_stack_21 = (MethodInfo *)uVar25;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_15 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_20 = (VisualTreeAsset_UsingEntry *)&stack0xffffffec;
    in_stack_19 = (VisualTreeAsset *)0x3;
    in_stack_21 = this_00;
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (in_stack_20,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 4;
  }
  pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
  puVar16 = (undefined8 *)&stack0x00000218;
  direction = (Face__Enum)this_00;
code_?:
  pVVar9 = pVVar6->asset;
  *puVar16 = *(undefined8 *)pVVar6;
  *(VisualTreeAsset **)(puVar16 + 1) = pVVar9;
  value.frameToChangeTextureAt = (float)in_stack_1;
  value.textureOffset = (float)in_stack_2;
  value._8_4_ = puVar3;
  mscorlib.dll::System::Collections::Generic::
  List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
  List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
            ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,in_stack_26,
             value,pMVar4);
  cubeCorners = (List_1_UnityEngine_Vector3_ *)this;
code_?:
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Cube_GetFromTopRotation((Quaternion *)&stack0xffffffc4,direction,(MethodInfo *)0x0);
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)0x0;
  if ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      cubeCorners !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    for (; (int)this <
           (((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)cubeCorners)->fields)._size;
        this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)((int)&this->klass + 1)) {
      pLVar27 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)cubeCorners;
      pLVar28 = this;
      pMVar4 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
      pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)&stack0xffffffec,
                           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,
                           (int32_t)this,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar29 = pVVar6->alias;
      rotation.y = (float)pLVar28;
      rotation.x = (float)pLVar27;
      rotation.z = (float)pMVar4;
      rotation.w = (float)uVar29;
      pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffe0,rotation,(Vector3)*pVVar6,(MethodInfo *)0x0)
      ;
      pAVar31 = (AnimatedTextureOffset_TextureOffsetAnimationData *)
                MathFunctions::MathFunctions_RoundVector
                          ((Vector3 *)&stack0xffffffd4,*pVVar30,3,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::
      List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
      List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)cubeCorners,
                 (int32_t)this,*pAVar31,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
    }
    return (List_1_UnityEngine_Vector3_ *)
           (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)cubeCorners;
  }
code_?:
  func_?();
code_?:
  iVar5 = func_?();
  bVar32 = (byte)this_00;
  *(byte *)(iVar5 + 0x10) = *(byte *)(iVar5 + 0x10) | bVar32;
  bVar33 = (byte)((uint)this_00 >> 8);
  *(char *)(extraout_ECX + 0x521057fc) =
       *(char *)(extraout_ECX + 0x521057fc) + (char)((uint)extraout_ECX >> 8) +
       CARRY1(bVar32,bVar33);
  piVar11 = &(this->fields)._version;
  *(char *)piVar11 = (char)*piVar11 + '\x01';
  piVar34 = (int *)(iVar5 + 0x10);
  *piVar34 = *piVar34 + CONCAT31((int3)((uint)this_00 >> 8),bVar32 + bVar33);
  if (extraout_ECX == 1 || *piVar34 == 0) {
    pcVar35 = (code *)swi(3);
    pLVar36 = (List_1_UnityEngine_Vector3_ *)(*pcVar35)();
    return pLVar36;
  }
  pcVar35 = (code *)swi(3);
  pLVar36 = (List_1_UnityEngine_Vector3_ *)(*pcVar35)();
  return pLVar36;
}


/* Byte[] CreateMaterialArray(Byte) */

Byte__Array *
Assembly-CSharp.dll::Cube::Cube_CreateMaterialArray(uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppBStack_1 = &TypeInfo__System__Byte;
    func_?();
    cRam_? = '\x01';
  }
  ppBStack_1 = (Byte__Array__Class **)0x6;
  pBStack_2 = TypeInfo__System__Byte;
  pBVar3 = (Byte__Array *)func_?();
  if (pBVar3 != (Byte__Array *)0x0) {
    if (pBVar3->max_length != 0) {
      pBVar3->vector[0] = material;
      if ((((1 < pBVar3->max_length) && (pBVar3->vector[1] = material, 2 < pBVar3->max_length)) &&
          (pBVar3->vector[2] = material, 3 < pBVar3->max_length)) &&
         ((pBVar3->vector[3] = material, 4 < pBVar3->max_length &&
          (pBVar3->vector[4] = material, 5 < pBVar3->max_length)))) {
        pBVar3->vector[5] = material;
        return pBVar3;
      }
    }
    ppBStack_1 = (Byte__Array__Class **)0x0;
    pBStack_2 = (Byte__Array__Class *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pBVar3 = (Byte__Array *)(*pcVar4)();
    return pBVar3;
  }
  ppBStack_1 = (Byte__Array__Class **)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar4)();
  return pBVar3;
}


/* Boolean FaceIsOutOfCubeBoundery(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_FaceIsOutOfCubeBoundery
               (Vector3__Array *faceVertices,MethodInfo *method)

{
  fVar1 = 0.0;
  if (faceVertices == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar2 = faceVertices->vector;
    while( true ) {
      if ((int)faceVertices->max_length <= (int)fVar1) {
        return 1;
      }
      pVStack_3 = pVVar2;
      if (faceVertices->max_length <= (uint)fVar1) break;
      index = (int32_t)pVVar2->x;
      method_00 = (MethodInfo *)pVVar2->y;
      pVVar4 = MathFunctions::MathFunctions_RoundVector(&VStack_5,*pVVar2,3,(MethodInfo *)0x0);
      fVar6 = pVVar4->y;
      fVar7 = pVVar4->z;
      if (faceVertices->max_length <= (uint)fVar1) break;
      pVVar2->x = pVVar4->x;
      pVVar2->y = fVar6;
      iVar8 = 0;
      pVVar2->z = fVar7;
      fVar7 = 0.0;
      do {
        VStack_5.z = 0.0;
        VStack_5.x = fVar1;
        VStack_5.y = fVar7;
        pVVar2 = (Vector3 *)func_?();
        fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (pVVar2,index,method_00);
        if (_UNK_? <= fStack_9) {
          method_00 = (MethodInfo *)&UNK_?;
          pVVar2 = (Vector3 *)func_?(fVar1,fVar7,0);
          fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar2,index,method_00);
          if (fStack_9 <= _UNK_?) {
            iVar8 = iVar8 + 1;
          }
        }
        fVar7 = (float)((int)fVar7 + 1);
      } while ((int)fVar7 < 3);
      if (iVar8 == 3) {
        return 0;
      }
      fVar1 = (float)((int)fVar1 + 1);
      pVVar2 = pVStack_3 + 1;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* FaceData[] GenerateCubeFaces(Cube, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell]) */

FaceData__Array *
Assembly-CSharp.dll::Cube::Cube_GenerateCubeFaces
          (Cube *cube,IntVector cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  iVar1 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
          _LightQualityLevel_k__BackingField;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0);
  if (iVar1 != 2) {
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__Cube);
    }
    pFVar2 = Cube_GenerateCubeFacesCheap(cube,cubePos,cells,(MethodInfo *)0x0);
    return pFVar2;
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?((short)TypeInfo__Cube);
  }
  if (cRam_? == '\0') {
    func_?(0xade0);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    func_?(0x8a58);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<FaceData>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?((short)TypeInfo__System__Collections__Generic__List<FaceData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<FaceData>__List__);
  face = Face__Enum_Top;
  do {
    if (cube == (Cube *)0x0) goto code_?;
    if (((cube->fields).hiddenSides & '\x01' << ((byte)face & 0x1f)) == 0) {
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cubePos_00.z = cubePos.z;
      cubePos_00.x = cubePos.x;
      cubePos_00.y = cubePos.y;
      cells = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
              Cube_GenerateFaceDataExpensive(face,cubePos_00,cells,(MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      cubePos._0_4_ = &UNK_?;
      in_stack_3 = (short)((uint)this >> 0x10);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)cells,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
      cubePos.z = (int16_t)this;
    }
    face = face + Face__Enum_Bottom;
  } while ((int)face < 6);
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    return (FaceData__Array *)pMVar4;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pFVar2 = (FaceData__Array *)(*pcVar5)();
  return pFVar2;
}


/* FaceData[] GenerateCubeFacesCheap(Cube, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell])
    */

FaceData__Array *
Assembly-CSharp.dll::Cube::Cube_GenerateCubeFacesCheap
          (Cube *cube,IntVector cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_0_int_);
    func_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_1_int_);
    func_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_2_int_);
    func_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_3_int_);
    func_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_4_int_);
    func_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_5_int_);
    func_?(&TypeInfo__Cube);
    func_?(0x6a54);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    func_?(0x89e0);
    func_?(&TypeInfo__System__Collections__Generic__List<FaceData>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<FaceData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<FaceData>__List__);
  if (cube != (Cube *)0x0) {
    if ((~(cube->fields).hiddenSides & 1) != 0) {
      pPVar1 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (pPVar1,(Object *)0x0,
                 MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_0_int_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Top,cubePos,cells,(Func_2_Int32_Boolean_ *)pPVar1,
                          (MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)pFVar2,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    }
    if ((~((cube->fields).hiddenSides >> 1) & 1) != 0) {
      pPVar1 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (pPVar1,(Object *)0x0,
                 MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_1_int_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?((short)TypeInfo__Cube);
      }
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Bottom,cubePos,cells,(Func_2_Int32_Boolean_ *)pPVar1,
                          (MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)pFVar2,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    }
    if ((~((cube->fields).hiddenSides >> 2) & 1) != 0) {
      pPVar1 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (pPVar1,(Object *)0x0,
                 MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_2_int_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?((short)TypeInfo__Cube);
      }
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Front,cubePos,cells,(Func_2_Int32_Boolean_ *)pPVar1,
                          (MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)pFVar2,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    }
    if ((~((cube->fields).hiddenSides >> 3) & 1) != 0) {
      pPVar1 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (pPVar1,(Object *)0x0,
                 MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_3_int_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?((short)TypeInfo__Cube);
      }
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Back,cubePos,cells,(Func_2_Int32_Boolean_ *)pPVar1,
                          (MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)pFVar2,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    }
    if ((~((cube->fields).hiddenSides >> 4) & 1) != 0) {
      pPVar1 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (pPVar1,(Object *)0x0,
                 MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_4_int_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?((short)TypeInfo__Cube);
      }
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Left,cubePos,cells,(Func_2_Int32_Boolean_ *)pPVar1,
                          (MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)pFVar2,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    }
    if ((~((cube->fields).hiddenSides >> 5) & 1) == 0) {
      if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
        pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                           (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__
                           );
        return (FaceData__Array *)pMVar3;
      }
    }
    else {
      pPVar1 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (pPVar1,(Object *)0x0,
                 MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_5_int_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Right,cubePos,cells,(Func_2_Int32_Boolean_ *)pPVar1,
                          (MethodInfo *)0x0);
      if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this,(Object *)pFVar2,
                   MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
        pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                           (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__
                           );
        return (FaceData__Array *)pMVar3;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pFVar5 = (FaceData__Array *)(*pcVar4)();
  return pFVar5;
}


/* FaceData[] GenerateCubeFacesExpensive(Cube, IntVector,
   Dictionary`2[MV.WorldObject.IntVector,Cell]) */

FaceData__Array *
Assembly-CSharp.dll::Cube::Cube_GenerateCubeFacesExpensive
          (Cube *cube,IntVector cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xade0);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<FaceData>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?((short)TypeInfo__System__Collections__Generic__List<FaceData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<FaceData>__List__);
  face = Face__Enum_Top;
  do {
    if (cube == (Cube *)0x0) goto code_?;
    if (((cube->fields).hiddenSides & '\x01' << ((byte)face & 0x1f)) == 0) {
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      cubePos_00.z = cubePos.z;
      cubePos_00.x = cubePos.x;
      cubePos_00.y = cubePos.y;
      item = Cube_GenerateFaceDataExpensive(face,cubePos_00,cells,(MethodInfo *)0x0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      cubePos._0_4_ = MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    }
    face = face + Face__Enum_Bottom;
  } while ((int)face < 6);
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    return (FaceData__Array *)pMVar1;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  pFVar3 = (FaceData__Array *)(*pcVar2)();
  return pFVar3;
}


/* FaceData GenerateFaceDataCheap(Face, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell],
   Func`2[Int32,Boolean]) */

FaceData *
Assembly-CSharp.dll::Cube::Cube_GenerateFaceDataCheap
          (Face__Enum face,IntVector cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          Func_2_Int32_Boolean_ *insideCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__FaceData);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pFVar1 = (FaceData *)func_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar1,(MethodInfo *)0x0);
  if (pFVar1 != (FaceData *)0x0) {
    (pFVar1->fields).face = face;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes;
    if (pIVar2 != (Int32__Array__Array *)0x0) {
      if (pIVar2->max_length <= face) goto code_?;
      pIVar3 = pIVar2->vector[face];
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      pVVar4 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                          (&VStack_5,&cubePos,(MethodInfo *)0x0);
      pVVar6 = (pFVar1->fields).faceVertices;
      uVar7._0_4_ = pVVar4->x;
      uVar7._4_4_ = pVVar4->y;
      fVar8 = pVVar4->z;
      uStack_9 = uVar7;
      fStack_10 = fVar8;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pIVar3 != (Int32__Array *)0x0) {
        if (pIVar3->max_length == 0) goto code_?;
        if (pVVar11 != (Vector3__Array *)0x0) {
          uVar12 = pIVar3->vector[0];
          if (pVVar11->max_length <= uVar12) goto code_?;
          uStack_13._0_4_ = pVVar11->vector[uVar12].x;
          uStack_13._4_4_ = pVVar11->vector[uVar12].y;
          fStack_14 = pVVar11->vector[uVar12].z;
          VStack_5.y = (float)uStack_13._4_4_ + uStack_9._4_4_;
          VStack_5.x = (float)(undefined4)uStack_13 + (float)uStack_9;
          VStack_5.z = fStack_14 + fStack_10;
          if (pVVar6 != (Vector3__Array *)0x0) {
            if (pVVar6->max_length == 0) goto code_?;
            pVVar6->vector[0].x = (float)(undefined4)uStack_13 + (float)uStack_9;
            pVVar6->vector[0].y = (float)uStack_13._4_4_ + uStack_9._4_4_;
            pVVar6->vector[0].z = VStack_5.z;
            pVVar6 = (pFVar1->fields).faceVertices;
            pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (pIVar3->max_length < 2) goto code_?;
            if (pVVar11 != (Vector3__Array *)0x0) {
              uVar12 = pIVar3->vector[1];
              if (pVVar11->max_length <= uVar12) goto code_?;
              VStack_5.x = pVVar11->vector[uVar12].x;
              VStack_5.y = pVVar11->vector[uVar12].y;
              VStack_5.z = pVVar11->vector[uVar12].z;
              uStack_9 = CONCAT44((float)uVar7._4_4_ + VStack_5.y,
                                   (float)(undefined4)uVar7 + VStack_5.x);
              fStack_10 = fVar8 + VStack_5.z;
              if (pVVar6 != (Vector3__Array *)0x0) {
                if (pVVar6->max_length < 2) goto code_?;
                pVVar6->vector[1].x = (float)(undefined4)uVar7 + VStack_5.x;
                pVVar6->vector[1].y = (float)uVar7._4_4_ + VStack_5.y;
                pVVar6->vector[1].z = fStack_10;
                pVVar6 = (pFVar1->fields).faceVertices;
                pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (pIVar3->max_length < 3) goto code_?;
                if (pVVar11 != (Vector3__Array *)0x0) {
                  uVar12 = pIVar3->vector[2];
                  if (pVVar11->max_length <= uVar12) goto code_?;
                  uVar15 = pVVar11->vector[uVar12].x;
                  uVar16 = pVVar11->vector[uVar12].y;
                  VStack_5.y = (float)uVar7._4_4_ + (float)uVar16;
                  VStack_5.x = (float)(undefined4)uVar7 + (float)uVar15;
                  VStack_5.z = fVar8 + pVVar11->vector[uVar12].z;
                  if (pVVar6 != (Vector3__Array *)0x0) {
                    if (pVVar6->max_length < 3) goto code_?;
                    pVVar6->vector[2].x = (float)(undefined4)uVar7 + (float)uVar15;
                    pVVar6->vector[2].y = (float)uVar7._4_4_ + (float)uVar16;
                    pVVar6->vector[2].z = VStack_5.z;
                    pVVar6 = (pFVar1->fields).faceVertices;
                    pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (pIVar3->max_length < 4) goto code_?;
                    if (pVVar11 != (Vector3__Array *)0x0) {
                      uVar12 = pIVar3->vector[3];
                      if (pVVar11->max_length <= uVar12) goto code_?;
                      uVar17 = pVVar11->vector[uVar12].x;
                      uVar18 = pVVar11->vector[uVar12].y;
                      VStack_5.z = fVar8 + pVVar11->vector[uVar12].z;
                      VStack_5.y = (float)uVar7._4_4_ + (float)uVar18;
                      VStack_5.x = (float)(undefined4)uVar7 + (float)uVar17;
                      if (pVVar6 != (Vector3__Array *)0x0) {
                        if (pVVar6->max_length < 4) goto code_?;
                        pVVar6->vector[3].x = (float)(undefined4)uVar7 + (float)uVar17;
                        pVVar6->vector[3].y = (float)uVar7._4_4_ + (float)uVar18;
                        pVVar6->vector[3].z = VStack_5.z;
                        pSStack_19 = (pFVar1->fields).lightValues;
                        fStack_20 = (float)cubePos._0_4_;
                        iStack_21 = cubePos.z;
                        if (pIVar3->max_length == 0) goto code_?;
                        if (insideCheck != (Func_2_Int32_Boolean_ *)0x0) {
                          bVar22 = (*(insideCheck->fields)._._.invoke_impl)
                                             ((insideCheck->fields)._._.method_code,
                                              pIVar3->vector[0],(insideCheck->fields)._._.method);
                          pSStack_23 = (Single__Array *)CONCAT31(pSStack_23._1_3_,bVar22);
                          cubePos_00.z = iStack_21;
                          cubePos_00._0_4_ = fStack_20;
                          fStack_20 = Cube_CalculateAOLightCheap
                                                (face,0,cells,cubePos_00,bVar22,(MethodInfo *)0x0);
                          if (pSStack_19 != (Single__Array *)0x0) {
                            if (pSStack_19->max_length == 0) goto code_?;
                            pSStack_19->vector[0] = fStack_20;
                            pSStack_23 = (pFVar1->fields).lightValues;
                            fStack_20 = (float)cubePos._0_4_;
                            iStack_21 = cubePos.z;
                            if (pIVar3->max_length < 2) goto code_?;
                            bVar22 = (*(insideCheck->fields)._._.invoke_impl)
                                               ((insideCheck->fields)._._.method_code,
                                                pIVar3->vector[1],(insideCheck->fields)._._.method);
                            pSStack_19 = (Single__Array *)CONCAT31(pSStack_19._1_3_,bVar22);
                            cubePos_01.z = iStack_21;
                            cubePos_01._0_4_ = fStack_20;
                            pSStack_19 = (Single__Array *)
                                         Cube_CalculateAOLightCheap
                                                   (face,1,cells,cubePos_01,bVar22,(MethodInfo *)0x0
                                                   );
                            if (pSStack_23 != (Single__Array *)0x0) {
                              if (pSStack_23->max_length < 2) goto code_?;
                              pSStack_23->vector[1] = (float)pSStack_19;
                              pSStack_23 = (pFVar1->fields).lightValues;
                              fStack_20 = (float)cubePos._0_4_;
                              iStack_21 = cubePos.z;
                              if (pIVar3->max_length < 3) goto code_?;
                              bVar22 = (*(insideCheck->fields)._._.invoke_impl)
                                                 ((insideCheck->fields)._._.method_code,
                                                  pIVar3->vector[2],(insideCheck->fields)._._.method
                                                 );
                              pSStack_19 = (Single__Array *)CONCAT31(pSStack_19._1_3_,bVar22);
                              cubePos_02.z = iStack_21;
                              cubePos_02._0_4_ = fStack_20;
                              pSStack_19 = (Single__Array *)
                                           Cube_CalculateAOLightCheap
                                                     (face,2,cells,cubePos_02,bVar22,
                                                      (MethodInfo *)0x0);
                              if (pSStack_23 != (Single__Array *)0x0) {
                                if (pSStack_23->max_length < 3) goto code_?;
                                pSStack_23->vector[2] = (float)pSStack_19;
                                pSStack_23 = (pFVar1->fields).lightValues;
                                fStack_20 = (float)cubePos._0_4_;
                                iStack_21 = cubePos.z;
                                if (pIVar3->max_length < 4) goto code_?;
                                bVar22 = (*(insideCheck->fields)._._.invoke_impl)
                                                   ((insideCheck->fields)._._.method_code,
                                                    pIVar3->vector[3],
                                                    (insideCheck->fields)._._.method);
                                pSStack_19 = (Single__Array *)CONCAT31(pSStack_19._1_3_,bVar22);
                                cubePos_03.z = iStack_21;
                                cubePos_03._0_4_ = fStack_20;
                                fVar8 = Cube_CalculateAOLightCheap
                                                   (face,3,cells,cubePos_03,bVar22,(MethodInfo *)0x0
                                                   );
                                if (pSStack_23 != (Single__Array *)0x0) {
                                  if (3 < pSStack_23->max_length) {
                                    pSStack_23->vector[3] = fVar8;
                                    return pFVar1;
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
  pcVar24 = (code *)swi(3);
  pFVar1 = (FaceData *)(*pcVar24)();
  return pFVar1;
}


/* FaceData GenerateFaceDataExpensive(Face, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell])
    */

FaceData *
Assembly-CSharp.dll::Cube::Cube_GenerateFaceDataExpensive
          (Face__Enum face,IntVector cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__FaceData);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pFVar1 = (FaceData *)func_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar1,(MethodInfo *)0x0);
  if (pFVar1 != (FaceData *)0x0) {
    (pFVar1->fields).face = face;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes;
    if (pIVar2 != (Int32__Array__Array *)0x0) {
      if (pIVar2->max_length <= face) goto code_?;
      cornerIndexToVertex = pIVar2->vector[face];
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar3 = Cube_GetNormals(TypeInfo__Cube->static_fields->cornersBookkeeping,face,
                                (MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      pVVar4 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                          (&VStack_5,&cubePos,(MethodInfo *)0x0);
      pVVar6 = (pFVar1->fields).faceVertices;
      uVar7._0_4_ = pVVar4->x;
      uVar7._4_4_ = pVVar4->y;
      fVar8 = pVVar4->z;
      pVVar9 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      uStack_10 = uVar7;
      fStack_11 = fVar8;
      if (cornerIndexToVertex != (Int32__Array *)0x0) {
        if (cornerIndexToVertex->max_length == 0) goto code_?;
        if (pVVar9 != (Vector3__Array *)0x0) {
          uVar12 = cornerIndexToVertex->vector[0];
          if (pVVar9->max_length <= uVar12) goto code_?;
          uStack_13._0_4_ = pVVar9->vector[uVar12].x;
          uStack_13._4_4_ = pVVar9->vector[uVar12].y;
          fStack_14 = pVVar9->vector[uVar12].z;
          VStack_5.y = (float)uStack_13._4_4_ + (float)uVar7._4_4_;
          VStack_5.x = (float)(undefined4)uStack_13 + (float)(undefined4)uVar7;
          VStack_5.z = fStack_14 + fVar8;
          if (pVVar6 != (Vector3__Array *)0x0) {
            if (pVVar6->max_length == 0) goto code_?;
            pVVar6->vector[0].x = (float)(undefined4)uStack_13 + (float)(undefined4)uVar7;
            pVVar6->vector[0].y = (float)uStack_13._4_4_ + (float)uVar7._4_4_;
            pVVar6->vector[0].z = VStack_5.z;
            pVVar6 = (pFVar1->fields).faceVertices;
            pVVar9 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (cornerIndexToVertex->max_length < 2) goto code_?;
            if (pVVar9 != (Vector3__Array *)0x0) {
              uVar12 = cornerIndexToVertex->vector[1];
              if (pVVar9->max_length <= uVar12) goto code_?;
              VStack_5.x = pVVar9->vector[uVar12].x;
              VStack_5.y = pVVar9->vector[uVar12].y;
              VStack_5.z = pVVar9->vector[uVar12].z;
              uStack_10 = CONCAT44((float)uVar7._4_4_ + VStack_5.y,
                                   (float)(undefined4)uVar7 + VStack_5.x);
              fStack_11 = fVar8 + VStack_5.z;
              if (pVVar6 != (Vector3__Array *)0x0) {
                if (pVVar6->max_length < 2) goto code_?;
                pVVar6->vector[1].x = (float)(undefined4)uVar7 + VStack_5.x;
                pVVar6->vector[1].y = (float)uVar7._4_4_ + VStack_5.y;
                pVVar6->vector[1].z = fStack_11;
                pVVar6 = (pFVar1->fields).faceVertices;
                pVVar9 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (cornerIndexToVertex->max_length < 3) goto code_?;
                if (pVVar9 != (Vector3__Array *)0x0) {
                  uVar12 = cornerIndexToVertex->vector[2];
                  if (pVVar9->max_length <= uVar12) goto code_?;
                  uVar15 = pVVar9->vector[uVar12].x;
                  uVar16 = pVVar9->vector[uVar12].y;
                  VStack_5.y = (float)uVar7._4_4_ + (float)uVar16;
                  VStack_5.x = (float)(undefined4)uVar7 + (float)uVar15;
                  VStack_5.z = fVar8 + pVVar9->vector[uVar12].z;
                  if (pVVar6 != (Vector3__Array *)0x0) {
                    if (pVVar6->max_length < 3) goto code_?;
                    pVVar6->vector[2].x = (float)(undefined4)uVar7 + (float)uVar15;
                    pVVar6->vector[2].y = (float)uVar7._4_4_ + (float)uVar16;
                    pVVar6->vector[2].z = VStack_5.z;
                    pVVar6 = (pFVar1->fields).faceVertices;
                    pVVar9 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (cornerIndexToVertex->max_length < 4) goto code_?;
                    if (pVVar9 != (Vector3__Array *)0x0) {
                      uVar12 = cornerIndexToVertex->vector[3];
                      if (pVVar9->max_length <= uVar12) goto code_?;
                      uVar17 = pVVar9->vector[uVar12].x;
                      uVar18 = pVVar9->vector[uVar12].y;
                      VStack_5.z = fVar8 + pVVar9->vector[uVar12].z;
                      VStack_5.y = (float)uVar7._4_4_ + (float)uVar18;
                      VStack_5.x = (float)(undefined4)uVar7 + (float)uVar17;
                      if (pVVar6 != (Vector3__Array *)0x0) {
                        if (pVVar6->max_length < 4) goto code_?;
                        pVVar6->vector[3].x = (float)(undefined4)uVar7 + (float)uVar17;
                        pVVar6->vector[3].y = (float)uVar7._4_4_ + (float)uVar18;
                        pVVar6->vector[3].z = VStack_5.z;
                        pSStack_19 = (pFVar1->fields).lightValues;
                        if (pVVar3 != (Vector3__Array *)0x0) {
                          if (pVVar3->max_length == 0) goto code_?;
                          cubePos_00.z = cubePos.z;
                          cubePos_00.x = cubePos.x;
                          cubePos_00.y = cubePos.y;
                          pSStack_20 = (Single__Array *)
                                      Cube_CalculateAOLightExpensive
                                                (face,0,cells,cubePos_00,cornerIndexToVertex,
                                                 pVVar3->vector[0],(MethodInfo *)0x0);
                          if (pSStack_19 != (Single__Array *)0x0) {
                            if (pSStack_19->max_length == 0) goto code_?;
                            pSStack_19->vector[0] = (float)pSStack_20;
                            pSStack_20 = (pFVar1->fields).lightValues;
                            if (pVVar3->max_length < 2) goto code_?;
                            cubePos_01.z = cubePos.z;
                            cubePos_01.x = cubePos.x;
                            cubePos_01.y = cubePos.y;
                            pSStack_19 = (Single__Array *)
                                        Cube_CalculateAOLightExpensive
                                                  (face,1,cells,cubePos_01,cornerIndexToVertex,
                                                   pVVar3->vector[1],(MethodInfo *)0x0);
                            if (pSStack_20 != (Single__Array *)0x0) {
                              if (pSStack_20->max_length < 2) goto code_?;
                              pSStack_20->vector[1] = (float)pSStack_19;
                              pSStack_20 = (pFVar1->fields).lightValues;
                              if (pVVar3->max_length < 3) goto code_?;
                              cubePos_02.z = cubePos.z;
                              cubePos_02.x = cubePos.x;
                              cubePos_02.y = cubePos.y;
                              pSStack_19 = (Single__Array *)
                                          Cube_CalculateAOLightExpensive
                                                    (face,2,cells,cubePos_02,cornerIndexToVertex,
                                                     pVVar3->vector[2],(MethodInfo *)0x0);
                              if (pSStack_20 != (Single__Array *)0x0) {
                                if (pSStack_20->max_length < 3) goto code_?;
                                pSStack_20->vector[2] = (float)pSStack_19;
                                pSStack_20 = (pFVar1->fields).lightValues;
                                if (pVVar3->max_length < 4) goto code_?;
                                cubePos_03.z = cubePos.z;
                                cubePos_03.x = cubePos.x;
                                cubePos_03.y = cubePos.y;
                                fVar8 = Cube_CalculateAOLightExpensive
                                                   (face,3,cells,cubePos_03,cornerIndexToVertex,
                                                    pVVar3->vector[3],(MethodInfo *)0x0);
                                if (pSStack_20 != (Single__Array *)0x0) {
                                  if (pSStack_20->max_length < 4) goto code_?;
                                  pSStack_20->vector[3] = fVar8;
                                  pSVar21 = (pFVar1->fields).lightValues;
                                  fVar8 = Cube_CalculateAOBleed(pFVar1,0,(MethodInfo *)0x0);
                                  if (pSVar21 != (Single__Array *)0x0) {
                                    if (pSVar21->max_length == 0) goto code_?;
                                    pSVar21->vector[0] = fVar8;
                                    pSVar21 = (pFVar1->fields).lightValues;
                                    fVar8 = Cube_CalculateAOBleed(pFVar1,1,(MethodInfo *)0x0);
                                    if (pSVar21 != (Single__Array *)0x0) {
                                      if (pSVar21->max_length < 2) goto code_?;
                                      pSVar21->vector[1] = fVar8;
                                      pSVar21 = (pFVar1->fields).lightValues;
                                      fVar8 = Cube_CalculateAOBleed(pFVar1,2,(MethodInfo *)0x0);
                                      if (pSVar21 != (Single__Array *)0x0) {
                                        if (pSVar21->max_length < 3) goto code_?;
                                        pSVar21->vector[2] = fVar8;
                                        pSVar21 = (pFVar1->fields).lightValues;
                                        fVar8 = Cube_CalculateAOBleed(pFVar1,3,(MethodInfo *)0x0);
                                        if (pSVar21 != (Single__Array *)0x0) {
                                          if (3 < pSVar21->max_length) {
                                            pSVar21->vector[3] = fVar8;
                                            return pFVar1;
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
  pcVar22 = (code *)swi(3);
  pFVar1 = (FaceData *)(*pcVar22)();
  return pFVar1;
}


/* Vector3[] GetCorners(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetCorners(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)Cube_GetCorners_2(pVVar1,face,(MethodInfo *)0x0);
    if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
      pMVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                         );
      return (Vector3__Array *)pMVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar3)();
  return pVVar1;
}


/* List`1[UnityEngine.Vector3] GetCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_1
          (List_1_UnityEngine_Vector2_ *clockwiseCorners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (clockwiseCorners != (List_1_UnityEngine_Vector2_ *)0x0) {
    VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (clockwiseCorners,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (clockwiseCorners,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      func_?(pLVar1,VVar2.x - _UNK_?,0x3f000000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack0000001c = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack3 = pLVar1;
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000034 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack4 = pLVar1;
      func_?();
      _uStack0000001c = CONCAT44(&UNK_?,uStack5);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack0000001c = CONCAT44(&UNK_?,uStack5);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack0000004c = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack6 = pLVar1;
      func_?();
      _uStack00000034 = CONCAT44(&UNK_?,uStack7);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000034 = CONCAT44(&UNK_?,uStack7);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000064 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack8 = pLVar1;
      func_?();
      _uStack0000004c = CONCAT44(&UNK_?,uStack9);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack0000004c = CONCAT44(&UNK_?,uStack9);
      VVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack11 = VVar10.y - _UNK_?;
      pMStack12 =
           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uStack13 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack14 = pLVar1;
      func_?();
      _uStack00000064 = CONCAT44(&UNK_?,uStack15);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000064 = CONCAT44(&UNK_?,uStack15);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      pLStack16 = pLVar1;
      func_?();
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar1 = Cube_CreateCubeCornersFromTopFace(pLVar1,0xADDR,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?(unaff_EBP);
  pcVar17 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar17)();
  return pLVar1;
}


/* List`1[UnityEngine.Vector3] GetCorners(Vector3[], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_2
          (Vector3__Array *counterClockwiseFace,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pQVar1 = Cube_GetToTopRotation(&QStack_2,direction,(MethodInfo *)0x0);
  uVar3 = 0;
  QStack_2.x = pQVar1->x;
  QStack_2.y = pQVar1->y;
  QStack_2.z = pQVar1->z;
  QStack_2.w = pQVar1->w;
  if (counterClockwiseFace != (Vector3__Array *)0x0) {
    pVVar4 = counterClockwiseFace->vector;
    for (; (int)uVar3 < (int)counterClockwiseFace->max_length; uVar3 = uVar3 + 1) {
      if (counterClockwiseFace->max_length <= uVar3) goto code_?;
      rotation.y = QStack_2.y;
      rotation.x = QStack_2.x;
      rotation.z = QStack_2.z;
      rotation.w = QStack_2.w;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_6,rotation,*pVVar4,(MethodInfo *)0x0);
      fVar7 = pVVar5->y;
      fVar8 = pVVar5->z;
      if (counterClockwiseFace->max_length <= uVar3) goto code_?;
      pVVar4->x = pVVar5->x;
      pVVar4->y = fVar7;
      pVVar4->z = fVar8;
      if (counterClockwiseFace->max_length <= uVar3) goto code_?;
      fStack_9 = pVVar4->z;
      fVar8 = pVVar4->x;
      pVVar4->x = (float)(int)(ulonglong)(uint)fVar8;
      pVVar4->y = (float)(int)((ulonglong)(uint)fVar8 >> 0x20);
      pVVar4->z = fStack_9;
      pVVar4 = pVVar4 + 1;
    }
    pLVar10 = (List_1_UnityEngine_Vector3_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    if (counterClockwiseFace->max_length == 0) goto code_?;
    fStack_11 = counterClockwiseFace->vector[0].x;
    fStack_9 = counterClockwiseFace->vector[0].z;
    uStack_12 = 0x3f000000;
    if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
      func_?(pLVar10,fStack_11,0x3f000000,fStack_9,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      if (1 < counterClockwiseFace->max_length) {
        fStack_9 = counterClockwiseFace->vector[1].z;
        func_?(pLVar10,counterClockwiseFace->vector[1].x,_UNK_?,fStack_9,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        if (2 < counterClockwiseFace->max_length) {
          fStack_9 = counterClockwiseFace->vector[2].z;
          func_?(pLVar10,counterClockwiseFace->vector[2].x,_UNK_?,fStack_9,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
          if (3 < counterClockwiseFace->max_length) {
            fStack_9 = counterClockwiseFace->vector[3].z;
            func_?(pLVar10,counterClockwiseFace->vector[3].x,_UNK_?,fStack_9,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                           );
            if (3 < counterClockwiseFace->max_length) {
              fStack_9 = counterClockwiseFace->vector[3].z;
              func_?(pLVar10,counterClockwiseFace->vector[3].x,_UNK_?,fStack_9,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                             );
              if (2 < counterClockwiseFace->max_length) {
                fStack_9 = counterClockwiseFace->vector[2].z;
                func_?(pLVar10,counterClockwiseFace->vector[2].x,_UNK_?,fStack_9,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                               );
                if (1 < counterClockwiseFace->max_length) {
                  fStack_9 = counterClockwiseFace->vector[1].z;
                  func_?(pLVar10,counterClockwiseFace->vector[1].x,_UNK_?,fStack_9,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                 );
                  if (counterClockwiseFace->max_length != 0) {
                    fStack_9 = counterClockwiseFace->vector[0].z;
                    func_?(pLVar10,counterClockwiseFace->vector[0].x,_UNK_?,fStack_9,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Cube);
                    }
                    pLVar10 = Cube_CreateCubeCornersFromTopFace(pLVar10,direction,(MethodInfo *)0x0);
                    return pLVar10;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar13)();
  return pLVar10;
}


/* IntVector GetCubePosAboveFace(IntVector, Face) */

IntVector Assembly-CSharp.dll::Cube::Cube_GetCubePosAboveFace
                    (IntVector localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  *(undefined4 *)localPos._0_4_ = 0;
  *(undefined2 *)(localPos._0_4_ + 4) = 0;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)localPos._0_4_,CONCAT22(in_stack_1,localPos.z),
             CONCAT22((undefined2)face,in_stack_1),face,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar2 = Cube_GetFaceAxis((Vector3 *)&puStack_3,(Face__Enum)method,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  *(short *)localPos._0_4_ = *(short *)localPos._0_4_ + (short)(int)(float)uVar4;
  *(short *)(localPos._0_4_ + 2) = *(short *)(localPos._0_4_ + 2) + (short)(int)(float)uVar5;
  *(short *)(localPos._0_4_ + 4) = *(short *)(localPos._0_4_ + 4) + (short)(int)fVar6;
  IVar7.z = extraout_DX;
  IVar7.x = localPos.x;
  IVar7.y = localPos.y;
  return IVar7;
}


/* Vector3 GetDefaultNormal(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetDefaultNormal
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  switch(face) {
  case Face__Enum_Top:
    uVar1 = (ulonglong)_UNK_?;
    __return_storage_ptr__->x = (float)(int)(uVar1 << 0x20);
    __return_storage_ptr__->y = (float)(int)((uVar1 << 0x20) >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    uVar1 = (ulonglong)_UNK_?;
    __return_storage_ptr__->x = (float)(int)(uVar1 << 0x20);
    __return_storage_ptr__->y = (float)(int)((uVar1 << 0x20) >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  case Face__Enum_Front:
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = -1.0;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = 1.0;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    uVar1 = (ulonglong)_UNK_?;
    __return_storage_ptr__->x = (float)(int)uVar1;
    __return_storage_ptr__->y = (float)(int)(uVar1 >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  case Face__Enum_Right:
    uVar1 = (ulonglong)_UNK_?;
    __return_storage_ptr__->x = (float)(int)uVar1;
    __return_storage_ptr__->y = (float)(int)(uVar1 >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  default:
    uVar2 = func_?(&TypeInfo__System__NotImplementedException);
    this = (NotImplementedException *)func_?(uVar2);
    mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
              (this,(MethodInfo *)0x0);
    uVar2 = func_?(&MethodInfo__Cube__GetDefaultNormal_MV__WorldObject__Face_);
    func_?(this,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


/* Vector3[] GetEdge(Cube, Face, Edge) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdge
          (Cube *cube,Face__Enum face,Edge__Enum edge,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3);
    switch(edge) {
    case Edge__Enum_Front:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length == 0) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
          fVar3 = pVVar1->vector[0].y;
          fVar4 = pVVar1->vector[0].z;
          if (pVVar2->max_length == 0) goto code_?;
          pVVar2->vector[0].x = pVVar1->vector[0].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = fVar4;
          if (pVVar1->max_length < 2) goto code_?;
          uVar5._0_4_ = pVVar1->vector[1].x;
          uVar5._4_4_ = pVVar1->vector[1].y;
          fVar4 = pVVar1->vector[1].z;
code_?:
          if (1 < pVVar2->max_length) {
            pVVar2->vector[1].x = (float)(int)uVar5;
            pVVar2->vector[1].y = (float)(int)((ulonglong)uVar5 >> 0x20);
            pVVar2->vector[1].z = fVar4;
code_?:
            return pVVar2;
          }
          goto code_?;
        }
      }
      break;
    case Edge__Enum_Back:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 3) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
          fVar3 = pVVar1->vector[2].y;
          fVar4 = pVVar1->vector[2].z;
          if (pVVar2->max_length == 0) goto code_?;
          pVVar2->vector[0].x = pVVar1->vector[2].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = fVar4;
          if (pVVar1->max_length < 4) goto code_?;
          uVar5._0_4_ = pVVar1->vector[3].x;
          uVar5._4_4_ = pVVar1->vector[3].y;
          fVar4 = pVVar1->vector[3].z;
          goto code_?;
        }
      }
      break;
    case Edge__Enum_Left:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 4) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
          fVar3 = pVVar1->vector[3].y;
          fVar4 = pVVar1->vector[3].z;
          if (pVVar2->max_length == 0) goto code_?;
          pVVar2->vector[0].x = pVVar1->vector[3].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = fVar4;
          if (pVVar1->max_length == 0) goto code_?;
          uVar5._0_4_ = pVVar1->vector[0].x;
          uVar5._4_4_ = pVVar1->vector[0].y;
          fVar4 = pVVar1->vector[0].z;
          goto code_?;
        }
      }
      break;
    case Edge__Enum_Right:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 2) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
          fVar3 = pVVar1->vector[1].y;
          fVar4 = pVVar1->vector[1].z;
          if (pVVar2->max_length == 0) goto code_?;
          pVVar2->vector[0].x = pVVar1->vector[1].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = fVar4;
          if (pVVar1->max_length < 3) goto code_?;
          uVar5._0_4_ = pVVar1->vector[2].x;
          uVar5._4_4_ = pVVar1->vector[2].y;
          fVar4 = pVVar1->vector[2].z;
          goto code_?;
        }
      }
      break;
    default:
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar6)();
  return pVVar1;
}


/* Vector3[] GetEdgeVerticesWorld(GameObject, Cube, Face, Edge, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdgeVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,Edge__Enum edge,IntVector iVector,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_GetEdge(cube,face,edge,(MethodInfo *)0x0);
  if (gameObject != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length == 0) goto code_?;
      uVar3 = pVVar1->vector[0].x;
      uVar4 = pVVar1->vector[0].y;
      if (pTVar2 != (Transform *)0x0) {
        position_00.y = (float)uVar4 + (float)(int)iVector.y;
        position_00.x = (float)uVar3 + (float)(int)iVector.x;
        position_00.z = pVVar1->vector[0].z + (float)(int)iVector.z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                            ((Vector3 *)&stack0xffffffe4,pTVar2,position_00,(MethodInfo *)0x0);
        fVar6 = pVVar5->y;
        fVar7 = pVVar5->z;
        if (pVVar1->max_length == 0) goto code_?;
        pVVar1->vector[0].x = pVVar5->x;
        pVVar1->vector[0].y = fVar6;
        pVVar1->vector[0].z = fVar7;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)0x0,(MethodInfo *)0x0);
        if (pVVar1->max_length < 2) goto code_?;
        uVar8 = pVVar1->vector[1].x;
        uVar9 = pVVar1->vector[1].y;
        if (pTVar2 != (Transform *)0x0) {
          position.y = (float)uVar9 + (float)(int)iVector.y;
          position.x = (float)uVar8 + (float)(int)iVector.x;
          position.z = pVVar1->vector[1].z + (float)(int)iVector.z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                              ((Vector3 *)&stack0xffffffe4,pTVar2,position,(MethodInfo *)0x0);
          fVar6 = pVVar5->y;
          fVar7 = pVVar5->z;
          if (1 < pVVar1->max_length) {
            pVVar1->vector[1].x = pVVar5->x;
            pVVar1->vector[1].y = fVar6;
            pVVar1->vector[1].z = fVar7;
            return pVVar1;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar10)();
  return pVVar1;
}


/* Edge GetEdge(GameObject, Cube, Face, Vector3, IntVector) */

Edge__Enum
Assembly-CSharp.dll::Cube::Cube_GetEdge_1
          (GameObject *gameObject,Cube *cube,Face__Enum face,Vector3 pos,IntVector iVector,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff68;
  puVar5 = &stack0xffffff68;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeRef__Edge);
    func_?(&TypeInfo__Edge);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  handle = TypeRef__Edge;
  fStack_6 = 0.0;
  fStack_7 = _UNK_?;
  EStack_8 = Edge__Enum_None;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIStack_9 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIStack_9 != (IEnumerator *)0x0) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        uStack_1 = 0xffffffff;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return EStack_8;
        }
        *unaff_FS_OFFSET = uStack_3;
        return EStack_8;
      }
      if (pIStack_9 == (IEnumerator *)0x0) break;
      pIVar12 = pIStack_9->klass;
      uVar13 = 0;
      uVar14._0_1_ = (pIVar12->_1).rank;
      uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
      if (uVar14 != 0) {
        do {
          if (pIVar12->interfaceOffsets[uVar13].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar15 = &(&(pIStack_9->klass->vtable).get_Current)
                        [pIVar12->interfaceOffsets[uVar13].offset].method;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
      }
      ppMVar15 = (MethodInfo **)func_?();
code_?:
      piVar16 = (int *)(*(code *)*ppMVar15)();
      if (piVar16 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar16 + 0x20) != (TypeInfo__Edge->_0).element_class)
      goto code_?;
      pEVar17 = (Edge__Enum *)func_?();
      EVar18 = *pEVar17;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Cube);
        cRam_? = '\x01';
      }
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar19 = Cube_GetEdge(cube,face,EVar18,(MethodInfo *)0x0);
      if (gameObject == (GameObject *)0x0) break;
      pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (pVVar19 == (Vector3__Array *)0x0) break;
      if (pVVar19->max_length == 0) {
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
        break;
      }
      uVar21 = pVVar19->vector[0].x;
      uVar22 = pVVar19->vector[0].y;
      if (pTVar20 == (Transform *)0x0) break;
      position.y = (float)(int)iVector.y + (float)uVar22;
      position.x = (float)(int)iVector.x + (float)uVar21;
      position.z = (float)(int)iVector.z + pVVar19->vector[0].z;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                          ((Vector3 *)&stack0xffffff80,pTVar20,position,(MethodInfo *)0x0);
      fVar24 = pVVar23->y;
      fVar25 = pVVar23->z;
      if (pVVar19->max_length == 0) goto code_?;
      pVVar19->vector[0].x = pVVar23->x;
      pVVar19->vector[0].y = fVar24;
      pVVar19->vector[0].z = fVar25;
      pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (pVVar19->max_length < 2) goto code_?;
      uVar26 = pVVar19->vector[1].x;
      uVar27 = pVVar19->vector[1].y;
      if (pTVar20 == (Transform *)0x0) break;
      position_00.y = (float)(int)iVector.y + (float)uVar27;
      position_00.x = (float)(int)iVector.x + (float)uVar26;
      position_00.z = (float)(int)iVector.z + pVVar19->vector[1].z;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                          ((Vector3 *)&stack0xffffff74,pTVar20,position_00,(MethodInfo *)0x0);
      fVar24 = pVVar23->y;
      fVar25 = pVVar23->z;
      if (pVVar19->max_length < 2) goto code_?;
      pVVar19->vector[1].x = pVVar23->x;
      pVVar19->vector[1].y = fVar24;
      pVVar19->vector[1].z = fVar25;
      fStack_6 = 1000.0;
      if (pVVar19->max_length == 0) goto code_?;
      if (pVVar19->max_length < 2) goto code_?;
      MathFunctions::MathFunctions_DistancePointLine
                (pos,pVVar19->vector[0],pVVar19->vector[1],&fStack_6,(MethodInfo *)0x0);
      if (fStack_6 < fStack_7) {
        fStack_7 = fStack_6;
        EStack_8 = EVar18;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  EVar18 = (*pcVar28)();
  return EVar18;
}


/* Face GetFace(Vector3[], Vector3[]) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFace
          (Vector3__Array *corners,Vector3__Array *triangleVertices,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__WorldObject__Face;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIVar4 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIVar4 != (IEnumerator *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return Face__Enum_Top;
      }
      if (pIVar4 == (IEnumerator *)0x0) break;
      piVar7 = (int *)func_?();
      if (piVar7 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar7 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      pFVar8 = (Face__Enum *)func_?();
      iStack_9 = 0;
      FVar10 = *pFVar8;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar11 = Cube_GetFace_1(corners,FVar10,(MethodInfo *)0x0);
      iVar6 = 0;
code_?:
      if (triangleVertices == (Vector3__Array *)0x0) break;
      if (iVar6 < (int)triangleVertices->max_length) {
        func_?();
        iVar12 = 0;
        while( true ) {
          if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
          if ((int)pVVar11->max_length <= iVar12) {
            iVar6 = iVar6 + 1;
            goto code_?;
          }
          func_?();
          fVar13 = (float10)func_?();
          if ((double)(float)fVar13 < _UNK_?) break;
          iVar12 = iVar12 + 1;
        }
        iStack_9 = iStack_9 + 1;
        iVar6 = iVar6 + 1;
        goto code_?;
      }
      if (iStack_9 == 3) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return FVar10;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  FVar10 = (*pcVar14)();
  return FVar10;
}


/* Vector3 GetFaceAxis(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetFaceAxis
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    break;
  case Face__Enum_Front:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Right:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).y;
    fVar4 = (pVVar5->zeroVector).z;
    __return_storage_ptr__->x = (pVVar5->zeroVector).x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (pVVar5->downVector).y;
  fVar4 = (pVVar5->downVector).z;
  __return_storage_ptr__->x = (pVVar5->downVector).x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Face GetFaceIdentityFromLocalDir(Vector3) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFaceIdentityFromLocalDir(Vector3 localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_no_face_found);
    cRam_? = '\x01';
  }
  pVVar1 = MathFunctions::MathFunctions_AbsVector(&VStack_2,localDir,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (((float)uVar4 <= (float)uVar3) && (fVar5 <= (float)uVar3)) {
    return (0.0 <= localDir.x) + Face__Enum_Left;
  }
  if (((float)uVar3 <= (float)uVar4) && (fVar5 <= (float)uVar4)) {
    return (uint)(localDir.y < 0.0);
  }
  if (((float)uVar3 <= fVar5) && ((float)uVar4 <= fVar5)) {
    return (0.0 <= localDir.z) + Face__Enum_Front;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VStack_2.z = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_no_face_found,(MethodInfo *)0x0);
  return Face__Enum_Front;
}


/* Vector3[] GetFaceVerticesWorld(GameObject, Cube, Face, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFaceVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  iVar1 = (int)iVector.x;
  iVar2 = (int)iVector.y;
  iVar3 = (int)iVector.z;
  if (cube != (Cube *)0x0) {
    pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar4 = Cube_GetFace_1(pVVar4,face,(MethodInfo *)0x0);
    if (gameObject != (GameObject *)0x0) {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pVVar4 != (Vector3__Array *)0x0) {
        if (pVVar4->max_length == 0) goto code_?;
        uStack_6._0_4_ = pVVar4->vector[0].x;
        uStack_6._4_4_ = pVVar4->vector[0].y;
        fStack_7 = pVVar4->vector[0].z;
        VStack_8.y = (float)uStack_6._4_4_ + (float)iVar2;
        VStack_8.x = (float)(undefined4)uStack_6 + (float)iVar1;
        VStack_8.z = fStack_7 + (float)iVar3;
        if (pTVar5 != (Transform *)0x0) {
          position.y = (float)uStack_6._4_4_ + (float)iVar2;
          position.x = (float)(undefined4)uStack_6 + (float)iVar1;
          position.z = VStack_8.z;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                             (&VStack_8,pTVar5,position,(MethodInfo *)0x0);
          fVar10 = pVVar9->y;
          fVar11 = pVVar9->z;
          if (pVVar4->max_length == 0) goto code_?;
          pVVar4->vector[0].x = pVVar9->x;
          pVVar4->vector[0].y = fVar10;
          pVVar4->vector[0].z = fVar11;
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (gameObject,(MethodInfo *)0x0);
          if (pVVar4->max_length < 2) goto code_?;
          VStack_8.x = pVVar4->vector[1].x;
          VStack_8.y = pVVar4->vector[1].y;
          VStack_8.z = pVVar4->vector[1].z;
          uStack_6 = CONCAT44(VStack_8.y + (float)iVar2,VStack_8.x + (float)iVar1);
          fStack_7 = VStack_8.z + (float)iVar3;
          if (pTVar5 != (Transform *)0x0) {
            position_00.y = VStack_8.y + (float)iVar2;
            position_00.x = VStack_8.x + (float)iVar1;
            position_00.z = fStack_7;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                               (&VStack_8,pTVar5,position_00,(MethodInfo *)0x0);
            fVar10 = pVVar9->y;
            fVar11 = pVVar9->z;
            if (pVVar4->max_length < 2) goto code_?;
            pVVar4->vector[1].x = pVVar9->x;
            pVVar4->vector[1].y = fVar10;
            pVVar4->vector[1].z = fVar11;
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (gameObject,(MethodInfo *)0x0);
            if (pVVar4->max_length < 3) goto code_?;
            VStack_8.x = pVVar4->vector[2].x;
            VStack_8.y = pVVar4->vector[2].y;
            VStack_8.z = pVVar4->vector[2].z;
            uStack_6 = CONCAT44(VStack_8.y + (float)iVar2,VStack_8.x + (float)iVar1);
            fStack_7 = VStack_8.z + (float)iVar3;
            if (pTVar5 != (Transform *)0x0) {
              position_01.y = VStack_8.y + (float)iVar2;
              position_01.x = VStack_8.x + (float)iVar1;
              position_01.z = fStack_7;
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                 (&VStack_8,pTVar5,position_01,(MethodInfo *)0x0);
              fVar10 = pVVar9->y;
              fVar11 = pVVar9->z;
              if (pVVar4->max_length < 3) goto code_?;
              pVVar4->vector[2].x = pVVar9->x;
              pVVar4->vector[2].y = fVar10;
              pVVar4->vector[2].z = fVar11;
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (gameObject,(MethodInfo *)0x0);
              if (pVVar4->max_length < 4) goto code_?;
              VStack_8.x = pVVar4->vector[3].x;
              VStack_8.y = pVVar4->vector[3].y;
              VStack_8.z = pVVar4->vector[3].z;
              uStack_6 = CONCAT44(VStack_8.y + (float)iVar2,VStack_8.x + (float)iVar1);
              fStack_7 = VStack_8.z + (float)iVar3;
              if (pTVar5 != (Transform *)0x0) {
                position_02.y = VStack_8.y + (float)iVar2;
                position_02.x = VStack_8.x + (float)iVar1;
                position_02.z = fStack_7;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_TransformPoint(&VStack_8,pTVar5,position_02,(MethodInfo *)0x0);
                fVar10 = pVVar9->y;
                fVar11 = pVVar9->z;
                if (3 < pVVar4->max_length) {
                  pVVar4->vector[3].x = pVVar9->x;
                  pVVar4->vector[3].y = fVar10;
                  pVVar4->vector[3].z = fVar11;
                  return pVVar4;
                }
                goto code_?;
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
  pcVar12 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar12)();
  return pVVar4;
}


/* Vector3[] GetFace(Vector3[], Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFace_1
          (Vector3__Array *corners,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
            (&corners,&pVStack_1,face,(MethodInfo *)0x0);
  return pVStack_1;
}


/* Quaternion GetFromTopRotation(Face) */

Quaternion *
Assembly-CSharp.dll::Cube::Cube_GetFromTopRotation
          (Quaternion *__return_storage_ptr__,Face__Enum direction,MethodInfo *method)

{
  pQVar1 = __return_storage_ptr__;
  cVar2 = cRam_?;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (cVar2 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar3->identityQuaternion).y;
  fVar5 = (pQVar3->identityQuaternion).z;
  fVar6 = (pQVar3->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar3->identityQuaternion).x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  if (cVar2 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar7->forwardVector).x;
  fVar5 = (pVVar7->forwardVector).y;
  fVar6 = (pVVar7->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fromDirection.y = fVar5;
  fromDirection.x = fVar4;
  fromDirection.z = fVar6;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            ((Quaternion *)&stack0xffffffcc,fromDirection,
             TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (pVVar7->upVector).x;
  fVar8 = (pVVar7->upVector).y;
  pQVar9 = (Quaternion *)(pVVar7->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = &TypeInfo__UnityEngine__Vector3->static_fields->backVector;
  fVar11 = pVVar10->x;
  pMVar12 = (MethodInfo *)pVVar10->y;
  fromDirection_00.y = fVar8;
  fromDirection_00.x = fVar6;
  fromDirection_00.z = (float)pQVar9;
  pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                      ((Quaternion *)&stack0xffffffdc,fromDirection_00,*pVVar10,(MethodInfo *)0x0);
  fVar4 = pQVar13->x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  pMVar14 = (MethodInfo *)pVVar10->x;
  uVar15 = pVVar10->y;
  fromDirection_01.y = (float)uVar15;
  fromDirection_01.x = (float)pMVar14;
  pQVar13 = (Quaternion *)&stack0xffffffec;
  pQVar16 = (Quaternion *)&UNK_?;
  fromDirection_01.z = fVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            (pQVar13,fromDirection_01,*pVVar10,(MethodInfo *)0x0);
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    fVar8 = fVar4;
    __return_storage_ptr__ = pQVar16;
    direction = (Face__Enum)pQVar13;
    method = pMVar14;
    break;
  case Face__Enum_Front:
    __return_storage_ptr__->x = fVar4;
    __return_storage_ptr__->y = (float)pQVar16;
    __return_storage_ptr__->z = (float)pQVar13;
    __return_storage_ptr__->w = (float)pMVar14;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    lhs.y = (float)pQVar9;
    lhs.x = fVar8;
    lhs.z = fVar11;
    lhs.w = (float)pMVar12;
    rhs.y = (float)pQVar9;
    rhs.x = fVar8;
    rhs.z = fVar11;
    rhs.w = (float)pMVar12;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                        ((Quaternion *)&stack0xffffffcc,lhs,rhs,(MethodInfo *)0x0);
    goto code_?;
  case Face__Enum_Left:
    rotation.y = (float)pQVar9;
    rotation.x = fVar8;
    rotation.z = fVar11;
    rotation.w = (float)pMVar12;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                        ((Quaternion *)&stack0xffffffcc,rotation,(MethodInfo *)0x0);
code_?:
    fVar8 = pQVar9->x;
    __return_storage_ptr__ = (Quaternion *)pQVar9->y;
    direction = (Face__Enum)pQVar9->z;
    method = (MethodInfo *)pQVar9->w;
    break;
  case Face__Enum_Right:
    __return_storage_ptr__ = pQVar9;
    direction = (Face__Enum)fVar11;
    method = pMVar12;
  }
  lhs_00.y = (float)__return_storage_ptr__;
  lhs_00.x = fVar8;
  lhs_00.z = (float)direction;
  lhs_00.w = (float)method;
  rhs_00.y = (float)pQVar16;
  rhs_00.x = fVar4;
  rhs_00.z = (float)pQVar13;
  rhs_00.w = (float)pMVar14;
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                      ((Quaternion *)&stack0xffffffcc,lhs_00,rhs_00,(MethodInfo *)0x0);
  fVar4 = pQVar9->y;
  fVar5 = pQVar9->z;
  fVar6 = pQVar9->w;
  pQVar1->x = pQVar9->x;
  pQVar1->y = fVar4;
  pQVar1->z = fVar5;
  pQVar1->w = fVar6;
code_?:
  return pQVar1;
}


/* Vector3[] GetNormals(Vector3[], Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetNormals
          (Vector3__Array *corners,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes;
  if (pIVar2 != (Int32__Array__Array *)0x0) {
    if (pIVar2->max_length <= face) goto code_?;
    pIVar3 = pIVar2->vector[face];
    pVVar4 = pVStack_1->vector;
    piStack_5 = pIVar3->vector;
    uVar6 = 0;
    while (pIVar3 != (Int32__Array *)0x0) {
      uVar7 = pIVar3->max_length;
      if (uVar7 <= uVar6) goto code_?;
      if (corners == (Vector3__Array *)0x0) break;
      uVar8 = *piStack_5;
      uVar9 = corners->max_length;
      if (uVar9 <= uVar8) goto code_?;
      iStack_10 = uVar8 * 3;
      uVar11 = uVar6 + 1;
      uVar12 = uVar6 + 3 & 0x80000003;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar7 <= uVar12) || (uVar12 = pIVar3->vector[uVar12], uVar9 <= uVar12))
      goto code_?;
      iStack_13 = uVar12 * 3;
      uVar14 = uVar11 & 0x80000003;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar7 <= uVar14) || (uVar7 = pIVar3->vector[uVar14], uVar9 <= uVar7))
      goto code_?;
      uStack_15._0_4_ = corners->vector[uVar7].x;
      uStack_15._4_4_ = corners->vector[uVar7].y;
      fStack_16 = corners->vector[uVar7].z;
      uStack_17._0_4_ = corners->vector[uVar8].x;
      uStack_17._4_4_ = corners->vector[uVar8].y;
      fStack_18 = corners->vector[uVar8].z;
      uStack_19._0_4_ = corners->vector[uVar12].x;
      uStack_19._4_4_ = corners->vector[uVar12].y;
      fStack_20 = corners->vector[uVar12].z;
      uStack_21._0_4_ = corners->vector[uVar8].x;
      uStack_21._4_4_ = corners->vector[uVar8].y;
      fStack_22 = corners->vector[uVar8].z;
      fStack_23 = ((float)uStack_19._4_4_ - (float)uStack_21._4_4_) *
                  ((float)(undefined4)uStack_15 - (float)(undefined4)uStack_17) -
                  ((float)(undefined4)uStack_19 - (float)(undefined4)uStack_21) *
                  ((float)uStack_15._4_4_ - (float)uStack_17._4_4_);
      value.y = ((float)(undefined4)uStack_19 - (float)(undefined4)uStack_21) *
                (fStack_16 - fStack_18) -
                (fStack_20 - fStack_22) *
                ((float)(undefined4)uStack_15 - (float)(undefined4)uStack_17);
      value.x = (fStack_20 - fStack_22) * ((float)uStack_15._4_4_ - (float)uStack_17._4_4_) -
                ((float)uStack_19._4_4_ - (float)uStack_21._4_4_) * (fStack_16 - fStack_18);
      value.z = fStack_23;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_25,value,(MethodInfo *)0x0);
      if (pVStack_1 == (Vector3__Array *)0x0) break;
      fVar26 = pVVar24->y;
      fVar27 = pVVar24->z;
      if (pVStack_1->max_length <= uVar6) goto code_?;
      pVVar4->x = pVVar24->x;
      pVVar4->y = fVar26;
      pVVar4->z = fVar27;
      pVVar4 = pVVar4 + 1;
      piStack_5 = piStack_5 + 1;
      uVar6 = uVar11;
      if (3 < (int)uVar11) {
        return pVStack_1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  pVVar29 = (Vector3__Array *)(*pcVar28)();
  return pVVar29;
}


/* Boolean GetPlaneVertices(Vector3[], Vector3[] ByRef) */

bool Assembly-CSharp.dll::Cube::Cube_GetPlaneVertices
               (Vector3__Array *corners,Vector3__Array **planeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__
            );
  uVar1 = 0;
  if (corners != (Vector3__Array *)0x0) {
    pVVar2 = corners->vector;
    for (; (int)uVar1 < (int)corners->max_length; uVar1 = uVar1 + 1) {
      if (corners->max_length <= uVar1) goto code_?;
      if (this == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__System_Collections_Generic_ICollection_T__Add
                (this,*pVVar2,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      pVVar2 = pVVar2 + 1;
    }
    if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      if ((this->fields)._count < 3) {
        return 0;
      }
      this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3___ctor_1
                ((List_1_UnityEngine_Vector3_ *)this_00,(IEnumerable_1_UnityEngine_Vector3_ *)this,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                );
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                  );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      if ((this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) &&
         (pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,this_00,0,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              ),
         this_01 !=
         (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)0x0)) {
        uVar4 = pVVar3->alias;
        uVar5 = pVVar3->path;
        func_?(this_01,uVar4,uVar5,pVVar3->asset,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,this_00,1,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar6._0_4_ = pVVar3->alias;
        uVar6._4_4_ = pVVar3->path;
        func_?(this_01,uVar6);
        pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,this_00,1,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        fVar7 = (float)pVVar3->alias;
        fVar8 = (float)pVVar3->path;
        pVVar9 = pVVar3->asset;
        pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,this_00,0,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar10 = pVVar3->alias;
        uVar11 = pVVar3->path;
        value.y = fVar8 - (float)uVar11;
        value.x = fVar7 - (float)uVar10;
        VStack_12.asset = (VisualTreeAsset *)&UNK_?;
        value.z = (float)pVVar9 - (float)pVVar3->asset;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffc0,value,(MethodInfo *)0x0);
        uStack_13._0_4_ = pVVar2->x;
        fStack_14 = pVVar2->y;
        iVar15 = 2;
        fVar7 = pVVar2->z;
        while( true ) {
          if ((this_00->fields)._size <= iVar15) {
            return 0;
          }
          pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffffb4,this_00,iVar15,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          pMVar16 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
          uStack_13 = CONCAT44(fStack_14,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar17 = pVVar3->alias;
          uVar18 = pVVar3->path;
          pVVar9 = pVVar3->asset;
          pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              (&VStack_12,this_00,0,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar19 = pVVar3->alias;
          uVar20 = pVVar3->path;
          value_00.y = (float)uVar18 - (float)uVar20;
          value_00.x = (float)uVar17 - (float)uVar19;
          value_00.z = (float)pVVar9 - (float)pVVar3->asset;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffff9c,value_00,(MethodInfo *)0x0);
          uVar21 = pVVar2->x;
          uVar22 = pVVar2->y;
          fVar8 = (float)pMVar16 * (float)uVar21 + fStack_14 * (float)uVar22 + fVar7 * pVVar2->z;
          if ((fVar8 < _UNK_?) && (_UNK_? < (double)fVar8)) break;
          iVar15 = iVar15 + 1;
        }
        iVar15 = func_?();
        puVar23 = *(undefined4 **)(iVar15 + 8);
        func_?();
        pMVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                            (this_01,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                            );
        *puVar23 = pMVar24;
        func_?();
        return 1;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  bVar26 = (*pcVar25)();
  return bVar26;
}


/* Quaternion GetToTopRotation(Face) */

Quaternion *
Assembly-CSharp.dll::Cube::Cube_GetToTopRotation
          (Quaternion *__return_storage_ptr__,Face__Enum direction,MethodInfo *method)

{
  cVar1 = cRam_?;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar2->identityQuaternion).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7._0_4_ = (pVVar6->forwardVector).x;
  uVar7._4_4_ = (pVVar6->forwardVector).y;
  fVar3 = (pVVar6->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fromDirection.z = fVar3;
  fromDirection.x = (float)uVar7;
  fromDirection.y = SUB84(uVar7,4);
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            ((Quaternion *)&stack0xffffffcc,fromDirection,
             TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8._0_4_ = (pVVar6->upVector).x;
  uVar8._4_4_ = (pVVar6->upVector).y;
  fVar3 = (pVVar6->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = &TypeInfo__UnityEngine__Vector3->static_fields->backVector;
  fVar4 = pVVar9->x;
  fVar5 = pVVar9->y;
  fVar10 = SUB84(uVar8,4);
  fromDirection_00.z = fVar3;
  fromDirection_00.x = (float)uVar8;
  fromDirection_00.y = SUB84(uVar8,4);
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                     ((Quaternion *)&stack0xffffffdc,fromDirection_00,*pVVar9,(MethodInfo *)0x0);
  fVar12 = pQVar11->x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  fVar14 = pVVar9->x;
  uVar15 = pVVar9->y;
  fromDirection_01.y = (float)uVar15;
  fromDirection_01.x = fVar14;
  pQVar11 = (Quaternion *)&stack0xffffffec;
  puVar16 = &UNK_?;
  fromDirection_01.z = fVar13;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            (pQVar11,fromDirection_01,*pVVar9,(MethodInfo *)0x0);
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    rotation.y = (float)puVar16;
    rotation.x = fVar12;
    rotation.z = (float)pQVar11;
    rotation.w = fVar14;
    pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffcc,rotation,(MethodInfo *)0x0);
    fVar4 = pQVar17->x;
    fVar5 = pQVar17->y;
    fVar13 = pQVar17->z;
    in_stack_18 = pQVar17->w;
    rotation_04.y = (float)puVar16;
    rotation_04.x = fVar12;
    rotation_04.z = (float)pQVar11;
    rotation_04.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffdc,rotation_04,(MethodInfo *)0x0);
    in_stack_19 = pQVar11->x;
    in_stack_20 = pQVar11->y;
    in_stack_21 = pQVar11->z;
    in_stack_22 = pQVar11->w;
    goto code_?;
  case Face__Enum_Front:
    rotation_00.y = (float)puVar16;
    rotation_00.x = fVar12;
    rotation_00.z = (float)pQVar11;
    rotation_00.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffcc,rotation_00,(MethodInfo *)0x0);
    fVar3 = pQVar11->y;
    fVar4 = pQVar11->z;
    fVar5 = pQVar11->w;
    __return_storage_ptr__->x = pQVar11->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    rotation_01.y = (float)puVar16;
    rotation_01.x = fVar12;
    rotation_01.z = (float)pQVar11;
    rotation_01.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffdc,rotation_01,(MethodInfo *)0x0);
    fVar12 = pQVar11->x;
    fVar13 = pQVar11->y;
    fVar14 = pQVar11->z;
    fVar23 = pQVar11->w;
    rotation_05.y = fVar3;
    rotation_05.x = fVar10;
    rotation_05.z = fVar4;
    rotation_05.w = fVar5;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffec,rotation_05,(MethodInfo *)0x0);
    lhs.y = fVar13;
    lhs.x = fVar12;
    lhs.z = fVar14;
    lhs.w = fVar23;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&stack0xffffffdc,lhs,*pQVar11,(MethodInfo *)0x0);
    break;
  case Face__Enum_Left:
    rotation_02.y = (float)puVar16;
    rotation_02.x = fVar12;
    rotation_02.z = (float)pQVar11;
    rotation_02.w = fVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
              ((Quaternion *)&stack0xffffffdc,rotation_02,(MethodInfo *)0x0);
    fVar13 = 0.0;
    goto code_?;
  case Face__Enum_Right:
    rotation_03.y = (float)puVar16;
    rotation_03.x = fVar12;
    rotation_03.z = (float)pQVar11;
    rotation_03.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffdc,rotation_03,(MethodInfo *)0x0);
  }
  fVar13 = pQVar11->z;
  in_stack_18 = pQVar11->w;
  rotation_06.y = fVar3;
  rotation_06.x = fVar10;
  rotation_06.z = fVar4;
  rotation_06.w = fVar5;
  fVar4 = pQVar11->x;
  fVar5 = pQVar11->y;
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffcc,rotation_06,(MethodInfo *)0x0);
  in_stack_19 = pQVar11->x;
  in_stack_20 = pQVar11->y;
  in_stack_21 = pQVar11->z;
  in_stack_22 = pQVar11->w;
code_?:
  in_stack_24 = (MethodInfo *)0x0;
code_?:
  lhs_00.y = fVar5;
  lhs_00.x = fVar4;
  lhs_00.z = fVar13;
  lhs_00.w = in_stack_18;
  rhs.y = in_stack_20;
  rhs.x = in_stack_19;
  rhs.z = in_stack_21;
  rhs.w = in_stack_22;
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     ((Quaternion *)&stack0xffffffcc,lhs_00,rhs,in_stack_24);
  fVar3 = pQVar11->y;
  fVar4 = pQVar11->z;
  fVar5 = pQVar11->w;
  __return_storage_ptr__->x = pQVar11->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
code_?:
  return __return_storage_ptr__;
}


/* Void GetTriangle(Int32, Vector3[], Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_GetTriangle
               (int32_t triangleNr,Vector3__Array *triangleVertices,Vector3__Array *corners,
               MethodInfo *method)

{
  switch(triangleNr) {
  case 0:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), unaff_EDI = triangleVertices, triangleVertices == (Vector3__Array *)0x0))
    {
code_?:
      uVar1 = func_?();
      bVar2 = uVar1 < *(uint *)(extraout_ECX + 0x58);
      bVar3 = (char)uVar1 - (char)*(uint *)(extraout_ECX + 0x58);
      bVar4 = (byte)((uint)extraout_ECX >> 8);
      bVar5 = bVar4 + bVar3;
      bVar6 = CARRY1(bVar4,bVar3) || CARRY1(bVar5,bVar2);
      uVar1 = (uint)CONCAT11(bVar5 + bVar2,(char)extraout_ECX);
      bVar5 = *(char *)&corners->klass + extraout_DH;
      bVar2 = CARRY1(*(byte *)&corners->klass,extraout_DH) || CARRY1(bVar5,bVar6);
      *(byte *)&corners->klass = bVar5 + bVar6;
      pbVar7 = (byte *)((int)&unaff_EDI[0x1b8f94].vector[0x14].x + 2);
      bVar3 = (byte)((uint)unaff_ESI >> 8);
      bVar5 = *pbVar7 + bVar3;
      bVar6 = CARRY1(*pbVar7,bVar3) || CARRY1(bVar5,bVar2);
      *pbVar7 = bVar5 + bVar2;
      bVar3 = (byte)(uVar1 + 2 >> 8);
      bVar5 = *unaff_EBX + bVar3;
      bVar2 = CARRY1(*unaff_EBX,bVar3) || CARRY1(bVar5,bVar6);
      *unaff_EBX = bVar5 + bVar6;
      bVar3 = (byte)(uVar1 + 3 >> 8);
      bVar5 = *unaff_EBX + bVar3;
      bVar6 = CARRY1(*unaff_EBX,bVar3) || CARRY1(bVar5,bVar2);
      *unaff_EBX = bVar5 + bVar2;
      bVar3 = (byte)(uVar1 + 4 >> 8);
      bVar5 = *unaff_EBX + bVar3;
      bVar2 = CARRY1(*unaff_EBX,bVar3) || CARRY1(bVar5,bVar6);
      *unaff_EBX = bVar5 + bVar6;
      bVar3 = (byte)(uVar1 + 5 >> 8);
      bVar5 = *unaff_EBX + bVar3;
      bVar6 = CARRY1(*unaff_EBX,bVar3) || CARRY1(bVar5,bVar2);
      *unaff_EBX = bVar5 + bVar2;
      bVar3 = (byte)(uVar1 + 6 >> 8);
      bVar5 = *unaff_EBX + bVar3;
      bVar2 = CARRY1(*unaff_EBX,bVar3) || CARRY1(bVar5,bVar6);
      *unaff_EBX = bVar5 + bVar6;
      bVar5 = *unaff_EBX;
      bVar4 = (byte)(uVar1 + 7 >> 8);
      bVar3 = *unaff_EBX + bVar4;
      *unaff_EBX = bVar3 + bVar2;
      *unaff_EBX = *unaff_EBX + (char)(uVar1 + 8 >> 8) +
                   (CARRY1(bVar5,bVar4) || CARRY1(bVar3,bVar2));
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    func_?(0,uStack_9,uStack_10);
    func_?(&uStack_9,1);
    func_?(1,uStack_9,uStack_10);
    uVar11 = 2;
    break;
  case 1:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), unaff_EDI = triangleVertices, triangleVertices == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_9,uStack_10);
    func_?(&uStack_9,2);
    func_?(1,uStack_9,uStack_10);
    uVar11 = 3;
    break;
  case 2:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), unaff_EDI = triangleVertices, triangleVertices == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_9,uStack_10);
    func_?(&uStack_9,5);
    func_?(1,uStack_9,uStack_10);
    uVar11 = 6;
    break;
  case 3:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), unaff_EDI = triangleVertices, triangleVertices == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_9,uStack_10);
    func_?(&uStack_9,6);
    func_?(1,uStack_9,uStack_10);
    uVar11 = 7;
    break;
  default:
    goto code_?;
  }
  func_?(&uStack_9,uVar11);
  func_?(2,uStack_9,uStack_10);
code_?:
  return;
}


/* Vector3[] GetVertices(Cube) */

Vector3__Array * Assembly-CSharp.dll::Cube::Cube_GetVertices(Cube *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    return pVVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar2)();
  return pVVar1;
}


/* Vector3[] GetVerticesWorldAxisAligned(Cube, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVerticesWorldAxisAligned
          (Cube *cube,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          return pVVar1;
        }
        if (pVVar1->max_length <= uVar2) break;
        uVar4 = pVVar3->x;
        uVar5 = pVVar3->y;
        uVar2 = uVar2 + 1;
        pVVar3->x = (float)uVar4 + (float)(int)iVector.x;
        pVVar3->y = (float)uVar5 + (float)(int)iVector.y;
        pVVar3->z = pVVar3->z + (float)(int)iVector.z;
        pVVar3 = pVVar3 + 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar6)();
  return pVVar1;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVertices_1(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            ((List_1_UnityEngine_Vector3_ *)this,(IEnumerable_1_UnityEngine_Vector3_ *)corners,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack1 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack2 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pMStack1 = (MethodInfo *)this;
    func_?();
    pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack4._0_4_ = pVVar3->alias;
    uStack4._4_4_ = pVVar3->path;
    pMStack5 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pVStack6 = pVVar3->asset;
    pMStack2 = (MethodInfo *)this;
    func_?();
    pMVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                       );
    return (Vector3__Array *)pMVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3__Array *)(*pcVar8)();
  return pVVar9;
}


/* Boolean IsCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCollapsed(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  bVar2 = Cube_GetPlaneVertices(corners,&pVStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  if (pVStack_1 != (Vector3__Array *)0x0) {
    uVar3 = pVStack_1->max_length;
    if (((uVar3 != 0) && (1 < uVar3)) && (2 < uVar3)) {
      uVar4 = pVStack_1->vector[0].y;
      fVar5 = pVStack_1->vector[0].z;
      uVar6 = pVStack_1->vector[1].x;
      uVar7 = pVStack_1->vector[1].y;
      uVar8 = pVStack_1->vector[0].x;
      uVar9 = pVStack_1->vector[0].y;
      fVar10 = pVStack_1->vector[1].z - pVStack_1->vector[0].z;
      uVar11 = pVStack_1->vector[2].x;
      uVar12 = pVStack_1->vector[2].y;
      VStack_13.x = pVStack_1->vector[0].x;
      VStack_13.y = pVStack_1->vector[0].y;
      VStack_13.z = pVStack_1->vector[0].z;
      fVar14 = pVStack_1->vector[2].z - VStack_13.z;
      value.y = ((float)uVar11 - VStack_13.x) * fVar10 - fVar14 * ((float)uVar6 - (float)uVar8);
      value.x = fVar14 * ((float)uVar7 - (float)uVar9) - ((float)uVar12 - VStack_13.y) * fVar10;
      value.z = ((float)uVar12 - VStack_13.y) * ((float)uVar6 - (float)uVar8) -
                ((float)uVar11 - VStack_13.x) * ((float)uVar7 - (float)uVar9);
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_13,value,(MethodInfo *)0x0);
      uVar16 = pVVar15->x;
      uVar17 = pVVar15->y;
      uVar3 = 0;
      if (corners == (Vector3__Array *)0x0) goto code_?;
      pVVar18 = corners->vector;
      while( true ) {
        if ((int)corners->max_length <= (int)uVar3) {
          return 1;
        }
        if (corners->max_length <= uVar3) break;
        uVar19 = pVVar15->x;
        uVar20 = pVVar15->y;
        uVar21 = pVVar18->x;
        uVar22 = pVVar18->y;
        if (_UNK_? <
            (double)(float)((uint)((float)uVar22 * (float)uVar20 + (float)uVar21 * (float)uVar19 +
                                   pVVar18->z * pVVar15->z +
                                  (float)((uint)((float)uVar4 * (float)uVar17 + (float)uVar16 * 0.0 +
                                                fVar5 * pVVar15->z) ^
                                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                         )) & _UNK_?)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        pVVar18 = pVVar18 + 1;
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  bVar2 = (*pcVar23)();
  return bVar2;
}


/* Boolean IsCornersValid(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCornersValid(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  face = Face__Enum_Top;
  while( true ) {
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    faceIndices = Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
    bVar1 = Cube_IsFaceValid(faceIndices,face,(MethodInfo *)0x0);
    if (bVar1 == 0) break;
    face = face + Face__Enum_Bottom;
    if (5 < (int)face) {
      return 1;
    }
  }
  return 0;
}


/* Boolean IsFaceBoxSideAligened(Cube, Face) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceBoxSideAligened
               (Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  uVar2 = 0;
  pfVar3 = &pVVar1->vector[0].y;
  while (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length <= uVar2) goto code_?;
    if (_UNK_? != *pfVar3) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 3;
    if (3 < (int)uVar2) {
      return 1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsFaceCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceCollapsed(Vector3__Array *faceIndices,MethodInfo *method)

{
  iVar1 = 0;
  if (faceIndices == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    while( true ) {
      uVar2 = faceIndices->max_length;
      if ((int)uVar2 <= iVar1) {
        return 0;
      }
      uVar3 = (iVar1 + 1) % (int)uVar2;
      if ((uVar2 <= uVar3) || (uVar4 = iVar1 % (int)uVar2, uVar2 <= uVar4)) break;
      uVar5 = faceIndices->vector[uVar4].x;
      uVar6 = faceIndices->vector[uVar4].y;
      uVar7 = faceIndices->vector[uVar3].x;
      uVar8 = faceIndices->vector[uVar3].y;
      fVar9 = faceIndices->vector[uVar3].z - faceIndices->vector[uVar4].z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar10 = (double)(((float)uVar8 - (float)uVar6) * ((float)uVar8 - (float)uVar6) +
                        ((float)uVar7 - (float)uVar5) * ((float)uVar7 - (float)uVar5) +
                       fVar9 * fVar9);
      if (dVar10 < 0.0) {
        func_?();
      }
      else {
        dVar10 = SQRT(dVar10);
      }
      if ((float)dVar10 < _UNK_?) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean IsFaceValid(Vector3[], Face) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceValid
               (Vector3__Array *faceIndices,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (faceIndices == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (1 < faceIndices->max_length) {
    uVar1 = faceIndices->vector[0].x;
    uVar2 = faceIndices->vector[0].y;
    pVVar3 = faceIndices->vector + 1;
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    value.y = (float)uVar5 - (float)uVar2;
    value.x = (float)uVar4 - (float)uVar1;
    value.z = faceIndices->vector[1].z - faceIndices->vector[0].z;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffe4,value,(MethodInfo *)0x0);
    fVar7 = pVVar6->x;
    fVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    if (2 < faceIndices->max_length) {
      uVar10 = pVVar3->x;
      uVar11 = pVVar3->y;
      uVar12 = faceIndices->vector[2].x;
      uVar13 = faceIndices->vector[2].y;
      value_00.y = (float)uVar13 - (float)uVar11;
      value_00.x = (float)uVar12 - (float)uVar10;
      value_00.z = faceIndices->vector[2].z - faceIndices->vector[1].z;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xfffffff0,value_00,(MethodInfo *)0x0);
      uVar14 = pVVar6->x;
      uVar15 = pVVar6->y;
      value_01.y = (float)uVar14 * fVar9 - fVar7 * pVVar6->z;
      value_01.x = pVVar6->z * fVar8 - (float)uVar15 * fVar9;
      value_01.z = fVar7 * (float)uVar15 - (float)uVar14 * fVar8;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffe4,value_01,(MethodInfo *)0x0);
      if (faceIndices->max_length != 0) {
        fVar9 = faceIndices->vector[0].x;
        fVar16 = faceIndices->vector[0].y;
        fVar7 = faceIndices->vector[0].z;
        fVar17 = pVVar6->x;
        fVar18 = pVVar6->y;
        fVar8 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffcc,*pVVar6,(MethodInfo *)0x0);
        uVar19 = pVVar6->x;
        uVar20 = pVVar6->y;
        uVar21 = 1;
        while( true ) {
          if ((int)faceIndices->max_length <= (int)uVar21) {
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar3 = Cube_GetFaceAxis((Vector3 *)&stack0xffffffcc,face,(MethodInfo *)0x0);
            uVar22 = pVVar3->x;
            uVar23 = pVVar3->y;
            if (_UNK_? < fVar18 * (float)uVar23 + fVar17 * (float)uVar22 + fVar8 * pVVar3->z
               ) {
              return 0;
            }
            return 1;
          }
          if (faceIndices->max_length <= uVar21) break;
          uVar24 = pVVar6->x;
          uVar25 = pVVar6->y;
          uVar26 = pVVar3->x;
          uVar27 = pVVar3->y;
          if (_UNK_? <
              (float)((uint)((float)uVar27 * (float)uVar25 + (float)uVar26 * (float)uVar24 +
                             pVVar3->z * pVVar6->z +
                            (float)((uint)(fVar9 * (float)uVar19 + fVar16 * (float)uVar20 +
                                          fVar7 * pVVar6->z) ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   )) & _UNK_?)) {
            return 0;
          }
          uVar21 = uVar21 + 1;
          pVVar3 = pVVar3 + 1;
        }
      }
    }
  }
  func_?();
  pcVar28 = (code *)swi(3);
  bVar29 = (*pcVar28)();
  return bVar29;
}


/* Boolean IsLegal(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsLegal(Vector3__Array *corners,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  handle = TypeRef__MV__WorldObject__Face;
  iStack_6 = 0;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIStack_7 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIStack_7 != (IEnumerator *)0x0) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_6 = func_?();
        if (iStack_6 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (pIStack_7 == (IEnumerator *)0x0) break;
      piVar9 = (int *)func_?();
      if (piVar9 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar9 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      pFVar10 = (Face__Enum *)func_?();
      face = *pFVar10;
      FStack_11 = face;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar12 = Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      iVar13 = 0;
      pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_15.x = (pVVar14->zeroVector).x;
      VStack_15.y = (pVVar14->zeroVector).y;
      VStack_15.z = (pVVar14->zeroVector).z;
      while( true ) {
        if (pVVar12 == (Vector3__Array *)0x0) goto code_?;
        piStack_16 = &pVVar12->max_length;
        if ((int)pVVar12->max_length <= iVar13) break;
        func_?();
        iVar13 = iVar13 + 1;
        func_?();
        piStack_16 = (il2cpp_array_size_t *)(fStack_17 * fStack_18 - fStack_19 * fStack_20);
        VStack_15.z = VStack_15.z + (fStack_21 * fStack_20 - fStack_22 * fStack_17);
        VStack_15.y = VStack_15.y + (fStack_22 * fStack_19 - fStack_21 * fStack_18);
        VStack_15.x = VStack_15.x + (float)piStack_16;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_15,(MethodInfo *)0x0);
      fStack_23 = (float)((uint)VStack_15.x ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fStack_24 = (float)((uint)VStack_15.y ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      piStack_16 = (il2cpp_array_size_t *)
                   ((uint)VStack_15.z ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar25 = Cube_GetFaceAxis((Vector3 *)&stack0xffffff7c,FStack_11,(MethodInfo *)0x0);
      uVar26 = pVVar25->x;
      uVar27 = pVVar25->y;
      if ((double)((float)uVar27 * fStack_24 + (float)uVar26 * fStack_23 +
                  pVVar25->z * (float)piStack_16) < _UNK_?) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  bVar29 = (*pcVar28)();
  return bVar29;
}


/* Boolean IsOutOfBound(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsOutOfBound(Vector3__Array *corners,MethodInfo *method)

{
  uVar1 = 0;
  if (corners == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVStack_2 = corners->vector;
    while( true ) {
      if ((int)corners->max_length <= (int)uVar1) {
        return 0;
      }
      if (corners->max_length <= uVar1) break;
      VStack_3.x = pVStack_2->x;
      VStack_3.y = pVStack_2->y;
      index = 0;
      VStack_3.z = pVStack_2->z;
      do {
        fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_3,index,(MethodInfo *)0x0);
        if (_UNK_? < (float)((uint)fStack_4 & _UNK_?)) {
          return 1;
        }
        index = index + 1;
      } while (index < 3);
      uVar1 = uVar1 + 1;
      pVStack_2 = pVStack_2 + 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsSideVisible(FaceFlags) */

bool Assembly-CSharp.dll::Cube::Cube_IsSideVisible
               (Cube *this,FaceFlags__Enum face,MethodInfo *method)

{
  return ((this->fields).hiddenSides & (undefined1)face) == 0;
}


/* Void MoveEdge(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveEdge
               (CubePickingInfo *info,float value,Vector3 axis,CubeOutOfBoundState__Enum *coob,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?();
  }
  else {
    pCVar2 = (CubePickingInfo *)(info->fields).pickedEdge;
    pCVar3 = (info->fields).cube;
    FVar4 = (info->fields).pickedFace;
    info = pCVar2;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    corners = Cube_GetEdge(pCVar3,FVar4,(Edge__Enum)info,(MethodInfo *)0x0);
    if (corners == (Vector3__Array *)0x0) goto code_?;
    if (corners->max_length == 0) goto code_?;
    uVar5 = corners->vector[0].x;
    uVar6 = corners->vector[0].y;
    fVar7 = corners->vector[0].z;
    corners->vector[0].x = (float)uVar5 + axis.x * value;
    corners->vector[0].y = (float)uVar6 + axis.y * value;
    corners->vector[0].z = fVar7 + axis.z * value;
    if (corners->max_length < 2) goto code_?;
    v = corners->vector + 1;
    uVar8 = v->x;
    uVar9 = v->y;
    fVar7 = corners->vector[1].z;
    v->x = (float)uVar8 + axis.x * value;
    v->y = (float)uVar9 + axis.y * value;
    corners->vector[1].z = fVar7 + axis.z * value;
    bVar10 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      pCVar3 = (pCVar1->fields).cube;
      FVar4 = (pCVar1->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = Cube_IsFaceBoxSideAligened(pCVar3,FVar4,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        return;
      }
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddEdge;
      return;
    }
    if ((corners->max_length == 0) ||
       (MathFunctions::MathFunctions_ClampVector(corners->vector,-0.5,0.5,(MethodInfo *)0x0),
       corners->max_length < 2)) goto code_?;
    info = (CubePickingInfo *)0x0;
    MathFunctions::MathFunctions_ClampVector(v,-0.5,0.5,(MethodInfo *)0x0);
    if (corners->max_length == 0) goto code_?;
    pVVar11 = corners->vector;
    uVar12 = pVVar11->x;
    uVar13 = pVVar11->y;
    axis.x = corners->vector[0].z;
    axis.z = 0.0;
    axis.y = 4.2039e-45;
    info = (CubePickingInfo *)uVar12;
    value = (float)uVar13;
    pVVar11 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffec,*pVVar11,3,(MethodInfo *)0x0);
    fVar14 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length == 0) goto code_?;
    corners->vector[0].x = pVVar11->x;
    corners->vector[0].y = fVar14;
    corners->vector[0].z = fVar7;
    if (corners->max_length < 2) goto code_?;
    axis.z = (float)&UNK_?;
    pVVar11 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffec,*v,3,(MethodInfo *)0x0);
    fVar14 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length < 2) goto code_?;
    v->x = pVVar11->x;
    v->y = fVar14;
    corners->vector[1].z = fVar7;
    pCVar3 = (pCVar1->fields).cube;
    if ((pCVar3 == (Cube *)0x0) ||
       (this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                         ((CubeBase *)pCVar3,(MethodInfo *)0x0), this == (Vector3__Array *)0x0))
    goto code_?;
    pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this,(MethodInfo *)0x0);
    info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
    if (pOVar15 == (Object *)0x0) {
      pCVar2 = (CubePickingInfo *)0x0;
code_?:
      FVar4 = (pCVar1->fields).pickedFace;
      EVar16 = (pCVar1->fields).pickedEdge;
      info = pCVar2;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Cube_SetEdge_1((Vector3__Array **)&info,FVar4,EVar16,corners,(MethodInfo *)0x0);
      bVar10 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
        pCVar3 = (pCVar1->fields).cube;
        EVar16 = (pCVar1->fields).pickedEdge;
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Cube_SetEdge(pCVar3,(Face__Enum)info,EVar16,corners,(MethodInfo *)0x0);
      }
      return;
    }
    pCVar2 = (CubePickingInfo *)func_?();
    if (pCVar2 != (CubePickingInfo *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void MoveFace(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveFace
               (CubePickingInfo *info,float delta,Vector3 axis,
               CubeOutOfBoundState__Enum *outOfBoundState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  v = (Vector3__Array__Class *)info;
  if ((info != (CubePickingInfo *)0x0) && (pCVar1 = (info->fields).cube, pCVar1 != (Cube *)0x0)) {
    pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)pCVar1,(MethodInfo *)0x0);
    FVar3 = (info->fields).pickedFace;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar2 = Cube_GetFace_1(pVVar2,FVar3,(MethodInfo *)0x0);
    unaff_ESI = (Vector3__Array *)0x0;
    if (pVVar2 != (Vector3__Array *)0x0) {
      pVVar4 = (Vector3__Array *)pVVar2->vector;
      v = (Vector3__Array__Class *)pVVar4;
      for (; (int)unaff_ESI < (int)pVVar2->max_length;
          unaff_ESI = (Vector3__Array *)((int)&unaff_ESI->klass + 1)) {
        if ((Vector3__Array *)pVVar2->max_length <= unaff_ESI) goto code_?;
        uVar5 = (v->_0).image;
        uVar6 = (v->_0).gc_desc;
        (v->_0).image = (Il2CppImage *)((float)uVar5 + axis.x * delta);
        (v->_0).gc_desc = (void *)((float)uVar6 + axis.y * delta);
        (v->_0).name = (char *)((float)(v->_0).name + axis.z * delta);
        v = (Vector3__Array__Class *)&(v->_0).namespaze;
      }
      for (v = (Vector3__Array__Class *)0x0; pVStack_7 = pVVar4, (int)v < (int)pVVar2->max_length;
          v = (Vector3__Array__Class *)((int)&(v->_0).image + 1)) {
        unaff_ESI = pVVar4;
        if ((Vector3__Array__Class *)pVVar2->max_length <= v) goto code_?;
        index = (int32_t)pVVar4->klass;
        vector.x = (float)pVVar4->klass;
        vector.y = (float)pVVar4->monitor;
        vector.z = (float)pVVar4->bounds;
        pVVar8 = MathFunctions::MathFunctions_RoundVector
                            ((Vector3 *)&stack0xffffffd4,vector,3,(MethodInfo *)0x0);
        fVar9 = pVVar8->y;
        fVar10 = pVVar8->z;
        if ((Vector3__Array__Class *)pVVar2->max_length <= v) goto code_?;
        pVVar4->klass = (Vector3__Array__Class *)pVVar8->x;
        pVVar4->monitor = (MonitorData *)fVar9;
        *(float *)&((Cube__Fields *)&pVVar4->bounds)->_ = fVar10;
        iVar11 = 0;
        iStack_12 = 0;
        do {
          pMVar13 = (MethodInfo *)&UNK_?;
          pVVar8 = (Vector3 *)func_?(v,iVar11,0);
          fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (pVVar8,index,pMVar13);
          if (_UNK_? <= fVar10) {
            pMVar13 = (MethodInfo *)&UNK_?;
            pVVar8 = (Vector3 *)func_?(v,iVar11,0);
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar8,index,pMVar13);
            if (fVar10 <= _UNK_?) {
              iStack_12 = iStack_12 + 1;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        if (iStack_12 == 3) {
          cStack_14 = '\0';
          goto code_?;
        }
        pVVar4 = (Vector3__Array *)&pVStack_7->max_length;
      }
      cStack_14 = '\x01';
code_?:
      v = (Vector3__Array__Class *)pVVar2->vector;
      for (unaff_ESI = (Vector3__Array *)0x0; (int)unaff_ESI < (int)pVVar2->max_length;
          unaff_ESI = (Vector3__Array *)((int)&unaff_ESI->klass + 1)) {
        if (((Vector3__Array *)pVVar2->max_length <= unaff_ESI) ||
           (MathFunctions::MathFunctions_ClampVector((Vector3 *)v,-0.5,0.5,(MethodInfo *)0x0),
           (Vector3__Array *)pVVar2->max_length <= unaff_ESI)) goto code_?;
        vector_00.x = (float)(v->_0).image;
        vector_00.y = (float)(v->_0).gc_desc;
        vector_00.z = (float)(v->_0).name;
        pVVar8 = MathFunctions::MathFunctions_RoundVector
                            ((Vector3 *)&stack0xffffffd4,vector_00,3,(MethodInfo *)0x0);
        fVar10 = pVVar8->y;
        pcVar15 = (char *)pVVar8->z;
        if ((Vector3__Array *)pVVar2->max_length <= unaff_ESI) goto code_?;
        (v->_0).image = (Il2CppImage *)pVVar8->x;
        (v->_0).gc_desc = (void *)fVar10;
        (v->_0).name = pcVar15;
        v = (Vector3__Array__Class *)&(v->_0).namespaze;
      }
      pCVar1 = (info->fields).cube;
      if ((pCVar1 != (Cube *)0x0) &&
         (pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                              ((CubeBase *)pCVar1,(MethodInfo *)0x0),
         pVVar4 != (Vector3__Array *)0x0)) {
        unaff_ESI = (Vector3__Array *)
                    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                    PlayableBehaviour_Clone((PlayableBehaviour *)pVVar4,(MethodInfo *)0x0);
        v = TypeInfo__UnityEngine__Vector3;
        pVVar4 = (Vector3__Array *)0x0;
        if ((unaff_ESI != (Vector3__Array *)0x0) &&
           (pVVar4 = (Vector3__Array *)func_?(unaff_ESI), pVVar4 == (Vector3__Array *)0x0
           )) goto code_?;
        pVStack_7 = pVVar4;
        Cube_SetFace_1(&pVStack_7,(info->fields).pickedFace,pVVar2,(MethodInfo *)0x0);
        bVar16 = Cube_IsLegal(pVStack_7,(MethodInfo *)0x0);
        if (bVar16 != 0) {
          unaff_ESI = (Vector3__Array *)(info->fields).cube;
          FVar3 = (info->fields).pickedFace;
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          Cube_SetFace((Cube *)unaff_ESI,FVar3,pVVar2,(MethodInfo *)0x0);
        }
        if (cStack_14 == '\0') {
          *outOfBoundState = CubeOutOfBoundState__Enum_WithinBounds;
          return;
        }
        pCVar1 = (info->fields).cube;
        v = (Vector3__Array__Class *)info;
        if (pCVar1 != (Cube *)0x0) {
          pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)pCVar1,(MethodInfo *)0x0);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          bVar16 = Cube_IsCollapsed(pVVar2,(MethodInfo *)0x0);
          *outOfBoundState = (bVar16 != 0) + CubeOutOfBoundState__Enum_OutOfBoundsAdd;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,v);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void MoveVertex(CubePickingInfo, Single, Vector3, Boolean, Boolean, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveVertex
               (CubePickingInfo *info,float value,Vector3 axis,bool edgeIndex0,bool edgeIndex1,
               CubeOutOfBoundState__Enum *coob,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_Add_cube_based_on_corner_pull_);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?();
  }
  else {
    pCVar2 = (CubePickingInfo *)(info->fields).pickedEdge;
    pCVar3 = (info->fields).cube;
    FVar4 = (info->fields).pickedFace;
    info = pCVar2;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    corners = Cube_GetEdge(pCVar3,FVar4,(Edge__Enum)info,(MethodInfo *)0x0);
    Cube_GetEdge((pCVar1->fields).cube,(pCVar1->fields).pickedFace,(pCVar1->fields).pickedEdge,
                 (MethodInfo *)0x0);
    if (edgeIndex0 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length == 0) goto code_?;
      uVar5 = corners->vector[0].x;
      uVar6 = corners->vector[0].y;
      fVar7 = corners->vector[0].z;
      corners->vector[0].x = (float)uVar5 + axis.x * value;
      corners->vector[0].y = (float)uVar6 + axis.y * value;
      corners->vector[0].z = fVar7 + axis.z * value;
    }
    if (edgeIndex1 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length < 2) goto code_?;
      uVar8 = corners->vector[1].x;
      uVar9 = corners->vector[1].y;
      fVar7 = corners->vector[1].z;
      corners->vector[1].x = (float)uVar8 + axis.x * value;
      corners->vector[1].y = (float)uVar9 + axis.y * value;
      corners->vector[1].z = fVar7 + axis.z * value;
    }
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar10 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      pCVar3 = (pCVar1->fields).cube;
      FVar4 = (pCVar1->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      bVar10 = Cube_IsFaceBoxSideAligened(pCVar3,FVar4,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Add_cube_based_on_corner_pull_,(MethodInfo *)0x0);
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddVertex;
      return;
    }
    if (corners == (Vector3__Array *)0x0) goto code_?;
    if ((corners->max_length == 0) ||
       (MathFunctions::MathFunctions_ClampVector(corners->vector,-0.5,0.5,(MethodInfo *)0x0),
       corners->max_length < 2)) goto code_?;
    v = corners->vector + 1;
    MathFunctions::MathFunctions_ClampVector(v,-0.5,0.5,(MethodInfo *)0x0);
    if (corners->max_length == 0) goto code_?;
    pVVar11 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&puStack_12,corners->vector[0],3,(MethodInfo *)0x0);
    fVar13 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length == 0) goto code_?;
    corners->vector[0].x = pVVar11->x;
    corners->vector[0].y = fVar13;
    corners->vector[0].z = fVar7;
    if (corners->max_length < 2) goto code_?;
    pVVar11 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&puStack_12,*v,3,(MethodInfo *)0x0);
    fVar13 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length < 2) goto code_?;
    v->x = pVVar11->x;
    v->y = fVar13;
    corners->vector[1].z = fVar7;
    pCVar3 = (pCVar1->fields).cube;
    if (pCVar3 == (Cube *)0x0) goto code_?;
    stack0xffffffdc = (float)pCVar3;
    this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)pCVar3,(MethodInfo *)0x0);
    if (this == (Vector3__Array *)0x0) goto code_?;
    pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this,(MethodInfo *)0x0);
    info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
    pCVar2 = (CubePickingInfo *)0x0;
    if ((pOVar14 == (Object *)0x0) ||
       (pCVar2 = (CubePickingInfo *)func_?(), pCVar2 != (CubePickingInfo *)0x0)) {
      FVar4 = (pCVar1->fields).pickedFace;
      EVar15 = (pCVar1->fields).pickedEdge;
      info = pCVar2;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      stack0xffffffdc = (float)&UNK_?;
      Cube_SetEdge_1((Vector3__Array **)&info,FVar4,EVar15,corners,(MethodInfo *)0x0);
      iVar16 = 0;
      bVar10 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        return;
      }
      pCVar3 = (pCVar1->fields).cube;
      info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
      EVar15 = (pCVar1->fields).pickedEdge;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        axis.x = (float)TypeInfo__Cube;
        value = (float)&UNK_?;
        func_?();
      }
      Cube_SetEdge(pCVar3,(Face__Enum)info,EVar15,corners,(MethodInfo *)0x0);
      if (iVar16 != 0) {
        if ((*(uint *)(iVar16 + 0xc) != 0) && (corners->max_length != 0)) {
          puStack_12 = (undefined *)corners->vector[0].x;
          unique0x0000a404 = corners->vector[0].y;
          fVar13 = (float)*(undefined8 *)(iVar16 + 0x10) - (float)puStack_12;
          fVar17 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x10) >> 0x20) - unique0x0000a404;
          fVar7 = *(float *)(iVar16 + 0x18) - corners->vector[0].z;
          if (fVar17 * fVar17 + fVar13 * fVar13 + fVar7 * fVar7 < _UNK_?) {
            if ((*(uint *)(iVar16 + 0xc) < 2) || (corners->max_length < 2)) goto code_?;
            uVar18 = v->x;
            uVar19 = v->y;
            puStack_12 = (undefined *)*(undefined8 *)(iVar16 + 0x1c);
            stack0xffffffdc = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x1c) >> 0x20);
            fVar7 = *(float *)(iVar16 + 0x24) - corners->vector[1].z;
            if ((stack0xffffffdc - (float)uVar19) * (stack0xffffffdc - (float)uVar19) +
                ((float)puStack_12 - (float)uVar18) * ((float)puStack_12 - (float)uVar18) +
                fVar7 * fVar7 < _UNK_?) {
              return;
            }
          }
          *coob = CubeOutOfBoundState__Enum_WithinBounds;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Vector3[] RotateFaceToTop(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_RotateFaceToTop(Cube *cube,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    func_?(TypeInfo__Cube->static_fields,pVVar1);
    pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
    pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length == 0) goto code_?;
      if (pVVar2 != (Vector3__Array *)0x0) {
        fVar3 = pVVar1->vector[0].y;
        fVar4 = pVVar1->vector[0].z;
        if (pVVar2->max_length == 0) goto code_?;
        pVVar5 = pVVar2->vector;
        pVVar5->x = pVVar1->vector[0].x;
        pVVar5->y = fVar3;
        pVVar2->vector[0].z = fVar4;
        pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
        if (pVVar1 != (Vector3__Array *)0x0) {
          if (pVVar1->max_length < 2) goto code_?;
          fVar3 = pVVar1->vector[1].y;
          fVar4 = pVVar1->vector[1].z;
          if (pVVar2->max_length < 2) goto code_?;
          pVVar2->vector[1].x = pVVar1->vector[1].x;
          pVVar2->vector[1].y = fVar3;
          pVVar2->vector[1].z = fVar4;
          pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
          if (pVVar1 != (Vector3__Array *)0x0) {
            if (pVVar1->max_length < 3) goto code_?;
            fVar3 = pVVar1->vector[2].y;
            fVar4 = pVVar1->vector[2].z;
            if (pVVar2->max_length < 3) goto code_?;
            pVVar2->vector[2].x = pVVar1->vector[2].x;
            pVVar2->vector[2].y = fVar3;
            pVVar2->vector[2].z = fVar4;
            pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (pVVar1 != (Vector3__Array *)0x0) {
              if (pVVar1->max_length < 4) goto code_?;
              fVar3 = pVVar1->vector[3].y;
              fVar4 = pVVar1->vector[3].z;
              if (pVVar2->max_length < 4) goto code_?;
              pVVar2->vector[3].x = pVVar1->vector[3].x;
              pVVar2->vector[3].y = fVar3;
              pVVar2->vector[3].z = fVar4;
              pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
              if (pVVar1 != (Vector3__Array *)0x0) {
                if (pVVar1->max_length < 5) goto code_?;
                fVar3 = pVVar1->vector[4].y;
                fVar4 = pVVar1->vector[4].z;
                if (pVVar2->max_length < 5) goto code_?;
                pVVar2->vector[4].x = pVVar1->vector[4].x;
                pVVar2->vector[4].y = fVar3;
                pVVar2->vector[4].z = fVar4;
                pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (pVVar1 != (Vector3__Array *)0x0) {
                  if (pVVar1->max_length < 6) goto code_?;
                  fVar3 = pVVar1->vector[5].y;
                  fVar4 = pVVar1->vector[5].z;
                  if (pVVar2->max_length < 6) goto code_?;
                  pVVar2->vector[5].x = pVVar1->vector[5].x;
                  pVVar2->vector[5].y = fVar3;
                  pVVar2->vector[5].z = fVar4;
                  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                  if (pVVar1 != (Vector3__Array *)0x0) {
                    if (pVVar1->max_length < 7) goto code_?;
                    fVar3 = pVVar1->vector[6].y;
                    fVar4 = pVVar1->vector[6].z;
                    if (pVVar2->max_length < 7) goto code_?;
                    pVVar2->vector[6].x = pVVar1->vector[6].x;
                    pVVar2->vector[6].y = fVar3;
                    pVVar2->vector[6].z = fVar4;
                    pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (pVVar1 != (Vector3__Array *)0x0) {
                      if (7 < pVVar1->max_length) {
                        fVar3 = pVVar1->vector[7].y;
                        fVar4 = pVVar1->vector[7].z;
                        if (7 < pVVar2->max_length) {
                          pVVar2->vector[7].x = pVVar1->vector[7].x;
                          pVVar2->vector[7].y = fVar3;
                          pVVar2->vector[7].z = fVar4;
                          pQVar6 = Cube_GetToTopRotation
                                             ((Quaternion *)&stack0xffffffd4,direction,
                                              (MethodInfo *)0x0);
                          uVar7 = 0;
                          __return_storage_ptr__ = (Vector3 *)pQVar6->x;
                          fVar4 = pQVar6->y;
                          fVar3 = pQVar6->z;
                          fVar8 = pQVar6->w;
                          while( true ) {
                            if ((int)pVVar2->max_length <= (int)uVar7) {
                              return pVVar2;
                            }
                            if (pVVar2->max_length <= uVar7) break;
                            rotation.y = fVar4;
                            rotation.x = (float)__return_storage_ptr__;
                            rotation.z = fVar3;
                            rotation.w = fVar8;
                            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                     Quaternion_op_Multiply_1
                                               (&VStack_10,rotation,*pVVar5,(MethodInfo *)0x0);
                            fVar4 = pVVar9->x;
                            fVar3 = pVVar9->y;
                            fVar8 = pVVar9->z;
                            __return_storage_ptr__ = (Vector3 *)&stack0xffffffe4;
                            pVVar9 = MathFunctions::MathFunctions_RoundVector
                                               (__return_storage_ptr__,*pVVar9,3,(MethodInfo *)0x0);
                            fVar11 = pVVar9->y;
                            fVar12 = pVVar9->z;
                            if (pVVar2->max_length <= uVar7) break;
                            uVar7 = uVar7 + 1;
                            pVVar5->x = pVVar9->x;
                            pVVar5->y = fVar11;
                            pVVar5->z = fVar12;
                            pVVar5 = pVVar5 + 1;
                          }
                        }
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
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar13)();
  return pVVar1;
}


/* Void SetEdge(Cube, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge
               (Cube *cube,Face__Enum face,Edge__Enum edge,Vector3__Array *edgeVertices,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    func_?(TypeInfo__Cube->static_fields,pVVar1);
    Cube_SetEdge_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,edge,edgeVertices,
                   (MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
              ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEdge(Vector3[] ByRef, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge_1
               (Vector3__Array **corners,Face__Enum face,Edge__Enum edge,
               Vector3__Array *edgeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  pVVar1 = *corners;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  switch(edge) {
  case Edge__Enum_Front:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (pVVar1->max_length != 0) {
          pVVar1->vector[0].x = edgeVertices->vector[0].x;
          pVVar1->vector[0].y = fVar2;
          pVVar1->vector[0].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (1 < pVVar1->max_length) {
              pVVar1->vector[1].x = edgeVertices->vector[1].x;
              pVVar1->vector[1].y = fVar2;
              pVVar1->vector[1].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  case Edge__Enum_Back:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (2 < pVVar1->max_length) {
          pVVar1->vector[2].x = edgeVertices->vector[0].x;
          pVVar1->vector[2].y = fVar2;
          pVVar1->vector[2].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (3 < pVVar1->max_length) {
              pVVar1->vector[3].x = edgeVertices->vector[1].x;
              pVVar1->vector[3].y = fVar2;
              pVVar1->vector[3].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  case Edge__Enum_Left:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (3 < pVVar1->max_length) {
          pVVar1->vector[3].x = edgeVertices->vector[0].x;
          pVVar1->vector[3].y = fVar2;
          pVVar1->vector[3].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (pVVar1->max_length != 0) {
              pVVar1->vector[0].x = edgeVertices->vector[1].x;
              pVVar1->vector[0].y = fVar2;
              pVVar1->vector[0].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  case Edge__Enum_Right:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (1 < pVVar1->max_length) {
          pVVar1->vector[1].x = edgeVertices->vector[0].x;
          pVVar1->vector[1].y = fVar2;
          pVVar1->vector[1].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (2 < pVVar1->max_length) {
              pVVar1->vector[2].x = edgeVertices->vector[1].x;
              pVVar1->vector[2].y = fVar2;
              pVVar1->vector[2].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  default:
code_?:
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    Cube_SetFace_1(corners,face,pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  func_?();
  return;
}


/* Void SetFace(Cube, Face, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetFace
               (Cube *cube,Face__Enum face,Vector3__Array *faceVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    func_?(TypeInfo__Cube->static_fields,pVVar1);
    Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,faceVertices,
                   (MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
              ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFace(Vector3[] ByRef, Face, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetFace_1
               (Vector3__Array **corners,Face__Enum face,Vector3__Array *faceVertices,
               MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    pVVar1 = *corners;
    if ((faceVertices == (Vector3__Array *)0x0) ||
       (func_?(), pVVar1 == (Vector3__Array *)0x0)) break;
    func_?(0,uStack_2,uStack_3);
    pVVar4 = *corners;
    func_?(&uStack_2,1);
    pVVar1 = (Vector3__Array *)0x0;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    func_?(1,uStack_2,uStack_3);
    pVVar1 = *corners;
    func_?(&uStack_2,2);
    if (pVVar1 == (Vector3__Array *)0x0) break;
    uVar5 = 2;
    goto code_?;
  case Face__Enum_Bottom:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(4,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(5,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(6,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(7,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  case Face__Enum_Front:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(7,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(6,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(1,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(0,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  case Face__Enum_Back:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(5,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(4,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(3,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(2,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  case Face__Enum_Left:
    pVVar1 = *corners;
    if ((faceVertices == (Vector3__Array *)0x0) ||
       (func_?(), pVVar1 == (Vector3__Array *)0x0)) break;
    func_?(4,uStack_2,uStack_3);
    pVVar4 = *corners;
    func_?(&uStack_2,1);
    pVVar1 = (Vector3__Array *)0x0;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    func_?(7,uStack_2,uStack_3);
    pVVar1 = *corners;
    func_?(&uStack_2,2);
    if (pVVar1 == (Vector3__Array *)0x0) break;
    uVar5 = 0;
code_?:
    func_?(uVar5,uStack_2,uStack_3);
    pVVar4 = *corners;
    func_?(&uStack_2,3);
    if (pVVar4 != (Vector3__Array *)0x0) {
      func_?(3,uStack_2,uStack_3);
code_?:
      return;
    }
    break;
  case Face__Enum_Right:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(6,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(5,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(2,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(1,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  default:
    goto code_?;
  }
  bVar6 = 0;
  bVar7 = func_?();
  bVar8 = bVar7 < 0x66 || (byte)(bVar7 + 0x9a) < bVar6;
  bVar7 = *extraout_ECX;
  bVar6 = *extraout_ECX;
  *extraout_ECX = bVar6 + unaff_DI + bVar8;
  sVar9 = (short)&stack0xffffffe8;
  puVar10 = (undefined4 *)segment(in_SS,sVar9);
  bVar11 = (byte)((uint)*puVar10 >> 8);
  segment(in_SS,sVar9 + 4);
  bVar12 = (byte)extraout_ECX;
  *(undefined4 *)(CONCAT22((short)((uint)&stack0xffffffe8 >> 0x10),sVar9 + 8) + -4) = 0x69b01058;
  extraout_ECX[0x6a] =
       extraout_ECX[0x6a] + bVar12 +
       (CARRY1((byte)pVVar1,bVar12) ||
       CARRY1((byte)pVVar1 + bVar12,
              CARRY1(extraout_DH,bVar11) ||
              CARRY1(extraout_DH + bVar11,CARRY1(bVar7,unaff_DI) || CARRY1(bVar6 + unaff_DI,bVar8)))
       );
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetMaterial(Cube, Face, Byte) */

void Assembly-CSharp.dll::Cube::Cube_SetMaterial
               (Cube *cube,Face__Enum face,uint8_t materialId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((cube != (Cube *)0x0) &&
     (pBVar2 = (cube->fields)._.faceMaterials, pBVar2 != (Byte__Array *)0x0)) {
    if (face < pBVar2->max_length) {
      pBVar2->vector[face] = materialId;
      return;
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[UnityEngine.Vector3] SquareCornersToCubeCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_SquareCornersToCubeCorners
          (List_1_UnityEngine_Vector2_ *corners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (corners != (List_1_UnityEngine_Vector2_ *)0x0) {
    VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (corners,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (corners,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      func_?(pLVar1,VVar2.x - _UNK_?,0x3f000000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack0000001c = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack3 = pLVar1;
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000034 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack4 = pLVar1;
      func_?();
      _uStack0000001c = CONCAT44(&UNK_?,uStack5);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack0000001c = CONCAT44(&UNK_?,uStack5);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack0000004c = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack6 = pLVar1;
      func_?();
      _uStack00000034 = CONCAT44(&UNK_?,uStack7);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000034 = CONCAT44(&UNK_?,uStack7);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000064 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack8 = pLVar1;
      func_?();
      _uStack0000004c = CONCAT44(&UNK_?,uStack9);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack0000004c = CONCAT44(&UNK_?,uStack9);
      VVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack11 = VVar10.y - _UNK_?;
      pMStack12 =
           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uStack13 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack14 = pLVar1;
      func_?();
      _uStack00000064 = CONCAT44(&UNK_?,uStack15);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000064 = CONCAT44(&UNK_?,uStack15);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      pLStack16 = pLVar1;
      func_?();
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar1 = Cube_CreateCubeCornersFromTopFace(pLVar1,0xADDR,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar17)();
  return pLVar1;
}


/* Void UnIndentFace(Cube, Face) */

void Assembly-CSharp.dll::Cube::Cube_UnIndentFace(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  uVar2 = 0;
  pfVar3 = &pVVar1->vector[0].y;
  do {
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar1->max_length <= uVar2) goto code_?;
    *pfVar3 = 0.5;
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 3;
  } while ((int)uVar2 < 4);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pQVar4 = Cube_GetFromTopRotation((Quaternion *)&stack0xffffffd4,face,(MethodInfo *)0x0);
  pVVar5 = pVVar1->vector;
  fVar6 = pQVar4->x;
  fVar7 = pQVar4->y;
  fVar8 = pQVar4->z;
  fVar9 = pQVar4->w;
  for (uVar2 = 0; (int)uVar2 < (int)pVVar1->max_length; uVar2 = uVar2 + 1) {
    if (pVVar1->max_length <= uVar2) goto code_?;
    fVar10 = pVVar5->y;
    fVar11 = pVVar5->z;
    fVar12 = 0.0;
    rotation.y = fVar7;
    rotation.x = fVar6;
    rotation.z = fVar8;
    rotation.w = fVar9;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,rotation,*pVVar5,(MethodInfo *)0x0);
    fVar6 = fVar10;
    fVar7 = fVar11;
    fVar8 = fVar12;
    pVVar13 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&pVStack_14,*pVVar13,3,(MethodInfo *)0x0);
    fVar11 = pVVar13->y;
    fVar10 = pVVar13->z;
    if (pVVar1->max_length <= uVar2) goto code_?;
    pVVar5->x = pVVar13->x;
    pVVar5->y = fVar11;
    pVVar5->z = fVar10;
    pVVar5 = pVVar5 + 1;
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar15 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      pVStack_14 = (Vector3__Array *)TypeInfo__Cube;
      func_?();
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar15;
    pVStack_14 = pVVar15;
    func_?();
    Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,pVVar1,(MethodInfo *)0x0)
    ;
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
              ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0)
    ;
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_0(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_0
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (Cube__Class *)&TypeInfo__Cube;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__Cube;
    func_?();
  }
  pVVar2 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((uint)i < pVVar2->max_length) {
      pfVar3 = &pVVar2->vector[i].y;
      return *pfVar3 <= _UNK_? && _UNK_? != *pfVar3;
    }
    pCStack_1 = (Cube__Class *)0x0;
    puStack_4 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pCStack_1 = (Cube__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_1(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_1
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (Cube__Class *)&TypeInfo__Cube;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__Cube;
    func_?();
  }
  pVVar2 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((uint)i < pVVar2->max_length) {
      return _UNK_? < pVVar2->vector[i].y;
    }
    pCStack_1 = (Cube__Class *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pCStack_1 = (Cube__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_2(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_2
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (Cube__Class *)&TypeInfo__Cube;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__Cube;
    func_?();
  }
  pVVar2 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((uint)i < pVVar2->max_length) {
      return _UNK_? < pVVar2->vector[i].z;
    }
    pCStack_1 = (Cube__Class *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pCStack_1 = (Cube__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_3(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_3
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (Cube__Class *)&TypeInfo__Cube;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__Cube;
    func_?();
  }
  pVVar2 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((uint)i < pVVar2->max_length) {
      pfVar3 = &pVVar2->vector[i].z;
      return *pfVar3 <= _UNK_? && _UNK_? != *pfVar3;
    }
    pCStack_1 = (Cube__Class *)0x0;
    puStack_4 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pCStack_1 = (Cube__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_4(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_4
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (Cube__Class *)&TypeInfo__Cube;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__Cube;
    func_?();
  }
  pVVar2 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((uint)i < pVVar2->max_length) {
      return _UNK_? < pVVar2->vector[i].x;
    }
    pCStack_1 = (Cube__Class *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pCStack_1 = (Cube__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_5(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_5
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (Cube__Class *)&TypeInfo__Cube;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__Cube;
    func_?();
  }
  pVVar2 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((uint)i < pVVar2->max_length) {
      return pVVar2->vector[i].x <= _UNK_? && _UNK_? != pVVar2->vector[i].x;
    }
    pCStack_1 = (Cube__Class *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pCStack_1 = (Cube__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Cube() */

void Assembly-CSharp.dll::Cube::Cube__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
  func_?(TypeInfo__Cube->static_fields,pVVar1);
  return;
}


/* Cube(Byte[], Byte[]) */

void Assembly-CSharp.dll::Cube::Cube__ctor
               (Cube *this,Byte__Array *byteCorners,Byte__Array *faceMaterials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?();
  }
  else {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Byte;
    if (unaff_ESI == (Object *)0x0) {
      (this->fields)._.byteCorners = (Byte__Array *)0x0;
      iVar2 = 0;
code_?:
      ppBVar3 = &(this->fields)._.byteCorners;
      func_?(ppBVar3,iVar2);
      pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
      ppBVar4 = &(this->fields)._.faceMaterials;
      *ppBVar4 = pBVar1;
      method_00 = (MethodInfo *)ppBVar4;
      func_?(ppBVar4,pBVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      *ppBVar3 = byteCorners;
      func_?(ppBVar3,byteCorners);
      *ppBVar4 = faceMaterials;
      func_?(ppBVar4,faceMaterials);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)this,(MethodInfo *)0x0);
      return;
    }
    pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    unaff_EDI = (Byte__Array__Class *)&(this->fields)._.byteCorners;
    *(Byte__Array **)unaff_EDI = pBVar1;
    in_ECX = TypeInfo__System__Byte;
    iVar2 = func_?(unaff_ESI,TypeInfo__System__Byte);
    if (iVar2 != 0) goto code_?;
  }
  func_?(unaff_ESI,in_ECX);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Cube(BytePacker, Byte) */

void Assembly-CSharp.dll::Cube::Cube__ctor_1
               (Cube *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 != (Byte__Array *)0x0) {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    pBVar2 = TypeInfo__System__Byte;
    if (unaff_ESI == (Object *)0x0) {
      (this->fields)._.byteCorners = (Byte__Array *)0x0;
      iVar3 = 0;
    }
    else {
      pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
      if (pBVar1 == (Byte__Array *)0x0) {
        func_?(unaff_ESI,pBVar2);
        goto code_?;
      }
      (this->fields)._.byteCorners = pBVar1;
      in_ECX = TypeInfo__System__Byte;
      iVar3 = func_?(unaff_ESI,TypeInfo__System__Byte);
      if (iVar3 == 0) goto code_?;
    }
    ppBVar4 = &(this->fields)._.byteCorners;
    func_?(ppBVar4,iVar3);
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    unaff_ESI = (Object *)&(this->fields)._.faceMaterials;
    *(Byte__Array **)unaff_ESI = pBVar1;
    func_?(unaff_ESI,pBVar1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_5);
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      cRam_? = '\x01';
    }
    if ((byteFlags & 1) == 0) {
      if (bp != (BytePacker *)0x0) {
        pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                           (bp,8,(MethodInfo *)0x0);
        *ppBVar4 = pBVar1;
        func_?(ppBVar4,pBVar1);
        goto code_?;
      }
    }
    else {
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
      *ppBVar4 = pBVar1;
      func_?(ppBVar4,pBVar1);
      if (bp != (BytePacker *)0x0) {
code_?:
        if ((byteFlags & 2) == 0) {
          pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                             (bp,6,(MethodInfo *)0x0);
          *(Byte__Array **)unaff_ESI = pBVar1;
          func_?(unaff_ESI,pBVar1);
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                    ((CubeBase *)this,(MethodInfo *)0x0);
          return;
        }
        uVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                          (bp,(MethodInfo *)0x0);
        uVar7 = 0;
        while (pBVar1 = *(Byte__Array **)unaff_ESI, pBVar1 != (Byte__Array *)0x0) {
          if (pBVar1->max_length <= uVar7) goto code_?;
          pBVar1->vector[uVar7] = uVar6;
          uVar7 = uVar7 + 1;
          if (5 < (int)uVar7) {
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                      ((CubeBase *)this,(MethodInfo *)0x0);
            return;
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
  func_?(unaff_ESI,in_ECX);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

