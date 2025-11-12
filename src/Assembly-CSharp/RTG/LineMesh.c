
/* Mesh CreateCoordSystemAxesLines(Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::LineMesh::LineMesh_CreateCoordSystemAxesLines
                 (float axisLength,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_5211FBC4418F45E3906E7CF462D8B9DD6E03A0F578F58053A4E00000F721A0FE_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (axisLength < _UNK_?) {
    return (Mesh *)0x0;
  }
  pAVar1 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (pAVar1 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar1[1].monitor != 0) {
    bVar3 = cRam_? == '\0';
    pAVar1[2].klass = *(Array__Class **)&pVVar2->zeroVector;
    *(float *)&pAVar1[2].monitor = (pVVar2->zeroVector).z;
    if (bVar3) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar2->rightVector).x;
    fVar5 = (pVVar2->rightVector).z;
    if (1 < *(uint *)&pAVar1[1].monitor) {
      bVar3 = cRam_? == '\0';
      *(ulonglong *)((longlong)&pAVar1[2].monitor + 4) =
           CONCAT44((pVVar2->rightVector).y * axisLength,(float)uVar4 * axisLength);
      *(float *)((longlong)&pAVar1[3].klass + 4) = fVar5 * axisLength;
      if (bVar3) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar6 = (pVVar2->upVector).x;
      fVar5 = (pVVar2->upVector).z;
      if (2 < *(uint *)&pAVar1[1].monitor) {
        bVar3 = cRam_? == '\0';
        pAVar1[3].monitor =
             (MonitorData *)CONCAT44((pVVar2->upVector).y * axisLength,(float)uVar6 * axisLength);
        *(float *)&pAVar1[4].klass = fVar5 * axisLength;
        if (bVar3) {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar7 = (pVVar2->forwardVector).x;
        fVar5 = (pVVar2->forwardVector).z;
        if (3 < *(uint *)&pAVar1[1].monitor) {
          *(ulonglong *)((longlong)&pAVar1[4].klass + 4) =
               CONCAT44((pVVar2->forwardVector).y * axisLength,(float)uVar7 * axisLength);
          *(float *)((longlong)&pAVar1[4].monitor + 4) = fVar5 * axisLength;
          indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,6);
          mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
          RuntimeHelpers_InitializeArray_1
                    ((Array *)indices,
                     __5211FBC4418F45E3906E7CF462D8B9DD6E03A0F578F58053A4E00000F721A0FE_Field,
                     (MethodInfo *)0x0);
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
            iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar1,(MethodInfo *)0x0);
            uVar10 = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                      (pMVar8,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                       pAVar1,iVar9,0,iVar9,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Color);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this = (Array *)FUN_?(TypeInfo__UnityEngine__Color,4);
            pAVar1 = this + 2;
            uVar11 = uVar10;
            if (this != (Array *)0x0) {
              while ((uint)uVar10 < *(uint *)&this[1].monitor) {
                fVar5 = color->g;
                fVar12 = color->b;
                fVar13 = color->a;
                uVar10 = (ulonglong)((uint)uVar10 + 1);
                uVar11 = uVar11 + 1;
                *(float *)&pAVar1->klass = color->r;
                *(float *)((longlong)&pAVar1->klass + 4) = fVar5;
                *(float *)&pAVar1->monitor = fVar12;
                *(float *)((longlong)&pAVar1->monitor + 4) = fVar13;
                pAVar1 = pAVar1 + 1;
                if (3 < (longlong)uVar11) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar9 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                            (pMVar8,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32
                             ,4,this,iVar9,0,iVar9,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                            (pMVar8,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                            (pMVar8,0,(MethodInfo *)0x0);
                  return pMVar8;
                }
              }
              goto DAT_?;
            }
          }
code_?:
          FUN_?();
          pcVar14 = (code *)swi(3);
          pMVar8 = (Mesh *)(*pcVar14)();
          return pMVar8;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar8 = (Mesh *)(*pcVar14)();
  return pMVar8;
}


/* Mesh CreateLine(Vector3, Vector3, Color) */

Mesh * Assembly-CSharp.dll::RTG::LineMesh::LineMesh_CreateLine
                 (Vector3 *startPoint,Vector3 *endPoint,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  pMVar1 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
  pAVar2 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
  if (pAVar2 != (Array *)0x0) {
    if (*(int *)&pAVar2[1].monitor != 0) {
      fVar3 = startPoint->z;
      pAVar2[2].klass = *(Array__Class **)startPoint;
      *(float *)&pAVar2[2].monitor = fVar3;
      if (1 < *(uint *)&pAVar2[1].monitor) {
        *(undefined8 *)((longlong)&pAVar2[2].monitor + 4) = *(undefined8 *)endPoint;
        *(float *)((longlong)&pAVar2[3].klass + 4) = endPoint->z;
        if (pMVar1 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
          uVar5 = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (pMVar1,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                     pAVar2,iVar4,0,iVar4,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this = (Array *)FUN_?(TypeInfo__UnityEngine__Color,2);
          pAVar2 = this + 2;
          uVar6 = uVar5;
          if (this != (Array *)0x0) {
            do {
              if (*(uint *)&this[1].monitor <= (uint)uVar5) goto code_?;
              fVar3 = color->g;
              fVar7 = color->b;
              fVar8 = color->a;
              uVar5 = (ulonglong)((uint)uVar5 + 1);
              uVar6 = uVar6 + 1;
              *(float *)&pAVar2->klass = color->r;
              *(float *)((longlong)&pAVar2->klass + 4) = fVar3;
              *(float *)&pAVar2->monitor = fVar7;
              *(float *)((longlong)&pAVar2->monitor + 4) = fVar8;
              pAVar2 = pAVar2 + 1;
            } while ((longlong)uVar6 < 2);
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar4 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                      (pMVar1,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,this
                       ,iVar4,0,iVar4,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,2);
            if (indices != (Int32__Array *)0x0) {
              if (1 < (uint)indices->max_length) {
                indices->vector[1] = 1;
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                          (pMVar1,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                          (pMVar1,0,(MethodInfo *)0x0);
                return pMVar1;
              }
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pMVar1 = (Mesh *)(*pcVar9)();
    return pMVar1;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  pMVar1 = (Mesh *)(*pcVar9)();
  return pMVar1;
}

