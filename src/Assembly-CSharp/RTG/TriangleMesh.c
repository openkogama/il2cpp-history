
/* Mesh CreateEqXY(Vector3, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateEqXY
                 (Vector3 *centroid,float sideLength,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar2._0_4_ = (pQVar1->identityQuaternion).x;
  uVar2._4_4_ = (pQVar1->identityQuaternion).y;
  uVar3._0_4_ = (pQVar1->identityQuaternion).z;
  uVar3._4_4_ = (pQVar1->identityQuaternion).w;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.x = centroid->x;
  VStack_4.y = centroid->y;
  VStack_4.z = centroid->z;
  aQStack_5[0]._0_8_ = uVar2;
  aQStack_5[0]._8_8_ = uVar3;
  pLVar6 = TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                      (&VStack_4,sideLength,aQStack_5,(MethodInfo *)0x0);
  if (pLVar6 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pAVar7 = (Array *)FUN_?(pLVar6);
    this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar8 = cRam_?;
    uVar9 = _UNK_?;
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar10->forwardVector).x;
    uVar12 = (uint)(pVVar10->forwardVector).z ^ _UNK_?;
    if (this != (Array *)0x0) {
      if (*(int *)&this[1].monitor != 0) {
        this[2].klass =
             (Array__Class *)
             CONCAT44((uint)(pVVar10->forwardVector).y ^ _UNK_?,uVar11 ^ _UNK_?);
        *(uint *)&this[2].monitor = uVar12;
        if (cVar8 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cVar8 = '\x01';
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar13 = (pVVar10->forwardVector).x;
        fVar14 = (pVVar10->forwardVector).z;
        if (1 < *(uint *)&this[1].monitor) {
          *(ulonglong *)((longlong)&this[2].monitor + 4) =
               CONCAT44((uint)(pVVar10->forwardVector).y ^ uVar9,uVar13 ^ uVar9);
          *(uint *)((longlong)&this[3].klass + 4) = (uint)fVar14 ^ uVar9;
          if (cVar8 == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar15 = (pVVar10->forwardVector).x;
          fVar14 = (pVVar10->forwardVector).z;
          if (2 < *(uint *)&this[1].monitor) {
            this[3].monitor =
                 (MonitorData *)CONCAT44((uint)(pVVar10->forwardVector).y ^ uVar9,uVar15 ^ uVar9);
            *(uint *)&this[4].klass = (uint)fVar14 ^ uVar9;
            pMVar16 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar16,(MethodInfo *)0x0);
            if (pMVar16 != (Mesh *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              iVar17 = 0;
              if (pAVar7 != (Array *)0x0) {
                iVar17 = mscorlib.dll::System::Array::Array_get_Length(pAVar7,(MethodInfo *)0x0);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                        (pMVar16,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,
                         3,pAVar7,iVar17,0,iVar17,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
              pAVar7 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
              if (pAVar7 != (Array *)0x0) {
                if (*(int *)&pAVar7[1].monitor != 0) {
                  fVar14 = color->r;
                  fVar18 = color->g;
                  fVar19 = color->b;
                  fVar20 = color->a;
                  *(float *)&pAVar7[2].klass = fVar14;
                  *(float *)((longlong)&pAVar7[2].klass + 4) = fVar18;
                  *(float *)&pAVar7[2].monitor = fVar19;
                  *(float *)((longlong)&pAVar7[2].monitor + 4) = fVar20;
                  if (1 < *(uint *)&pAVar7[1].monitor) {
                    *(float *)&pAVar7[3].klass = fVar14;
                    *(float *)((longlong)&pAVar7[3].klass + 4) = fVar18;
                    *(float *)&pAVar7[3].monitor = fVar19;
                    *(float *)((longlong)&pAVar7[3].monitor + 4) = fVar20;
                    if (2 < *(uint *)&pAVar7[1].monitor) {
                      bVar21 = cRam_? == '\0';
                      *(float *)&pAVar7[4].klass = fVar14;
                      *(float *)((longlong)&pAVar7[4].klass + 4) = fVar18;
                      *(float *)&pAVar7[4].monitor = fVar19;
                      *(float *)((longlong)&pAVar7[4].monitor + 4) = fVar20;
                      if (bVar21) {
                        FUN_?(&
                                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      iVar17 = mscorlib.dll::System::Array::Array_get_Length
                                         (pAVar7,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                                (pMVar16,VertexAttribute__Enum_Color,
                                 VertexAttributeFormat__Enum_Float32,4,pAVar7,iVar17,0,iVar17,
                                 MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      iVar17 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0)
                      ;
                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                                (pMVar16,VertexAttribute__Enum_Normal,
                                 VertexAttributeFormat__Enum_Float32,3,this,iVar17,0,iVar17,
                                 MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                      indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,3);
                      if (indices == (Int32__Array *)0x0) goto code_?;
                      if ((1 < (uint)indices->max_length) &&
                         (indices->vector[1] = 1, 2 < (uint)indices->max_length)) {
                        indices->vector[2] = 2;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                                  (pMVar16,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0)
                        ;
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                                  (pMVar16,0,(MethodInfo *)0x0);
                        return pMVar16;
                      }
                    }
                  }
                }
                goto code_?;
              }
            }
            goto code_?;
          }
        }
      }
code_?:
      FUN_?();
      pcVar22 = (code *)swi(3);
      pMVar16 = (Mesh *)(*pcVar22)();
      return pMVar16;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  pMVar16 = (Mesh *)(*pcVar22)();
  return pMVar16;
}


/* Mesh CreateRightAngledTriangleXY(Vector3, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateRightAngledTriangleXY
                 (Vector3 *cornerPosition,float xLength,float yLength,Color *color,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((xLength < _UNK_?) || (yLength < _UNK_?)) {
    return (Mesh *)0x0;
  }
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
  if (this == (Array *)0x0) goto code_?;
  if (*(int *)&this[1].monitor != 0) {
    bVar1 = cRam_? == '\0';
    fVar2 = cornerPosition->z;
    this[2].klass = *(Array__Class **)cornerPosition;
    *(float *)&this[2].monitor = fVar2;
    if (bVar1) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = cornerPosition->x;
    uVar5 = cornerPosition->y;
    uVar6 = (pVVar3->upVector).x;
    fVar2 = (pVVar3->upVector).z;
    fVar7 = cornerPosition->z;
    if (1 < *(uint *)&this[1].monitor) {
      bVar1 = cRam_? == '\0';
      *(ulonglong *)((longlong)&this[2].monitor + 4) =
           CONCAT44((pVVar3->upVector).y * xLength + (float)uVar5,
                    (float)uVar6 * xLength + (float)uVar4);
      *(float *)((longlong)&this[3].klass + 4) = fVar2 * xLength + fVar7;
      if (bVar1) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar8 = cornerPosition->x;
      uVar9 = cornerPosition->y;
      uVar10 = (pVVar3->rightVector).x;
      fVar2 = (pVVar3->rightVector).z;
      fVar7 = cornerPosition->z;
      if (2 < *(uint *)&this[1].monitor) {
        this[3].monitor =
             (MonitorData *)
             CONCAT44((pVVar3->rightVector).y * yLength + (float)uVar9,
                      (float)uVar10 * yLength + (float)uVar8);
        *(float *)&this[4].klass = fVar2 * yLength + fVar7;
        pMVar11 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar11,(MethodInfo *)0x0);
        if (pMVar11 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (pMVar11,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                     this,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                     (MethodInfo *)0x0);
          value = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,3);
          if (value != (Color__Array *)0x0) {
            if ((int)value->max_length != 0) {
              fVar2 = color->r;
              fVar7 = color->g;
              fVar12 = color->b;
              fVar13 = color->a;
              value->vector[0].r = fVar2;
              value->vector[0].g = fVar7;
              value->vector[0].b = fVar12;
              value->vector[0].a = fVar13;
              if (1 < (uint)value->max_length) {
                value->vector[1].r = fVar2;
                value->vector[1].g = fVar7;
                value->vector[1].b = fVar12;
                value->vector[1].a = fVar13;
                if (2 < (uint)value->max_length) {
                  value->vector[2].r = fVar2;
                  value->vector[2].g = fVar7;
                  value->vector[2].b = fVar12;
                  value->vector[2].a = fVar13;
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                            (pMVar11,value,(MethodInfo *)0x0);
                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,3);
                  if (indices == (Int32__Array *)0x0) goto code_?;
                  if ((1 < (uint)indices->max_length) &&
                     (indices->vector[1] = 1, 2 < (uint)indices->max_length)) {
                    indices->vector[2] = 2;
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                              (pMVar11,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                              (pMVar11,0,(MethodInfo *)0x0);
                    return pMVar11;
                  }
                }
              }
            }
            goto DAT_?;
          }
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        pMVar11 = (Mesh *)(*pcVar14)();
        return pMVar11;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar11 = (Mesh *)(*pcVar14)();
  return pMVar11;
}


/* Mesh CreateWireEqXY(Vector3, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateWireEqXY
                 (Vector3 *centroid,float sideLength,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar2._0_4_ = (pQVar1->identityQuaternion).x;
  uVar2._4_4_ = (pQVar1->identityQuaternion).y;
  uVar3._0_4_ = (pQVar1->identityQuaternion).z;
  uVar3._4_4_ = (pQVar1->identityQuaternion).w;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.x = centroid->x;
  VStack_4.y = centroid->y;
  VStack_4.z = centroid->z;
  aQStack_5[0]._0_8_ = uVar2;
  aQStack_5[0]._8_8_ = uVar3;
  pLVar6 = TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                      (&VStack_4,sideLength,aQStack_5,(MethodInfo *)0x0);
  if (pLVar6 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pAVar7 = (Array *)FUN_?(pLVar6);
    pMVar8 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar8,(MethodInfo *)0x0);
    if (pMVar8 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar9 = 0;
      if (pAVar7 != (Array *)0x0) {
        iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar7,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar8,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                 pAVar7,iVar9,0,iVar9,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      pAVar7 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
      if (pAVar7 != (Array *)0x0) {
        if (*(int *)&pAVar7[1].monitor != 0) {
          fVar10 = color->r;
          fVar11 = color->g;
          fVar12 = color->b;
          fVar13 = color->a;
          *(float *)&pAVar7[2].klass = fVar10;
          *(float *)((longlong)&pAVar7[2].klass + 4) = fVar11;
          *(float *)&pAVar7[2].monitor = fVar12;
          *(float *)((longlong)&pAVar7[2].monitor + 4) = fVar13;
          if (1 < *(uint *)&pAVar7[1].monitor) {
            *(float *)&pAVar7[3].klass = fVar10;
            *(float *)((longlong)&pAVar7[3].klass + 4) = fVar11;
            *(float *)&pAVar7[3].monitor = fVar12;
            *(float *)((longlong)&pAVar7[3].monitor + 4) = fVar13;
            if (2 < *(uint *)&pAVar7[1].monitor) {
              bVar14 = cRam_? == '\0';
              *(float *)&pAVar7[4].klass = fVar10;
              *(float *)((longlong)&pAVar7[4].klass + 4) = fVar11;
              *(float *)&pAVar7[4].monitor = fVar12;
              *(float *)((longlong)&pAVar7[4].monitor + 4) = fVar13;
              if (bVar14) {
                FUN_?(&
                              void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar7,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                        (pMVar8,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,
                         pAVar7,iVar9,0,iVar9,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
              indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,4);
              if (indices == (Int32__Array *)0x0) goto DAT_?;
              if ((1 < (uint)indices->max_length) &&
                 (indices->vector[1] = 1, 2 < (uint)indices->max_length)) {
                indices->vector[2] = 2;
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                          (pMVar8,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                          (pMVar8,0,(MethodInfo *)0x0);
                return pMVar8;
              }
            }
          }
        }
        FUN_?();
        pcVar15 = (code *)swi(3);
        pMVar8 = (Mesh *)(*pcVar15)();
        return pMVar8;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  pMVar8 = (Mesh *)(*pcVar15)();
  return pMVar8;
}


/* Mesh CreateWireRightAngledTriangleXY(Vector3, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::TriangleMesh::TriangleMesh_CreateWireRightAngledTriangleXY
                 (Vector3 *cornerPosition,float xLength,float yLength,Color *color,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((xLength < _UNK_?) || (yLength < _UNK_?)) {
    return (Mesh *)0x0;
  }
  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
  if (this == (Array *)0x0) goto code_?;
  if (*(int *)&this[1].monitor != 0) {
    bVar1 = cRam_? == '\0';
    fVar2 = cornerPosition->z;
    this[2].klass = *(Array__Class **)cornerPosition;
    *(float *)&this[2].monitor = fVar2;
    if (bVar1) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = cornerPosition->x;
    uVar5 = cornerPosition->y;
    uVar6 = (pVVar3->upVector).x;
    fVar2 = (pVVar3->upVector).z;
    fVar7 = cornerPosition->z;
    if (1 < *(uint *)&this[1].monitor) {
      bVar1 = cRam_? == '\0';
      *(ulonglong *)((longlong)&this[2].monitor + 4) =
           CONCAT44((pVVar3->upVector).y * xLength + (float)uVar5,
                    (float)uVar6 * xLength + (float)uVar4);
      *(float *)((longlong)&this[3].klass + 4) = fVar2 * xLength + fVar7;
      if (bVar1) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar8 = cornerPosition->x;
      uVar9 = cornerPosition->y;
      uVar10 = (pVVar3->rightVector).x;
      fVar2 = (pVVar3->rightVector).z;
      fVar7 = cornerPosition->z;
      if (2 < *(uint *)&this[1].monitor) {
        this[3].monitor =
             (MonitorData *)
             CONCAT44((pVVar3->rightVector).y * yLength + (float)uVar9,
                      (float)uVar10 * yLength + (float)uVar8);
        *(float *)&this[4].klass = fVar2 * yLength + fVar7;
        pMVar11 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar11,(MethodInfo *)0x0);
        if (pMVar11 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (pMVar11,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                     this,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                     (MethodInfo *)0x0);
          value = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,3);
          if (value != (Color__Array *)0x0) {
            if ((int)value->max_length != 0) {
              fVar2 = color->r;
              fVar7 = color->g;
              fVar12 = color->b;
              fVar13 = color->a;
              value->vector[0].r = fVar2;
              value->vector[0].g = fVar7;
              value->vector[0].b = fVar12;
              value->vector[0].a = fVar13;
              if (1 < (uint)value->max_length) {
                value->vector[1].r = fVar2;
                value->vector[1].g = fVar7;
                value->vector[1].b = fVar12;
                value->vector[1].a = fVar13;
                if (2 < (uint)value->max_length) {
                  value->vector[2].r = fVar2;
                  value->vector[2].g = fVar7;
                  value->vector[2].b = fVar12;
                  value->vector[2].a = fVar13;
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                            (pMVar11,value,(MethodInfo *)0x0);
                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,4);
                  if (indices == (Int32__Array *)0x0) goto code_?;
                  if ((1 < (uint)indices->max_length) &&
                     (indices->vector[1] = 1, 2 < (uint)indices->max_length)) {
                    indices->vector[2] = 2;
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                              (pMVar11,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                              (pMVar11,0,(MethodInfo *)0x0);
                    return pMVar11;
                  }
                }
              }
            }
            goto DAT_?;
          }
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        pMVar11 = (Mesh *)(*pcVar14)();
        return pMVar11;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar11 = (Mesh *)(*pcVar14)();
  return pMVar11;
}

