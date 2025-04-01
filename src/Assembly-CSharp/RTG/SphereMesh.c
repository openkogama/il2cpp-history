
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
  iStack_7 = numSlices;
  iStack_8 = 0;
  fStack_9 = _UNK_? / (float)numSlices;
  fStack_10 = (float)numStacks;
  do {
    fStack_11 = ((float)iStack_8 * _UNK_?) / fStack_10;
    dVar12 = (double)fStack_11;
    func_?();
    pIStack_13 = (Int32__Array *)(float)dVar12;
    dVar12 = (double)fStack_11;
    func_?();
    fStack_14 = (float)dVar12;
    iVar15 = 0;
    if (0 < iStack_1) {
      do {
        fStack_11 = (float)iVar15 * fStack_9 * _UNK_?;
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_17,(MethodInfo *)0x0)
        ;
        uStack_18._0_4_ = pVVar16->x;
        uStack_18._4_4_ = pVVar16->y;
        fStack_19 = pVVar16->z;
        dVar12 = (double)fStack_11;
        func_?();
        fStack_20 = (float)dVar12;
        fStack_21 = (float)uStack_18 * fStack_20;
        fStack_22 = uStack_18._4_4_ * fStack_20;
        fStack_20 = fStack_19 * fStack_20;
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                           ((Vector3 *)&stack0xffffff70,(MethodInfo *)0x0);
        uStack_23._0_4_ = pVVar16->x;
        uStack_23._4_4_ = pVVar16->y;
        fStack_24 = pVVar16->z;
        dVar12 = (double)fStack_11;
        func_?();
        fVar25 = (float)dVar12;
        fVar26 = fStack_24 * fVar25 + fStack_20;
        fStack_20 = ((float)uStack_23 * fVar25 + fStack_21) * fStack_14 * radius;
        fStack_22 = (uStack_23._4_4_ * fVar25 + fStack_22) * fStack_14 * radius;
        fStack_21 = fVar26 * fStack_14 * radius;
        pVVar16 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                           ((Vector3 *)&stack0xffffff64,(MethodInfo *)0x0);
        uStack_27._0_4_ = pVVar16->x;
        uStack_27._4_4_ = pVVar16->y;
        fStack_28 = pVVar16->z;
        fStack_29 = (float)(undefined4)uStack_27 * (float)pIStack_13 * radius + fStack_20;
        fStack_30 = (float)uStack_27._4_4_ * (float)pIStack_13 * radius + fStack_22;
        fStack_31 = fStack_28 * (float)pIStack_13 * radius + fStack_21;
        if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
        func_?(iVar2);
        func_?(&uStack_32,iVar2);
        value.z = fStack_33;
        value.x = (float)(undefined4)uStack_32;
        value.y = (float)uStack_32._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                  ((Vector3 *)&stack0xffffff58,value,(MethodInfo *)0x0);
        if (pVStack_6 == (Vector3__Array *)0x0) goto code_?;
        func_?(iVar2);
        iVar15 = iVar15 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar15 < iStack_1);
    }
    iStack_8 = iStack_8 + 1;
  } while (iStack_8 < numStacks + 1);
  uVar34 = 0;
  radius = 0.0;
  iStack_8 = 0;
  pIVar35 = (Int32__Array *)func_?(TypeInfo__System__Int32,numSlices * numStacks * 6);
  fStack_11 = (float)numStacks;
  do {
    iVar15 = 0;
    iVar2 = (int)radius + 1 + iStack_1;
    fVar25 = radius;
    uVar36 = uVar34;
    do {
      if (pIVar35 == (Int32__Array *)0x0) goto code_?;
      if (pIVar35->max_length <= uVar36) {
code_?:
        func_?();
        goto code_?;
      }
      pIVar35->vector[uVar36] = (int32_t)fVar25;
      if (pIVar35->max_length <= uVar36 + 1) goto code_?;
      pIVar35->vector[uVar36 + 1] = iVar2 + -1;
      if (pIVar35->max_length <= uVar36 + 2) goto code_?;
      pIVar35->vector[uVar36 + 2] = iVar2;
      if (pIVar35->max_length <= uVar36 + 3) goto code_?;
      pIVar35->vector[uVar36 + 3] = iVar2;
      if (pIVar35->max_length <= uVar36 + 4) goto code_?;
      pIVar35->vector[uVar36 + 4] = (int)fVar25 + 1;
      uVar34 = uVar36 + 6;
      if (pIVar35->max_length <= uVar36 + 5) goto code_?;
      pIVar35->vector[uVar36 + 5] = (int32_t)fVar25;
      iVar15 = iVar15 + 1;
      fVar25 = (float)((int)fVar25 + 1);
      iVar2 = iVar2 + 1;
      uVar36 = uVar34;
    } while (iVar15 < iStack_7);
    iStack_8 = iStack_8 + 1;
    radius = (float)((int)radius + iStack_1);
    pIStack_13 = pIVar35;
  } while (iStack_8 < numStacks);
  pMVar37 = (Mesh *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar37,(MethodInfo *)0x0);
  if (pMVar37 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar37,pVStack_5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
              (pMVar37,pVStack_6,(MethodInfo *)0x0);
    value_00 = ColorEx::ColorEx_GetFilledColorArray(iStack_3,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar37,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar37,pIStack_13,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar37,0,(MethodInfo *)0x0);
    return pMVar37;
  }
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  pMVar37 = (Mesh *)(*pcVar38)();
  return pMVar37;
}

