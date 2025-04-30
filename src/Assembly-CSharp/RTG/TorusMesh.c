
/* Mesh CreateCylindricalTorus(Vector3, Single, Single, Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateCylindricalTorus(Vector3 center,float coreRadius,float tubeHrzRadius,float tubeVertRadius,int32_t numTubeSlices,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((coreRadius < 0.0001) || (tubeHrzRadius < 0.0001)) || (numTubeSlices < 3)) {
    return (Mesh *)0x0;
  }
  arrayLength = numTubeSlices * 8 + 8;
  value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  value_01 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  value_02 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,arrayLength);
  iStack_1 = 0;
  pVStack_2 = value_00->vector;
  pVVar3 = value_02->vector;
  uVar4 = 0;
  do {
    fVar5 = (float)iStack_1 * (360.0 / (float)(numTubeSlices + -1)) * 0.017453292;
    dVar6 = (double)fVar5;
    func_?();
    dVar7 = (double)fVar5;
    func_?();
    value.y = 0.0;
    value.x = (float)dVar6;
    value.z = (float)dVar7;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&puStack_9,value,(MethodInfo *)0x0);
    uVar10._0_4_ = pVVar8->x;
    uVar10._4_4_ = pVVar8->y;
    fVar5 = pVVar8->z;
    fVar11 = center.x + (float)(undefined4)uVar10 * coreRadius;
    fVar12 = center.y + (float)uVar10._4_4_ * coreRadius;
    fVar13 = center.z + fVar5 * coreRadius;
    if (value_02 == (Vector2__Array *)0x0) goto code_?;
    if (value_02->max_length <= uVar4) goto code_?;
    pVVar3->x = (float)(undefined4)uVar10;
    pVVar3->y = fVar5;
    fVar14 = (float)(undefined4)uVar10;
    fVar15 = (float)uVar10._4_4_;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = (pVVar16->upVector).x;
    uVar18 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    fVar20 = (float)(undefined4)uVar10 * tubeHrzRadius;
    fVar21 = fVar5 * tubeHrzRadius;
    fVar22 = (float)uVar10._4_4_ * tubeHrzRadius;
    if (value_00 == (Vector3__Array *)0x0) goto code_?;
    if (value_00->max_length <= uVar4) goto code_?;
    uVar23 = uVar4 + 1;
    pVStack_2->x = ((float)uVar17 * tubeVertRadius + fVar11) - fVar20;
    pVStack_2->y = ((float)uVar18 * tubeVertRadius + fVar12) - fVar22;
    pVStack_2->z = (fVar19 * tubeVertRadius + fVar13) - fVar21;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (value_01 == (Vector3__Array *)0x0) goto code_?;
    fVar24 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar4) goto code_?;
    value_01->vector[uVar4].x = (pVVar16->upVector).x;
    value_01->vector[uVar4].y = fVar24;
    value_01->vector[uVar4].z = fVar19;
    if (value_02->max_length <= uVar23) goto code_?;
    pVVar3[1].x = (float)(undefined4)uVar10;
    pVVar3[1].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25 = (pVVar16->upVector).x;
    uVar26 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar23) goto code_?;
    uVar27 = uVar4 + 2;
    pVStack_2[1].x = fVar20 + (float)uVar25 * tubeVertRadius + fVar11;
    pVStack_2[1].y = fVar22 + (float)uVar26 * tubeVertRadius + fVar12;
    pVStack_2[1].z = fVar21 + fVar19 * tubeVertRadius + fVar13;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar24 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar23) goto code_?;
    value_01->vector[uVar4 + 1].x = (pVVar16->upVector).x;
    value_01->vector[uVar4 + 1].y = fVar24;
    value_01->vector[uVar4 + 1].z = fVar19;
    if (value_02->max_length <= uVar27) goto code_?;
    pVVar3[2].x = (float)(undefined4)uVar10;
    pVVar3[2].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar28 = (pVVar16->upVector).x;
    uVar29 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar27) goto code_?;
    pVStack_2[2].x = fVar20 + (float)uVar28 * tubeVertRadius + fVar11;
    pVStack_2[2].y = fVar22 + (float)uVar29 * tubeVertRadius + fVar12;
    pVStack_2[2].z = fVar21 + fVar19 * tubeVertRadius + fVar13;
    uVar23 = uVar4 + 3;
    if (value_01->max_length <= uVar27) goto code_?;
    value_01->vector[uVar4 + 2].x = fVar14;
    value_01->vector[uVar4 + 2].y = fVar15;
    value_01->vector[uVar4 + 2].z = fVar5;
    if (value_02->max_length <= uVar23) goto code_?;
    pVVar3[3].x = (float)(undefined4)uVar10;
    pVVar3[3].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar16->upVector).x;
    uVar31 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar23) goto code_?;
    pVStack_2[3].x = fVar20 + (fVar11 - (float)uVar30 * tubeVertRadius);
    pVStack_2[3].y = fVar22 + (fVar12 - (float)uVar31 * tubeVertRadius);
    pVStack_2[3].z = fVar21 + (fVar13 - fVar19 * tubeVertRadius);
    uVar27 = uVar4 + 4;
    if (value_01->max_length <= uVar23) goto code_?;
    value_01->vector[uVar4 + 3].x = fVar14;
    value_01->vector[uVar4 + 3].y = fVar15;
    value_01->vector[uVar4 + 3].z = fVar5;
    if (value_02->max_length <= uVar27) goto code_?;
    pVVar3[4].x = (float)(undefined4)uVar10;
    pVVar3[4].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar32 = (pVVar16->upVector).x;
    uVar33 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar27) goto code_?;
    pVStack_2[4].x = fVar20 + (fVar11 - (float)uVar32 * tubeVertRadius);
    pVStack_2[4].y = fVar22 + (fVar12 - (float)uVar33 * tubeVertRadius);
    pVStack_2[4].z = fVar21 + (fVar13 - fVar14 * tubeVertRadius);
    uVar23 = uVar4 + 5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34._0_4_ = (pVVar16->upVector).x;
    uVar34._4_4_ = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar27) goto code_?;
    value_01->vector[uVar4 + 4].x = (float)(int)(uVar34 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 4].y = (float)(int)((uVar34 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 4].z = -fVar14;
    if (value_02->max_length <= uVar23) goto code_?;
    pVVar3[5].x = (float)(undefined4)uVar10;
    pVVar3[5].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar35 = (pVVar16->upVector).x;
    uVar36 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar23) goto code_?;
    uVar27 = uVar4 + 6;
    pVStack_2[5].x = (fVar11 - (float)uVar35 * tubeVertRadius) - fVar20;
    pVStack_2[5].y = (fVar12 - (float)uVar36 * tubeVertRadius) - fVar22;
    pVStack_2[5].z = (fVar13 - fVar14 * tubeVertRadius) - fVar21;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar37._0_4_ = (pVVar16->upVector).x;
    uVar37._4_4_ = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar23) goto code_?;
    value_01->vector[uVar4 + 5].x = (float)(int)(uVar37 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 5].y = (float)(int)((uVar37 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 5].z = -fVar14;
    if (value_02->max_length <= uVar27) goto code_?;
    pVVar3[6].x = (float)(undefined4)uVar10;
    pVVar3[6].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar38 = (pVVar16->upVector).x;
    uVar39 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar27) goto code_?;
    uVar23 = uVar4 + 7;
    pVStack_2[6].x = (fVar11 - (float)uVar38 * tubeVertRadius) - fVar20;
    pVStack_2[6].y = (fVar12 - (float)uVar39 * tubeVertRadius) - fVar22;
    pVStack_2[6].z = (fVar13 - fVar14 * tubeVertRadius) - fVar21;
    if (value_01->max_length <= uVar27) goto code_?;
    value_01->vector[uVar4 + 6].x = (float)(int)(uVar10 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 6].y = (float)(int)((uVar10 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 6].z = -fVar5;
    if (value_02->max_length <= uVar23) goto code_?;
    pVVar3[7].x = (float)(undefined4)uVar10;
    pVVar3[7].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar40 = (pVVar16->upVector).x;
    uVar41 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar23) goto code_?;
    pVVar3 = pVVar3 + 8;
    pVStack_2[7].x = ((float)uVar40 * tubeVertRadius + fVar11) - fVar20;
    pVStack_2[7].y = ((float)uVar41 * tubeVertRadius + fVar12) - fVar22;
    pVStack_2[7].z = (fVar14 * tubeVertRadius + fVar13) - fVar21;
    pVStack_2 = pVStack_2 + 8;
    if (value_01->max_length <= uVar23) goto code_?;
    value_01->vector[uVar4 + 7].x = (float)(int)(uVar10 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 7].y = (float)(int)((uVar10 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 7].z = -fVar5;
    iStack_1 = iStack_1 + 1;
    uVar4 = uVar4 + 8;
  } while (iStack_1 <= numTubeSlices);
  iVar42 = 0xf;
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numTubeSlices * 0x18);
  coreRadius = 0.0;
  uVar4 = 0;
  do {
    if (indices == (Int32__Array *)0x0) goto code_?;
    if (indices->max_length <= uVar4) goto code_?;
    indices->vector[uVar4] = iVar42 + -0xf;
    if (indices->max_length <= uVar4 + 1) goto code_?;
    indices->vector[uVar4 + 1] = iVar42 + -0xe;
    if (indices->max_length <= uVar4 + 2) goto code_?;
    indices->vector[uVar4 + 2] = iVar42 + -6;
    if (indices->max_length <= uVar4 + 3) goto code_?;
    indices->vector[uVar4 + 3] = iVar42 + -0xf;
    if (indices->max_length <= uVar4 + 4) goto code_?;
    indices->vector[uVar4 + 4] = iVar42 + -6;
    if (indices->max_length <= uVar4 + 5) goto code_?;
    indices->vector[uVar4 + 5] = iVar42 + -7;
    if (indices->max_length <= uVar4 + 6) goto code_?;
    indices->vector[uVar4 + 6] = iVar42 + -0xd;
    if (indices->max_length <= uVar4 + 7) goto code_?;
    indices->vector[uVar4 + 7] = iVar42 + -0xc;
    if (indices->max_length <= uVar4 + 8) goto code_?;
    indices->vector[uVar4 + 8] = iVar42 + -4;
    if (indices->max_length <= uVar4 + 9) goto code_?;
    indices->vector[uVar4 + 9] = iVar42 + -0xd;
    if (indices->max_length <= uVar4 + 10) goto code_?;
    indices->vector[uVar4 + 10] = iVar42 + -4;
    if (indices->max_length <= uVar4 + 0xb) goto code_?;
    indices->vector[uVar4 + 0xb] = iVar42 + -5;
    if (indices->max_length <= uVar4 + 0xc) goto code_?;
    indices->vector[uVar4 + 0xc] = iVar42 + -0xb;
    if (indices->max_length <= uVar4 + 0xd) goto code_?;
    indices->vector[uVar4 + 0xd] = iVar42 + -10;
    if (indices->max_length <= uVar4 + 0xe) goto code_?;
    indices->vector[uVar4 + 0xe] = iVar42 + -2;
    if (indices->max_length <= uVar4 + 0xf) goto code_?;
    indices->vector[uVar4 + 0xf] = iVar42 + -0xb;
    if (indices->max_length <= uVar4 + 0x10) goto code_?;
    indices->vector[uVar4 + 0x10] = iVar42 + -2;
    if (indices->max_length <= uVar4 + 0x11) goto code_?;
    indices->vector[uVar4 + 0x11] = iVar42 + -3;
    if (indices->max_length <= uVar4 + 0x12) goto code_?;
    indices->vector[uVar4 + 0x12] = iVar42 + -9;
    if (indices->max_length <= uVar4 + 0x13) goto code_?;
    indices->vector[uVar4 + 0x13] = iVar42 + -8;
    if (indices->max_length <= uVar4 + 0x14) goto code_?;
    indices->vector[uVar4 + 0x14] = iVar42;
    if (indices->max_length <= uVar4 + 0x15) goto code_?;
    indices->vector[uVar4 + 0x15] = iVar42 + -9;
    if (indices->max_length <= uVar4 + 0x16) goto code_?;
    indices->vector[uVar4 + 0x16] = iVar42;
    if (indices->max_length <= uVar4 + 0x17) goto code_?;
    iVar43 = iVar42 + -1;
    iVar42 = iVar42 + 8;
    indices->vector[uVar4 + 0x17] = iVar43;
    coreRadius = (float)((int)coreRadius + 1);
    uVar4 = uVar4 + 0x18;
  } while ((int)coreRadius < numTubeSlices + -1);
  pMVar44 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar44,(MethodInfo *)0x0);
  if (pMVar44 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar44,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar44,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv2(pMVar44,value_02,(MethodInfo *)0x0);
    value_03 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar44,value_03,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar44,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar44,0,(MethodInfo *)0x0);
    return pMVar44;
  }
code_?:
  func_?();
  pcVar45 = (code *)swi(3);
  pMVar44 = (Mesh *)(*pcVar45)();
  return pMVar44;
code_?:
  func_?();
  goto code_?;
}


/* Mesh CreateTorus(Vector3, Single, Single, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::TorusMesh::TorusMesh_CreateTorus(Vector3 center,float coreRadius,float tubeRadius,int32_t numTubeSlices,int32_t numSlices,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?();
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  if ((((coreRadius < 0.0001) || (tubeRadius < 0.0001)) || (numTubeSlices < 3)) || (numSlices < 3)) {
    return (Mesh *)0x0;
  }
  iVar3 = numSlices + 1;
  iVar4 = (numTubeSlices + 1) * iVar3;
  iVar5 = iVar4;
  iStack_6 = iVar4;
  iStack_7 = iVar3;
  pVVar8 = TypeInfo__UnityEngine__Vector3;
  pVStack_9 = (Vector3__Array *)func_?();
  pVStack_10 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar4,pVVar8,iVar5);
  iVar5 = 0;
  iStack_11 = 0;
  uStack_12 = 0;
  fStack_13 = 360.0 / (float)(numSlices + -1);
  fStack_14 = 360.0 / (float)(numTubeSlices + -1);
  do {
    fStack_15 = (float)iStack_11 * fStack_14 * 0.017453292;
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
      fStack_21 = (float)iVar4 * fStack_13 * 0.017453292;
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
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar33,pVStack_9,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar33,pVStack_10,(MethodInfo *)0x0);
    value = ColorEx::ColorEx_GetFilledColorArray(iStack_6,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar33,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar33,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar33,0,(MethodInfo *)0x0);
    return pMVar33;
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  pMVar33 = (Mesh *)(*pcVar34)();
  return pMVar33;
}

