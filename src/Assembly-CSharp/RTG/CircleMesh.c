
/* Mesh CreateCircleXY(Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CircleMesh::CircleMesh_CreateCircleXY(float circleRadius,int32_t numBorderPoints,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((circleRadius < 0.0001) || (numBorderPoints < 4)) {
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
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    if (value->max_length == 0) {
code_?:
      func_?();
    }
    else {
      value->vector[0].x = (pVVar1->zeroVector).x;
      value->vector[0].y = fVar2;
      value->vector[0].z = fVar3;
      uStack_4 = 0;
      pVVar5 = value_00->vector;
      do {
        pVVar5 = pVVar5 + 1;
        fVar3 = (float)(int)uStack_4 * (360.0 / (float)(numBorderPoints + -1)) * 0.017453292;
        dVar6 = (double)fVar3;
        func_?();
        dVar7 = (double)fVar3;
        func_?();
        uStack_4 = uStack_4 + 1;
        if (value->max_length <= uStack_4) goto code_?;
        *(ulonglong *)(((int)value - (int)value_00) + (int)pVVar5) = CONCAT44((float)dVar7 * circleRadius,(float)dVar6 * circleRadius);
        *(undefined4 *)(((int)value - (int)value_00) + 8 + (int)pVVar5) = 0;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (value_00 == (Vector3__Array *)0x0) goto code_?;
        fVar2 = (pVVar1->forwardVector).y;
        fVar3 = (pVVar1->forwardVector).z;
        if (value_00->max_length <= uStack_4) goto code_?;
        pVVar5->x = (pVVar1->forwardVector).x;
        pVVar5->y = fVar2;
        pVVar5->z = fVar3;
      } while ((int)uStack_4 < numBorderPoints);
      iVar8 = 1;
      uVar9 = 0;
      do {
        if (indices == (Int32__Array *)0x0) goto code_?;
        if (indices->max_length <= uVar9) goto code_?;
        indices->vector[uVar9] = 0;
        if (indices->max_length <= uVar9 + 1) goto code_?;
        indices->vector[uVar9 + 1] = iVar8;
        if (indices->max_length <= uVar9 + 2) goto code_?;
        iVar8 = iVar8 + 1;
        indices->vector[uVar9 + 2] = iVar8;
        uVar9 = uVar9 + 3;
      } while (iVar8 < numBorderPoints);
      pMVar10 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar10,(MethodInfo *)0x0);
      if (pMVar10 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar10,value,(MethodInfo *)0x0);
        value_01 = ColorEx::ColorEx_GetFilledColorArray(value->max_length,color,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar10,value_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar10,value_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar10,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar10,0,(MethodInfo *)0x0);
        return pMVar10;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pMVar10 = (Mesh *)(*pcVar11)();
  return pMVar10;
}


/* Mesh CreateWireCircleXY(Single, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CircleMesh::CircleMesh_CreateWireCircleXY(float circleRadius,int32_t numBorderPoints,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((circleRadius < 0.0001) || (numBorderPoints < 4)) {
    return (Mesh *)0x0;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,numBorderPoints);
  indices = (Int32__Array *)func_?(TypeInfo__System__Int32,numBorderPoints);
  uVar1 = 0;
  piVar2 = indices->vector;
  pVVar3 = value->vector;
  do {
    fVar4 = (float)(int)uVar1 * (360.0 / (float)(numBorderPoints + -1)) * 0.017453292;
    dVar5 = (double)fVar4;
    func_?();
    dVar6 = (double)fVar4;
    func_?();
    if (value == (Vector3__Array *)0x0) goto code_?;
    if (value->max_length <= uVar1) {
code_?:
      func_?();
      goto code_?;
    }
    pVVar3->x = (float)dVar5 * circleRadius;
    pVVar3->y = (float)dVar6 * circleRadius;
    pVVar3->z = 0.0;
    if (indices == (Int32__Array *)0x0) goto code_?;
    if (indices->max_length <= uVar1) goto code_?;
    pVVar3 = pVVar3 + 1;
    *piVar2 = uVar1;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < numBorderPoints);
  pMVar7 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar7,(MethodInfo *)0x0);
  if (pMVar7 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar7,value,(MethodInfo *)0x0);
    value_00 = ColorEx::ColorEx_GetFilledColorArray(numBorderPoints,color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar7,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar7,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar7,0,(MethodInfo *)0x0);
    return pMVar7;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar7 = (Mesh *)(*pcVar8)();
  return pMVar7;
}

