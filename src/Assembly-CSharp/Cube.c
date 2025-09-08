
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
      iVar4 = 1;
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
        auVar12._0_8_ =
             (double)(((float)uVar6 - (float)uVar10) * ((float)uVar6 - (float)uVar10) +
                      ((float)uVar5 - (float)uVar9) * ((float)uVar5 - (float)uVar9) +
                     fVar11 * fVar11);
        auVar12._8_8_ = 0;
        if (auVar12._0_8_ < 0.0) {
          func_?();
          dVar13 = auVar12._0_8_;
        }
        else {
          dVar13 = SQRT(auVar12._0_8_);
        }
        fVar11 = (float)dVar13;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (_UNK_? < fVar11) {
          fVar11 = _UNK_?;
        }
        pSVar1 = (faceData->fields).lightValues;
        if (pSVar1 == (Single__Array *)0x0) break;
        uVar8 = index & 0x80000003;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
        }
        if (pSVar1->max_length <= uVar8) goto code_?;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (_UNK_? < fVar11) {
          fVar11 = _UNK_?;
        }
        fStack_14 = (_UNK_? - pSVar1->vector[uVar8]) * fVar11 + pSVar1->vector[uVar8];
        if (fStack_2 < fStack_14) {
          fStack_14 = fStack_2;
        }
        iVar4 = iVar4 + 1;
        fStack_2 = fStack_14;
        if (3 < iVar4) {
          return fStack_14;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  fVar16 = (float10)(*pcVar15)();
  return (float)fVar16;
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
    func_?(0x6a6c);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  uVar1 = faceCornerIndex + face * 4;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
  if (pIVar2 != (IntVector__Array__Array *)0x0) {
    if (pIVar2->max_length <= uVar1) goto code_?;
    pIStack_3 = pIVar2->vector[uVar1];
    pIVar4 = TypeInfo__SharedCubeFunctions->static_fields->LightTestInwardsOffset;
    if (pIVar4 != (IntVector__Array *)0x0) {
      if (pIVar4->max_length <= face) goto code_?;
      uStack_5._0_2_ = pIVar4->vector[face].x;
      uStack_5._2_2_ = pIVar4->vector[face].y;
      pIVar6 = pIStack_3->vector;
      iVar7 = pIVar4->vector[face].z;
      uVar1 = 0;
      iStack_8 = 0;
      if (pIStack_3 != (IntVector__Array *)0x0) {
        while (uVar9 = (undefined2)((uint)in_stack_10 >> 0x10),
              uVar1 < pIStack_3->max_length) {
          iVar11 = pIVar6->z;
          uVar12 = pIVar6->x;
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
            in_stack_10 = (MethodInfo *)CONCAT22(uVar9,iVar7);
            i1.z = (int16_t)uVar16;
            i1._0_4_ = auStack_17;
            i2_00.y = in_stack_15;
            i2_00.x = iVar11;
            i2_00.z = (int16_t)uStack_5;
            IVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                               (i1,i2_00,in_stack_10);
            iVar11 = *(int16_t *)(IVar13._0_4_ + 1);
            uVar16 = *IVar13._0_4_;
          }
          if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
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
          uVar1 = uVar1 + 1;
          iStack_8 = iStack_8 + uVar19;
          pIVar6 = pIVar6 + 1;
          if (3 < (int)uVar1) {
            return (float)iStack_8 * _UNK_?;
          }
        }
        goto code_?;
      }
    }
  }
