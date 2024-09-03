
/* Mesh CreateCoordSystemAxesLines(Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::LineMesh::LineMesh_CreateCoordSystemAxesLines
                 (float axisLength,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&::_5211FBC4418F45E3906E7CF462D8B9DD6E03A0F578F58053A4E00000F721A0FE_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (axisLength < _UNK_?) {
    return (Mesh *)0x0;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (value != (Vector3__Array *)0x0) {
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    if (value->max_length != 0) {
      value->vector[0].x = (pVVar1->zeroVector).x;
      value->vector[0].y = fVar2;
      value->vector[0].z = fVar3;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar4 = (pVVar1->rightVector).x;
      uVar5 = (pVVar1->rightVector).y;
      fVar3 = (pVVar1->rightVector).z;
      if (1 < value->max_length) {
        value->vector[1].x = (float)uVar4 * axisLength;
        value->vector[1].y = (float)uVar5 * axisLength;
        value->vector[1].z = fVar3 * axisLength;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar6 = (pVVar1->upVector).x;
        uVar7 = (pVVar1->upVector).y;
        fVar3 = (pVVar1->upVector).z;
        if (2 < value->max_length) {
          value->vector[2].x = (float)uVar6 * axisLength;
          value->vector[2].y = (float)uVar7 * axisLength;
          value->vector[2].z = fVar3 * axisLength;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar8 = (pVVar1->forwardVector).x;
          uVar9 = (pVVar1->forwardVector).y;
          fVar3 = (pVVar1->forwardVector).z;
          if (3 < value->max_length) {
            value->vector[3].x = (float)uVar8 * axisLength;
            value->vector[3].y = (float)uVar9 * axisLength;
            value->vector[3].z = fVar3 * axisLength;
            indices = (Int32__Array *)func_?(TypeInfo__System__Int32,6);
            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
            RuntimeHelpers_InitializeArray_1
                      ((Array *)indices,
                       __5211FBC4418F45E3906E7CF462D8B9DD6E03A0F578F58053A4E00000F721A0FE_Field,
                       (MethodInfo *)0x0);
            pMVar10 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar10,(MethodInfo *)0x0);
            if (pMVar10 != (Mesh *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                        (pMVar10,value,(MethodInfo *)0x0);
              value_00 = ColorEx::ColorEx_GetFilledColorArray(4,color,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                        (pMVar10,value_00,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                        (pMVar10,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                        (pMVar10,0,(MethodInfo *)0x0);
              return pMVar10;
            }
            goto code_?;
          }
        }
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pMVar10 = (Mesh *)(*pcVar11)();
  return pMVar10;
}


/* Mesh CreateLine(Vector3, Vector3, Color) */

Mesh * Assembly-CSharp.dll::RTG::LineMesh::LineMesh_CreateLine
                 (Vector3 startPoint,Vector3 endPoint,Color color,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar2 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh,uVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar2,(MethodInfo *)0x0);
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,2);
  if (value != (Vector3__Array *)0x0) {
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = (float)(int)startPoint._0_8_;
    value->vector[0].y = (float)(int)((ulonglong)startPoint._0_8_ >> 0x20);
    value->vector[0].z = startPoint.z;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = endPoint.x;
    value->vector[1].y = endPoint.y;
    value->vector[1].z = endPoint.z;
    if (pMVar2 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar2,value,(MethodInfo *)0x0);
      value_00 = ColorEx::ColorEx_GetFilledColorArray(2,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar2,value_00,(MethodInfo *)0x0);
      indices = (Int32__Array *)func_?();
      if (indices != (Int32__Array *)0x0) {
        if (1 < indices->max_length) {
          indices->vector[1] = 1;
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                    (pMVar2,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                    (pMVar2,0,(MethodInfo *)0x0);
          return pMVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (Mesh *)(*pcVar3)();
  return pMVar2;
}

