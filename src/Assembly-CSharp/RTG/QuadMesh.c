
/* Mesh CreateQuadXY(Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateQuadXY
                 (float width,float height,Color *color,MethodInfo *method)

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
  if ((width < _UNK_?) || (height < _UNK_?)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * _UNK_?;
  fVar2 = height * _UNK_?;
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3 = _UNK_?;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->rightVector).x;
  uVar6 = (pVVar4->rightVector).y;
  fVar7 = (float)(uVar5 ^ _UNK_?);
  fVar8 = (float)(uVar6 ^ _UNK_?);
  fVar9 = (float)((uint)(pVVar4->rightVector).z ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar10 = cRam_?;
  cVar11 = cRam_?;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar4->upVector).x;
  uVar13 = (pVVar4->upVector).y;
  fVar14 = (pVVar4->upVector).z;
  if (this == (Array *)0x0) goto code_?;
  if (*(int *)&this[1].monitor != 0) {
    this[2].klass =
         (Array__Class *)
         CONCAT44(fVar8 * fVar1 - (float)uVar13 * fVar2,fVar7 * fVar1 - (float)uVar12 * fVar2);
    *(float *)&this[2].monitor = fVar9 * fVar1 - fVar14 * fVar2;
    if (cVar10 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar10 = '\x01';
      cRam_? = '\x01';
      cVar11 = cRam_?;
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->rightVector).x;
    uVar16 = (pVVar4->rightVector).y;
    fVar8 = (pVVar4->rightVector).z;
    if (cVar11 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar11 = '\x01';
      cRam_? = '\x01';
      cVar10 = cRam_?;
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = (pVVar4->upVector).x;
    uVar18 = (pVVar4->upVector).y;
    fVar7 = (pVVar4->upVector).z;
    if (1 < *(uint *)&this[1].monitor) {
      *(ulonglong *)((longlong)&this[2].monitor + 4) =
           CONCAT44((float)uVar18 * fVar2 + (float)(uVar16 ^ uVar3) * fVar1,
                    (float)uVar17 * fVar2 + (float)(uVar15 ^ uVar3) * fVar1);
      *(float *)((longlong)&this[3].klass + 4) =
           fVar7 * fVar2 + (float)((uint)fVar8 ^ uVar3) * fVar1;
      if (cVar10 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar10 = '\x01';
        cRam_? = '\x01';
        cVar11 = cRam_?;
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar19 = (pVVar4->rightVector).x;
      uVar20 = (pVVar4->rightVector).y;
      fVar8 = (pVVar4->rightVector).z;
      if (cVar11 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar11 = '\x01';
        cRam_? = '\x01';
        cVar10 = cRam_?;
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar21 = (pVVar4->upVector).x;
      uVar22 = (pVVar4->upVector).y;
      fVar7 = (pVVar4->upVector).z;
      if (2 < *(uint *)&this[1].monitor) {
        this[3].monitor =
             (MonitorData *)
             CONCAT44((float)uVar22 * fVar2 + (float)uVar20 * fVar1,
                      (float)uVar21 * fVar2 + (float)uVar19 * fVar1);
        *(float *)&this[4].klass = fVar7 * fVar2 + fVar8 * fVar1;
        if (cVar10 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar11 = cRam_?;
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar23 = (pVVar4->rightVector).x;
        uVar24 = (pVVar4->rightVector).y;
        fVar8 = (pVVar4->rightVector).z;
        if (cVar11 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar25 = (pVVar4->upVector).x;
        uVar26 = (pVVar4->upVector).y;
        fVar7 = (pVVar4->upVector).z;
        if (3 < *(uint *)&this[1].monitor) {
          *(ulonglong *)((longlong)&this[4].klass + 4) =
               CONCAT44((float)uVar24 * fVar1 - (float)uVar26 * fVar2,
                        (float)uVar23 * fVar1 - (float)uVar25 * fVar2);
          *(float *)((longlong)&this[4].monitor + 4) = fVar8 * fVar1 - fVar7 * fVar2;
          value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          cVar11 = cRam_?;
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar27 = (pVVar4->forwardVector).x;
          uVar28 = (pVVar4->forwardVector).y;
          fVar1 = (pVVar4->forwardVector).z;
          if (value == (Vector3__Array *)0x0) goto code_?;
          if ((int)value->max_length != 0) {
            value->vector[0].x = (float)(uVar27 ^ uVar3);
            value->vector[0].y = (float)(uVar28 ^ uVar3);
            value->vector[0].z = (float)((uint)fVar1 ^ uVar3);
            if (cVar11 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar11 = '\x01';
              cRam_? = '\x01';
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar29 = (pVVar4->forwardVector).x;
            uVar30 = (pVVar4->forwardVector).y;
            fVar1 = (pVVar4->forwardVector).z;
            if (1 < (uint)value->max_length) {
              value->vector[1].x = (float)(uVar29 ^ uVar3);
              value->vector[1].y = (float)(uVar30 ^ uVar3);
              value->vector[1].z = (float)((uint)fVar1 ^ uVar3);
              if (cVar11 == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cVar11 = '\x01';
                cRam_? = '\x01';
              }
              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar31 = (pVVar4->forwardVector).x;
              uVar32 = (pVVar4->forwardVector).y;
              fVar1 = (pVVar4->forwardVector).z;
              if (2 < (uint)value->max_length) {
                value->vector[2].x = (float)(uVar31 ^ uVar3);
                value->vector[2].y = (float)(uVar32 ^ uVar3);
                value->vector[2].z = (float)((uint)fVar1 ^ uVar3);
                if (cVar11 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar33 = (pVVar4->forwardVector).x;
                uVar34 = (pVVar4->forwardVector).y;
                fVar1 = (pVVar4->forwardVector).z;
                if (3 < (uint)value->max_length) {
                  value->vector[3].x = (float)(uVar33 ^ uVar3);
                  value->vector[3].y = (float)(uVar34 ^ uVar3);
                  value->vector[3].z = (float)((uint)fVar1 ^ uVar3);
                  method_00 = TypeInfo__UnityEngine__Vector2;
                  value_00 = (Vector2__Array *)FUN_?();
                  VVar35 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                                     ((MethodInfo *)method_00);
                  if (value_00 == (Vector2__Array *)0x0) goto code_?;
                  if ((int)value_00->max_length != 0) {
                    fStack_36 = VVar35.x;
                    fStack_37 = VVar35.y;
                    value_00->vector[0].x = fStack_36;
                    value_00->vector[0].y = fStack_37;
                    if (1 < (uint)value_00->max_length) {
                      uVar38 = 0;
                      value_00->vector[1].y = 1.0;
                      value_00->vector[1].x = 0.0;
                      if (2 < (uint)value_00->max_length) {
                        value_00->vector[2].x = 1.0;
                        value_00->vector[2].y = 1.0;
                        if (3 < (uint)value_00->max_length) {
                          value_00->vector[3].x = 1.0;
                          value_00->vector[3].y = 0.0;
                          pMVar39 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor
                                    (pMVar39,(MethodInfo *)0x0);
                          if (pMVar39 != (Mesh *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            valuesArrayLength =
                                 mscorlib.dll::System::Array::Array_get_Length
                                           (this,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                            Mesh_SetSizedArrayForChannel
                                      (pMVar39,VertexAttribute__Enum_Position,
                                       VertexAttributeFormat__Enum_Float32,3,this,valuesArrayLength,
                                       0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                                       (MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                                      (pMVar39,value,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                      (pMVar39,value_00,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Color);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            value_01 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,4)
                            ;
                            pCVar40 = value_01->vector;
                            uVar41 = uVar38;
                            if (value_01 != (Color__Array *)0x0) {
                              while ((uint)uVar38 < (uint)value_01->max_length) {
                                fVar1 = color->g;
                                fVar2 = color->b;
                                fVar8 = color->a;
                                uVar38 = (ulonglong)((uint)uVar38 + 1);
                                uVar41 = uVar41 + 1;
                                pCVar40->r = color->r;
                                pCVar40->g = fVar1;
                                pCVar40->b = fVar2;
                                pCVar40->a = fVar8;
                                pCVar40 = pCVar40 + 1;
                                if (3 < (longlong)uVar41) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                                            (pMVar39,value_01,(MethodInfo *)0x0);
                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6)
                                  ;
                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                                  RuntimeHelpers_InitializeArray_1
                                            ((Array *)indices,
                                             __753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field
                                             ,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                                            (pMVar39,indices,MeshTopology__Enum_Triangles,0,
                                             (MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                                            (pMVar39,0,(MethodInfo *)0x0);
                                  return pMVar39;
                                }
                              }
                              goto DAT_?;
                            }
                          }
code_?:
                          FUN_?();
                          pcVar42 = (code *)swi(3);
                          pMVar39 = (Mesh *)(*pcVar42)();
                          return pMVar39;
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
  pcVar42 = (code *)swi(3);
  pMVar39 = (Mesh *)(*pcVar42)();
  return pMVar39;
}


/* Mesh CreateQuadXZ(Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateQuadXZ
                 (float width,float depth,Color *color,MethodInfo *method)

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
  if ((width < _UNK_?) || (depth < _UNK_?)) {
    return (Mesh *)0x0;
  }
  fVar1 = width * _UNK_?;
  fVar2 = depth * _UNK_?;
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3 = _UNK_?;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->rightVector).x;
  uVar6 = (pVVar4->rightVector).y;
  fVar7 = (float)(uVar5 ^ _UNK_?);
  fVar8 = (float)(uVar6 ^ _UNK_?);
  fVar9 = (float)((uint)(pVVar4->rightVector).z ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar10 = cRam_?;
  cVar11 = cRam_?;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar4->forwardVector).x;
  uVar13 = (pVVar4->forwardVector).y;
  fVar14 = (pVVar4->forwardVector).z;
  if (this == (Array *)0x0) goto code_?;
  if (*(int *)&this[1].monitor != 0) {
    this[2].klass =
         (Array__Class *)
         CONCAT44(fVar8 * fVar1 - (float)uVar13 * fVar2,fVar7 * fVar1 - (float)uVar12 * fVar2);
    *(float *)&this[2].monitor = fVar9 * fVar1 - fVar14 * fVar2;
    if (cVar10 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar10 = '\x01';
      cRam_? = '\x01';
      cVar11 = cRam_?;
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->rightVector).x;
    uVar16 = (pVVar4->rightVector).y;
    fVar8 = (pVVar4->rightVector).z;
    if (cVar11 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar11 = '\x01';
      cRam_? = '\x01';
      cVar10 = cRam_?;
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = (pVVar4->forwardVector).x;
    uVar18 = (pVVar4->forwardVector).y;
    fVar7 = (pVVar4->forwardVector).z;
    if (1 < *(uint *)&this[1].monitor) {
      *(ulonglong *)((longlong)&this[2].monitor + 4) =
           CONCAT44((float)uVar18 * fVar2 + (float)(uVar16 ^ uVar3) * fVar1,
                    (float)uVar17 * fVar2 + (float)(uVar15 ^ uVar3) * fVar1);
      *(float *)((longlong)&this[3].klass + 4) =
           fVar7 * fVar2 + (float)((uint)fVar8 ^ uVar3) * fVar1;
      if (cVar10 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar10 = '\x01';
        cRam_? = '\x01';
        cVar11 = cRam_?;
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar19 = (pVVar4->rightVector).x;
      uVar20 = (pVVar4->rightVector).y;
      fVar8 = (pVVar4->rightVector).z;
      if (cVar11 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar11 = '\x01';
        cRam_? = '\x01';
        cVar10 = cRam_?;
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar21 = (pVVar4->forwardVector).x;
      uVar22 = (pVVar4->forwardVector).y;
      fVar7 = (pVVar4->forwardVector).z;
      if (2 < *(uint *)&this[1].monitor) {
        this[3].monitor =
             (MonitorData *)
             CONCAT44((float)uVar22 * fVar2 + (float)uVar20 * fVar1,
                      (float)uVar21 * fVar2 + (float)uVar19 * fVar1);
        *(float *)&this[4].klass = fVar7 * fVar2 + fVar8 * fVar1;
        if (cVar10 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar11 = cRam_?;
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar23 = (pVVar4->rightVector).x;
        uVar24 = (pVVar4->rightVector).y;
        fVar8 = (pVVar4->rightVector).z;
        if (cVar11 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar25 = (pVVar4->forwardVector).x;
        uVar26 = (pVVar4->forwardVector).y;
        fVar7 = (pVVar4->forwardVector).z;
        if (3 < *(uint *)&this[1].monitor) {
          *(ulonglong *)((longlong)&this[4].klass + 4) =
               CONCAT44((float)uVar24 * fVar1 - (float)uVar26 * fVar2,
                        (float)uVar23 * fVar1 - (float)uVar25 * fVar2);
          *(float *)((longlong)&this[4].monitor + 4) = fVar8 * fVar1 - fVar7 * fVar2;
          value = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          cVar11 = cRam_?;
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (value == (Vector3__Array *)0x0) goto code_?;
          if ((int)value->max_length != 0) {
            fVar1 = (pVVar4->upVector).y;
            value->vector[0].x = (pVVar4->upVector).x;
            value->vector[0].y = fVar1;
            value->vector[0].z = (pVVar4->upVector).z;
            if (cVar11 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar11 = '\x01';
              cRam_? = '\x01';
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (1 < (uint)value->max_length) {
              fVar1 = (pVVar4->upVector).y;
              value->vector[1].x = (pVVar4->upVector).x;
              value->vector[1].y = fVar1;
              value->vector[1].z = (pVVar4->upVector).z;
              if (cVar11 == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cVar11 = '\x01';
                cRam_? = '\x01';
              }
              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
              if (2 < (uint)value->max_length) {
                fVar1 = (pVVar4->upVector).y;
                value->vector[2].x = (pVVar4->upVector).x;
                value->vector[2].y = fVar1;
                value->vector[2].z = (pVVar4->upVector).z;
                if (cVar11 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                if (3 < (uint)value->max_length) {
                  fVar1 = (pVVar4->upVector).y;
                  value->vector[3].x = (pVVar4->upVector).x;
                  value->vector[3].y = fVar1;
                  value->vector[3].z = (pVVar4->upVector).z;
                  method_00 = TypeInfo__UnityEngine__Vector2;
                  value_00 = (Vector2__Array *)FUN_?();
                  VVar27 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                                     ((MethodInfo *)method_00);
                  if (value_00 == (Vector2__Array *)0x0) goto code_?;
                  if ((int)value_00->max_length != 0) {
                    fStack_28 = VVar27.x;
                    fStack_29 = VVar27.y;
                    value_00->vector[0].x = fStack_28;
                    value_00->vector[0].y = fStack_29;
                    if (1 < (uint)value_00->max_length) {
                      uVar30 = 0;
                      value_00->vector[1].y = 1.0;
                      value_00->vector[1].x = 0.0;
                      if (2 < (uint)value_00->max_length) {
                        value_00->vector[2].x = 1.0;
                        value_00->vector[2].y = 1.0;
                        if (3 < (uint)value_00->max_length) {
                          value_00->vector[3].x = 1.0;
                          value_00->vector[3].y = 0.0;
                          pMVar31 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor
                                    (pMVar31,(MethodInfo *)0x0);
                          if (pMVar31 != (Mesh *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            valuesArrayLength =
                                 mscorlib.dll::System::Array::Array_get_Length
                                           (this,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                            Mesh_SetSizedArrayForChannel
                                      (pMVar31,VertexAttribute__Enum_Position,
                                       VertexAttributeFormat__Enum_Float32,3,this,valuesArrayLength,
                                       0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                                       (MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                                      (pMVar31,value,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                      (pMVar31,value_00,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Color);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            value_01 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,4)
                            ;
                            pCVar32 = value_01->vector;
                            uVar33 = uVar30;
                            if (value_01 != (Color__Array *)0x0) {
                              while ((uint)uVar30 < (uint)value_01->max_length) {
                                fVar1 = color->g;
                                fVar2 = color->b;
                                fVar8 = color->a;
                                uVar30 = (ulonglong)((uint)uVar30 + 1);
                                uVar33 = uVar33 + 1;
                                pCVar32->r = color->r;
                                pCVar32->g = fVar1;
                                pCVar32->b = fVar2;
                                pCVar32->a = fVar8;
                                pCVar32 = pCVar32 + 1;
                                if (3 < (longlong)uVar33) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                                            (pMVar31,value_01,(MethodInfo *)0x0);
                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6)
                                  ;
                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                                  RuntimeHelpers_InitializeArray_1
                                            ((Array *)indices,
                                             __753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_Field
                                             ,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                                            (pMVar31,indices,MeshTopology__Enum_Triangles,0,
                                             (MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                                            (pMVar31,0,(MethodInfo *)0x0);
                                  return pMVar31;
                                }
                              }
                              goto DAT_?;
                            }
                          }
code_?:
                          FUN_?();
                          pcVar34 = (code *)swi(3);
                          pMVar31 = (Mesh *)(*pcVar34)();
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
  pcVar34 = (code *)swi(3);
  pMVar31 = (Mesh *)(*pcVar34)();
  return pMVar31;
}


/* Mesh CreateWireQuadXY(Vector3, Vector2, Color) */

