
/* Mesh CreateQuadXY(Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateQuadXY(float width,float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((width < 0.0001) || (height < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = height * 0.5;
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->rightVector).x;
  uVar5 = (pVVar3->rightVector).y;
  fVar6 = (pVVar3->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar7 = cRam_?;
  cVar8 = cRam_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar3->upVector).x;
  uVar10 = (pVVar3->upVector).y;
  fVar11 = (pVVar3->upVector).z;
  if (this == (Array *)0x0) goto code_?;
  if (*(int *)&this[1].monitor != 0) {
    this[2].klass = (Array__Class *)CONCAT44(-(float)uVar5 * fVar1 - (float)uVar10 * fVar2,-(float)uVar4 * fVar1 - (float)uVar9 * fVar2);
    *(float *)&this[2].monitor = -fVar6 * fVar1 - fVar11 * fVar2;
    if (cVar7 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar7 = '\x01';
      cRam_? = '\x01';
      cVar8 = cRam_?;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar3->rightVector).x;
    uVar13 = (pVVar3->rightVector).y;
    fVar6 = (pVVar3->rightVector).z;
    if (cVar8 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar8 = '\x01';
      cRam_? = '\x01';
      cVar7 = cRam_?;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar3->upVector).x;
    uVar15 = (pVVar3->upVector).y;
    fVar11 = (pVVar3->upVector).z;
    if (1 < *(uint *)&this[1].monitor) {
      *(ulonglong *)((longlong)&this[2].monitor + 4) = CONCAT44((float)uVar15 * fVar2 + -(float)uVar13 * fVar1,(float)uVar14 * fVar2 + -(float)uVar12 * fVar1);
      *(float *)((longlong)&this[3].klass + 4) = fVar11 * fVar2 + -fVar6 * fVar1;
      if (cVar7 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar7 = '\x01';
        cRam_? = '\x01';
        cVar8 = cRam_?;
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar16 = (pVVar3->rightVector).x;
      uVar17 = (pVVar3->rightVector).y;
      fVar6 = (pVVar3->rightVector).z;
      if (cVar8 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar8 = '\x01';
        cRam_? = '\x01';
        cVar7 = cRam_?;
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar18 = (pVVar3->upVector).x;
      uVar19 = (pVVar3->upVector).y;
      fVar11 = (pVVar3->upVector).z;
      if (2 < *(uint *)&this[1].monitor) {
        this[3].monitor = (MonitorData *)CONCAT44((float)uVar19 * fVar2 + (float)uVar17 * fVar1,(float)uVar18 * fVar2 + (float)uVar16 * fVar1);
        *(float *)&this[4].klass = fVar11 * fVar2 + fVar6 * fVar1;
        if (cVar7 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar8 = cRam_?;
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar20 = (pVVar3->rightVector).x;
        uVar21 = (pVVar3->rightVector).y;
        fVar6 = (pVVar3->rightVector).z;
        if (cVar8 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar22 = (pVVar3->upVector).x;
        uVar23 = (pVVar3->upVector).y;
        fVar11 = (pVVar3->upVector).z;
        if (3 < *(uint *)&this[1].monitor) {
          *(ulonglong *)((longlong)&this[4].klass + 4) = CONCAT44((float)uVar21 * fVar1 - (float)uVar23 * fVar2,(float)uVar20 * fVar1 - (float)uVar22 * fVar2);
          *(float *)((longlong)&this[4].monitor + 4) = fVar6 * fVar1 - fVar11 * fVar2;
          value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          cVar8 = cRam_?;
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar24._0_4_ = (pVVar3->forwardVector).x;
          uVar24._4_4_ = (pVVar3->forwardVector).y;
          fVar1 = (pVVar3->forwardVector).z;
          if (value == (Vector3__Array *)0x0) goto code_?;
          if ((int)value->max_length != 0) {
            value->vector[0].x = (float)(int)(uVar24 ^ 0x8000000080000000);
            value->vector[0].y = (float)(int)((uVar24 ^ 0x8000000080000000) >> 0x20);
            value->vector[0].z = -fVar1;
            if (cVar8 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar8 = '\x01';
              cRam_? = '\x01';
            }
            pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar25._0_4_ = (pVVar3->forwardVector).x;
            uVar25._4_4_ = (pVVar3->forwardVector).y;
            fVar1 = (pVVar3->forwardVector).z;
            if (1 < (uint)value->max_length) {
              value->vector[1].x = (float)(int)(uVar25 ^ 0x8000000080000000);
              value->vector[1].y = (float)(int)((uVar25 ^ 0x8000000080000000) >> 0x20);
              value->vector[1].z = -fVar1;
              if (cVar8 == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cVar8 = '\x01';
                cRam_? = '\x01';
              }
              pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar26._0_4_ = (pVVar3->forwardVector).x;
              uVar26._4_4_ = (pVVar3->forwardVector).y;
              fVar1 = (pVVar3->forwardVector).z;
              if (2 < (uint)value->max_length) {
                value->vector[2].x = (float)(int)(uVar26 ^ 0x8000000080000000);
                value->vector[2].y = (float)(int)((uVar26 ^ 0x8000000080000000) >> 0x20);
                value->vector[2].z = -fVar1;
                if (cVar8 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar27._0_4_ = (pVVar3->forwardVector).x;
                uVar27._4_4_ = (pVVar3->forwardVector).y;
                fVar1 = (pVVar3->forwardVector).z;
                if (3 < (uint)value->max_length) {
                  value->vector[3].x = (float)(int)(uVar27 ^ 0x8000000080000000);
                  value->vector[3].y = (float)(int)((uVar27 ^ 0x8000000080000000) >> 0x20);
                  value->vector[3].z = -fVar1;
                  method_00 = TypeInfo__UnityEngine__Vector2;
                  value_00 = (Vector2__Array *)FUN_?();
                  VVar28 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner((MethodInfo *)method_00);
                  if (value_00 == (Vector2__Array *)0x0) goto code_?;
                  if ((int)value_00->max_length != 0) {
                    fStack_29 = VVar28.x;
                    fStack_30 = VVar28.y;
                    value_00->vector[0].x = fStack_29;
                    value_00->vector[0].y = fStack_30;
                    if (1 < (uint)value_00->max_length) {
                      uVar24 = 0;
                      value_00->vector[1].y = 1.0;
                      value_00->vector[1].x = 0.0;
                      if (2 < (uint)value_00->max_length) {
                        value_00->vector[2].x = 1.0;
                        value_00->vector[2].y = 1.0;
                        if (3 < (uint)value_00->max_length) {
                          value_00->vector[3].x = 1.0;
                          value_00->vector[3].y = 0.0;
                          pMVar31 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar31,(MethodInfo *)0x0);
                          if (pMVar31 != (Mesh *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar31,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,this,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar31,value,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar31,value_00,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Color);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            value_01 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,4);
                            pCVar32 = value_01->vector;
                            uVar25 = uVar24;
                            if (value_01 != (Color__Array *)0x0) {
                              while ((uint)uVar24 < (uint)value_01->max_length) {
                                fVar1 = color->g;
                                fVar2 = color->b;
                                fVar6 = color->a;
                                uVar24 = (ulonglong)((uint)uVar24 + 1);
                                uVar25 = uVar25 + 1;
                                pCVar32->r = color->r;
                                pCVar32->g = fVar1;
                                pCVar32->b = fVar2;
                                pCVar32->a = fVar6;
                                pCVar32 = pCVar32 + 1;
                                if (3 < (longlong)uVar25) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar31,value_01,(MethodInfo *)0x0);
                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6);
                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar31,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar31,0,(MethodInfo *)0x0);
                                  return pMVar31;
                                }
                              }
                              goto DAT_?;
                            }
                          }
code_?:
                          FUN_?();
                          pcVar33 = (code *)swi(3);
                          pMVar31 = (Mesh *)(*pcVar33)();
                          return pMVar31;
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
DAT_?:
  FUN_?();
  pcVar33 = (code *)swi(3);
  pMVar31 = (Mesh *)(*pcVar33)();
  return pMVar31;
}


/* Mesh CreateQuadXZ(Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateQuadXZ(float width,float depth,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((width < 0.0001) || (depth < 0.0001)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * 0.5;
  fVar2 = depth * 0.5;
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->rightVector).x;
  uVar5 = (pVVar3->rightVector).y;
  fVar6 = (pVVar3->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar7 = cRam_?;
  cVar8 = cRam_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar3->forwardVector).x;
  uVar10 = (pVVar3->forwardVector).y;
  fVar11 = (pVVar3->forwardVector).z;
  if (this == (Array *)0x0) goto code_?;
  if (*(int *)&this[1].monitor != 0) {
    this[2].klass = (Array__Class *)CONCAT44(-(float)uVar5 * fVar1 - (float)uVar10 * fVar2,-(float)uVar4 * fVar1 - (float)uVar9 * fVar2);
    *(float *)&this[2].monitor = -fVar6 * fVar1 - fVar11 * fVar2;
    if (cVar7 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar7 = '\x01';
      cRam_? = '\x01';
      cVar8 = cRam_?;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar3->rightVector).x;
    uVar13 = (pVVar3->rightVector).y;
    fVar6 = (pVVar3->rightVector).z;
    if (cVar8 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar8 = '\x01';
      cRam_? = '\x01';
      cVar7 = cRam_?;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar3->forwardVector).x;
    uVar15 = (pVVar3->forwardVector).y;
    fVar11 = (pVVar3->forwardVector).z;
    if (1 < *(uint *)&this[1].monitor) {
      *(ulonglong *)((longlong)&this[2].monitor + 4) = CONCAT44((float)uVar15 * fVar2 + -(float)uVar13 * fVar1,(float)uVar14 * fVar2 + -(float)uVar12 * fVar1);
      *(float *)((longlong)&this[3].klass + 4) = fVar11 * fVar2 + -fVar6 * fVar1;
      if (cVar7 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar7 = '\x01';
        cRam_? = '\x01';
        cVar8 = cRam_?;
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar16 = (pVVar3->rightVector).x;
      uVar17 = (pVVar3->rightVector).y;
      fVar6 = (pVVar3->rightVector).z;
      if (cVar8 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar8 = '\x01';
        cRam_? = '\x01';
        cVar7 = cRam_?;
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar18 = (pVVar3->forwardVector).x;
      uVar19 = (pVVar3->forwardVector).y;
      fVar11 = (pVVar3->forwardVector).z;
      if (2 < *(uint *)&this[1].monitor) {
        this[3].monitor = (MonitorData *)CONCAT44((float)uVar19 * fVar2 + (float)uVar17 * fVar1,(float)uVar18 * fVar2 + (float)uVar16 * fVar1);
        *(float *)&this[4].klass = fVar11 * fVar2 + fVar6 * fVar1;
        if (cVar7 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar8 = cRam_?;
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar20 = (pVVar3->rightVector).x;
        uVar21 = (pVVar3->rightVector).y;
        fVar6 = (pVVar3->rightVector).z;
        if (cVar8 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar22 = (pVVar3->forwardVector).x;
        uVar23 = (pVVar3->forwardVector).y;
        fVar11 = (pVVar3->forwardVector).z;
        if (3 < *(uint *)&this[1].monitor) {
          *(ulonglong *)((longlong)&this[4].klass + 4) = CONCAT44((float)uVar21 * fVar1 - (float)uVar23 * fVar2,(float)uVar20 * fVar1 - (float)uVar22 * fVar2);
          *(float *)((longlong)&this[4].monitor + 4) = fVar6 * fVar1 - fVar11 * fVar2;
          value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          cVar8 = cRam_?;
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (value == (Vector3__Array *)0x0) goto code_?;
          if ((int)value->max_length != 0) {
            fVar1 = (pVVar3->upVector).y;
            value->vector[0].x = (pVVar3->upVector).x;
            value->vector[0].y = fVar1;
            value->vector[0].z = (pVVar3->upVector).z;
            if (cVar8 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar8 = '\x01';
              cRam_? = '\x01';
            }
            pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (1 < (uint)value->max_length) {
              fVar1 = (pVVar3->upVector).y;
              value->vector[1].x = (pVVar3->upVector).x;
              value->vector[1].y = fVar1;
              value->vector[1].z = (pVVar3->upVector).z;
              if (cVar8 == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cVar8 = '\x01';
                cRam_? = '\x01';
              }
              pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
              if (2 < (uint)value->max_length) {
                fVar1 = (pVVar3->upVector).y;
                value->vector[2].x = (pVVar3->upVector).x;
                value->vector[2].y = fVar1;
                value->vector[2].z = (pVVar3->upVector).z;
                if (cVar8 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                if (3 < (uint)value->max_length) {
                  fVar1 = (pVVar3->upVector).y;
                  value->vector[3].x = (pVVar3->upVector).x;
                  value->vector[3].y = fVar1;
                  value->vector[3].z = (pVVar3->upVector).z;
                  method_00 = TypeInfo__UnityEngine__Vector2;
                  value_00 = (Vector2__Array *)FUN_?();
                  VVar24 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner((MethodInfo *)method_00);
                  if (value_00 == (Vector2__Array *)0x0) goto code_?;
                  if ((int)value_00->max_length != 0) {
                    fStack_25 = VVar24.x;
                    fStack_26 = VVar24.y;
                    value_00->vector[0].x = fStack_25;
                    value_00->vector[0].y = fStack_26;
                    if (1 < (uint)value_00->max_length) {
                      uVar27 = 0;
                      value_00->vector[1].y = 1.0;
                      value_00->vector[1].x = 0.0;
                      if (2 < (uint)value_00->max_length) {
                        value_00->vector[2].x = 1.0;
                        value_00->vector[2].y = 1.0;
                        if (3 < (uint)value_00->max_length) {
                          value_00->vector[3].x = 1.0;
                          value_00->vector[3].y = 0.0;
                          pMVar28 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar28,(MethodInfo *)0x0);
                          if (pMVar28 != (Mesh *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar28,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,this,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals(pMVar28,value,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar28,value_00,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Color);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            value_01 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,4);
                            pCVar29 = value_01->vector;
                            uVar30 = uVar27;
                            if (value_01 != (Color__Array *)0x0) {
                              while ((uint)uVar27 < (uint)value_01->max_length) {
                                fVar1 = color->g;
                                fVar2 = color->b;
                                fVar6 = color->a;
                                uVar27 = (ulonglong)((uint)uVar27 + 1);
                                uVar30 = uVar30 + 1;
                                pCVar29->r = color->r;
                                pCVar29->g = fVar1;
                                pCVar29->b = fVar2;
                                pCVar29->a = fVar6;
                                pCVar29 = pCVar29 + 1;
                                if (3 < (longlong)uVar30) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar28,value_01,(MethodInfo *)0x0);
                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6);
                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar28,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar28,0,(MethodInfo *)0x0);
                                  return pMVar28;
                                }
                              }
                              goto DAT_?;
                            }
                          }
code_?:
                          FUN_?();
                          pcVar31 = (code *)swi(3);
                          pMVar28 = (Mesh *)(*pcVar31)();
                          return pMVar28;
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
DAT_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  pMVar28 = (Mesh *)(*pcVar31)();
  return pMVar28;
}


/* Mesh CreateWireQuadXY(Vector3, Vector2, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateWireQuadXY(Vector3 *center,Vector2 size,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_95853D8881732E63777CF081EF757E3A1D025544145D488F88F1A2C2A6FCA008_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStackX_8 = size.x;
  fStackX_c = size.y;
  fStackX_8 = fStackX_8 * 0.5;
  fStackX_c = fStackX_c * 0.5;
  pAVar1 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->rightVector).x;
  uVar4 = center->x;
  fVar5 = (pVVar2->rightVector).y;
  fVar6 = center->y;
  fVar7 = center->z;
  fVar8 = (pVVar2->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar9 = cRam_?;
  cVar10 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar2->upVector).x;
  fVar12 = (pVVar2->upVector).z;
  if (pAVar1 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar1[1].monitor != 0) {
    pAVar1[2].klass = (Array__Class *)CONCAT44((fVar6 - fVar5 * fStackX_8) - (pVVar2->upVector).y * fStackX_c,((float)uVar4 - (float)uVar3 * fStackX_8) - (float)uVar11 * fStackX_c);
    *(float *)&pAVar1[2].monitor = (fVar7 - fVar8 * fStackX_8) - fVar12 * fStackX_c;
    if (cVar9 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar9 = '\x01';
      cRam_? = '\x01';
      cVar10 = cRam_?;
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar2->rightVector).x;
    uVar14 = center->x;
    fVar5 = (pVVar2->rightVector).y;
    fVar6 = center->y;
    fVar7 = center->z;
    fVar8 = (pVVar2->rightVector).z;
    if (cVar10 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar10 = '\x01';
      cRam_? = '\x01';
      cVar9 = cRam_?;
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar2->upVector).x;
    fVar12 = (pVVar2->upVector).z;
    if (1 < *(uint *)&pAVar1[1].monitor) {
      *(ulonglong *)((longlong)&pAVar1[2].monitor + 4) = CONCAT44((pVVar2->upVector).y * fStackX_c + (fVar6 - fVar5 * fStackX_8),(float)uVar15 * fStackX_c + ((float)uVar14 - (float)uVar13 * fStackX_8));
      *(float *)((longlong)&pAVar1[3].klass + 4) = fVar12 * fStackX_c + (fVar7 - fVar8 * fStackX_8);
      if (cVar9 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar9 = '\x01';
        cRam_? = '\x01';
        cVar10 = cRam_?;
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar16 = center->x;
      uVar17 = center->y;
      uVar18 = (pVVar2->rightVector).x;
      fVar5 = (pVVar2->rightVector).y;
      fVar6 = (pVVar2->rightVector).z;
      fVar7 = center->z;
      if (cVar10 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar10 = '\x01';
        cRam_? = '\x01';
        cVar9 = cRam_?;
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar19 = (pVVar2->upVector).x;
      uVar20 = (pVVar2->upVector).y;
      fVar8 = (pVVar2->upVector).z;
      if (2 < *(uint *)&pAVar1[1].monitor) {
        pAVar1[3].monitor = (MonitorData *)CONCAT44(fStackX_c * (float)uVar20 + fVar5 * fStackX_8 + (float)uVar17,fStackX_c * (float)uVar19 + (float)uVar18 * fStackX_8 + (float)uVar16);
        *(float *)&pAVar1[4].klass = fStackX_c * fVar8 + fVar6 * fStackX_8 + fVar7;
        if (cVar9 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar10 = cRam_?;
        }
        pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar21 = (pVVar2->rightVector).x;
        uVar22 = (pVVar2->rightVector).y;
        uVar23 = center->x;
        uVar24 = center->y;
        fVar5 = (pVVar2->rightVector).z;
        fVar6 = center->z;
        if (cVar10 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar25 = (pVVar2->upVector).x;
        uVar26 = (pVVar2->upVector).y;
        fVar7 = (pVVar2->upVector).z;
        if (3 < *(uint *)&pAVar1[1].monitor) {
          *(ulonglong *)((longlong)&pAVar1[4].klass + 4) = CONCAT44((fStackX_8 * (float)uVar22 + (float)uVar24) - fStackX_c * (float)uVar26,(fStackX_8 * (float)uVar21 + (float)uVar23) - fStackX_c * (float)uVar25);
          *(float *)((longlong)&pAVar1[4].monitor + 4) = (fStackX_8 * fVar5 + fVar6) - fStackX_c * fVar7;
          indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,8);
          mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__95853D8881732E63777CF081EF757E3A1D025544145D488F88F1A2C2A6FCA008_Field,(MethodInfo *)0x0);
          pMVar27 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar27,(MethodInfo *)0x0);
          if (pMVar27 != (Mesh *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar28 = mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
            uVar29 = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar27,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar1,iVar28,0,iVar28,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Color);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this = (Array *)FUN_?(TypeInfo__UnityEngine__Color,4);
            pAVar1 = this + 2;
            uVar30 = uVar29;
            if (this != (Array *)0x0) {
              while ((uint)uVar29 < *(uint *)&this[1].monitor) {
                fVar5 = color->g;
                fVar6 = color->b;
                fVar7 = color->a;
                uVar29 = (ulonglong)((uint)uVar29 + 1);
                uVar30 = uVar30 + 1;
                *(float *)&pAVar1->klass = color->r;
                *(float *)((longlong)&pAVar1->klass + 4) = fVar5;
                *(float *)&pAVar1->monitor = fVar6;
                *(float *)((longlong)&pAVar1->monitor + 4) = fVar7;
                pAVar1 = pAVar1 + 1;
                if (3 < (longlong)uVar30) {
                  if (cRam_? == '\0') {
                    FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar28 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar27,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,this,iVar28,0,iVar28,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar27,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar27,0,(MethodInfo *)0x0);
                  return pMVar27;
                }
              }
              goto code_?;
            }
          }
code_?:
          FUN_?();
          pcVar31 = (code *)swi(3);
          pMVar27 = (Mesh *)(*pcVar31)();
          return pMVar27;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  pMVar27 = (Mesh *)(*pcVar31)();
  return pMVar27;
}

