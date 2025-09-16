
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
    fVar13 = (float)uVar11 * coreRadius + center.x;
    fVar14 = (float)uVar12 * coreRadius + center.y;
    fVar15 = fVar6 * coreRadius + center.z;
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
    if (value_00 == (Vector3__Array *)0x0) goto code_?;
    if (value_00->max_length <= uVar5) goto code_?;
    uVar22 = uVar5 + 1;
    pVStack_2->x = (fVar13 + (float)uVar19 * tubeVertRadius) - (float)uVar11 * tubeHrzRadius;
    pVStack_2->y = (fVar14 + (float)uVar20 * tubeVertRadius) - (float)uVar12 * tubeHrzRadius;
    pVStack_2->z = (fVar21 * tubeVertRadius + fVar15) - fVar6 * tubeHrzRadius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (value_01 == (Vector3__Array *)0x0) goto code_?;
    fVar23 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_01->max_length <= uVar5) goto code_?;
    value_01->vector[uVar5].x = (pVVar18->upVector).x;
    value_01->vector[uVar5].y = fVar23;
    value_01->vector[uVar5].z = fVar21;
    if (value_02->max_length <= uVar22) goto code_?;
    pVVar3[1].x = (float)uVar11;
    pVVar3[1].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24 = (pVVar18->upVector).x;
    uVar25 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar22) goto code_?;
    uVar26 = uVar5 + 2;
    pVStack_2[1].x = (float)uVar11 * tubeHrzRadius + (float)uVar24 * tubeVertRadius + fVar13;
    pVStack_2[1].y = (float)uVar12 * tubeHrzRadius + (float)uVar25 * tubeVertRadius + fVar14;
    pVStack_2[1].z = fVar6 * tubeHrzRadius + fVar21 * tubeVertRadius + fVar15;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar23 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_01->max_length <= uVar22) goto code_?;
    value_01->vector[uVar5 + 1].x = (pVVar18->upVector).x;
    value_01->vector[uVar5 + 1].y = fVar23;
    value_01->vector[uVar5 + 1].z = fVar21;
    if (value_02->max_length <= uVar26) goto code_?;
    pVVar3[2].x = (float)uVar11;
    pVVar3[2].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar18->upVector).x;
    uVar28 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar26) goto code_?;
    pVStack_2[2].x = (float)uVar11 * tubeHrzRadius + fVar13 + (float)uVar27 * tubeVertRadius;
    pVStack_2[2].y = (float)uVar12 * tubeHrzRadius + fVar14 + (float)uVar28 * tubeVertRadius;
    pVStack_2[2].z = fVar6 * tubeHrzRadius + fVar21 * tubeVertRadius + fVar15;
    uVar22 = uVar5 + 3;
    if (value_01->max_length <= uVar26) goto code_?;
    value_01->vector[uVar5 + 2].x = fVar16;
    value_01->vector[uVar5 + 2].y = fVar17;
    value_01->vector[uVar5 + 2].z = fVar6;
    if (value_02->max_length <= uVar22) goto code_?;
    pVVar3[3].x = (float)uVar11;
    pVVar3[3].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar18->upVector).x;
    uVar30 = (pVVar18->upVector).y;
    fVar21 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar22) goto code_?;
    pVStack_2[3].x = (float)uVar11 * tubeHrzRadius + (fVar13 - (float)uVar29 * tubeVertRadius);
    pVStack_2[3].y = (float)uVar12 * tubeHrzRadius + (fVar14 - (float)uVar30 * tubeVertRadius);
    pVStack_2[3].z = fVar6 * tubeHrzRadius + (fVar15 - fVar21 * tubeVertRadius);
    uVar26 = uVar5 + 4;
    if (value_01->max_length <= uVar22) goto code_?;
    value_01->vector[uVar5 + 3].x = fVar16;
    value_01->vector[uVar5 + 3].y = fVar17;
    value_01->vector[uVar5 + 3].z = fVar6;
    if (value_02->max_length <= uVar26) goto code_?;
    pVVar3[4].x = (float)uVar11;
    pVVar3[4].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31 = (pVVar18->upVector).x;
    uVar32 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar26) goto code_?;
    pVStack_2[4].x = (float)uVar11 * tubeHrzRadius + (fVar13 - (float)uVar31 * tubeVertRadius);
    pVStack_2[4].y = (float)uVar12 * tubeHrzRadius + (fVar14 - (float)uVar32 * tubeVertRadius);
    pVStack_2[4].z = fVar6 * tubeHrzRadius + (fVar15 - fVar16 * tubeVertRadius);
    uVar22 = uVar5 + 5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar33 = (pVVar18->upVector).x;
    uVar34 = (pVVar18->upVector).y;
    uVar35 = uVar34 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar16 = (float)((uint)(pVVar18->upVector).z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (value_01->max_length <= uVar26) goto code_?;
    value_01->vector[uVar5 + 4].x =
         (float)(uVar33 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value_01->vector[uVar5 + 4].y = (float)uVar35;
    value_01->vector[uVar5 + 4].z = fVar16;
    if (value_02->max_length <= uVar22) goto code_?;
    pVVar3[5].x = (float)uVar11;
    pVVar3[5].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar36 = (pVVar18->upVector).x;
    uVar37 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar22) goto code_?;
    uVar26 = uVar5 + 6;
    pVStack_2[5].x = (fVar13 - (float)uVar36 * tubeVertRadius) - (float)uVar11 * tubeHrzRadius;
    pVStack_2[5].y = (fVar14 - (float)uVar37 * tubeVertRadius) - (float)uVar12 * tubeHrzRadius;
    pVStack_2[5].z = (fVar15 - fVar16 * tubeVertRadius) - fVar6 * tubeHrzRadius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar38 = (pVVar18->upVector).x;
    uVar39 = (pVVar18->upVector).y;
    uVar35 = uVar39 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar16 = (float)((uint)(pVVar18->upVector).z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (value_01->max_length <= uVar22) goto code_?;
    value_01->vector[uVar5 + 5].x =
         (float)(uVar38 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value_01->vector[uVar5 + 5].y = (float)uVar35;
    value_01->vector[uVar5 + 5].z = fVar16;
    if (value_02->max_length <= uVar26) goto code_?;
    pVVar3[6].x = (float)uVar11;
    pVVar3[6].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar22 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar40 = (pVVar18->upVector).x;
    uVar41 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar26) goto code_?;
    uVar35 = uVar5 + 7;
    uVar42 = uVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVStack_2[6].x = (fVar13 - (float)uVar40 * tubeVertRadius) - (float)uVar11 * tubeHrzRadius;
    pVStack_2[6].y = (fVar14 - (float)uVar41 * tubeVertRadius) - (float)uVar12 * tubeHrzRadius;
    pVStack_2[6].z = (fVar15 - fVar16 * tubeVertRadius) - fVar6 * tubeHrzRadius;
    if (value_01->max_length <= uVar26) goto code_?;
    value_01->vector[uVar5 + 6].x = (float)uVar42;
    value_01->vector[uVar5 + 6].y = (float)(uVar12 ^ uVar22);
    value_01->vector[uVar5 + 6].z = (float)((uint)fVar6 ^ uVar22);
    if (value_02->max_length <= uVar35) goto code_?;
    pVVar3[7].x = (float)uVar11;
    pVVar3[7].y = fVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar22 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar43 = (pVVar18->upVector).x;
    uVar44 = (pVVar18->upVector).y;
    fVar16 = (pVVar18->upVector).z;
    if (value_00->max_length <= uVar35) goto code_?;
    pVVar3 = pVVar3 + 8;
    uVar26 = uVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVStack_2[7].x = (fVar13 + (float)uVar43 * tubeVertRadius) - (float)uVar11 * tubeHrzRadius;
    pVStack_2[7].y = ((float)uVar44 * tubeVertRadius + fVar14) - (float)uVar12 * tubeHrzRadius;
    pVStack_2[7].z = (fVar16 * tubeVertRadius + fVar15) - fVar6 * tubeHrzRadius;
    pVStack_2 = pVStack_2 + 8;
    if (value_01->max_length <= uVar35) goto code_?;
    value_01->vector[uVar5 + 7].x = (float)uVar26;
    value_01->vector[uVar5 + 7].y = (float)(uVar12 ^ uVar22);
    value_01->vector[uVar5 + 7].z = (float)((uint)fVar6 ^ uVar22);
    iStack_1 = iStack_1 + 1;
    uVar5 = uVar5 + 8;
  } while (iStack_1 <= numTubeSlices);
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numTubeSlices * 0x18);
  iVar45 = 0xf;
  coreRadius = 0.0;
  uVar5 = 0;
  if (indices != (Int32__Array *)0x0) {
    do {
      if (indices->max_length <= uVar5) goto code_?;
      indices->vector[uVar5] = iVar45 + -0xf;
      if (indices->max_length <= uVar5 + 1) goto code_?;
      indices->vector[uVar5 + 1] = iVar45 + -0xe;
      if (indices->max_length <= uVar5 + 2) goto code_?;
      indices->vector[uVar5 + 2] = iVar45 + -6;
      if (indices->max_length <= uVar5 + 3) goto code_?;
      indices->vector[uVar5 + 3] = iVar45 + -0xf;
      if (indices->max_length <= uVar5 + 4) goto code_?;
      indices->vector[uVar5 + 4] = iVar45 + -6;
      if (indices->max_length <= uVar5 + 5) goto code_?;
      indices->vector[uVar5 + 5] = iVar45 + -7;
      if (indices->max_length <= uVar5 + 6) goto code_?;
      indices->vector[uVar5 + 6] = iVar45 + -0xd;
      if (indices->max_length <= uVar5 + 7) goto code_?;
      indices->vector[uVar5 + 7] = iVar45 + -0xc;
      if (indices->max_length <= uVar5 + 8) goto code_?;
      indices->vector[uVar5 + 8] = iVar45 + -4;
      if (indices->max_length <= uVar5 + 9) goto code_?;
      indices->vector[uVar5 + 9] = iVar45 + -0xd;
      if (indices->max_length <= uVar5 + 10) goto code_?;
      indices->vector[uVar5 + 10] = iVar45 + -4;
      if (indices->max_length <= uVar5 + 0xb) goto code_?;
      indices->vector[uVar5 + 0xb] = iVar45 + -5;
      if (indices->max_length <= uVar5 + 0xc) goto code_?;
      indices->vector[uVar5 + 0xc] = iVar45 + -0xb;
      if (indices->max_length <= uVar5 + 0xd) goto code_?;
      indices->vector[uVar5 + 0xd] = iVar45 + -10;
      if (indices->max_length <= uVar5 + 0xe) goto code_?;
      indices->vector[uVar5 + 0xe] = iVar45 + -2;
      if (indices->max_length <= uVar5 + 0xf) goto code_?;
      indices->vector[uVar5 + 0xf] = iVar45 + -0xb;
      if (indices->max_length <= uVar5 + 0x10) goto code_?;
      indices->vector[uVar5 + 0x10] = iVar45 + -2;
      if (indices->max_length <= uVar5 + 0x11) goto code_?;
      indices->vector[uVar5 + 0x11] = iVar45 + -3;
      if (indices->max_length <= uVar5 + 0x12) goto code_?;
      indices->vector[uVar5 + 0x12] = iVar45 + -9;
      if (indices->max_length <= uVar5 + 0x13) goto code_?;
      indices->vector[uVar5 + 0x13] = iVar45 + -8;
      if (indices->max_length <= uVar5 + 0x14) goto code_?;
      indices->vector[uVar5 + 0x14] = iVar45;
      if (indices->max_length <= uVar5 + 0x15) goto code_?;
      indices->vector[uVar5 + 0x15] = iVar45 + -9;
      if (indices->max_length <= uVar5 + 0x16) goto code_?;
      indices->vector[uVar5 + 0x16] = iVar45;
      if (indices->max_length <= uVar5 + 0x17) goto code_?;
      iVar46 = iVar45 + -1;
      iVar45 = iVar45 + 8;
      indices->vector[uVar5 + 0x17] = iVar46;
      coreRadius = (float)((int)coreRadius + 1);
      uVar5 = uVar5 + 0x18;
    } while ((int)coreRadius < numTubeSlices + -1);
    pMVar47 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar47,(MethodInfo *)0x0);
    if (pMVar47 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar47,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                (pMVar47,value_01,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv2
                (pMVar47,value_02,(MethodInfo *)0x0);
      value_03 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar47,value_03,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                (pMVar47,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                (pMVar47,0,(MethodInfo *)0x0);
      return pMVar47;
    }
  }
code_?:
  func_?();
  pcVar48 = (code *)swi(3);
  pMVar47 = (Mesh *)(*pcVar48)();
  return pMVar47;
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
  if ((((coreRadius < _UNK_?) || (tubeRadius < _UNK_?)) || (numTubeSlices < 3)) ||
     (numSlices < 3)) {
    return (Mesh *)0x0;
  }
  iStack_1 = numSlices + 1;
  iVar2 = (numTubeSlices + 1) * iStack_1;
  iVar3 = iVar2;
  iStack_4 = iVar2;
  pVVar5 = TypeInfo__UnityEngine__Vector3;
  pVStack_6 = (Vector3__Array *)func_?();
  pVStack_7 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2,pVVar5,iVar3)
  ;
  iVar3 = 0;
  iStack_8 = 0;
  fStack_9 = _UNK_? / (float)(numSlices + -1);
  fStack_10 = _UNK_? / (float)(numTubeSlices + -1);
  do {
    fStack_11 = (float)iStack_8 * fStack_10 * _UNK_?;
    dVar12 = (double)fStack_11;
    func_?();
    fStack_13 = (float)dVar12;
    dVar12 = (double)fStack_11;
    func_?();
    fStack_14 = (float)dVar12;
    iVar2 = 0;
    fStack_15 = fStack_14 * coreRadius;
    fStack_16 = fStack_13 * coreRadius;
    do {
      fStack_17 = (float)iVar2 * fStack_9 * _UNK_?;
      dVar12 = (double)fStack_17;
      func_?();
      fStack_18 = (float)dVar12;
      fStack_11 = fStack_18 * fStack_14 * tubeRadius + fStack_15;
      dVar12 = (double)fStack_17;
      func_?();
      fStack_17 = (float)dVar12 * tubeRadius + 0.0;
      fStack_18 = fStack_18 * fStack_13 * tubeRadius + fStack_16;
      fStack_19 = fStack_18 - fStack_16;
      uStack_20 = CONCAT44(fStack_17 - 0.0,fStack_11 - fStack_15);
      puVar21 = (undefined8 *)func_?(&stack0xffffff94,&uStack_20,0);
      if (pVStack_7 == (Vector3__Array *)0x0) goto code_?;
      func_?(iVar3,*puVar21,*(undefined4 *)(puVar21 + 1));
      fStack_22 = center.x + fStack_11;
      fStack_23 = center.y + fStack_17;
      fStack_24 = center.z + fStack_18;
      if (pVStack_6 == (Vector3__Array *)0x0) goto code_?;
      func_?(iVar3,CONCAT44(fStack_23,fStack_22),fStack_24);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 <= numSlices);
    iStack_8 = iStack_8 + 1;
  } while (iStack_8 <= numTubeSlices);
  uVar25 = 0;
  indices = (Int32__Array *)func_?();
  coreRadius = 0.0;
  iStack_8 = 1;
  do {
    iVar2 = 0;
    iVar3 = iStack_8;
    uVar26 = uVar25;
    if (indices == (Int32__Array *)0x0) goto code_?;
    do {
      if (indices->max_length <= uVar26) {
code_?:
        func_?();
        goto code_?;
      }
      indices->vector[uVar26] = iVar3 + -1;
      if (indices->max_length <= uVar26 + 1) goto code_?;
      indices->vector[uVar26 + 1] = iVar3;
      if (indices->max_length <= uVar26 + 2) goto code_?;
      indices->vector[uVar26 + 2] = iVar3 + -1 + iStack_1;
      if (indices->max_length <= uVar26 + 3) goto code_?;
      indices->vector[uVar26 + 3] = iVar3;
      if (indices->max_length <= uVar26 + 4) goto code_?;
      indices->vector[uVar26 + 4] = iVar3 + iStack_1;
      uVar25 = uVar26 + 6;
      if (indices->max_length <= uVar26 + 5) goto code_?;
      iVar2 = iVar2 + 1;
      iVar27 = iStack_1 + -1 + iVar3;
      iVar3 = iVar3 + 1;
      indices->vector[uVar26 + 5] = iVar27;
      uVar26 = uVar25;
    } while (iVar2 < numSlices);
    coreRadius = (float)((int)coreRadius + 1);
    iStack_8 = iStack_8 + iStack_1;
  } while ((int)coreRadius < numTubeSlices);
  pMVar28 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar28,(MethodInfo *)0x0);
  if (pMVar28 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar28,pVStack_6,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar28,pVStack_7,(MethodInfo *)0x0);
    value = ColorEx::ColorEx_GetFilledColorArray(iStack_4,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar28,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar28,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar28,0,(MethodInfo *)0x0);
    return pMVar28;
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  pMVar28 = (Mesh *)(*pcVar29)();
  return pMVar28;
}

