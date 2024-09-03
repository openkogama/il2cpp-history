
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
  iStack_1 = numStacks + 1;
  iVar2 = (numSlices + 1) * iStack_1;
  iStack_3 = iVar2;
  pVVar4 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2);
  pVStack_5 = pVVar4;
  pVStack_6 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2);
  iVar2 = 0;
  iStack_7 = 0;
  fStack_8 = _UNK_? / (float)numSlices;
  fStack_9 = (float)(iStack_1 + -1);
  do {
    fStack_10 = ((float)iStack_7 * _UNK_?) / fStack_9;
    dVar11 = (double)fStack_10;
    func_?();
    fStack_12 = (float)dVar11;
    dVar11 = (double)fStack_10;
    func_?();
    iVar13 = 0;
    pIStack_14 = (Int32__Array *)(float)dVar11;
    if (numSlices != -1 && -1 < numSlices + 1) {
      do {
        fStack_10 = (float)iVar13 * fStack_8 * _UNK_?;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_16,(MethodInfo *)0x0)
        ;
        uStack_17._0_4_ = pVVar15->x;
        uStack_17._4_4_ = pVVar15->y;
        fStack_18 = pVVar15->z;
        dVar11 = (double)fStack_10;
        func_?();
        fStack_19 = (float)dVar11;
        fStack_20 = (float)uStack_17 * fStack_19;
        fStack_21 = uStack_17._4_4_ * fStack_19;
        fStack_19 = fStack_18 * fStack_19;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                           ((Vector3 *)&stack0xffffff74,(MethodInfo *)0x0);
        uStack_22._0_4_ = pVVar15->x;
        uStack_22._4_4_ = pVVar15->y;
        fStack_23 = pVVar15->z;
        dVar11 = (double)fStack_10;
        func_?();
        fVar24 = (float)dVar11;
        fStack_20 = (fStack_20 + (float)uStack_22 * fVar24) * (float)pIStack_14 * radius;
        fStack_21 = (fStack_21 + uStack_22._4_4_ * fVar24) * (float)pIStack_14 * radius;
        fStack_19 = (fStack_19 + fStack_23 * fVar24) * (float)pIStack_14 * radius;
        pVVar15 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                           ((Vector3 *)&stack0xffffff68,(MethodInfo *)0x0);
        uStack_25._0_4_ = pVVar15->x;
        uStack_25._4_4_ = pVVar15->y;
        fStack_26 = pVVar15->z;
        fStack_27 = (float)(undefined4)uStack_25 * fStack_12 * radius + fStack_20;
        fStack_28 = (float)uStack_25._4_4_ * fStack_12 * radius + fStack_21;
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
        iVar13 = iVar13 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar13 < numSlices + 1);
    }
    iStack_7 = iStack_7 + 1;
  } while (iStack_7 < iStack_1);
  pIVar32 = (Int32__Array *)func_?(TypeInfo__System__Int32,numStacks * numSlices * 6);
  radius = 0.0;
  fStack_10 = (float)(iStack_1 + -1);
  iStack_7 = 0;
  fStack_9 = (float)numSlices;
  uVar33 = 0;
  do {
    iVar13 = iStack_7 + numSlices + 2;
    iVar34 = 0;
    iVar2 = iStack_7;
    if (pIVar32 == (Int32__Array *)0x0) goto code_?;
    do {
      if (pIVar32->max_length <= uVar33) {
code_?:
        func_?();
        goto code_?;
      }
      pIVar32->vector[uVar33] = iVar2;
      if (pIVar32->max_length <= uVar33 + 1) goto code_?;
      pIVar32->vector[uVar33 + 1] = iVar13 + -1;
      if (pIVar32->max_length <= uVar33 + 2) goto code_?;
      pIVar32->vector[uVar33 + 2] = iVar13;
      if (pIVar32->max_length <= uVar33 + 3) goto code_?;
      pIVar32->vector[uVar33 + 3] = iVar13;
      if (pIVar32->max_length <= uVar33 + 4) goto code_?;
      pIVar32->vector[uVar33 + 4] = iVar2 + 1;
      uVar35 = uVar33 + 6;
      if (pIVar32->max_length <= uVar33 + 5) goto code_?;
      pIVar32->vector[uVar33 + 5] = iVar2;
      iVar34 = iVar34 + 1;
      iVar13 = iVar13 + 1;
      iVar2 = iVar2 + 1;
      uVar33 = uVar35;
    } while (iVar34 < numSlices);
    radius = (float)((int)radius + 1);
    iStack_7 = iStack_7 + numSlices + 1;
    pIStack_14 = pIVar32;
  } while ((int)radius < (int)fStack_10);
  pMVar36 = (Mesh *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar36,(MethodInfo *)0x0);
  if (pMVar36 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar36,pVStack_5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar36,pVStack_6,(MethodInfo *)0x0);
    value_00 = ColorEx::ColorEx_GetFilledColorArray(iStack_3,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar36,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar36,pIStack_14,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar36,0,(MethodInfo *)0x0);
    return pMVar36;
  }
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  pMVar36 = (Mesh *)(*pcVar37)();
  return pMVar36;
}

