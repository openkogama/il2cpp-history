
/* Mesh CreateCylindricalTorus(Vector3, Single, Single, Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateCylindricalTorus
                 (Vector3 center,float coreRadius,float tubeHrzRadius,float tubeVertRadius,
                 int32_t numTubeSlices,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((coreRadius < _UNK_?) || (tubeHrzRadius < _UNK_?)) || (numTubeSlices < 3)) {
    return (Mesh *)0x0;
  }
  arrayLength = numTubeSlices * 8 + 8;
  value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  value_01 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  value_02 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,arrayLength);
  iStack_1 = 0;
  pVStack_2 = value_00->vector;
  pVVar3 = value_02->vector;
  fVar4 = _UNK_? / (float)(numTubeSlices + -1);
  uVar5 = 0;
  do {
    fVar6 = (float)iStack_1 * fVar4 * _UNK_?;
    dVar7 = (double)fVar6;
    func_?();
    dVar8 = (double)fVar6;
    func_?();
    value.y = 0.0;
    value.x = (float)dVar7;
    value.z = (float)dVar8;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&puStack_10,value,(MethodInfo *)0x0);
    uVar11 = pVVar9->x;
    uVar12 = pVVar9->y;
    fVar6 = pVVar9->z;
    fVar13 = center.x + (float)uVar11 * coreRadius;
    fVar14 = center.y + (float)uVar12 * coreRadius;
    fVar15 = center.z + fVar6 * coreRadius;
    if (value_02 == (Vector2__Array *)0x0) goto code_?;
    if (value_02->max_length <= uVar5) goto code_?;
    pVVar3->x = (float)uVar11;
    pVVar3->y = fVar6;
    fVar16 = (float)uVar11;
    fVar17 = (float)uVar12;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar18->upVector).x;
    uVar20 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    fVar22 = (float)uVar11 * tubeHrzRadius;
    fVar23 = fVar6 * tubeHrzRadius;
    fVar24 = (float)uVar12 * tubeHrzRadius;
    if (value_00 == (Vector3__Array *)0x0) goto code_?;
    if (value_00->max_length <= uVar5) goto code_?;
    uVar25 = uVar5 + 1;
    pVStack_2->x = ((float)uVar19 * tubeVertRadius + fVar13) - fVar22;
    pVStack_2->y = ((float)uVar20 * tubeVertRadius + fVar14) - fVar24;
    pVStack_2->z = (fVar21 * tubeVertRadius + fVar15) - fVar23;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (value_01 == (Vector3__Array *)0x0) goto code_?;
    fVar26 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_01->max_length <= uVar5) goto code_?;
    value_01->vector[uVar5].x = (pVVar18->upVector).x;
    value_01->vector[uVar5].y = fVar26;
    value_01->vector[uVar5].z = fVar21;
    if (value_02->max_length <= uVar25) goto code_?;
    pVVar3[1].x = (float)uVar11;
    pVVar3[1].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar18->upVector).x;
    uVar28 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar25) goto code_?;
    uVar29 = uVar5 + 2;
    pVStack_2[1].x = fVar22 + (float)uVar27 * tubeVertRadius + fVar13;
    pVStack_2[1].y = fVar24 + (float)uVar28 * tubeVertRadius + fVar14;
    pVStack_2[1].z = fVar23 + fVar21 * tubeVertRadius + fVar15;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar26 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_01->max_length <= uVar25) goto code_?;
    value_01->vector[uVar5 + 1].x = (pVVar18->upVector).x;
    value_01->vector[uVar5 + 1].y = fVar26;
    value_01->vector[uVar5 + 1].z = fVar21;
    if (value_02->max_length <= uVar29) goto code_?;
    pVVar3[2].x = (float)uVar11;
    pVVar3[2].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar18->upVector).x;
    uVar31 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar29) goto code_?;
    pVStack_2[2].x = fVar22 + (float)uVar30 * tubeVertRadius + fVar13;
    pVStack_2[2].y = fVar24 + (float)uVar31 * tubeVertRadius + fVar14;
    pVStack_2[2].z = fVar23 + fVar21 * tubeVertRadius + fVar15;
    uVar25 = uVar5 + 3;
    if (value_01->max_length <= uVar29) goto code_?;
    value_01->vector[uVar5 + 2].x = fVar16;
    value_01->vector[uVar5 + 2].y = fVar17;
    value_01->vector[uVar5 + 2].z = fVar6;
    if (value_02->max_length <= uVar25) goto code_?;
    pVVar3[3].x = (float)uVar11;
    pVVar3[3].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar32 = (pVVar18->upVector).x;
    uVar33 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar25) goto code_?;
    pVStack_2[3].x = fVar22 + (fVar13 - (float)uVar32 * tubeVertRadius);
    pVStack_2[3].y = fVar24 + (fVar14 - (float)uVar33 * tubeVertRadius);
    pVStack_2[3].z = fVar23 + (fVar15 - fVar21 * tubeVertRadius);
    uVar29 = uVar5 + 4;
    if (value_01->max_length <= uVar25) goto code_?;
    value_01->vector[uVar5 + 3].x = fVar16;
    value_01->vector[uVar5 + 3].y = fVar17;
    value_01->vector[uVar5 + 3].z = fVar6;
    if (value_02->max_length <= uVar29) goto code_?;
    pVVar3[4].x = (float)uVar11;
    pVVar3[4].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34 = (pVVar18->upVector).x;
    uVar35 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar29) goto code_?;
    pVStack_2[4].x = fVar22 + (fVar13 - (float)uVar34 * tubeVertRadius);
    pVStack_2[4].y = fVar24 + (fVar14 - (float)uVar35 * tubeVertRadius);
    pVStack_2[4].z = fVar23 + (fVar15 - fVar16 * tubeVertRadius);
    uVar25 = uVar5 + 5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar36 = (pVVar18->upVector).x;
    uVar37 = (pVVar18->upVector).y;
    uVar38 = uVar37 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar16 = (float)((uint)(pVVar18->upVector).z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (value_01->max_length <= uVar29) goto code_?;
    value_01->vector[uVar5 + 4].x =
         (float)(uVar36 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value_01->vector[uVar5 + 4].y = (float)uVar38;
    value_01->vector[uVar5 + 4].z = fVar16;
    if (value_02->max_length <= uVar25) goto code_?;
    pVVar3[5].x = (float)uVar11;
    pVVar3[5].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar39 = (pVVar18->upVector).x;
    uVar40 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar25) goto code_?;
    uVar29 = uVar5 + 6;
    pVStack_2[5].x = (fVar13 - (float)uVar39 * tubeVertRadius) - fVar22;
    pVStack_2[5].y = (fVar14 - (float)uVar40 * tubeVertRadius) - fVar24;
    pVStack_2[5].z = (fVar15 - fVar16 * tubeVertRadius) - fVar23;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar38 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar41 = (pVVar18->upVector).x;
    uVar42 = (pVVar18->upVector).y;
    uVar43 = uVar42 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar16 = (float)((uint)(pVVar18->upVector).z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (value_01->max_length <= uVar25) goto code_?;
    value_01->vector[uVar5 + 5].x =
         (float)(uVar41 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value_01->vector[uVar5 + 5].y = (float)uVar43;
    value_01->vector[uVar5 + 5].z = fVar16;
    if (value_02->max_length <= uVar29) goto code_?;
    pVVar3[6].x = (float)uVar11;
    pVVar3[6].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      uVar38 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar44 = (pVVar18->upVector).x;
    uVar45 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar29) goto code_?;
    uVar25 = uVar5 + 7;
    pVStack_2[6].x = (fVar13 - (float)uVar44 * tubeVertRadius) - fVar22;
    pVStack_2[6].y = (fVar14 - (float)uVar45 * tubeVertRadius) - fVar24;
    pVStack_2[6].z = (fVar15 - fVar16 * tubeVertRadius) - fVar23;
    if (value_01->max_length <= uVar29) goto code_?;
    value_01->vector[uVar5 + 6].x = (float)(uVar11 ^ uVar38);
    value_01->vector[uVar5 + 6].y = (float)(uVar12 ^ uVar38);
    value_01->vector[uVar5 + 6].z = (float)((uint)fVar6 ^ uVar38);
    if (value_02->max_length <= uVar25) goto code_?;
    pVVar3[7].x = (float)uVar11;
    pVVar3[7].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar46 = (pVVar18->upVector).x;
    uVar47 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar25) goto code_?;
    pVVar3 = pVVar3 + 8;
    pVStack_2[7].x = ((float)uVar46 * tubeVertRadius + fVar13) - fVar22;
    pVStack_2[7].y = ((float)uVar47 * tubeVertRadius + fVar14) - fVar24;
    pVStack_2[7].z = (fVar16 * tubeVertRadius + fVar15) - fVar23;
    pVStack_2 = pVStack_2 + 8;
    if (value_01->max_length <= uVar25) goto code_?;
    value_01->vector[uVar5 + 7].x = (float)(uVar11 ^ uVar38);
    value_01->vector[uVar5 + 7].y = (float)(uVar12 ^ uVar38);
    value_01->vector[uVar5 + 7].z = (float)((uint)fVar6 ^ uVar38);
    iStack_1 = iStack_1 + 1;
    uVar5 = uVar5 + 8;
  } while (iStack_1 <= numTubeSlices);
  iVar48 = 0xf;
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numTubeSlices * 0x18);
  coreRadius = 0.0;
  uVar5 = 0;
  do {
    if (indices == (Int32__Array *)0x0) goto code_?;
    if (indices->max_length <= uVar5) goto code_?;
    indices->vector[uVar5] = iVar48 + -0xf;
    if (indices->max_length <= uVar5 + 1) goto code_?;
    indices->vector[uVar5 + 1] = iVar48 + -0xe;
    if (indices->max_length <= uVar5 + 2) goto code_?;
    indices->vector[uVar5 + 2] = iVar48 + -6;
    if (indices->max_length <= uVar5 + 3) goto code_?;
    indices->vector[uVar5 + 3] = iVar48 + -0xf;
    if (indices->max_length <= uVar5 + 4) goto code_?;
    indices->vector[uVar5 + 4] = iVar48 + -6;
    if (indices->max_length <= uVar5 + 5) goto code_?;
    indices->vector[uVar5 + 5] = iVar48 + -7;
    if (indices->max_length <= uVar5 + 6) goto code_?;
    indices->vector[uVar5 + 6] = iVar48 + -0xd;
    if (indices->max_length <= uVar5 + 7) goto code_?;
    indices->vector[uVar5 + 7] = iVar48 + -0xc;
    if (indices->max_length <= uVar5 + 8) goto code_?;
    indices->vector[uVar5 + 8] = iVar48 + -4;
    if (indices->max_length <= uVar5 + 9) goto code_?;
    indices->vector[uVar5 + 9] = iVar48 + -0xd;
    if (indices->max_length <= uVar5 + 10) goto code_?;
    indices->vector[uVar5 + 10] = iVar48 + -4;
    if (indices->max_length <= uVar5 + 0xb) goto code_?;
    indices->vector[uVar5 + 0xb] = iVar48 + -5;
    if (indices->max_length <= uVar5 + 0xc) goto code_?;
    indices->vector[uVar5 + 0xc] = iVar48 + -0xb;
    if (indices->max_length <= uVar5 + 0xd) goto code_?;
    indices->vector[uVar5 + 0xd] = iVar48 + -10;
    if (indices->max_length <= uVar5 + 0xe) goto code_?;
    indices->vector[uVar5 + 0xe] = iVar48 + -2;
    if (indices->max_length <= uVar5 + 0xf) goto code_?;
    indices->vector[uVar5 + 0xf] = iVar48 + -0xb;
    if (indices->max_length <= uVar5 + 0x10) goto code_?;
    indices->vector[uVar5 + 0x10] = iVar48 + -2;
    if (indices->max_length <= uVar5 + 0x11) goto code_?;
    indices->vector[uVar5 + 0x11] = iVar48 + -3;
    if (indices->max_length <= uVar5 + 0x12) goto code_?;
    indices->vector[uVar5 + 0x12] = iVar48 + -9;
    if (indices->max_length <= uVar5 + 0x13) goto code_?;
    indices->vector[uVar5 + 0x13] = iVar48 + -8;
    if (indices->max_length <= uVar5 + 0x14) goto code_?;
    indices->vector[uVar5 + 0x14] = iVar48;
    if (indices->max_length <= uVar5 + 0x15) goto code_?;
    indices->vector[uVar5 + 0x15] = iVar48 + -9;
    if (indices->max_length <= uVar5 + 0x16) goto code_?;
    indices->vector[uVar5 + 0x16] = iVar48;
    if (indices->max_length <= uVar5 + 0x17) goto code_?;
    iVar49 = iVar48 + -1;
    iVar48 = iVar48 + 8;
    indices->vector[uVar5 + 0x17] = iVar49;
    coreRadius = (float)((int)coreRadius + 1);
    uVar5 = uVar5 + 0x18;
  } while ((int)coreRadius < numTubeSlices + -1);
  pMVar50 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar50,(MethodInfo *)0x0);
  if (pMVar50 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar50,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar50,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv2(pMVar50,value_02,(MethodInfo *)0x0);
    value_03 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar50,value_03,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar50,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar50,0,(MethodInfo *)0x0);
    return pMVar50;
  }
code_?:
  func_?();
  pcVar51 = (code *)swi(3);
  pMVar50 = (Mesh *)(*pcVar51)();
  return pMVar50;
code_?:
  func_?();
  goto code_?;
}


/* Mesh CreateTorus(Vector3, Single, Single, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateTorus
                 (Vector3 center,float coreRadius,float tubeRadius,int32_t numTubeSlices,
                 int32_t numSlices,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?();
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  if ((((coreRadius < _UNK_?) || (tubeRadius < _UNK_?)) || (numTubeSlices < 3)) ||
     (numSlices < 3)) {
    return (Mesh *)0x0;
  }
  iVar3 = numSlices + 1;
  iVar4 = (numTubeSlices + 1) * iVar3;
  iVar5 = iVar4;
  iStack_6 = iVar4;
  iStack_7 = iVar3;
  pVVar8 = TypeInfo__UnityEngine__Vector3;
  pVStack_9 = (Vector3__Array *)func_?();
  pVStack_10 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar4,pVVar8,iVar5)
  ;
  iVar5 = 0;
  iStack_11 = 0;
  uStack_12 = 0;
  fStack_13 = _UNK_? / (float)(numSlices + -1);
  fStack_14 = _UNK_? / (float)(numTubeSlices + -1);
  do {
    fStack_15 = (float)iStack_11 * fStack_14 * _UNK_?;
    dVar16 = (double)fStack_15;
    func_?();
    fStack_17 = (float)dVar16;
    dVar16 = (double)fStack_15;
    func_?();
    fStack_18 = (float)dVar16;
    iVar4 = 0;
    fStack_1 = fStack_18 * coreRadius;
    fStack_2 = fStack_17 * coreRadius;
    fStack_19 = fStack_2;
    fStack_20 = fStack_1;
    do {
      fStack_21 = (float)iVar4 * fStack_13 * _UNK_?;
      dVar16 = (double)fStack_21;
      func_?();
      fStack_22 = (float)dVar16;
      fStack_23 = fStack_2;
      uStack_24 = CONCAT44(uStack_12,fStack_1);
      fStack_15 = fStack_22 * fStack_18 * tubeRadius + fStack_20;
      dVar16 = (double)fStack_21;
      func_?();
      fStack_21 = (float)dVar16 * tubeRadius + uStack_24._4_4_;
      fStack_22 = fStack_22 * fStack_17 * tubeRadius + fStack_23;
      fStack_25 = fStack_22 - fStack_19;
      uStack_26 = CONCAT44(fStack_21 - 0.0,fStack_15 - fStack_20);
      puVar27 = (undefined8 *)func_?(&stack0xffffff7c,&uStack_26,0);
      if (pVStack_10 == (Vector3__Array *)0x0) goto code_?;
      func_?(iVar5,*puVar27,*(undefined4 *)(puVar27 + 1));
      fStack_28 = center.x + fStack_15;
      fStack_29 = center.y + fStack_21;
      fStack_30 = center.z + fStack_22;
      if (pVStack_9 == (Vector3__Array *)0x0) goto code_?;
      func_?(iVar5,CONCAT44(fStack_29,fStack_28),fStack_30);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar4 <= numSlices);
    iStack_11 = iStack_11 + 1;
  } while (iStack_11 <= numTubeSlices);
  uVar31 = 0;
  iStack_11 = 1;
  coreRadius = 0.0;
  indices = (Int32__Array *)func_?();
  iVar5 = 1;
  do {
    iVar4 = 0;
    uVar32 = uVar31;
    do {
      if (indices == (Int32__Array *)0x0) goto code_?;
      if (indices->max_length <= uVar32) {
code_?:
        func_?();
        goto code_?;
      }
      indices->vector[uVar32] = iVar5 + -1;
      if (indices->max_length <= uVar32 + 1) goto code_?;
      indices->vector[uVar32 + 1] = iVar5;
      if (indices->max_length <= uVar32 + 2) goto code_?;
      iVar3 = iVar3 + -1 + iVar5;
      indices->vector[uVar32 + 2] = iVar3;
      if (indices->max_length <= uVar32 + 3) goto code_?;
      indices->vector[uVar32 + 3] = iVar5;
      if (indices->max_length <= uVar32 + 4) goto code_?;
      indices->vector[uVar32 + 4] = numSlices + 1 + iVar5;
      uVar31 = uVar32 + 6;
      if (indices->max_length <= uVar32 + 5) goto code_?;
      iVar4 = iVar4 + 1;
      indices->vector[uVar32 + 5] = iVar3;
      iVar5 = iVar5 + 1;
      iVar3 = iStack_7;
      uVar32 = uVar31;
    } while (iVar4 < numSlices);
    coreRadius = (float)((int)coreRadius + 1);
    iVar5 = iStack_11 + iStack_7;
    iStack_11 = iVar5;
  } while ((int)coreRadius < numTubeSlices);
  pMVar33 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar33,(MethodInfo *)0x0);
  if (pMVar33 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar33,pVStack_9,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar33,pVStack_10,(MethodInfo *)0x0);
    value = ColorEx::ColorEx_GetFilledColorArray(iStack_6,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar33,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar33,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar33,0,(MethodInfo *)0x0);
    return pMVar33;
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  pMVar33 = (Mesh *)(*pcVar34)();
  return pMVar33;
}