code_?:
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
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    func_?(0x1d88);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCubeFunctions);
    in_stack_1 = 0x106a;
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uStack_2 = 0.0;
  iStack_3 = 0;
  IStack_4.x = 0;
  IStack_4.y = 0;
  IStack_4.z = 0;
  fVar5 = (float)(faceCornerIndex + face * 4);
  CStack_6.cube = (Cube *)0x0;
  CStack_6.lightValue = 0;
  CStack_6._5_3_ = 0;
  uStack_7 = 0;
  fStack_8 = fVar5;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar9 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (cornerIndexToVertex != (Int32__Array *)0x0) {
    if (cornerIndexToVertex->max_length <= (uint)faceCornerIndex) goto code_?;
    if (pVVar9 != (Vector3__Array *)0x0) {
      uVar10 = cornerIndexToVertex->vector[faceCornerIndex];
      if (pVVar9->max_length <= uVar10) goto code_?;
      auStack_11._12_4_ = pVVar9->vector[uVar10].x;
      pIStack_12 = (Il2CppClass *)pVVar9->vector[uVar10].y;
      pIStack_13 = (Il2CppType *)pVVar9->vector[uVar10].z;
      VStack_14._0_8_ = unique0x0000a400;
      pIStack_15 = pIStack_13;
      pVStack_16 = (Vector3__Array *)func_?();
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pIVar17 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
      if (pIVar17 != (IntVector__Array__Array *)0x0) {
        if (pIVar17->max_length <= (uint)fVar5) goto code_?;
        pIStack_18 = pIVar17->vector[(int)fVar5];
        pIVar19 = TypeInfo__SharedCubeFunctions->static_fields->LightTestInwardsOffset;
        if (pIVar19 != (IntVector__Array *)0x0) {
          if (pIVar19->max_length <= face) goto code_?;
          uStack_20._0_2_ = pIVar19->vector[face].x;
          uStack_20._2_2_ = pIVar19->vector[face].y;
          iStack_21 = pIVar19->vector[face].z;
          pSVar22 = TypeInfo__SharedCubeFunctions->static_fields;
          pIVar23 = pSVar22->LightTestOppositeFaceCorners;
          if (pIVar23 != (Int32__Array__Array *)0x0) {
            if (pIVar23->max_length <= face) goto code_?;
            pIVar24 = pSVar22->LightTestSameFaceCorners;
            pIVar25 = pIVar23->vector[face];
            pIStack_26 = pIVar25;
            if (pIVar24 != (Int32__Array__Array *)0x0) {
              if (pIVar24->max_length <= face) goto code_?;
              pIVar27 = pSVar22->FaceHeightAxis;
              pIStack_28 = pIVar24->vector[face];
              if (pIVar27 != (Int32__Array *)0x0) {
                if (pIVar27->max_length <= face) goto code_?;
                iStack_29 = pIVar27->vector[face];
                pIVar27 = TypeInfo__SharedCubeFunctions->static_fields->FaceDirectionScalar;
                if (pIVar27 != (Int32__Array *)0x0) {
                  if (pIVar27->max_length <= face) goto code_?;
                  pVStack_30 = (Vector3__Array *)pIVar25->vector;
                  fStack_31 = (float)pIVar27->vector[face];
                  pIStack_32 = pIStack_18->vector;
                  iStack_33 = (int)pIStack_28 - (int)pIVar25;
                  pVStack_34 = (Vector3__Array *)0x0;
                  uStack_35 = 0x10;
                  fStack_36 = 0.0;
                  pVStack_37 = pVStack_30;
                  if (pIStack_18 != (IntVector__Array *)0x0) {
                    do {
                      fVar5 = fStack_36;
                      pVStack_30 = pVStack_37;
                      if (pIStack_18->max_length <= (uint)fStack_36) goto code_?;
                      uStack_2 = *(float *)pIStack_32;
                      iStack_3 = pIStack_32->z;
                      pVStack_38 = *(Vector3__Array **)pIStack_32;
                      uStack_39 = (Vector3__Array *)CONCAT22(pIStack_32->z,(undefined2)uStack_39);
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?(TypeInfo__MV__WorldObject__IntVector);
                      }
                      IVar40.z = cubePos.x;
                      IVar40._0_4_ = auStack_41;
                      i2_00.y = in_stack_42;
                      i2_00.x = cubePos.z;
                      i2_00.z = (int16_t)pVStack_38;
                      IVar40 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (IVar40,i2_00,
                                          (MethodInfo *)CONCAT22(in_stack_43,uStack_39._2_2_))
                      ;
                      if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)
                      goto code_?;
                      value = cells;
                      bVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                               WorldObject::IntVector,Cell]::
                               Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                                         (cells,*IVar40._0_4_,&CStack_6,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                                         );
                      if (bVar44 != 0) {
                        pVStack_38 = (Vector3__Array *)CStack_6.cube;
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?(TypeInfo__MV__WorldObject__CubeBase);
                        }
                        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                                  ((CubeBase *)pVStack_38,&pVStack_16,(MethodInfo *)0x0);
                        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__SharedCubeFunctions);
                        }
                        pFVar45 = TypeInfo__SharedCubeFunctions->static_fields->
                                 LightTestNormalTargetFaces;
                        if (pFVar45 == (Face__Enum__Array__Array *)0x0) goto code_?;
                        if (pFVar45->max_length <= (uint)fStack_8) goto code_?;
                        pFVar46 = pFVar45->vector[(int)fStack_8];
                        if (pFVar46 == (Face__Enum__Array *)0x0) goto code_?;
                        if (pFVar46->max_length <= (uint)fVar5) goto code_?;
                        pDVar47 = TypeInfo__SharedCubeFunctions->static_fields->
                                  VertexIndexToFaceIndexes;
                        if (pDVar47 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0)
                        goto code_?;
                        uStack_39 = *(Vector3__Array **)((int)pFVar46->vector + (uStack_35 - 0x10));
                        if ((Vector3__Array *)pDVar47->max_length <= uStack_39)
                        goto code_?;
                        if (pIVar25 == (Int32__Array *)0x0) goto code_?;
                        if (pIVar25->max_length <= (uint)fVar5) goto code_?;
                        if ((Dictionary_2_System_Int32_System_Object_ *)
                            pDVar47->vector[(int)uStack_39] ==
                            (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
                        pVStack_48 = (Vector3__Array *)
                                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32,System::Object]::
                                     Dictionary_2_System_Int32_System_Object__get_Item
                                               ((Dictionary_2_System_Int32_System_Object_ *)
                                                pDVar47->vector[(int)uStack_39],
                                                (int32_t)pVStack_37->klass,
                                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                               );
                        pVStack_38 = pVStack_16;
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Cube);
                        }
                        pVVar9 = Cube_GetNormals(pVStack_38,(Face__Enum)uStack_39,(MethodInfo *)0x0
                                                 );
                        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                        VStack_49.y = (float)pVStack_48;
                        VStack_49.x = (float)&fStack_50;
                        func_?();
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?((short)TypeInfo__MV__WorldObject__IntVector);
                        }
                        pVVar51 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            (&VStack_52,(IntVector *)&uStack_2,(MethodInfo *)0x0);
                        uStack_53._0_4_ = pVVar51->x;
                        uStack_53._4_4_ = pVVar51->y;
                        fStack_54 = pVVar51->z;
                        if (pIStack_28 == (Int32__Array *)0x0) goto code_?;
                        if (pIStack_28->max_length <= (uint)fVar5) goto code_?;
                        if (pVStack_16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fStack_55 = fStack_56 + fStack_54;
                        VStack_57.y = fStack_58 + uStack_53._4_4_;
                        VStack_57.x = (float)pIStack_59 + (float)uStack_53;
                        VStack_57.z = fStack_55;
                        pVVar51 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            (&VStack_60,(IntVector *)&uStack_2,(MethodInfo *)0x0);
                        uStack_61._0_4_ = pVVar51->x;
                        uStack_61._4_4_ = pVVar51->y;
                        fStack_62 = pVVar51->z;
                        if (pIVar25->max_length <= (uint)fVar5) goto code_?;
                        if (pVStack_16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        VStack_63.z = fStack_64 + fStack_62;
                        pIStack_65 = (Il2CppMethodPointer)(fStack_66 + (float)uStack_61);
                        fStack_67 = fStack_68 + uStack_61._4_4_;
                        uStack_69 = 0;
                        uStack_70 = 0;
                        VStack_71.y = fStack_67;
                        VStack_71.x = (float)pIStack_65;
                        VStack_71.z = VStack_63.z;
                        pVVar51 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            ((Vector3 *)&stack0xfffffe20,(IntVector *)&uStack_2,
                                             (MethodInfo *)0x0);
                        uStack_72._0_4_ = pVVar51->x;
                        uStack_72._4_4_ = pVVar51->y;
                        fStack_73 = pVVar51->z;
                        uVar10 = (int)fVar5 + 1U & 0x80000003;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                        }
                        if (pIVar25->max_length <= uVar10) goto code_?;
                        if (pVStack_16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fStack_74 = (float)auStack_11._8_4_ + fStack_73;
                        uStack_75 = CONCAT44((float)auStack_11._4_4_ + uStack_72._4_4_,
                                             (float)auStack_11._0_4_ + (float)uStack_72);
                        pVVar51 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                                            (&VStack_49,(IntVector *)&uStack_2,(MethodInfo *)0x0);
                        uStack_76._0_4_ = pVVar51->x;
                        uStack_76._4_4_ = pVVar51->y;
                        fStack_77 = pVVar51->z;
                        uVar10 = (int)fVar5 + 3U & 0x80000003;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                        }
                        if (pIVar25->max_length <= uVar10) goto code_?;
                        if (pVStack_16 == (Vector3__Array *)0x0) goto code_?;
                        iVar78 = pIVar25->vector[uVar10];
                        pfVar79 = &fStack_80;
                        func_?();
                        fVar5 = VStack_63.z;
                        fStack_81 = fStack_80 + (float)uStack_76;
                        puStack_82 = (undefined *)0x0;
                        iStack_83 = 0;
                        uStack_84 = 0;
                        pVStack_48 = (Vector3__Array *)(fStack_85 + uStack_76._4_4_);
                        fStack_86 = fStack_87 + fStack_77;
                        pMVar88 = (MethodInfo *)0x0;
                        uVar89 = (ushort)((uint)pIStack_65 >> 0x10);
                        fVar90 = (float10)func_?((short)pIStack_65,SUB42(fStack_67,0),
                                                          SUB42(VStack_63.z,0),(int)uStack_75,
                                                          (int)((ulonglong)uStack_75 >> 0x20),
                                                          fStack_74,0,0,pfVar79,iVar78);
                        pVStack_38 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)fVar90,pMVar88);
                        pMVar88 = (MethodInfo *)0x0;
                        in_stack_1 = (ushort)((uint)pIStack_65 >> 0x10);
                        fVar90 = (float10)func_?((short)pIStack_65,fStack_67,fVar5,
                                                          fStack_81,(short)pVStack_48,fStack_86);
                        pVStack_48 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)fVar90,pMVar88);
                        pMVar88 = (MethodInfo *)0x0;
                        fVar90 = (float10)func_?(VStack_14.x,VStack_14.y,(short)pIStack_15,
                                                          CONCAT44(fStack_67,pIStack_65),fVar5,0)
                        ;
                        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                           ((float)fVar90,pMVar88);
                        iVar78 = iStack_29;
                        pVStack_48 = (Vector3__Array *)((float)pVStack_48 * (float)pVStack_38);
                        pVStack_38 = (Vector3__Array *)((1.0 - fVar5) * (float)pVStack_48);
                        pVStack_48 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item(&VStack_57,iStack_29,(MethodInfo *)0x0);
                        uStack_39 = (Vector3__Array *)((float)pVStack_48 * fStack_31);
                        pVStack_30 = (Vector3__Array *)
                                     ((float)((uint)fStack_50 ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             ) * normal.x +
                                      (float)(uStack_91 ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             ) * normal.y +
                                      (float)((uint)pMStack_92 ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             ) * normal.z + _UNK_?);
                        pVStack_48 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item((Vector3 *)(auStack_11 + 0xc),iVar78,
                                                      (MethodInfo *)0x0);
                        uStack_39 = (Vector3__Array *)
                                    (((float)uStack_39 - (float)pVStack_48 * fStack_31) *
                                    (float)pVStack_38);
                        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                           ((float)pVStack_30 + (float)pVStack_30,(MethodInfo *)0x0)
                        ;
                        pVStack_48 = uStack_39;
                        pVStack_38 = (Vector3__Array *)(fVar5 * (float)uStack_39);
                        VStack_49.z = (float)&UNK_?;
                        pVStack_48 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item(&VStack_57,(iVar78 + 1) % 3,(MethodInfo *)0x0)
                        ;
                        VStack_49.z = (float)&UNK_?;
                        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                           (&VStack_71,(iVar78 + 1) % 3,(MethodInfo *)0x0);
                        pVStack_48 = (Vector3__Array *)((float)pVStack_48 - fVar5);
                        pVStack_38 = (Vector3__Array *)
                                     ((_UNK_? - (float)((uint)pVStack_48 & _UNK_?)) *
                                     (float)pVStack_38);
                        VStack_49.z = (float)&UNK_?;
                        pVStack_48 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                     Vector3_get_Item(&VStack_57,(iVar78 + 2) % 3,(MethodInfo *)0x0)
                        ;
                        VStack_49.z = (float)&UNK_?;
                        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                           (&VStack_71,(iVar78 + 2) % 3,(MethodInfo *)0x0);
                        uStack_39 = (Vector3__Array *)
                                    ((_UNK_? -
                                     (float)((uint)((float)pVStack_48 - fVar5) & _UNK_?)) *
                                    (float)pVStack_38);
                        pVStack_48 = uStack_39;
                        iVar93 = func_?();
                        iStack_83 = (int)uStack_2._2_2_;
                        uStack_84 = 0;
                        iVar94 = func_?();
                        fStack_81 = (float)(int)iStack_3;
                        puStack_82 = (undefined *)0x0;
                        iVar95 = func_?();
                        pIVar25 = pIStack_26;
                        pVVar9 = pVStack_48;
                        if (iVar95 + iVar94 + iVar93 == 3) {
                          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__SharedCubeFunctions);
                          }
                          fVar5 = fStack_36;
                          pIVar25 = pIStack_26;
                          pFVar46 = TypeInfo__SharedCubeFunctions->static_fields->
                                    LightTestNormalSecondaryTargetFaces;
                          if (pFVar46 == (Face__Enum__Array *)0x0) goto code_?;
                          if (pFVar46->max_length <= (uint)fStack_8) goto code_?;
                          pDVar47 = TypeInfo__SharedCubeFunctions->static_fields->
                                    VertexIndexToFaceIndexes;
                          if (pDVar47 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0)
                          goto code_?;
                          pVStack_38 = (Vector3__Array *)pFVar46->vector[(int)fStack_8];
                          if (((Vector3__Array *)pDVar47->max_length <= pVStack_38) ||
                             (pIStack_26->max_length <= (uint)fStack_36)) goto code_?;
                          if ((Dictionary_2_System_Int32_System_Object_ *)
                              pDVar47->vector[(int)pVStack_38] ==
                              (Dictionary_2_System_Int32_System_Object_ *)0x0)
                          goto code_?;
                          pVStack_30 = (Vector3__Array *)
                                       mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Int32,System::Object]::
                                       Dictionary_2_System_Int32_System_Object__get_Item
                                                 ((Dictionary_2_System_Int32_System_Object_ *)
                                                  pDVar47->vector[(int)pVStack_38],
                                                  (int32_t)pVStack_37->klass,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                 );
                          pVStack_48 = pVStack_16;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__Cube);
                          }
                          pVVar9 = Cube_GetNormals(pVStack_48,(Face__Enum)pVStack_38,
                                                    (MethodInfo *)0x0);
                          if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                          VStack_49.y = (float)pVStack_30;
                          VStack_49.x = (float)&VStack_14.z;
                          func_?();
                          fVar96 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                             ((float)((uint)VStack_14.z ^
                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ) * normal.x +
                                              (float)((uint)fStack_97 ^
                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ) * normal.y +
                                              (float)((uint)fStack_98 ^
                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ) * normal.z + _UNK_?,(MethodInfo *)0x0);
                          uStack_39 = (Vector3__Array *)(fVar96 * (float)uStack_39);
                          fStack_36 = fVar5;
                          pVVar9 = uStack_39;
                        }
                        value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                ((uint)uVar89 << 0x10);
                        pVStack_34 = (Vector3__Array *)((float)pVStack_34 + (float)pVVar9);
                        fVar5 = fStack_36;
                      }
                      corners = (Vector3__Array **)((uint)in_stack_1 << 0x10);
                      fStack_36 = (float)((int)fVar5 + 1);
                      uStack_35 = uStack_35 + 4;
                      pVStack_37 = (Vector3__Array *)&pVStack_37->monitor;
                      pIStack_32 = pIStack_32 + 1;
                    } while ((int)uStack_35 < 0x20);
                    pVStack_37 = (Vector3__Array *)pIVar25->vector;
                    iStack_33 = (int)pIStack_28 - (int)pIVar25;
                    uStack_39 = (Vector3__Array *)0x0;
                    pVStack_30 = (Vector3__Array *)pIStack_18->vector;
                    uStack_35 = 0;
                    while (uVar99 = (undefined2)((uint)in_stack_100 >> 0x10),
                          uStack_35 < pIStack_18->max_length) {
                      pOVar101 = (Object__Class *)pVStack_30->klass;
                      iVar102 = *(int16_t *)&pVStack_30->monitor;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?(TypeInfo__MV__WorldObject__IntVector);
                      }
                      in_stack_100 = (MethodInfo *)CONCAT22(uVar99,iStack_21);
                      i1.z = (int16_t)pOVar101;
                      i1._0_4_ = auStack_41;
                      i2.y = in_stack_103;
                      i2.x = iVar102;
                      i2.z = (int16_t)uStack_20;
                      IVar40 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (i1,i2,in_stack_100);
                      pIVar104 = IVar40._0_4_;
                      IStack_4.x = pIVar104->x;
                      IStack_4.y = pIVar104->y;
                      IStack_4.z = pIVar104->z;
                      bVar44 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                                         (*pIVar104,TypeInfo__MV__WorldObject__IntVector->
                                                   static_fields->Zero,(MethodInfo *)0x0);
                      iVar102 = IStack_4.z;
                      uVar105 = IStack_4._0_4_;
                      uVar106 = (ushort)((uint)corners >> 0x10);
                      uVar89 = (ushort)((uint)value >> 0x10);
                      if (bVar44 == 0) {
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          uVar106 = 0x106a;
                          func_?(TypeInfo__MV__WorldObject__IntVector);
                        }
                        i1_00.z = cubePos.x;
                        i1_00._0_4_ = (int)&uStack_53 + 4;
                        i2_01.y = uVar89;
                        i2_01.x = cubePos.z;
                        i2_01.z = (int16_t)uVar105;
                        IVar40 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition
                                           (i1_00,i2_01,(MethodInfo *)CONCAT22(uVar106,iVar102));
                        cVar107 = func_?(cells,*IVar40._0_4_,
                                                 *(undefined2 *)(IVar40._0_4_ + 1),&uStack_7,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                                                );
                        corners = (Vector3__Array **)((uint)uVar106 << 0x10);
                        value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                ((uint)uVar89 << 0x10);
                        if (cVar107 != '\0') {
                          cube = (CubeBase *)uStack_7;
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?(TypeInfo__MV__WorldObject__CubeBase);
                          }
                          corners = &pVStack_16;
                          uVar89 = 0x106a;
                          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                                    (cube,corners,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?((short)TypeInfo__MV__WorldObject__IntVector);
                          }
                          pVVar51 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                    IntVector_ToVector3(&VStack_49,&IStack_4,(MethodInfo *)0x0);
                          uVar10 = uStack_35;
                          VStack_57.x = pVVar51->x;
                          VStack_57.y = pVVar51->y;
                          VStack_57.z = pVVar51->z;
                          if (pIStack_28 == (Int32__Array *)0x0) goto code_?;
                          if (pIStack_28->max_length <= uStack_35) break;
                          if (pVStack_16 == (Vector3__Array *)0x0) goto code_?;
                          func_?();
                          VStack_52.x = VStack_14.z + VStack_57.x;
                          VStack_52.y = fStack_97 + VStack_57.y;
                          VStack_63.z = fStack_98 + VStack_57.z;
                          puStack_82 = (undefined *)0x0;
                          iStack_83 = 0;
                          uStack_84 = 0;
                          VStack_52.z = 0.0;
                          puStack_108 = (undefined *)0x0;
                          fStack_81 = VStack_52.x;
                          VStack_63.x = VStack_52.x;
                          VStack_63.y = VStack_52.y;
                          fStack_87 = VStack_63.z;
                          fStack_36 = VStack_52.y;
                          pVVar51 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                    IntVector_ToVector3((Vector3 *)&stack0xfffffe20,&IStack_4,
                                                        (MethodInfo *)0x0);
                          uStack_75._0_4_ = pVVar51->x;
                          uStack_75._4_4_ = pVVar51->y;
                          fStack_74 = pVVar51->z;
                          if (pIStack_26 == (Int32__Array *)0x0) goto code_?;
                          if (pIStack_26->max_length <= uVar10) break;
                          if (pVStack_16 == (Vector3__Array *)0x0) goto code_?;
                          func_?();
                          iVar78 = iStack_29;
                          pIStack_109 = (Il2CppMethodPointer)(VStack_71.x + (float)uStack_75);
                          pIStack_59 = (IntVector *)(VStack_71.y + uStack_75._4_4_);
                          pMVar88 = (MethodInfo *)(VStack_71.z + fStack_74);
                          fStack_67 = 0.0;
                          uStack_69 = 0;
                          uStack_70 = 0;
                          fStack_58 = 0.0;
                          fStack_56 = 0.0;
                          pIStack_65 = pIStack_109;
                          auStack_11._0_4_ = pIStack_109;
                          auStack_11._4_4_ = pIStack_59;
                          auStack_11._8_4_ = pMVar88;
                          pMStack_92 = pMVar88;
                          pIStack_32 = pIStack_59;
                          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                   Vector3_get_Item((Vector3 *)(auStack_11 + 0xc),iStack_29,
                                                    (MethodInfo *)0x0);
                          pVStack_48 = (Vector3__Array *)(fVar5 * fStack_31);
                          fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                      Vector3_get_Item(&VStack_63,iVar78,(MethodInfo *)0x0);
                          fStack_8 = fStack_8 * fStack_31;
                          in_stack_100 = (MethodInfo *)auStack_11;
                          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                   Vector3_get_Item((Vector3 *)in_stack_100,iVar78,
                                                    (MethodInfo *)0x0);
                          value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                  ((uint)uVar89 << 0x10);
                          pVStack_38 = (Vector3__Array *)(fVar5 * fStack_31);
                          if (((float)pVStack_48 <= (float)pVStack_38) ||
                             (fStack_8 <= (float)pVStack_48)) {
                            if ((float)pVStack_48 < (float)pVStack_38) {
                              uVar89 = 0;
                              fVar90 = (float10)func_?(VStack_14.x._0_2_,VStack_14.y._0_2_,
                                                                (short)pIStack_15,(short)pIStack_109
                                                                ,(short)pIStack_59,(short)pMVar88,0
                                                                ,0);
                              value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)(float)fVar90;
                              fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                                 ((float)value,pMVar88);
                              corners = (Vector3__Array **)((uint)uVar89 << 0x10);
                              uStack_39 = (Vector3__Array *)((1.0 - fVar5) + (float)uStack_39);
                            }
                          }
                          else {
                            fStack_86 = fStack_87 - (float)pMStack_92;
                            fStack_55 = (float)pIStack_13 - (float)pMStack_92;
                            puVar110 = (undefined8 *)
                                      func_?((short)&VStack_60,
                                                      SUB42((float)auStack_11._12_4_ -
                                                            (float)pIStack_65,0),
                                                      SUB42((float)pIStack_12 - (float)pIStack_32,0)
                                                      ,SUB42(fStack_55,0),
                                                      SUB42(fStack_81 - (float)pIStack_65,0),
                                                      SUB42(fStack_36 - (float)pIStack_32,0),
                                                      SUB42(fStack_86,0),0);
                            uVar111 = *puVar110;
                            fStack_77 = *(float *)(puVar110 + 1);
                            uStack_76._4_4_ = (float)((ulonglong)uVar111 >> 0x20);
                            fVar96 = (float)pIStack_32 + uStack_76._4_4_;
                            uStack_76._0_4_ = (float)uVar111;
                            fVar5 = (float)pIStack_65 + (float)uStack_76;
                            fStack_64 = (float)pMStack_92 + fStack_77;
                            pMVar88 = (MethodInfo *)0x0;
                            uVar99 = SUB42(pIStack_15,0);
                            uStack_76 = uVar111;
                            fVar90 = (float10)func_?(VStack_14.x._0_2_,VStack_14.y._0_2_,
                                                              uVar99,SUB42(fVar5,0),SUB42(fVar96,0)
                                                              ,SUB42(fStack_64,0),0);
                            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)fVar90,pMVar88);
                            pVStack_48 = (Vector3__Array *)(1.0 - fVar5);
                            uVar112 = SUB42(VStack_52.x,0);
                            uVar113 = (undefined2)((uint)VStack_52.x >> 0x10);
                            uVar89 = (ushort)((uint)VStack_52.y >> 0x10);
                            fVar90 = (float10)func_?(VStack_14.x._0_2_,VStack_14.y._0_2_,
                                                              uVar99,uVar112,SUB42(VStack_52.y,0),
                                                              fStack_87,0,0);
                            value = (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)(float)fVar90;
                            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                               ((float)value,(MethodInfo *)CONCAT22(uVar113,uVar112));
                            corners = (Vector3__Array **)((uint)uVar89 << 0x10);
                            uStack_39 = (Vector3__Array *)
                                        (fVar5 * (float)pVStack_48 + (float)uStack_39);
                          }
                        }
                      }
                      uStack_35 = uStack_35 + 1;
                      pVStack_37 = (Vector3__Array *)&pVStack_37->monitor;
                      pVStack_30 = (Vector3__Array *)((int)&pVStack_30->monitor + 2);
                      if (3 < (int)uStack_35) {
                        if ((float)pVStack_34 <= (float)uStack_39) {
                          pVStack_34 = uStack_39;
                        }
                        return 1.0 - (float)pVStack_34 * _UNK_?;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar114 = (code *)swi(3);
  fVar90 = (float10)(*pcVar114)();
  return (float)fVar90;
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
      pVVar2 = *faceVertices;
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
  pLVar3 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar3,8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this = (MethodInfo *)func_?();
  puVar4 = &UNK_?;
  pMVar5 = this;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)this,8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  iVar6 = 0;
  if (cubeCorners == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  while (iVar6 < (cubeCorners->fields)._size) {
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,
                         iVar6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar9 = *(undefined8 *)pPVar7;
    fVar10 = (float)pPVar7->SecondAxisSign;
    PVar11 = *pPVar7;
    if (pLVar3 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    piVar12 = &(pLVar3->fields)._version;
    *piVar12 = *piVar12 + 1;
    pMVar13 = (pLVar3->fields)._items;
    if (pMVar13 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    uVar14 = (pLVar3->fields)._size;
    if (uVar14 < pMVar13->max_length) {
      (pLVar3->fields)._size = uVar14 + 1;
      if (pMVar13->max_length <= uVar14) goto code_?;
      *(undefined8 *)(&pMVar13->vector[0].index + uVar14 * 3) = uVar9;
      (&pMVar13->vector[0].actualWidth)[uVar14 * 3] = fVar10;
      iVar6 = iVar6 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,PVar11,
                 pMVar8->klass->rgctx_data[0xe].method);
      iVar6 = iVar6 + 1;
    }
  }
  iVar6 = 0;
  while (iVar6 < (cubeCorners->fields)._size) {
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,
                         iVar6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar9 = *(undefined8 *)pPVar7;
    fVar10 = (float)pPVar7->SecondAxisSign;
    PVar11 = *pPVar7;
    if (this == (MethodInfo *)0x0) goto code_?;
    this->klass = (Il2CppClass *)((int)&this->klass->image + 1);
    pMVar13 = ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___Fields
                *)&this->invoker_method)->_items;
    if (pMVar13 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    pcVar15 = this->name;
    if (pcVar15 < (char *)pMVar13->max_length) {
      this->name = pcVar15 + 1;
      if ((char *)pMVar13->max_length <= pcVar15) goto code_?;
      *(undefined8 *)(&pMVar13->vector[0].index + (int)pcVar15 * 3) = uVar9;
      (&pMVar13->vector[0].actualWidth)[(int)pcVar15 * 3] = fVar10;
      iVar6 = iVar6 + 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,PVar11,
                 pMVar8->klass->rgctx_data[0xe].method);
      iVar6 = iVar6 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (pLVar3 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,7,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    direction = (Face__Enum)&UNK_?;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    puVar18 = (undefined8 *)&stack0x000000d4;
    goto code_?;
  case Face__Enum_Front:
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (pLVar3 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    direction = (Face__Enum)&UNK_?;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,7,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    puVar18 = (undefined8 *)&stack0x000000d4;
    goto code_?;
  case Face__Enum_Back:
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    direction = (Face__Enum)&UNK_?;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,7,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar19 = pPVar7->Quadrant;
    uVar20 = pPVar7->FirstAxisSign;
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_21 = pPVar7->SecondAxisSign;
    in_stack_22 = (VisualTreeAsset_UsingEntry *)uVar19;
    in_stack_23 = (MethodInfo *)uVar20;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_22 = (VisualTreeAsset_UsingEntry *)&stack0xffffffe8;
    in_stack_21 = 2;
    in_stack_23 = this;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (in_stack_22,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (pLVar3 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 5;
    break;
  case Face__Enum_Left:
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    direction = (Face__Enum)&UNK_?;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,7,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar24 = pPVar7->Quadrant;
    uVar25 = pPVar7->FirstAxisSign;
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_21 = pPVar7->SecondAxisSign;
    in_stack_22 = (VisualTreeAsset_UsingEntry *)uVar24;
    in_stack_23 = (MethodInfo *)uVar25;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_22 = (VisualTreeAsset_UsingEntry *)&stack0xffffffe8;
    in_stack_21 = 1;
    in_stack_23 = this;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (in_stack_22,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (pLVar3 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 6;
    break;
  case Face__Enum_Right:
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (this == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    direction = (Face__Enum)&UNK_?;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,7,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar26 = pPVar7->Quadrant;
    uVar27 = pPVar7->FirstAxisSign;
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_21 = pPVar7->SecondAxisSign;
    in_stack_22 = (VisualTreeAsset_UsingEntry *)uVar26;
    in_stack_23 = (MethodInfo *)uVar27;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_17 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_22 = (VisualTreeAsset_UsingEntry *)&stack0xffffffe8;
    in_stack_21 = 3;
    in_stack_23 = this;
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (in_stack_22,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    if (pLVar3 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,0,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,1,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,2,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,3,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,4,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,5,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,6,*pPVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 4;
  }
  pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
  puVar18 = (undefined8 *)&stack0x00000214;
code_?:
  pVVar28 = pVVar16->asset;
  *puVar18 = *(undefined8 *)pVVar16;
  *(VisualTreeAsset **)(puVar18 + 1) = pVVar28;
  PVar11.FirstAxisSign = (int32_t)in_stack_1;
  PVar11.Quadrant = (int32_t)in_stack_2;
  PVar11.SecondAxisSign = (int32_t)puVar4;
  mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
            ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar3,in_stack_29,PVar11,pMVar5
            );
  cubeCorners = (List_1_UnityEngine_Vector3_ *)pLVar3;
code_?:
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Cube_GetFromTopRotation((Quaternion *)&stack0xffffffc0,direction,(MethodInfo *)0x0);
  fVar10 = 0.0;
  if ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      cubeCorners !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    for (; (int)fVar10 <
           (((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)cubeCorners)->fields)._size; fVar10 = (float)((int)fVar10 + 1)) {
      pLVar3 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)cubeCorners;
      fVar30 = fVar10;
      pMVar5 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
      pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)&stack0xffffffe8,
                           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)cubeCorners,
                           (int32_t)fVar10,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar31 = pVVar16->alias;
      rotation.y = fVar30;
      rotation.x = (float)pLVar3;
      rotation.z = (float)pMVar5;
      rotation.w = (float)uVar31;
      pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffdc,rotation,(Vector3)*pVVar16,(MethodInfo *)0x0)
      ;
      pPVar7 = (PlaneIdHelper_PlaneQuadrantInfo *)
                MathFunctions::MathFunctions_RoundVector
                          ((Vector3 *)&stack0xffffffd0,*pVVar32,3,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners,(int32_t)fVar10,*pPVar7
                 ,
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
  func_?();
  pbVar33 = (byte *)(extraout_ECX + 0x32106ab2);
  bVar34 = *pbVar33;
  *pbVar33 = *pbVar33 + (byte)extraout_ECX;
  *(char *)(extraout_ECX + -0x49) =
       *(char *)(extraout_ECX + -0x49) + (char)((uint)this >> 8) + CARRY1(bVar34,(byte)extraout_ECX);
  *(char *)(extraout_EDX + -0x3333ef96) = *(char *)(extraout_EDX + -0x3333ef96) >> 0xc;
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
      func_?(TypeInfo__Cube);
    }
    pFVar2 = Cube_GenerateCubeFacesCheap(cube,cubePos,cells,(MethodInfo *)0x0);
    return pFVar2;
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    func_?(0x815c);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
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
  face = Face__Enum_Top;
  if (cube != (Cube *)0x0) {
    do {
      if (((cube->fields).hiddenSides & '\x01' << ((byte)face & 0x1f)) == 0) {
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        item = Cube_GenerateFaceDataExpensive(face,cubePos,cells,(MethodInfo *)0x0);
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
      }
      face = face + Face__Enum_Bottom;
    } while ((int)face < 6);
    if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
      pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
      return (FaceData__Array *)pMVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pFVar2 = (FaceData__Array *)(*pcVar4)();
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
    func_?(0x3c4c);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    func_?(33000);
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
    if (((cube->fields).hiddenSides & 1) == 0) {
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
    if (((cube->fields).hiddenSides & 2) == 0) {
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
    if (((cube->fields).hiddenSides & 4) == 0) {
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
    if (((cube->fields).hiddenSides & 8) == 0) {
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
    if (((cube->fields).hiddenSides & 0x10) == 0) {
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
    if (((cube->fields).hiddenSides & 0x20) == 0) {
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
    else if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                      *)0x0) {
      pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
      return (FaceData__Array *)pMVar3;
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
    func_?(&TypeInfo__Cube);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
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
  face = Face__Enum_Top;
  if (cube != (Cube *)0x0) {
    do {
      if (((cube->fields).hiddenSides & '\x01' << ((byte)face & 0x1f)) == 0) {
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Cube);
        }
        item = Cube_GenerateFaceDataExpensive(face,cubePos,cells,(MethodInfo *)0x0);
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
      }
      face = face + Face__Enum_Bottom;
    } while ((int)face < 6);
    if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
      pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this,MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
      return (FaceData__Array *)pMVar1;
    }
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
      uVar7 = pVVar4->x;
      uVar8 = pVVar4->y;
      fVar9 = pVVar4->z;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar10 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pIVar3 != (Int32__Array *)0x0) {
        if (pIVar3->max_length == 0) goto code_?;
        if (pVVar10 != (Vector3__Array *)0x0) {
          uVar11 = pIVar3->vector[0];
          if (pVVar10->max_length <= uVar11) goto code_?;
          VStack_5.x = pVVar10->vector[uVar11].x;
          VStack_5.y = pVVar10->vector[uVar11].y;
          VStack_5.z = pVVar10->vector[uVar11].z;
          if (pVVar6 != (Vector3__Array *)0x0) {
            if (pVVar6->max_length == 0) goto code_?;
            pVVar6->vector[0].x = VStack_5.x + (float)uVar7;
            pVVar6->vector[0].y = VStack_5.y + (float)uVar8;
            pVVar6->vector[0].z = VStack_5.z + fVar9;
            pVVar6 = (pFVar1->fields).faceVertices;
            pVVar10 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (pIVar3->max_length < 2) goto code_?;
            if (pVVar10 != (Vector3__Array *)0x0) {
              uVar11 = pIVar3->vector[1];
              if (pVVar10->max_length <= uVar11) goto code_?;
              uVar12 = pVVar10->vector[uVar11].x;
              uVar13 = pVVar10->vector[uVar11].y;
              fVar14 = pVVar10->vector[uVar11].z;
              if (pVVar6 != (Vector3__Array *)0x0) {
                if (pVVar6->max_length < 2) goto code_?;
                pVVar6->vector[1].x = (float)uVar7 + (float)uVar12;
                pVVar6->vector[1].y = (float)uVar8 + (float)uVar13;
                pVVar6->vector[1].z = fVar9 + fVar14;
                pVVar6 = (pFVar1->fields).faceVertices;
                pVVar10 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (pIVar3->max_length < 3) goto code_?;
                if (pVVar10 != (Vector3__Array *)0x0) {
                  uVar11 = pIVar3->vector[2];
                  if (pVVar10->max_length <= uVar11) goto code_?;
                  uVar15 = pVVar10->vector[uVar11].x;
                  uVar16 = pVVar10->vector[uVar11].y;
                  fVar14 = pVVar10->vector[uVar11].z;
                  if (pVVar6 != (Vector3__Array *)0x0) {
                    if (pVVar6->max_length < 3) goto code_?;
                    pVVar6->vector[2].x = (float)uVar7 + (float)uVar15;
                    pVVar6->vector[2].y = (float)uVar8 + (float)uVar16;
                    pVVar6->vector[2].z = fVar9 + fVar14;
                    pVVar6 = (pFVar1->fields).faceVertices;
                    pVVar10 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (pIVar3->max_length < 4) goto code_?;
                    if (pVVar10 != (Vector3__Array *)0x0) {
                      uVar11 = pIVar3->vector[3];
                      if (pVVar10->max_length <= uVar11) goto code_?;
                      uVar17 = pVVar10->vector[uVar11].x;
                      uVar18 = pVVar10->vector[uVar11].y;
                      fVar14 = pVVar10->vector[uVar11].z;
                      if (pVVar6 != (Vector3__Array *)0x0) {
                        if (pVVar6->max_length < 4) goto code_?;
                        pVVar6->vector[3].x = (float)uVar7 + (float)uVar17;
                        pVVar6->vector[3].y = (float)uVar8 + (float)uVar18;
                        pVVar6->vector[3].z = fVar9 + fVar14;
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
                                                pIVar3->vector[1],(insideCheck->fields)._._.method)
                            ;
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
                                                  pIVar3->vector[2],
                                                  (insideCheck->fields)._._.method);
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
                                fVar9 = Cube_CalculateAOLightCheap
                                                   (face,3,cells,cubePos_03,bVar22,(MethodInfo *)0x0
                                                   );
                                if (pSStack_23 != (Single__Array *)0x0) {
                                  if (3 < pSStack_23->max_length) {
                                    pSStack_23->vector[3] = fVar9;
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
      uVar6 = pVVar4->x;
      uVar7 = pVVar4->y;
      fVar8 = pVVar4->z;
      fVar9 = pVVar4->z;
      pVVar10 = (pFVar1->fields).faceVertices;
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (cornerIndexToVertex != (Int32__Array *)0x0) {
        if (cornerIndexToVertex->max_length == 0) goto code_?;
        if (pVVar11 != (Vector3__Array *)0x0) {
          uVar12 = cornerIndexToVertex->vector[0];
          if (pVVar11->max_length <= uVar12) goto code_?;
          VStack_5.x = pVVar11->vector[uVar12].x;
          VStack_5.y = pVVar11->vector[uVar12].y;
          VStack_5.z = pVVar11->vector[uVar12].z;
          if (pVVar10 != (Vector3__Array *)0x0) {
            if (pVVar10->max_length == 0) goto code_?;
            pVVar10->vector[0].x = VStack_5.x + (float)uVar6;
            pVVar10->vector[0].y = VStack_5.y + (float)uVar7;
            pVVar10->vector[0].z = VStack_5.z + fVar9;
            pVVar10 = (pFVar1->fields).faceVertices;
            pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (cornerIndexToVertex->max_length < 2) goto code_?;
            if (pVVar11 != (Vector3__Array *)0x0) {
              uVar12 = cornerIndexToVertex->vector[1];
              if (pVVar11->max_length <= uVar12) goto code_?;
              uVar13 = pVVar11->vector[uVar12].x;
              uVar14 = pVVar11->vector[uVar12].y;
              fVar9 = pVVar11->vector[uVar12].z;
              if (pVVar10 != (Vector3__Array *)0x0) {
                if (pVVar10->max_length < 2) goto code_?;
                pVVar10->vector[1].x = (float)uVar6 + (float)uVar13;
                pVVar10->vector[1].y = (float)uVar7 + (float)uVar14;
                pVVar10->vector[1].z = fVar8 + fVar9;
                pVVar10 = (pFVar1->fields).faceVertices;
                pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (cornerIndexToVertex->max_length < 3) goto code_?;
                if (pVVar11 != (Vector3__Array *)0x0) {
                  uVar12 = cornerIndexToVertex->vector[2];
                  if (pVVar11->max_length <= uVar12) goto code_?;
                  uVar15 = pVVar11->vector[uVar12].x;
                  uVar16 = pVVar11->vector[uVar12].y;
                  fVar9 = pVVar11->vector[uVar12].z;
                  if (pVVar10 != (Vector3__Array *)0x0) {
                    if (pVVar10->max_length < 3) goto code_?;
                    pVVar10->vector[2].x = (float)uVar6 + (float)uVar15;
                    pVVar10->vector[2].y = (float)uVar7 + (float)uVar16;
                    pVVar10->vector[2].z = fVar8 + fVar9;
                    pVVar10 = (pFVar1->fields).faceVertices;
                    pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (cornerIndexToVertex->max_length < 4) goto code_?;
                    if (pVVar11 != (Vector3__Array *)0x0) {
                      uVar12 = cornerIndexToVertex->vector[3];
                      if (pVVar11->max_length <= uVar12) goto code_?;
                      uVar17 = pVVar11->vector[uVar12].x;
                      uVar18 = pVVar11->vector[uVar12].y;
                      fVar9 = pVVar11->vector[uVar12].z;
                      if (pVVar10 != (Vector3__Array *)0x0) {
                        if (pVVar10->max_length < 4) goto code_?;
                        pVVar10->vector[3].x = (float)uVar6 + (float)uVar17;
                        pVVar10->vector[3].y = (float)uVar7 + (float)uVar18;
                        pVVar10->vector[3].z = fVar8 + fVar9;
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
      func_?(pLVar1,VVar2.x - _UNK_?,0x3f000000,in_stack_3 - _UNK_?,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      direction_00 = VVar2.x - _UNK_?;
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
      _uStack00000020 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack4 = pLVar1;
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
      _uStack00000038 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack5 = pLVar1;
      func_?();
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000050 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack7 = pLVar1;
      func_?();
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack9 = pLVar1;
      func_?();
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack12 = VVar11.y - _UNK_?;
      pMStack13 =
           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uStack14 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack15 = pLVar1;
      func_?();
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      pLStack17 = pLVar1;
      func_?();
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar1 = Cube_CreateCubeCornersFromTopFace(pLVar1,(Face__Enum)direction_00,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
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
      fStack_9 = pVVar4->x;
      uStack_10 = 0;
      fStack_11 = pVVar4->z;
      pVVar4->x = (float)(int)(ulonglong)(uint)fStack_9;
      pVVar4->y = (float)(int)((ulonglong)(uint)fStack_9 >> 0x20);
      pVVar4->z = fStack_11;
      pVVar4 = pVVar4 + 1;
    }
    pLVar12 = (List_1_UnityEngine_Vector3_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar12,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    if (counterClockwiseFace->max_length == 0) goto code_?;
    fStack_9 = counterClockwiseFace->vector[0].x;
    fStack_11 = counterClockwiseFace->vector[0].z;
    uStack_10 = 0x3f000000;
    if (pLVar12 != (List_1_UnityEngine_Vector3_ *)0x0) {
      func_?(pLVar12,fStack_9,0x3f000000,fStack_11,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      if (1 < counterClockwiseFace->max_length) {
        fStack_11 = counterClockwiseFace->vector[1].z;
        func_?(pLVar12,counterClockwiseFace->vector[1].x,_UNK_?,fStack_11,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                       );
        if (2 < counterClockwiseFace->max_length) {
          fStack_11 = counterClockwiseFace->vector[2].z;
          func_?(pLVar12,counterClockwiseFace->vector[2].x,_UNK_?,fStack_11,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                         );
          if (3 < counterClockwiseFace->max_length) {
            fStack_11 = counterClockwiseFace->vector[3].z;
            func_?(pLVar12,counterClockwiseFace->vector[3].x,_UNK_?,fStack_11,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                           );
            if (3 < counterClockwiseFace->max_length) {
              fStack_11 = counterClockwiseFace->vector[3].z;
              func_?(pLVar12,counterClockwiseFace->vector[3].x,_UNK_?,fStack_11,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                             );
              if (2 < counterClockwiseFace->max_length) {
                fStack_11 = counterClockwiseFace->vector[2].z;
                func_?(pLVar12,counterClockwiseFace->vector[2].x,_UNK_?,fStack_11,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                               );
                if (1 < counterClockwiseFace->max_length) {
                  fStack_11 = counterClockwiseFace->vector[1].z;
                  func_?(pLVar12,counterClockwiseFace->vector[1].x,_UNK_?,fStack_11,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                 );
                  if (counterClockwiseFace->max_length != 0) {
                    fStack_11 = counterClockwiseFace->vector[0].z;
                    func_?(pLVar12,counterClockwiseFace->vector[0].x,_UNK_?,fStack_11,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Cube);
                    }
                    pLVar12 = Cube_CreateCubeCornersFromTopFace(pLVar12,direction,(MethodInfo *)0x0);
                    return pLVar12;
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
  pLVar12 = (List_1_UnityEngine_Vector3_ *)(*pcVar13)();
  return pLVar12;
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
    uVar2 = func_?(this,uVar2);
    *unaff_EDI = uVar2;
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)(0x10,0x10,0x10);
    return pVVar4;
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
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,2);
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  iVar1 = (int)iVector.x;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar2 = Cube_GetEdge(cube,face,edge,(MethodInfo *)0x0);
  if (gameObject != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pVVar2 != (Vector3__Array *)0x0) {
      if (pVVar2->max_length == 0) goto code_?;
      uVar4 = pVVar2->vector[0].x;
      uVar5 = pVVar2->vector[0].y;
      if (pTVar3 != (Transform *)0x0) {
        position_00.y = (float)uVar5 + (float)(int)iVector.y;
        position_00.x = (float)uVar4 + (float)iVar1;
        position_00.z = pVVar2->vector[0].z + (float)(int)iVector.z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                           ((Vector3 *)&stack0xfffffff0,pTVar3,position_00,(MethodInfo *)0x0);
        fVar7 = pVVar6->y;
        fVar8 = pVVar6->z;
        if (pVVar2->max_length == 0) goto code_?;
        pVVar2->vector[0].x = pVVar6->x;
        pVVar2->vector[0].y = fVar7;
        pVVar2->vector[0].z = fVar8;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (gameObject,(MethodInfo *)0x0);
        if (uRam_? < 2) goto code_?;
        pVVar2 = (Vector3__Array *)
                 ((float)((ulonglong)uRam_? >> 0x20) + (float)(int)iVector.y);
        fVar8 = fRam00000024 + (float)(int)iVector.z;
        if (pTVar3 != (Transform *)0x0) {
          in_stack_9 = 0;
          iVector.x = SUB42(fVar8,0);
          iVector.y = (int16_t)((uint)fVar8 >> 0x10);
          position.y = (float)pVVar2;
          position.x = (float)uRam_? + (float)iVar1;
          position.z._0_2_ = iVector.x;
          position.z._2_2_ = iVector.y;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                             ((Vector3 *)&stack0xfffffff0,pTVar3,position,(MethodInfo *)0x0);
          fVar7 = pVVar6->y;
          fVar8 = pVVar6->z;
          if (1 < pVVar2->max_length) {
            pVVar2->vector[1].x = pVVar6->x;
            pVVar2->vector[1].y = fVar7;
            pVVar2->vector[1].z = fVar8;
            return pVVar2;
          }
          goto code_?;
        }
      }
    }
  }
  in_stack_9 = 0x106a;
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar10)();
  return pVVar2;
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeRef__Edge);
    func_?(0xe66c);
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
    EVar10 = Edge__Enum_None;
    while (pIStack_9 != (IEnumerator *)0x0) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        uStack_1 = 0xffffffff;
        iVar12 = func_?();
        if (iVar12 != 0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return EVar10;
        }
        *unaff_FS_OFFSET = uStack_3;
        return EVar10;
      }
      if (pIStack_9 == (IEnumerator *)0x0) break;
      pIVar13 = pIStack_9->klass;
      uVar14 = 0;
      uVar15._0_1_ = (pIVar13->_1).rank;
      uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
      if (uVar15 != 0) {
        do {
          if (pIVar13->interfaceOffsets[uVar14].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar16 = &(&(pIStack_9->klass->vtable).get_Current)
                       [pIStack_9->klass->interfaceOffsets[uVar14].offset].method;
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar15);
      }
      ppMVar16 = (MethodInfo **)func_?();
code_?:
      piVar17 = (int *)(*(code *)*ppMVar16)();
      if (piVar17 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar17 + 0x20) != (TypeInfo__Edge->_0).element_class)
      goto code_?;
      pEVar18 = (Edge__Enum *)func_?();
      edge = *pEVar18;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar19 = Cube_GetEdgeVerticesWorld(gameObject,cube,face,edge,iVector,(MethodInfo *)0x0);
      if (pVVar19 == (Vector3__Array *)0x0) break;
      if (pVVar19->max_length == 0) {
        func_?();
code_?:
        func_?();
        break;
      }
      if (pVVar19->max_length < 2) goto code_?;
      bVar20 = MathFunctions::MathFunctions_DistancePointLine
                        (pos,pVVar19->vector[0],pVVar19->vector[1],&fStack_6,(MethodInfo *)0x0);
      EVar10 = EStack_8;
      if (bVar20 != 0) {
        if (((uint)ABS(fStack_6) < 0x7f800001) && (fStack_6 < fStack_7)) {
          EVar10 = edge;
          fStack_7 = fStack_6;
          EStack_8 = edge;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  EVar10 = (*pcVar21)();
  return EVar10;
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
      FVar9 = *pFVar8;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar10 = Cube_GetFace_1(corners,FVar9,(MethodInfo *)0x0);
      iVar6 = 0;
      iStack_11 = 0;
      if (triangleVertices == (Vector3__Array *)0x0) break;
code_?:
      if (iVar6 < (int)triangleVertices->max_length) {
        func_?();
        iVar12 = 0;
        if (pVVar10 == (Vector3__Array *)0x0) break;
        for (; iVar12 < (int)pVVar10->max_length; iVar12 = iVar12 + 1) {
          func_?();
          fVar13 = (float10)func_?();
          if ((double)(float)fVar13 < _UNK_?) {
            iStack_11 = iStack_11 + 1;
            iVar6 = iVar6 + 1;
            goto code_?;
          }
        }
        iVar6 = iVar6 + 1;
        goto code_?;
      }
      if (iStack_11 == 3) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return FVar9;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  FVar9 = (*pcVar14)();
  return FVar9;
}


/* Vector3 GetFaceAxis(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetFaceAxis
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    pVVar1 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_2,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    break;
  case Face__Enum_Front:
    puVar5 = (undefined8 *)func_?(&VStack_2,0);
    uVar6 = *puVar5;
    fVar4 = *(float *)(puVar5 + 1);
    __return_storage_ptr__->x = (float)(int)uVar6;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    pVVar1 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_2,(MethodInfo *)0x0)
    ;
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    puVar5 = (undefined8 *)func_?(&VStack_2,0);
    uVar6 = *puVar5;
    fVar4 = *(float *)(puVar5 + 1);
    __return_storage_ptr__->x = (float)(int)uVar6;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Right:
    pVVar1 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                       (&VStack_2,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar7->zeroVector).y;
    fVar4 = (pVVar7->zeroVector).z;
    __return_storage_ptr__->x = (pVVar7->zeroVector).x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar7->downVector).y;
  fVar4 = (pVVar7->downVector).z;
  __return_storage_ptr__->x = (pVVar7->downVector).x;
  __return_storage_ptr__->y = fVar3;
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
  pVVar1 = RTG::Vector3Ex::Vector3Ex_Abs(&VStack_2,localDir,(MethodInfo *)0x0);
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
        uVar6 = pVVar4->vector[0].x;
        uVar7 = pVVar4->vector[0].y;
        VStack_8.z = pVVar4->vector[0].z + (float)iVar3;
        VStack_8.y = (float)uVar7 + (float)iVar2;
        VStack_8.x = (float)uVar6 + (float)iVar1;
        if (pTVar5 != (Transform *)0x0) {
          position.y = (float)uVar7 + (float)iVar2;
          position.x = (float)uVar6 + (float)iVar1;
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
          uVar12 = pVVar4->vector[1].x;
          uVar13 = pVVar4->vector[1].y;
          VStack_8.z = pVVar4->vector[1].z + (float)iVar3;
          VStack_8.y = (float)uVar13 + (float)iVar2;
          VStack_8.x = (float)uVar12 + (float)iVar1;
          if (pTVar5 != (Transform *)0x0) {
            position_00.y = (float)uVar13 + (float)iVar2;
            position_00.x = (float)uVar12 + (float)iVar1;
            position_00.z = VStack_8.z;
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
            uVar14 = pVVar4->vector[2].x;
            uVar15 = pVVar4->vector[2].y;
            VStack_8.z = pVVar4->vector[2].z + (float)iVar3;
            VStack_8.y = (float)uVar15 + (float)iVar2;
            VStack_8.x = (float)uVar14 + (float)iVar1;
            if (pTVar5 != (Transform *)0x0) {
              position_01.y = (float)uVar15 + (float)iVar2;
              position_01.x = (float)uVar14 + (float)iVar1;
              position_01.z = VStack_8.z;
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                  (&VStack_8,pTVar5,position_01,(MethodInfo *)0x0);
              fVar10 = pVVar9->y;
              fVar11 = pVVar9->z;
              if (pVVar4->max_length < 3) goto code_?;
              pVVar4->vector[2].x = pVVar9->x;
              pVVar4->vector[2].y = fVar10;
              pVVar4->vector[2].z = fVar11;
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(gameObject,(MethodInfo *)0x0);
              if (pVVar4->max_length < 4) goto code_?;
              uVar16 = pVVar4->vector[3].x;
              uVar17 = pVVar4->vector[3].y;
              VStack_8.z = pVVar4->vector[3].z + (float)iVar3;
              VStack_8.y = (float)uVar17 + (float)iVar2;
              VStack_8.x = (float)uVar16 + (float)iVar1;
              if (pTVar5 != (Transform *)0x0) {
                position_02.y = (float)uVar17 + (float)iVar2;
                position_02.x = (float)uVar16 + (float)iVar1;
                position_02.z = VStack_8.z;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_TransformPoint(&VStack_8,pTVar5,position_02,(MethodInfo *)0x0)
                ;
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
  pcVar18 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar18)();
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
    pVStack_4 = pVStack_1->vector;
    piVar5 = pIVar3->vector;
    uVar6 = 0;
    if (pIVar3 != (Int32__Array *)0x0) {
      while (uVar6 < pIVar3->max_length) {
        if (corners == (Vector3__Array *)0x0) goto code_?;
        uVar7 = *piVar5;
        if (corners->max_length <= uVar7) break;
        uVar8 = uVar6 + 3 & 0x80000003;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
        }
        if ((pIVar3->max_length <= uVar8) ||
           (uVar8 = pIVar3->vector[uVar8], corners->max_length <= uVar8)) break;
        uVar9 = uVar6 + 1 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        if ((pIVar3->max_length <= uVar9) ||
           (uVar9 = pIVar3->vector[uVar9], corners->max_length <= uVar9)) break;
        uStack_10._0_4_ = corners->vector[uVar9].x;
        uStack_10._4_4_ = corners->vector[uVar9].y;
        fStack_11 = corners->vector[uVar9].z;
        uStack_12._0_4_ = corners->vector[uVar7].x;
        uStack_12._4_4_ = corners->vector[uVar7].y;
        fStack_13 = corners->vector[uVar7].z;
        uStack_14._0_4_ = corners->vector[uVar8].x;
        uStack_14._4_4_ = corners->vector[uVar8].y;
        fStack_15 = corners->vector[uVar8].z;
        uStack_16._0_4_ = corners->vector[uVar7].x;
        uStack_16._4_4_ = corners->vector[uVar7].y;
        fStack_17 = corners->vector[uVar7].z;
        fStack_18 = ((float)uStack_14._4_4_ - (float)uStack_16._4_4_) *
                    ((float)(undefined4)uStack_10 - (float)(undefined4)uStack_12) -
                    ((float)(undefined4)uStack_14 - (float)(undefined4)uStack_16) *
                    ((float)uStack_10._4_4_ - (float)uStack_12._4_4_);
        value.y = ((float)(undefined4)uStack_14 - (float)(undefined4)uStack_16) *
                  (fStack_11 - fStack_13) -
                  (fStack_15 - fStack_17) *
                  ((float)(undefined4)uStack_10 - (float)(undefined4)uStack_12);
        value.x = (fStack_15 - fStack_17) * ((float)uStack_10._4_4_ - (float)uStack_12._4_4_) -
                  ((float)uStack_14._4_4_ - (float)uStack_16._4_4_) * (fStack_11 - fStack_13);
        value.z = fStack_18;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           (&VStack_20,value,(MethodInfo *)0x0);
        if (pVStack_1 == (Vector3__Array *)0x0) goto code_?;
        fVar21 = pVVar19->y;
        fVar22 = pVVar19->z;
        if (pVStack_1->max_length <= uVar6) break;
        uVar6 = uVar6 + 1;
        pVStack_4->x = pVVar19->x;
        pVStack_4->y = fVar21;
        pVStack_4->z = fVar22;
        pVStack_4 = pVStack_4 + 1;
        piVar5 = piVar5 + 1;
        if (3 < (int)uVar6) {
          return pVStack_1;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  pVVar24 = (Vector3__Array *)(*pcVar23)();
  return pVVar24;
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
                            ((Vector3 *)&stack0xffffffcc,value,(MethodInfo *)0x0);
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
          fVar8 = fStack_14 * (float)uVar22 + (float)pMVar16 * (float)uVar21 + fVar7 * pVVar2->z;
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
       (func_?(), triangleVertices == (Vector3__Array *)0x0)) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)(0x10);
      return;
    }
    func_?(0,uStack_2,uStack_3);
    func_?(&uStack_2,1);
    func_?(1,uStack_2,uStack_3);
    uVar4 = 2;
    break;
  case 1:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), triangleVertices == (Vector3__Array *)0x0)) goto code_?;
    func_?(0,uStack_2,uStack_3);
    func_?(&uStack_2,2);
    func_?(1,uStack_2,uStack_3);
    uVar4 = 3;
    break;
  case 2:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), triangleVertices == (Vector3__Array *)0x0)) goto code_?;
    func_?(0,uStack_2,uStack_3);
    func_?(&uStack_2,5);
    func_?(1,uStack_2,uStack_3);
    uVar4 = 6;
    break;
  case 3:
    if ((corners == (Vector3__Array *)0x0) ||
       (func_?(), triangleVertices == (Vector3__Array *)0x0)) goto code_?;
    func_?(0,uStack_2,uStack_3);
    func_?(&uStack_2,6);
    func_?(1,uStack_2,uStack_3);
    uVar4 = 7;
    break;
  default:
    goto code_?;
  }
  func_?(&uStack_2,uVar4);
  func_?(2,uStack_2,uStack_3);
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
    if (((pVStack_1->max_length != 0) && (1 < pVStack_1->max_length)) && (2 < pVStack_1->max_length)
       ) {
      uVar3 = pVStack_1->vector[0].y;
      fVar4 = pVStack_1->vector[0].z;
      uVar5 = pVStack_1->vector[1].x;
      uVar6 = pVStack_1->vector[1].y;
      uVar7 = pVStack_1->vector[0].x;
      uVar8 = pVStack_1->vector[0].y;
      fVar9 = pVStack_1->vector[1].z - pVStack_1->vector[0].z;
      uVar10 = pVStack_1->vector[2].x;
      uVar11 = pVStack_1->vector[2].y;
      VStack_12.x = pVStack_1->vector[0].x;
      VStack_12.y = pVStack_1->vector[0].y;
      VStack_12.z = pVStack_1->vector[0].z;
      fVar13 = pVStack_1->vector[2].z - VStack_12.z;
      value.y = ((float)uVar10 - VStack_12.x) * fVar9 - fVar13 * ((float)uVar5 - (float)uVar7);
      value.x = fVar13 * ((float)uVar6 - (float)uVar8) - ((float)uVar11 - VStack_12.y) * fVar9;
      value.z = ((float)uVar11 - VStack_12.y) * ((float)uVar5 - (float)uVar7) -
                ((float)uVar10 - VStack_12.x) * ((float)uVar6 - (float)uVar8);
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_12,value,(MethodInfo *)0x0);
      uVar15 = pVVar14->x;
      uVar16 = pVVar14->y;
      uVar17 = 0;
      if (corners == (Vector3__Array *)0x0) goto code_?;
      pVVar18 = corners->vector;
      while( true ) {
        if ((int)corners->max_length <= (int)uVar17) {
          return 1;
        }
        if (corners->max_length <= uVar17) break;
        uVar19 = pVVar14->x;
        uVar20 = pVVar14->y;
        uVar21 = pVVar18->x;
        uVar22 = pVVar18->y;
        if (_UNK_? <
            (double)(float)((uint)((float)uVar22 * (float)uVar20 + (float)uVar21 * (float)uVar19 +
                                   pVVar18->z * pVVar14->z +
                                  (float)((uint)((float)uVar3 * (float)uVar16 + (float)uVar15 * 0.0 +
                                                fVar4 * pVVar14->z) ^
                                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                         )) & _UNK_?)) {
          return 0;
        }
        uVar17 = uVar17 + 1;
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
  pfVar2 = &pVVar1->vector[0].y;
  uVar3 = 0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    while (uVar3 < pVVar1->max_length) {
      if (_UNK_? != *pfVar2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 3;
      if (3 < (int)uVar3) {
        return 1;
      }
    }
  }
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
      if ((int)faceIndices->max_length <= iVar1) {
        return 0;
      }
      uVar2 = (iVar1 + 1) % (int)faceIndices->max_length;
      if ((faceIndices->max_length <= uVar2) ||
         (uVar3 = iVar1 % (int)faceIndices->max_length, faceIndices->max_length <= uVar3)) break;
      uStack_4._0_4_ = faceIndices->vector[uVar3].x;
      uStack_4._4_4_ = faceIndices->vector[uVar3].y;
      fStack_5 = faceIndices->vector[uVar3].z;
      uStack_6._0_4_ = faceIndices->vector[uVar2].x;
      uStack_6._4_4_ = faceIndices->vector[uVar2].y;
      fStack_7 = faceIndices->vector[uVar2].z;
      fStack_8 = fStack_7 - fStack_5;
      uStack_9 = CONCAT44((float)uStack_6._4_4_ - (float)uStack_4._4_4_,
                           (float)(undefined4)uStack_6 - (float)(undefined4)uStack_4);
      fVar10 = (float10)func_?(&uStack_9,0);
      if ((float)fVar10 < _UNK_?) {
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
    uVar3 = faceIndices->vector[1].x;
    uVar4 = faceIndices->vector[1].y;
    value.y = (float)uVar4 - (float)uVar2;
    value.x = (float)uVar3 - (float)uVar1;
    value.z = faceIndices->vector[1].z - faceIndices->vector[0].z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
              ((Vector3 *)&stack0xffffffd8,value,(MethodInfo *)0x0);
    if (2 < faceIndices->max_length) {
      uVar5 = faceIndices->vector[1].x;
      uVar6 = faceIndices->vector[1].y;
      uVar7 = faceIndices->vector[2].x;
      uVar8 = faceIndices->vector[2].y;
      fVar9 = (float)uVar8 - (float)uVar6;
      fVar10 = faceIndices->vector[2].z - faceIndices->vector[1].z;
      fVar11 = 0.0;
      value_00.y = fVar9;
      value_00.x = (float)uVar7 - (float)uVar5;
      value_00.z = fVar10;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffe4,value_00,(MethodInfo *)0x0);
      uVar13 = pVVar12->x;
      uVar14 = pVVar12->y;
      value_01.y = (float)uVar13 * fVar11 - fVar9 * pVVar12->z;
      value_01.x = pVVar12->z * fVar10 - (float)uVar14 * fVar11;
      value_01.z = fVar9 * (float)uVar14 - (float)uVar13 * fVar10;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd8,value_01,(MethodInfo *)0x0);
      fVar10 = pVVar12->x;
      if (faceIndices->max_length != 0) {
        fVar9 = faceIndices->vector[0].x;
        fVar11 = faceIndices->vector[0].y;
        fVar15 = faceIndices->vector[0].z;
        __return_storage_ptr__ = (Vector3 *)&stack0xfffffff0;
        puVar16 = &UNK_?;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (__return_storage_ptr__,*pVVar12,(MethodInfo *)0x0);
        uVar18 = pVVar17->x;
        uVar19 = pVVar17->y;
        pVVar12 = faceIndices->vector;
        uVar20 = 1;
        while( true ) {
          pVVar12 = pVVar12 + 1;
          if ((int)faceIndices->max_length <= (int)uVar20) {
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar12 = Cube_GetFaceAxis((Vector3 *)&stack0xffffffd8,face,(MethodInfo *)0x0);
            uVar21 = pVVar12->x;
            uVar22 = pVVar12->y;
            return (float)puVar16 * (float)uVar22 + fVar10 * (float)uVar21 +
                   (float)__return_storage_ptr__ * pVVar12->z <= _UNK_?;
          }
          if (faceIndices->max_length <= uVar20) break;
          uVar23 = pVVar17->x;
          uVar24 = pVVar17->y;
          uVar25 = pVVar12->x;
          uVar26 = pVVar12->y;
          if (_UNK_? <
              (float)((uint)((float)uVar26 * (float)uVar24 + (float)uVar25 * (float)uVar23 +
                             pVVar12->z * pVVar17->z +
                            (float)((uint)(fVar11 * (float)uVar19 + fVar9 * (float)uVar18 +
                                          fVar15 * pVVar17->z) ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   )) & _UNK_?)) {
            return 0;
          }
          uVar20 = uVar20 + 1;
        }
      }
    }
  }
  func_?();
  pcVar27 = (code *)swi(3);
  bVar28 = (*pcVar27)();
  return bVar28;
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
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_14.x = (pVVar13->zeroVector).x;
      VStack_14.y = (pVVar13->zeroVector).y;
      VStack_14.z = (pVVar13->zeroVector).z;
      iVar15 = 0;
      if (pVVar12 == (Vector3__Array *)0x0) break;
      for (; iVar15 < (int)pVVar12->max_length; iVar15 = iVar15 + 1) {
        func_?();
        func_?();
        fStack_16 = fStack_17 * fStack_18 - fStack_19 * fStack_20;
        VStack_14.z = VStack_14.z + (fStack_21 * fStack_20 - fStack_22 * fStack_17);
        VStack_14.y = VStack_14.y + (fStack_22 * fStack_19 - fStack_21 * fStack_18);
        VStack_14.x = VStack_14.x + fStack_16;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_14,(MethodInfo *)0x0);
      fStack_23 = (float)((uint)VStack_14.x ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fStack_24 = (float)((uint)VStack_14.y ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fStack_16 = (float)((uint)VStack_14.z ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar25 = Cube_GetFaceAxis((Vector3 *)&stack0xffffff7c,FStack_11,(MethodInfo *)0x0);
      uVar26 = pVVar25->x;
      uVar27 = pVVar25->y;
      if ((double)(fStack_24 * (float)uVar27 + fStack_23 * (float)uVar26 + fStack_16 * pVVar25->z) <
          _UNK_?) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
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
    uVar8 = corners->vector[1].x;
    uVar9 = corners->vector[1].y;
    fVar7 = corners->vector[1].z;
    corners->vector[1].x = (float)uVar8 + axis.x * value;
    corners->vector[1].y = (float)uVar9 + axis.y * value;
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
    MathFunctions::MathFunctions_ClampVector(corners->vector + 1,-0.5,0.5,(MethodInfo *)0x0);
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
                        ((Vector3 *)&stack0xffffffec,corners->vector[1],3,(MethodInfo *)0x0);
    fVar14 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length < 2) goto code_?;
    corners->vector[1].x = pVVar11->x;
    corners->vector[1].y = fVar14;
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
  pVVar1 = (Vector3__Array__Class *)info;
  if ((info != (CubePickingInfo *)0x0) && (pCVar2 = (info->fields).cube, pCVar2 != (Cube *)0x0)) {
    unaff_ESI = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          ((CubeBase *)pCVar2,(MethodInfo *)0x0);
    FVar3 = (info->fields).pickedFace;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar4 = Cube_GetFace_1(unaff_ESI,FVar3,(MethodInfo *)0x0);
    uVar5 = 0;
    if (pVVar4 != (Vector3__Array *)0x0) {
      pVVar6 = pVVar4->vector;
      for (; (int)uVar5 < (int)pVVar4->max_length; uVar5 = uVar5 + 1) {
        if (pVVar4->max_length <= uVar5) goto code_?;
        uVar7 = pVVar6->x;
        uVar8 = pVVar6->y;
        pVVar6->x = (float)uVar7 + axis.x * delta;
        pVVar6->y = (float)uVar8 + axis.y * delta;
        pVVar6->z = pVVar6->z + axis.z * delta;
        pVVar6 = pVVar6 + 1;
      }
      unaff_ESI = (Vector3__Array *)pVVar4->vector;
      for (pVVar1 = (Vector3__Array__Class *)0x0; pVStack_9 = unaff_ESI,
          (int)pVVar1 < (int)pVVar4->max_length;
          pVVar1 = (Vector3__Array__Class *)((int)&(pVVar1->_0).image + 1)) {
        if ((Vector3__Array__Class *)pVVar4->max_length <= pVVar1) goto code_?;
        index = (int32_t)unaff_ESI->klass;
        vector.x = (float)unaff_ESI->klass;
        vector.y = (float)unaff_ESI->monitor;
        vector.z = (float)unaff_ESI->bounds;
        pVVar6 = MathFunctions::MathFunctions_RoundVector
                           ((Vector3 *)&stack0xffffffd4,vector,3,(MethodInfo *)0x0);
        fVar10 = pVVar6->y;
        fVar11 = pVVar6->z;
        if ((Vector3__Array__Class *)pVVar4->max_length <= pVVar1) goto code_?;
        unaff_ESI->klass = (Vector3__Array__Class *)pVVar6->x;
        unaff_ESI->monitor = (MonitorData *)fVar10;
        *(float *)&((Cube__Fields *)&unaff_ESI->bounds)->_ = fVar11;
        iVar12 = 0;
        iStack_13 = 0;
        do {
          pMVar14 = (MethodInfo *)&UNK_?;
          pVVar6 = (Vector3 *)func_?(pVVar1,iVar12,0);
          fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (pVVar6,index,pMVar14);
          if (_UNK_? <= fVar11) {
            pMVar14 = (MethodInfo *)&UNK_?;
            pVVar6 = (Vector3 *)func_?(pVVar1,iVar12,0);
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar6,index,pMVar14);
            if (fVar11 <= _UNK_?) {
              iStack_13 = iStack_13 + 1;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 3);
        if (iStack_13 == 3) {
          cStack_15 = '\0';
          goto code_?;
        }
        unaff_ESI = (Vector3__Array *)&pVStack_9->max_length;
      }
      cStack_15 = '\x01';
code_?:
      unaff_ESI = (Vector3__Array *)pVVar4->vector;
      for (pVVar1 = (Vector3__Array__Class *)0x0; (int)pVVar1 < (int)pVVar4->max_length;
          pVVar1 = (Vector3__Array__Class *)((int)&(pVVar1->_0).image + 1)) {
        if (((Vector3__Array__Class *)pVVar4->max_length <= pVVar1) ||
           (MathFunctions::MathFunctions_ClampVector
                      ((Vector3 *)unaff_ESI,-0.5,0.5,(MethodInfo *)0x0),
           (Vector3__Array__Class *)pVVar4->max_length <= pVVar1)) goto code_?;
        vector_00.x = (float)unaff_ESI->klass;
        vector_00.y = (float)unaff_ESI->monitor;
        vector_00.z = (float)unaff_ESI->bounds;
        pVVar6 = MathFunctions::MathFunctions_RoundVector
                           ((Vector3 *)&stack0xffffffd4,vector_00,3,(MethodInfo *)0x0);
        fVar10 = pVVar6->y;
        fVar11 = pVVar6->z;
        if ((Vector3__Array__Class *)pVVar4->max_length <= pVVar1) goto code_?;
        unaff_ESI->klass = (Vector3__Array__Class *)pVVar6->x;
        unaff_ESI->monitor = (MonitorData *)fVar10;
        *(float *)&((Cube__Fields *)&unaff_ESI->bounds)->_ = fVar11;
        unaff_ESI = (Vector3__Array *)&unaff_ESI->max_length;
      }
      pCVar2 = (info->fields).cube;
      if ((pCVar2 != (Cube *)0x0) &&
         (pVVar16 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                              ((CubeBase *)pCVar2,(MethodInfo *)0x0),
         pVVar16 != (Vector3__Array *)0x0)) {
        unaff_ESI = (Vector3__Array *)
                    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                    PlayableBehaviour_Clone((PlayableBehaviour *)pVVar16,(MethodInfo *)0x0);
        pVVar1 = TypeInfo__UnityEngine__Vector3;
        pVVar16 = (Vector3__Array *)0x0;
        if ((unaff_ESI != (Vector3__Array *)0x0) &&
           (pVVar16 = (Vector3__Array *)func_?(unaff_ESI), pVVar16 == (Vector3__Array *)0x0
           )) goto code_?;
        pVStack_9 = pVVar16;
        Cube_SetFace_1(&pVStack_9,(info->fields).pickedFace,pVVar4,(MethodInfo *)0x0);
        bVar17 = Cube_IsLegal(pVStack_9,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          unaff_ESI = (Vector3__Array *)(info->fields).cube;
          FVar3 = (info->fields).pickedFace;
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          Cube_SetFace((Cube *)unaff_ESI,FVar3,pVVar4,(MethodInfo *)0x0);
        }
        if (cStack_15 == '\0') {
          *outOfBoundState = CubeOutOfBoundState__Enum_WithinBounds;
          return;
        }
        pCVar2 = (info->fields).cube;
        pVVar1 = (Vector3__Array__Class *)info;
        if (pCVar2 != (Cube *)0x0) {
          pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)pCVar2,(MethodInfo *)0x0);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          bVar17 = Cube_IsCollapsed(pVVar4,(MethodInfo *)0x0);
          *outOfBoundState = (bVar17 != 0) + CubeOutOfBoundState__Enum_OutOfBoundsAdd;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,pVVar1);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    pVVar5 = Cube_GetEdge((pCVar1->fields).cube,(pCVar1->fields).pickedFace,
                           (pCVar1->fields).pickedEdge,(MethodInfo *)0x0);
    if (edgeIndex0 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length == 0) goto code_?;
      uVar6 = corners->vector[0].x;
      uVar7 = corners->vector[0].y;
      fVar8 = corners->vector[0].z;
      corners->vector[0].x = (float)uVar6 + axis.x * value;
      corners->vector[0].y = (float)uVar7 + axis.y * value;
      corners->vector[0].z = fVar8 + axis.z * value;
    }
    if (edgeIndex1 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length < 2) goto code_?;
      uVar9 = corners->vector[1].x;
      uVar10 = corners->vector[1].y;
      fVar8 = corners->vector[1].z;
      corners->vector[1].x = (float)uVar9 + axis.x * value;
      corners->vector[1].y = (float)uVar10 + axis.y * value;
      corners->vector[1].z = fVar8 + axis.z * value;
    }
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar11 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      pCVar3 = (pCVar1->fields).cube;
      FVar4 = (pCVar1->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      bVar11 = Cube_IsFaceBoxSideAligened(pCVar3,FVar4,(MethodInfo *)0x0);
      if (bVar11 == 0) {
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
    if (((corners->max_length == 0) ||
        (MathFunctions::MathFunctions_ClampVector(corners->vector,-0.5,0.5,(MethodInfo *)0x0),
        corners->max_length < 2)) ||
       (MathFunctions::MathFunctions_ClampVector(corners->vector + 1,-0.5,0.5,(MethodInfo *)0x0),
       corners->max_length == 0)) goto code_?;
    pVVar12 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&puStack_13,corners->vector[0],3,(MethodInfo *)0x0);
    fVar14 = pVVar12->y;
    fVar8 = pVVar12->z;
    if (corners->max_length == 0) goto code_?;
    corners->vector[0].x = pVVar12->x;
    corners->vector[0].y = fVar14;
    corners->vector[0].z = fVar8;
    if (corners->max_length < 2) goto code_?;
    pVVar12 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&puStack_13,corners->vector[1],3,(MethodInfo *)0x0);
    fVar14 = pVVar12->y;
    fVar8 = pVVar12->z;
    if (corners->max_length < 2) goto code_?;
    corners->vector[1].x = pVVar12->x;
    corners->vector[1].y = fVar14;
    corners->vector[1].z = fVar8;
    pCVar3 = (pCVar1->fields).cube;
    if (pCVar3 == (Cube *)0x0) goto code_?;
    stack0xffffffe0 = (float)pCVar3;
    this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)pCVar3,(MethodInfo *)0x0);
    if (this == (Vector3__Array *)0x0) goto code_?;
    pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this,(MethodInfo *)0x0);
    info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
    pCVar2 = (CubePickingInfo *)0x0;
    if ((pOVar15 == (Object *)0x0) ||
       (pCVar2 = (CubePickingInfo *)func_?(), pCVar2 != (CubePickingInfo *)0x0)) {
      EVar16 = (pCVar1->fields).pickedEdge;
      info = pCVar2;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      stack0xffffffe0 = (float)&UNK_?;
      Cube_SetEdge_1((Vector3__Array **)&info,Face__Enum_Top,EVar16,corners,(MethodInfo *)0x0);
      bVar11 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        return;
      }
      pCVar3 = (pCVar1->fields).cube;
      info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
      EVar16 = (pCVar1->fields).pickedEdge;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        axis.y = (float)TypeInfo__Cube;
        axis.x = (float)&UNK_?;
        func_?();
      }
      Cube_SetEdge(pCVar3,(Face__Enum)info,EVar16,corners,(MethodInfo *)0x0);
      if (pVVar5 != (Vector3__Array *)0x0) {
        if ((pVVar5->max_length != 0) && (corners->max_length != 0)) {
          uVar17 = pVVar5->vector[0].x;
          uVar18 = pVVar5->vector[0].y;
          puStack_13 = (undefined *)corners->vector[0].x;
          unique0x0000a404 = corners->vector[0].y;
          fVar8 = pVVar5->vector[0].z - corners->vector[0].z;
          if (((float)uVar18 - unique0x0000a404) * ((float)uVar18 - unique0x0000a404) +
              ((float)uVar17 - (float)puStack_13) * ((float)uVar17 - (float)puStack_13) +
              fVar8 * fVar8 < _UNK_?) {
            if ((pVVar5->max_length < 2) || (corners->max_length < 2)) goto code_?;
            uVar19 = pVVar5->vector[1].x;
            uVar20 = pVVar5->vector[1].y;
            uVar21 = corners->vector[1].x;
            uVar22 = corners->vector[1].y;
            fVar8 = pVVar5->vector[1].z - corners->vector[1].z;
            if (((float)uVar20 - (float)uVar22) * ((float)uVar20 - (float)uVar22) +
                ((float)uVar19 - (float)uVar21) * ((float)uVar19 - (float)uVar21) + fVar8 * fVar8 <
                _UNK_?) {
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
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
        pVVar2->vector[0].x = pVVar1->vector[0].x;
        pVVar2->vector[0].y = fVar3;
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
                          pQVar5 = Cube_GetToTopRotation
                                             ((Quaternion *)&stack0xffffffd4,direction,
                                              (MethodInfo *)0x0);
                          pVVar6 = pVVar2->vector;
                          uVar7 = 0;
                          __return_storage_ptr__ = (Vector3 *)pQVar5->x;
                          fVar4 = pQVar5->y;
                          fVar3 = pQVar5->z;
                          fVar8 = pQVar5->w;
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
                                               (&VStack_10,rotation,*pVVar6,(MethodInfo *)0x0);
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
                            pVVar6->x = pVVar9->x;
                            pVVar6->y = fVar11;
                            pVVar6->z = fVar12;
                            pVVar6 = pVVar6 + 1;
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
      func_?();
    }
    Cube_SetFace_1(corners,face,pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  pVVar1 = (Vector3__Array *)func_?();
  *corners = pVVar1;
  lVar4 = (longlong)(int)pVVar1->klass * 0x2d;
  *(char *)(unaff_EBX + 0x10) = (*(char *)(unaff_EBX + 0x10) - extraout_CH) - ((int)lVar4 != lVar4);
  lVar4 = (longlong)(int)pVVar1->klass * -0x23;
  *(char *)&pVVar1->vector[0].x =
       (*(char *)&pVVar1->vector[0].x - extraout_CH) - ((int)lVar4 != lVar4);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (face == Face__Enum_Top) {
    func_?(corners + 1);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)face,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
  func_?(TypeInfo__Cube->static_fields);
  Cube_SetEdge_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,edge,(Edge__Enum)edgeVertices,
                 (Vector3__Array *)method,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
            ((CubeBase *)face,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0);
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
          corners = (Vector3__Array **)0x0;
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
          corners = (Vector3__Array **)0x0;
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
          corners = (Vector3__Array **)0x0;
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
    corners = (Vector3__Array **)0x0;
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
          corners = (Vector3__Array **)0x0;
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
  pVVar4 = (Vector3__Array *)func_?();
  pVVar7 = pVVar1->vector;
  pVVar7->x = (float)(((int)pVVar7->x - (int)&stack0xfffffffc) - (uint)bVar6);
  if (extraout_ECX != 1 && pVVar7->x == 0.0) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar9 = (longlong)(int)pVVar4->klass * -0x3a;
  bVar10 = &stack0xfffffffc < (undefined1 *)pVVar1->vector[0].x ||
          &stack0xfffffffc + -(int)pVVar1->vector[0].x < (undefined1 *)(uint)((int)lVar9 != lVar9);
  *corners = pVVar4;
  bVar6 = (byte)pVVar4 + 0x95;
  pcVar11 = (char *)(CONCAT31((int3)((uint)pVVar4 >> 8),bVar6 - bVar10) + 0x29106b1d);
  *pcVar11 = *pcVar11 + (char)lVar9 + ((byte)pVVar4 < 0x6b || bVar6 < bVar10);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
      func_?(pLVar1,VVar2.x - _UNK_?,0x3f000000,in_stack_3 - _UNK_?,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      direction_00 = VVar2.x - _UNK_?;
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
      _uStack00000020 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack4 = pLVar1;
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
      _uStack00000038 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack5 = pLVar1;
      func_?();
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000050 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack7 = pLVar1;
      func_?();
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack9 = pLVar1;
      func_?();
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack12 = VVar11.y - _UNK_?;
      pMStack13 =
           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uStack14 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack15 = pLVar1;
      func_?();
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      pLStack17 = pLVar1;
      func_?();
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar1 = Cube_CreateCubeCornersFromTopFace(pLVar1,(Face__Enum)direction_00,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
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
  pfVar2 = &pVVar1->vector[0].y;
  uVar3 = 0;
  if (pVVar1 != (Vector3__Array *)0x0) {
    do {
      if (pVVar1->max_length <= uVar3) goto code_?;
      *pfVar2 = 0.5;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 3;
    } while ((int)uVar3 < 4);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pQVar4 = Cube_GetFromTopRotation((Quaternion *)&stack0xffffffd4,face,(MethodInfo *)0x0);
    pVVar5 = pVVar1->vector;
    fVar6 = pQVar4->x;
    fVar7 = pQVar4->y;
    fVar8 = pQVar4->z;
    fVar9 = pQVar4->w;
    for (uVar3 = 0; (int)uVar3 < (int)pVVar1->max_length; uVar3 = uVar3 + 1) {
      if (pVVar1->max_length <= uVar3) goto code_?;
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
      if (pVVar1->max_length <= uVar3) goto code_?;
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
      Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,pVVar1,
                     (MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,
                 (MethodInfo *)0x0);
      return;
    }
  }
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
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
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
    unaff_EDI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Byte;
    if (unaff_EDI == (Object *)0x0) {
      (this->fields)._.byteCorners = (Byte__Array *)0x0;
      iVar2 = 0;
code_?:
      func_?(&(this->fields)._.byteCorners,iVar2);
      pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
      (this->fields)._.faceMaterials = pBVar1;
      method_00 = (MethodInfo *)&(this->fields)._.faceMaterials;
      func_?(method_00,pBVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields)._.byteCorners = byteCorners;
      func_?(&(this->fields)._.byteCorners,byteCorners);
      (this->fields)._.faceMaterials = faceMaterials;
      func_?(&(this->fields)._.faceMaterials,faceMaterials);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)this,(MethodInfo *)0x0);
      return;
    }
    pBVar1 = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
    if (pBVar1 != (Byte__Array *)0x0) {
      (this->fields)._.byteCorners = pBVar1;
      unaff_EBX = TypeInfo__System__Byte;
      iVar2 = func_?(unaff_EDI,TypeInfo__System__Byte);
      if (iVar2 != 0) goto code_?;
    }
  }
  func_?(unaff_EDI,unaff_EBX);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Cube(BytePacker, Byte) */

void Assembly-CSharp.dll::Cube::Cube__ctor_1
               (Cube *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
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
  if (pBVar1 == (Byte__Array *)0x0) goto code_?;
  pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
           PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
  if (pOVar2 == (Object *)0x0) {
    (this->fields)._.byteCorners = (Byte__Array *)0x0;
    iVar3 = 0;
code_?:
    func_?(&(this->fields)._.byteCorners,iVar3);
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    (this->fields)._.faceMaterials = pBVar1;
    func_?(&(this->fields)._.faceMaterials,pBVar1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_4);
    ppBVar5 = &(this->fields)._.faceMaterials;
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      cRam_? = '\x01';
    }
    if ((byteFlags & 1) == 0) {
      if (bp == (BytePacker *)0x0) goto code_?;
      pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                         (bp,8,(MethodInfo *)0x0);
      (this->fields)._.byteCorners = pBVar1;
      func_?(&(this->fields)._.byteCorners,pBVar1);
    }
    else {
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
      (this->fields)._.byteCorners = pBVar1;
      func_?(&(this->fields)._.byteCorners,pBVar1);
      if (bp == (BytePacker *)0x0) goto code_?;
    }
    if ((byteFlags & 2) == 0) {
      pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                         (bp,6,(MethodInfo *)0x0);
      *ppBVar5 = pBVar1;
      func_?(ppBVar5,pBVar1);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)this,(MethodInfo *)0x0);
      return;
    }
    uVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                      (bp,(MethodInfo *)0x0);
    uVar7 = 0;
    while (pBVar1 = *ppBVar5, pBVar1 != (Byte__Array *)0x0) {
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
  else {
    pBVar8 = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)func_?(pOVar2,TypeInfo__System__Byte);
    if (pBVar1 != (Byte__Array *)0x0) {
      (this->fields)._.byteCorners = pBVar1;
      pBVar8 = TypeInfo__System__Byte;
      iVar3 = func_?(pOVar2,TypeInfo__System__Byte);
      if (iVar3 != 0) goto code_?;
    }
    func_?(pOVar2,pBVar8);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

