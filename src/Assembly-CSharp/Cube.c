
/* Void AddDeltaToFace(Vector3[] ByRef, Single, Vector3) */

void Assembly-CSharp.dll::Cube::Cube_AddDeltaToFace
               (Vector3__Array **faceVertices,float delta,Vector3 *axis,MethodInfo *method)

{
  uVar1 = 0;
  pVVar2 = *faceVertices;
  uVar3 = uVar1;
  while (pVVar2 != (Vector3__Array *)0x0) {
    uVar4 = (uint)uVar3;
    if ((int)pVVar2->max_length <= (int)uVar4) {
      return;
    }
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length <= uVar4) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar6 = *(undefined8 *)((longlong)&pVVar2->vector[0].x + uVar1);
    uVar7 = axis->x;
    fVar8 = axis->z;
    uVar3 = (ulonglong)(uVar4 + 1);
    *(ulonglong *)((longlong)&pVVar2->vector[0].x + uVar1) =
         CONCAT44(axis->y * delta + (float)((ulonglong)uVar6 >> 0x20),
                  (float)uVar7 * delta + (float)uVar6);
    *(float *)((longlong)&pVVar2->vector[0].z + uVar1) =
         fVar8 * delta + *(float *)((longlong)&pVVar2->vector[0].z + uVar1);
    uVar1 = uVar1 + 0xc;
    pVVar2 = *faceVertices;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single CalculateAOBleed(FaceData, Int32) */

float Assembly-CSharp.dll::Cube::Cube_CalculateAOBleed
                (FaceData *faceData,int32_t index,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((faceData != (FaceData *)0x0) &&
     (pSVar2 = (faceData->fields).lightValues, pSVar2 != (Single__Array *)0x0)) {
    if ((uint)pSVar2->max_length <= (uint)index) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      fVar1 = (float)(*pcVar3)();
      return fVar1;
    }
    pVVar4 = (faceData->fields).faceVertices;
    fVar5 = pSVar2->vector[index];
    if (pVVar4 != (Vector3__Array *)0x0) {
      if ((uint)pVVar4->max_length <= (uint)index) goto code_?;
      uVar6 = index + 1;
      uVar7 = pVVar4->vector[index].x;
      uVar8 = pVVar4->vector[index].y;
      fVar9 = pVVar4->vector[index].z;
      while (pVVar4 = (faceData->fields).faceVertices, pVVar4 != (Vector3__Array *)0x0) {
        uVar10 = uVar6 & 0x80000003;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
        }
        if ((uint)pVVar4->max_length <= uVar10) goto code_?;
        uVar11 = pVVar4->vector[(int)uVar10].x;
        uVar12 = pVVar4->vector[(int)uVar10].y;
        fVar13 = pVVar4->vector[(int)uVar10].z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar13 = fVar9 - fVar13;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        dVar14 = (double)(((float)uVar8 - (float)uVar12) * ((float)uVar8 - (float)uVar12) +
                          ((float)uVar7 - (float)uVar11) * ((float)uVar7 - (float)uVar11) +
                         fVar13 * fVar13);
        if (dVar14 < 0.0) {
          dVar14 = (double)FUN_?();
        }
        else {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar14;
          auVar15 = sqrtpd(ZEXT816(0),auVar15);
          dVar14 = auVar15._0_8_;
        }
        fVar13 = (float)dVar14;
        if (fVar13 < 0.0) {
          fVar13 = 0.0;
        }
        else if (fVar1 < fVar13) {
          fVar13 = fVar1;
        }
        pSVar2 = (faceData->fields).lightValues;
        if (pSVar2 == (Single__Array *)0x0) break;
        uVar10 = uVar6 & 0x80000003;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
        }
        if ((uint)pSVar2->max_length <= uVar10) goto code_?;
        if (fVar13 < 0.0) {
          fVar13 = 0.0;
        }
        else if (fVar1 < fVar13) {
          fVar13 = fVar1;
        }
        fVar13 = (fVar1 - pSVar2->vector[(int)uVar10]) * fVar13 + pSVar2->vector[(int)uVar10];
        if (fVar13 <= fVar5) {
          fVar5 = fVar13;
        }
        uVar6 = uVar6 + 1;
        if (3 < (int)(uVar6 - index)) {
          return fVar5;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar1 = (float)(*pcVar3)();
  return fVar1;
}


/* Single CalculateAOLightCheap(Face, Int32, Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector,
   Boolean) */

float Assembly-CSharp.dll::Cube::Cube_CalculateAOLightCheap
                (Face__Enum face,int32_t faceCornerIndex,
                Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector *cubePos,bool inside,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = faceCornerIndex + face * 4;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
  if (pIVar2 != (IntVector__Array__Array *)0x0) {
    if (uVar1 < (uint)pIVar2->max_length) {
      pIStack_3 = pIVar2->vector[(int)uVar1];
      pIVar4 = TypeInfo__SharedCubeFunctions->static_fields->LightTestInwardsOffset;
      if (pIVar4 == (IntVector__Array *)0x0) goto code_?;
      if (face < (Face__Enum)pIVar4->max_length) {
        uVar5 = pIVar4->vector[(int)face].x;
        uVar6 = pIVar4->vector[(int)face].y;
        sVar7 = pIVar4->vector[(int)face].z;
        iVar8 = 0;
        pIVar9 = pIStack_3->vector;
        uVar1 = 0;
        lVar10 = 0;
        if (pIStack_3 == (IntVector__Array *)0x0) goto code_?;
        while (uVar1 < (uint)pIStack_3->max_length) {
          uVar11._0_2_ = pIVar9->x;
          uVar11._2_2_ = pIVar9->y;
          sVar12 = pIVar9->z;
          uStack_13 = uVar11;
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          uVar14 = cubePos->x;
          uVar15 = cubePos->y;
          sVar16 = (undefined2)uVar11 + uVar14;
          sVar17 = uStack_13._2_2_ + uVar15;
          sVar12 = sVar12 + cubePos->z;
          if (inside != 0) {
            if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
              FUN_?();
            }
            sVar16 = sVar16 + uVar5;
            sVar17 = sVar17 + uVar6;
            sVar12 = sVar12 + sVar7;
          }
          if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)
          goto code_?;
          aIStack_18[0].x = sVar16;
          aIStack_18[0].y = sVar17;
          aIStack_18[0].z = sVar12;
          iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                             (cells,aIStack_18,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__ContainsKey_MV__WorldObject__IntVector_
                              ->klass->rgctx_data[0x21].method);
          if (iVar19 < 0) {
            uVar20 = 1;
          }
          else {
            uStack_21 = CONCAT22(sVar17,sVar16);
            uStack_22 = uStack_21;
            sStack_23 = sVar12;
            lVar24 = FUN_?(auStack_25,cells,&uStack_22);
            uVar20 = (uint)*(byte *)(lVar24 + 8);
          }
          iVar8 = iVar8 + uVar20;
          uVar1 = uVar1 + 1;
          lVar10 = lVar10 + 1;
          pIVar9 = pIVar9 + 1;
          if (3 < lVar10) {
            return (float)iVar8 * _UNK_?;
          }
        }
      }
    }
    FUN_?();
    pcVar26 = (code *)swi(3);
    fVar27 = (float)(*pcVar26)();
    return fVar27;
  }
code_?:
  FUN_?();
  pcVar26 = (code *)swi(3);
  fVar27 = (float)(*pcVar26)();
  return fVar27;
}


/* Single CalculateAOLightExpensive(Face, Int32, Dictionary`2[MV.WorldObject.IntVector,Cell],
   IntVector, Int32[], Vector3) */

