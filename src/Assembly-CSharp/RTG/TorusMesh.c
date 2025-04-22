
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
    if (value_00 == (Vector3__Array *)0x0) goto code_?;
    if (value_00->max_length <= uVar4) goto code_?;
    uVar20 = uVar4 + 1;
    pVStack_2->x = (fVar11 + (float)uVar17 * tubeVertRadius) - (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2->y = (fVar12 + (float)uVar18 * tubeVertRadius) - (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2->z = (fVar13 + fVar19 * tubeVertRadius) - fVar5 * tubeHrzRadius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (value_01 == (Vector3__Array *)0x0) goto code_?;
    fVar21 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar4) goto code_?;
    value_01->vector[uVar4].x = (pVVar16->upVector).x;
    value_01->vector[uVar4].y = fVar21;
    value_01->vector[uVar4].z = fVar19;
    if (value_02->max_length <= uVar20) goto code_?;
    pVVar3[1].x = (float)(undefined4)uVar10;
    pVVar3[1].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar16->upVector).x;
    uVar23 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar20) goto code_?;
    uVar24 = uVar4 + 2;
    pVStack_2[1].x = fVar11 + (float)uVar22 * tubeVertRadius + (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2[1].y = fVar12 + (float)uVar23 * tubeVertRadius + (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2[1].z = fVar13 + fVar19 * tubeVertRadius + fVar5 * tubeHrzRadius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar21 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar20) goto code_?;
    value_01->vector[uVar4 + 1].x = (pVVar16->upVector).x;
    value_01->vector[uVar4 + 1].y = fVar21;
    value_01->vector[uVar4 + 1].z = fVar19;
    if (value_02->max_length <= uVar24) goto code_?;
    pVVar3[2].x = (float)(undefined4)uVar10;
    pVVar3[2].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar25 = (pVVar16->upVector).x;
    uVar26 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar24) goto code_?;
    pVStack_2[2].x = fVar11 + (float)uVar25 * tubeVertRadius + (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2[2].y = fVar12 + (float)uVar26 * tubeVertRadius + (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2[2].z = fVar13 + fVar19 * tubeVertRadius + fVar5 * tubeHrzRadius;
    uVar20 = uVar4 + 3;
    if (value_01->max_length <= uVar24) goto code_?;
    value_01->vector[uVar4 + 2].x = fVar14;
    value_01->vector[uVar4 + 2].y = fVar15;
    value_01->vector[uVar4 + 2].z = fVar5;
    if (value_02->max_length <= uVar20) goto code_?;
    pVVar3[3].x = (float)(undefined4)uVar10;
    pVVar3[3].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27 = (pVVar16->upVector).x;
    uVar28 = (pVVar16->upVector).y;
    fVar19 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar20) goto code_?;
    pVStack_2[3].x = (fVar11 - (float)uVar27 * tubeVertRadius) + (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2[3].y = (fVar12 - (float)uVar28 * tubeVertRadius) + (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2[3].z = (fVar13 - fVar19 * tubeVertRadius) + fVar5 * tubeHrzRadius;
    uVar24 = uVar4 + 4;
    if (value_01->max_length <= uVar20) goto code_?;
    value_01->vector[uVar4 + 3].x = fVar14;
    value_01->vector[uVar4 + 3].y = fVar15;
    value_01->vector[uVar4 + 3].z = fVar5;
    if (value_02->max_length <= uVar24) goto code_?;
    pVVar3[4].x = (float)(undefined4)uVar10;
    pVVar3[4].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar16->upVector).x;
    uVar30 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar24) goto code_?;
    pVStack_2[4].x = (float)(undefined4)uVar10 * tubeHrzRadius + (fVar11 - (float)uVar29 * tubeVertRadius);
    pVStack_2[4].y = (float)uVar10._4_4_ * tubeHrzRadius + (fVar12 - (float)uVar30 * tubeVertRadius);
    pVStack_2[4].z = fVar5 * tubeHrzRadius + (fVar13 - fVar14 * tubeVertRadius);
    uVar20 = uVar4 + 5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31._0_4_ = (pVVar16->upVector).x;
    uVar31._4_4_ = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar24) goto code_?;
    value_01->vector[uVar4 + 4].x = (float)(int)(uVar31 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 4].y = (float)(int)((uVar31 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 4].z = -fVar14;
    if (value_02->max_length <= uVar20) goto code_?;
    pVVar3[5].x = (float)(undefined4)uVar10;
    pVVar3[5].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar32 = (pVVar16->upVector).x;
    uVar33 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar20) goto code_?;
    uVar24 = uVar4 + 6;
    pVStack_2[5].x = (fVar11 - (float)uVar32 * tubeVertRadius) - (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2[5].y = (fVar12 - (float)uVar33 * tubeVertRadius) - (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2[5].z = (fVar13 - fVar14 * tubeVertRadius) - fVar5 * tubeHrzRadius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34._0_4_ = (pVVar16->upVector).x;
    uVar34._4_4_ = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_01->max_length <= uVar20) goto code_?;
    value_01->vector[uVar4 + 5].x = (float)(int)(uVar34 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 5].y = (float)(int)((uVar34 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 5].z = -fVar14;
    if (value_02->max_length <= uVar24) goto code_?;
    pVVar3[6].x = (float)(undefined4)uVar10;
    pVVar3[6].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar35 = (pVVar16->upVector).x;
    uVar36 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar24) goto code_?;
    uVar20 = uVar4 + 7;
    pVStack_2[6].x = (fVar11 - (float)uVar35 * tubeVertRadius) - (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2[6].y = (fVar12 - (float)uVar36 * tubeVertRadius) - (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2[6].z = (fVar13 - fVar14 * tubeVertRadius) - fVar5 * tubeHrzRadius;
    if (value_01->max_length <= uVar24) goto code_?;
    value_01->vector[uVar4 + 6].x = (float)(int)(uVar10 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 6].y = (float)(int)((uVar10 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 6].z = -fVar5;
    if (value_02->max_length <= uVar20) goto code_?;
    pVVar3[7].x = (float)(undefined4)uVar10;
    pVVar3[7].y = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar37 = (pVVar16->upVector).x;
    uVar38 = (pVVar16->upVector).y;
    fVar14 = (pVVar16->upVector).z;
    if (value_00->max_length <= uVar20) goto code_?;
    pVVar3 = pVVar3 + 8;
    pVStack_2[7].x = (fVar11 + (float)uVar37 * tubeVertRadius) - (float)(undefined4)uVar10 * tubeHrzRadius;
    pVStack_2[7].y = (fVar12 + (float)uVar38 * tubeVertRadius) - (float)uVar10._4_4_ * tubeHrzRadius;
    pVStack_2[7].z = (fVar13 + fVar14 * tubeVertRadius) - fVar5 * tubeHrzRadius;
    pVStack_2 = pVStack_2 + 8;
    if (value_01->max_length <= uVar20) goto code_?;
    value_01->vector[uVar4 + 7].x = (float)(int)(uVar10 ^ 0x8000000080000000);
    value_01->vector[uVar4 + 7].y = (float)(int)((uVar10 ^ 0x8000000080000000) >> 0x20);
    value_01->vector[uVar4 + 7].z = -fVar5;
    iStack_1 = iStack_1 + 1;
    uVar4 = uVar4 + 8;
  } while (iStack_1 <= numTubeSlices);
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numTubeSlices * 0x18);
  iVar39 = 0xf;
  coreRadius = 0.0;
  uVar4 = 0;
  if (indices != (Int32__Array *)0x0) {
    do {
      if (indices->max_length <= uVar4) goto code_?;
      indices->vector[uVar4] = iVar39 + -0xf;
      if (indices->max_length <= uVar4 + 1) goto code_?;
      indices->vector[uVar4 + 1] = iVar39 + -0xe;
      if (indices->max_length <= uVar4 + 2) goto code_?;
      indices->vector[uVar4 + 2] = iVar39 + -6;
      if (indices->max_length <= uVar4 + 3) goto code_?;
      indices->vector[uVar4 + 3] = iVar39 + -0xf;
      if (indices->max_length <= uVar4 + 4) goto code_?;
      indices->vector[uVar4 + 4] = iVar39 + -6;
      if (indices->max_length <= uVar4 + 5) goto code_?;
      indices->vector[uVar4 + 5] = iVar39 + -7;
      if (indices->max_length <= uVar4 + 6) goto code_?;
      indices->vector[uVar4 + 6] = iVar39 + -0xd;
      if (indices->max_length <= uVar4 + 7) goto code_?;
      indices->vector[uVar4 + 7] = iVar39 + -0xc;
      if (indices->max_length <= uVar4 + 8) goto code_?;
      indices->vector[uVar4 + 8] = iVar39 + -4;
      if (indices->max_length <= uVar4 + 9) goto code_?;
      indices->vector[uVar4 + 9] = iVar39 + -0xd;
      if (indices->max_length <= uVar4 + 10) goto code_?;
      indices->vector[uVar4 + 10] = iVar39 + -4;
      if (indices->max_length <= uVar4 + 0xb) goto code_?;
      indices->vector[uVar4 + 0xb] = iVar39 + -5;
      if (indices->max_length <= uVar4 + 0xc) goto code_?;
      indices->vector[uVar4 + 0xc] = iVar39 + -0xb;
      if (indices->max_length <= uVar4 + 0xd) goto code_?;
      indices->vector[uVar4 + 0xd] = iVar39 + -10;
      if (indices->max_length <= uVar4 + 0xe) goto code_?;
      indices->vector[uVar4 + 0xe] = iVar39 + -2;
      if (indices->max_length <= uVar4 + 0xf) goto code_?;
      indices->vector[uVar4 + 0xf] = iVar39 + -0xb;
      if (indices->max_length <= uVar4 + 0x10) goto code_?;
      indices->vector[uVar4 + 0x10] = iVar39 + -2;
      if (indices->max_length <= uVar4 + 0x11) goto code_?;
      indices->vector[uVar4 + 0x11] = iVar39 + -3;
      if (indices->max_length <= uVar4 + 0x12) goto code_?;
      indices->vector[uVar4 + 0x12] = iVar39 + -9;
      if (indices->max_length <= uVar4 + 0x13) goto code_?;
      indices->vector[uVar4 + 0x13] = iVar39 + -8;
      if (indices->max_length <= uVar4 + 0x14) goto code_?;
      indices->vector[uVar4 + 0x14] = iVar39;
      if (indices->max_length <= uVar4 + 0x15) goto code_?;
      indices->vector[uVar4 + 0x15] = iVar39 + -9;
      if (indices->max_length <= uVar4 + 0x16) goto code_?;
      indices->vector[uVar4 + 0x16] = iVar39;
      if (indices->max_length <= uVar4 + 0x17) goto code_?;
      iVar40 = iVar39 + -1;
      iVar39 = iVar39 + 8;
      indices->vector[uVar4 + 0x17] = iVar40;
      coreRadius = (float)((int)coreRadius + 1);
      uVar4 = uVar4 + 0x18;
    } while ((int)coreRadius < numTubeSlices + -1);
    pMVar41 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar41,(MethodInfo *)0x0);
    if (pMVar41 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar41,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar41,value_01,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv2(pMVar41,value_02,(MethodInfo *)0x0);
      value_03 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar41,value_03,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar41,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar41,0,(MethodInfo *)0x0);
      return pMVar41;
    }
  }
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  pMVar41 = (Mesh *)(*pcVar42)();
  return pMVar41;
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
  if ((((coreRadius < 0.0001) || (tubeRadius < 0.0001)) || (numTubeSlices < 3)) || (numSlices < 3)) {
    return (Mesh *)0x0;
  }
  iVar1 = numSlices + 1;
  iVar2 = (numTubeSlices + 1) * iVar1;
  iVar3 = iVar2;
  iStack_4 = iVar2;
  iStack_5 = iVar1;
  pVVar6 = TypeInfo__UnityEngine__Vector3;
  pVStack_7 = (Vector3__Array *)func_?();
  pVStack_8 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2,pVVar6,iVar3);
  iVar3 = 0;
  fStack_9 = 360.0 / (float)(numSlices + -1);
  iStack_10 = 0;
  fStack_11 = 360.0 / (float)(numTubeSlices + -1);
  do {
    fStack_12 = (float)iStack_10 * fStack_11 * 0.017453292;
    dVar13 = (double)fStack_12;
    func_?();
    fStack_14 = (float)dVar13;
    dVar13 = (double)fStack_12;
    func_?();
    fStack_15 = (float)dVar13;
    iVar2 = 0;
    fStack_16 = fStack_15 * coreRadius;
    fStack_17 = fStack_14 * coreRadius;
    do {
      fStack_18 = (float)iVar2 * fStack_9 * 0.017453292;
      dVar13 = (double)fStack_18;
      func_?();
      fStack_19 = (float)dVar13;
      fStack_12 = fStack_19 * fStack_15 * tubeRadius + fStack_16;
      dVar13 = (double)fStack_18;
      func_?();
      fStack_18 = (float)dVar13 * tubeRadius + 0.0;
      fStack_19 = fStack_19 * fStack_14 * tubeRadius + fStack_17;
      fStack_20 = fStack_19 - fStack_17;
      uStack_21 = CONCAT44(fStack_18 - 0.0,fStack_12 - fStack_16);
      puVar22 = (undefined8 *)func_?(&stack0xffffff94,&uStack_21,0);
      if (pVStack_8 == (Vector3__Array *)0x0) goto code_?;
      func_?(iVar3,*puVar22,*(undefined4 *)(puVar22 + 1));
      fStack_23 = center.x + fStack_12;
      fStack_24 = center.y + fStack_18;
      fStack_25 = center.z + fStack_19;
      if (pVStack_7 == (Vector3__Array *)0x0) goto code_?;
      func_?(iVar3,CONCAT44(fStack_24,fStack_23),fStack_25);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 <= numSlices);
    iStack_10 = iStack_10 + 1;
  } while (iStack_10 <= numTubeSlices);
  uVar26 = 0;
  indices = (Int32__Array *)func_?();
  coreRadius = 0.0;
  iStack_10 = 1;
  do {
    iVar2 = 0;
    iVar3 = iStack_10;
    uVar27 = uVar26;
    if (indices == (Int32__Array *)0x0) goto code_?;
    do {
      if (indices->max_length <= uVar27) {
code_?:
        func_?();
        goto code_?;
      }
      indices->vector[uVar27] = iVar3 + -1;
      if (indices->max_length <= uVar27 + 1) goto code_?;
      indices->vector[uVar27 + 1] = iVar3;
      if (indices->max_length <= uVar27 + 2) goto code_?;
      indices->vector[uVar27 + 2] = iVar3 + -1 + iVar1;
      if (indices->max_length <= uVar27 + 3) goto code_?;
      indices->vector[uVar27 + 3] = iVar3;
      if (indices->max_length <= uVar27 + 4) goto code_?;
      indices->vector[uVar27 + 4] = iVar3 + iVar1;
      uVar26 = uVar27 + 6;
      if (indices->max_length <= uVar27 + 5) goto code_?;
      iVar2 = iVar2 + 1;
      iVar1 = numSlices + iVar3;
      iVar3 = iVar3 + 1;
      indices->vector[uVar27 + 5] = iVar1;
      uVar27 = uVar26;
      iVar1 = iStack_5;
    } while (iVar2 < numSlices);
    coreRadius = (float)((int)coreRadius + 1);
    iStack_10 = iStack_10 + iStack_5;
  } while ((int)coreRadius < numTubeSlices);
  pMVar28 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar28,(MethodInfo *)0x0);
  if (pMVar28 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar28,pVStack_7,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar28,pVStack_8,(MethodInfo *)0x0);
    value = ColorEx::ColorEx_GetFilledColorArray(iStack_4,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar28,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar28,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar28,0,(MethodInfo *)0x0);
    return pMVar28;
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  pMVar28 = (Mesh *)(*pcVar29)();
  return pMVar28;
}

