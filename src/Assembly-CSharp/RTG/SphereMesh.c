
/* Mesh CreateSphere(Single, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::SphereMesh::SphereMesh_CreateSphere
                 (float radius,int32_t numSlices,int32_t numStacks,Color *color,MethodInfo *method)

{
  method_00 = (MethodInfo *)CONCAT44(in_register_00000084,numStacks);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((radius < _UNK_?) || (numSlices < 3)) || (numStacks < 2)) {
    return (Mesh *)0x0;
  }
  uVar1 = numSlices + 1;
  arrayLength = uVar1 * (numStacks + 1);
  value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  value_00 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,arrayLength);
  iStackX_8 = 0;
  uVar2 = 0;
  lVar3 = 0;
  do {
    fVar4 = (float)FUN_?();
    fVar5 = (float)FUN_?();
    iVar6 = 0;
    if (0 < (int)uVar1) {
      pVVar7 = value_00->vector + lVar3;
      do {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar8 = (float)FUN_?();
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar10 = (pVVar9->rightVector).x;
        fVar11 = (pVVar9->rightVector).y;
        fVar12 = (pVVar9->rightVector).z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar13 = TypeInfo__UnityEngine__Vector3;
        fVar14 = (float)FUN_?();
        pVVar9 = pVVar13->static_fields;
        fVar15 = (pVVar9->forwardVector).y;
        uVar16 = (pVVar9->forwardVector).x;
        fVar17 = (pVVar9->forwardVector).z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          pVVar13 = TypeInfo__UnityEngine__Vector3;
        }
        pVVar9 = pVVar13->static_fields;
        uVar18 = (pVVar9->upVector).x;
        fVar12 = (pVVar9->upVector).z * fVar4 * radius +
                 (fVar17 * fVar14 + fVar12 * fVar8) * fVar5 * radius;
        if (value == (Vector3__Array *)0x0) goto code_?;
        if ((uint)value->max_length <= uVar2) goto DAT_?;
        uVar19._4_4_ = (pVVar9->upVector).y * fVar4 * radius +
                       (fVar15 * fVar14 + fVar11 * fVar8) * fVar5 * radius;
        uVar19._0_4_ = (float)uVar18 * fVar4 * radius +
                       ((float)uVar16 * fVar14 + (float)uVar10 * fVar8) * fVar5 * radius;
        *(undefined8 *)(((longlong)value - (longlong)value_00) + (longlong)pVVar7) = uVar19;
        *(float *)(((longlong)value - (longlong)value_00) + 8 + (longlong)pVVar7) = fVar12;
        if ((uint)value->max_length <= uVar2) goto DAT_?;
        aVStack_20[0]._0_8_ = uVar19;
        aVStack_20[0].z = fVar12;
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)aCStack_22,aVStack_20,method_00);
        if (value_00 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)value_00->max_length <= uVar2) goto DAT_?;
        fVar11 = pVVar21->y;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 1;
        pVVar7->x = pVVar21->x;
        pVVar7->y = fVar11;
        iVar6 = iVar6 + 1;
        pVVar7->z = pVVar21->z;
        pVVar7 = pVVar7 + 1;
      } while (iVar6 < (int)uVar1);
    }
    iStackX_8 = iStackX_8 + 1;
  } while (iStackX_8 < numStacks + 1);
  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,numSlices * numStacks * 6);
  uVar23 = 0;
  iVar6 = numSlices + 2;
  uVar2 = ~uVar1;
  iStackX_8 = 0;
  lVar3 = 0;
  do {
    uVar24 = uVar23 + 2;
    piVar25 = indices->vector + lVar3 + 1;
    iVar26 = -uVar1 + -1;
    lVar27 = lVar3;
    iVar28 = iVar6;
    do {
      if (indices == (Int32__Array *)0x0) goto code_?;
      if ((((uint)indices->max_length <= uVar23) ||
          (piVar25[-1] = iVar26 + iVar28, (uint)indices->max_length <= uVar24 - 1)) ||
         ((*piVar25 = iVar28 + -1, (uint)indices->max_length <= uVar24 ||
          ((indices->vector[(int)uVar24] = iVar28, (uint)indices->max_length <= uVar24 + 1 ||
           (indices->vector[(longlong)(int)uVar24 + 1] = iVar28,
           (uint)indices->max_length <= uVar24 + 2)))))) {
DAT_?:
        FUN_?();
        pcVar29 = (code *)swi(3);
        pMVar30 = (Mesh *)(*pcVar29)();
        return pMVar30;
      }
      uVar23 = uVar23 + 6;
      lVar3 = lVar27 + 6;
      piVar25 = piVar25 + 6;
      indices->vector[(longlong)(int)uVar24 + 2] = -uVar1 + iVar28;
      uVar31 = uVar24 + 3;
      uVar24 = uVar24 + 6;
      if ((uint)indices->max_length <= uVar31) goto DAT_?;
      iVar32 = iVar26 + iVar28;
      iVar28 = iVar28 + 1;
      indices->vector[lVar27 + 5] = iVar32;
      lVar27 = lVar3;
    } while ((int)(uVar2 + iVar28) < numSlices);
    iStackX_8 = iStackX_8 + 1;
    uVar2 = uVar2 - uVar1;
    iVar6 = iVar6 + uVar1;
  } while (iStackX_8 < numStacks);
  pMVar30 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar30,(MethodInfo *)0x0);
  if (pMVar30 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar30,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar30,value_00,(MethodInfo *)0x0);
    aCStack_22[0].r = color->r;
    aCStack_22[0].g = color->g;
    aCStack_22[0].b = color->b;
    aCStack_22[0].a = color->a;
    value_01 = ColorEx::ColorEx_GetFilledColorArray(arrayLength,aCStack_22,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar30,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar30,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar30,0,(MethodInfo *)0x0);
    return pMVar30;
  }
code_?:
  FUN_?();
  pcVar29 = (code *)swi(3);
  pMVar30 = (Mesh *)(*pcVar29)();
  return pMVar30;
}