float Assembly-CSharp.dll::Cube::Cube_CalculateAOLightExpensive
                (Face__Enum face,int32_t faceCornerIndex,
                Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,IntVector *cubePos,
                Int32__Array *cornerIndexToVertex,Vector3 *normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = faceCornerIndex + face * 4;
  auStack_2._8_16_ = ZEXT816(0);
  pCStack_3 = (CubeBase *)0x0;
  uStack_4 = 0;
  uStack_5 = uVar1;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar6 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (cornerIndexToVertex == (Int32__Array *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    fVar8 = (float)(*pcVar7)();
    return fVar8;
  }
  if ((uint)faceCornerIndex < (uint)cornerIndexToVertex->max_length) {
    if (pVVar6 == (Vector3__Array *)0x0) goto DAT_?;
    uVar9 = cornerIndexToVertex->vector[faceCornerIndex];
    if (uVar9 < (uint)pVVar6->max_length) {
      aVStack_10[0].x = pVVar6->vector[(int)uVar9].x;
      aVStack_10[0].y = pVVar6->vector[(int)uVar9].y;
      fVar8 = pVVar6->vector[(int)uVar9].z;
      aVStack_10[0].z = fVar8;
      auStack_2._0_8_ = aVStack_10[0]._0_8_;
      pVStack_11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SharedCubeFunctions);
      }
      uVar9 = _UNK_?;
      fVar12 = _UNK_?;
      fVar13 = _UNK_?;
      pIVar14 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
      if (pIVar14 == (IntVector__Array__Array *)0x0) goto DAT_?;
      if (uVar1 < (uint)pIVar14->max_length) {
        pIStack_15 = pIVar14->vector[(int)uVar1];
        pIVar16 = TypeInfo__SharedCubeFunctions->static_fields->LightTestInwardsOffset;
        if (pIVar16 == (IntVector__Array *)0x0) goto DAT_?;
        if (face < (Face__Enum)pIVar16->max_length) {
          uStack_17._0_2_ = pIVar16->vector[(int)face].x;
          uStack_17._2_2_ = pIVar16->vector[(int)face].y;
          sVar18 = pIVar16->vector[(int)face].z;
          pSVar19 = TypeInfo__SharedCubeFunctions->static_fields;
          pIVar20 = pSVar19->LightTestOppositeFaceCorners;
          if (pIVar20 == (Int32__Array__Array *)0x0) goto DAT_?;
          if (face < (Face__Enum)pIVar20->max_length) {
            pIVar21 = pSVar19->LightTestSameFaceCorners;
            pIVar22 = pIVar20->vector[(int)face];
            if (pIVar21 == (Int32__Array__Array *)0x0) goto DAT_?;
            if (face < (Face__Enum)pIVar21->max_length) {
              pIStack_23 = pIVar21->vector[(int)face];
              pIVar24 = pSVar19->FaceHeightAxis;
              if (pIVar24 == (Int32__Array *)0x0) goto DAT_?;
              if (face < (Face__Enum)pIVar24->max_length) {
                iStack_25 = pIVar24->vector[(int)face];
                pIVar24 = pSVar19->FaceDirectionScalar;
                if (pIVar24 == (Int32__Array *)0x0) goto DAT_?;
                if (face < (Face__Enum)pIVar24->max_length) {
                  fVar26 = 0.0;
                  lStack_27 = (longlong)(int)uVar1;
                  fVar28 = (float)pIVar24->vector[(int)face];
                  lStack_29 = (longlong)pIStack_23 - (longlong)pIVar22;
                  piVar30 = pIVar22->vector;
                  fStack_31 = 0.0;
                  uVar32 = 0;
                  pIStack_33 = pIStack_15->vector;
                  uStack_34 = 0;
                  piStack_35 = piVar30;
                  if (pIStack_15 == (IntVector__Array *)0x0) goto DAT_?;
                  do {
                    piStack_35 = piVar30;
                    if ((uint)pIStack_15->max_length <= uVar32) goto code_?;
                    uStack_36._0_2_ = pIStack_33->x;
                    uStack_36._2_2_ = pIStack_33->y;
                    uVar37._0_2_ = pIStack_33->x;
                    uVar37._2_2_ = pIStack_33->y;
                    pMStack_38 = (MethodInfo *)CONCAT44(pMStack_38._4_4_,uStack_36);
                    sVar39 = pIStack_33->z;
                    uStack_40 = uVar37;
                    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    aIStack_41[0].z = cubePos->z;
                    aIStack_41[0].x = cubePos->x;
                    aIStack_41[0].y = cubePos->y;
                    if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0)
                    goto DAT_?;
                    aIStack_42[0].y = aIStack_41[0].y + uStack_40._2_2_;
                    aIStack_42[0].x = aIStack_41[0].x + (undefined2)uVar37;
                    aIStack_43[0].x = aIStack_41[0].x + (undefined2)uVar37;
                    aIStack_43[0].y = aIStack_41[0].y + uStack_40._2_2_;
                    aIStack_43[0].z = sVar39 + aIStack_41[0].z;
                    uVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::IntVector,Cell]::
                             Dictionary_2_MV_WorldObject_IntVector_Cell__FindEntry
                                       (cells,aIStack_43,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                                        ->klass->rgctx_data[0x21].method);
                    if ((int)uVar44 < 0) {
                      auStack_2._8_16_ = ZEXT816(0);
                    }
                    else {
                      pDVar45 = (cells->fields)._entries;
                      if (pDVar45 ==
                          (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_Cell___Array *)
                          0x0) goto DAT_?;
                      if ((uint)pDVar45->max_length <= uVar44) goto code_?;
                      pCVar46 = &pDVar45->vector[(int)uVar44].value;
                      cube = pCVar46->cube;
                      auStack_2._8_16_ = *(undefined1 (*) [16])pCVar46;
                      if (iRam_? != 0) {
                        uVar44 = (uint)((ulonglong)(auStack_2 + 8) >> 0xc);
                        uVar47 = (ulonglong)((uVar44 & 0x1fffff) >> 6);
                        do {
                          uVar48 = *(ulonglong *)(uVar47 * 8 + 0xADDR);
                          puVar49 = (ulonglong *)(uVar47 * 8 + 0xADDR);
                          LOCK();
                          bVar50 = uVar48 == *puVar49;
                          if (bVar50) {
                            *puVar49 = uVar48 | 1L << (uVar44 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar50);
                      }
                      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                                ((CubeBase *)cube,&pVStack_11,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pFVar51 = TypeInfo__SharedCubeFunctions->static_fields->
                                LightTestNormalTargetFaces;
                      if (pFVar51 == (Face__Enum__Array__Array *)0x0) goto DAT_?;
                      if ((uint)pFVar51->max_length <= uVar1) goto code_?;
                      pFVar52 = pFVar51->vector[(int)uVar1];
                      if (pFVar52 == (Face__Enum__Array *)0x0) goto DAT_?;
                      if ((uint)pFVar52->max_length <= uVar32) goto code_?;
                      pDVar53 = TypeInfo__SharedCubeFunctions->static_fields->
                                VertexIndexToFaceIndexes;
                      if (pDVar53 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0)
                      goto DAT_?;
                      FVar54 = *(Face__Enum *)
                                ((longlong)piVar30 + ((longlong)pFVar52 - (longlong)pIVar22));
                      if ((Face__Enum)pDVar53->max_length <= FVar54) goto code_?;
                      if (pIVar22 == (Int32__Array *)0x0) goto DAT_?;
                      if ((uint)pIVar22->max_length <= uVar32) goto code_?;
                      if (pDVar53->vector[(int)FVar54] ==
                          (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto DAT_?;
                      uVar1 = FUN_?(pDVar53->vector[(int)FVar54],*piVar30);
                      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pVVar6 = pVStack_11;
                      pMVar55 = (MethodInfo *)0x0;
                      pVVar56 = Cube_GetNormals(pVStack_11,FVar54,(MethodInfo *)0x0);
                      if (pVVar56 == (Vector3__Array *)0x0) goto DAT_?;
                      if ((uint)pVVar56->max_length <= uVar1) goto code_?;
                      VStack_57.x = pVVar56->vector[(int)uVar1].x;
                      VStack_57.y = pVVar56->vector[(int)uVar1].y;
                      fVar58 = pVVar56->vector[(int)uVar1].z;
                      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      iVar59 = (int)uStack_36._2_2_;
                      iVar60 = (int)sVar39;
                      sVar61 = (short)pMStack_38;
                      if (pIStack_23 == (Int32__Array *)0x0) goto DAT_?;
                      if ((uint)pIStack_23->max_length <= uVar32) goto code_?;
                      if (pVVar6 == (Vector3__Array *)0x0) goto DAT_?;
                      uVar1 = *(uint *)((longlong)piStack_35 + lStack_29);
                      if ((uint)pVVar6->max_length <= uVar1) goto code_?;
                      piStack_35 = *(int32_t **)(pVVar6->vector + (int)uVar1);
                      VStack_62.z = (float)iVar60 + pVVar6->vector[(int)uVar1].z;
                      VStack_62.x = (float)(int)sVar61 + SUB84(piStack_35,0);
                      VStack_62.y = (float)iVar59 + (float)((ulonglong)piStack_35 >> 0x20);
                      if (((uint)pIVar22->max_length <= uVar32) ||
                         (uVar1 = *piVar30, (uint)pVVar6->max_length <= uVar1))
                      goto code_?;
                      piStack_35 = *(int32_t **)(pVVar6->vector + (int)uVar1);
                      fVar63 = (float)iVar60 + pVVar6->vector[(int)uVar1].z;
                      fVar64 = (float)(int)sVar61 + SUB84(piStack_35,0);
                      fVar65 = (float)iVar59 + (float)((ulonglong)piStack_35 >> 0x20);
                      VStack_66.y = fVar65;
                      VStack_66.x = fVar64;
                      uVar1 = uVar32 + 1 & 0x80000003;
                      if ((int)uVar1 < 0) {
                        uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                      }
                      VStack_66.z = fVar63;
                      if (((uint)pIVar22->max_length <= uVar1) ||
                         (uVar1 = pIVar22->vector[(int)uVar1], (uint)pVVar6->max_length <= uVar1
                         )) goto code_?;
                      piStack_35 = *(int32_t **)(pVVar6->vector + (int)uVar1);
                      fVar67 = SUB84(piStack_35,0);
                      uVar47 = (ulonglong)piStack_35 >> 0x20;
                      uVar44 = uVar32 + 3 & 0x80000003;
                      if ((int)uVar44 < 0) {
                        uVar44 = (uVar44 - 1 | 0xfffffffc) + 1;
                      }
                      if (((uint)pIVar22->max_length <= uVar44) ||
                         (uVar44 = pIVar22->vector[(int)uVar44], (uint)pVVar6->max_length <= uVar44
                         )) goto code_?;
                      piStack_35._0_4_ = pVVar6->vector[(int)uVar44].x;
                      piStack_35._4_4_ = pVVar6->vector[(int)uVar44].y;
                      fVar68 = pVVar6->vector[(int)uVar44].z;
                      uStack_69 = CONCAT44((float)iVar59 + (float)uVar47,
                                            (float)(int)sVar61 + fVar67);
                      fVar70 = (float)iVar59 + (float)piStack_35._4_4_;
                      fVar71 = (float)(int)sVar61 + (float)piStack_35._0_4_;
                      VStack_72.y = fVar65;
                      VStack_72.x = fVar64;
                      fStack_73 = (float)iVar60 + pVVar6->vector[(int)uVar1].z;
                      VStack_72.z = fVar63;
                      fVar67 = (float)FUN_?(&VStack_72,&uStack_69);
                      if (fVar67 < 0.0) {
                        fVar67 = 0.0;
                      }
                      else if (fVar12 < fVar67) {
                        fVar67 = fVar12;
                      }
                      uStack_74 = CONCAT44(fVar70,fVar71);
                      uStack_75 = CONCAT44(fVar65,fVar64);
                      fStack_76 = (float)iVar60 + fVar68;
                      fStack_77 = fVar63;
                      fVar68 = (float)FUN_?(&uStack_75,&uStack_74);
                      if (fVar68 < 0.0) {
                        fVar68 = 0.0;
                      }
                      else if (fVar12 < fVar68) {
                        fVar68 = fVar12;
                      }
                      VStack_78.x = (float)auStack_2._0_4_;
                      VStack_78.y = (float)auStack_2._4_4_;
                      uStack_79 = CONCAT44(fVar65,fVar64);
                      fStack_80 = fVar63;
                      VStack_78.z = fVar8;
                      fVar64 = (float)FUN_?(&VStack_78,&uStack_79);
                      iVar81 = iStack_25;
                      if (fVar64 < 0.0) {
                        fVar64 = 0.0;
                      }
                      else if (fVar12 < fVar64) {
                        fVar64 = fVar12;
                      }
                      fVar65 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_62,iStack_25,pMVar55);
                      fVar63 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (aVStack_10,iVar81,pMVar55);
                      piStack_35 = *(int32_t **)normal;
                      fVar58 = (float)((uint)VStack_57.y ^ uVar9) *
                               (float)((ulonglong)piStack_35 >> 0x20) +
                               (float)((uint)VStack_57.x ^ uVar9) * SUB84(piStack_35,0) +
                               (float)((uint)fVar58 ^ uVar9) * normal->z + fVar13;
                      fVar58 = fVar58 + fVar58;
                      if (fVar58 < 0.0) {
                        fVar58 = 0.0;
                      }
                      else if (fVar12 < fVar58) {
                        fVar58 = fVar12;
                      }
                      iVar60 = iVar81 + 1;
                      fVar71 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_62,
                                          iVar60 + (iVar60 / 3 + (iVar60 >> 0x1f) +
                                                   (int)(((longlong)iVar60 / 3 +
                                                          ((longlong)iVar60 >> 0x3f) & 0xffffffffU)
                                                        >> 0x1f)) * -3,pMVar55);
                      iVar60 = iVar81 + 1;
                      fVar70 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_66,
                                          iVar60 + (iVar60 / 3 + (iVar60 >> 0x1f) +
                                                   (int)(((longlong)iVar60 / 3 +
                                                          ((longlong)iVar60 >> 0x3f) & 0xffffffffU)
                                                        >> 0x1f)) * -3,pMVar55);
                      uVar1 = _UNK_?;
                      iVar60 = iVar81 + 2;
                      fVar82 = (float)((uint)(fVar71 - fVar70) & _UNK_?);
                      fVar71 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_62,
                                          iVar60 + (iVar60 / 3 + (iVar60 >> 0x1f) +
                                                   (int)(((longlong)iVar60 / 3 +
                                                          ((longlong)iVar60 >> 0x3f) & 0xffffffffU)
                                                        >> 0x1f)) * -3,pMVar55);
                      iVar60 = iVar81 + 2;
                      fVar70 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_66,
                                          iVar60 + (iVar60 / 3 + (iVar60 >> 0x1f) +
                                                   (int)(((longlong)iVar60 / 3 +
                                                          ((longlong)iVar60 >> 0x3f) & 0xffffffffU)
                                                        >> 0x1f)) * -3,pMVar55);
                      fVar58 = (fVar12 - (float)((uint)(fVar71 - fVar70) & uVar1)) *
                               (fVar12 - fVar82) *
                               (fVar65 * fVar28 - fVar63 * fVar28) *
                               fVar67 * fVar68 * (fVar12 - fVar64) * fVar58;
                      iVar60 = FUN_?((int)sVar61);
                      iVar59 = FUN_?(iVar59);
                      iVar83 = FUN_?((int)sVar39);
                      if (iVar83 + iVar59 + iVar60 == 3) {
                        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pFVar52 = TypeInfo__SharedCubeFunctions->static_fields->
                                  LightTestNormalSecondaryTargetFaces;
                        if (pFVar52 == (Face__Enum__Array *)0x0) goto DAT_?;
                        if ((uint)pFVar52->max_length <= uStack_5) goto code_?;
                        pDVar53 = TypeInfo__SharedCubeFunctions->static_fields->
                                  VertexIndexToFaceIndexes;
                        if (pDVar53 == (Dictionary_2_System_Int32_System_Int32___Array *)0x0)
                        goto DAT_?;
                        FVar54 = pFVar52->vector[lStack_27];
                        if (((Face__Enum)pDVar53->max_length <= FVar54) ||
                           ((uint)pIVar22->max_length <= uVar32)) goto code_?;
                        if (pDVar53->vector[(int)FVar54] ==
                            (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto DAT_?;
                        uVar1 = FUN_?(pDVar53->vector[(int)FVar54],*piVar30);
                        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pVVar6 = Cube_GetNormals(pVVar6,FVar54,(MethodInfo *)0x0);
                        if (pVVar6 == (Vector3__Array *)0x0) goto DAT_?;
                        if ((uint)pVVar6->max_length <= uVar1) goto code_?;
                        uVar84 = pVVar6->vector[(int)uVar1].x;
                        uVar85 = pVVar6->vector[(int)uVar1].y;
                        uVar86 = normal->x;
                        uVar87 = normal->y;
                        fVar64 = (float)(uVar85 ^ uVar9) * (float)uVar87 +
                                 (float)(uVar84 ^ uVar9) * (float)uVar86 +
                                 (float)((uint)pVVar6->vector[(int)uVar1].z ^ uVar9) * normal->z
                                 + fVar12;
                        if (fVar64 < 0.0) {
                          fVar64 = 0.0;
                        }
                        else if (fVar12 < fVar64) {
                          fVar64 = fVar12;
                        }
                        fVar58 = fVar58 * fVar64;
                      }
                      fVar26 = fVar26 + fVar58;
                      uVar1 = uStack_5;
                      fStack_31 = fVar26;
                    }
                    piVar30 = piVar30 + 1;
                    pIStack_33 = pIStack_33 + 1;
                    uVar32 = uVar32 + 1;
                  } while ((int)uVar32 < 4);
                  pMStack_38 = (MethodInfo *)pIVar22->vector;
                  uVar47 = 0;
                  lStack_27 = (longlong)pIStack_23 - (longlong)pIVar22;
                  fStackX_8 = 0.0;
                  pIStack_33 = (IntVector *)0x0;
                  pIVar88 = pIStack_15->vector;
                  piStack_35 = piVar30;
                  while ((uint)uVar47 < (uint)pIStack_15->max_length) {
                    uVar89._0_2_ = pIVar88->x;
                    uVar89._2_2_ = pIVar88->y;
                    sVar39 = pIVar88->z;
                    uStack_36 = uVar89;
                    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    sVar90 = (undefined2)uVar89 + (short)uStack_17;
                    sVar91 = uStack_36._2_2_ + uStack_17._2_2_;
                    pIVar92 = TypeInfo__MV__WorldObject__IntVector->static_fields;
                    sVar39 = sVar39 + sVar18;
                    uVar93._0_2_ = (pIVar92->Zero).x;
                    uVar93._2_2_ = (pIVar92->Zero).y;
                    sVar61 = (pIVar92->Zero).z;
                    uStack_40 = uVar93;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MV__WorldObject__IntVector);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (((sVar90 == (undefined2)uVar93) && (sVar91 == uStack_40._2_2_)) &&
                       (sVar39 == sVar61)) {
code_?:
                    }
                    else {
                      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aIStack_43[0].x = cubePos->x;
                      aIStack_43[0].y = cubePos->y;
                      aIStack_41[0].z = sVar39 + cubePos->z;
                      aIStack_42[0].x = sVar90 + cubePos->x;
                      aIStack_42[0].y = sVar91 + aIStack_43[0].y;
                      aIStack_41[0].x = aIStack_42[0].x;
                      aIStack_41[0].y = sVar91 + aIStack_43[0].y;
                      cVar94 = FUN_?(cells,aIStack_41);
                      cube_00 = pCStack_3;
                      if (cVar94 == '\0') goto code_?;
                      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                                (cube_00,&pVStack_11,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      iVar81 = iStack_25;
                      if (pIStack_23 == (Int32__Array *)0x0) goto DAT_?;
                      if ((uint)pIStack_23->max_length <= (uint)uStack_34) break;
                      if (pVStack_11 == (Vector3__Array *)0x0) goto DAT_?;
                      uVar1 = *(uint *)((longlong)&pMStack_38->methodPointer + lStack_27);
                      if ((uint)pVStack_11->max_length <= uVar1) break;
                      uVar95 = pVStack_11->vector[(int)uVar1].x;
                      uVar96 = pVStack_11->vector[(int)uVar1].y;
                      fVar58 = (float)(int)sVar39 + pVStack_11->vector[(int)uVar1].z;
                      fVar26 = (float)(int)sVar90 + (float)uVar95;
                      fVar13 = (float)(int)sVar91 + (float)uVar96;
                      VStack_57.y = fVar13;
                      VStack_57.x = fVar26;
                      VStack_57.z = fVar58;
                      if (pIVar22 == (Int32__Array *)0x0) goto DAT_?;
                      if (((uint)pIVar22->max_length <= (uint)uStack_34) ||
                         (uVar1 = *(uint *)&pMStack_38->methodPointer,
                         (uint)pVStack_11->max_length <= uVar1)) break;
                      uVar97 = pVStack_11->vector[(int)uVar1].x;
                      uVar98 = pVStack_11->vector[(int)uVar1].y;
                      fVar71 = (float)(int)sVar39 + pVStack_11->vector[(int)uVar1].z;
                      fVar67 = (float)(int)sVar90 + (float)uVar97;
                      fVar68 = (float)(int)sVar91 + (float)uVar98;
                      VStack_78.y = fVar68;
                      VStack_78.x = fVar67;
                      pMVar55 = pMStack_38;
                      VStack_78.z = fVar71;
                      fVar64 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (aVStack_10,iStack_25,pMStack_38);
                      fVar64 = fVar64 * fVar28;
                      fVar65 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_57,iVar81,pMVar55);
                      fVar63 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_78,iVar81,pMVar55);
                      if ((fVar64 <= fVar63 * fVar28) || (fVar65 * fVar28 <= fVar64)) {
                        if (fVar63 * fVar28 <= fVar64) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__System__Math);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        fVar67 = aVStack_10[0].x - fVar67;
                        fVar68 = aVStack_10[0].y - fVar68;
                        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        dVar99 = (double)(fVar68 * fVar68 + fVar67 * fVar67 +
                                         (fVar8 - fVar71) * (fVar8 - fVar71));
                        if (dVar99 < 0.0) {
                          dVar99 = (double)FUN_?();
                        }
                        else {
                          auVar100._8_8_ = 0;
                          auVar100._0_8_ = dVar99;
                          auVar100 = sqrtpd(ZEXT816(0),auVar100);
                          dVar99 = auVar100._0_8_;
                        }
                        fVar13 = (float)dVar99;
                        if (fVar13 < 0.0) {
                          fVar13 = 0.0;
                        }
                        else if (fVar12 < fVar13) {
                          fVar13 = fVar12;
                        }
                        fStackX_8 = fStackX_8 + (fVar12 - fVar13);
                      }
                      else {
                        fStack_80 = fVar58 - fVar71;
                        fVar64 = aVStack_10[0].x;
                        uStack_79 = CONCAT44(fVar13 - fVar68,fVar26 - fVar67);
                        fStack_77 = fVar8 - fVar71;
                        uStack_75 = CONCAT44(aVStack_10[0].y - fVar68,aVStack_10[0].x - fVar67);
                        puVar101 = (undefined8 *)FUN_?(&VStack_66,&uStack_75,&uStack_79);
                        fStack_76 = fVar71 + *(float *)(puVar101 + 1);
                        uStack_74 = CONCAT44(fVar68 + (float)((ulonglong)*puVar101 >> 0x20),
                                              fVar67 + (float)*puVar101);
                        VStack_72.x = (float)auStack_2._0_4_;
                        VStack_72.y = (float)auStack_2._4_4_;
                        VStack_72.z = fVar8;
                        fVar65 = (float)FUN_?(&VStack_72,&uStack_74);
                        if (fVar65 < 0.0) {
                          fVar65 = 0.0;
                        }
                        else if (fVar12 < fVar65) {
                          fVar65 = fVar12;
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__System__Math);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        fVar13 = aVStack_10[0].y - fVar13;
                        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        dVar99 = (double)(fVar13 * fVar13 + (fVar64 - fVar26) * (fVar64 - fVar26) +
                                         (fVar8 - fVar58) * (fVar8 - fVar58));
                        if (dVar99 < 0.0) {
                          dVar99 = (double)FUN_?();
                        }
                        else {
                          auVar102._8_8_ = 0;
                          auVar102._0_8_ = dVar99;
                          auVar100 = sqrtpd(ZEXT816(0),auVar102);
                          dVar99 = auVar100._0_8_;
                        }
                        fVar13 = (float)dVar99;
                        if (fVar13 < 0.0) {
                          fVar13 = 0.0;
                        }
                        else if (fVar12 < fVar13) {
                          fVar13 = fVar12;
                        }
                        fStackX_8 = fStackX_8 + (fVar12 - fVar65) * fVar13;
                      }
                    }
                    pIVar88 = pIVar88 + 1;
                    uVar47 = (ulonglong)((int)uStack_34 + 1);
                    pMStack_38 = (MethodInfo *)((longlong)&pMStack_38->methodPointer + 4);
                    pIStack_33 = (IntVector *)((longlong)&pIStack_33->x + 1);
                    uStack_34 = uVar47;
                    if (3 < (longlong)pIStack_33) {
                      if (fStack_31 <= fStackX_8) {
                        fStack_31 = fStackX_8;
                      }
                      return fVar12 - fStack_31 * _UNK_?;
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
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float)(*pcVar7)();
  return fVar8;
}


/* Void ClampFace(Vector3[] ByRef) */

void Assembly-CSharp.dll::Cube::Cube_ClampFace(Vector3__Array **faceVertices,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  uVar3 = 0;
  pVVar4 = *faceVertices;
  uVar5 = uVar3;
  while (pVVar4 != (Vector3__Array *)0x0) {
    uVar6 = (uint)uVar5;
    if ((int)pVVar4->max_length <= (int)uVar6) {
      return;
    }
    pVVar4 = *faceVertices;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length <= uVar6) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar8 = *(float *)((longlong)&pVVar4->vector[0].x + uVar3);
    fVar9 = fVar1;
    if ((fVar1 <= fVar8) && (fVar9 = fVar8, fVar2 < fVar8)) {
      fVar9 = fVar2;
    }
    *(float *)((longlong)&pVVar4->vector[0].x + uVar3) = fVar9;
    fVar8 = *(float *)((longlong)&pVVar4->vector[0].y + uVar3);
    fVar9 = fVar1;
    if ((fVar1 <= fVar8) && (fVar9 = fVar8, fVar2 < fVar8)) {
      fVar9 = fVar2;
    }
    *(float *)((longlong)&pVVar4->vector[0].y + uVar3) = fVar9;
    fVar8 = *(float *)((longlong)&pVVar4->vector[0].z + uVar3);
    fVar9 = fVar1;
    if ((fVar1 <= fVar8) && (fVar9 = fVar8, fVar2 < fVar8)) {
      fVar9 = fVar2;
    }
    *(float *)((longlong)&pVVar4->vector[0].z + uVar3) = fVar9;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length <= uVar6) goto code_?;
    uVar10 = *(undefined8 *)((longlong)&pVVar4->vector[0].x + uVar3);
    fVar8 = *(float *)((longlong)&pVVar4->vector[0].z + uVar3);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    fStack_11 = (float)uVar10;
    dVar12 = (double)FUN_?((double)fStack_11,3);
    fStack_13 = (float)((ulonglong)uVar10 >> 0x20);
    dVar14 = (double)FUN_?((double)fStack_13,3);
    dVar15 = (double)FUN_?((double)fVar8,3);
    if ((uint)pVVar4->max_length <= uVar6) goto code_?;
    uVar5 = (ulonglong)(uVar6 + 1);
    *(ulonglong *)((longlong)&pVVar4->vector[0].x + uVar3) = CONCAT44((float)dVar14,(float)dVar12);
    *(float *)((longlong)&pVVar4->vector[0].z + uVar3) = (float)dVar15;
    uVar3 = uVar3 + 0xc;
    pVVar4 = *faceVertices;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Cube Clone() */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone(Cube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
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
  if (this == (Cube *)0x0) {
    return (Cube *)0x0;
  }
  if (((this->fields)._.byteCorners == (Byte__Array *)0x0) ||
     (lVar1 = FUN_?(), (this->fields)._.faceMaterials == (Byte__Array *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pCVar3 = (Cube *)(*pcVar2)();
    return pCVar3;
  }
  lVar4 = FUN_?();
  pCVar3 = (Cube *)FUN_?(TypeInfo__Cube);
  pBVar5 = TypeInfo__System__Byte;
  byteCorners = (Byte__Array *)0x0;
  faceMaterials = byteCorners;
  if ((lVar4 != 0) &&
     (faceMaterials = (Byte__Array *)FUN_?(lVar4,TypeInfo__System__Byte),
     faceMaterials == (Byte__Array *)0x0)) {
    FUN_?(lVar4,pBVar5);
    pcVar2 = (code *)swi(3);
    pCVar3 = (Cube *)(*pcVar2)();
    return pCVar3;
  }
  pBVar5 = TypeInfo__System__Byte;
  if ((lVar1 != 0) &&
     (byteCorners = (Byte__Array *)FUN_?(lVar1,TypeInfo__System__Byte),
     byteCorners == (Byte__Array *)0x0)) {
    FUN_?(lVar1,pBVar5);
    pcVar2 = (code *)swi(3);
    pCVar3 = (Cube *)(*pcVar2)();
    return pCVar3;
  }
  Cube__ctor(pCVar3,byteCorners,faceMaterials,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
            ((CubeBase *)pCVar3,(MethodInfo *)0x0);
  return pCVar3;
}


/* Cube Clone(Cube) */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone_1(Cube *original,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
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
  if (original == (Cube *)0x0) {
    return (Cube *)0x0;
  }
  if (((original->fields)._.byteCorners == (Byte__Array *)0x0) ||
     (lVar1 = FUN_?(), (original->fields)._.faceMaterials == (Byte__Array *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pCVar3 = (Cube *)(*pcVar2)();
    return pCVar3;
  }
  lVar4 = FUN_?();
  pCVar3 = (Cube *)FUN_?(TypeInfo__Cube);
  pBVar5 = TypeInfo__System__Byte;
  byteCorners = (Byte__Array *)0x0;
  faceMaterials = byteCorners;
  if ((lVar4 != 0) &&
     (faceMaterials = (Byte__Array *)FUN_?(lVar4,TypeInfo__System__Byte),
     faceMaterials == (Byte__Array *)0x0)) {
    FUN_?(lVar4,pBVar5);
    pcVar2 = (code *)swi(3);
    pCVar3 = (Cube *)(*pcVar2)();
    return pCVar3;
  }
  pBVar5 = TypeInfo__System__Byte;
  if ((lVar1 != 0) &&
     (byteCorners = (Byte__Array *)FUN_?(lVar1,TypeInfo__System__Byte),
     byteCorners == (Byte__Array *)0x0)) {
    FUN_?(lVar1,pBVar5);
    pcVar2 = (code *)swi(3);
    pCVar3 = (Cube *)(*pcVar2)();
    return pCVar3;
  }
  Cube__ctor(pCVar3,byteCorners,faceMaterials,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
            ((CubeBase *)pCVar3,(MethodInfo *)0x0);
  return pCVar3;
}


/* List`1[UnityEngine.Vector3] CreateCubeCornersFromTopFace(List`1[UnityEngine.Vector3], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_CreateCubeCornersFromTopFace
          (List_1_UnityEngine_Vector3_ *cubeCorners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,8,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_00,8);
  uVar1 = 0;
  uVar2 = 0;
  if (cubeCorners == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  while (pMVar3 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar2 < (cubeCorners->fields)._size) {
    if ((uint)(cubeCorners->fields)._size <= uVar2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length <= uVar2) goto code_?;
    if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar5._0_4_ = (int32_t)pVVar4->vector[(int)uVar2].x;
    uVar5._4_4_ = (int32_t)pVVar4->vector[(int)uVar2].y;
    fVar6 = pVVar4->vector[(int)uVar2].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    pPVar8 = (this->fields)._items;
    uVar9 = (this->fields)._size;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar9 < (uint)pPVar8->max_length) {
      (this->fields)._size = uVar9 + 1;
      if ((uint)pPVar8->max_length <= uVar9) goto code_?;
      uVar2 = uVar2 + 1;
      pPVar8->vector[(int)uVar9].Quadrant = (int32_t)uVar5;
      pPVar8->vector[(int)uVar9].FirstAxisSign = uVar5._4_4_;
      pPVar8->vector[(int)uVar9].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      PStack_10._0_8_ = uVar5;
      PStack_10.SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_10,pMVar3->klass->rgctx_data[0xe].method);
      uVar2 = uVar2 + 1;
    }
  }
  uVar2 = 0;
  while (pMVar3 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar2 < (cubeCorners->fields)._size) {
    if ((uint)(cubeCorners->fields)._size <= uVar2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length <= uVar2) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar11._0_4_ = (int32_t)pVVar4->vector[(int)uVar2].x;
    uVar11._4_4_ = (int32_t)pVVar4->vector[(int)uVar2].y;
    fVar6 = pVVar4->vector[(int)uVar2].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    pPVar8 = (this_00->fields)._items;
    uVar9 = (this_00->fields)._size;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar9 < (uint)pPVar8->max_length) {
      (this_00->fields)._size = uVar9 + 1;
      if ((uint)pPVar8->max_length <= uVar9) goto code_?;
      uVar2 = uVar2 + 1;
      pPVar8->vector[(int)uVar9].Quadrant = (int32_t)uVar11;
      pPVar8->vector[(int)uVar9].FirstAxisSign = uVar11._4_4_;
      pPVar8->vector[(int)uVar9].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      PStack_10._0_8_ = uVar11;
      PStack_10.SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,&PStack_10,pMVar3->klass->rgctx_data[0xe].method);
      uVar2 = uVar2 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    if ((uint)(cubeCorners->fields)._size < 4) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 4) goto code_?;
    if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      pLVar13 = (List_1_UnityEngine_Vector3_ *)(*pcVar12)();
      return pLVar13;
    }
    fVar6 = pVVar4->vector[3].y;
    pPVar8->vector[7].Quadrant = (int32_t)pVVar4->vector[3].x;
    pPVar8->vector[7].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[7].SecondAxisSign = (int32_t)pVVar4->vector[3].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 3) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 3) goto code_?;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    fVar6 = pVVar4->vector[2].y;
    pPVar8->vector[6].Quadrant = (int32_t)pVVar4->vector[2].x;
    pPVar8->vector[6].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[6].SecondAxisSign = (int32_t)pVVar4->vector[2].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((cubeCorners->fields)._size == 0) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length == 0) goto code_?;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    fVar6 = pVVar4->vector[0].y;
    pPVar8->vector[4].Quadrant = (int32_t)pVVar4->vector[0].x;
    pPVar8->vector[4].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[4].SecondAxisSign = (int32_t)pVVar4->vector[0].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 2) goto code_?;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    fVar6 = pVVar4->vector[1].y;
    pPVar8->vector[5].Quadrant = (int32_t)pVVar4->vector[1].x;
    pPVar8->vector[5].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[5].SecondAxisSign = (int32_t)pVVar4->vector[1].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 8) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 8) goto code_?;
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    fVar6 = pVVar4->vector[7].y;
    pPVar8->vector[3].Quadrant = (int32_t)pVVar4->vector[7].x;
    pPVar8->vector[3].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[3].SecondAxisSign = (int32_t)pVVar4->vector[7].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 7) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 7) goto code_?;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    fVar6 = pVVar4->vector[6].y;
    pPVar8->vector[2].Quadrant = (int32_t)pVVar4->vector[6].x;
    pPVar8->vector[2].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[2].SecondAxisSign = (int32_t)pVVar4->vector[6].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 5) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 5) goto code_?;
    if ((this->fields)._size == 0) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    fVar6 = pVVar4->vector[4].y;
    pPVar8->vector[0].Quadrant = (int32_t)pVVar4->vector[4].x;
    pPVar8->vector[0].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[0].SecondAxisSign = (int32_t)pVVar4->vector[4].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 6) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 6) goto code_?;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    fVar6 = pVVar4->vector[5].y;
    pPVar8->vector[1].Quadrant = (int32_t)pVVar4->vector[5].x;
    pPVar8->vector[1].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[1].SecondAxisSign = (int32_t)pVVar4->vector[5].z;
    goto code_?;
  case Face__Enum_Front:
    if ((uint)(cubeCorners->fields)._size < 4) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 4) goto code_?;
    if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this->fields)._size == 0) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    fVar6 = pVVar4->vector[3].y;
    pPVar8->vector[0].Quadrant = (int32_t)pVVar4->vector[3].x;
    pPVar8->vector[0].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[0].SecondAxisSign = (int32_t)pVVar4->vector[3].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 3) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 3) goto code_?;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    fVar6 = pVVar4->vector[2].y;
    pPVar8->vector[1].Quadrant = (int32_t)pVVar4->vector[2].x;
    pPVar8->vector[1].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[1].SecondAxisSign = (int32_t)pVVar4->vector[2].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 5) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 5) goto code_?;
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    fVar6 = pVVar4->vector[4].y;
    pPVar8->vector[3].Quadrant = (int32_t)pVVar4->vector[4].x;
    pPVar8->vector[3].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[3].SecondAxisSign = (int32_t)pVVar4->vector[4].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 6) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 6) goto code_?;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    fVar6 = pVVar4->vector[5].y;
    pPVar8->vector[2].Quadrant = (int32_t)pVVar4->vector[5].x;
    pPVar8->vector[2].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[2].SecondAxisSign = (int32_t)pVVar4->vector[5].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((cubeCorners->fields)._size == 0) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length == 0) goto code_?;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    fVar6 = pVVar4->vector[0].y;
    pPVar8->vector[7].Quadrant = (int32_t)pVVar4->vector[0].x;
    pPVar8->vector[7].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[7].SecondAxisSign = (int32_t)pVVar4->vector[0].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 2) goto code_?;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    fVar6 = pVVar4->vector[1].y;
    pPVar8->vector[6].Quadrant = (int32_t)pVVar4->vector[1].x;
    pPVar8->vector[6].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[6].SecondAxisSign = (int32_t)pVVar4->vector[1].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 8) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 8) goto code_?;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    fVar6 = pVVar4->vector[7].y;
    pPVar8->vector[4].Quadrant = (int32_t)pVVar4->vector[7].x;
    pPVar8->vector[4].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[4].SecondAxisSign = (int32_t)pVVar4->vector[7].z;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 7) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 7) goto code_?;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar8 = (this->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    fVar6 = pVVar4->vector[6].y;
    pPVar8->vector[5].Quadrant = (int32_t)pVVar4->vector[6].x;
    pPVar8->vector[5].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[5].SecondAxisSign = (int32_t)pVVar4->vector[6].z;
    goto code_?;
  case Face__Enum_Back:
    if ((uint)(cubeCorners->fields)._size < 4) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    fVar6 = pVVar4->vector[3].y;
    pPVar8->vector[0].Quadrant = (int32_t)pVVar4->vector[3].x;
    pPVar8->vector[0].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[0].SecondAxisSign = (int32_t)pVVar4->vector[3].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 3) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    fVar6 = pVVar4->vector[2].y;
    pPVar8->vector[1].Quadrant = (int32_t)pVVar4->vector[2].x;
    pPVar8->vector[1].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[1].SecondAxisSign = (int32_t)pVVar4->vector[2].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 5) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    fVar6 = pVVar4->vector[4].y;
    pPVar8->vector[3].Quadrant = (int32_t)pVVar4->vector[4].x;
    pPVar8->vector[3].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[3].SecondAxisSign = (int32_t)pVVar4->vector[4].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 6) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    fVar6 = pVVar4->vector[5].y;
    pPVar8->vector[2].Quadrant = (int32_t)pVVar4->vector[5].x;
    pPVar8->vector[2].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[2].SecondAxisSign = (int32_t)pVVar4->vector[5].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((cubeCorners->fields)._size == 0) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    fVar6 = pVVar4->vector[0].y;
    pPVar8->vector[7].Quadrant = (int32_t)pVVar4->vector[0].x;
    pPVar8->vector[7].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[7].SecondAxisSign = (int32_t)pVVar4->vector[0].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    fVar6 = pVVar4->vector[1].y;
    pPVar8->vector[6].Quadrant = (int32_t)pVVar4->vector[1].x;
    pPVar8->vector[6].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[6].SecondAxisSign = (int32_t)pVVar4->vector[1].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 8) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    fVar6 = pVVar4->vector[7].y;
    pPVar8->vector[4].Quadrant = (int32_t)pVVar4->vector[7].x;
    pPVar8->vector[4].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[4].SecondAxisSign = (int32_t)pVVar4->vector[7].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 7) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    fVar6 = pVVar4->vector[6].y;
    pPVar8->vector[5].Quadrant = (int32_t)pVVar4->vector[6].x;
    pPVar8->vector[5].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[5].SecondAxisSign = (int32_t)pVVar4->vector[6].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this->fields)._size == 0) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar14->max_length == 0) goto code_?;
    iVar15 = pPVar8->vector[2].FirstAxisSign;
    pPVar14->vector[0].Quadrant = pPVar8->vector[2].Quadrant;
    pPVar14->vector[0].FirstAxisSign = iVar15;
    pPVar14->vector[0].SecondAxisSign = pPVar8->vector[2].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 2) goto code_?;
    iVar15 = pPVar8->vector[3].FirstAxisSign;
    pPVar14->vector[1].Quadrant = pPVar8->vector[3].Quadrant;
    pPVar14->vector[1].FirstAxisSign = iVar15;
    pPVar14->vector[1].SecondAxisSign = pPVar8->vector[3].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 3) goto code_?;
    iVar15 = pPVar8->vector[0].FirstAxisSign;
    pPVar14->vector[2].Quadrant = pPVar8->vector[0].Quadrant;
    pPVar14->vector[2].FirstAxisSign = iVar15;
    pPVar14->vector[2].SecondAxisSign = pPVar8->vector[0].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 4) goto code_?;
    iVar15 = pPVar8->vector[1].FirstAxisSign;
    pPVar14->vector[3].Quadrant = pPVar8->vector[1].Quadrant;
    pPVar14->vector[3].FirstAxisSign = iVar15;
    pPVar14->vector[3].SecondAxisSign = pPVar8->vector[1].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 5) goto code_?;
    iVar15 = pPVar8->vector[6].FirstAxisSign;
    pPVar14->vector[4].Quadrant = pPVar8->vector[6].Quadrant;
    pPVar14->vector[4].FirstAxisSign = iVar15;
    pPVar14->vector[4].SecondAxisSign = pPVar8->vector[6].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 6) goto code_?;
    iVar15 = pPVar8->vector[7].FirstAxisSign;
    pPVar14->vector[5].Quadrant = pPVar8->vector[7].Quadrant;
    pPVar14->vector[5].FirstAxisSign = iVar15;
    pPVar14->vector[5].SecondAxisSign = pPVar8->vector[7].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 7) goto code_?;
    iVar15 = pPVar8->vector[4].FirstAxisSign;
    pPVar14->vector[6].Quadrant = pPVar8->vector[4].Quadrant;
    pPVar14->vector[6].FirstAxisSign = iVar15;
    pPVar14->vector[6].SecondAxisSign = pPVar8->vector[4].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 8) goto code_?;
    iVar15 = pPVar8->vector[5].FirstAxisSign;
    pPVar14->vector[7].Quadrant = pPVar8->vector[5].Quadrant;
    pPVar14->vector[7].FirstAxisSign = iVar15;
    iVar15 = pPVar8->vector[5].SecondAxisSign;
    break;
  case Face__Enum_Left:
    if ((uint)(cubeCorners->fields)._size < 4) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    fVar6 = pVVar4->vector[3].y;
    pPVar8->vector[0].Quadrant = (int32_t)pVVar4->vector[3].x;
    pPVar8->vector[0].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[0].SecondAxisSign = (int32_t)pVVar4->vector[3].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 3) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    fVar6 = pVVar4->vector[2].y;
    pPVar8->vector[1].Quadrant = (int32_t)pVVar4->vector[2].x;
    pPVar8->vector[1].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[1].SecondAxisSign = (int32_t)pVVar4->vector[2].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 5) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    fVar6 = pVVar4->vector[4].y;
    pPVar8->vector[3].Quadrant = (int32_t)pVVar4->vector[4].x;
    pPVar8->vector[3].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[3].SecondAxisSign = (int32_t)pVVar4->vector[4].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 6) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    fVar6 = pVVar4->vector[5].y;
    pPVar8->vector[2].Quadrant = (int32_t)pVVar4->vector[5].x;
    pPVar8->vector[2].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[2].SecondAxisSign = (int32_t)pVVar4->vector[5].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((cubeCorners->fields)._size == 0) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    fVar6 = pVVar4->vector[0].y;
    pPVar8->vector[7].Quadrant = (int32_t)pVVar4->vector[0].x;
    pPVar8->vector[7].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[7].SecondAxisSign = (int32_t)pVVar4->vector[0].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    fVar6 = pVVar4->vector[1].y;
    pPVar8->vector[6].Quadrant = (int32_t)pVVar4->vector[1].x;
    pPVar8->vector[6].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[6].SecondAxisSign = (int32_t)pVVar4->vector[1].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 8) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    fVar6 = pVVar4->vector[7].y;
    pPVar8->vector[4].Quadrant = (int32_t)pVVar4->vector[7].x;
    pPVar8->vector[4].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[4].SecondAxisSign = (int32_t)pVVar4->vector[7].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 7) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    fVar6 = pVVar4->vector[6].y;
    pPVar8->vector[5].Quadrant = (int32_t)pVVar4->vector[6].x;
    pPVar8->vector[5].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[5].SecondAxisSign = (int32_t)pVVar4->vector[6].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this->fields)._size == 0) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar14->max_length == 0) goto code_?;
    iVar15 = pPVar8->vector[1].FirstAxisSign;
    pPVar14->vector[0].Quadrant = pPVar8->vector[1].Quadrant;
    pPVar14->vector[0].FirstAxisSign = iVar15;
    pPVar14->vector[0].SecondAxisSign = pPVar8->vector[1].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 2) goto code_?;
    iVar15 = pPVar8->vector[2].FirstAxisSign;
    pPVar14->vector[1].Quadrant = pPVar8->vector[2].Quadrant;
    pPVar14->vector[1].FirstAxisSign = iVar15;
    pPVar14->vector[1].SecondAxisSign = pPVar8->vector[2].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 3) goto code_?;
    iVar15 = pPVar8->vector[3].FirstAxisSign;
    pPVar14->vector[2].Quadrant = pPVar8->vector[3].Quadrant;
    pPVar14->vector[2].FirstAxisSign = iVar15;
    pPVar14->vector[2].SecondAxisSign = pPVar8->vector[3].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 4) goto code_?;
    iVar15 = pPVar8->vector[0].FirstAxisSign;
    pPVar14->vector[3].Quadrant = pPVar8->vector[0].Quadrant;
    pPVar14->vector[3].FirstAxisSign = iVar15;
    pPVar14->vector[3].SecondAxisSign = pPVar8->vector[0].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 5) goto code_?;
    iVar15 = pPVar8->vector[7].FirstAxisSign;
    pPVar14->vector[4].Quadrant = pPVar8->vector[7].Quadrant;
    pPVar14->vector[4].FirstAxisSign = iVar15;
    pPVar14->vector[4].SecondAxisSign = pPVar8->vector[7].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 6) goto code_?;
    iVar15 = pPVar8->vector[4].FirstAxisSign;
    pPVar14->vector[5].Quadrant = pPVar8->vector[4].Quadrant;
    pPVar14->vector[5].FirstAxisSign = iVar15;
    pPVar14->vector[5].SecondAxisSign = pPVar8->vector[4].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 7) goto code_?;
    iVar15 = pPVar8->vector[5].FirstAxisSign;
    pPVar14->vector[6].Quadrant = pPVar8->vector[5].Quadrant;
    pPVar14->vector[6].FirstAxisSign = iVar15;
    pPVar14->vector[6].SecondAxisSign = pPVar8->vector[5].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 8) goto code_?;
    iVar15 = pPVar8->vector[6].FirstAxisSign;
    pPVar14->vector[7].Quadrant = pPVar8->vector[6].Quadrant;
    pPVar14->vector[7].FirstAxisSign = iVar15;
    iVar15 = pPVar8->vector[6].SecondAxisSign;
    break;
  case Face__Enum_Right:
    if ((uint)(cubeCorners->fields)._size < 4) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    fVar6 = pVVar4->vector[3].y;
    pPVar8->vector[0].Quadrant = (int32_t)pVVar4->vector[3].x;
    pPVar8->vector[0].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[0].SecondAxisSign = (int32_t)pVVar4->vector[3].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 3) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    fVar6 = pVVar4->vector[2].y;
    pPVar8->vector[1].Quadrant = (int32_t)pVVar4->vector[2].x;
    pPVar8->vector[1].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[1].SecondAxisSign = (int32_t)pVVar4->vector[2].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 5) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    fVar6 = pVVar4->vector[4].y;
    pPVar8->vector[3].Quadrant = (int32_t)pVVar4->vector[4].x;
    pPVar8->vector[3].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[3].SecondAxisSign = (int32_t)pVVar4->vector[4].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 6) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    fVar6 = pVVar4->vector[5].y;
    pPVar8->vector[2].Quadrant = (int32_t)pVVar4->vector[5].x;
    pPVar8->vector[2].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[2].SecondAxisSign = (int32_t)pVVar4->vector[5].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((cubeCorners->fields)._size == 0) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    fVar6 = pVVar4->vector[0].y;
    pPVar8->vector[7].Quadrant = (int32_t)pVVar4->vector[0].x;
    pPVar8->vector[7].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[7].SecondAxisSign = (int32_t)pVVar4->vector[0].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 2) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    fVar6 = pVVar4->vector[1].y;
    pPVar8->vector[6].Quadrant = (int32_t)pVVar4->vector[1].x;
    pPVar8->vector[6].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[6].SecondAxisSign = (int32_t)pVVar4->vector[1].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 8) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    fVar6 = pVVar4->vector[7].y;
    pPVar8->vector[4].Quadrant = (int32_t)pVVar4->vector[7].x;
    pPVar8->vector[4].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[4].SecondAxisSign = (int32_t)pVVar4->vector[7].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(cubeCorners->fields)._size < 7) goto code_?;
    pVVar4 = (cubeCorners->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar4->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    fVar6 = pVVar4->vector[6].y;
    pPVar8->vector[5].Quadrant = (int32_t)pVVar4->vector[6].x;
    pPVar8->vector[5].FirstAxisSign = (int32_t)fVar6;
    pPVar8->vector[5].SecondAxisSign = (int32_t)pVVar4->vector[6].z;
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 4) goto code_?;
    if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this->fields)._size == 0) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar14->max_length == 0) goto code_?;
    iVar15 = pPVar8->vector[3].FirstAxisSign;
    pPVar14->vector[0].Quadrant = pPVar8->vector[3].Quadrant;
    pPVar14->vector[0].FirstAxisSign = iVar15;
    pPVar14->vector[0].SecondAxisSign = pPVar8->vector[3].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar8->max_length == 0) goto code_?;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 2) goto code_?;
    iVar15 = pPVar8->vector[0].FirstAxisSign;
    pPVar14->vector[1].Quadrant = pPVar8->vector[0].Quadrant;
    pPVar14->vector[1].FirstAxisSign = iVar15;
    pPVar14->vector[1].SecondAxisSign = pPVar8->vector[0].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 2) goto code_?;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 3) goto code_?;
    iVar15 = pPVar8->vector[1].FirstAxisSign;
    pPVar14->vector[2].Quadrant = pPVar8->vector[1].Quadrant;
    pPVar14->vector[2].FirstAxisSign = iVar15;
    pPVar14->vector[2].SecondAxisSign = pPVar8->vector[1].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 3) goto code_?;
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 4) goto code_?;
    iVar15 = pPVar8->vector[2].FirstAxisSign;
    pPVar14->vector[3].Quadrant = pPVar8->vector[2].Quadrant;
    pPVar14->vector[3].FirstAxisSign = iVar15;
    pPVar14->vector[3].SecondAxisSign = pPVar8->vector[2].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 6) goto code_?;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 5) goto code_?;
    iVar15 = pPVar8->vector[5].FirstAxisSign;
    pPVar14->vector[4].Quadrant = pPVar8->vector[5].Quadrant;
    pPVar14->vector[4].FirstAxisSign = iVar15;
    pPVar14->vector[4].SecondAxisSign = pPVar8->vector[5].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 7) goto code_?;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 6) goto code_?;
    iVar15 = pPVar8->vector[6].FirstAxisSign;
    pPVar14->vector[5].Quadrant = pPVar8->vector[6].Quadrant;
    pPVar14->vector[5].FirstAxisSign = iVar15;
    pPVar14->vector[5].SecondAxisSign = pPVar8->vector[6].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 8) goto code_?;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 7) goto code_?;
    iVar15 = pPVar8->vector[7].FirstAxisSign;
    pPVar14->vector[6].Quadrant = pPVar8->vector[7].Quadrant;
    pPVar14->vector[6].FirstAxisSign = iVar15;
    pPVar14->vector[6].SecondAxisSign = pPVar8->vector[7].SecondAxisSign;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar8 = (this_00->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length < 5) goto code_?;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar14 = (this->fields)._items;
    if (pPVar14 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar14->max_length < 8) goto code_?;
    iVar15 = pPVar8->vector[4].FirstAxisSign;
    pPVar14->vector[7].Quadrant = pPVar8->vector[4].Quadrant;
    pPVar14->vector[7].FirstAxisSign = iVar15;
    iVar15 = pPVar8->vector[4].SecondAxisSign;
  }
  pPVar14->vector[7].SecondAxisSign = iVar15;
code_?:
  piVar7 = &(this->fields)._version;
  *piVar7 = *piVar7 + 1;
  cubeCorners = (List_1_UnityEngine_Vector3_ *)this;
code_?:
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pQVar16 = Cube_GetFromTopRotation(aQStack_17,direction,(MethodInfo *)0x0);
  aQStack_17[0].x = pQVar16->x;
  aQStack_17[0].y = pQVar16->y;
  aQStack_17[0].z = pQVar16->z;
  aQStack_17[0].w = pQVar16->w;
  if ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners ==
      (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    pLVar13 = (List_1_UnityEngine_Vector3_ *)(*pcVar12)();
    return pLVar13;
  }
  while( true ) {
    if ((((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners)->fields)._size <= (int)uVar1)
    {
      return (List_1_UnityEngine_Vector3_ *)
             (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners;
    }
    if ((uint)(((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners)->fields)._size <= uVar1
       ) break;
    pPVar8 = (((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners)->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length <= uVar1) goto code_?;
    PStack_10.Quadrant = pPVar8->vector[(int)uVar1].Quadrant;
    PStack_10.FirstAxisSign = pPVar8->vector[(int)uVar1].FirstAxisSign;
    fVar6 = (float)pPVar8->vector[(int)uVar1].SecondAxisSign;
    fVar18 = aQStack_17[0].z + aQStack_17[0].z;
    fVar19 = aQStack_17[0].y + aQStack_17[0].y;
    fVar20 = (aQStack_17[0].x + aQStack_17[0].x) * aQStack_17[0].x;
    fVar21 = fVar18 * aQStack_17[0].y;
    fVar22 = fVar18 * aQStack_17[0].x;
    fVar23 = (aQStack_17[0].x + aQStack_17[0].x) * aQStack_17[0].w;
    fVar24 = fVar19 * aQStack_17[0].w;
    fVar25 = (_UNK_? - (fVar18 * aQStack_17[0].z + fVar20)) * (float)PStack_10.FirstAxisSign
    ;
    fVar26 = (fVar22 - fVar24) * (float)PStack_10.Quadrant;
    fVar27 = (_UNK_? - (fVar18 * aQStack_17[0].z + fVar19 * aQStack_17[0].y)) *
             (float)PStack_10.Quadrant;
    fVar28 = (fVar19 * aQStack_17[0].x - fVar18 * aQStack_17[0].w) * (float)PStack_10.FirstAxisSign;
    fVar29 = (fVar18 * aQStack_17[0].w + fVar19 * aQStack_17[0].x) * (float)PStack_10.Quadrant;
    fVar30 = (fVar23 + fVar21) * (float)PStack_10.FirstAxisSign;
    fVar18 = _UNK_? - (fVar19 * aQStack_17[0].y + fVar20);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar31 = (double)FUN_?((double)(fVar27 + fVar28 + (fVar24 + fVar22) * fVar6),3);
    dVar32 = (double)FUN_?((double)(fVar25 + fVar29 + (fVar21 - fVar23) * fVar6),3);
    dVar33 = (double)FUN_?((double)(fVar30 + fVar26 + fVar18 * fVar6),3);
    if ((uint)(((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners)->fields)._size <= uVar1
       ) break;
    pPVar8 = (((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners)->fields)._items;
    if (pPVar8 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar8->max_length <= uVar1) goto code_?;
    pPVar8->vector[(int)uVar1].Quadrant = (int32_t)(float)dVar31;
    pPVar8->vector[(int)uVar1].FirstAxisSign = (int32_t)(float)dVar32;
    pPVar8->vector[(int)uVar1].SecondAxisSign = (int32_t)(float)dVar33;
    piVar7 = &(((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)cubeCorners)->fields)._version;
    *piVar7 = *piVar7 + 1;
    uVar1 = uVar1 + 1;
  }
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar12 = (code *)swi(3);
  pLVar13 = (List_1_UnityEngine_Vector3_ *)(*pcVar12)();
  return pLVar13;
}


/* Byte[] CreateMaterialArray(Byte) */

Byte__Array *
Assembly-CSharp.dll::Cube::Cube_CreateMaterialArray(uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  if (pBVar1 != (Byte__Array *)0x0) {
    if (((((int)pBVar1->max_length != 0) &&
         (pBVar1->vector[0] = material, 1 < (uint)pBVar1->max_length)) &&
        (pBVar1->vector[1] = material, 2 < (uint)pBVar1->max_length)) &&
       (((pBVar1->vector[2] = material, 3 < (uint)pBVar1->max_length &&
         (pBVar1->vector[3] = material, 4 < (uint)pBVar1->max_length)) &&
        (pBVar1->vector[4] = material, 5 < (uint)pBVar1->max_length)))) {
      pBVar1->vector[5] = material;
      return pBVar1;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pBVar1 = (Byte__Array *)(*pcVar2)();
    return pBVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* Boolean FaceIsOutOfCubeBoundery(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_FaceIsOutOfCubeBoundery
               (Vector3__Array *faceVertices,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  uVar3 = 0;
  if (faceVertices == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pVVar6 = faceVertices->vector;
  while( true ) {
    if ((int)faceVertices->max_length <= (int)uVar3) {
      return 1;
    }
    if ((uint)faceVertices->max_length <= uVar3) break;
    uVar7 = pVVar6->x;
    uVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar10 = (double)FUN_?((double)(float)uVar7,3);
    dVar11 = (double)FUN_?((double)(float)uVar8,3);
    dVar12 = (double)FUN_?((double)fVar9,3);
    if ((uint)faceVertices->max_length <= uVar3) break;
    iVar13 = 0;
    index = 0;
    pVVar6->x = (float)dVar10;
    pVVar6->y = (float)dVar11;
    pVVar6->z = (float)dVar12;
    do {
      if ((uint)faceVertices->max_length <= uVar3) goto DAT_?;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (faceVertices->vector + (int)uVar3,index,in_R8);
      if (fVar1 <= fVar9) {
        if ((uint)faceVertices->max_length <= uVar3) goto DAT_?;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (faceVertices->vector + (int)uVar3,index,in_R8);
        if (fVar9 <= fVar2) {
          iVar13 = iVar13 + 1;
        }
      }
      index = index + 1;
    } while (index < 3);
    if (iVar13 == 3) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    pVVar6 = pVVar6 + 1;
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* FaceData[] GenerateCubeFaces(Cube, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell]) */

FaceData__Array *
Assembly-CSharp.dll::Cube::Cube_GenerateCubeFaces
          (Cube *cube,IntVector *cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  iVar1 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
          _LightQualityLevel_k__BackingField;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0);
  if (iVar1 != 2) {
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
    pFVar2 = Cube_GenerateCubeFacesCheap(cube,&IStackX_8,cells,(MethodInfo *)0x0);
    return pFVar2;
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<FaceData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<FaceData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this,MethodInfo__System__Collections__Generic__List<FaceData>__List__);
  face = Face__Enum_Top;
  if (cube != (Cube *)0x0) {
    do {
      if (((cube->fields).hiddenSides & '\x01' << ((byte)face & 0x1f)) == 0) {
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
        pFVar3 = Cube_GenerateFaceDataExpensive(face,&IStackX_8,cells,(MethodInfo *)0x0);
        if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
        goto DAT_?;
        FUN_?(this,pFVar3);
      }
      pMVar4 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__;
      face = face + Face__Enum_Bottom;
    } while ((int)face < 6);
    if (this != (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      if ((this->fields)._size == 0) {
        pvVar5 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__->klass->
                 rgctx_data[2].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
          pvVar5 = (void *)FUN_?(pvVar5);
        }
        if (*(int *)((longlong)pvVar5 + 0xe4) == 0) {
          FUN_?(pvVar5);
        }
        pIVar6 = pMVar4->klass->rgctx_data[2].klass;
        if ((pIVar6->field_0x135 & 1) == 0) {
          pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
        }
        return *(FaceData__Array **)pIVar6->static_fields;
      }
      pvVar5 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
        pvVar5 = (void *)FUN_?(pvVar5);
      }
      pFVar2 = (FaceData__Array *)FUN_?(pvVar5);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(this->fields)._items,0,(Array *)pFVar2,0,(this->fields)._size,
                 (MethodInfo *)0x0);
      return pFVar2;
    }
  }
DAT_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pFVar2 = (FaceData__Array *)(*pcVar7)();
  return pFVar2;
}


/* FaceData[] GenerateCubeFacesCheap(Cube, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell])
    */

FaceData__Array *
Assembly-CSharp.dll::Cube::Cube_GenerateCubeFacesCheap
          (Cube *cube,IntVector *cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_0_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_1_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_2_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_3_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_4_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_5_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<FaceData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<FaceData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this,MethodInfo__System__Collections__Generic__List<FaceData>__List__);
  if (cube != (Cube *)0x0) {
    if (((cube->fields).hiddenSides & 1) == 0) {
      pFVar1 = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(pFVar1,0,MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_0_int_);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
      pFVar2 = Cube_GenerateFaceDataCheap(Face__Enum_Top,&IStackX_8,cells,pFVar1,(MethodInfo *)0x0);
      if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      FUN_?(this,pFVar2);
    }
    if (((cube->fields).hiddenSides & 2) == 0) {
      pFVar1 = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(pFVar1,0,MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_1_int_);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Bottom,&IStackX_8,cells,pFVar1,(MethodInfo *)0x0);
      if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      FUN_?(this,pFVar2);
    }
    if (((cube->fields).hiddenSides & 4) == 0) {
      pFVar1 = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(pFVar1,0,MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_2_int_);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Front,&IStackX_8,cells,pFVar1,(MethodInfo *)0x0);
      if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      FUN_?(this,pFVar2);
    }
    if (((cube->fields).hiddenSides & 8) == 0) {
      pFVar1 = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(pFVar1,0,MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_3_int_);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
      pFVar2 = Cube_GenerateFaceDataCheap(Face__Enum_Back,&IStackX_8,cells,pFVar1,(MethodInfo *)0x0)
      ;
      if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      FUN_?(this,pFVar2);
    }
    if (((cube->fields).hiddenSides & 0x10) == 0) {
      pFVar1 = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(pFVar1,0,MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_4_int_);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
      pFVar2 = Cube_GenerateFaceDataCheap(Face__Enum_Left,&IStackX_8,cells,pFVar1,(MethodInfo *)0x0)
      ;
      if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      FUN_?(this,pFVar2);
    }
    if (((cube->fields).hiddenSides & 0x20) == 0) {
      pFVar1 = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(pFVar1,0,MethodInfo__Cube___GenerateCubeFacesCheap_g__insideCheck_26_5_int_);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      _IStackX_8 = CONCAT26(uStackX_e,*cubePos);
      pFVar2 = Cube_GenerateFaceDataCheap
                         (Face__Enum_Right,&IStackX_8,cells,pFVar1,(MethodInfo *)0x0);
      if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      FUN_?(this,pFVar2);
    }
    else if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    pMVar3 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__;
    if ((this->fields)._size != 0) {
      pvVar4 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
        pvVar4 = (void *)FUN_?(pvVar4);
      }
      pFVar5 = (FaceData__Array *)FUN_?(pvVar4);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(this->fields)._items,0,(Array *)pFVar5,0,(this->fields)._size,
                 (MethodInfo *)0x0);
      return pFVar5;
    }
    pvVar4 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__->klass->rgctx_data
             [2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    if (*(int *)((longlong)pvVar4 + 0xe4) == 0) {
      FUN_?(pvVar4);
    }
    pIVar6 = pMVar3->klass->rgctx_data[2].klass;
    if ((pIVar6->field_0x135 & 1) == 0) {
      pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
    }
    return *(FaceData__Array **)pIVar6->static_fields;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pFVar5 = (FaceData__Array *)(*pcVar7)();
  return pFVar5;
}


/* FaceData[] GenerateCubeFacesExpensive(Cube, IntVector,
   Dictionary`2[MV.WorldObject.IntVector,Cell]) */

FaceData__Array *
Assembly-CSharp.dll::Cube::Cube_GenerateCubeFacesExpensive
          (Cube *cube,IntVector *cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__Add_FaceData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FaceData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<FaceData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<FaceData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this,MethodInfo__System__Collections__Generic__List<FaceData>__List__);
  face = Face__Enum_Top;
  if (cube != (Cube *)0x0) {
    do {
      if (((cube->fields).hiddenSides & '\x01' << ((byte)face & 0x1f)) == 0) {
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        pFVar1 = Cube_GenerateFaceDataExpensive
                           (face,(IntVector *)&stack0xffffffffffffffe8,cells,(MethodInfo *)0x0);
        if (this == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
        goto code_?;
        FUN_?(this,pFVar1);
      }
      pMVar2 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__;
      face = face + Face__Enum_Bottom;
    } while ((int)face < 6);
    if (this != (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      if ((this->fields)._size == 0) {
        pvVar3 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__->klass->
                 rgctx_data[2].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
          pvVar3 = (void *)FUN_?(pvVar3);
        }
        if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
          FUN_?(pvVar3);
        }
        pIVar4 = pMVar2->klass->rgctx_data[2].klass;
        if ((pIVar4->field_0x135 & 1) == 0) {
          pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
        }
        return *(FaceData__Array **)pIVar4->static_fields;
      }
      pvVar3 = MethodInfo__System__Collections__Generic__List<FaceData>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      pFVar5 = (FaceData__Array *)FUN_?(pvVar3);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(this->fields)._items,0,(Array *)pFVar5,0,(this->fields)._size,
                 (MethodInfo *)0x0);
      return pFVar5;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pFVar5 = (FaceData__Array *)(*pcVar6)();
  return pFVar5;
}


/* FaceData GenerateFaceDataCheap(Face, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell],
   Func`2[Int32,Boolean]) */

FaceData *
Assembly-CSharp.dll::Cube::Cube_GenerateFaceDataCheap
          (Face__Enum face,IntVector *cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          Func_2_Int32_Boolean_ *insideCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FaceData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar1,(MethodInfo *)0x0);
  if (pFVar1 != (FaceData *)0x0) {
    (pFVar1->fields).face = face;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes;
    if (pIVar2 != (Int32__Array__Array *)0x0) {
      if (face < (Face__Enum)pIVar2->max_length) {
        pIVar3 = pIVar2->vector[(int)face];
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar4 = (pFVar1->fields).faceVertices;
        fVar5 = (float)(int)cubePos->x;
        fVar6 = (float)(int)cubePos->y;
        fVar7 = (float)(int)cubePos->z;
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__Cube);
        }
        pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
        if (pIVar3 == (Int32__Array *)0x0) goto code_?;
        if ((int)pIVar3->max_length != 0) {
          if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
          uVar9 = pIVar3->vector[0];
          if (uVar9 < (uint)pVVar8->max_length) {
            auStack_10[0]._0_4_ = pVVar8->vector[(int)uVar9].x;
            auStack_10[0]._4_4_ = pVVar8->vector[(int)uVar9].y;
            fVar11 = pVVar8->vector[(int)uVar9].z;
            if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
            if ((int)pVVar4->max_length != 0) {
              pVVar4->vector[0].x = (float)(undefined4)auStack_10[0] + fVar5;
              pVVar4->vector[0].y = (float)auStack_10[0]._4_4_ + fVar6;
              pVVar4->vector[0].z = fVar11 + fVar7;
              pVVar4 = (pFVar1->fields).faceVertices;
              pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
              if (1 < (uint)pIVar3->max_length) {
                if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                uVar9 = pIVar3->vector[1];
                if (uVar9 < (uint)pVVar8->max_length) {
                  auStack_10[0]._0_4_ = pVVar8->vector[(int)uVar9].x;
                  auStack_10[0]._4_4_ = pVVar8->vector[(int)uVar9].y;
                  fVar11 = pVVar8->vector[(int)uVar9].z;
                  if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                  if (1 < (uint)pVVar4->max_length) {
                    pVVar4->vector[1].x = (float)(undefined4)auStack_10[0] + fVar5;
                    pVVar4->vector[1].y = (float)auStack_10[0]._4_4_ + fVar6;
                    pVVar4->vector[1].z = fVar11 + fVar7;
                    pVVar4 = (pFVar1->fields).faceVertices;
                    pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (2 < (uint)pIVar3->max_length) {
                      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                      uVar9 = pIVar3->vector[2];
                      if (uVar9 < (uint)pVVar8->max_length) {
                        auStack_10[0]._0_4_ = pVVar8->vector[(int)uVar9].x;
                        auStack_10[0]._4_4_ = pVVar8->vector[(int)uVar9].y;
                        fVar11 = pVVar8->vector[(int)uVar9].z;
                        if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                        if (2 < (uint)pVVar4->max_length) {
                          pVVar4->vector[2].x = (float)(undefined4)auStack_10[0] + fVar5;
                          pVVar4->vector[2].y = (float)auStack_10[0]._4_4_ + fVar6;
                          pVVar4->vector[2].z = fVar11 + fVar7;
                          pVVar4 = (pFVar1->fields).faceVertices;
                          pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                          if (3 < (uint)pIVar3->max_length) {
                            if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                            uVar9 = pIVar3->vector[3];
                            if (uVar9 < (uint)pVVar8->max_length) {
                              auStack_10[0]._0_4_ = pVVar8->vector[(int)uVar9].x;
                              auStack_10[0]._4_4_ = pVVar8->vector[(int)uVar9].y;
                              fVar11 = pVVar8->vector[(int)uVar9].z;
                              if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                              if (3 < (uint)pVVar4->max_length) {
                                pVVar4->vector[3].x = (float)(undefined4)auStack_10[0] + fVar5;
                                pVVar4->vector[3].y = (float)auStack_10[0]._4_4_ + fVar6;
                                pVVar4->vector[3].z = fVar11 + fVar7;
                                pSVar12 = (pFVar1->fields).lightValues;
                                if ((int)pIVar3->max_length != 0) {
                                  if (insideCheck != (Func_2_Int32_Boolean_ *)0x0) {
                                    bVar13 = (*(insideCheck->fields)._._.invoke_impl)
                                                      ((insideCheck->fields)._._.method_code,
                                                       pIVar3->vector[0],
                                                       (insideCheck->fields)._._.method);
                                    auStack_10[0] = CONCAT26(auStack_10[0]._6_2_,*cubePos);
                                    fVar5 = Cube_CalculateAOLightCheap
                                                       (face,0,cells,(IntVector *)auStack_10,bVar13,
                                                        (MethodInfo *)0x0);
                                    if (pSVar12 != (Single__Array *)0x0) {
                                      if ((int)pSVar12->max_length != 0) {
                                        pSVar12->vector[0] = fVar5;
                                        pSVar12 = (pFVar1->fields).lightValues;
                                        if (1 < (uint)pIVar3->max_length) {
                                          bVar13 = (*(insideCheck->fields)._._.invoke_impl)
                                                            ((insideCheck->fields)._._.method_code,
                                                             pIVar3->vector[1],
                                                             (insideCheck->fields)._._.method);
                                          auStack_10[0] = CONCAT26(auStack_10[0]._6_2_,*cubePos);
                                          fVar5 = Cube_CalculateAOLightCheap
                                                             (face,1,cells,(IntVector *)auStack_10,
                                                              bVar13,(MethodInfo *)0x0);
                                          if (pSVar12 == (Single__Array *)0x0)
                                          goto code_?;
                                          if (1 < (uint)pSVar12->max_length) {
                                            pSVar12->vector[1] = fVar5;
                                            pSVar12 = (pFVar1->fields).lightValues;
                                            if (2 < (uint)pIVar3->max_length) {
                                              bVar13 = (*(insideCheck->fields)._._.invoke_impl)
                                                                ((insideCheck->fields)._._.
                                                                 method_code,pIVar3->vector[2],
                                                                 (insideCheck->fields)._._.method);
                                              auStack_10[0] = CONCAT26(auStack_10[0]._6_2_,*cubePos)
                                              ;
                                              fVar5 = Cube_CalculateAOLightCheap
                                                                 (face,2,cells,
                                                                  (IntVector *)auStack_10,bVar13,
                                                                  (MethodInfo *)0x0);
                                              if (pSVar12 == (Single__Array *)0x0)
                                              goto code_?;
                                              if (2 < (uint)pSVar12->max_length) {
                                                pSVar12->vector[2] = fVar5;
                                                pSVar12 = (pFVar1->fields).lightValues;
                                                if (3 < (uint)pIVar3->max_length) {
                                                  bVar13 = (*(insideCheck->fields)._._.invoke_impl)
                                                                    ((insideCheck->fields)._._.
                                                                     method_code,pIVar3->vector[3],
                                                                     (insideCheck->fields)._._.
                                                                     method);
                                                  auStack_10[0] =
                                                       CONCAT26(auStack_10[0]._6_2_,*cubePos);
                                                  fVar5 = Cube_CalculateAOLightCheap
                                                                     (face,3,cells,
                                                                      (IntVector *)auStack_10,bVar13,
                                                                      (MethodInfo *)0x0);
                                                  if (pSVar12 == (Single__Array *)0x0)
                                                  goto code_?;
                                                  if (3 < (uint)pSVar12->max_length) {
                                                    pSVar12->vector[3] = fVar5;
                                                    return pFVar1;
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
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      pFVar1 = (FaceData *)(*pcVar14)();
      return pFVar1;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pFVar1 = (FaceData *)(*pcVar14)();
  return pFVar1;
}


/* FaceData GenerateFaceDataExpensive(Face, IntVector, Dictionary`2[MV.WorldObject.IntVector,Cell])
    */

FaceData *
Assembly-CSharp.dll::Cube::Cube_GenerateFaceDataExpensive
          (Face__Enum face,IntVector *cubePos,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FaceData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FaceData *)FUN_?(TypeInfo__FaceData);
  FaceData::FaceData__ctor(pFVar1,(MethodInfo *)0x0);
  if (pFVar1 != (FaceData *)0x0) {
    (pFVar1->fields).face = face;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar2 = TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes;
    if (pIVar2 != (Int32__Array__Array *)0x0) {
      if (face < (Face__Enum)pIVar2->max_length) {
        cornerIndexToVertex = pIVar2->vector[(int)face];
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar3 = Cube_GetNormals(TypeInfo__Cube->static_fields->cornersBookkeeping,face,
                                 (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar4 = (pFVar1->fields).faceVertices;
        fVar5 = (float)(int)cubePos->x;
        fVar6 = (float)(int)cubePos->y;
        fVar7 = (float)(int)cubePos->z;
        pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
        if (cornerIndexToVertex == (Int32__Array *)0x0) goto code_?;
        if ((int)cornerIndexToVertex->max_length != 0) {
          if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
          uVar9 = cornerIndexToVertex->vector[0];
          if (uVar9 < (uint)pVVar8->max_length) {
            aVStack_10[0].x = pVVar8->vector[(int)uVar9].x;
            aVStack_10[0].y = pVVar8->vector[(int)uVar9].y;
            fVar11 = pVVar8->vector[(int)uVar9].z;
            if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
            if ((int)pVVar4->max_length != 0) {
              pVVar4->vector[0].x = fVar5 + aVStack_10[0].x;
              pVVar4->vector[0].y = fVar6 + aVStack_10[0].y;
              pVVar4->vector[0].z = fVar7 + fVar11;
              pVVar4 = (pFVar1->fields).faceVertices;
              pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
              if (1 < (uint)cornerIndexToVertex->max_length) {
                if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                uVar9 = cornerIndexToVertex->vector[1];
                if (uVar9 < (uint)pVVar8->max_length) {
                  aVStack_10[0].x = pVVar8->vector[(int)uVar9].x;
                  aVStack_10[0].y = pVVar8->vector[(int)uVar9].y;
                  fVar11 = pVVar8->vector[(int)uVar9].z;
                  if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                  if (1 < (uint)pVVar4->max_length) {
                    pVVar4->vector[1].x = aVStack_10[0].x + fVar5;
                    pVVar4->vector[1].y = aVStack_10[0].y + fVar6;
                    pVVar4->vector[1].z = fVar11 + fVar7;
                    pVVar4 = (pFVar1->fields).faceVertices;
                    pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (2 < (uint)cornerIndexToVertex->max_length) {
                      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                      uVar9 = cornerIndexToVertex->vector[2];
                      if (uVar9 < (uint)pVVar8->max_length) {
                        aVStack_10[0].x = pVVar8->vector[(int)uVar9].x;
                        aVStack_10[0].y = pVVar8->vector[(int)uVar9].y;
                        fVar11 = pVVar8->vector[(int)uVar9].z;
                        if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                        if (2 < (uint)pVVar4->max_length) {
                          pVVar4->vector[2].x = aVStack_10[0].x + fVar5;
                          pVVar4->vector[2].y = aVStack_10[0].y + fVar6;
                          pVVar4->vector[2].z = fVar11 + fVar7;
                          pVVar4 = (pFVar1->fields).faceVertices;
                          pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                          if (3 < (uint)cornerIndexToVertex->max_length) {
                            if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                            uVar9 = cornerIndexToVertex->vector[3];
                            if (uVar9 < (uint)pVVar8->max_length) {
                              aVStack_10[0].x = pVVar8->vector[(int)uVar9].x;
                              aVStack_10[0].y = pVVar8->vector[(int)uVar9].y;
                              fVar11 = pVVar8->vector[(int)uVar9].z;
                              if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                              if (3 < (uint)pVVar4->max_length) {
                                pVVar4->vector[3].x = aVStack_10[0].x + fVar5;
                                pVVar4->vector[3].y = aVStack_10[0].y + fVar6;
                                pVVar4->vector[3].z = fVar11 + fVar7;
                                pSVar12 = (pFVar1->fields).lightValues;
                                if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
                                if ((int)pVVar3->max_length != 0) {
                                  aVStack_10[0].z = pVVar3->vector[0].z;
                                  aVStack_10[0].x = pVVar3->vector[0].x;
                                  aVStack_10[0].y = pVVar3->vector[0].y;
                                  aIStack_13[0].x = cubePos->x;
                                  aIStack_13[0].y = cubePos->y;
                                  aIStack_13[0].z = cubePos->z;
                                  fVar5 = Cube_CalculateAOLightExpensive
                                                     (face,0,cells,aIStack_13,cornerIndexToVertex,
                                                      aVStack_10,(MethodInfo *)0x0);
                                  if (pSVar12 == (Single__Array *)0x0) goto code_?;
                                  if ((int)pSVar12->max_length != 0) {
                                    pSVar12->vector[0] = fVar5;
                                    pSVar12 = (pFVar1->fields).lightValues;
                                    if (1 < (uint)pVVar3->max_length) {
                                      aVStack_10[0].z = pVVar3->vector[1].z;
                                      aVStack_10[0].x = pVVar3->vector[1].x;
                                      aVStack_10[0].y = pVVar3->vector[1].y;
                                      aIStack_13[0].x = cubePos->x;
                                      aIStack_13[0].y = cubePos->y;
                                      aIStack_13[0].z = cubePos->z;
                                      fVar5 = Cube_CalculateAOLightExpensive
                                                         (face,1,cells,aIStack_13,
                                                          cornerIndexToVertex,aVStack_10,
                                                          (MethodInfo *)0x0);
                                      if (pSVar12 == (Single__Array *)0x0) goto code_?;
                                      if (1 < (uint)pSVar12->max_length) {
                                        pSVar12->vector[1] = fVar5;
                                        pSVar12 = (pFVar1->fields).lightValues;
                                        if (2 < (uint)pVVar3->max_length) {
                                          aVStack_10[0].z = pVVar3->vector[2].z;
                                          aVStack_10[0].x = pVVar3->vector[2].x;
                                          aVStack_10[0].y = pVVar3->vector[2].y;
                                          aIStack_13[0].x = cubePos->x;
                                          aIStack_13[0].y = cubePos->y;
                                          aIStack_13[0].z = cubePos->z;
                                          fVar5 = Cube_CalculateAOLightExpensive
                                                             (face,2,cells,aIStack_13,
                                                              cornerIndexToVertex,aVStack_10,
                                                              (MethodInfo *)0x0);
                                          if (pSVar12 == (Single__Array *)0x0)
                                          goto code_?;
                                          if (2 < (uint)pSVar12->max_length) {
                                            pSVar12->vector[2] = fVar5;
                                            pSVar12 = (pFVar1->fields).lightValues;
                                            if (3 < (uint)pVVar3->max_length) {
                                              aVStack_10[0].z = pVVar3->vector[3].z;
                                              aVStack_10[0].x = pVVar3->vector[3].x;
                                              aVStack_10[0].y = pVVar3->vector[3].y;
                                              aIStack_13[0].x = cubePos->x;
                                              aIStack_13[0].y = cubePos->y;
                                              aIStack_13[0].z = cubePos->z;
                                              fVar5 = Cube_CalculateAOLightExpensive
                                                                 (face,3,cells,aIStack_13,
                                                                  cornerIndexToVertex,aVStack_10,
                                                                  (MethodInfo *)0x0);
                                              if (pSVar12 == (Single__Array *)0x0)
                                              goto code_?;
                                              if (3 < (uint)pSVar12->max_length) {
                                                pSVar12->vector[3] = fVar5;
                                                pSVar12 = (pFVar1->fields).lightValues;
                                                fVar5 = Cube_CalculateAOBleed
                                                                   (pFVar1,0,(MethodInfo *)0x0);
                                                if (pSVar12 == (Single__Array *)0x0)
                                                goto code_?;
                                                if ((int)pSVar12->max_length != 0) {
                                                  pSVar12->vector[0] = fVar5;
                                                  pSVar12 = (pFVar1->fields).lightValues;
                                                  fVar5 = Cube_CalculateAOBleed
                                                                     (pFVar1,1,(MethodInfo *)0x0);
                                                  if (pSVar12 == (Single__Array *)0x0)
                                                  goto code_?;
                                                  if (1 < (uint)pSVar12->max_length) {
                                                    pSVar12->vector[1] = fVar5;
                                                    pSVar12 = (pFVar1->fields).lightValues;
                                                    fVar5 = Cube_CalculateAOBleed
                                                                       (pFVar1,2,(MethodInfo *)0x0);
                                                    if (pSVar12 == (Single__Array *)0x0)
                                                    goto code_?;
                                                    if (2 < (uint)pSVar12->max_length) {
                                                      pSVar12->vector[2] = fVar5;
                                                      pSVar12 = (pFVar1->fields).lightValues;
                                                      fVar5 = Cube_CalculateAOBleed
                                                                         (pFVar1,3,(MethodInfo *)0x0
                                                                         );
                                                      if (pSVar12 == (Single__Array *)0x0)
                                                      goto code_?;
                                                      if (3 < (uint)pSVar12->max_length) {
                                                        pSVar12->vector[3] = fVar5;
                                                        return pFVar1;
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
              }
            }
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      pFVar1 = (FaceData *)(*pcVar14)();
      return pFVar1;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pFVar1 = (FaceData *)(*pcVar14)();
  return pFVar1;
}


/* Vector3[] GetCorners(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetCorners(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    byteArray = (cube->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                       (byteArray,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    pLVar2 = Cube_GetCorners_2(pVVar1,face,(MethodInfo *)0x0);
    pMVar3 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__;
    if (pLVar2 != (List_1_UnityEngine_Vector3_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        pvVar4 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__->
                 klass->rgctx_data[3].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
          pvVar4 = (void *)FUN_?(pvVar4);
        }
        pVVar1 = (Vector3__Array *)FUN_?(pvVar4);
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)(pLVar2->fields)._items,0,(Array *)pVVar1,0,(pLVar2->fields)._size,
                   (MethodInfo *)0x0);
        return pVVar1;
      }
      pvVar4 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__->
               klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
        pvVar4 = (void *)FUN_?(pvVar4);
      }
      if (*(int *)((longlong)pvVar4 + 0xe4) == 0) {
        FUN_?(pvVar4);
      }
      pIVar5 = pMVar3->klass->rgctx_data[2].klass;
      if ((pIVar5->field_0x135 & 1) == 0) {
        pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
      }
      return *(Vector3__Array **)pIVar5->static_fields;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar6)();
  return pVVar1;
}


/* List`1[UnityEngine.Vector3] GetCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_1
          (List_1_UnityEngine_Vector2_ *clockwiseCorners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube,direction,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._4_4_ = unaff_XMM7_Db;
  auStack_2._0_4_ = unaff_XMM7_Da;
  stack0xffffffffffffffe0 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  fVar4 = _UNK_?;
  if (clockwiseCorners == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
  if ((clockwiseCorners->fields)._size == 0) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
    return pLVar6;
  }
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((int)pVVar7->max_length == 0) goto code_?;
  uVar8._0_4_ = pVVar7->vector[0].x - _UNK_?;
  fVar9 = pVVar7->vector[0].y - _UNK_?;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
    return pLVar6;
  }
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar8;
    pPVar11->vector[(int)uVar12].FirstAxisSign = (int32_t)fVar4;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar8._4_4_ = (int32_t)fVar4;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar8;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(clockwiseCorners->fields)._size < 4) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar7->max_length < 4) goto code_?;
  uVar13._0_4_ = pVVar7->vector[3].x - fVar4;
  fVar9 = pVVar7->vector[3].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar13;
    pPVar11->vector[(int)uVar12].FirstAxisSign = (int32_t)fVar4;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar13._4_4_ = (int32_t)fVar4;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar13;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(clockwiseCorners->fields)._size < 3) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar7->max_length < 3) goto code_?;
  uVar14._0_4_ = pVVar7->vector[2].x - fVar4;
  fVar9 = pVVar7->vector[2].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar14;
    pPVar11->vector[(int)uVar12].FirstAxisSign = (int32_t)fVar4;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar14._4_4_ = (int32_t)fVar4;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar14;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(clockwiseCorners->fields)._size < 2) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar7->max_length < 2) goto code_?;
  uVar15._0_4_ = pVVar7->vector[1].x - fVar4;
  fVar9 = pVVar7->vector[1].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar15;
    pPVar11->vector[(int)uVar12].FirstAxisSign = (int32_t)fVar4;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar15._4_4_ = (int32_t)fVar4;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar15;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(clockwiseCorners->fields)._size < 2) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar7->max_length < 2) goto code_?;
  uVar16._0_4_ = pVVar7->vector[1].x - fVar4;
  fVar9 = pVVar7->vector[1].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  iVar17 = _UNK_?;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar16;
    pPVar11->vector[(int)uVar12].FirstAxisSign = iVar17;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar16._4_4_ = _UNK_?;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar16;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(clockwiseCorners->fields)._size < 3) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar7->max_length < 3) goto code_?;
  uVar18._0_4_ = pVVar7->vector[2].x - fVar4;
  fVar9 = pVVar7->vector[2].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar18;
    pPVar11->vector[(int)uVar12].FirstAxisSign = iVar17;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar18._4_4_ = iVar17;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar18;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(clockwiseCorners->fields)._size < 4) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar7->max_length < 4) goto code_?;
  uVar19._0_4_ = pVVar7->vector[3].x - fVar4;
  fVar9 = pVVar7->vector[3].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar19;
    pPVar11->vector[(int)uVar12].FirstAxisSign = iVar17;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar9;
  }
  else {
    uVar19._4_4_ = iVar17;
    auStack_1._8_4_ = fVar9;
    auStack_1._0_8_ = uVar19;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((clockwiseCorners->fields)._size == 0) goto code_?;
  pVVar7 = (clockwiseCorners->fields)._items;
  if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
  if ((int)pVVar7->max_length == 0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
    return pLVar6;
  }
  uVar20._0_4_ = pVVar7->vector[0].x - fVar4;
  fVar4 = pVVar7->vector[0].y - fVar4;
  piVar10 = &(this->fields)._version;
  *piVar10 = *piVar10 + 1;
  pPVar11 = (this->fields)._items;
  if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar12 = (this->fields)._size;
  if (uVar12 < (uint)pPVar11->max_length) {
    (this->fields)._size = uVar12 + 1;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)uVar20;
    pPVar11->vector[(int)uVar12].FirstAxisSign = iVar17;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)fVar4;
  }
  else {
    uVar20._4_4_ = iVar17;
    auStack_1._8_4_ = fVar4;
    auStack_1._0_8_ = uVar20;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_1,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube,direction,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = auStack_2._0_8_;
  auStack_1._8_8_ = stack0xffffffffffffffe0;
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_00,8,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_01,8);
  uVar12 = 0;
  uVar21 = 0;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
  while (pMVar3 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar21 < (this->fields)._size) {
    if ((uint)(this->fields)._size <= uVar21) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length <= uVar21) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar22._0_4_ = pPVar11->vector[(int)uVar21].Quadrant;
    uVar22._4_4_ = pPVar11->vector[(int)uVar21].FirstAxisSign;
    iVar17 = pPVar11->vector[(int)uVar21].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    pPVar11 = (this_00->fields)._items;
    uVar23 = (this_00->fields)._size;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar23 < (uint)pPVar11->max_length) {
      (this_00->fields)._size = uVar23 + 1;
      if ((uint)pPVar11->max_length <= uVar23) goto code_?;
      uVar21 = uVar21 + 1;
      pPVar11->vector[(int)uVar23].Quadrant = (int32_t)uVar22;
      pPVar11->vector[(int)uVar23].FirstAxisSign = uVar22._4_4_;
      pPVar11->vector[(int)uVar23].SecondAxisSign = iVar17;
    }
    else {
      PStack_24._0_8_ = uVar22;
      PStack_24.SecondAxisSign = iVar17;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,&PStack_24,pMVar3->klass->rgctx_data[0xe].method);
      uVar21 = uVar21 + 1;
    }
  }
  uVar21 = 0;
  while (pMVar3 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar21 < (this->fields)._size) {
    if ((uint)(this->fields)._size <= uVar21) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length <= uVar21) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar25._0_4_ = pPVar11->vector[(int)uVar21].Quadrant;
    uVar25._4_4_ = pPVar11->vector[(int)uVar21].FirstAxisSign;
    iVar17 = pPVar11->vector[(int)uVar21].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    pPVar11 = (this_01->fields)._items;
    uVar23 = (this_01->fields)._size;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar23 < (uint)pPVar11->max_length) {
      (this_01->fields)._size = uVar23 + 1;
      if ((uint)pPVar11->max_length <= uVar23) goto code_?;
      uVar21 = uVar21 + 1;
      pPVar11->vector[(int)uVar23].Quadrant = (int32_t)uVar25;
      pPVar11->vector[(int)uVar23].FirstAxisSign = uVar25._4_4_;
      pPVar11->vector[(int)uVar23].SecondAxisSign = iVar17;
    }
    else {
      PStack_24._0_8_ = uVar25;
      PStack_24.SecondAxisSign = iVar17;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_01,&PStack_24,pMVar3->klass->rgctx_data[0xe].method);
      uVar21 = uVar21 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
      return pLVar6;
    }
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    goto code_?;
  case Face__Enum_Front:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    goto code_?;
  case Face__Enum_Back:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    iVar17 = pPVar11->vector[5].SecondAxisSign;
    break;
  case Face__Enum_Left:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    iVar17 = pPVar11->vector[6].SecondAxisSign;
    break;
  case Face__Enum_Right:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[4].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    piVar10 = &(this_01->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar11->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar11->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar11->vector[3].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar11->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar11->vector[0].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar11->vector[0].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar11->vector[0].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar11->vector[1].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar11->vector[1].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar11->vector[1].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar11->vector[2].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar11->vector[2].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar11->vector[2].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar11->vector[5].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar11->vector[5].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar11->vector[5].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar11->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar11->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar11->vector[6].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar11->vector[7].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar11->vector[7].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar11->vector[7].SecondAxisSign;
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar11 = (this_01->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar11->vector[4].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar11->vector[4].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    iVar17 = pPVar11->vector[4].SecondAxisSign;
  }
  pPVar26->vector[7].SecondAxisSign = iVar17;
code_?:
  piVar10 = &(this_00->fields)._version;
  *piVar10 = *piVar10 + 1;
  this = this_00;
code_?:
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pQVar27 = Cube_GetFromTopRotation(aQStack_28,direction,(MethodInfo *)0x0);
  aQStack_28[0].x = pQVar27->x;
  aQStack_28[0].y = pQVar27->y;
  aQStack_28[0].z = pQVar27->z;
  aQStack_28[0].w = pQVar27->w;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
    return pLVar6;
  }
  while( true ) {
    if ((this->fields)._size <= (int)uVar12) {
      return (List_1_UnityEngine_Vector3_ *)this;
    }
    if ((uint)(this->fields)._size <= uVar12) break;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    PStack_24.Quadrant = pPVar11->vector[(int)uVar12].Quadrant;
    PStack_24.FirstAxisSign = pPVar11->vector[(int)uVar12].FirstAxisSign;
    fVar4 = (float)pPVar11->vector[(int)uVar12].SecondAxisSign;
    fVar29 = aQStack_28[0].z + aQStack_28[0].z;
    fVar30 = aQStack_28[0].y + aQStack_28[0].y;
    fVar31 = (aQStack_28[0].x + aQStack_28[0].x) * aQStack_28[0].x;
    fVar32 = fVar29 * aQStack_28[0].y;
    fVar33 = fVar29 * aQStack_28[0].x;
    fVar34 = (aQStack_28[0].x + aQStack_28[0].x) * aQStack_28[0].w;
    fVar35 = fVar30 * aQStack_28[0].w;
    fVar36 = (_UNK_? - (fVar29 * aQStack_28[0].z + fVar31)) * (float)PStack_24.FirstAxisSign
    ;
    fVar37 = (fVar33 - fVar35) * (float)PStack_24.Quadrant;
    fVar38 = (_UNK_? - (fVar29 * aQStack_28[0].z + fVar30 * aQStack_28[0].y)) *
             (float)PStack_24.Quadrant;
    fVar9 = (fVar30 * aQStack_28[0].x - fVar29 * aQStack_28[0].w) * (float)PStack_24.FirstAxisSign;
    fVar39 = (fVar29 * aQStack_28[0].w + fVar30 * aQStack_28[0].x) * (float)PStack_24.Quadrant;
    fVar40 = (fVar34 + fVar32) * (float)PStack_24.FirstAxisSign;
    fVar29 = _UNK_? - (fVar30 * aQStack_28[0].y + fVar31);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar41 = (double)FUN_?((double)(fVar38 + fVar9 + (fVar35 + fVar33) * fVar4),3);
    dVar42 = (double)FUN_?((double)(fVar36 + fVar39 + (fVar32 - fVar34) * fVar4),3);
    dVar43 = (double)FUN_?((double)(fVar40 + fVar37 + fVar29 * fVar4),3);
    if ((uint)(this->fields)._size <= uVar12) break;
    pPVar11 = (this->fields)._items;
    if (pPVar11 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar11->max_length <= uVar12) goto code_?;
    pPVar11->vector[(int)uVar12].Quadrant = (int32_t)(float)dVar41;
    pPVar11->vector[(int)uVar12].FirstAxisSign = (int32_t)(float)dVar42;
    pPVar11->vector[(int)uVar12].SecondAxisSign = (int32_t)(float)dVar43;
    piVar10 = &(this->fields)._version;
    *piVar10 = *piVar10 + 1;
    uVar12 = uVar12 + 1;
  }
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
  return pLVar6;
}


/* List`1[UnityEngine.Vector3] GetCorners(Vector3[], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_2
          (Vector3__Array *counterClockwiseFace,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_2 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  uStack_3 = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  uStack_4 = CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  uStack_5 = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
  uStack_6 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
  uStack_7 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  uStack_8 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
  uStack_9 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
  uStack_10 = CONCAT44(unaff_XMM11_Dd,unaff_XMM11_Dc);
  uStack_11 = CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da);
  uStack_12 = CONCAT44(unaff_XMM12_Dd,unaff_XMM12_Dc);
  uStack_13 = CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da);
  uStack_14 = CONCAT44(unaff_XMM13_Dd,unaff_XMM13_Dc);
  uStack_15 = CONCAT44(unaff_XMM14_Db,unaff_XMM14_Da);
  uStack_16 = CONCAT44(unaff_XMM14_Dd,unaff_XMM14_Dc);
  QStack_17.y = unaff_XMM15_Db;
  QStack_17.x = unaff_XMM15_Da;
  QStack_17.w = unaff_XMM15_Dd;
  QStack_17.z = unaff_XMM15_Dc;
  pQVar18 = Cube_GetToTopRotation(&QStack_19,direction,(MethodInfo *)0x0);
  uVar20 = 0;
  fVar21 = pQVar18->x;
  fVar22 = pQVar18->y;
  QStack_19.x = pQVar18->x;
  QStack_19.y = pQVar18->y;
  fVar23 = pQVar18->z;
  fVar24 = pQVar18->w;
  QStack_19.z = pQVar18->z;
  QStack_19.w = pQVar18->w;
  if (counterClockwiseFace == (Vector3__Array *)0x0) goto code_?;
  pVVar25 = counterClockwiseFace->vector;
  for (; (int)uVar20 < (int)counterClockwiseFace->max_length; uVar20 = uVar20 + 1) {
    if ((uint)counterClockwiseFace->max_length <= uVar20) goto code_?;
    QStack_26.x = pVVar25->x;
    QStack_26.y = pVVar25->y;
    fVar27 = (fVar21 + fVar21) * fVar21;
    fVar28 = (fVar22 + fVar22) * fVar22;
    fVar29 = (fVar23 + fVar23) * fVar23;
    fVar30 = (fVar22 + fVar22) * fVar21;
    fVar31 = (fVar23 + fVar23) * fVar21;
    fVar32 = (fVar23 + fVar23) * fVar22;
    fVar33 = (fVar21 + fVar21) * fVar24;
    fVar34 = (fVar22 + fVar22) * fVar24;
    fVar35 = (fVar23 + fVar23) * fVar24;
    fVar36 = pVVar25->z;
    fVar37 = _UNK_? - (fVar29 + fVar27);
    fVar27 = (fVar31 - fVar34) * QStack_26.x + (fVar33 + fVar32) * QStack_26.y +
             (_UNK_? - (fVar28 + fVar27)) * fVar36;
    pVVar25->x = (_UNK_? - (fVar29 + fVar28)) * QStack_26.x +
                 (fVar30 - fVar35) * QStack_26.y + (fVar34 + fVar31) * fVar36;
    pVVar25->y = fVar37 * QStack_26.y + (fVar35 + fVar30) * QStack_26.x + (fVar32 - fVar33) * fVar36
    ;
    pVVar25->z = fVar27;
    if ((uint)counterClockwiseFace->max_length <= uVar20) goto code_?;
    fVar36 = pVVar25->x;
    pVVar25->x = (float)(int)(ulonglong)(uint)fVar36;
    pVVar25->y = (float)(int)((ulonglong)(uint)fVar36 >> 0x20);
    pVVar25->z = fVar27;
    pVVar25 = pVVar25 + 1;
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((int)counterClockwiseFace->max_length == 0) goto code_?;
  fVar21 = counterClockwiseFace->vector[0].x;
  fVar22 = counterClockwiseFace->vector[0].z;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar39 = (code *)swi(3);
    pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
    return pLVar40;
  }
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  uVar42 = _UNK_?;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(_UNK_?,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)counterClockwiseFace->max_length < 2) {
code_?:
    FUN_?();
    pcVar39 = (code *)swi(3);
    pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
    return pLVar40;
  }
  fVar21 = counterClockwiseFace->vector[1].x;
  fVar22 = counterClockwiseFace->vector[1].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(uVar42,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)counterClockwiseFace->max_length < 3) goto code_?;
  fVar21 = counterClockwiseFace->vector[2].x;
  fVar22 = counterClockwiseFace->vector[2].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(uVar42,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)counterClockwiseFace->max_length < 4) goto code_?;
  fVar21 = counterClockwiseFace->vector[3].x;
  fVar22 = counterClockwiseFace->vector[3].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(uVar42,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)counterClockwiseFace->max_length < 4) goto code_?;
  fVar21 = counterClockwiseFace->vector[3].x;
  fVar22 = counterClockwiseFace->vector[3].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  uVar42 = _UNK_?;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(_UNK_?,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)counterClockwiseFace->max_length < 3) goto code_?;
  fVar21 = counterClockwiseFace->vector[2].x;
  fVar22 = counterClockwiseFace->vector[2].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(uVar42,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)counterClockwiseFace->max_length < 2) goto code_?;
  fVar21 = counterClockwiseFace->vector[1].x;
  fVar22 = counterClockwiseFace->vector[1].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(uVar42,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  pMVar38 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((int)counterClockwiseFace->max_length == 0) goto code_?;
  fVar21 = counterClockwiseFace->vector[0].x;
  fVar22 = counterClockwiseFace->vector[0].z;
  piVar41 = &(this->fields)._version;
  *piVar41 = *piVar41 + 1;
  pPVar43 = (this->fields)._items;
  if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar20 = (this->fields)._size;
  if (uVar20 < (uint)pPVar43->max_length) {
    (this->fields)._size = uVar20 + 1;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)fVar21;
    pPVar43->vector[(int)uVar20].FirstAxisSign = uVar42;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar22;
  }
  else {
    QStack_26._0_8_ = CONCAT44(uVar42,fVar21);
    QStack_26.z = fVar22;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)&QStack_26,
               pMVar38->klass->rgctx_data[0xe].method);
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar44 = uStack_4;
  uVar45 = uStack_3;
  uVar46 = uStack_6;
  uVar47 = uStack_5;
  uVar48 = uStack_8;
  uVar49 = uStack_7;
  uVar50 = uStack_10;
  uVar51 = uStack_9;
  uVar52 = uStack_12;
  uVar53 = uStack_11;
  uVar54 = uStack_14;
  uVar55 = uStack_13;
  uVar56 = uStack_16;
  uVar57 = uStack_15;
  uVar58 = QStack_17._8_8_;
  uVar59 = QStack_17._0_8_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube,direction,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = uStack_1;
  uStack_4 = uStack_2;
  uStack_5 = uVar45;
  uStack_6 = uVar44;
  uStack_7 = uVar47;
  uStack_8 = uVar46;
  uStack_9 = uVar49;
  uStack_10 = uVar48;
  uStack_11 = uVar51;
  uStack_12 = uVar50;
  uStack_13 = uVar53;
  uStack_14 = uVar52;
  uStack_15 = uVar55;
  uVar55 = uStack_15;
  uStack_16 = uVar54;
  uVar54 = uStack_16;
  uStack_15._0_4_ = (undefined4)uVar57;
  uStack_15._4_4_ = SUB84(uVar57,4);
  QStack_17.x = (float)(undefined4)uStack_15;
  QStack_17.y = (float)uStack_15._4_4_;
  uVar57 = QStack_17._0_8_;
  uStack_16._0_4_ = (undefined4)uVar56;
  uStack_16._4_4_ = SUB84(uVar56,4);
  QStack_17.z = (float)(undefined4)uStack_16;
  QStack_17.w = (float)uStack_16._4_4_;
  uVar56 = QStack_17._8_8_;
  QStack_17.x = (float)uVar59;
  QStack_17.y = SUB84(uVar59,4);
  QStack_19.x = QStack_17.x;
  QStack_19.y = QStack_17.y;
  QStack_17.z = (float)uVar58;
  QStack_17.w = SUB84(uVar58,4);
  QStack_19.z = QStack_17.z;
  QStack_19.w = QStack_17.w;
  QStack_17._0_8_ = uVar57;
  QStack_17._8_8_ = uVar56;
  uStack_15 = uVar55;
  uStack_16 = uVar54;
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_00,8,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_01,8);
  uVar20 = 0;
  uVar60 = 0;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
  while (pMVar38 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar60 < (this->fields)._size) {
    if ((uint)(this->fields)._size <= uVar60) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length <= uVar60) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar59._0_4_ = pPVar43->vector[(int)uVar60].Quadrant;
    uVar59._4_4_ = pPVar43->vector[(int)uVar60].FirstAxisSign;
    iVar61 = pPVar43->vector[(int)uVar60].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    pPVar43 = (this_00->fields)._items;
    uVar62 = (this_00->fields)._size;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar62 < (uint)pPVar43->max_length) {
      (this_00->fields)._size = uVar62 + 1;
      if ((uint)pPVar43->max_length <= uVar62) goto code_?;
      uVar60 = uVar60 + 1;
      pPVar43->vector[(int)uVar62].Quadrant = (int32_t)uVar59;
      pPVar43->vector[(int)uVar62].FirstAxisSign = uVar59._4_4_;
      pPVar43->vector[(int)uVar62].SecondAxisSign = iVar61;
    }
    else {
      PStack_63._0_8_ = uVar59;
      PStack_63.SecondAxisSign = iVar61;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,&PStack_63,pMVar38->klass->rgctx_data[0xe].method);
      uVar60 = uVar60 + 1;
    }
  }
  uVar60 = 0;
  while (pMVar38 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar60 < (this->fields)._size) {
    if ((uint)(this->fields)._size <= uVar60) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length <= uVar60) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar58._0_4_ = pPVar43->vector[(int)uVar60].Quadrant;
    uVar58._4_4_ = pPVar43->vector[(int)uVar60].FirstAxisSign;
    iVar61 = pPVar43->vector[(int)uVar60].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    pPVar43 = (this_01->fields)._items;
    uVar62 = (this_01->fields)._size;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar62 < (uint)pPVar43->max_length) {
      (this_01->fields)._size = uVar62 + 1;
      if ((uint)pPVar43->max_length <= uVar62) goto code_?;
      uVar60 = uVar60 + 1;
      pPVar43->vector[(int)uVar62].Quadrant = (int32_t)uVar58;
      pPVar43->vector[(int)uVar62].FirstAxisSign = uVar58._4_4_;
      pPVar43->vector[(int)uVar62].SecondAxisSign = iVar61;
    }
    else {
      PStack_63._0_8_ = uVar58;
      PStack_63.SecondAxisSign = iVar61;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_01,&PStack_63,pMVar38->klass->rgctx_data[0xe].method);
      uVar60 = uVar60 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) {
code_?:
      FUN_?();
      pcVar39 = (code *)swi(3);
      pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
      return pLVar40;
    }
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    pPVar64->vector[7].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    goto code_?;
  case Face__Enum_Front:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    pPVar64->vector[7].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    goto code_?;
  case Face__Enum_Back:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    pPVar64->vector[7].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    iVar61 = pPVar43->vector[5].SecondAxisSign;
    break;
  case Face__Enum_Left:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    pPVar64->vector[7].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    iVar61 = pPVar43->vector[6].SecondAxisSign;
    break;
  case Face__Enum_Right:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[4].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    pPVar64->vector[7].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar64 = (this_01->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    piVar41 = &(this_01->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar64->max_length == 0) goto code_?;
    iVar61 = pPVar43->vector[3].FirstAxisSign;
    pPVar64->vector[0].Quadrant = pPVar43->vector[3].Quadrant;
    pPVar64->vector[0].FirstAxisSign = iVar61;
    pPVar64->vector[0].SecondAxisSign = pPVar43->vector[3].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar43->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 2) goto code_?;
    iVar61 = pPVar43->vector[0].FirstAxisSign;
    pPVar64->vector[1].Quadrant = pPVar43->vector[0].Quadrant;
    pPVar64->vector[1].FirstAxisSign = iVar61;
    pPVar64->vector[1].SecondAxisSign = pPVar43->vector[0].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 3) goto code_?;
    iVar61 = pPVar43->vector[1].FirstAxisSign;
    pPVar64->vector[2].Quadrant = pPVar43->vector[1].Quadrant;
    pPVar64->vector[2].FirstAxisSign = iVar61;
    pPVar64->vector[2].SecondAxisSign = pPVar43->vector[1].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 4) goto code_?;
    iVar61 = pPVar43->vector[2].FirstAxisSign;
    pPVar64->vector[3].Quadrant = pPVar43->vector[2].Quadrant;
    pPVar64->vector[3].FirstAxisSign = iVar61;
    pPVar64->vector[3].SecondAxisSign = pPVar43->vector[2].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 5) goto code_?;
    iVar61 = pPVar43->vector[5].FirstAxisSign;
    pPVar64->vector[4].Quadrant = pPVar43->vector[5].Quadrant;
    pPVar64->vector[4].FirstAxisSign = iVar61;
    pPVar64->vector[4].SecondAxisSign = pPVar43->vector[5].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 6) goto code_?;
    iVar61 = pPVar43->vector[6].FirstAxisSign;
    pPVar64->vector[5].Quadrant = pPVar43->vector[6].Quadrant;
    pPVar64->vector[5].FirstAxisSign = iVar61;
    pPVar64->vector[5].SecondAxisSign = pPVar43->vector[6].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 7) goto code_?;
    iVar61 = pPVar43->vector[7].FirstAxisSign;
    pPVar64->vector[6].Quadrant = pPVar43->vector[7].Quadrant;
    pPVar64->vector[6].FirstAxisSign = iVar61;
    pPVar64->vector[6].SecondAxisSign = pPVar43->vector[7].SecondAxisSign;
    piVar41 = &(this_00->fields)._version;
    *piVar41 = *piVar41 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar43 = (this_01->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar64 = (this_00->fields)._items;
    if (pPVar64 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar64->max_length < 8) goto code_?;
    iVar61 = pPVar43->vector[4].FirstAxisSign;
    pPVar64->vector[7].Quadrant = pPVar43->vector[4].Quadrant;
    pPVar64->vector[7].FirstAxisSign = iVar61;
    iVar61 = pPVar43->vector[4].SecondAxisSign;
  }
  pPVar64->vector[7].SecondAxisSign = iVar61;
code_?:
  piVar41 = &(this_00->fields)._version;
  *piVar41 = *piVar41 + 1;
  this = this_00;
code_?:
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pQVar18 = Cube_GetFromTopRotation(&QStack_26,direction,(MethodInfo *)0x0);
  QStack_26.x = pQVar18->x;
  QStack_26.y = pQVar18->y;
  QStack_26.z = pQVar18->z;
  QStack_26.w = pQVar18->w;
  fVar21 = pQVar18->x;
  fVar22 = pQVar18->y;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar39 = (code *)swi(3);
    pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
    return pLVar40;
  }
  while( true ) {
    if ((this->fields)._size <= (int)uVar20) {
      return (List_1_UnityEngine_Vector3_ *)this;
    }
    if ((uint)(this->fields)._size <= uVar20) break;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    PStack_63.Quadrant = pPVar43->vector[(int)uVar20].Quadrant;
    PStack_63.FirstAxisSign = pPVar43->vector[(int)uVar20].FirstAxisSign;
    fVar23 = (float)pPVar43->vector[(int)uVar20].SecondAxisSign;
    fVar37 = QStack_26.z + QStack_26.z;
    fVar30 = fVar22 + fVar22;
    fVar36 = (fVar21 + fVar21) * fVar21;
    fVar33 = (fVar21 + fVar21) * QStack_26.w;
    fVar29 = fVar30 * QStack_26.w;
    fVar27 = (_UNK_? - (fVar37 * QStack_26.z + fVar36)) * (float)PStack_63.FirstAxisSign;
    fVar34 = (fVar37 * fVar21 - fVar29) * (float)PStack_63.Quadrant;
    fVar28 = (_UNK_? - (fVar37 * QStack_26.z + fVar30 * fVar22)) * (float)PStack_63.Quadrant
    ;
    fVar24 = (fVar30 * fVar21 - fVar37 * QStack_26.w) * (float)PStack_63.FirstAxisSign;
    fVar35 = (fVar37 * QStack_26.w + fVar30 * fVar21) * (float)PStack_63.Quadrant;
    fVar32 = (fVar33 + fVar37 * fVar22) * (float)PStack_63.FirstAxisSign;
    fVar36 = _UNK_? - (fVar30 * fVar22 + fVar36);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar65 = (double)FUN_?(SUB84((double)(fVar28 + fVar24 +
                                                (fVar29 + fVar37 * fVar21) * fVar23),0),3);
    dVar66 = (double)FUN_?(SUB84((double)(fVar27 + fVar35 +
                                                (fVar37 * fVar22 - fVar33) * fVar23),0),3);
    dVar67 = (double)FUN_?(SUB84((double)(fVar32 + fVar34 + fVar36 * fVar23),0),3);
    if ((uint)(this->fields)._size <= uVar20) break;
    pPVar43 = (this->fields)._items;
    if (pPVar43 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar43->max_length <= uVar20) goto code_?;
    pPVar43->vector[(int)uVar20].Quadrant = (int32_t)(float)dVar65;
    pPVar43->vector[(int)uVar20].FirstAxisSign = (int32_t)(float)dVar66;
    pPVar43->vector[(int)uVar20].SecondAxisSign = (int32_t)(float)dVar67;
    piVar41 = &(this->fields)._version;
    *piVar41 = *piVar41 + 1;
    uVar20 = uVar20 + 1;
    fVar21 = QStack_26.x;
    fVar22 = QStack_26.y;
  }
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar39 = (code *)swi(3);
  pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
  return pLVar40;
}


/* IntVector GetCubePosAboveFace(IntVector, Face) */

IntVector *
Assembly-CSharp.dll::Cube::Cube_GetCubePosAboveFace
          (IntVector *__return_storage_ptr__,IntVector *localPos,Face__Enum face,MethodInfo *method)

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
  iVar1 = localPos->x;
  iVar2 = localPos->y;
  iVar3 = localPos->z;
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = iVar1;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar3;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar4 = Cube_GetFaceAxis(&VStack_5,face,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
  __return_storage_ptr__->x = __return_storage_ptr__->x + (short)(int)(float)uVar6;
  __return_storage_ptr__->y = __return_storage_ptr__->y + (short)(int)(float)uVar7;
  __return_storage_ptr__->z = __return_storage_ptr__->z + (short)(int)fVar8;
  return __return_storage_ptr__;
}


/* Vector3 GetDefaultNormal(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetDefaultNormal
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  switch(face) {
  case Face__Enum_Top:
    uVar3 = (ulonglong)(uint)_UNK_?;
    __return_storage_ptr__->x = (float)(int)(uVar3 << 0x20);
    __return_storage_ptr__->y = (float)(int)((uVar3 << 0x20) >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    uVar3 = (ulonglong)(uint)_UNK_?;
    __return_storage_ptr__->x = (float)(int)(uVar3 << 0x20);
    __return_storage_ptr__->y = (float)(int)((uVar3 << 0x20) >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  case Face__Enum_Front:
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    fVar2 = _UNK_?;
    break;
  case Face__Enum_Right:
    break;
  default:
    uVar4 = func_?(&TypeInfo__System__NotImplementedException);
    this = (NotImplementedException *)func_?(uVar4);
    mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
              (this,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__Cube__GetDefaultNormal_MV__WorldObject__Face_);
    uRam_? = FUN_?(this);
    uVar6 = in(uVar5);
    *unaff_RDI = uVar6;
    pcVar7 = (code *)swi(3);
    uRam_? = uRam_?;
    pVVar8 = (Vector3 *)(*pcVar7)(extraout_XMM0_Da,(char)uVar5 * '\x02');
    return pVVar8;
  }
  __return_storage_ptr__->x = (float)(int)(ulonglong)(uint)fVar2;
  __return_storage_ptr__->y = (float)(int)((ulonglong)(uint)fVar2 >> 0x20);
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3[] GetEdge(Cube, Face, Edge) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdge
          (Cube *cube,Face__Enum face,Edge__Enum edge,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    byteArray = (cube->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                       (byteArray,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    pVVar2 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,2);
    if (edge == Edge__Enum_Front) {
      if (pVVar1 != (Vector3__Array *)0x0) {
        if ((int)pVVar1->max_length != 0) {
          if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
          if ((int)pVVar2->max_length != 0) {
            fVar3 = pVVar1->vector[0].y;
            pVVar2->vector[0].x = pVVar1->vector[0].x;
            pVVar2->vector[0].y = fVar3;
            pVVar2->vector[0].z = pVVar1->vector[0].z;
            if ((1 < (uint)pVVar1->max_length) && (1 < (uint)pVVar2->max_length)) {
              fVar3 = pVVar1->vector[1].y;
              pVVar2->vector[1].x = pVVar1->vector[1].x;
              pVVar2->vector[1].y = fVar3;
              fVar3 = pVVar1->vector[1].z;
              goto code_?;
            }
          }
        }
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        pVVar1 = (Vector3__Array *)(*pcVar4)();
        return pVVar1;
      }
    }
    else if (edge == Edge__Enum_Back) {
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (2 < (uint)pVVar1->max_length) {
          if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
          if ((int)pVVar2->max_length != 0) {
            fVar3 = pVVar1->vector[2].y;
            pVVar2->vector[0].x = pVVar1->vector[2].x;
            pVVar2->vector[0].y = fVar3;
            pVVar2->vector[0].z = pVVar1->vector[2].z;
            if ((3 < (uint)pVVar1->max_length) && (1 < (uint)pVVar2->max_length)) {
              fVar3 = pVVar1->vector[3].y;
              pVVar2->vector[1].x = pVVar1->vector[3].x;
              pVVar2->vector[1].y = fVar3;
              fVar3 = pVVar1->vector[3].z;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    else if (edge == Edge__Enum_Left) {
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (3 < (uint)pVVar1->max_length) {
          if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
          if ((int)pVVar2->max_length != 0) {
            fVar3 = pVVar1->vector[3].y;
            pVVar2->vector[0].x = pVVar1->vector[3].x;
            pVVar2->vector[0].y = fVar3;
            pVVar2->vector[0].z = pVVar1->vector[3].z;
            if (((int)pVVar1->max_length != 0) && (1 < (uint)pVVar2->max_length)) {
              fVar3 = pVVar1->vector[0].y;
              pVVar2->vector[1].x = pVVar1->vector[0].x;
              pVVar2->vector[1].y = fVar3;
              fVar3 = pVVar1->vector[0].z;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    else {
      if (edge != Edge__Enum_Right) {
        return pVVar2;
      }
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (1 < (uint)pVVar1->max_length) {
          if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
          if ((int)pVVar2->max_length != 0) {
            fVar3 = pVVar1->vector[1].y;
            pVVar2->vector[0].x = pVVar1->vector[1].x;
            pVVar2->vector[0].y = fVar3;
            pVVar2->vector[0].z = pVVar1->vector[1].z;
            if ((2 < (uint)pVVar1->max_length) && (1 < (uint)pVVar2->max_length)) {
              fVar3 = pVVar1->vector[2].y;
              pVVar2->vector[1].x = pVVar1->vector[2].x;
              pVVar2->vector[1].y = fVar3;
              fVar3 = pVVar1->vector[2].z;
code_?:
              pVVar2->vector[1].z = fVar3;
              return pVVar2;
            }
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar4)();
  return pVVar1;
}


/* Vector3[] GetEdgeVerticesWorld(GameObject, Cube, Face, Edge, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdgeVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,Edge__Enum edge,IntVector *iVector,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  sVar1 = iVector->x;
  sVar2 = iVector->y;
  sVar3 = iVector->z;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar4 = Cube_GetEdge(cube,face,edge,(MethodInfo *)0x0);
  if ((gameObject != (GameObject *)0x0) &&
     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0), pVVar4 != (Vector3__Array *)0x0)) {
    if ((int)pVVar4->max_length != 0) {
      uStack_6._0_4_ = pVVar4->vector[0].x;
      uStack_6._4_4_ = pVVar4->vector[0].y;
      fVar7 = pVVar4->vector[0].z + (float)(int)sVar3;
      if (pTVar5 == (Transform *)0x0) goto code_?;
      uStack_6 = CONCAT44((float)uStack_6._4_4_ + (float)(int)sVar2,
                           (float)(undefined4)uStack_6 + (float)(int)sVar1);
      fStack_8 = fVar7;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = 0;
      fStack_10 = 0.0;
      pvVar11 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        pVVar4 = (Vector3__Array *)(*pcVar12)();
        return pVVar4;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        pVVar4 = (Vector3__Array *)(*pcVar12)();
        return pVVar4;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar11,&uStack_6,&uStack_9);
      if ((int)pVVar4->max_length != 0) {
        pVVar4->vector[0].x = (float)(undefined4)uStack_9;
        pVVar4->vector[0].y = (float)uStack_9._4_4_;
        pVVar4->vector[0].z = fStack_10;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (gameObject,(MethodInfo *)0x0);
        if (1 < (uint)pVVar4->max_length) {
          uStack_6._0_4_ = pVVar4->vector[1].x;
          uStack_6._4_4_ = pVVar4->vector[1].y;
          fVar7 = pVVar4->vector[1].z + (float)(int)sVar3;
          if (pTVar5 == (Transform *)0x0) goto code_?;
          uStack_6 = CONCAT44((float)uStack_6._4_4_ + (float)(int)sVar2,
                               (float)(undefined4)uStack_6 + (float)(int)sVar1);
          fStack_8 = fVar7;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_9 = 0;
          fStack_10 = 0.0;
          pvVar11 = (pTVar5->fields)._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            pVVar4 = (Vector3__Array *)(*pcVar12)();
            return pVVar4;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar12 = (code *)swi(3);
            pVVar4 = (Vector3__Array *)(*pcVar12)();
            return pVVar4;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(pvVar11,&uStack_6,&uStack_9);
          if (1 < (uint)pVVar4->max_length) {
            pVVar4->vector[1].x = (float)(undefined4)uStack_9;
            pVVar4->vector[1].y = (float)uStack_9._4_4_;
            pVVar4->vector[1].z = fStack_10;
            return pVVar4;
          }
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    pVVar4 = (Vector3__Array *)(*pcVar12)();
    return pVVar4;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar12)();
  return pVVar4;
}


/* Edge GetEdge(GameObject, Cube, Face, Vector3, IntVector) */

Edge__Enum
Assembly-CSharp.dll::Cube::Cube_GetEdge_1
          (GameObject *gameObject,Cube *cube,Face__Enum face,Vector3 *pos,IntVector *iVector,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__Edge);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Edge);
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
  pIVar1 = TypeRef__Edge;
  fVar2 = _UNK_?;
  fStack_3 = 0.0;
  plVar4 = (longlong *)0x0;
  lStack_5 = 0;
  EStack_6 = Edge__Enum_None;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar7 = plVar4;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar8 = FUN_?(pIVar1,1);
    plVar7 = (longlong *)FUN_?(lVar8 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar7 == (longlong *)0x0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar9);
    paramName = (String *)func_?(&StringLiteral_enumType);
    pEVar10 = (Edge__Enum__Class *)0x0;
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_00,uVar9);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    plVar7 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar7,pEVar10);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    this = (Array *)(**(code **)(*plVar7 + 0x888))(plVar7);
    if (this == (Array *)0x0) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      EVar12 = (*pcVar11)();
      return EVar12;
    }
    pIStack_13 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_14 = 0;
    ppIStack_15 = &pIStack_13;
    plStack_16 = &lStack_5;
    while (pIStack_13 != (IEnumerator *)0x0) {
      cVar17 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      pIVar18 = pIStack_13;
      if (cVar17 == '\0') {
        lStack_5 = FUN_?(pIStack_13,TypeInfo__System__IDisposable);
        if (lStack_5 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStack_5);
        }
        return (Edge__Enum)plVar4;
      }
      if (pIStack_13 == (IEnumerator *)0x0) goto code_?;
      pIVar19 = pIStack_13->klass;
      uVar20 = 0;
      uVar21._0_1_ = (pIVar19->_1).rank;
      uVar21._1_1_ = (pIVar19->_1).minimumAlignment;
      if (uVar21 != 0) {
        do {
          if (pIVar19->interfaceOffsets[uVar20].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar22 = &(pIVar19->vtable).MoveNext + (pIVar19->interfaceOffsets[uVar20].offset + 1);
            goto code_?;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar21);
      }
      pVVar22 = (VirtualInvokeData *)
                FUN_?(pIStack_13,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      plVar7 = (longlong *)(*pVVar22->methodPtr)(pIVar18,pVVar22->method);
      if (plVar7 == (longlong *)0x0) goto code_?;
      pEVar10 = TypeInfo__Edge;
      if (*(Il2CppClass **)(*plVar7 + 0x40) != (TypeInfo__Edge->_0).element_class)
      goto code_?;
      EVar12 = *(Edge__Enum *)(plVar7 + 2);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      aIStack_23[0].x = iVector->x;
      aIStack_23[0].y = iVector->y;
      aIStack_23[0].z = iVector->z;
      pEVar10 = (Edge__Enum__Class *)(ulonglong)face;
      pVVar24 = Cube_GetEdgeVerticesWorld(gameObject,cube,face,EVar12,aIStack_23,(MethodInfo *)0x0);
      if (pVVar24 == (Vector3__Array *)0x0) goto code_?;
      if ((int)pVVar24->max_length == 0) goto code_?;
      if ((uint)pVVar24->max_length < 2) goto code_?;
      aVStack_25[0].x = 0.0;
      aVStack_25[0].y = 0.0;
      aVStack_25[0].z = 0.0;
      VStack_26.x = pVVar24->vector[1].x;
      VStack_26.y = pVVar24->vector[1].y;
      VStack_26.z = pVVar24->vector[1].z;
      VStack_27.x = pVVar24->vector[0].x;
      VStack_27.y = pVVar24->vector[0].y;
      VStack_27.z = pVVar24->vector[0].z;
      VStack_28.x = pos->x;
      VStack_28.y = pos->y;
      VStack_28.z = pos->z;
      bVar29 = MathFunctions::MathFunctions_DistancePointLine_1
                        (&VStack_28,&VStack_27,&VStack_26,&fStack_3,aVStack_25,(MethodInfo *)0x0);
      if (((bVar29 != 0) && ((uint)ABS(fStack_3) < 0x7f800001)) && (fStack_3 < fVar2)) {
        plVar4 = (longlong *)(ulonglong)EVar12;
        fVar2 = fStack_3;
        EStack_6 = EVar12;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  EVar12 = (*pcVar11)();
  return EVar12;
}


/* Face GetFace(Vector3[], Vector3[]) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFace
          (Vector3__Array *corners,Vector3__Array *triangleVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  pIVar1 = TypeRef__MV__WorldObject__Face;
  alStack_2[0] = 0;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar3 = (longlong *)0x0;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar1,1);
    plVar3 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar5);
    paramName = (String *)func_?(&StringLiteral_enumType);
    plVar3 = (longlong *)0x0;
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_00,uVar5);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?(plVar3);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    this = (Array *)(**(code **)(*plVar3 + 0x888))(plVar3);
    if (this == (Array *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      FVar7 = (*pcVar6)();
      return FVar7;
    }
    pIStackX_20 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    dVar8 = _UNK_?;
    uStack_9 = 0;
    ppIStack_10 = &pIStackX_20;
    plStack_11 = alStack_2;
    while (pIStackX_20 != (IEnumerator *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar12 == '\0') {
        alStack_2[0] = FUN_?(pIStackX_20,TypeInfo__System__IDisposable);
        if (alStack_2[0] != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,alStack_2[0]);
        }
        return Face__Enum_Top;
      }
      if (pIStackX_20 == (IEnumerator *)0x0) goto code_?;
      plVar3 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
      if (plVar3 == (longlong *)0x0) goto code_?;
      if (*(Il2CppClass **)(*plVar3 + 0x40) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      FVar7 = *(Face__Enum *)(plVar3 + 2);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      plVar3 = (longlong *)0x0;
      pVVar13 = Cube_GetFace_1(corners,FVar7,(MethodInfo *)0x0);
      iVar14 = 0;
      uVar15 = 0;
      if (triangleVertices == (Vector3__Array *)0x0) goto code_?;
      for (; uVar16 = (uint)triangleVertices->max_length, (int)uVar15 < (int)uVar16;
          uVar15 = uVar15 + 1) {
        if (uVar16 <= uVar15) goto code_?;
        uVar5._0_4_ = triangleVertices->vector[(int)uVar15].x;
        uVar5._4_4_ = triangleVertices->vector[(int)uVar15].y;
        fVar17 = triangleVertices->vector[(int)uVar15].z;
        uVar16 = 0;
        uStack_18 = uVar5;
        fStack_19 = fVar17;
        if (pVVar13 == (Vector3__Array *)0x0) goto code_?;
        for (; uVar20 = (uint)pVVar13->max_length, (int)uVar16 < (int)uVar20; uVar16 = uVar16 + 1) {
          if (uVar20 <= uVar16) goto code_?;
          uVar21 = pVVar13->vector[(int)uVar16].x;
          uVar22 = pVVar13->vector[(int)uVar16].y;
          fStack_23 = fVar17 - pVVar13->vector[(int)uVar16].z;
          uStack_24 = CONCAT44((float)uVar5._4_4_ - (float)uVar22,
                               (float)(undefined4)uVar5 - (float)uVar21);
          fVar25 = (float)FUN_?();
          if ((double)fVar25 < dVar8) {
            iVar14 = iVar14 + 1;
            break;
          }
        }
      }
      if (iVar14 == 3) {
        FUN_?(&ppIStack_10);
        return FVar7;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  FVar7 = (*pcVar6)();
  return FVar7;
}


/* Vector3 GetFaceAxis(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetFaceAxis
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->upVector).y;
    fVar3 = (pVVar1->upVector).z;
    __return_storage_ptr__->x = (pVVar1->upVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->downVector).y;
    fVar3 = (pVVar1->downVector).z;
    __return_storage_ptr__->x = (pVVar1->downVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  case Face__Enum_Front:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    break;
  case Face__Enum_Back:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->forwardVector).y;
    fVar3 = (pVVar1->forwardVector).z;
    __return_storage_ptr__->x = (pVVar1->forwardVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->leftVector).y;
    fVar3 = (pVVar1->leftVector).z;
    __return_storage_ptr__->x = (pVVar1->leftVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  case Face__Enum_Right:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->rightVector).y;
    fVar3 = (pVVar1->rightVector).z;
    __return_storage_ptr__->x = (pVVar1->rightVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  default:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    __return_storage_ptr__->x = (pVVar1->zeroVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->backVector).y;
  fVar3 = (pVVar1->backVector).z;
  __return_storage_ptr__->x = (pVVar1->backVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Face GetFaceIdentityFromLocalDir(Vector3) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFaceIdentityFromLocalDir(Vector3 *localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_no_face_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = localDir->y;
  uVar2 = localDir->x;
  uVar3 = (uint)UNK_?;
  fVar4 = (float)(uVar2 & uVar3);
  fVar5 = (float)((uint)localDir->z & uVar3);
  fVar6 = (float)(uVar1 & uVar3);
  if ((fVar6 <= fVar4) && (fVar5 <= fVar4)) {
    return (0.0 < localDir->x || localDir->x == 0.0) + Face__Enum_Left;
  }
  if ((fVar4 <= fVar6) && (fVar5 <= fVar6)) {
    return (Face__Enum)(localDir->y <= 0.0 && localDir->y != 0.0);
  }
  if ((fVar4 <= fVar5) && (fVar6 <= fVar5)) {
    return (0.0 < localDir->z || localDir->z == 0.0) + Face__Enum_Front;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_no_face_found,(MethodInfo *)0x0);
  return Face__Enum_Front;
}


/* Vector3[] GetFaceVerticesWorld(GameObject, Cube, Face, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFaceVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,IntVector *iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (float)(int)iVector->x;
  fVar2 = (float)(int)iVector->y;
  fVar3 = (float)(int)iVector->z;
  if (cube != (Cube *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    byteArray = (cube->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                       (byteArray,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar4 = Cube_GetFace_1(pVVar4,face,(MethodInfo *)0x0);
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (gameObject,(MethodInfo *)0x0), pVVar4 != (Vector3__Array *)0x0)) {
      if ((int)pVVar4->max_length != 0) {
        uStack_6._0_4_ = pVVar4->vector[0].x;
        uStack_6._4_4_ = pVVar4->vector[0].y;
        fVar7 = pVVar4->vector[0].z + fVar3;
        if (pTVar5 == (Transform *)0x0) goto code_?;
        uStack_6 = CONCAT44((float)uStack_6._4_4_ + fVar2,(float)(undefined4)uStack_6 + fVar1);
        fStack_8 = fVar7;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_9 = 0;
        fStack_10 = 0.0;
        pvVar11 = (pTVar5->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          pVVar4 = (Vector3__Array *)(*pcVar12)();
          return pVVar4;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          pVVar4 = (Vector3__Array *)(*pcVar12)();
          return pVVar4;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar11,&uStack_6,&uStack_9);
        if ((int)pVVar4->max_length != 0) {
          pVVar4->vector[0].x = (float)(undefined4)uStack_9;
          pVVar4->vector[0].y = (float)uStack_9._4_4_;
          pVVar4->vector[0].z = fStack_10;
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (gameObject,(MethodInfo *)0x0);
          if (1 < (uint)pVVar4->max_length) {
            uStack_6._0_4_ = pVVar4->vector[1].x;
            uStack_6._4_4_ = pVVar4->vector[1].y;
            fVar7 = pVVar4->vector[1].z + fVar3;
            if (pTVar5 == (Transform *)0x0) goto code_?;
            uStack_6 = CONCAT44((float)uStack_6._4_4_ + fVar2,(float)(undefined4)uStack_6 + fVar1
                                );
            fStack_8 = fVar7;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_9 = 0;
            fStack_10 = 0.0;
            pvVar11 = (pTVar5->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              pVVar4 = (Vector3__Array *)(*pcVar12)();
              return pVVar4;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar12 = (code *)swi(3);
              pVVar4 = (Vector3__Array *)(*pcVar12)();
              return pVVar4;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar11,&uStack_6,&uStack_9);
            if (1 < (uint)pVVar4->max_length) {
              pVVar4->vector[1].x = (float)(undefined4)uStack_9;
              pVVar4->vector[1].y = (float)uStack_9._4_4_;
              pVVar4->vector[1].z = fStack_10;
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (gameObject,(MethodInfo *)0x0);
              if (2 < (uint)pVVar4->max_length) {
                uStack_6._0_4_ = pVVar4->vector[2].x;
                uStack_6._4_4_ = pVVar4->vector[2].y;
                fVar7 = pVVar4->vector[2].z + fVar3;
                if (pTVar5 == (Transform *)0x0) goto code_?;
                uStack_6 = CONCAT44((float)uStack_6._4_4_ + fVar2,
                                     (float)(undefined4)uStack_6 + fVar1);
                fStack_8 = fVar7;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_9 = 0;
                fStack_10 = 0.0;
                pvVar11 = (pTVar5->fields)._._.m_CachedPtr;
                if (pvVar11 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                  pcVar12 = (code *)swi(3);
                  pVVar4 = (Vector3__Array *)(*pcVar12)();
                  return pVVar4;
                }
                pcVar12 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar12 = (code *)swi(3);
                  pVVar4 = (Vector3__Array *)(*pcVar12)();
                  return pVVar4;
                }
                pcRam_? = pcVar12;
                (*pcRam_?)(pvVar11,&uStack_6,&uStack_9);
                if (2 < (uint)pVVar4->max_length) {
                  pVVar4->vector[2].x = (float)(undefined4)uStack_9;
                  pVVar4->vector[2].y = (float)uStack_9._4_4_;
                  pVVar4->vector[2].z = fStack_10;
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                  if (3 < (uint)pVVar4->max_length) {
                    uStack_6._0_4_ = pVVar4->vector[3].x;
                    uStack_6._4_4_ = pVVar4->vector[3].y;
                    fVar3 = pVVar4->vector[3].z + fVar3;
                    if (pTVar5 == (Transform *)0x0) goto code_?;
                    uStack_6 = CONCAT44((float)uStack_6._4_4_ + fVar2,
                                         (float)(undefined4)uStack_6 + fVar1);
                    fStack_8 = fVar3;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_9 = 0;
                    fStack_10 = 0.0;
                    pvVar11 = (pTVar5->fields)._._.m_CachedPtr;
                    if (pvVar11 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                      pcVar12 = (code *)swi(3);
                      pVVar4 = (Vector3__Array *)(*pcVar12)();
                      return pVVar4;
                    }
                    pcVar12 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar12 = (code *)swi(3);
                      pVVar4 = (Vector3__Array *)(*pcVar12)();
                      return pVVar4;
                    }
                    pcRam_? = pcVar12;
                    (*pcRam_?)(pvVar11,&uStack_6,&uStack_9);
                    if (3 < (uint)pVVar4->max_length) {
                      pVVar4->vector[3].x = (float)(undefined4)uStack_9;
                      pVVar4->vector[3].y = (float)uStack_9._4_4_;
                      pVVar4->vector[3].z = fStack_10;
                      return pVVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      pVVar4 = (Vector3__Array *)(*pcVar12)();
      return pVVar4;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar12)();
  return pVVar4;
}


/* Vector3[] GetFace(Vector3[], Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFace_1
          (Vector3__Array *corners,Face__Enum face,MethodInfo *method)

{
  apVStackX_8[0] = corners;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVStackX_20 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
            (apVStackX_8,&pVStackX_20,face,(MethodInfo *)0x0);
  return pVStackX_20;
}


/* Quaternion GetFromTopRotation(Face) */

Quaternion *
Assembly-CSharp.dll::Cube::Cube_GetFromTopRotation
          (Quaternion *__return_storage_ptr__,Face__Enum direction,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar2->identityQuaternion).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7._0_4_ = (pVVar6->forwardVector).x;
  uVar7._4_4_ = (pVVar6->forwardVector).y;
  fVar3 = (pVVar6->forwardVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar6->leftVector).x;
  uStack_8._4_4_ = (pVVar6->leftVector).y;
  fStack_9 = (pVVar6->leftVector).z;
  uStack_10 = 0;
  uStack_11 = 0;
  pcVar12 = pcRam_?;
  uStack_13 = uVar7;
  fStack_14 = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar12 = (code *)swi(3);
    pQVar15 = (Quaternion *)(*pcVar12)();
    return pQVar15;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_13,&uStack_8,&uStack_10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar16._0_4_ = (pVVar6->upVector).x;
  uVar16._4_4_ = (pVVar6->upVector).y;
  fVar3 = (pVVar6->upVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_17._0_4_ = (pVVar6->backVector).x;
  uStack_17._4_4_ = (pVVar6->backVector).y;
  fStack_18 = (pVVar6->backVector).z;
  uStack_19 = 0;
  uStack_20 = 0;
  pcVar12 = pcRam_?;
  uStack_21 = uVar16;
  fStack_22 = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar12 = (code *)swi(3);
    pQVar15 = (Quaternion *)(*pcVar12)();
    return pQVar15;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_21,&uStack_17,&uStack_19);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar23._0_4_ = (pVVar6->upVector).x;
  uVar23._4_4_ = (pVVar6->upVector).y;
  fVar3 = (pVVar6->upVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_13._0_4_ = (pVVar6->rightVector).x;
  uStack_13._4_4_ = (pVVar6->rightVector).y;
  fStack_14 = (pVVar6->rightVector).z;
  uStack_24 = 0;
  uStack_25 = 0;
  pcVar12 = pcRam_?;
  uStack_8 = uVar23;
  fStack_9 = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar12 = (code *)swi(3);
    pQVar15 = (Quaternion *)(*pcVar12)();
    return pQVar15;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_8,&uStack_13,&uStack_24);
  switch(direction) {
  case Face__Enum_Bottom:
    __return_storage_ptr__->x =
         (uStack_20._4_4_ * (float)uStack_19 + uStack_20._4_4_ * (float)uStack_19 +
         (float)uStack_20 * uStack_19._4_4_) - (float)uStack_20 * uStack_19._4_4_;
    __return_storage_ptr__->y =
         (uStack_20._4_4_ * uStack_19._4_4_ + uStack_20._4_4_ * uStack_19._4_4_ +
         (float)uStack_20 * (float)uStack_19) - (float)uStack_20 * (float)uStack_19;
    __return_storage_ptr__->z =
         (uStack_20._4_4_ * (float)uStack_20 + uStack_20._4_4_ * (float)uStack_20 +
         uStack_19._4_4_ * (float)uStack_19) - uStack_19._4_4_ * (float)uStack_19;
    __return_storage_ptr__->w =
         ((uStack_20._4_4_ * uStack_20._4_4_ - (float)uStack_19 * (float)uStack_19) -
         uStack_19._4_4_ * uStack_19._4_4_) - (float)uStack_20 * (float)uStack_20;
    break;
  case Face__Enum_Front:
    __return_storage_ptr__->x = (float)uStack_19;
    __return_storage_ptr__->y = uStack_19._4_4_;
    __return_storage_ptr__->z = (float)uStack_20;
    __return_storage_ptr__->w = uStack_20._4_4_;
    break;
  case Face__Enum_Back:
    fVar26 = (uStack_11._4_4_ * (float)uStack_10 + uStack_11._4_4_ * (float)uStack_10 +
             (float)uStack_11 * uStack_10._4_4_) - (float)uStack_11 * uStack_10._4_4_;
    fVar4 = (uStack_11._4_4_ * uStack_10._4_4_ + uStack_11._4_4_ * uStack_10._4_4_ +
             (float)uStack_11 * (float)uStack_10) - (float)uStack_11 * (float)uStack_10;
    fVar3 = (uStack_11._4_4_ * (float)uStack_11 + uStack_11._4_4_ * (float)uStack_11 +
            uStack_10._4_4_ * (float)uStack_10) - uStack_10._4_4_ * (float)uStack_10;
    fVar5 = ((uStack_11._4_4_ * uStack_11._4_4_ - (float)uStack_10 * (float)uStack_10) -
             uStack_10._4_4_ * uStack_10._4_4_) - (float)uStack_11 * (float)uStack_11;
    __return_storage_ptr__->x =
         (uStack_20._4_4_ * fVar26 + (float)uStack_19 * fVar5 + (float)uStack_20 * fVar4) -
         uStack_19._4_4_ * fVar3;
    __return_storage_ptr__->y =
         (uStack_20._4_4_ * fVar4 + uStack_19._4_4_ * fVar5 + (float)uStack_19 * fVar3) -
         (float)uStack_20 * fVar26;
    __return_storage_ptr__->z =
         (uStack_20._4_4_ * fVar3 + (float)uStack_20 * fVar5 + uStack_19._4_4_ * fVar26) -
         (float)uStack_19 * fVar4;
    __return_storage_ptr__->w =
         ((uStack_20._4_4_ * fVar5 - (float)uStack_19 * fVar26) - uStack_19._4_4_ * fVar4) -
         (float)uStack_20 * fVar3;
    break;
  case Face__Enum_Left:
    uStack_21 = uStack_10;
    fStack_22 = (float)uStack_11;
    fStack_27 = uStack_11._4_4_;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_21,&uStack_10);
  case Face__Enum_Right:
    __return_storage_ptr__->x =
         ((float)uStack_10 * uStack_20._4_4_ + uStack_11._4_4_ * (float)uStack_19 +
         uStack_10._4_4_ * (float)uStack_20) - (float)uStack_11 * uStack_19._4_4_;
    __return_storage_ptr__->y =
         (uStack_10._4_4_ * uStack_20._4_4_ + uStack_11._4_4_ * uStack_19._4_4_ +
         (float)uStack_11 * (float)uStack_19) - (float)uStack_10 * (float)uStack_20;
    __return_storage_ptr__->z =
         ((float)uStack_11 * uStack_20._4_4_ + uStack_11._4_4_ * (float)uStack_20 +
         (float)uStack_10 * uStack_19._4_4_) - uStack_10._4_4_ * (float)uStack_19;
    __return_storage_ptr__->w =
         ((uStack_11._4_4_ * uStack_20._4_4_ - (float)uStack_10 * (float)uStack_19) -
         uStack_10._4_4_ * uStack_19._4_4_) - (float)uStack_11 * (float)uStack_20;
  }
  return __return_storage_ptr__;
}


/* Vector3[] GetNormals(Vector3[], Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetNormals
          (Vector3__Array *corners,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar2 = _UNK_?;
  pIVar3 = TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes;
  if (pIVar3 == (Int32__Array__Array *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar1 = (Vector3__Array *)(*pcVar4)();
    return pVVar1;
  }
  if (face < (Face__Enum)pIVar3->max_length) {
    pIVar5 = pIVar3->vector[(int)face];
    uVar6 = 0;
    piVar7 = pIVar5->vector;
    pVVar8 = pVVar1->vector;
    lVar9 = 0;
    if (pIVar5 == (Int32__Array *)0x0) goto code_?;
    while (uVar6 < (uint)pIVar5->max_length) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      uVar10 = *piVar7;
      if ((uint)corners->max_length <= uVar10) break;
      uVar11 = uVar6 + 3 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      if (((uint)pIVar5->max_length <= uVar11) ||
         (uVar11 = pIVar5->vector[(int)uVar11], (uint)corners->max_length <= uVar11)) break;
      uVar12 = uVar6 + 1 & 0x80000003;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
      }
      if (((uint)pIVar5->max_length <= uVar12) ||
         (uVar12 = pIVar5->vector[(int)uVar12], (uint)corners->max_length <= uVar12)) break;
      uVar13 = corners->vector[(int)uVar10].x;
      uVar14 = corners->vector[(int)uVar10].y;
      uVar15 = corners->vector[(int)uVar12].x;
      fVar16 = corners->vector[(int)uVar12].z - corners->vector[(int)uVar10].z;
      fVar17 = corners->vector[(int)uVar12].y - (float)uVar14;
      uVar18 = corners->vector[(int)uVar11].x;
      uVar19 = corners->vector[(int)uVar11].y;
      fVar20 = corners->vector[(int)uVar11].z - corners->vector[(int)uVar10].z;
      fVar21 = fVar20 * fVar17 - ((float)uVar19 - (float)uVar14) * fVar16;
      fVar22 = ((float)uVar18 - (float)uVar13) * fVar16 - fVar20 * ((float)uVar15 - (float)uVar13);
      fVar20 = ((float)uVar19 - (float)uVar14) * ((float)uVar15 - (float)uVar13) -
               ((float)uVar18 - (float)uVar13) * fVar17;
      uStack_23 = CONCAT44(fVar22,fVar21);
      fStack_24 = fVar20;
      fVar16 = (float)FUN_?(&uStack_23);
      if (fVar2 < fVar16) {
        fVar20 = fVar20 / fVar16;
        uStack_25 = CONCAT44(fVar22 / fVar16,fVar21 / fVar16);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_25._0_4_ = (pVVar26->zeroVector).x;
        uStack_25._4_4_ = (pVVar26->zeroVector).y;
        fVar20 = (pVVar26->zeroVector).z;
      }
      if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar1->max_length <= uVar6) break;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 1;
      pVVar8->x = (float)(undefined4)uStack_25;
      pVVar8->y = (float)uStack_25._4_4_;
      piVar7 = piVar7 + 1;
      pVVar8->z = fVar20;
      pVVar8 = pVVar8 + 1;
      if (3 < lVar9) {
        return pVVar1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar4)();
  return pVVar1;
}


/* Boolean GetPlaneVertices(Vector3[], Vector3[] ByRef) */

bool Assembly-CSharp.dll::Cube::Cube_GetPlaneVertices
               (Vector3__Array *corners,Vector3__Array **planeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Vector3_ *)
         FUN_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
  pMVar1 = MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__;
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::Vector3]::
            EqualityComparer_1_UnityEngine_Vector3__get_Default
                      (MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__
                       ->klass->rgctx_data->method);
  if (pEVar2 == (EqualityComparer_1_UnityEngine_Vector3_ *)0x0) {
    pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::Vector3]::
              EqualityComparer_1_UnityEngine_Vector3__get_Default
                        ((pMVar1->klass->rgctx_data[3].method)->klass->rgctx_data->method);
  }
  bVar3 = iRam_? != 0;
  (this->fields)._comparer = (IEqualityComparer_1_UnityEngine_Vector3_ *)pEVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._comparer >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  uVar4 = 0;
  (this->fields)._count = 0;
  (this->fields)._lastIndex = 0;
  (this->fields)._freeList = -1;
  (this->fields)._version = 0;
  if (corners != (Vector3__Array *)0x0) {
    pVVar8 = corners->vector;
    for (; (int)uVar4 < (int)corners->max_length; uVar4 = uVar4 + 1) {
      if ((uint)corners->max_length <= uVar4) goto code_?;
      PStack_9.SecondAxisSign = (int32_t)pVVar8->z;
      PStack_9.Quadrant = (int32_t)pVVar8->x;
      PStack_9.FirstAxisSign = (int32_t)pVVar8->y;
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__AddIfNotPresent
                (this,(Vector3 *)&PStack_9,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 ->klass->rgctx_data[0x15].method);
      pVVar8 = pVVar8 + 1;
    }
    if ((this->fields)._count < 3) {
      return 0;
    }
    this_00 = (List_1_UnityEngine_Vector3_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_Vector3_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this_01,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    if (this_00 != (List_1_UnityEngine_Vector3_ *)0x0) {
      if ((this_00->fields)._size == 0) goto code_?;
      pVVar10 = (this_00->fields)._items;
      if (pVVar10 != (Vector3__Array *)0x0) {
        if ((int)pVVar10->max_length == 0) goto code_?;
        if (this_01 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          uVar11._0_4_ = (int32_t)pVVar10->vector[0].x;
          uVar11._4_4_ = (int32_t)pVVar10->vector[0].y;
          fVar12 = pVVar10->vector[0].z;
          piVar13 = &(this_01->fields)._version;
          *piVar13 = *piVar13 + 1;
          pPVar14 = (this_01->fields)._items;
          if (pPVar14 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
            uVar4 = (this_01->fields)._size;
            if (uVar4 < (uint)pPVar14->max_length) {
              (this_01->fields)._size = uVar4 + 1;
              if ((uint)pPVar14->max_length <= uVar4) goto code_?;
              pPVar14->vector[(int)uVar4].Quadrant = (int32_t)uVar11;
              pPVar14->vector[(int)uVar4].FirstAxisSign = uVar11._4_4_;
              pPVar14->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar12;
            }
            else {
              PStack_9._0_8_ = uVar11;
              PStack_9.SecondAxisSign = (int32_t)fVar12;
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (this_01,&PStack_9,pMVar1->klass->rgctx_data[0xe].method);
            }
            pMVar1 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            if ((uint)(this_00->fields)._size < 2) goto code_?;
            pVVar10 = (this_00->fields)._items;
            if (pVVar10 != (Vector3__Array *)0x0) {
              if ((uint)pVVar10->max_length < 2) goto code_?;
              uVar15._0_4_ = (int32_t)pVVar10->vector[1].x;
              uVar15._4_4_ = (int32_t)pVVar10->vector[1].y;
              fVar12 = pVVar10->vector[1].z;
              piVar13 = &(this_01->fields)._version;
              *piVar13 = *piVar13 + 1;
              pPVar14 = (this_01->fields)._items;
              if (pPVar14 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                uVar4 = (this_01->fields)._size;
                if (uVar4 < (uint)pPVar14->max_length) {
                  (this_01->fields)._size = uVar4 + 1;
                  if ((uint)pPVar14->max_length <= uVar4) goto code_?;
                  pPVar14->vector[(int)uVar4].Quadrant = (int32_t)uVar15;
                  pPVar14->vector[(int)uVar4].FirstAxisSign = uVar15._4_4_;
                  pPVar14->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar12;
                }
                else {
                  PStack_9._0_8_ = uVar15;
                  PStack_9.SecondAxisSign = (int32_t)fVar12;
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                            (this_01,&PStack_9,pMVar1->klass->rgctx_data[0xe].method);
                }
                if ((uint)(this_00->fields)._size < 2) {
code_?:
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar16 = (code *)swi(3);
                  bVar17 = (*pcVar16)();
                  return bVar17;
                }
                pVVar10 = (this_00->fields)._items;
                if (pVVar10 != (Vector3__Array *)0x0) {
                  if (1 < (uint)pVVar10->max_length) {
                    uVar18 = pVVar10->vector[1].x;
                    uVar19 = pVVar10->vector[1].y;
                    uStack_20._0_4_ = pVVar10->vector[0].x;
                    uStack_20._4_4_ = pVVar10->vector[0].y;
                    fVar21 = (float)uVar18 - (float)(undefined4)uStack_20;
                    fVar22 = pVVar10->vector[1].z - pVVar10->vector[0].z;
                    fVar23 = (float)uVar19 - (float)uStack_20._4_4_;
                    PStack_9.FirstAxisSign = (int32_t)fVar23;
                    PStack_9.Quadrant = (int32_t)fVar21;
                    PStack_9.SecondAxisSign = (int32_t)fVar22;
                    fVar24 = (float)FUN_?();
                    fVar12 = _UNK_?;
                    if (_UNK_? < fVar24) {
                      PStack_9.SecondAxisSign = (int32_t)(fVar22 / fVar24);
                      PStack_9.FirstAxisSign = (int32_t)(fVar23 / fVar24);
                      PStack_9.Quadrant = (int32_t)(fVar21 / fVar24);
                    }
                    else {
                      if (cRam_? == '\0') {
                        FUN_?();
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
                      PStack_9.Quadrant = (int32_t)(pVVar25->zeroVector).x;
                      PStack_9.FirstAxisSign = (int32_t)(pVVar25->zeroVector).y;
                      PStack_9.SecondAxisSign = (int32_t)(pVVar25->zeroVector).z;
                    }
                    iVar26 = PStack_9.SecondAxisSign;
                    dVar27 = _UNK_?;
                    fVar24 = _UNK_?;
                    uVar4 = 2;
                    lVar28 = 0x18;
                    iVar29 = PStack_9.FirstAxisSign;
                    iVar30 = PStack_9.Quadrant;
                    while( true ) {
                      if ((this_00->fields)._size <= (int)uVar4) {
                        return 0;
                      }
                      if ((uint)(this_00->fields)._size <= uVar4) goto code_?;
                      pVVar10 = (this_00->fields)._items;
                      if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
                      if ((uint)pVVar10->max_length <= uVar4) goto code_?;
                      if ((this_00->fields)._size == 0) goto code_?;
                      if ((int)pVVar10->max_length == 0) goto code_?;
                      uVar31 = pVVar10->vector[0].x;
                      uVar32 = pVVar10->vector[0].y;
                      fVar33 = (float)*(undefined8 *)((longlong)&pVVar10->vector[0].x + lVar28) -
                               (float)uVar31;
                      fVar23 = *(float *)((longlong)&pVVar10->vector[0].z + lVar28) -
                               pVVar10->vector[0].z;
                      fVar22 = *(float *)((longlong)&pVVar10->vector[0].y + lVar28) - (float)uVar32;
                      uStack_20 = CONCAT44(fVar22,fVar33);
                      fStack_34 = fVar23;
                      fVar21 = (float)FUN_?();
                      if (fVar12 < fVar21) {
                        fVar23 = fVar23 / fVar21;
                        PStack_9.FirstAxisSign = (int32_t)(fVar22 / fVar21);
                        PStack_9.Quadrant = (int32_t)(fVar33 / fVar21);
                      }
                      else {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
                        PStack_9.Quadrant = (int32_t)(pVVar25->zeroVector).x;
                        PStack_9.FirstAxisSign = (int32_t)(pVVar25->zeroVector).y;
                        fVar23 = (pVVar25->zeroVector).z;
                      }
                      fVar23 = (float)PStack_9.FirstAxisSign * (float)iVar29 +
                               (float)PStack_9.Quadrant * (float)iVar30 + fVar23 * (float)iVar26;
                      if ((fVar23 < fVar24) && (dVar27 < (double)fVar23)) break;
                      uVar4 = uVar4 + 1;
                      lVar28 = lVar28 + 0xc;
                    }
                    if ((uint)(this_00->fields)._size <= uVar4) goto code_?;
                    pVVar10 = (this_00->fields)._items;
                    if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
                    if (uVar4 < (uint)pVVar10->max_length) {
                      uStack_20._0_4_ = pVVar10->vector[(int)uVar4].x;
                      uStack_20._4_4_ = pVVar10->vector[(int)uVar4].y;
                      fStack_34 = pVVar10->vector[(int)uVar4].z;
                      FUN_?(this_01,&uStack_20,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                      pVVar10 = (Vector3__Array *)FUN_?(this_01);
                      *planeVertices = pVVar10;
                      func_?(planeVertices);
                      return 1;
                    }
                  }
code_?:
                  FUN_?();
                  pcVar16 = (code *)swi(3);
                  bVar17 = (*pcVar16)();
                  return bVar17;
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
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
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
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7._0_4_ = (pVVar6->forwardVector).x;
  uVar7._4_4_ = (pVVar6->forwardVector).y;
  fVar3 = (pVVar6->forwardVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar6->leftVector).x;
  uStack_8._4_4_ = (pVVar6->leftVector).y;
  fStack_9 = (pVVar6->leftVector).z;
  uStack_10 = 0;
  uStack_11 = 0;
  pcVar12 = pcRam_?;
  uStack_13 = uVar7;
  fStack_14 = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar12 = (code *)swi(3);
    pQVar15 = (Quaternion *)(*pcVar12)();
    return pQVar15;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_13,&uStack_8,&uStack_10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar16._0_4_ = (pVVar6->upVector).x;
  uVar16._4_4_ = (pVVar6->upVector).y;
  fVar3 = (pVVar6->upVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_17 = CONCAT44(uStack_17._4_4_,fVar3);
  uStack_18._0_4_ = (pVVar6->backVector).x;
  uStack_18._4_4_ = (pVVar6->backVector).y;
  fStack_19 = (pVVar6->backVector).z;
  uStack_20 = 0;
  uStack_21 = 0;
  pcVar12 = pcRam_?;
  uStack_22 = uVar16;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar12 = (code *)swi(3);
    pQVar15 = (Quaternion *)(*pcVar12)();
    return pQVar15;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_22,&uStack_18,&uStack_20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar23._0_4_ = (pVVar6->upVector).x;
  uVar23._4_4_ = (pVVar6->upVector).y;
  fVar3 = (pVVar6->upVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_13._0_4_ = (pVVar6->rightVector).x;
  uStack_13._4_4_ = (pVVar6->rightVector).y;
  fStack_14 = (pVVar6->rightVector).z;
  uStack_24 = 0;
  uStack_25 = 0;
  pcVar12 = pcRam_?;
  uStack_8 = uVar23;
  fStack_9 = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar12 = (code *)swi(3);
    pQVar15 = (Quaternion *)(*pcVar12)();
    return pQVar15;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_8,&uStack_13,&uStack_24);
  uVar16 = uStack_21;
  uVar7 = uStack_20;
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    uStack_22 = uStack_20;
    uStack_17 = uStack_21;
    uStack_20 = 0;
    uStack_21 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_22,&uStack_20);
    uStack_24 = uVar7;
    uStack_25 = uVar16;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_24,&uStack_10);
    fVar26 = (uStack_21._4_4_ * (float)uStack_10 + (float)uStack_20 * uStack_11._4_4_ +
             uStack_20._4_4_ * (float)uStack_11) - (float)uStack_21 * uStack_10._4_4_;
    fVar4 = (uStack_21._4_4_ * uStack_10._4_4_ + uStack_20._4_4_ * uStack_11._4_4_ +
             (float)uStack_21 * (float)uStack_10) - (float)uStack_20 * (float)uStack_11;
    fVar5 = ((uStack_21._4_4_ * uStack_11._4_4_ - (float)uStack_20 * (float)uStack_10) -
             uStack_20._4_4_ * uStack_10._4_4_) - (float)uStack_21 * (float)uStack_11;
    fVar3 = (uStack_21._4_4_ * (float)uStack_11 + (float)uStack_21 * uStack_11._4_4_ +
            (float)uStack_20 * uStack_10._4_4_) - uStack_20._4_4_ * (float)uStack_10;
    break;
  case Face__Enum_Front:
    uStack_10 = uStack_20;
    uStack_11 = uStack_21;
    uStack_20 = 0;
    uStack_21 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_10,&uStack_20);
    __return_storage_ptr__->x = (float)uStack_20;
    __return_storage_ptr__->y = uStack_20._4_4_;
    __return_storage_ptr__->z = (float)uStack_21;
    __return_storage_ptr__->w = uStack_21._4_4_;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    uStack_18 = uStack_20;
    fStack_19 = (float)uStack_21;
    uStack_27 = uStack_21._4_4_;
    uStack_22 = 0;
    uStack_17 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_18,&uStack_22);
    uVar16 = uStack_11;
    uVar7 = uStack_10;
    uStack_24 = uStack_10;
    uStack_25 = uStack_11;
    uStack_20 = 0;
    uStack_21 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_24,&uStack_20);
    fVar4 = ((float)uStack_20 * uStack_17._4_4_ + uStack_21._4_4_ * (float)uStack_22 +
             (float)uStack_21 * uStack_22._4_4_) - uStack_20._4_4_ * (float)uStack_17;
    fVar5 = (uStack_20._4_4_ * uStack_17._4_4_ + uStack_21._4_4_ * uStack_22._4_4_ +
             (float)uStack_20 * (float)uStack_17) - (float)uStack_21 * (float)uStack_22;
    fVar26 = ((float)uStack_21 * uStack_17._4_4_ + uStack_21._4_4_ * (float)uStack_17 +
             uStack_20._4_4_ * (float)uStack_22) - (float)uStack_20 * uStack_22._4_4_;
    fVar3 = ((uStack_21._4_4_ * uStack_17._4_4_ - (float)uStack_20 * (float)uStack_22) -
            uStack_20._4_4_ * uStack_22._4_4_) - (float)uStack_21 * (float)uStack_17;
    uStack_22 = uVar7;
    uStack_17 = uVar16;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_22,&uStack_10);
    __return_storage_ptr__->x =
         (fVar3 * (float)uStack_10 + fVar4 * uStack_11._4_4_ + fVar5 * (float)uStack_11) -
         fVar26 * uStack_10._4_4_;
    __return_storage_ptr__->y =
         (fVar5 * uStack_11._4_4_ + fVar3 * uStack_10._4_4_ + fVar26 * (float)uStack_10) -
         fVar4 * (float)uStack_11;
    __return_storage_ptr__->z =
         (fVar26 * uStack_11._4_4_ + fVar3 * (float)uStack_11 + fVar4 * uStack_10._4_4_) -
         fVar5 * (float)uStack_10;
    __return_storage_ptr__->w =
         ((fVar3 * uStack_11._4_4_ - fVar4 * (float)uStack_10) - fVar5 * uStack_10._4_4_) -
         fVar26 * (float)uStack_11;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    uStack_22 = uStack_20;
    uStack_17 = uStack_21;
    uStack_20 = 0;
    uStack_21 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_22,&uStack_20);
    fVar26 = ((float)uStack_20 * uStack_11._4_4_ + uStack_21._4_4_ * (float)uStack_10 +
             uStack_20._4_4_ * (float)uStack_11) - (float)uStack_21 * uStack_10._4_4_;
    fVar4 = (uStack_20._4_4_ * uStack_11._4_4_ + uStack_21._4_4_ * uStack_10._4_4_ +
             (float)uStack_21 * (float)uStack_10) - (float)uStack_20 * (float)uStack_11;
    fVar3 = ((float)uStack_21 * uStack_11._4_4_ + uStack_21._4_4_ * (float)uStack_11 +
            (float)uStack_20 * uStack_10._4_4_) - uStack_20._4_4_ * (float)uStack_10;
    fVar5 = ((uStack_21._4_4_ * uStack_11._4_4_ - (float)uStack_20 * (float)uStack_10) -
             uStack_20._4_4_ * uStack_10._4_4_) - (float)uStack_21 * (float)uStack_11;
    break;
  case Face__Enum_Right:
    uStack_18 = uStack_20;
    fStack_19 = (float)uStack_21;
    uStack_27 = uStack_21._4_4_;
    uStack_22 = 0;
    uStack_17 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_18,&uStack_22);
    uStack_24 = uStack_10;
    uStack_25 = uStack_11;
    uStack_20 = 0;
    uStack_21 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar12 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar12)();
      return pQVar15;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&uStack_24,&uStack_20);
    fVar26 = ((float)uStack_20 * uStack_17._4_4_ + uStack_21._4_4_ * (float)uStack_22 +
             (float)uStack_21 * uStack_22._4_4_) - uStack_20._4_4_ * (float)uStack_17;
    fVar4 = (uStack_20._4_4_ * uStack_17._4_4_ + uStack_21._4_4_ * uStack_22._4_4_ +
             (float)uStack_20 * (float)uStack_17) - (float)uStack_21 * (float)uStack_22;
    fVar3 = ((float)uStack_21 * uStack_17._4_4_ + uStack_21._4_4_ * (float)uStack_17 +
            uStack_20._4_4_ * (float)uStack_22) - (float)uStack_20 * uStack_22._4_4_;
    fVar5 = ((uStack_21._4_4_ * uStack_17._4_4_ - (float)uStack_20 * (float)uStack_22) -
             uStack_20._4_4_ * uStack_22._4_4_) - (float)uStack_21 * (float)uStack_17;
  }
  __return_storage_ptr__->x = fVar26;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar3;
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
    if (corners != (Vector3__Array *)0x0) {
      if ((int)corners->max_length != 0) {
        if (triangleVertices == (Vector3__Array *)0x0) break;
        if ((int)triangleVertices->max_length != 0) {
          fVar1 = corners->vector[0].y;
          triangleVertices->vector[0].x = corners->vector[0].x;
          triangleVertices->vector[0].y = fVar1;
          triangleVertices->vector[0].z = corners->vector[0].z;
          if ((1 < (uint)corners->max_length) && (1 < (uint)triangleVertices->max_length)) {
            fVar1 = corners->vector[1].y;
            triangleVertices->vector[1].x = corners->vector[1].x;
            triangleVertices->vector[1].y = fVar1;
            triangleVertices->vector[1].z = corners->vector[1].z;
            if ((2 < (uint)corners->max_length) && (2 < (uint)triangleVertices->max_length)) {
              fVar1 = corners->vector[2].y;
              triangleVertices->vector[2].x = corners->vector[2].x;
              triangleVertices->vector[2].y = fVar1;
              triangleVertices->vector[2].z = corners->vector[2].z;
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  case 1:
    if (corners != (Vector3__Array *)0x0) {
      if ((int)corners->max_length != 0) {
        if (triangleVertices == (Vector3__Array *)0x0) break;
        if ((int)triangleVertices->max_length != 0) {
          fVar1 = corners->vector[0].y;
          triangleVertices->vector[0].x = corners->vector[0].x;
          triangleVertices->vector[0].y = fVar1;
          triangleVertices->vector[0].z = corners->vector[0].z;
          if ((2 < (uint)corners->max_length) && (1 < (uint)triangleVertices->max_length)) {
            fVar1 = corners->vector[2].y;
            triangleVertices->vector[1].x = corners->vector[2].x;
            triangleVertices->vector[1].y = fVar1;
            triangleVertices->vector[1].z = corners->vector[2].z;
            if ((3 < (uint)corners->max_length) && (2 < (uint)triangleVertices->max_length)) {
              fVar1 = corners->vector[3].y;
              triangleVertices->vector[2].x = corners->vector[3].x;
              triangleVertices->vector[2].y = fVar1;
              triangleVertices->vector[2].z = corners->vector[3].z;
              return;
            }
          }
        }
      }
      goto code_?;
    }
    break;
  case 2:
    if (corners != (Vector3__Array *)0x0) {
      if (4 < (uint)corners->max_length) {
        if (triangleVertices == (Vector3__Array *)0x0) break;
        if ((int)triangleVertices->max_length != 0) {
          fVar1 = corners->vector[4].y;
          triangleVertices->vector[0].x = corners->vector[4].x;
          triangleVertices->vector[0].y = fVar1;
          triangleVertices->vector[0].z = corners->vector[4].z;
          if ((5 < (uint)corners->max_length) && (1 < (uint)triangleVertices->max_length)) {
            fVar1 = corners->vector[5].y;
            triangleVertices->vector[1].x = corners->vector[5].x;
            triangleVertices->vector[1].y = fVar1;
            triangleVertices->vector[1].z = corners->vector[5].z;
            if ((6 < (uint)corners->max_length) && (2 < (uint)triangleVertices->max_length)) {
              fVar1 = corners->vector[6].y;
              triangleVertices->vector[2].x = corners->vector[6].x;
              triangleVertices->vector[2].y = fVar1;
              triangleVertices->vector[2].z = corners->vector[6].z;
              return;
            }
          }
        }
      }
      goto code_?;
    }
    break;
  case 3:
    if (corners != (Vector3__Array *)0x0) {
      if (4 < (uint)corners->max_length) {
        if (triangleVertices == (Vector3__Array *)0x0) break;
        if ((int)triangleVertices->max_length != 0) {
          fVar1 = corners->vector[4].y;
          triangleVertices->vector[0].x = corners->vector[4].x;
          triangleVertices->vector[0].y = fVar1;
          triangleVertices->vector[0].z = corners->vector[4].z;
          if ((6 < (uint)corners->max_length) && (1 < (uint)triangleVertices->max_length)) {
            fVar1 = corners->vector[6].y;
            triangleVertices->vector[1].x = corners->vector[6].x;
            triangleVertices->vector[1].y = fVar1;
            triangleVertices->vector[1].z = corners->vector[6].z;
            if ((7 < (uint)corners->max_length) && (2 < (uint)triangleVertices->max_length)) {
              fVar1 = corners->vector[7].y;
              triangleVertices->vector[2].x = corners->vector[7].x;
              triangleVertices->vector[2].y = fVar1;
              triangleVertices->vector[2].z = corners->vector[7].z;
              return;
            }
          }
        }
      }
      goto code_?;
    }
    break;
  default:
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3[] GetVertices(Cube) */

Vector3__Array * Assembly-CSharp.dll::Cube::Cube_GetVertices(Cube *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube == (Cube *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3__Array *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  byteArray = (cube->fields)._.byteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                      (byteArray,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            ((List_1_UnityEngine_Vector3_ *)this,(IEnumerable_1_UnityEngine_Vector3_ *)pVVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    if ((uint)(this->fields)._size < 8) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      pVVar2 = (Vector3__Array *)(*pcVar1)();
      return pVVar2;
    }
    pPVar4 = (this->fields)._items;
    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      if ((uint)pPVar4->max_length < 8) goto code_?;
      iVar5 = pPVar4->vector[7].Quadrant;
      iVar6 = pPVar4->vector[7].FirstAxisSign;
      iVar7 = pPVar4->vector[7].SecondAxisSign;
      piVar8 = &(this->fields)._version;
      *piVar8 = *piVar8 + 1;
      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
        uVar9 = (this->fields)._size;
        if (uVar9 < (uint)pPVar4->max_length) {
          (this->fields)._size = uVar9 + 1;
          if ((uint)pPVar4->max_length <= uVar9) goto code_?;
          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                     pMVar3->klass->rgctx_data[0xe].method);
        }
        pMVar3 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if ((uint)(this->fields)._size < 7) goto code_?;
        pPVar4 = (this->fields)._items;
        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
          if ((uint)pPVar4->max_length < 7) goto code_?;
          iVar5 = pPVar4->vector[6].Quadrant;
          iVar6 = pPVar4->vector[6].FirstAxisSign;
          iVar7 = pPVar4->vector[6].SecondAxisSign;
          piVar8 = &(this->fields)._version;
          *piVar8 = *piVar8 + 1;
          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
            uVar9 = (this->fields)._size;
            if (uVar9 < (uint)pPVar4->max_length) {
              (this->fields)._size = uVar9 + 1;
              if ((uint)pPVar4->max_length <= uVar9) goto code_?;
              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                         pMVar3->klass->rgctx_data[0xe].method);
            }
            pMVar3 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            if ((uint)(this->fields)._size < 2) goto code_?;
            pPVar4 = (this->fields)._items;
            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
              if ((uint)pPVar4->max_length < 2) goto code_?;
              iVar5 = pPVar4->vector[1].Quadrant;
              iVar6 = pPVar4->vector[1].FirstAxisSign;
              iVar7 = pPVar4->vector[1].SecondAxisSign;
              piVar8 = &(this->fields)._version;
              *piVar8 = *piVar8 + 1;
              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                uVar9 = (this->fields)._size;
                if (uVar9 < (uint)pPVar4->max_length) {
                  (this->fields)._size = uVar9 + 1;
                  if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                ;
                if ((this->fields)._size == 0) goto code_?;
                pPVar4 = (this->fields)._items;
                if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                  if ((int)pPVar4->max_length == 0) goto code_?;
                  iVar5 = pPVar4->vector[0].Quadrant;
                  iVar6 = pPVar4->vector[0].FirstAxisSign;
                  iVar7 = pPVar4->vector[0].SecondAxisSign;
                  piVar8 = &(this->fields)._version;
                  *piVar8 = *piVar8 + 1;
                  if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                    uVar9 = (this->fields)._size;
                    if (uVar9 < (uint)pPVar4->max_length) {
                      (this->fields)._size = uVar9 + 1;
                      if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                      pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                      pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                      PlaneIdHelper+PlaneQuadrantInfo]::
                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                                 pMVar3->klass->rgctx_data[0xe].method);
                    }
                    pMVar3 = 
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                    ;
                    if ((uint)(this->fields)._size < 6) goto code_?;
                    pPVar4 = (this->fields)._items;
                    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                      if ((uint)pPVar4->max_length < 6) goto code_?;
                      iVar5 = pPVar4->vector[5].Quadrant;
                      iVar6 = pPVar4->vector[5].FirstAxisSign;
                      iVar7 = pPVar4->vector[5].SecondAxisSign;
                      piVar8 = &(this->fields)._version;
                      *piVar8 = *piVar8 + 1;
                      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar9 = (this->fields)._size;
                        if (uVar9 < (uint)pPVar4->max_length) {
                          (this->fields)._size = uVar9 + 1;
                          if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                          PlaneIdHelper+PlaneQuadrantInfo]::
                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                          &stack0xffffffffffffffe8,
                                     pMVar3->klass->rgctx_data[0xe].method);
                        }
                        pMVar3 = 
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                        ;
                        if ((uint)(this->fields)._size < 5) goto code_?;
                        pPVar4 = (this->fields)._items;
                        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                          if ((uint)pPVar4->max_length < 5) goto code_?;
                          iVar5 = pPVar4->vector[4].Quadrant;
                          iVar6 = pPVar4->vector[4].FirstAxisSign;
                          iVar7 = pPVar4->vector[4].SecondAxisSign;
                          piVar8 = &(this->fields)._version;
                          *piVar8 = *piVar8 + 1;
                          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar9 = (this->fields)._size;
                            if (uVar9 < (uint)pPVar4->max_length) {
                              (this->fields)._size = uVar9 + 1;
                              if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                              &stack0xffffffffffffffe8,
                                         pMVar3->klass->rgctx_data[0xe].method);
                            }
                            pMVar3 = 
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                            ;
                            if ((uint)(this->fields)._size < 4) goto code_?;
                            pPVar4 = (this->fields)._items;
                            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                              if ((uint)pPVar4->max_length < 4) goto code_?;
                              iVar5 = pPVar4->vector[3].Quadrant;
                              iVar6 = pPVar4->vector[3].FirstAxisSign;
                              iVar7 = pPVar4->vector[3].SecondAxisSign;
                              piVar8 = &(this->fields)._version;
                              *piVar8 = *piVar8 + 1;
                              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                uVar9 = (this->fields)._size;
                                if (uVar9 < (uint)pPVar4->max_length) {
                                  (this->fields)._size = uVar9 + 1;
                                  if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                  PlaneIdHelper+PlaneQuadrantInfo]::
                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                  &stack0xffffffffffffffe8,
                                             pMVar3->klass->rgctx_data[0xe].method);
                                }
                                pMVar3 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                ;
                                if ((uint)(this->fields)._size < 3) goto code_?;
                                pPVar4 = (this->fields)._items;
                                if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                  if ((uint)pPVar4->max_length < 3) goto code_?;
                                  iVar5 = pPVar4->vector[2].Quadrant;
                                  iVar6 = pPVar4->vector[2].FirstAxisSign;
                                  iVar7 = pPVar4->vector[2].SecondAxisSign;
                                  piVar8 = &(this->fields)._version;
                                  *piVar8 = *piVar8 + 1;
                                  if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar9 = (this->fields)._size;
                                    if (uVar9 < (uint)pPVar4->max_length) {
                                      (this->fields)._size = uVar9 + 1;
                                      if ((uint)pPVar4->max_length <= uVar9)
                                      goto code_?;
                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                      pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                      pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                      PlaneIdHelper+PlaneQuadrantInfo]::
                                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                      &stack0xffffffffffffffe8,
                                                 pMVar3->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar3 = 
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                    ;
                                    if ((uint)(this->fields)._size < 5) goto code_?;
                                    pPVar4 = (this->fields)._items;
                                    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                      if ((uint)pPVar4->max_length < 5) goto code_?;
                                      iVar5 = pPVar4->vector[4].Quadrant;
                                      iVar6 = pPVar4->vector[4].FirstAxisSign;
                                      iVar7 = pPVar4->vector[4].SecondAxisSign;
                                      piVar8 = &(this->fields)._version;
                                      *piVar8 = *piVar8 + 1;
                                      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                        uVar9 = (this->fields)._size;
                                        if (uVar9 < (uint)pPVar4->max_length) {
                                          (this->fields)._size = uVar9 + 1;
                                          if ((uint)pPVar4->max_length <= uVar9)
                                          goto code_?;
                                          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                          PlaneIdHelper+PlaneQuadrantInfo]::
                                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                          &stack0xffffffffffffffe8,
                                                     pMVar3->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar3 = 
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                        ;
                                        if ((uint)(this->fields)._size < 8)
                                        goto code_?;
                                        pPVar4 = (this->fields)._items;
                                        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                        {
                                          if ((uint)pPVar4->max_length < 8)
                                          goto code_?;
                                          iVar5 = pPVar4->vector[7].Quadrant;
                                          iVar6 = pPVar4->vector[7].FirstAxisSign;
                                          iVar7 = pPVar4->vector[7].SecondAxisSign;
                                          piVar8 = &(this->fields)._version;
                                          *piVar8 = *piVar8 + 1;
                                          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                        0x0) {
                                            uVar9 = (this->fields)._size;
                                            if (uVar9 < (uint)pPVar4->max_length) {
                                              (this->fields)._size = uVar9 + 1;
                                              if ((uint)pPVar4->max_length <= uVar9)
                                              goto code_?;
                                              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::List`1[RTG
                                              ::PlaneIdHelper+PlaneQuadrantInfo]::
                                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                              &stack0xffffffffffffffe8,
                                                         pMVar3->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar3 = 
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                            ;
                                            if ((this->fields)._size == 0)
                                            goto code_?;
                                            pPVar4 = (this->fields)._items;
                                            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                          0x0) {
                                              if ((int)pPVar4->max_length == 0)
                                              goto code_?;
                                              iVar5 = pPVar4->vector[0].Quadrant;
                                              iVar6 = pPVar4->vector[0].FirstAxisSign;
                                              iVar7 = pPVar4->vector[0].SecondAxisSign;
                                              piVar8 = &(this->fields)._version;
                                              *piVar8 = *piVar8 + 1;
                                              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array
                                                             *)0x0) {
                                                uVar9 = (this->fields)._size;
                                                if (uVar9 < (uint)pPVar4->max_length) {
                                                  (this->fields)._size = uVar9 + 1;
                                                  if ((uint)pPVar4->max_length <= uVar9)
                                                  goto code_?;
                                                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar3->klass->rgctx_data[0xe].method);
                                                }
                                                pMVar3 = 
                                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                ;
                                                if ((uint)(this->fields)._size < 4)
                                                goto code_?;
                                                pPVar4 = (this->fields)._items;
                                                if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                  if ((uint)pPVar4->max_length < 4)
                                                  goto code_?;
                                                  iVar5 = pPVar4->vector[3].Quadrant;
                                                  iVar6 = pPVar4->vector[3].FirstAxisSign;
                                                  iVar7 = pPVar4->vector[3].SecondAxisSign;
                                                  piVar8 = &(this->fields)._version;
                                                  *piVar8 = *piVar8 + 1;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar3->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar3 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 7)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 7)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[6].Quadrant;
                                                    iVar6 = pPVar4->vector[6].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[6].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar3->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar3 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 6)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 6)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[5].Quadrant;
                                                    iVar6 = pPVar4->vector[5].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[5].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar3->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar3 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 3)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 3)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[2].Quadrant;
                                                    iVar6 = pPVar4->vector[2].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[2].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar3->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar3 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 2)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 2) {
code_?:
                                                      FUN_?();
                                                      pcVar1 = (code *)swi(3);
                                                      pVVar2 = (Vector3__Array *)(*pcVar1)();
                                                      return pVVar2;
                                                    }
                                                    iVar5 = pPVar4->vector[1].Quadrant;
                                                    iVar6 = pPVar4->vector[1].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[1].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar3->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar3 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ;
                                                  if ((this->fields)._size != 0) {
                                                    pvVar10 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[3].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0
                                                     ) {
                                                    pvVar10 = (void *)FUN_?(pvVar10);
                                                  }
                                                  pVVar2 = (Vector3__Array *)FUN_?(pvVar10);
                                                  mscorlib.dll::System::Array::Array_Copy_3
                                                            ((Array *)(this->fields)._items,0,
                                                             (Array *)pVVar2,0,(this->fields)._size
                                                             ,(MethodInfo *)0x0);
                                                  return pVVar2;
                                                  }
                                                  pvVar10 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[2].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0
                                                     ) {
                                                    pvVar10 = (void *)FUN_?(pvVar10);
                                                  }
                                                  if (*(int *)((longlong)pvVar10 + 0xe4) == 0) {
                                                    FUN_?(pvVar10);
                                                  }
                                                  pIVar11 = pMVar3->klass->rgctx_data[2].klass;
                                                  if ((pIVar11->field_0x135 & 1) == 0) {
                                                    pIVar11 = (Il2CppClass *)FUN_?(pIVar11);
                                                  }
                                                  return *(Vector3__Array **)pIVar11->static_fields;
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar1)();
  return pVVar2;
}


/* Vector3[] GetVerticesWorldAxisAligned(Cube, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVerticesWorldAxisAligned
          (Cube *cube,IntVector *iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    byteArray = (cube->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                       (byteArray,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = Cube_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    uVar2 = 0;
    sVar3 = iVector->x;
    sVar4 = iVector->y;
    sVar5 = iVector->z;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar6 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          return pVVar1;
        }
        if ((uint)pVVar1->max_length <= uVar2) break;
        uVar7 = pVVar6->x;
        uVar8 = pVVar6->y;
        uVar2 = uVar2 + 1;
        pVVar6->x = (float)(int)sVar3 + (float)uVar7;
        pVVar6->y = (float)(int)sVar4 + (float)uVar8;
        pVVar6->z = (float)(int)sVar5 + pVVar6->z;
        pVVar6 = pVVar6 + 1;
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      pVVar1 = (Vector3__Array *)(*pcVar9)();
      return pVVar1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar9)();
  return pVVar1;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVertices_1(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            ((List_1_UnityEngine_Vector3_ *)this,(IEnumerable_1_UnityEngine_Vector3_ *)corners,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    if ((uint)(this->fields)._size < 8) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3__Array *)(*pcVar2)();
      return pVVar3;
    }
    pPVar4 = (this->fields)._items;
    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      if ((uint)pPVar4->max_length < 8) goto code_?;
      iVar5 = pPVar4->vector[7].Quadrant;
      iVar6 = pPVar4->vector[7].FirstAxisSign;
      iVar7 = pPVar4->vector[7].SecondAxisSign;
      piVar8 = &(this->fields)._version;
      *piVar8 = *piVar8 + 1;
      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
        uVar9 = (this->fields)._size;
        if (uVar9 < (uint)pPVar4->max_length) {
          (this->fields)._size = uVar9 + 1;
          if ((uint)pPVar4->max_length <= uVar9) goto code_?;
          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                     pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if ((uint)(this->fields)._size < 7) goto code_?;
        pPVar4 = (this->fields)._items;
        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
          if ((uint)pPVar4->max_length < 7) goto code_?;
          iVar5 = pPVar4->vector[6].Quadrant;
          iVar6 = pPVar4->vector[6].FirstAxisSign;
          iVar7 = pPVar4->vector[6].SecondAxisSign;
          piVar8 = &(this->fields)._version;
          *piVar8 = *piVar8 + 1;
          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
            uVar9 = (this->fields)._size;
            if (uVar9 < (uint)pPVar4->max_length) {
              (this->fields)._size = uVar9 + 1;
              if ((uint)pPVar4->max_length <= uVar9) goto code_?;
              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                         pMVar1->klass->rgctx_data[0xe].method);
            }
            pMVar1 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            if ((uint)(this->fields)._size < 2) goto code_?;
            pPVar4 = (this->fields)._items;
            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
              if ((uint)pPVar4->max_length < 2) goto code_?;
              iVar5 = pPVar4->vector[1].Quadrant;
              iVar6 = pPVar4->vector[1].FirstAxisSign;
              iVar7 = pPVar4->vector[1].SecondAxisSign;
              piVar8 = &(this->fields)._version;
              *piVar8 = *piVar8 + 1;
              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                uVar9 = (this->fields)._size;
                if (uVar9 < (uint)pPVar4->max_length) {
                  (this->fields)._size = uVar9 + 1;
                  if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                             pMVar1->klass->rgctx_data[0xe].method);
                }
                pMVar1 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                ;
                if ((this->fields)._size == 0) goto code_?;
                pPVar4 = (this->fields)._items;
                if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                  if ((int)pPVar4->max_length == 0) goto code_?;
                  iVar5 = pPVar4->vector[0].Quadrant;
                  iVar6 = pPVar4->vector[0].FirstAxisSign;
                  iVar7 = pPVar4->vector[0].SecondAxisSign;
                  piVar8 = &(this->fields)._version;
                  *piVar8 = *piVar8 + 1;
                  if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                    uVar9 = (this->fields)._size;
                    if (uVar9 < (uint)pPVar4->max_length) {
                      (this->fields)._size = uVar9 + 1;
                      if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                      pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                      pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                      PlaneIdHelper+PlaneQuadrantInfo]::
                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                                 pMVar1->klass->rgctx_data[0xe].method);
                    }
                    pMVar1 = 
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                    ;
                    if ((uint)(this->fields)._size < 6) goto code_?;
                    pPVar4 = (this->fields)._items;
                    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                      if ((uint)pPVar4->max_length < 6) goto code_?;
                      iVar5 = pPVar4->vector[5].Quadrant;
                      iVar6 = pPVar4->vector[5].FirstAxisSign;
                      iVar7 = pPVar4->vector[5].SecondAxisSign;
                      piVar8 = &(this->fields)._version;
                      *piVar8 = *piVar8 + 1;
                      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar9 = (this->fields)._size;
                        if (uVar9 < (uint)pPVar4->max_length) {
                          (this->fields)._size = uVar9 + 1;
                          if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                          PlaneIdHelper+PlaneQuadrantInfo]::
                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                          &stack0xffffffffffffffe8,
                                     pMVar1->klass->rgctx_data[0xe].method);
                        }
                        pMVar1 = 
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                        ;
                        if ((uint)(this->fields)._size < 5) goto code_?;
                        pPVar4 = (this->fields)._items;
                        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                          if ((uint)pPVar4->max_length < 5) goto code_?;
                          iVar5 = pPVar4->vector[4].Quadrant;
                          iVar6 = pPVar4->vector[4].FirstAxisSign;
                          iVar7 = pPVar4->vector[4].SecondAxisSign;
                          piVar8 = &(this->fields)._version;
                          *piVar8 = *piVar8 + 1;
                          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar9 = (this->fields)._size;
                            if (uVar9 < (uint)pPVar4->max_length) {
                              (this->fields)._size = uVar9 + 1;
                              if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                              &stack0xffffffffffffffe8,
                                         pMVar1->klass->rgctx_data[0xe].method);
                            }
                            pMVar1 = 
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                            ;
                            if ((uint)(this->fields)._size < 4) goto code_?;
                            pPVar4 = (this->fields)._items;
                            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                              if ((uint)pPVar4->max_length < 4) goto code_?;
                              iVar5 = pPVar4->vector[3].Quadrant;
                              iVar6 = pPVar4->vector[3].FirstAxisSign;
                              iVar7 = pPVar4->vector[3].SecondAxisSign;
                              piVar8 = &(this->fields)._version;
                              *piVar8 = *piVar8 + 1;
                              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                uVar9 = (this->fields)._size;
                                if (uVar9 < (uint)pPVar4->max_length) {
                                  (this->fields)._size = uVar9 + 1;
                                  if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                  PlaneIdHelper+PlaneQuadrantInfo]::
                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                  &stack0xffffffffffffffe8,
                                             pMVar1->klass->rgctx_data[0xe].method);
                                }
                                pMVar1 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                ;
                                if ((uint)(this->fields)._size < 3) goto code_?;
                                pPVar4 = (this->fields)._items;
                                if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                  if ((uint)pPVar4->max_length < 3) goto code_?;
                                  iVar5 = pPVar4->vector[2].Quadrant;
                                  iVar6 = pPVar4->vector[2].FirstAxisSign;
                                  iVar7 = pPVar4->vector[2].SecondAxisSign;
                                  piVar8 = &(this->fields)._version;
                                  *piVar8 = *piVar8 + 1;
                                  if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar9 = (this->fields)._size;
                                    if (uVar9 < (uint)pPVar4->max_length) {
                                      (this->fields)._size = uVar9 + 1;
                                      if ((uint)pPVar4->max_length <= uVar9)
                                      goto code_?;
                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                      pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                      pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                      PlaneIdHelper+PlaneQuadrantInfo]::
                                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                      &stack0xffffffffffffffe8,
                                                 pMVar1->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar1 = 
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                    ;
                                    if ((uint)(this->fields)._size < 5) goto code_?;
                                    pPVar4 = (this->fields)._items;
                                    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                      if ((uint)pPVar4->max_length < 5) goto code_?;
                                      iVar5 = pPVar4->vector[4].Quadrant;
                                      iVar6 = pPVar4->vector[4].FirstAxisSign;
                                      iVar7 = pPVar4->vector[4].SecondAxisSign;
                                      piVar8 = &(this->fields)._version;
                                      *piVar8 = *piVar8 + 1;
                                      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                        uVar9 = (this->fields)._size;
                                        if (uVar9 < (uint)pPVar4->max_length) {
                                          (this->fields)._size = uVar9 + 1;
                                          if ((uint)pPVar4->max_length <= uVar9)
                                          goto code_?;
                                          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                          PlaneIdHelper+PlaneQuadrantInfo]::
                                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                          &stack0xffffffffffffffe8,
                                                     pMVar1->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar1 = 
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                        ;
                                        if ((uint)(this->fields)._size < 8)
                                        goto code_?;
                                        pPVar4 = (this->fields)._items;
                                        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                        {
                                          if ((uint)pPVar4->max_length < 8)
                                          goto code_?;
                                          iVar5 = pPVar4->vector[7].Quadrant;
                                          iVar6 = pPVar4->vector[7].FirstAxisSign;
                                          iVar7 = pPVar4->vector[7].SecondAxisSign;
                                          piVar8 = &(this->fields)._version;
                                          *piVar8 = *piVar8 + 1;
                                          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                        0x0) {
                                            uVar9 = (this->fields)._size;
                                            if (uVar9 < (uint)pPVar4->max_length) {
                                              (this->fields)._size = uVar9 + 1;
                                              if ((uint)pPVar4->max_length <= uVar9)
                                              goto code_?;
                                              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::List`1[RTG
                                              ::PlaneIdHelper+PlaneQuadrantInfo]::
                                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                              &stack0xffffffffffffffe8,
                                                         pMVar1->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar1 = 
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                            ;
                                            if ((this->fields)._size == 0)
                                            goto code_?;
                                            pPVar4 = (this->fields)._items;
                                            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                          0x0) {
                                              if ((int)pPVar4->max_length == 0)
                                              goto code_?;
                                              iVar5 = pPVar4->vector[0].Quadrant;
                                              iVar6 = pPVar4->vector[0].FirstAxisSign;
                                              iVar7 = pPVar4->vector[0].SecondAxisSign;
                                              piVar8 = &(this->fields)._version;
                                              *piVar8 = *piVar8 + 1;
                                              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array
                                                             *)0x0) {
                                                uVar9 = (this->fields)._size;
                                                if (uVar9 < (uint)pPVar4->max_length) {
                                                  (this->fields)._size = uVar9 + 1;
                                                  if ((uint)pPVar4->max_length <= uVar9)
                                                  goto code_?;
                                                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                }
                                                pMVar1 = 
                                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                ;
                                                if ((uint)(this->fields)._size < 4)
                                                goto code_?;
                                                pPVar4 = (this->fields)._items;
                                                if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                  if ((uint)pPVar4->max_length < 4)
                                                  goto code_?;
                                                  iVar5 = pPVar4->vector[3].Quadrant;
                                                  iVar6 = pPVar4->vector[3].FirstAxisSign;
                                                  iVar7 = pPVar4->vector[3].SecondAxisSign;
                                                  piVar8 = &(this->fields)._version;
                                                  *piVar8 = *piVar8 + 1;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 7)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 7)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[6].Quadrant;
                                                    iVar6 = pPVar4->vector[6].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[6].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 6)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 6)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[5].Quadrant;
                                                    iVar6 = pPVar4->vector[5].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[5].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 3)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 3)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[2].Quadrant;
                                                    iVar6 = pPVar4->vector[2].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[2].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 2)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 2) {
code_?:
                                                      FUN_?();
                                                      pcVar2 = (code *)swi(3);
                                                      pVVar3 = (Vector3__Array *)(*pcVar2)();
                                                      return pVVar3;
                                                    }
                                                    iVar5 = pPVar4->vector[1].Quadrant;
                                                    iVar6 = pPVar4->vector[1].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[1].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ;
                                                  if ((this->fields)._size != 0) {
                                                    pvVar10 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[3].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0
                                                     ) {
                                                    pvVar10 = (void *)FUN_?(pvVar10);
                                                  }
                                                  pVVar3 = (Vector3__Array *)FUN_?(pvVar10);
                                                  mscorlib.dll::System::Array::Array_Copy_3
                                                            ((Array *)(this->fields)._items,0,
                                                             (Array *)pVVar3,0,(this->fields)._size
                                                             ,(MethodInfo *)0x0);
                                                  return pVVar3;
                                                  }
                                                  pvVar10 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[2].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0
                                                     ) {
                                                    pvVar10 = (void *)FUN_?(pvVar10);
                                                  }
                                                  if (*(int *)((longlong)pvVar10 + 0xe4) == 0) {
                                                    FUN_?(pvVar10);
                                                  }
                                                  pIVar11 = pMVar1->klass->rgctx_data[2].klass;
                                                  if ((pIVar11->field_0x135 & 1) == 0) {
                                                    pIVar11 = (Il2CppClass *)FUN_?(pIVar11);
                                                  }
                                                  return *(Vector3__Array **)pIVar11->static_fields;
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar2)();
  return pVVar3;
}


/* Boolean IsCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCollapsed(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aPStack_1[0].m_Normal.x = 0.0;
  aPStack_1[0].m_Normal.y = 0.0;
  aPStack_1[0].m_Normal.z = 0.0;
  aPStack_1[0].m_Distance = 0.0;
  apVStackX_8[0] = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = Cube_GetPlaneVertices(corners,apVStackX_8,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  if (apVStackX_8[0] == (Vector3__Array *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  if ((((int)apVStackX_8[0]->max_length != 0) && (1 < (uint)apVStackX_8[0]->max_length)) &&
     (2 < (uint)apVStackX_8[0]->max_length)) {
    VStack_4.x = apVStackX_8[0]->vector[2].x;
    VStack_4.y = apVStackX_8[0]->vector[2].y;
    VStack_4.z = apVStackX_8[0]->vector[2].z;
    VStack_5.x = apVStackX_8[0]->vector[1].x;
    VStack_5.y = apVStackX_8[0]->vector[1].y;
    VStack_5.z = apVStackX_8[0]->vector[1].z;
    VStack_6.x = apVStackX_8[0]->vector[0].x;
    VStack_6.y = apVStackX_8[0]->vector[0].y;
    VStack_6.z = apVStackX_8[0]->vector[0].z;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              (aPStack_1,&VStack_6,&VStack_5,&VStack_4,in_stack_7);
    uVar8 = 0;
    if (corners == (Vector3__Array *)0x0) goto code_?;
    uVar9 = (uint)corners->max_length;
    pVVar10 = corners->vector;
    while( true ) {
      if ((int)uVar9 <= (int)uVar8) {
        return 1;
      }
      if (uVar9 <= uVar8) break;
      uVar11 = pVVar10->x;
      uVar12 = pVVar10->y;
      if (_UNK_? <
          (double)(float)((uint)((float)uVar12 * aPStack_1[0].m_Normal.y +
                                 (float)uVar11 * aPStack_1[0].m_Normal.x +
                                 pVVar10->z * aPStack_1[0].m_Normal.z + aPStack_1[0].m_Distance) &
                         _UNK_?)) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      pVVar10 = pVVar10 + 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsCornersValid(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCornersValid(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  face = Face__Enum_Top;
  while( true ) {
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
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
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  uVar2 = 0;
  pfVar3 = &pVVar1->vector[0].y;
  uVar4 = uVar2;
  if (pVVar1 != (Vector3__Array *)0x0) {
    while( true ) {
      if ((uint)pVVar1->max_length <= (uint)uVar2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      if (_UNK_? != *pfVar3) break;
      uVar2 = (ulonglong)((uint)uVar2 + 1);
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 3;
      if (3 < (longlong)uVar4) {
        return 1;
      }
    }
    return 0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsFaceCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceCollapsed(Vector3__Array *faceIndices,MethodInfo *method)

{
  fVar1 = _UNK_?;
  iVar2 = 0;
  if (faceIndices == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  while( true ) {
    if ((int)faceIndices->max_length <= iVar2) {
      return 0;
    }
    uVar5 = (iVar2 + 1) % (int)faceIndices->max_length;
    if ((uint)faceIndices->max_length <= uVar5) break;
    uVar6 = iVar2 % (int)faceIndices->max_length;
    if ((uint)faceIndices->max_length <= uVar6) break;
    uVar7 = faceIndices->vector[(int)uVar5].x;
    uVar8 = faceIndices->vector[(int)uVar6].x;
    uVar9 = faceIndices->vector[(int)uVar6].y;
    fStack_10 = faceIndices->vector[(int)uVar5].z - faceIndices->vector[(int)uVar6].z;
    uStack_11 = CONCAT44(faceIndices->vector[(int)uVar5].y - (float)uVar9,
                         (float)uVar7 - (float)uVar8);
    fVar12 = (float)FUN_?(&uStack_11);
    if (fVar12 < fVar1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsFaceValid(Vector3[], Face) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceValid
               (Vector3__Array *faceIndices,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (faceIndices != (Vector3__Array *)0x0) {
    if (1 < (uint)faceIndices->max_length) {
      uVar1 = faceIndices->vector[1].x;
      uVar2 = faceIndices->vector[1].y;
      uVar3 = faceIndices->vector[0].x;
      uVar4 = faceIndices->vector[0].y;
      fVar5 = faceIndices->vector[1].z - faceIndices->vector[0].z;
      aVStack_6[0].y = (float)uVar2 - (float)uVar4;
      aVStack_6[0].x = (float)uVar1 - (float)uVar3;
      aVStack_6[0].z = fVar5;
      fVar7 = (float)FUN_?(aVStack_6);
      fVar8 = _UNK_?;
      if (_UNK_? < fVar7) {
        fVar5 = fVar5 / fVar7;
        aVStack_6[0].y = ((float)uVar2 - (float)uVar4) / fVar7;
        aVStack_6[0].x = ((float)uVar1 - (float)uVar3) / fVar7;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        aVStack_6[0].x = (pVVar9->zeroVector).x;
        aVStack_6[0].y = (pVVar9->zeroVector).y;
        fVar5 = (pVVar9->zeroVector).z;
      }
      if (2 < (uint)faceIndices->max_length) {
        uVar10 = faceIndices->vector[2].x;
        uVar11 = faceIndices->vector[2].y;
        uVar12 = faceIndices->vector[1].x;
        uVar13 = faceIndices->vector[1].y;
        fVar7 = faceIndices->vector[2].z - faceIndices->vector[1].z;
        uStack_14 = CONCAT44((float)uVar11 - (float)uVar13,(float)uVar10 - (float)uVar12);
        fStack_15 = fVar7;
        fVar16 = (float)FUN_?(&uStack_14);
        if (fVar8 < fVar16) {
          fVar7 = fVar7 / fVar16;
          uStack_14 = CONCAT44(((float)uVar11 - (float)uVar13) / fVar16,
                               ((float)uVar10 - (float)uVar12) / fVar16);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_14._0_4_ = (pVVar9->zeroVector).x;
          uStack_14._4_4_ = (pVVar9->zeroVector).y;
          fVar7 = (pVVar9->zeroVector).z;
        }
        fVar16 = uStack_14._4_4_ * aVStack_6[0].x - (float)uStack_14 * aVStack_6[0].y;
        fVar17 = fVar7 * aVStack_6[0].y - uStack_14._4_4_ * fVar5;
        fVar7 = (float)uStack_14 * fVar5 - fVar7 * aVStack_6[0].x;
        aVStack_6[0].y = fVar7;
        aVStack_6[0].x = fVar17;
        aVStack_6[0].z = fVar16;
        fVar5 = (float)FUN_?(aVStack_6);
        if (fVar8 < fVar5) {
          fVar16 = fVar16 / fVar5;
          aVStack_6[0].y = fVar7 / fVar5;
          aVStack_6[0].x = fVar17 / fVar5;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          aVStack_6[0].x = (pVVar9->zeroVector).x;
          aVStack_6[0].y = (pVVar9->zeroVector).y;
          fVar16 = (pVVar9->zeroVector).z;
        }
        if ((int)faceIndices->max_length != 0) {
          uStack_14._0_4_ = faceIndices->vector[0].x;
          uStack_14._4_4_ = faceIndices->vector[0].y;
          fVar7 = aVStack_6[0].x;
          fVar17 = aVStack_6[0].y;
          fVar5 = faceIndices->vector[0].z;
          aVStack_6[0].z = fVar16;
          fVar18 = (float)FUN_?(aVStack_6);
          if (fVar8 < fVar18) {
            aVStack_6[0].x = fVar7 / fVar18;
            fVar19 = fVar16 / fVar18;
            aVStack_6[0].y = fVar17 / fVar18;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
            aVStack_6[0].x = (pVVar9->zeroVector).x;
            aVStack_6[0].y = (pVVar9->zeroVector).y;
            fVar19 = (pVVar9->zeroVector).z;
          }
          pVVar20 = faceIndices->vector;
          fVar21 = aVStack_6[0].y;
          fVar18 = aVStack_6[0].x;
          uVar22 = (uint)faceIndices->max_length;
          fVar23 = uStack_14._4_4_ * aVStack_6[0].y;
          uVar24 = 1;
          fVar25 = (float)uStack_14 * aVStack_6[0].x;
          while( true ) {
            pVVar20 = pVVar20 + 1;
            if ((int)uVar22 <= (int)uVar24) {
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__Cube,uVar24);
              }
              pVVar20 = Cube_GetFaceAxis(aVStack_6,face,(MethodInfo *)0x0);
              uVar26 = pVVar20->x;
              uVar27 = pVVar20->y;
              return fVar17 * (float)uVar27 + fVar7 * (float)uVar26 + fVar16 * pVVar20->z <= 0.0;
            }
            if (uVar22 <= uVar24) break;
            aVStack_6[0].x = pVVar20->x;
            aVStack_6[0].y = pVVar20->y;
            if (fVar8 < (float)((uint)(fVar21 * aVStack_6[0].y + fVar18 * aVStack_6[0].x +
                                        fVar19 * pVVar20->z +
                                       (float)((uint)(fVar23 + fVar25 + fVar5 * fVar19) ^
                                              _UNK_?)) & _UNK_?)) {
              return 0;
            }
            uVar24 = uVar24 + 1;
          }
        }
      }
    }
    FUN_?();
    pcVar28 = (code *)swi(3);
    bVar29 = (*pcVar28)();
    return bVar29;
  }
  FUN_?();
  pcVar28 = (code *)swi(3);
  bVar29 = (*pcVar28)();
  return bVar29;
}


/* Boolean IsLegal(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsLegal(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  pIVar1 = TypeRef__MV__WorldObject__Face;
  lStackX_20 = 0;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar1,1);
    plVar2 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar4);
    paramName = (String *)func_?(&StringLiteral_enumType);
    plVar2 = (longlong *)0x0;
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_00,uVar4);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?(plVar2);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    this = (Array *)(**(code **)(*plVar2 + 0x888))(plVar2);
    if (this == (Array *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pIStackX_18 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uVar7 = _UNK_?;
    dVar8 = _UNK_?;
    uStack_9 = 0;
    ppIStack_10 = &pIStackX_18;
    plStack_11 = &lStackX_20;
    while (pIStackX_18 != (IEnumerator *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar12 == '\0') {
        lStackX_20 = FUN_?(pIStackX_18,TypeInfo__System__IDisposable);
        if (lStackX_20 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
        }
        return 1;
      }
      if (pIStackX_18 == (IEnumerator *)0x0) goto code_?;
      plVar2 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
      if (plVar2 == (longlong *)0x0) goto code_?;
      if (*(Il2CppClass **)(*plVar2 + 0x40) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      face = *(Face__Enum *)(plVar2 + 2);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      method_00 = (MethodInfo *)(ulonglong)face;
      pVVar13 = Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
      aVStack_15[0].x = (pVVar14->zeroVector).x;
      aVStack_15[0].y = (pVVar14->zeroVector).y;
      aVStack_15[0].z = (pVVar14->zeroVector).z;
      plVar2 = (longlong *)0x0;
      if (pVVar13 == (Vector3__Array *)0x0) goto code_?;
      while (iVar16 = (int)plVar2, iVar16 < (int)pVVar13->max_length) {
        uVar17 = iVar16 % (int)pVVar13->max_length;
        if ((uint)pVVar13->max_length <= uVar17) goto code_?;
        uVar18 = (longlong)(iVar16 + 1) % (longlong)(int)pVVar13->max_length;
        method_00 = (MethodInfo *)(uVar18 & 0xffffffff);
        uVar19 = (uint)uVar18;
        if ((uint)pVVar13->max_length <= uVar19) goto code_?;
        uStack_20._0_4_ = pVVar13->vector[(int)uVar19].x;
        uStack_20._4_4_ = pVVar13->vector[(int)uVar19].y;
        uStack_21._0_4_ = pVVar13->vector[(int)uVar17].x;
        uStack_21._4_4_ = pVVar13->vector[(int)uVar17].y;
        fVar22 = pVVar13->vector[(int)uVar19].z;
        aVStack_15[0].z =
             ((float)uStack_20._4_4_ * (float)(undefined4)uStack_21 -
             (float)(undefined4)uStack_20 * (float)uStack_21._4_4_) + aVStack_15[0].z;
        aVStack_15[0].y =
             ((float)(undefined4)uStack_20 * pVVar13->vector[(int)uVar17].z -
             fVar22 * (float)(undefined4)uStack_21) + aVStack_15[0].y;
        aVStack_15[0].x =
             (fVar22 * (float)uStack_21._4_4_ -
             (float)uStack_20._4_4_ * pVVar13->vector[(int)uVar17].z) + aVStack_15[0].x;
        plVar2 = (longlong *)(ulonglong)(iVar16 + 1);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(aVStack_15,method_00);
      fVar22 = (float)((uint)aVStack_15[0].x ^ uVar7);
      fVar23 = (float)((uint)aVStack_15[0].y ^ uVar7);
      fVar24 = (float)((uint)aVStack_15[0].z ^ uVar7);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVVar25 = Cube_GetFaceAxis(aVStack_26,face,(MethodInfo *)0x0);
      uVar27 = pVVar25->x;
      uVar28 = pVVar25->y;
      if ((double)(fVar22 * (float)uVar27 + fVar23 * (float)uVar28 + fVar24 * pVVar25->z) < dVar8) {
        FUN_?(&ppIStack_10);
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsOutOfBound(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsOutOfBound(Vector3__Array *corners,MethodInfo *method)

{
  uVar1 = _UNK_?;
  fVar2 = _UNK_?;
  uVar3 = 0;
  if (corners == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pVVar6 = corners->vector;
  while( true ) {
    if ((int)corners->max_length <= (int)uVar3) {
      return 0;
    }
    if ((uint)corners->max_length <= uVar3) break;
    aVStack_7[0].x = pVVar6->x;
    aVStack_7[0].y = pVVar6->y;
    index = 0;
    aVStack_7[0].z = pVVar6->z;
    do {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (aVStack_7,index,in_R8);
      if (fVar2 < (float)((uint)fVar8 & uVar1)) {
        return 1;
      }
      index = index + 1;
    } while (index < 3);
    uVar3 = uVar3 + 1;
    pVVar6 = pVVar6 + 1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsSideVisible(FaceFlags) */

bool Assembly-CSharp.dll::Cube::Cube_IsSideVisible
               (Cube *this,FaceFlags__Enum face,MethodInfo *method)

{
  return ((this->fields).hiddenSides & (byte)face) == 0;
}


/* Void MoveEdge(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveEdge
               (CubePickingInfo *info,float value,Vector3 *axis,CubeOutOfBoundState__Enum *coob,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    pCVar1 = (info->fields).cube;
    FVar2 = (info->fields).pickedFace;
    EVar3 = (info->fields).pickedEdge;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    corners = Cube_GetEdge(pCVar1,FVar2,EVar3,(MethodInfo *)0x0);
    if (corners != (Vector3__Array *)0x0) {
      if ((int)corners->max_length != 0) {
        uVar4 = axis->x;
        uVar5 = axis->y;
        uVar6 = corners->vector[0].x;
        uVar7 = corners->vector[0].y;
        fVar8 = axis->z;
        fVar9 = corners->vector[0].z;
        corners->vector[0].x = (float)uVar4 * value + (float)uVar6;
        corners->vector[0].y = (float)uVar5 * value + (float)uVar7;
        corners->vector[0].z = fVar8 * value + fVar9;
        if (1 < (uint)corners->max_length) {
          uVar10 = axis->x;
          uVar11 = axis->y;
          uVar12 = corners->vector[1].x;
          uVar13 = corners->vector[1].y;
          fVar8 = axis->z;
          fVar9 = corners->vector[1].z;
          corners->vector[1].x = (float)uVar10 * value + (float)uVar12;
          corners->vector[1].y = (float)uVar11 * value + (float)uVar13;
          corners->vector[1].z = fVar8 * value + fVar9;
          bVar14 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
          fVar9 = _UNK_?;
          fVar8 = _UNK_?;
          if (bVar14 != 0) {
            pCVar1 = (info->fields).cube;
            FVar2 = (info->fields).pickedFace;
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar14 = Cube_IsFaceBoxSideAligened(pCVar1,FVar2,(MethodInfo *)0x0);
            if (bVar14 != 0) {
              *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddEdge;
            }
            return;
          }
          if ((int)corners->max_length != 0) {
            fVar15 = corners->vector[0].x;
            fVar16 = _UNK_?;
            if ((_UNK_? <= fVar15) && (fVar16 = fVar15, _UNK_? < fVar15)) {
              fVar16 = _UNK_?;
            }
            fVar15 = corners->vector[0].y;
            corners->vector[0].x = fVar16;
            fVar16 = fVar9;
            if ((fVar9 <= fVar15) && (fVar16 = fVar15, fVar8 < fVar15)) {
              fVar16 = fVar8;
            }
            fVar15 = corners->vector[0].z;
            corners->vector[0].y = fVar16;
            fVar16 = fVar9;
            if ((fVar9 <= fVar15) && (fVar16 = fVar15, fVar8 < fVar15)) {
              fVar16 = fVar8;
            }
            corners->vector[0].z = fVar16;
            if (1 < (uint)corners->max_length) {
              fVar15 = corners->vector[1].x;
              fVar16 = fVar9;
              if ((fVar9 <= fVar15) && (fVar16 = fVar15, fVar8 < fVar15)) {
                fVar16 = fVar8;
              }
              fVar15 = corners->vector[1].y;
              corners->vector[1].x = fVar16;
              fVar16 = fVar9;
              if ((fVar9 <= fVar15) && (fVar16 = fVar15, fVar8 < fVar15)) {
                fVar16 = fVar8;
              }
              fVar15 = corners->vector[1].z;
              corners->vector[1].y = fVar16;
              if ((fVar9 <= fVar15) && (fVar9 = fVar15, fVar8 < fVar15)) {
                fVar9 = fVar8;
              }
              corners->vector[1].z = fVar9;
              if ((int)corners->max_length != 0) {
                uVar17 = corners->vector[0].x;
                uVar18 = corners->vector[0].y;
                fVar8 = corners->vector[0].z;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Math);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                  FUN_?();
                }
                dVar19 = (double)FUN_?((double)(float)uVar17,3);
                dVar20 = (double)FUN_?((double)(float)uVar18,3);
                dVar21 = (double)FUN_?((double)fVar8,3);
                if ((int)corners->max_length != 0) {
                  corners->vector[0].x = (float)dVar19;
                  corners->vector[0].y = (float)dVar20;
                  corners->vector[0].z = (float)dVar21;
                  if (1 < (uint)corners->max_length) {
                    uVar22 = corners->vector[1].x;
                    uVar23 = corners->vector[1].y;
                    fVar8 = corners->vector[1].z;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Math);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    dVar19 = (double)FUN_?((double)(float)uVar22,3);
                    dVar20 = (double)FUN_?((double)(float)uVar23,3);
                    dVar21 = (double)FUN_?((double)fVar8);
                    if (1 < (uint)corners->max_length) {
                      corners->vector[1].x = (float)dVar19;
                      corners->vector[1].y = (float)dVar20;
                      corners->vector[1].z = (float)dVar21;
                      pCVar1 = (info->fields).cube;
                      if (pCVar1 != (Cube *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        byteArray = (pCVar1->fields)._.byteCorners;
                        if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0
                           ) {
                          FUN_?();
                        }
                        pVVar24 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                  CubeDataPacker_ByteArrayToCorners(byteArray,(MethodInfo *)0x0);
                        if (pVVar24 != (Vector3__Array *)0x0) {
                          lVar25 = FUN_?(pVVar24);
                          pVVar26 = TypeInfo__UnityEngine__Vector3;
                          pVStackX_8 = (Vector3__Array *)0x0;
                          if ((lVar25 != 0) &&
                             (pVStackX_8 = (Vector3__Array *)
                                           FUN_?(lVar25,TypeInfo__UnityEngine__Vector3),
                             pVStackX_8 == (Vector3__Array *)0x0)) {
                            FUN_?(lVar25,pVVar26);
                            pcVar27 = (code *)swi(3);
                            (*pcVar27)();
                            return;
                          }
                          FVar2 = (info->fields).pickedFace;
                          EVar3 = (info->fields).pickedEdge;
                          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          Cube_SetEdge_1(&pVStackX_8,FVar2,EVar3,corners,(MethodInfo *)0x0);
                          bVar14 = Cube_IsLegal(pVStackX_8,(MethodInfo *)0x0);
                          if (bVar14 == 0) {
                            return;
                          }
                          pCVar1 = (info->fields).cube;
                          FVar2 = (info->fields).pickedFace;
                          EVar3 = (info->fields).pickedEdge;
                          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          Cube_SetEdge(pCVar1,FVar2,EVar3,corners,(MethodInfo *)0x0);
                          if (*coob != CubeOutOfBoundState__Enum_NoChange) {
                            return;
                          }
                          *coob = CubeOutOfBoundState__Enum_WithinBounds;
                          return;
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
      FUN_?();
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void MoveFace(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveFace
               (CubePickingInfo *info,float delta,Vector3 *axis,
               CubeOutOfBoundState__Enum *outOfBoundState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((info != (CubePickingInfo *)0x0) && (pCVar1 = (info->fields).cube, pCVar1 != (Cube *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pBVar2 = (pCVar1->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                        (pBVar2,(MethodInfo *)0x0);
    FVar4 = (info->fields).pickedFace;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    method_00 = (MethodInfo *)0x0;
    pVVar3 = Cube_GetFace_1(pVVar3,FVar4,(MethodInfo *)0x0);
    pVVar5 = (Vector3__Array *)0x0;
    CVar6 = CubeOutOfBoundState__Enum_WithinBounds;
    pVStackX_8 = pVVar3;
    if (pVVar3 != (Vector3__Array *)0x0) {
      pVVar7 = pVVar3->vector;
      pVVar8 = pVVar5;
      while (fVar9 = _UNK_?, fVar10 = _UNK_?, uVar11 = (uint)pVVar8,
            (int)uVar11 < (int)pVVar3->max_length) {
        if ((uint)pVVar3->max_length <= uVar11) goto code_?;
        uVar12 = axis->x;
        uVar13 = axis->y;
        uStack_14 = *(Vector3__Array **)pVVar7;
        fVar10 = axis->z;
        pVVar7->x = (float)uVar12 * delta + SUB84(uStack_14,0);
        pVVar7->y = (float)uVar13 * delta + (float)((ulonglong)uStack_14 >> 0x20);
        pVVar7->z = fVar10 * delta + pVVar7->z;
        pVVar7 = pVVar7 + 1;
        pVVar8 = (Vector3__Array *)(ulonglong)(uVar11 + 1);
      }
      pVVar7 = pVVar3->vector;
      pVVar8 = pVVar5;
      while (uVar11 = (uint)pVVar8, (int)uVar11 < (int)pVVar3->max_length) {
        if ((uint)pVVar3->max_length <= uVar11) {
code_?:
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        uStack_14 = *(Vector3__Array **)pVVar7;
        fStack_16 = pVVar7->z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        dVar17 = (double)FUN_?((double)(float)uStack_14,3);
        dVar18 = (double)FUN_?((double)uStack_14._4_4_,3);
        dVar19 = (double)FUN_?((double)fStack_16,3);
        if ((uint)pVVar3->max_length <= uVar11) goto code_?;
        pVVar7->x = (float)dVar17;
        pVVar7->y = (float)dVar18;
        pVVar7->z = (float)dVar19;
        pVVar8 = pVVar5;
        pVVar20 = pVVar5;
        do {
          if ((uint)pVVar3->max_length <= uVar11) goto code_?;
          index = (int)pVVar20;
          fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (pVVar3->vector + (int)uVar11,index,method_00);
          if (fVar9 <= fVar21) {
            if ((uint)pVVar3->max_length <= uVar11) goto code_?;
            fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar3->vector + (int)uVar11,index,method_00);
            if (fVar21 <= fVar10) {
              pVVar8 = (Vector3__Array *)(ulonglong)((int)pVVar8 + 1);
            }
          }
          pVVar20 = (Vector3__Array *)(ulonglong)(index + 1U);
        } while ((int)(index + 1U) < 3);
        if ((int)pVVar8 == 3) {
          bVar22 = false;
          goto code_?;
        }
        pVVar7 = pVVar7 + 1;
        pVVar8 = (Vector3__Array *)(ulonglong)(uVar11 + 1);
      }
      bVar22 = true;
code_?:
      Cube_ClampFace(&pVStackX_8,(MethodInfo *)0x0);
      pCVar1 = (info->fields).cube;
      if (pCVar1 != (Cube *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar2 = (pCVar1->fields)._.byteCorners;
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                  CubeDataPacker_ByteArrayToCorners(pBVar2,(MethodInfo *)0x0);
        if (pVVar3 != (Vector3__Array *)0x0) {
          lVar23 = FUN_?(pVVar3);
          pVVar24 = TypeInfo__UnityEngine__Vector3;
          if ((lVar23 != 0) &&
             (pVVar5 = (Vector3__Array *)FUN_?(lVar23,TypeInfo__UnityEngine__Vector3),
             pVVar5 == (Vector3__Array *)0x0)) {
            FUN_?(lVar23,pVVar24);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pVVar3 = pVStackX_8;
          uStack_14 = pVVar5;
          Cube_SetFace_1((Vector3__Array **)&uStack_14,(info->fields).pickedFace,pVStackX_8,
                         (MethodInfo *)0x0);
          bVar25 = Cube_IsLegal(uStack_14,(MethodInfo *)0x0);
          if (bVar25 != 0) {
            pCVar1 = (info->fields).cube;
            FVar4 = (info->fields).pickedFace;
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            Cube_SetFace(pCVar1,FVar4,pVVar3,(MethodInfo *)0x0);
          }
          if (bVar22) {
            pCVar1 = (info->fields).cube;
            if (pCVar1 == (Cube *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pBVar2 = (pCVar1->fields)._.byteCorners;
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
              FUN_?();
            }
            pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                      CubeDataPacker_ByteArrayToCorners(pBVar2,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar25 = Cube_IsCollapsed(pVVar3,(MethodInfo *)0x0);
            CVar6 = (bVar25 != 0) + CubeOutOfBoundState__Enum_OutOfBoundsAdd;
          }
          *outOfBoundState = CVar6;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void MoveVertex(CubePickingInfo, Single, Vector3, Boolean, Boolean, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveVertex
               (CubePickingInfo *info,float value,Vector3 *axis,bool edgeIndex0,bool edgeIndex1,
               CubeOutOfBoundState__Enum *coob,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Add_cube_based_on_corner_pull_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    pCVar1 = (info->fields).cube;
    FVar2 = (info->fields).pickedFace;
    EVar3 = (info->fields).pickedEdge;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    corners = Cube_GetEdge(pCVar1,FVar2,EVar3,(MethodInfo *)0x0);
    pVVar4 = Cube_GetEdge((info->fields).cube,(info->fields).pickedFace,(info->fields).pickedEdge,
                           (MethodInfo *)0x0);
    if (edgeIndex0 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if ((int)corners->max_length == 0) goto code_?;
      uVar5 = axis->x;
      uVar6 = axis->y;
      uVar7 = corners->vector[0].x;
      uVar8 = corners->vector[0].y;
      fVar9 = axis->z;
      fVar10 = corners->vector[0].z;
      corners->vector[0].x = (float)uVar5 * value + (float)uVar7;
      corners->vector[0].y = (float)uVar6 * value + (float)uVar8;
      corners->vector[0].z = fVar9 * value + fVar10;
    }
    if (edgeIndex1 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if ((uint)corners->max_length < 2) goto code_?;
      uVar11 = axis->x;
      uVar12 = axis->y;
      uVar13 = corners->vector[1].x;
      uVar14 = corners->vector[1].y;
      fVar9 = axis->z;
      fVar10 = corners->vector[1].z;
      corners->vector[1].x = (float)uVar11 * value + (float)uVar13;
      corners->vector[1].y = (float)uVar12 * value + (float)uVar14;
      corners->vector[1].z = fVar9 * value + fVar10;
    }
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar15 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    fVar10 = _UNK_?;
    fVar9 = _UNK_?;
    if (bVar15 != 0) {
      pCVar1 = (info->fields).cube;
      FVar2 = (info->fields).pickedFace;
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar15 = Cube_IsFaceBoxSideAligened(pCVar1,FVar2,(MethodInfo *)0x0);
      if (bVar15 == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Add_cube_based_on_corner_pull_,(MethodInfo *)0x0);
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddVertex;
      return;
    }
    if (corners != (Vector3__Array *)0x0) {
      if ((int)corners->max_length != 0) {
        fVar16 = corners->vector[0].x;
        fVar17 = _UNK_?;
        if ((_UNK_? <= fVar16) && (fVar17 = fVar16, _UNK_? < fVar16)) {
          fVar17 = _UNK_?;
        }
        fVar16 = corners->vector[0].y;
        corners->vector[0].x = fVar17;
        fVar17 = fVar10;
        if ((fVar10 <= fVar16) && (fVar17 = fVar16, fVar9 < fVar16)) {
          fVar17 = fVar9;
        }
        fVar16 = corners->vector[0].z;
        corners->vector[0].y = fVar17;
        fVar17 = fVar10;
        if ((fVar10 <= fVar16) && (fVar17 = fVar16, fVar9 < fVar16)) {
          fVar17 = fVar9;
        }
        corners->vector[0].z = fVar17;
        if (1 < (uint)corners->max_length) {
          fVar16 = corners->vector[1].x;
          fVar17 = fVar10;
          if ((fVar10 <= fVar16) && (fVar17 = fVar16, fVar9 < fVar16)) {
            fVar17 = fVar9;
          }
          fVar16 = corners->vector[1].y;
          corners->vector[1].x = fVar17;
          fVar17 = fVar10;
          if ((fVar10 <= fVar16) && (fVar17 = fVar16, fVar9 < fVar16)) {
            fVar17 = fVar9;
          }
          fVar16 = corners->vector[1].z;
          corners->vector[1].y = fVar17;
          if ((fVar10 <= fVar16) && (fVar10 = fVar16, fVar9 < fVar16)) {
            fVar10 = fVar9;
          }
          corners->vector[1].z = fVar10;
          if ((int)corners->max_length != 0) {
            uVar18 = corners->vector[0].x;
            uVar19 = corners->vector[0].y;
            fVar9 = corners->vector[0].z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Math);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
              FUN_?();
            }
            dVar20 = (double)FUN_?((double)(float)uVar18,3);
            dVar21 = (double)FUN_?((double)(float)uVar19,3);
            dVar22 = (double)FUN_?((double)fVar9,3);
            if ((int)corners->max_length != 0) {
              corners->vector[0].x = (float)dVar20;
              corners->vector[0].y = (float)dVar21;
              corners->vector[0].z = (float)dVar22;
              if (1 < (uint)corners->max_length) {
                uVar23 = corners->vector[1].x;
                uVar24 = corners->vector[1].y;
                fVar9 = corners->vector[1].z;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Math);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                  FUN_?();
                }
                dVar20 = (double)FUN_?((double)(float)uVar23,3);
                dVar21 = (double)FUN_?((double)(float)uVar24,3);
                dVar22 = (double)FUN_?((double)fVar9);
                if (1 < (uint)corners->max_length) {
                  corners->vector[1].x = (float)dVar20;
                  corners->vector[1].y = (float)dVar21;
                  corners->vector[1].z = (float)dVar22;
                  pCVar1 = (info->fields).cube;
                  if (pCVar1 != (Cube *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    byteArray = (pCVar1->fields)._.byteCorners;
                    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pVVar25 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                              CubeDataPacker_ByteArrayToCorners(byteArray,(MethodInfo *)0x0);
                    if (pVVar25 != (Vector3__Array *)0x0) {
                      lVar26 = FUN_?(pVVar25);
                      pVVar27 = TypeInfo__UnityEngine__Vector3;
                      pVStackX_8 = (Vector3__Array *)0x0;
                      if ((lVar26 != 0) &&
                         (pVStackX_8 = (Vector3__Array *)
                                       FUN_?(lVar26,TypeInfo__UnityEngine__Vector3),
                         pVStackX_8 == (Vector3__Array *)0x0)) {
                        FUN_?(lVar26,pVVar27);
                        pcVar28 = (code *)swi(3);
                        (*pcVar28)();
                        return;
                      }
                      FVar2 = (info->fields).pickedFace;
                      EVar3 = (info->fields).pickedEdge;
                      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      Cube_SetEdge_1(&pVStackX_8,FVar2,EVar3,corners,(MethodInfo *)0x0);
                      bVar15 = Cube_IsLegal(pVStackX_8,(MethodInfo *)0x0);
                      if (bVar15 != 0) {
                        pCVar1 = (info->fields).cube;
                        FVar2 = (info->fields).pickedFace;
                        EVar3 = (info->fields).pickedEdge;
                        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        Cube_SetEdge(pCVar1,FVar2,EVar3,corners,(MethodInfo *)0x0);
                        if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                        if (((int)pVVar4->max_length == 0) || ((int)corners->max_length == 0))
                        goto code_?;
                        uVar29 = corners->vector[0].x;
                        uVar30 = corners->vector[0].y;
                        uVar31 = pVVar4->vector[0].x;
                        fVar9 = pVVar4->vector[0].z - corners->vector[0].z;
                        fVar10 = pVVar4->vector[0].y - (float)uVar30;
                        if (fVar10 * fVar10 +
                            ((float)uVar31 - (float)uVar29) * ((float)uVar31 - (float)uVar29) +
                            fVar9 * fVar9 < _UNK_?) {
                          if (((uint)pVVar4->max_length < 2) || ((uint)corners->max_length < 2))
                          goto code_?;
                          uVar32 = corners->vector[1].x;
                          uVar33 = corners->vector[1].y;
                          uVar34 = pVVar4->vector[1].x;
                          fVar9 = pVVar4->vector[1].z - corners->vector[1].z;
                          fVar10 = pVVar4->vector[1].y - (float)uVar33;
                          if (fVar10 * fVar10 +
                              ((float)uVar34 - (float)uVar32) * ((float)uVar34 - (float)uVar32) +
                              fVar9 * fVar9 < _UNK_?) {
                            return;
                          }
                        }
                        *coob = CubeOutOfBoundState__Enum_WithinBounds;
                      }
                      return;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Vector3[] RotateFaceToTop(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_RotateFaceToTop(Cube *cube,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    byteArray = (cube->fields)._.byteCorners;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                        (byteArray,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__Cube->static_fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pVVar7 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
    pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((int)pVVar1->max_length != 0) {
        if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar7->max_length != 0) {
          fVar8 = pVVar1->vector[0].y;
          pVVar7->vector[0].x = pVVar1->vector[0].x;
          pVVar7->vector[0].y = fVar8;
          pVVar7->vector[0].z = pVVar1->vector[0].z;
          pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
          if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
          if ((1 < (uint)pVVar1->max_length) && (1 < (uint)pVVar7->max_length)) {
            fVar8 = pVVar1->vector[1].y;
            pVVar7->vector[1].x = pVVar1->vector[1].x;
            pVVar7->vector[1].y = fVar8;
            pVVar7->vector[1].z = pVVar1->vector[1].z;
            pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
            if ((2 < (uint)pVVar1->max_length) && (2 < (uint)pVVar7->max_length)) {
              fVar8 = pVVar1->vector[2].y;
              pVVar7->vector[2].x = pVVar1->vector[2].x;
              pVVar7->vector[2].y = fVar8;
              pVVar7->vector[2].z = pVVar1->vector[2].z;
              pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if ((3 < (uint)pVVar1->max_length) && (3 < (uint)pVVar7->max_length)) {
                fVar8 = pVVar1->vector[3].y;
                pVVar7->vector[3].x = pVVar1->vector[3].x;
                pVVar7->vector[3].y = fVar8;
                pVVar7->vector[3].z = pVVar1->vector[3].z;
                pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                if ((4 < (uint)pVVar1->max_length) && (4 < (uint)pVVar7->max_length)) {
                  fVar8 = pVVar1->vector[4].y;
                  pVVar7->vector[4].x = pVVar1->vector[4].x;
                  pVVar7->vector[4].y = fVar8;
                  pVVar7->vector[4].z = pVVar1->vector[4].z;
                  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                  if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                  if ((5 < (uint)pVVar1->max_length) && (5 < (uint)pVVar7->max_length)) {
                    fVar8 = pVVar1->vector[5].y;
                    pVVar7->vector[5].x = pVVar1->vector[5].x;
                    pVVar7->vector[5].y = fVar8;
                    pVVar7->vector[5].z = pVVar1->vector[5].z;
                    pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                    if ((6 < (uint)pVVar1->max_length) && (6 < (uint)pVVar7->max_length)) {
                      fVar8 = pVVar1->vector[6].y;
                      pVVar7->vector[6].x = pVVar1->vector[6].x;
                      pVVar7->vector[6].y = fVar8;
                      pVVar7->vector[6].z = pVVar1->vector[6].z;
                      pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                      if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                      if ((7 < (uint)pVVar1->max_length) && (7 < (uint)pVVar7->max_length)) {
                        fVar8 = pVVar1->vector[7].y;
                        pVVar7->vector[7].x = pVVar1->vector[7].x;
                        pVVar7->vector[7].y = fVar8;
                        pVVar7->vector[7].z = pVVar1->vector[7].z;
                        pQVar9 = Cube_GetToTopRotation(aQStack_10,direction,(MethodInfo *)0x0);
                        uVar2 = 0;
                        pVVar11 = pVVar7->vector;
                        aQStack_10[0].x = pQVar9->x;
                        aQStack_10[0].y = pQVar9->y;
                        aQStack_10[0].z = pQVar9->z;
                        aQStack_10[0].w = pQVar9->w;
                        while( true ) {
                          if ((int)pVVar7->max_length <= (int)uVar2) {
                            return pVVar7;
                          }
                          if ((uint)pVVar7->max_length <= uVar2) break;
                          uVar12 = pVVar11->x;
                          uVar13 = pVVar11->y;
                          fVar14 = (aQStack_10[0].z + aQStack_10[0].z) * aQStack_10[0].z;
                          fVar15 = (aQStack_10[0].z + aQStack_10[0].z) * aQStack_10[0].x;
                          fVar16 = (aQStack_10[0].z + aQStack_10[0].z) * aQStack_10[0].w;
                          fVar17 = (aQStack_10[0].z + aQStack_10[0].z) * aQStack_10[0].y;
                          fVar18 = (aQStack_10[0].y + aQStack_10[0].y) * aQStack_10[0].x;
                          fVar19 = (aQStack_10[0].y + aQStack_10[0].y) * aQStack_10[0].y;
                          fVar20 = (aQStack_10[0].y + aQStack_10[0].y) * aQStack_10[0].w;
                          fVar21 = (aQStack_10[0].x + aQStack_10[0].x) * aQStack_10[0].w;
                          fVar8 = pVVar11->z;
                          fVar22 = _UNK_? - (fVar14 + fVar19);
                          fVar23 = (aQStack_10[0].x + aQStack_10[0].x) * aQStack_10[0].x;
                          fVar24 = _UNK_? - (fVar14 + fVar23);
                          fVar14 = _UNK_? - (fVar19 + fVar23);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Math);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          dVar25 = (double)FUN_?(SUB84((double)(fVar22 * (float)uVar12 +
                                                                       (fVar18 - fVar16) *
                                                                       (float)uVar13 +
                                                                      (fVar20 + fVar15) * fVar8),0),
                                                        3);
                          dVar26 = (double)FUN_?(SUB84((double)(fVar24 * (float)uVar13 +
                                                                       (fVar16 + fVar18) *
                                                                       (float)uVar12 +
                                                                      (fVar17 - fVar21) * fVar8),0),
                                                        3);
                          dVar27 = (double)FUN_?(SUB84((double)((fVar15 - fVar20) *
                                                                       (float)uVar12 +
                                                                       (fVar21 + fVar17) *
                                                                       (float)uVar13 + fVar14 * fVar8
                                                                      ),0),3);
                          if ((uint)pVVar7->max_length <= uVar2) break;
                          uVar2 = uVar2 + 1;
                          pVVar11->x = (float)dVar25;
                          pVVar11->y = (float)dVar26;
                          pVVar11->z = (float)dVar27;
                          pVVar11 = pVVar11 + 1;
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
      FUN_?();
      pcVar28 = (code *)swi(3);
      pVVar1 = (Vector3__Array *)(*pcVar28)();
      return pVVar1;
    }
  }
code_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar28)();
  return pVVar1;
}


/* Void SetEdge(Cube, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge
               (Cube *cube,Face__Enum face,Edge__Enum edge,Vector3__Array *edgeVertices,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube == (Cube *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar2 = (cube->fields)._.byteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                     (pBVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__Cube->static_fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  Cube_SetEdge_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,edge,edgeVertices,
                 (MethodInfo *)0x0);
  pVVar3 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,pVVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar2 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CornersToByteArray
                     (pVVar3,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (cube->fields)._.byteCorners = pBVar2;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(cube->fields)._.byteCorners >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void SetEdge(Vector3[] ByRef, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge_1
               (Vector3__Array **corners,Face__Enum face,Edge__Enum edge,
               Vector3__Array *edgeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = *corners;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  if (edge == Edge__Enum_Front) {
    if (edgeVertices == (Vector3__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((int)edgeVertices->max_length == 0) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar1->max_length == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = edgeVertices->vector[0].y;
    pVVar1->vector[0].x = edgeVertices->vector[0].x;
    pVVar1->vector[0].y = fVar3;
    pVVar1->vector[0].z = edgeVertices->vector[0].z;
    if (((uint)edgeVertices->max_length < 2) || ((uint)pVVar1->max_length < 2))
    goto code_?;
    fVar3 = edgeVertices->vector[1].y;
    pVVar1->vector[1].x = edgeVertices->vector[1].x;
    pVVar1->vector[1].y = fVar3;
    pVVar1->vector[1].z = edgeVertices->vector[1].z;
  }
  else if (edge == Edge__Enum_Back) {
    if (edgeVertices == (Vector3__Array *)0x0) goto code_?;
    if ((int)edgeVertices->max_length == 0) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    fVar3 = edgeVertices->vector[0].y;
    pVVar1->vector[2].x = edgeVertices->vector[0].x;
    pVVar1->vector[2].y = fVar3;
    pVVar1->vector[2].z = edgeVertices->vector[0].z;
    if (((uint)edgeVertices->max_length < 2) || ((uint)pVVar1->max_length < 4))
    goto code_?;
    fVar3 = edgeVertices->vector[1].y;
    pVVar1->vector[3].x = edgeVertices->vector[1].x;
    pVVar1->vector[3].y = fVar3;
    pVVar1->vector[3].z = edgeVertices->vector[1].z;
  }
  else if (edge == Edge__Enum_Left) {
    if (edgeVertices == (Vector3__Array *)0x0) goto code_?;
    if ((int)edgeVertices->max_length == 0) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar1->max_length < 4) goto code_?;
    fVar3 = edgeVertices->vector[0].y;
    pVVar1->vector[3].x = edgeVertices->vector[0].x;
    pVVar1->vector[3].y = fVar3;
    pVVar1->vector[3].z = edgeVertices->vector[0].z;
    if (((uint)edgeVertices->max_length < 2) || ((int)pVVar1->max_length == 0))
    goto code_?;
    fVar3 = edgeVertices->vector[1].y;
    pVVar1->vector[0].x = edgeVertices->vector[1].x;
    pVVar1->vector[0].y = fVar3;
    pVVar1->vector[0].z = edgeVertices->vector[1].z;
  }
  else if (edge == Edge__Enum_Right) {
    if (edgeVertices == (Vector3__Array *)0x0) goto code_?;
    if ((int)edgeVertices->max_length == 0) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    fVar3 = edgeVertices->vector[0].y;
    pVVar1->vector[1].x = edgeVertices->vector[0].x;
    pVVar1->vector[1].y = fVar3;
    pVVar1->vector[1].z = edgeVertices->vector[0].z;
    if (((uint)edgeVertices->max_length < 2) || ((uint)pVVar1->max_length < 3))
    goto code_?;
    fVar3 = edgeVertices->vector[1].y;
    pVVar1->vector[2].x = edgeVertices->vector[1].x;
    pVVar1->vector[2].y = fVar3;
    pVVar1->vector[2].z = edgeVertices->vector[1].z;
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  switch(face) {
  case Face__Enum_Top:
    pVVar4 = *corners;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((int)pVVar1->max_length == 0) goto code_?;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((int)pVVar4->max_length == 0) goto code_?;
    fVar3 = pVVar1->vector[0].y;
    pVVar4->vector[0].x = pVVar1->vector[0].x;
    pVVar4->vector[0].y = fVar3;
    pVVar4->vector[0].z = pVVar1->vector[0].z;
    pVVar4 = *corners;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length < 2) goto code_?;
    fVar3 = pVVar1->vector[1].y;
    pVVar4->vector[1].x = pVVar1->vector[1].x;
    pVVar4->vector[1].y = fVar3;
    pVVar4->vector[1].z = pVVar1->vector[1].z;
    pVVar4 = *corners;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length < 3) goto code_?;
    fVar3 = pVVar1->vector[2].y;
    pVVar4->vector[2].x = pVVar1->vector[2].x;
    pVVar4->vector[2].y = fVar3;
    pVVar4->vector[2].z = pVVar1->vector[2].z;
    goto code_?;
  case Face__Enum_Bottom:
    pVVar4 = *corners;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((int)pVVar1->max_length != 0) {
        if (pVVar4 == (Vector3__Array *)0x0) break;
        if (4 < (uint)pVVar4->max_length) {
          fVar3 = pVVar1->vector[0].y;
          pVVar4->vector[4].x = pVVar1->vector[0].x;
          pVVar4->vector[4].y = fVar3;
          pVVar4->vector[4].z = pVVar1->vector[0].z;
          pVVar4 = *corners;
          if (1 < (uint)pVVar1->max_length) {
            if (pVVar4 == (Vector3__Array *)0x0) break;
            if (5 < (uint)pVVar4->max_length) {
              fVar3 = pVVar1->vector[1].y;
              pVVar4->vector[5].x = pVVar1->vector[1].x;
              pVVar4->vector[5].y = fVar3;
              pVVar4->vector[5].z = pVVar1->vector[1].z;
              pVVar4 = *corners;
              if (2 < (uint)pVVar1->max_length) {
                if (pVVar4 == (Vector3__Array *)0x0) break;
                if (6 < (uint)pVVar4->max_length) {
                  fVar3 = pVVar1->vector[2].y;
                  pVVar4->vector[6].x = pVVar1->vector[2].x;
                  pVVar4->vector[6].y = fVar3;
                  pVVar4->vector[6].z = pVVar1->vector[2].z;
                  pVVar4 = *corners;
                  if (3 < (uint)pVVar1->max_length) {
                    if (pVVar4 == (Vector3__Array *)0x0) break;
                    if (7 < (uint)pVVar4->max_length) {
                      fVar3 = pVVar1->vector[3].y;
                      pVVar4->vector[7].x = pVVar1->vector[3].x;
                      pVVar4->vector[7].y = fVar3;
                      pVVar4->vector[7].z = pVVar1->vector[3].z;
                      return;
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
  case Face__Enum_Front:
    pVVar4 = *corners;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((int)pVVar1->max_length != 0) {
        if (pVVar4 == (Vector3__Array *)0x0) break;
        if (7 < (uint)pVVar4->max_length) {
          fVar3 = pVVar1->vector[0].y;
          pVVar4->vector[7].x = pVVar1->vector[0].x;
          pVVar4->vector[7].y = fVar3;
          pVVar4->vector[7].z = pVVar1->vector[0].z;
          pVVar4 = *corners;
          if (1 < (uint)pVVar1->max_length) {
            if (pVVar4 == (Vector3__Array *)0x0) break;
            if (6 < (uint)pVVar4->max_length) {
              fVar3 = pVVar1->vector[1].y;
              pVVar4->vector[6].x = pVVar1->vector[1].x;
              pVVar4->vector[6].y = fVar3;
              pVVar4->vector[6].z = pVVar1->vector[1].z;
              pVVar4 = *corners;
              if (2 < (uint)pVVar1->max_length) {
                if (pVVar4 == (Vector3__Array *)0x0) break;
                if (1 < (uint)pVVar4->max_length) {
                  fVar3 = pVVar1->vector[2].y;
                  pVVar4->vector[1].x = pVVar1->vector[2].x;
                  pVVar4->vector[1].y = fVar3;
                  pVVar4->vector[1].z = pVVar1->vector[2].z;
                  pVVar4 = *corners;
                  if (3 < (uint)pVVar1->max_length) {
                    if (pVVar4 == (Vector3__Array *)0x0) break;
                    if ((int)pVVar4->max_length != 0) {
                      fVar3 = pVVar1->vector[3].y;
                      pVVar4->vector[0].x = pVVar1->vector[3].x;
                      pVVar4->vector[0].y = fVar3;
                      pVVar4->vector[0].z = pVVar1->vector[3].z;
                      return;
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
  case Face__Enum_Back:
    pVVar4 = *corners;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((int)pVVar1->max_length != 0) {
        if (pVVar4 == (Vector3__Array *)0x0) break;
        if (5 < (uint)pVVar4->max_length) {
          fVar3 = pVVar1->vector[0].y;
          pVVar4->vector[5].x = pVVar1->vector[0].x;
          pVVar4->vector[5].y = fVar3;
          pVVar4->vector[5].z = pVVar1->vector[0].z;
          pVVar4 = *corners;
          if (1 < (uint)pVVar1->max_length) {
            if (pVVar4 == (Vector3__Array *)0x0) break;
            if (4 < (uint)pVVar4->max_length) {
              fVar3 = pVVar1->vector[1].y;
              pVVar4->vector[4].x = pVVar1->vector[1].x;
              pVVar4->vector[4].y = fVar3;
              pVVar4->vector[4].z = pVVar1->vector[1].z;
              pVVar4 = *corners;
              if (2 < (uint)pVVar1->max_length) {
                if (pVVar4 == (Vector3__Array *)0x0) break;
                if (3 < (uint)pVVar4->max_length) {
                  fVar3 = pVVar1->vector[2].y;
                  pVVar4->vector[3].x = pVVar1->vector[2].x;
                  pVVar4->vector[3].y = fVar3;
                  pVVar4->vector[3].z = pVVar1->vector[2].z;
                  pVVar4 = *corners;
                  if (3 < (uint)pVVar1->max_length) {
                    if (pVVar4 == (Vector3__Array *)0x0) break;
                    if (2 < (uint)pVVar4->max_length) {
                      fVar3 = pVVar1->vector[3].y;
                      pVVar4->vector[2].x = pVVar1->vector[3].x;
                      pVVar4->vector[2].y = fVar3;
                      pVVar4->vector[2].z = pVVar1->vector[3].z;
                      return;
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
  case Face__Enum_Left:
    pVVar4 = *corners;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((int)pVVar1->max_length == 0) goto code_?;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length < 5) goto code_?;
    fVar3 = pVVar1->vector[0].y;
    pVVar4->vector[4].x = pVVar1->vector[0].x;
    pVVar4->vector[4].y = fVar3;
    pVVar4->vector[4].z = pVVar1->vector[0].z;
    pVVar4 = *corners;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length < 8) goto code_?;
    fVar3 = pVVar1->vector[1].y;
    pVVar4->vector[7].x = pVVar1->vector[1].x;
    pVVar4->vector[7].y = fVar3;
    pVVar4->vector[7].z = pVVar1->vector[1].z;
    pVVar4 = *corners;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((int)pVVar4->max_length == 0) goto code_?;
    fVar3 = pVVar1->vector[2].y;
    pVVar4->vector[0].x = pVVar1->vector[2].x;
    pVVar4->vector[0].y = fVar3;
    pVVar4->vector[0].z = pVVar1->vector[2].z;
code_?:
    pVVar4 = *corners;
    if (3 < (uint)pVVar1->max_length) {
      if (pVVar4 == (Vector3__Array *)0x0) break;
      if (3 < (uint)pVVar4->max_length) {
        fVar3 = pVVar1->vector[3].y;
        pVVar4->vector[3].x = pVVar1->vector[3].x;
        pVVar4->vector[3].y = fVar3;
        pVVar4->vector[3].z = pVVar1->vector[3].z;
code_?:
        return;
      }
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  case Face__Enum_Right:
    pVVar4 = *corners;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((int)pVVar1->max_length != 0) {
        if (pVVar4 == (Vector3__Array *)0x0) break;
        if (6 < (uint)pVVar4->max_length) {
          fVar3 = pVVar1->vector[0].y;
          pVVar4->vector[6].x = pVVar1->vector[0].x;
          pVVar4->vector[6].y = fVar3;
          pVVar4->vector[6].z = pVVar1->vector[0].z;
          pVVar4 = *corners;
          if (1 < (uint)pVVar1->max_length) {
            if (pVVar4 == (Vector3__Array *)0x0) break;
            if (5 < (uint)pVVar4->max_length) {
              fVar3 = pVVar1->vector[1].y;
              pVVar4->vector[5].x = pVVar1->vector[1].x;
              pVVar4->vector[5].y = fVar3;
              pVVar4->vector[5].z = pVVar1->vector[1].z;
              pVVar4 = *corners;
              if (2 < (uint)pVVar1->max_length) {
                if (pVVar4 == (Vector3__Array *)0x0) break;
                if (2 < (uint)pVVar4->max_length) {
                  fVar3 = pVVar1->vector[2].y;
                  pVVar4->vector[2].x = pVVar1->vector[2].x;
                  pVVar4->vector[2].y = fVar3;
                  pVVar4->vector[2].z = pVVar1->vector[2].z;
                  pVVar4 = *corners;
                  if (3 < (uint)pVVar1->max_length) {
                    if (pVVar4 == (Vector3__Array *)0x0) break;
                    if (1 < (uint)pVVar4->max_length) {
                      fVar3 = pVVar1->vector[3].y;
                      pVVar4->vector[1].x = pVVar1->vector[3].x;
                      pVVar4->vector[1].y = fVar3;
                      pVVar4->vector[1].z = pVVar1->vector[3].z;
                      return;
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
  default:
    goto code_?;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFace(Cube, Face, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetFace
               (Cube *cube,Face__Enum face,Vector3__Array *faceVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube == (Cube *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar2 = (cube->fields)._.byteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
                     (pBVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__Cube->static_fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,faceVertices,
                 (MethodInfo *)0x0);
  pVVar3 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,pVVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar2 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CornersToByteArray
                     (pVVar3,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (cube->fields)._.byteCorners = pBVar2;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(cube->fields)._.byteCorners >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
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
    if (faceVertices == (Vector3__Array *)0x0) break;
    if ((int)faceVertices->max_length == 0) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((int)pVVar1->max_length == 0) goto code_?;
    fVar2 = faceVertices->vector[0].y;
    pVVar1->vector[0].x = faceVertices->vector[0].x;
    pVVar1->vector[0].y = fVar2;
    pVVar1->vector[0].z = faceVertices->vector[0].z;
    pVVar1 = *corners;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    fVar2 = faceVertices->vector[1].y;
    pVVar1->vector[1].x = faceVertices->vector[1].x;
    pVVar1->vector[1].y = fVar2;
    pVVar1->vector[1].z = faceVertices->vector[1].z;
    pVVar1 = *corners;
    if ((uint)faceVertices->max_length < 3) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    fVar2 = faceVertices->vector[2].y;
    pVVar1->vector[2].x = faceVertices->vector[2].x;
    pVVar1->vector[2].y = fVar2;
    pVVar1->vector[2].z = faceVertices->vector[2].z;
    goto code_?;
  case Face__Enum_Bottom:
    pVVar1 = *corners;
    if (faceVertices != (Vector3__Array *)0x0) {
      if ((int)faceVertices->max_length != 0) {
        if (pVVar1 == (Vector3__Array *)0x0) break;
        if (4 < (uint)pVVar1->max_length) {
          fVar2 = faceVertices->vector[0].y;
          pVVar1->vector[4].x = faceVertices->vector[0].x;
          pVVar1->vector[4].y = fVar2;
          pVVar1->vector[4].z = faceVertices->vector[0].z;
          pVVar1 = *corners;
          if (1 < (uint)faceVertices->max_length) {
            if (pVVar1 == (Vector3__Array *)0x0) break;
            if (5 < (uint)pVVar1->max_length) {
              fVar2 = faceVertices->vector[1].y;
              pVVar1->vector[5].x = faceVertices->vector[1].x;
              pVVar1->vector[5].y = fVar2;
              pVVar1->vector[5].z = faceVertices->vector[1].z;
              pVVar1 = *corners;
              if (2 < (uint)faceVertices->max_length) {
                if (pVVar1 == (Vector3__Array *)0x0) break;
                if (6 < (uint)pVVar1->max_length) {
                  fVar2 = faceVertices->vector[2].y;
                  pVVar1->vector[6].x = faceVertices->vector[2].x;
                  pVVar1->vector[6].y = fVar2;
                  pVVar1->vector[6].z = faceVertices->vector[2].z;
                  pVVar1 = *corners;
                  if (3 < (uint)faceVertices->max_length) {
                    if (pVVar1 == (Vector3__Array *)0x0) break;
                    if (7 < (uint)pVVar1->max_length) {
                      fVar2 = faceVertices->vector[3].y;
                      pVVar1->vector[7].x = faceVertices->vector[3].x;
                      pVVar1->vector[7].y = fVar2;
                      pVVar1->vector[7].z = faceVertices->vector[3].z;
                      return;
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
  case Face__Enum_Front:
    pVVar1 = *corners;
    if (faceVertices != (Vector3__Array *)0x0) {
      if ((int)faceVertices->max_length != 0) {
        if (pVVar1 == (Vector3__Array *)0x0) break;
        if (7 < (uint)pVVar1->max_length) {
          fVar2 = faceVertices->vector[0].y;
          pVVar1->vector[7].x = faceVertices->vector[0].x;
          pVVar1->vector[7].y = fVar2;
          pVVar1->vector[7].z = faceVertices->vector[0].z;
          pVVar1 = *corners;
          if (1 < (uint)faceVertices->max_length) {
            if (pVVar1 == (Vector3__Array *)0x0) break;
            if (6 < (uint)pVVar1->max_length) {
              fVar2 = faceVertices->vector[1].y;
              pVVar1->vector[6].x = faceVertices->vector[1].x;
              pVVar1->vector[6].y = fVar2;
              pVVar1->vector[6].z = faceVertices->vector[1].z;
              pVVar1 = *corners;
              if (2 < (uint)faceVertices->max_length) {
                if (pVVar1 == (Vector3__Array *)0x0) break;
                if (1 < (uint)pVVar1->max_length) {
                  fVar2 = faceVertices->vector[2].y;
                  pVVar1->vector[1].x = faceVertices->vector[2].x;
                  pVVar1->vector[1].y = fVar2;
                  pVVar1->vector[1].z = faceVertices->vector[2].z;
                  pVVar1 = *corners;
                  if (3 < (uint)faceVertices->max_length) {
                    if (pVVar1 == (Vector3__Array *)0x0) break;
                    if ((int)pVVar1->max_length != 0) {
                      fVar2 = faceVertices->vector[3].y;
                      pVVar1->vector[0].x = faceVertices->vector[3].x;
                      pVVar1->vector[0].y = fVar2;
                      pVVar1->vector[0].z = faceVertices->vector[3].z;
                      return;
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
  case Face__Enum_Back:
    pVVar1 = *corners;
    if (faceVertices != (Vector3__Array *)0x0) {
      if ((int)faceVertices->max_length != 0) {
        if (pVVar1 == (Vector3__Array *)0x0) break;
        if (5 < (uint)pVVar1->max_length) {
          fVar2 = faceVertices->vector[0].y;
          pVVar1->vector[5].x = faceVertices->vector[0].x;
          pVVar1->vector[5].y = fVar2;
          pVVar1->vector[5].z = faceVertices->vector[0].z;
          pVVar1 = *corners;
          if (1 < (uint)faceVertices->max_length) {
            if (pVVar1 == (Vector3__Array *)0x0) break;
            if (4 < (uint)pVVar1->max_length) {
              fVar2 = faceVertices->vector[1].y;
              pVVar1->vector[4].x = faceVertices->vector[1].x;
              pVVar1->vector[4].y = fVar2;
              pVVar1->vector[4].z = faceVertices->vector[1].z;
              pVVar1 = *corners;
              if (2 < (uint)faceVertices->max_length) {
                if (pVVar1 == (Vector3__Array *)0x0) break;
                if (3 < (uint)pVVar1->max_length) {
                  fVar2 = faceVertices->vector[2].y;
                  pVVar1->vector[3].x = faceVertices->vector[2].x;
                  pVVar1->vector[3].y = fVar2;
                  pVVar1->vector[3].z = faceVertices->vector[2].z;
                  pVVar1 = *corners;
                  if (3 < (uint)faceVertices->max_length) {
                    if (pVVar1 == (Vector3__Array *)0x0) break;
                    if (2 < (uint)pVVar1->max_length) {
                      fVar2 = faceVertices->vector[3].y;
                      pVVar1->vector[2].x = faceVertices->vector[3].x;
                      pVVar1->vector[2].y = fVar2;
                      pVVar1->vector[2].z = faceVertices->vector[3].z;
                      return;
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
  case Face__Enum_Left:
    pVVar1 = *corners;
    if (faceVertices == (Vector3__Array *)0x0) break;
    if ((int)faceVertices->max_length == 0) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 5) goto code_?;
    fVar2 = faceVertices->vector[0].y;
    pVVar1->vector[4].x = faceVertices->vector[0].x;
    pVVar1->vector[4].y = fVar2;
    pVVar1->vector[4].z = faceVertices->vector[0].z;
    pVVar1 = *corners;
    if ((uint)faceVertices->max_length < 2) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 8) goto code_?;
    fVar2 = faceVertices->vector[1].y;
    pVVar1->vector[7].x = faceVertices->vector[1].x;
    pVVar1->vector[7].y = fVar2;
    pVVar1->vector[7].z = faceVertices->vector[1].z;
    pVVar1 = *corners;
    if ((uint)faceVertices->max_length < 3) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((int)pVVar1->max_length == 0) goto code_?;
    fVar2 = faceVertices->vector[2].y;
    pVVar1->vector[0].x = faceVertices->vector[2].x;
    pVVar1->vector[0].y = fVar2;
    pVVar1->vector[0].z = faceVertices->vector[2].z;
code_?:
    pVVar1 = *corners;
    if (3 < (uint)faceVertices->max_length) {
      if (pVVar1 == (Vector3__Array *)0x0) break;
      if (3 < (uint)pVVar1->max_length) {
        fVar2 = faceVertices->vector[3].y;
        pVVar1->vector[3].x = faceVertices->vector[3].x;
        pVVar1->vector[3].y = fVar2;
        pVVar1->vector[3].z = faceVertices->vector[3].z;
code_?:
        return;
      }
    }
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  case Face__Enum_Right:
    pVVar1 = *corners;
    if (faceVertices != (Vector3__Array *)0x0) {
      if ((int)faceVertices->max_length != 0) {
        if (pVVar1 == (Vector3__Array *)0x0) break;
        if (6 < (uint)pVVar1->max_length) {
          fVar2 = faceVertices->vector[0].y;
          pVVar1->vector[6].x = faceVertices->vector[0].x;
          pVVar1->vector[6].y = fVar2;
          pVVar1->vector[6].z = faceVertices->vector[0].z;
          pVVar1 = *corners;
          if (1 < (uint)faceVertices->max_length) {
            if (pVVar1 == (Vector3__Array *)0x0) break;
            if (5 < (uint)pVVar1->max_length) {
              fVar2 = faceVertices->vector[1].y;
              pVVar1->vector[5].x = faceVertices->vector[1].x;
              pVVar1->vector[5].y = fVar2;
              pVVar1->vector[5].z = faceVertices->vector[1].z;
              pVVar1 = *corners;
              if (2 < (uint)faceVertices->max_length) {
                if (pVVar1 == (Vector3__Array *)0x0) break;
                if (2 < (uint)pVVar1->max_length) {
                  fVar2 = faceVertices->vector[2].y;
                  pVVar1->vector[2].x = faceVertices->vector[2].x;
                  pVVar1->vector[2].y = fVar2;
                  pVVar1->vector[2].z = faceVertices->vector[2].z;
                  pVVar1 = *corners;
                  if (3 < (uint)faceVertices->max_length) {
                    if (pVVar1 == (Vector3__Array *)0x0) break;
                    if (1 < (uint)pVVar1->max_length) {
                      fVar2 = faceVertices->vector[3].y;
                      pVVar1->vector[1].x = faceVertices->vector[3].x;
                      pVVar1->vector[1].y = fVar2;
                      pVVar1->vector[1].z = faceVertices->vector[3].z;
                      return;
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
  default:
    goto code_?;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMaterial(Cube, Face, Byte) */

void Assembly-CSharp.dll::Cube::Cube_SetMaterial
               (Cube *cube,Face__Enum face,uint8_t materialId,MethodInfo *method)

{
  if ((cube != (Cube *)0x0) &&
     (pBVar1 = (cube->fields)._.faceMaterials, pBVar1 != (Byte__Array *)0x0)) {
    if (face < (Face__Enum)pBVar1->max_length) {
      pBVar1->vector[(int)face] = materialId;
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[UnityEngine.Vector3] SquareCornersToCubeCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_SquareCornersToCubeCorners
          (List_1_UnityEngine_Vector2_ *corners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._4_4_ = unaff_XMM7_Db;
  auStack_1._0_4_ = unaff_XMM7_Da;
  stack0xffffffffffffffe0 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  fVar3 = _UNK_?;
  if (corners == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
  if ((corners->fields)._size == 0) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_UnityEngine_Vector3_ *)(*pcVar4)();
    return pLVar5;
  }
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((int)pVVar6->max_length == 0) goto code_?;
  uVar7._0_4_ = pVVar6->vector[0].x - _UNK_?;
  fVar8 = pVVar6->vector[0].y - _UNK_?;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_UnityEngine_Vector3_ *)(*pcVar4)();
    return pLVar5;
  }
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar7;
    pPVar10->vector[(int)uVar11].FirstAxisSign = (int32_t)fVar3;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar7._4_4_ = (int32_t)fVar3;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar7;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(corners->fields)._size < 4) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 4) goto code_?;
  uVar13._0_4_ = pVVar6->vector[3].x - fVar3;
  fVar8 = pVVar6->vector[3].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar13;
    pPVar10->vector[(int)uVar11].FirstAxisSign = (int32_t)fVar3;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar13._4_4_ = (int32_t)fVar3;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar13;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(corners->fields)._size < 3) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 3) goto code_?;
  uVar14._0_4_ = pVVar6->vector[2].x - fVar3;
  fVar8 = pVVar6->vector[2].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar14;
    pPVar10->vector[(int)uVar11].FirstAxisSign = (int32_t)fVar3;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar14._4_4_ = (int32_t)fVar3;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar14;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(corners->fields)._size < 2) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 2) goto code_?;
  uVar15._0_4_ = pVVar6->vector[1].x - fVar3;
  fVar8 = pVVar6->vector[1].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar15;
    pPVar10->vector[(int)uVar11].FirstAxisSign = (int32_t)fVar3;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar15._4_4_ = (int32_t)fVar3;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar15;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(corners->fields)._size < 2) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 2) goto code_?;
  uVar16._0_4_ = pVVar6->vector[1].x - fVar3;
  fVar8 = pVVar6->vector[1].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  iVar17 = _UNK_?;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar16;
    pPVar10->vector[(int)uVar11].FirstAxisSign = iVar17;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar16._4_4_ = _UNK_?;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar16;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(corners->fields)._size < 3) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 3) goto code_?;
  uVar18._0_4_ = pVVar6->vector[2].x - fVar3;
  fVar8 = pVVar6->vector[2].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar18;
    pPVar10->vector[(int)uVar11].FirstAxisSign = iVar17;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar18._4_4_ = iVar17;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar18;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((uint)(corners->fields)._size < 4) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 4) goto code_?;
  uVar19._0_4_ = pVVar6->vector[3].x - fVar3;
  fVar8 = pVVar6->vector[3].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar19;
    pPVar10->vector[(int)uVar11].FirstAxisSign = iVar17;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar8;
  }
  else {
    uVar19._4_4_ = iVar17;
    auStack_12._8_4_ = fVar8;
    auStack_12._0_8_ = uVar19;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if ((corners->fields)._size == 0) goto code_?;
  pVVar6 = (corners->fields)._items;
  if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
  if ((int)pVVar6->max_length == 0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_UnityEngine_Vector3_ *)(*pcVar4)();
    return pLVar5;
  }
  uVar20._0_4_ = pVVar6->vector[0].x - fVar3;
  fVar3 = pVVar6->vector[0].y - fVar3;
  piVar9 = &(this->fields)._version;
  *piVar9 = *piVar9 + 1;
  pPVar10 = (this->fields)._items;
  if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
  uVar11 = (this->fields)._size;
  if (uVar11 < (uint)pPVar10->max_length) {
    (this->fields)._size = uVar11 + 1;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar20;
    pPVar10->vector[(int)uVar11].FirstAxisSign = iVar17;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)fVar3;
  }
  else {
    uVar20._4_4_ = iVar17;
    auStack_12._8_4_ = fVar3;
    auStack_12._0_8_ = uVar20;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
              (this,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_12,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube,direction,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_12._0_8_ = auStack_1._0_8_;
  auStack_12._8_8_ = stack0xffffffffffffffe0;
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_00,8,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_01,8);
  uVar11 = 0;
  uVar21 = 0;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
  while (pMVar2 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar21 < (this->fields)._size) {
    if ((uint)(this->fields)._size <= uVar21) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length <= uVar21) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar22._0_4_ = pPVar10->vector[(int)uVar21].Quadrant;
    uVar22._4_4_ = pPVar10->vector[(int)uVar21].FirstAxisSign;
    iVar17 = pPVar10->vector[(int)uVar21].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pPVar10 = (this_00->fields)._items;
    uVar23 = (this_00->fields)._size;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar23 < (uint)pPVar10->max_length) {
      (this_00->fields)._size = uVar23 + 1;
      if ((uint)pPVar10->max_length <= uVar23) goto code_?;
      uVar21 = uVar21 + 1;
      pPVar10->vector[(int)uVar23].Quadrant = (int32_t)uVar22;
      pPVar10->vector[(int)uVar23].FirstAxisSign = uVar22._4_4_;
      pPVar10->vector[(int)uVar23].SecondAxisSign = iVar17;
    }
    else {
      PStack_24._0_8_ = uVar22;
      PStack_24.SecondAxisSign = iVar17;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,&PStack_24,pMVar2->klass->rgctx_data[0xe].method);
      uVar21 = uVar21 + 1;
    }
  }
  uVar21 = 0;
  while (pMVar2 = 
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        , (int)uVar21 < (this->fields)._size) {
    if ((uint)(this->fields)._size <= uVar21) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length <= uVar21) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    uVar25._0_4_ = pPVar10->vector[(int)uVar21].Quadrant;
    uVar25._4_4_ = pPVar10->vector[(int)uVar21].FirstAxisSign;
    iVar17 = pPVar10->vector[(int)uVar21].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    pPVar10 = (this_01->fields)._items;
    uVar23 = (this_01->fields)._size;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if (uVar23 < (uint)pPVar10->max_length) {
      (this_01->fields)._size = uVar23 + 1;
      if ((uint)pPVar10->max_length <= uVar23) goto code_?;
      uVar21 = uVar21 + 1;
      pPVar10->vector[(int)uVar23].Quadrant = (int32_t)uVar25;
      pPVar10->vector[(int)uVar23].FirstAxisSign = uVar25._4_4_;
      pPVar10->vector[(int)uVar23].SecondAxisSign = iVar17;
    }
    else {
      PStack_24._0_8_ = uVar25;
      PStack_24.SecondAxisSign = iVar17;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_01,&PStack_24,pMVar2->klass->rgctx_data[0xe].method);
      uVar21 = uVar21 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pLVar5 = (List_1_UnityEngine_Vector3_ *)(*pcVar4)();
      return pLVar5;
    }
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    goto code_?;
  case Face__Enum_Front:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    goto code_?;
  case Face__Enum_Back:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    iVar17 = pPVar10->vector[5].SecondAxisSign;
    break;
  case Face__Enum_Left:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    iVar17 = pPVar10->vector[6].SecondAxisSign;
    break;
  case Face__Enum_Right:
    if ((uint)(this->fields)._size < 4) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 3) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 5) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[4].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 6) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this->fields)._size == 0) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    pPVar26->vector[7].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 2) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 8) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this->fields)._size < 7) goto code_?;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar26 = (this_01->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    piVar9 = &(this_01->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 4) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 4) goto code_?;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
    if ((this_00->fields)._size == 0) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar26->max_length == 0) goto code_?;
    iVar17 = pPVar10->vector[3].FirstAxisSign;
    pPVar26->vector[0].Quadrant = pPVar10->vector[3].Quadrant;
    pPVar26->vector[0].FirstAxisSign = iVar17;
    pPVar26->vector[0].SecondAxisSign = pPVar10->vector[3].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((this_01->fields)._size == 0) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((int)pPVar10->max_length == 0) goto code_?;
    if ((uint)(this_00->fields)._size < 2) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 2) goto code_?;
    iVar17 = pPVar10->vector[0].FirstAxisSign;
    pPVar26->vector[1].Quadrant = pPVar10->vector[0].Quadrant;
    pPVar26->vector[1].FirstAxisSign = iVar17;
    pPVar26->vector[1].SecondAxisSign = pPVar10->vector[0].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 2) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 2) goto code_?;
    if ((uint)(this_00->fields)._size < 3) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 3) goto code_?;
    iVar17 = pPVar10->vector[1].FirstAxisSign;
    pPVar26->vector[2].Quadrant = pPVar10->vector[1].Quadrant;
    pPVar26->vector[2].FirstAxisSign = iVar17;
    pPVar26->vector[2].SecondAxisSign = pPVar10->vector[1].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 3) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 3) goto code_?;
    if ((uint)(this_00->fields)._size < 4) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 4) goto code_?;
    iVar17 = pPVar10->vector[2].FirstAxisSign;
    pPVar26->vector[3].Quadrant = pPVar10->vector[2].Quadrant;
    pPVar26->vector[3].FirstAxisSign = iVar17;
    pPVar26->vector[3].SecondAxisSign = pPVar10->vector[2].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 6) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 6) goto code_?;
    if ((uint)(this_00->fields)._size < 5) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 5) goto code_?;
    iVar17 = pPVar10->vector[5].FirstAxisSign;
    pPVar26->vector[4].Quadrant = pPVar10->vector[5].Quadrant;
    pPVar26->vector[4].FirstAxisSign = iVar17;
    pPVar26->vector[4].SecondAxisSign = pPVar10->vector[5].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 7) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 7) goto code_?;
    if ((uint)(this_00->fields)._size < 6) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 6) goto code_?;
    iVar17 = pPVar10->vector[6].FirstAxisSign;
    pPVar26->vector[5].Quadrant = pPVar10->vector[6].Quadrant;
    pPVar26->vector[5].FirstAxisSign = iVar17;
    pPVar26->vector[5].SecondAxisSign = pPVar10->vector[6].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 8) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 8) goto code_?;
    if ((uint)(this_00->fields)._size < 7) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 7) goto code_?;
    iVar17 = pPVar10->vector[7].FirstAxisSign;
    pPVar26->vector[6].Quadrant = pPVar10->vector[7].Quadrant;
    pPVar26->vector[6].FirstAxisSign = iVar17;
    pPVar26->vector[6].SecondAxisSign = pPVar10->vector[7].SecondAxisSign;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    if ((uint)(this_01->fields)._size < 5) goto code_?;
    pPVar10 = (this_01->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length < 5) goto code_?;
    if ((uint)(this_00->fields)._size < 8) goto code_?;
    pPVar26 = (this_00->fields)._items;
    if (pPVar26 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar26->max_length < 8) goto code_?;
    iVar17 = pPVar10->vector[4].FirstAxisSign;
    pPVar26->vector[7].Quadrant = pPVar10->vector[4].Quadrant;
    pPVar26->vector[7].FirstAxisSign = iVar17;
    iVar17 = pPVar10->vector[4].SecondAxisSign;
  }
  pPVar26->vector[7].SecondAxisSign = iVar17;
code_?:
  piVar9 = &(this_00->fields)._version;
  *piVar9 = *piVar9 + 1;
  this = this_00;
code_?:
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pQVar27 = Cube_GetFromTopRotation(aQStack_28,direction,(MethodInfo *)0x0);
  aQStack_28[0].x = pQVar27->x;
  aQStack_28[0].y = pQVar27->y;
  aQStack_28[0].z = pQVar27->z;
  aQStack_28[0].w = pQVar27->w;
  if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_UnityEngine_Vector3_ *)(*pcVar4)();
    return pLVar5;
  }
  while( true ) {
    if ((this->fields)._size <= (int)uVar11) {
      return (List_1_UnityEngine_Vector3_ *)this;
    }
    if ((uint)(this->fields)._size <= uVar11) break;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    PStack_24.Quadrant = pPVar10->vector[(int)uVar11].Quadrant;
    PStack_24.FirstAxisSign = pPVar10->vector[(int)uVar11].FirstAxisSign;
    fVar3 = (float)pPVar10->vector[(int)uVar11].SecondAxisSign;
    fVar29 = aQStack_28[0].z + aQStack_28[0].z;
    fVar30 = aQStack_28[0].y + aQStack_28[0].y;
    fVar31 = (aQStack_28[0].x + aQStack_28[0].x) * aQStack_28[0].x;
    fVar32 = fVar29 * aQStack_28[0].y;
    fVar33 = fVar29 * aQStack_28[0].x;
    fVar34 = (aQStack_28[0].x + aQStack_28[0].x) * aQStack_28[0].w;
    fVar35 = fVar30 * aQStack_28[0].w;
    fVar36 = (_UNK_? - (fVar29 * aQStack_28[0].z + fVar31)) * (float)PStack_24.FirstAxisSign
    ;
    fVar37 = (fVar33 - fVar35) * (float)PStack_24.Quadrant;
    fVar38 = (_UNK_? - (fVar29 * aQStack_28[0].z + fVar30 * aQStack_28[0].y)) *
             (float)PStack_24.Quadrant;
    fVar8 = (fVar30 * aQStack_28[0].x - fVar29 * aQStack_28[0].w) * (float)PStack_24.FirstAxisSign;
    fVar39 = (fVar29 * aQStack_28[0].w + fVar30 * aQStack_28[0].x) * (float)PStack_24.Quadrant;
    fVar40 = (fVar34 + fVar32) * (float)PStack_24.FirstAxisSign;
    fVar29 = _UNK_? - (fVar30 * aQStack_28[0].y + fVar31);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar41 = (double)FUN_?((double)(fVar38 + fVar8 + (fVar35 + fVar33) * fVar3),3);
    dVar42 = (double)FUN_?((double)(fVar36 + fVar39 + (fVar32 - fVar34) * fVar3),3);
    dVar43 = (double)FUN_?((double)(fVar40 + fVar37 + fVar29 * fVar3),3);
    if ((uint)(this->fields)._size <= uVar11) break;
    pPVar10 = (this->fields)._items;
    if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    if ((uint)pPVar10->max_length <= uVar11) goto code_?;
    pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)dVar41;
    pPVar10->vector[(int)uVar11].FirstAxisSign = (int32_t)(float)dVar42;
    pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)(float)dVar43;
    piVar9 = &(this->fields)._version;
    *piVar9 = *piVar9 + 1;
    uVar11 = uVar11 + 1;
  }
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_UnityEngine_Vector3_ *)(*pcVar4)();
  return pLVar5;
}


