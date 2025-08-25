
/* Mesh CreateSphere(Single, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::SphereMesh::SphereMesh_CreateSphere
                 (float radius,int32_t numSlices,int32_t numStacks,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((radius < _UNK_?) || (numSlices < 3)) || (numStacks < 2)) {
    return (Mesh *)0x0;
  }
  iStack_1 = numSlices + 1;
  iVar2 = iStack_1 * (numStacks + 1);
  iStack_3 = iVar2;
  pVVar4 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2);
  pVStack_5 = pVVar4;
  pVStack_6 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2);
  iVar2 = 0;
  iStack_7 = 0;
  fStack_8 = _UNK_? / (float)numSlices;
  fStack_9 = (float)numStacks;
  do {
    fStack_10 = ((float)iStack_7 * _UNK_?) / fStack_9;
    dVar11 = (double)fStack_10;
    func_?();
    fStack_12 = (float)dVar11;
    dVar11 = (double)fStack_10;
    func_?();
    fStack_13 = (float)dVar11;
    iVar14 = 0;
    if (0 < iStack_1) {
      do {
        fStack_10 = (float)iVar14 * fStack_8 * _UNK_?;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_16,(MethodInfo *)0x0)
        ;
        uStack_17._0_4_ = pVVar15->x;
        uStack_17._4_4_ = pVVar15->y;
        fStack_18 = pVVar15->z;
        dVar11 = (double)fStack_10;
        func_?();
        fStack_19 = (float)dVar11;
        fStack_20 = uStack_17._4_4_ * fStack_19;
        fStack_21 = (float)uStack_17 * fStack_19;
        fStack_19 = fStack_18 * fStack_19;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                           ((Vector3 *)&stack0xffffff74,(MethodInfo *)0x0);
        uStack_22._0_4_ = pVVar15->x;
        uStack_22._4_4_ = pVVar15->y;
        fStack_23 = pVVar15->z;
        dVar11 = (double)fStack_10;
        func_?();
        fVar24 = (float)dVar11;
        fStack_21 = ((float)uStack_22 * fVar24 + fStack_21) * fStack_13 * radius;
        fStack_20 = (fStack_20 + uStack_22._4_4_ * fVar24) * fStack_13 * radius;
        fStack_19 = (fStack_19 + fStack_23 * fVar24) * fStack_13 * radius;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                           ((Vector3 *)&stack0xffffff68,(MethodInfo *)0x0);
        uStack_25._0_4_ = pVVar15->x;
        uStack_25._4_4_ = pVVar15->y;
        fStack_26 = pVVar15->z;
        fStack_27 = (float)(undefined4)uStack_25 * fStack_12 * radius + fStack_21;
        fStack_28 = (float)uStack_25._4_4_ * fStack_12 * radius + fStack_20;
        fStack_29 = fStack_26 * fStack_12 * radius + fStack_19;
        if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
        func_?(iVar2);
        func_?(&uStack_30,iVar2);
        value.z = fStack_31;
        value.x = (float)(undefined4)uStack_30;
        value.y = (float)uStack_30._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                  ((Vector3 *)&stack0xffffff5c,value,(MethodInfo *)0x0);
        if (pVStack_6 == (Vector3__Array *)0x0) goto code_?;
        func_?(iVar2);
        iVar14 = iVar14 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar14 < iStack_1);
    }
    iStack_7 = iStack_7 + 1;
  } while (iStack_7 < numStacks + 1);
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numSlices * numStacks * 6);
  radius = 0.0;
  fStack_9 = (float)(iStack_1 + -1);
  fStack_12 = (float)numStacks;
  iStack_7 = 0;
  uVar32 = 0;
  do {
    iVar14 = iStack_7 + 1 + iStack_1;
    iVar33 = 0;
    iVar2 = iStack_7;
    if (indices == (Int32__Array *)0x0) goto code_?;
    do {
      if (indices->max_length <= uVar32) {
code_?:
        func_?();
        goto code_?;
      }
      indices->vector[uVar32] = iVar2;
      if (indices->max_length <= uVar32 + 1) goto code_?;
      indices->vector[uVar32 + 1] = iVar14 + -1;
      if (indices->max_length <= uVar32 + 2) goto code_?;
      indices->vector[uVar32 + 2] = iVar14;
      if (indices->max_length <= uVar32 + 3) goto code_?;
      indices->vector[uVar32 + 3] = iVar14;
      if (indices->max_length <= uVar32 + 4) goto code_?;
      indices->vector[uVar32 + 4] = iVar2 + 1;
      uVar34 = uVar32 + 6;
      if (indices->max_length <= uVar32 + 5) goto code_?;
      indices->vector[uVar32 + 5] = iVar2;
      iVar33 = iVar33 + 1;
      iVar14 = iVar14 + 1;
      iVar2 = iVar2 + 1;
      uVar32 = uVar34;
    } while (iVar33 < (int)fStack_9);
    radius = (float)((int)radius + 1);
    iStack_7 = iStack_7 + iStack_1;
  } while ((int)radius < numStacks);
  pMVar35 = (Mesh *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar35,(MethodInfo *)0x0);
  if (pMVar35 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar35,pVStack_5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar35,pVStack_6,(MethodInfo *)0x0);
    value_00 = ColorEx::ColorEx_GetFilledColorArray(iStack_3,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar35,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar35,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar35,0,(MethodInfo *)0x0);
    return pMVar35;
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  pMVar35 = (Mesh *)(*pcVar36)();
  return pMVar35;
}