Mesh * Assembly-CSharp.dll::RTG::QuadMesh::QuadMesh_CreateWireQuadXY
                 (Vector3 *center,Vector2 size,Color *color,MethodInfo *method)

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
  fStackX_8 = fStackX_8 * _UNK_?;
  fStackX_c = fStackX_c * _UNK_?;
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
    pAVar1[2].klass =
         (Array__Class *)
         CONCAT44((fVar6 - fVar5 * fStackX_8) - (pVVar2->upVector).y * fStackX_c,
                  ((float)uVar4 - (float)uVar3 * fStackX_8) - (float)uVar11 * fStackX_c);
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
      *(ulonglong *)((longlong)&pAVar1[2].monitor + 4) =
           CONCAT44((pVVar2->upVector).y * fStackX_c + (fVar6 - fVar5 * fStackX_8),
                    (float)uVar15 * fStackX_c + ((float)uVar14 - (float)uVar13 * fStackX_8));
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
        pAVar1[3].monitor =
             (MonitorData *)
             CONCAT44(fStackX_c * (float)uVar20 + fVar5 * fStackX_8 + (float)uVar17,
                      fStackX_c * (float)uVar19 + (float)uVar18 * fStackX_8 + (float)uVar16);
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
          *(ulonglong *)((longlong)&pAVar1[4].klass + 4) =
               CONCAT44((fStackX_8 * (float)uVar22 + (float)uVar24) - fStackX_c * (float)uVar26,
                        (fStackX_8 * (float)uVar21 + (float)uVar23) - fStackX_c * (float)uVar25);
          *(float *)((longlong)&pAVar1[4].monitor + 4) =
               (fStackX_8 * fVar5 + fVar6) - fStackX_c * fVar7;
          indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,8);
          mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
          RuntimeHelpers_InitializeArray_1
                    ((Array *)indices,
                     __95853D8881732E63777CF081EF757E3A1D025544145D488F88F1A2C2A6FCA008_Field,
                     (MethodInfo *)0x0);
          pMVar27 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar27,(MethodInfo *)0x0);
          if (pMVar27 != (Mesh *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar28 = mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
            uVar29 = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                      (pMVar27,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                       pAVar1,iVar28,0,iVar28,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
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
                    FUN_?(&
                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar28 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                            (pMVar27,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32
                             ,4,this,iVar28,0,iVar28,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0
                            );
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                            (pMVar27,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                            (pMVar27,0,(MethodInfo *)0x0);
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

