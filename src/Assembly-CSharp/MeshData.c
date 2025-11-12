
/* Void SetToMesh(Mesh ByRef, Material ByRef) */

void Assembly-CSharp.dll::MeshData::MeshData_SetToMesh
               (MeshData *this,Mesh **mesh,Material **material,MethodInfo *method)

{
  pMVar1 = *mesh;
  if (pMVar1 != (Mesh *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pMVar1->fields)._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pMVar1 = *mesh;
    this_00 = MeshDataPool::MeshDataPool_GetVertices((MethodInfo *)0x0);
    if (pMVar1 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      valuesArrayLength = 0;
      iVar4 = valuesArrayLength;
      if (this_00 != (Vector3__Array *)0x0) {
        iVar4 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar1,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                 (Array *)this_00,iVar4,0,iVar4,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      pMVar1 = *mesh;
      value = MeshDataPool::MeshDataPool_GetIndices((MethodInfo *)0x0);
      if (pMVar1 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                  (pMVar1,value,(MethodInfo *)0x0);
        pMVar1 = *mesh;
        this_01 = MeshDataPool::MeshDataPool_GetColors((MethodInfo *)0x0);
        if (pMVar1 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar4 = valuesArrayLength;
          if (this_01 != (Color__Array *)0x0) {
            iVar4 = mscorlib.dll::System::Array::Array_get_Length
                              ((Array *)this_01,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (pMVar1,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,
                     (Array *)this_01,iVar4,0,iVar4,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0)
          ;
          pMVar1 = *mesh;
          this_02 = MeshDataPool::MeshDataPool_GetUvs((MethodInfo *)0x0);
          if (pMVar1 != (Mesh *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this_02 != (Vector2__Array *)0x0) {
              valuesArrayLength =
                   mscorlib.dll::System::Array::Array_get_Length((Array *)this_02,(MethodInfo *)0x0)
              ;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                      (pMVar1,VertexAttribute__Enum_TexCoord0,VertexAttributeFormat__Enum_Float32,2,
                       (Array *)this_02,valuesArrayLength,0,valuesArrayLength,
                       MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            if (*mesh != (Mesh *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
                        (*mesh,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
              if (*mesh != (Mesh *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                          (*mesh,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                   ((MethodInfo *)0x0);
                if (pMVar5 != (MaterialLoader *)0x0) {
                  bVar6 = iRam_? != 0;
                  *material = (pMVar5->fields)._CubeModelMaterial_k__BackingField;
                  if (bVar6) {
                    uVar7 = (uint)((ulonglong)material >> 0xc);
                    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar9 = *puVar8;
                      LOCK();
                      uVar10 = *puVar8;
                      if (uVar9 == uVar10) {
                        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar9 != uVar10);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

