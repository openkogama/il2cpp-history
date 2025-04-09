
/* Mesh CreateCircleXY(Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CircleMesh::CircleMesh_CreateCircleXY
                 (float circleRadius,int32_t numBorderPoints,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((circleRadius < _UNK_?) || (numBorderPoints < 4)) {
    return (Mesh *)0x0;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,numBorderPoints + 1);
  if (value != (Vector3__Array *)0x0) {
    value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,value->max_length);
    indices = (Int32__Array *)func_?(TypeInfo__System__Int32,(numBorderPoints + -1) * 3);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar1 = _UNK_?;
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    if (value->max_length == 0) {
code_?:
      func_?();
    }
    else {
      value->vector[0].x = (pVVar2->zeroVector).x;
      value->vector[0].y = fVar3;
      value->vector[0].z = fVar4;
      uStack_5 = 0;
      pVVar6 = value_00->vector;
      do {
        pVVar6 = pVVar6 + 1;
        fVar4 = (float)(int)uStack_5 * (fVar1 / (float)(numBorderPoints + -1)) * _UNK_?;
        dVar7 = (double)fVar4;
        func_?();
        dVar8 = (double)fVar4;
        func_?();
        uStack_5 = uStack_5 + 1;
        if (value->max_length <= uStack_5) goto code_?;
        *(ulonglong *)(((int)value - (int)value_00) + (int)pVVar6) =
             CONCAT44((float)dVar8 * circleRadius,(float)dVar7 * circleRadius);
        *(undefined4 *)(((int)value - (int)value_00) + 8 + (int)pVVar6) = 0;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (value_00 == (Vector3__Array *)0x0) goto code_?;
        fVar3 = (pVVar2->forwardVector).y;
        fVar4 = (pVVar2->forwardVector).z;
        if (value_00->max_length <= uStack_5) goto code_?;
        pVVar6->x = (pVVar2->forwardVector).x;
        pVVar6->y = fVar3;
        pVVar6->z = fVar4;
      } while ((int)uStack_5 < numBorderPoints);
      iVar9 = 1;
      uVar10 = 0;
      do {
        if (indices == (Int32__Array *)0x0) goto code_?;
        if (indices->max_length <= uVar10) goto code_?;
        indices->vector[uVar10] = 0;
        if (indices->max_length <= uVar10 + 1) goto code_?;
        indices->vector[uVar10 + 1] = iVar9;
        if (indices->max_length <= uVar10 + 2) goto code_?;
        iVar9 = iVar9 + 1;
        indices->vector[uVar10 + 2] = iVar9;
        uVar10 = uVar10 + 3;
      } while (iVar9 < numBorderPoints);
      pMVar11 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar11,(MethodInfo *)0x0);
      if (pMVar11 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar11,value,(MethodInfo *)0x0);
        value_01 = ColorEx::ColorEx_GetFilledColorArray(value->max_length,color,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar11,value_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                  (pMVar11,value_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                  (pMVar11,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                  (pMVar11,0,(MethodInfo *)0x0);
        return pMVar11;
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pMVar11 = (Mesh *)(*pcVar12)();
  return pMVar11;
}


/* Mesh CreateWireCircleXY(Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CircleMesh::CircleMesh_CreateWireCircleXY
                 (float circleRadius,int32_t numBorderPoints,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((circleRadius < _UNK_?) || (numBorderPoints < 4)) {
    return (Mesh *)0x0;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,numBorderPoints);
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numBorderPoints);
  uVar1 = 0;
  piVar2 = indices->vector;
  pVVar3 = value->vector;
  fVar4 = _UNK_? / (float)(numBorderPoints + -1);
  do {
    fVar5 = (float)(int)uVar1 * fVar4 * _UNK_?;
    dVar6 = (double)fVar5;
    func_?();
    dVar7 = (double)fVar5;
    func_?();
    if (value == (Vector3__Array *)0x0) goto code_?;
    if (value->max_length <= uVar1) {
code_?:
      func_?();
      goto code_?;
    }
    pVVar3->x = (float)dVar6 * circleRadius;
    pVVar3->y = (float)dVar7 * circleRadius;
    pVVar3->z = 0.0;
    if (indices == (Int32__Array *)0x0) goto code_?;
    if (indices->max_length <= uVar1) goto code_?;
    pVVar3 = pVVar3 + 1;
    *piVar2 = uVar1;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < numBorderPoints);
  pMVar8 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar8,(MethodInfo *)0x0);
  if (pMVar8 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar8,value,(MethodInfo *)0x0)
    ;
    value_00 = ColorEx::ColorEx_GetFilledColorArray(numBorderPoints,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
              (pMVar8,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
              (pMVar8,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar8,0,(MethodInfo *)0x0);
    return pMVar8;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pMVar8 = (Mesh *)(*pcVar9)();
  return pMVar8;
}

