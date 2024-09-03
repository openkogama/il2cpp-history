
/* Mesh CreateEqXY(Vector3, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateEqXY
                 (Vector3 centroid,float sideLength,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__RTG__TriangleMath);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar2 = (pQVar1->identityQuaternion).x;
  uVar3 = (pQVar1->identityQuaternion).y;
  rotation.y = (float)uVar3;
  rotation.x = (float)uVar2;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  rotation.z = fVar4;
  rotation.w = fVar5;
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                      (centroid,sideLength,rotation,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
            MultiColumnCollectionHeader+ViewState+ColumnState]::
            List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                      (this,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                      );
    value_00 = (Vector3__Array *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar6 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8 = (pVVar7->forwardVector).x;
    uVar9 = (pVVar7->forwardVector).y;
    uVar10 = uVar9 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar4 = (float)((uint)(pVVar7->forwardVector).z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (value_00 != (Vector3__Array *)0x0) {
      if (value_00->max_length == 0) goto code_?;
      value_00->vector[0].x =
           (float)(uVar8 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      value_00->vector[0].y = (float)uVar10;
      value_00->vector[0].z = fVar4;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
        uVar6 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar11 = (pVVar7->forwardVector).x;
      uVar12 = (pVVar7->forwardVector).y;
      fVar4 = (pVVar7->forwardVector).z;
      if (value_00->max_length < 2) goto code_?;
      value_00->vector[1].x = (float)(uVar11 ^ uVar6);
      value_00->vector[1].y = (float)(uVar12 ^ uVar6);
      value_00->vector[1].z = (float)((uint)fVar4 ^ uVar6);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
        uVar6 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar13 = (pVVar7->forwardVector).x;
      uVar14 = (pVVar7->forwardVector).y;
      fVar4 = (pVVar7->forwardVector).z;
      if (value_00->max_length < 3) goto code_?;
      value_00->vector[2].x = (float)(uVar13 ^ uVar6);
      value_00->vector[2].y = (float)(uVar14 ^ uVar6);
      value_00->vector[2].z = (float)((uint)fVar4 ^ uVar6);
      pMVar15 = (Mesh *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar15,(MethodInfo *)0x0);
      if (pMVar15 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar15,(Vector3__Array *)value,(MethodInfo *)0x0);
        value_01 = (Color__Array *)func_?();
        if (value_01 != (Color__Array *)0x0) {
          if (value_01->max_length == 0) goto code_?;
          value_01->vector[0].r = color.r;
          value_01->vector[0].g = color.g;
          value_01->vector[0].b = color.b;
          value_01->vector[0].a = color.a;
          if (value_01->max_length < 2) goto code_?;
          value_01->vector[1].r = color.r;
          value_01->vector[1].g = color.g;
          value_01->vector[1].b = color.b;
          value_01->vector[1].a = color.a;
          if (value_01->max_length < 3) goto code_?;
          value_01->vector[2].r = color.r;
          value_01->vector[2].g = color.g;
          value_01->vector[2].b = color.b;
          value_01->vector[2].a = color.a;
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                    (pMVar15,value_01,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                    (pMVar15,value_00,(MethodInfo *)0x0);
          indices = (Int32__Array *)func_?();
          if (indices != (Int32__Array *)0x0) {
            if ((1 < indices->max_length) && (indices->vector[1] = 1, 2 < indices->max_length)) {
              indices->vector[2] = 2;
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                        (pMVar15,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                        (pMVar15,0,(MethodInfo *)0x0);
              return pMVar15;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pMVar15 = (Mesh *)(*pcVar16)();
  return pMVar15;
}


/* Mesh CreateRightAngledTriangleXY(Vector3, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateRightAngledTriangleXY
                 (Vector3 cornerPosition,float xLength,float yLength,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((xLength < _UNK_?) || (yLength < _UNK_?)) {
    return (Mesh *)0x0;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if (value->max_length != 0) {
    value->vector[0].x = (float)(int)cornerPosition._0_8_;
    value->vector[0].y = (float)(int)((ulonglong)cornerPosition._0_8_ >> 0x20);
    value->vector[0].z = cornerPosition.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar2 = (pVVar1->upVector).x;
    uVar3 = (pVVar1->upVector).y;
    fVar4 = (pVVar1->upVector).z;
    if (1 < value->max_length) {
      value->vector[1].x = cornerPosition.x + (float)uVar2 * xLength;
      value->vector[1].y = cornerPosition.y + (float)uVar3 * xLength;
      value->vector[1].z = cornerPosition.z + fVar4 * xLength;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar1->rightVector).x;
      uVar6 = (pVVar1->rightVector).y;
      fVar4 = (pVVar1->rightVector).z;
      if (2 < value->max_length) {
        value->vector[2].x = cornerPosition.x + (float)uVar5 * yLength;
        value->vector[2].y = cornerPosition.y + (float)uVar6 * yLength;
        value->vector[2].z = cornerPosition.z + fVar4 * yLength;
        pMVar7 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar7,(MethodInfo *)0x0);
        if (pMVar7 == (Mesh *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar7,value,(MethodInfo *)0x0);
        value_00 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,3);
        if (value_00 == (Color__Array *)0x0) goto code_?;
        if (value_00->max_length != 0) {
          value_00->vector[0].r = color.r;
          value_00->vector[0].g = color.g;
          value_00->vector[0].b = color.b;
          value_00->vector[0].a = color.a;
          if (1 < value_00->max_length) {
            value_00->vector[1].r = color.r;
            value_00->vector[1].g = color.g;
            value_00->vector[1].b = color.b;
            value_00->vector[1].a = color.a;
            if (2 < value_00->max_length) {
              value_00->vector[2].r = color.r;
              value_00->vector[2].g = color.g;
              value_00->vector[2].b = color.b;
              value_00->vector[2].a = color.a;
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                        (pMVar7,value_00,(MethodInfo *)0x0);
              indices = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
              if (indices == (Int32__Array *)0x0) goto code_?;
              if ((1 < indices->max_length) && (indices->vector[1] = 1, 2 < indices->max_length)) {
                indices->vector[2] = 2;
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                          (pMVar7,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                          (pMVar7,0,(MethodInfo *)0x0);
                return pMVar7;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar7 = (Mesh *)(*pcVar8)();
  return pMVar7;
}


/* Mesh CreateWireEqXY(Vector3, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateWireEqXY
                 (Vector3 centroid,float sideLength,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  rotation.y = fVar3;
  rotation.x = fVar2;
  rotation.z = fVar4;
  rotation.w = fVar5;
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                      (centroid,sideLength,rotation,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
            MultiColumnCollectionHeader+ViewState+ColumnState]::
            List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                      (this,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                      );
    pMVar6 = (Mesh *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar6,(MethodInfo *)0x0);
    if (pMVar6 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar6,(Vector3__Array *)value,(MethodInfo *)0x0);
      value_00 = (Color__Array *)func_?();
      if (value_00 != (Color__Array *)0x0) {
        if (value_00->max_length == 0) goto code_?;
        value_00->vector[0].r = color.r;
        value_00->vector[0].g = color.g;
        value_00->vector[0].b = color.b;
        value_00->vector[0].a = color.a;
        if (value_00->max_length < 2) goto code_?;
        value_00->vector[1].r = color.r;
        value_00->vector[1].g = color.g;
        value_00->vector[1].b = color.b;
        value_00->vector[1].a = color.a;
        if (value_00->max_length < 3) goto code_?;
        value_00->vector[2].r = color.r;
        value_00->vector[2].g = color.g;
        value_00->vector[2].b = color.b;
        value_00->vector[2].a = color.a;
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar6,value_00,(MethodInfo *)0x0);
        indices = (Int32__Array *)func_?();
        if (indices != (Int32__Array *)0x0) {
          if ((1 < indices->max_length) && (indices->vector[1] = 1, 2 < indices->max_length)) {
            indices->vector[2] = 2;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                      (pMVar6,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                      (pMVar6,0,(MethodInfo *)0x0);
            return pMVar6;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar6 = (Mesh *)(*pcVar7)();
  return pMVar6;
}


/* Mesh CreateWireRightAngledTriangleXY(Vector3, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateWireRightAngledTriangleXY
                 (Vector3 cornerPosition,float xLength,float yLength,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((xLength < _UNK_?) || (yLength < _UNK_?)) {
    return (Mesh *)0x0;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if (value == (Vector3__Array *)0x0) goto code_?;
  if (value->max_length != 0) {
    value->vector[0].x = (float)(int)cornerPosition._0_8_;
    value->vector[0].y = (float)(int)((ulonglong)cornerPosition._0_8_ >> 0x20);
    value->vector[0].z = cornerPosition.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar2 = (pVVar1->upVector).x;
    uVar3 = (pVVar1->upVector).y;
    fVar4 = (pVVar1->upVector).z;
    if (1 < value->max_length) {
      value->vector[1].x = cornerPosition.x + (float)uVar2 * xLength;
      value->vector[1].y = cornerPosition.y + (float)uVar3 * xLength;
      value->vector[1].z = cornerPosition.z + fVar4 * xLength;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar1->rightVector).x;
      uVar6 = (pVVar1->rightVector).y;
      fVar4 = (pVVar1->rightVector).z;
      if (2 < value->max_length) {
        value->vector[2].x = cornerPosition.x + (float)uVar5 * yLength;
        value->vector[2].y = cornerPosition.y + (float)uVar6 * yLength;
        value->vector[2].z = cornerPosition.z + fVar4 * yLength;
        pMVar7 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar7,(MethodInfo *)0x0);
        if (pMVar7 == (Mesh *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar7,value,(MethodInfo *)0x0);
        value_00 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,3);
        if (value_00 == (Color__Array *)0x0) goto code_?;
        if (value_00->max_length != 0) {
          value_00->vector[0].r = color.r;
          value_00->vector[0].g = color.g;
          value_00->vector[0].b = color.b;
          value_00->vector[0].a = color.a;
          if (1 < value_00->max_length) {
            value_00->vector[1].r = color.r;
            value_00->vector[1].g = color.g;
            value_00->vector[1].b = color.b;
            value_00->vector[1].a = color.a;
            if (2 < value_00->max_length) {
              value_00->vector[2].r = color.r;
              value_00->vector[2].g = color.g;
              value_00->vector[2].b = color.b;
              value_00->vector[2].a = color.a;
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                        (pMVar7,value_00,(MethodInfo *)0x0);
              indices = (Int32__Array *)func_?(TypeInfo__System__Int32,4);
              if (indices == (Int32__Array *)0x0) goto code_?;
              if ((1 < indices->max_length) && (indices->vector[1] = 1, 2 < indices->max_length)) {
                indices->vector[2] = 2;
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                          (pMVar7,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                          (pMVar7,0,(MethodInfo *)0x0);
                return pMVar7;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar7 = (Mesh *)(*pcVar8)();
  return pMVar7;
}

