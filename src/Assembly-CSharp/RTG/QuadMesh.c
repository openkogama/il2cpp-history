
/* Mesh CreateQuadXY(Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateQuadXY(float width,float height,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((width < 0.0001) || (height < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = height * 0.5;
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  value_01 = pVVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->rightVector).x;
  uVar6 = (pVVar4->rightVector).y;
  fVar7 = -(float)uVar5 * fVar1;
  fVar8 = -(float)uVar6 * fVar1;
  fVar9 = -(pVVar4->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar10 = (pVVar4->upVector).x;
  uVar11 = (pVVar4->upVector).y;
  fVar12 = (pVVar4->upVector).z;
  if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
  if (pVVar3->max_length != 0) {
    pVVar3->vector[0].x = fVar7 - (float)uVar10 * fVar2;
    pVVar3->vector[0].y = fVar8 - (float)uVar11 * fVar2;
    pVVar3->vector[0].z = fVar9 - fVar12 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar4->rightVector).x;
    uVar14 = (pVVar4->rightVector).y;
    fVar7 = -(float)uVar13 * fVar1;
    fVar8 = -(float)uVar14 * fVar1;
    fVar9 = -(pVVar4->rightVector).z * fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->upVector).x;
    uVar16 = (pVVar4->upVector).y;
    fVar12 = (pVVar4->upVector).z;
    if (1 < pVVar3->max_length) {
      pVVar3->vector[1].x = fVar7 + (float)uVar15 * fVar2;
      pVVar3->vector[1].y = fVar8 + (float)uVar16 * fVar2;
      pVVar3->vector[1].z = fVar9 + fVar12 * fVar2;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar17 = (pVVar4->rightVector).x;
      uVar18 = (pVVar4->rightVector).y;
      fVar7 = (float)uVar17 * fVar1;
      fVar8 = (float)uVar18 * fVar1;
      fVar9 = (pVVar4->rightVector).z * fVar1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar19 = (pVVar4->upVector).x;
      uVar20 = (pVVar4->upVector).y;
      fVar12 = (pVVar4->upVector).z;
      if (2 < pVVar3->max_length) {
        pVVar3->vector[2].x = fVar7 + (float)uVar19 * fVar2;
        pVVar3->vector[2].y = fVar8 + (float)uVar20 * fVar2;
        pVVar3->vector[2].z = fVar9 + fVar12 * fVar2;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar21 = (pVVar4->rightVector).x;
        uVar22 = (pVVar4->rightVector).y;
        fVar7 = (float)uVar22 * fVar1;
        fVar8 = (pVVar4->rightVector).z * fVar1;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar23 = (pVVar4->upVector).x;
        uVar24 = (pVVar4->upVector).y;
        fVar9 = (pVVar4->upVector).z;
        if (3 < pVVar3->max_length) {
          pVVar3->vector[3].x = (float)uVar21 * fVar1 - (float)uVar23 * fVar2;
          pVVar3->vector[3].y = fVar7 - (float)uVar24 * fVar2;
          pVVar3->vector[3].z = fVar8 - fVar9 * fVar2;
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar25._0_4_ = (pVVar4->forwardVector).x;
          uVar25._4_4_ = (pVVar4->forwardVector).y;
          fVar1 = (pVVar4->forwardVector).z;
          if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
          if (pVVar3->max_length != 0) {
            pVVar3->vector[0].x = (float)(int)(uVar25 ^ 0x8000000080000000);
            pVVar3->vector[0].y = (float)(int)((uVar25 ^ 0x8000000080000000) >> 0x20);
            pVVar3->vector[0].z = -fVar1;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar26._0_4_ = (pVVar4->forwardVector).x;
            uVar26._4_4_ = (pVVar4->forwardVector).y;
            fVar1 = (pVVar4->forwardVector).z;
            if (1 < pVVar3->max_length) {
              pVVar3->vector[1].x = (float)(int)(uVar26 ^ 0x8000000080000000);
              pVVar3->vector[1].y = (float)(int)((uVar26 ^ 0x8000000080000000) >> 0x20);
              pVVar3->vector[1].z = -fVar1;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar27._0_4_ = (pVVar4->forwardVector).x;
              uVar27._4_4_ = (pVVar4->forwardVector).y;
              fVar1 = (pVVar4->forwardVector).z;
              if (2 < pVVar3->max_length) {
                pVVar3->vector[2].x = (float)(int)(uVar27 ^ 0x8000000080000000);
                pVVar3->vector[2].y = (float)(int)((uVar27 ^ 0x8000000080000000) >> 0x20);
                pVVar3->vector[2].z = -fVar1;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector3);
                  cRam_? = '\x01';
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar28._0_4_ = (pVVar4->forwardVector).x;
                uVar28._4_4_ = (pVVar4->forwardVector).y;
                fVar1 = (pVVar4->forwardVector).z;
                if (3 < pVVar3->max_length) {
                  pVVar3->vector[3].x = (float)(int)(uVar28 ^ 0x8000000080000000);
                  pVVar3->vector[3].y = (float)(int)((uVar28 ^ 0x8000000080000000) >> 0x20);
                  pVVar3->vector[3].z = -fVar1;
                  value = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,4);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector2);
                    cRam_? = '\x01';
                  }
                  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
                  if (value == (Vector2__Array *)0x0) goto code_?;
                  if (value->max_length != 0) {
                    value->vector[0].x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
                    value->vector[0].y = fVar1;
                    if (1 < value->max_length) {
                      value->vector[1].x = 0.0;
                      value->vector[1].y = 1.0;
                      if (2 < value->max_length) {
                        value->vector[2].x = 1.0;
                        value->vector[2].y = 1.0;
                        if (3 < value->max_length) {
                          value->vector[3].x = 1.0;
                          value->vector[3].y = 0.0;
                          pMVar29 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar29,(MethodInfo *)0x0);
                          if (pMVar29 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar29,value_01,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar29,pVVar3,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar29,value,(MethodInfo *)0x0);
                            value_00 = ColorEx::ColorEx_GetFilledColorArray(4,color,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar29,value_00,(MethodInfo *)0x0);
                            indices = (Int32__Array *)func_?(TypeInfo__System__Int32,6);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar29,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar29,0,(MethodInfo *)0x0);
                            return pMVar29;
                          }
                          goto code_?;
                        }
                      }
                    }
                  }
                }
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
  pcVar30 = (code *)swi(3);
  pMVar29 = (Mesh *)(*pcVar30)();
  return pMVar29;
}


/* Mesh CreateQuadXZ(Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateQuadXZ(float width,float depth,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((width < 0.0001) || (depth < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = depth * 0.5;
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  value_01 = pVVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->rightVector).x;
  uVar6 = (pVVar4->rightVector).y;
  fVar7 = -(float)uVar5 * fVar1;
  fVar8 = -(float)uVar6 * fVar1;
  fVar9 = -(pVVar4->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar10 = (pVVar4->forwardVector).x;
  uVar11 = (pVVar4->forwardVector).y;
  fVar12 = (pVVar4->forwardVector).z;
  if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
  if (pVVar3->max_length != 0) {
    pVVar3->vector[0].x = fVar7 - (float)uVar10 * fVar2;
    pVVar3->vector[0].y = fVar8 - (float)uVar11 * fVar2;
    pVVar3->vector[0].z = fVar9 - fVar12 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar4->rightVector).x;
    uVar14 = (pVVar4->rightVector).y;
    fVar7 = -(float)uVar13 * fVar1;
    fVar8 = -(float)uVar14 * fVar1;
    fVar9 = -(pVVar4->rightVector).z * fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->forwardVector).x;
    uVar16 = (pVVar4->forwardVector).y;
    fVar12 = (pVVar4->forwardVector).z;
    if (1 < pVVar3->max_length) {
      pVVar3->vector[1].x = fVar7 + (float)uVar15 * fVar2;
      pVVar3->vector[1].y = fVar8 + (float)uVar16 * fVar2;
      pVVar3->vector[1].z = fVar9 + fVar12 * fVar2;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar17 = (pVVar4->rightVector).x;
      uVar18 = (pVVar4->rightVector).y;
      fVar7 = (float)uVar17 * fVar1;
      fVar8 = (float)uVar18 * fVar1;
      fVar9 = (pVVar4->rightVector).z * fVar1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar19 = (pVVar4->forwardVector).x;
      uVar20 = (pVVar4->forwardVector).y;
      fVar12 = (pVVar4->forwardVector).z;
      if (2 < pVVar3->max_length) {
        pVVar3->vector[2].x = fVar7 + (float)uVar19 * fVar2;
        pVVar3->vector[2].y = fVar8 + (float)uVar20 * fVar2;
        pVVar3->vector[2].z = fVar9 + fVar12 * fVar2;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar21 = (pVVar4->rightVector).x;
        uVar22 = (pVVar4->rightVector).y;
        fVar7 = (float)uVar22 * fVar1;
        fVar8 = (pVVar4->rightVector).z * fVar1;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar23 = (pVVar4->forwardVector).x;
        uVar24 = (pVVar4->forwardVector).y;
        fVar9 = (pVVar4->forwardVector).z;
        if (3 < pVVar3->max_length) {
          pVVar3->vector[3].x = (float)uVar21 * fVar1 - (float)uVar23 * fVar2;
          pVVar3->vector[3].y = fVar7 - (float)uVar24 * fVar2;
          pVVar3->vector[3].z = fVar8 - fVar9 * fVar2;
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
          fVar2 = (pVVar4->upVector).y;
          fVar1 = (pVVar4->upVector).z;
          if (pVVar3->max_length != 0) {
            pVVar3->vector[0].x = (pVVar4->upVector).x;
            pVVar3->vector[0].y = fVar2;
            pVVar3->vector[0].z = fVar1;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar2 = (pVVar4->upVector).y;
            fVar1 = (pVVar4->upVector).z;
            if (1 < pVVar3->max_length) {
              pVVar3->vector[1].x = (pVVar4->upVector).x;
              pVVar3->vector[1].y = fVar2;
              pVVar3->vector[1].z = fVar1;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar2 = (pVVar4->upVector).y;
              fVar1 = (pVVar4->upVector).z;
              if (2 < pVVar3->max_length) {
                pVVar3->vector[2].x = (pVVar4->upVector).x;
                pVVar3->vector[2].y = fVar2;
                pVVar3->vector[2].z = fVar1;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector3);
                  cRam_? = '\x01';
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                fVar2 = (pVVar4->upVector).y;
                fVar1 = (pVVar4->upVector).z;
                if (3 < pVVar3->max_length) {
                  pVVar3->vector[3].x = (pVVar4->upVector).x;
                  pVVar3->vector[3].y = fVar2;
                  pVVar3->vector[3].z = fVar1;
                  value = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,4);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector2);
                    cRam_? = '\x01';
                  }
                  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
                  if (value == (Vector2__Array *)0x0) goto code_?;
                  if (value->max_length != 0) {
                    value->vector[0].x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
                    value->vector[0].y = fVar1;
                    if (1 < value->max_length) {
                      value->vector[1].x = 0.0;
                      value->vector[1].y = 1.0;
                      if (2 < value->max_length) {
                        value->vector[2].x = 1.0;
                        value->vector[2].y = 1.0;
                        if (3 < value->max_length) {
                          value->vector[3].x = 1.0;
                          value->vector[3].y = 0.0;
                          pMVar25 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar25,(MethodInfo *)0x0);
                          if (pMVar25 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar25,value_01,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar25,pVVar3,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar25,value,(MethodInfo *)0x0);
                            value_00 = ColorEx::ColorEx_GetFilledColorArray(4,color,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar25,value_00,(MethodInfo *)0x0);
                            indices = (Int32__Array *)func_?(TypeInfo__System__Int32,6);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar25,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar25,0,(MethodInfo *)0x0);
                            return pMVar25;
                          }
                          goto code_?;
                        }
                      }
                    }
                  }
                }
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
  pcVar26 = (code *)swi(3);
  pMVar25 = (Mesh *)(*pcVar26)();
  return pMVar25;
}


/* Mesh CreateWireQuadXY(Vector3, Vector2, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateWireQuadXY(Vector3 center,Vector2 size,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_95853D8881732E63777CF081EF757E3A1D025544145D488F88F1A2C2A6FCA008_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = size.x * 0.5;
  fVar2 = size.y * 0.5;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->rightVector).x;
  uVar5 = (pVVar3->rightVector).y;
  fVar6 = (pVVar3->rightVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar3->upVector).x;
  uVar8 = (pVVar3->upVector).y;
  fVar9 = (pVVar3->upVector).z;
  if (value != (Vector3__Array *)0x0) {
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = (center.x - (float)uVar4 * fVar1) - (float)uVar7 * fVar2;
    value->vector[0].y = (center.y - (float)uVar5 * fVar1) - (float)uVar8 * fVar2;
    value->vector[0].z = (center.z - fVar6 * fVar1) - fVar9 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10 = (pVVar3->rightVector).x;
    uVar11 = (pVVar3->rightVector).y;
    fVar6 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar3->upVector).x;
    uVar13 = (pVVar3->upVector).y;
    fVar9 = (pVVar3->upVector).z;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = (center.x - (float)uVar10 * fVar1) + (float)uVar12 * fVar2;
    value->vector[1].y = (center.y - (float)uVar11 * fVar1) + (float)uVar13 * fVar2;
    value->vector[1].z = (center.z - fVar6 * fVar1) + fVar9 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar3->rightVector).x;
    uVar15 = (pVVar3->rightVector).y;
    fVar6 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar16 = (pVVar3->upVector).x;
    uVar17 = (pVVar3->upVector).y;
    fVar9 = (pVVar3->upVector).z;
    if (value->max_length < 3) goto code_?;
    value->vector[2].x = center.x + (float)uVar14 * fVar1 + (float)uVar16 * fVar2;
    value->vector[2].y = center.y + (float)uVar15 * fVar1 + (float)uVar17 * fVar2;
    value->vector[2].z = center.z + fVar6 * fVar1 + fVar9 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar18 = (pVVar3->rightVector).x;
    uVar19 = (pVVar3->rightVector).y;
    fVar6 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar20 = (pVVar3->upVector).x;
    uVar21 = (pVVar3->upVector).y;
    fVar9 = (pVVar3->upVector).z;
    if (value->max_length < 4) goto code_?;
    value->vector[3].x = (center.x + (float)uVar18 * fVar1) - (float)uVar20 * fVar2;
    value->vector[3].y = (center.y + (float)uVar19 * fVar1) - (float)uVar21 * fVar2;
    value->vector[3].z = (center.z + fVar6 * fVar1) - fVar9 * fVar2;
    indices = (Int32__Array *)func_?(TypeInfo__System__Int32,8);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__95853D8881732E63777CF081EF757E3A1D025544145D488F88F1A2C2A6FCA008_Field,(MethodInfo *)0x0);
    pMVar22 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar22,(MethodInfo *)0x0);
    if (pMVar22 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar22,value,(MethodInfo *)0x0);
      value_00 = ColorEx::ColorEx_GetFilledColorArray(4,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar22,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar22,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar22,0,(MethodInfo *)0x0);
      return pMVar22;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  pMVar22 = (Mesh *)(*pcVar23)();
  return pMVar22;
}