/* Void UnIndentFace(Cube, Face) */

void Assembly-CSharp.dll::Cube::Cube_UnIndentFace(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  uVar2 = 0;
  pfVar3 = &pVVar1->vector[0].y;
  uVar4 = 0;
  lVar5 = 0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  do {
    if ((uint)pVVar1->max_length <= uVar4) goto DAT_?;
    *pfVar3 = 0.5;
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 3;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 4);
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pQVar7 = Cube_GetFromTopRotation(aQStack_8,face,(MethodInfo *)0x0);
  pVVar9 = pVVar1->vector;
  aQStack_8[0].x = pQVar7->x;
  aQStack_8[0].y = pQVar7->y;
  aQStack_8[0].z = pQVar7->z;
  aQStack_8[0].w = pQVar7->w;
  while( true ) {
    if ((int)pVVar1->max_length <= (int)uVar2) {
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Cube);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cube == (Cube *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pBVar10 = (cube->fields)._.byteCorners;
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVVar11 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                CubeDataPacker_ByteArrayToCorners(pBVar10,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar11;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)TypeInfo__Cube->static_fields >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar12;
          LOCK();
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *puVar12 = uVar13 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar14);
      }
      Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,pVVar1,
                     (MethodInfo *)0x0);
      pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,pVVar1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      pBVar10 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                CubeDataPacker_CornersToByteArray(pVVar1,(MethodInfo *)0x0);
      bVar15 = iRam_? != 0;
      (cube->fields)._.byteCorners = pBVar10;
      if (bVar15) {
        uVar4 = (uint)((ulonglong)&(cube->fields)._.byteCorners >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar12;
          LOCK();
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *puVar12 = uVar13 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar14);
      }
      return;
    }
    if ((uint)pVVar1->max_length <= uVar2) break;
    uVar16 = pVVar9->x;
    uVar17 = pVVar9->y;
    fVar18 = (aQStack_8[0].z + aQStack_8[0].z) * aQStack_8[0].z;
    fVar19 = (aQStack_8[0].z + aQStack_8[0].z) * aQStack_8[0].x;
    fVar20 = (aQStack_8[0].z + aQStack_8[0].z) * aQStack_8[0].w;
    fVar21 = (aQStack_8[0].z + aQStack_8[0].z) * aQStack_8[0].y;
    fVar22 = (aQStack_8[0].y + aQStack_8[0].y) * aQStack_8[0].x;
    fVar23 = (aQStack_8[0].y + aQStack_8[0].y) * aQStack_8[0].y;
    fVar24 = (aQStack_8[0].y + aQStack_8[0].y) * aQStack_8[0].w;
    fVar25 = (aQStack_8[0].x + aQStack_8[0].x) * aQStack_8[0].w;
    fVar26 = pVVar9->z;
    fVar27 = _UNK_? - (fVar18 + fVar23);
    fVar28 = (aQStack_8[0].x + aQStack_8[0].x) * aQStack_8[0].x;
    fVar29 = _UNK_? - (fVar18 + fVar28);
    fVar18 = _UNK_? - (fVar23 + fVar28);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar30 = (double)FUN_?(SUB84((double)(fVar27 * (float)uVar16 +
                                                 (fVar22 - fVar20) * (float)uVar17 +
                                                (fVar24 + fVar19) * fVar26),0),3);
    dVar31 = (double)FUN_?(SUB84((double)(fVar29 * (float)uVar17 +
                                                 (fVar20 + fVar22) * (float)uVar16 +
                                                (fVar21 - fVar25) * fVar26),0),3);
    dVar32 = (double)FUN_?(SUB84((double)((fVar19 - fVar24) * (float)uVar16 +
                                                  (fVar25 + fVar21) * (float)uVar17 + fVar18 * fVar26)
                                         ,0),3);
    if ((uint)pVVar1->max_length <= uVar2) break;
    uVar2 = uVar2 + 1;
    pVVar9->x = (float)dVar30;
    pVVar9->y = (float)dVar31;
    pVVar9->z = (float)dVar32;
    pVVar9 = pVVar9 + 1;
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_0(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_0
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)i < (uint)pVVar1->max_length) {
      pfVar2 = &pVVar1->vector[i].y;
      return *pfVar2 <= _UNK_? && _UNK_? != *pfVar2;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_1(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_1
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)i < (uint)pVVar1->max_length) {
      return _UNK_? < pVVar1->vector[i].y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_2(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_2
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)i < (uint)pVVar1->max_length) {
      return _UNK_? < pVVar1->vector[i].z;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_3(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_3
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)i < (uint)pVVar1->max_length) {
      pfVar2 = &pVVar1->vector[i].z;
      return *pfVar2 <= _UNK_? && _UNK_? != *pfVar2;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_4(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_4
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)i < (uint)pVVar1->max_length) {
      return _UNK_? < pVVar1->vector[i].x;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean <GenerateCubeFacesCheap>g__insideCheck|26_5(Int32) */

bool Assembly-CSharp.dll::Cube::Cube__GenerateCubeFacesCheap_g__insideCheck_26_5
               (int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Cube);
  }
  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)i < (uint)pVVar1->max_length) {
      return pVVar1->vector[i].x <= _UNK_? && _UNK_? != pVVar1->vector[i].x;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Cube() */

void Assembly-CSharp.dll::Cube::Cube__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__Cube->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Cube(Byte[], Byte[]) */

void Assembly-CSharp.dll::Cube::Cube__ctor
               (Cube *this,Byte__Array *byteCorners,Byte__Array *faceMaterials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte,byteCorners,faceMaterials,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar2 = FUN_?();
  pBVar3 = TypeInfo__System__Byte;
  if (lVar2 == 0) {
    (this->fields)._.byteCorners = (Byte__Array *)0x0;
  }
  else {
    pBVar4 = (Byte__Array *)FUN_?(lVar2,TypeInfo__System__Byte);
    if (pBVar4 == (Byte__Array *)0x0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._.byteCorners = pBVar4;
    pBVar3 = TypeInfo__System__Byte;
    lVar5 = FUN_?(lVar2,TypeInfo__System__Byte);
    if (lVar5 == 0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.byteCorners >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pBVar4 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  (this->fields)._.faceMaterials = pBVar4;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.faceMaterials >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  (this->fields)._.byteCorners = byteCorners;
  if (iVar10 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.byteCorners >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (this->fields)._.faceMaterials = faceMaterials;
  if (iVar10 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.faceMaterials >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Cube *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields)._.unIndentedSides = 0;
  lVar2 = FUN_?(TypeInfo__System__Boolean,8);
  iVar10 = 0;
  uVar6 = 0;
  lVar5 = 0;
  do {
    pBVar4 = (this->fields)._.byteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    uVar11 = pBVar4->vector[lVar5];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar4 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    if (lVar2 == 0) goto code_?;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    uVar12 = pBVar4->vector[lVar5];
    *(bool *)(lVar2 + 0x20 + lVar5) = uVar11 != uVar12;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    iVar13 = iVar10 + 1;
    if (uVar11 == uVar12) {
      iVar13 = iVar10;
    }
    iVar10 = iVar13;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 8);
  if (iVar10 == 0) {
    (this->fields)._.unIndentedSides = 0x3f;
  }
  else {
    if (iVar10 < 5) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (*(char *)(lVar2 + 0x20) == '\0') {
          if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
          if (*(char *)(lVar2 + 0x21) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 1;
              }
            }
          }
        }
        if (4 < *(uint *)(lVar2 + 0x18)) {
          if (*(char *)(lVar2 + 0x24) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
            if (*(char *)(lVar2 + 0x25) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
              if (*(char *)(lVar2 + 0x26) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                if (*(char *)(lVar2 + 0x27) == '\0') {
                  (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 2;
                }
              }
            }
          }
          if (2 < *(uint *)(lVar2 + 0x18)) {
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                if (*(char *)(lVar2 + 0x24) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                  if (*(char *)(lVar2 + 0x25) == '\0') {
                    (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 8;
                  }
                }
              }
            }
            if (*(int *)(lVar2 + 0x18) != 0) {
              if (*(char *)(lVar2 + 0x20) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
                if (*(char *)(lVar2 + 0x21) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
                  if (*(char *)(lVar2 + 0x26) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                    if (*(char *)(lVar2 + 0x27) == '\0') {
                      (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 4;
                    }
                  }
                }
              }
              if (*(int *)(lVar2 + 0x18) != 0) {
                if (*(char *)(lVar2 + 0x20) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                  if (*(char *)(lVar2 + 0x23) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                    if (*(char *)(lVar2 + 0x24) == '\0') {
                      if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                      if (*(char *)(lVar2 + 0x27) == '\0') {
                        (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 0x10;
                      }
                    }
                  }
                }
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  if (*(char *)(lVar2 + 0x21) != '\0') {
                    return;
                  }
                  if (2 < *(uint *)(lVar2 + 0x18)) {
                    if (*(char *)(lVar2 + 0x22) != '\0') {
                      return;
                    }
                    if (5 < *(uint *)(lVar2 + 0x18)) {
                      if (*(char *)(lVar2 + 0x25) != '\0') {
                        return;
                      }
                      if (6 < *(uint *)(lVar2 + 0x18)) {
                        if (*(char *)(lVar2 + 0x26) != '\0') {
                          return;
                        }
                        (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 0x20;
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
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._.unIndentedSides = 0;
  }
  return;
}


/* Cube(BytePacker, Byte) */

void Assembly-CSharp.dll::Cube::Cube__ctor_1
               (Cube *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte,bp,byteFlags,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar2 = FUN_?();
  pBVar3 = TypeInfo__System__Byte;
  if (lVar2 == 0) {
    (this->fields)._.byteCorners = (Byte__Array *)0x0;
  }
  else {
    pBVar4 = (Byte__Array *)FUN_?(lVar2,TypeInfo__System__Byte);
    if (pBVar4 == (Byte__Array *)0x0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._.byteCorners = pBVar4;
    pBVar3 = TypeInfo__System__Byte;
    lVar5 = FUN_?(lVar2,TypeInfo__System__Byte);
    if (lVar5 == 0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.byteCorners >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pBVar4 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  bVar9 = iRam_? != 0;
  (this->fields)._.faceMaterials = pBVar4;
  if (bVar9) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.faceMaterials >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ReadCompressedCube
            (byteFlags,bp,&(this->fields)._.byteCorners,&(this->fields)._.faceMaterials,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Cube *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields)._.unIndentedSides = 0;
  lVar2 = FUN_?(TypeInfo__System__Boolean,8);
  iVar10 = 0;
  uVar6 = 0;
  lVar5 = 0;
  do {
    pBVar4 = (this->fields)._.byteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    uVar11 = pBVar4->vector[lVar5];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar4 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    if (lVar2 == 0) goto code_?;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    uVar12 = pBVar4->vector[lVar5];
    *(bool *)(lVar2 + 0x20 + lVar5) = uVar11 != uVar12;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    iVar13 = iVar10 + 1;
    if (uVar11 == uVar12) {
      iVar13 = iVar10;
    }
    iVar10 = iVar13;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 8);
  if (iVar10 == 0) {
    (this->fields)._.unIndentedSides = 0x3f;
  }
  else {
    if (iVar10 < 5) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (*(char *)(lVar2 + 0x20) == '\0') {
          if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
          if (*(char *)(lVar2 + 0x21) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 1;
              }
            }
          }
        }
        if (4 < *(uint *)(lVar2 + 0x18)) {
          if (*(char *)(lVar2 + 0x24) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
            if (*(char *)(lVar2 + 0x25) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
              if (*(char *)(lVar2 + 0x26) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                if (*(char *)(lVar2 + 0x27) == '\0') {
                  (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 2;
                }
              }
            }
          }
          if (2 < *(uint *)(lVar2 + 0x18)) {
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                if (*(char *)(lVar2 + 0x24) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                  if (*(char *)(lVar2 + 0x25) == '\0') {
                    (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 8;
                  }
                }
              }
            }
            if (*(int *)(lVar2 + 0x18) != 0) {
              if (*(char *)(lVar2 + 0x20) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
                if (*(char *)(lVar2 + 0x21) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
                  if (*(char *)(lVar2 + 0x26) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                    if (*(char *)(lVar2 + 0x27) == '\0') {
                      (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 4;
                    }
                  }
                }
              }
              if (*(int *)(lVar2 + 0x18) != 0) {
                if (*(char *)(lVar2 + 0x20) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                  if (*(char *)(lVar2 + 0x23) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                    if (*(char *)(lVar2 + 0x24) == '\0') {
                      if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                      if (*(char *)(lVar2 + 0x27) == '\0') {
                        (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 0x10;
                      }
                    }
                  }
                }
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  if (*(char *)(lVar2 + 0x21) != '\0') {
                    return;
                  }
                  if (2 < *(uint *)(lVar2 + 0x18)) {
                    if (*(char *)(lVar2 + 0x22) != '\0') {
                      return;
                    }
                    if (5 < *(uint *)(lVar2 + 0x18)) {
                      if (*(char *)(lVar2 + 0x25) != '\0') {
                        return;
                      }
                      if (6 < *(uint *)(lVar2 + 0x18)) {
                        if (*(char *)(lVar2 + 0x26) != '\0') {
                          return;
                        }
                        (this->fields)._.unIndentedSides = (this->fields)._.unIndentedSides | 0x20;
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
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._.unIndentedSides = 0;
  }
  return;
}

