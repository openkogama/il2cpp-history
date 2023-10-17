
/* Void SetToMesh(Mesh ByRef, Material ByRef) */

void Assembly-CSharp.dll::MeshData::MeshData_SetToMesh
               (MeshData *this,Mesh **mesh,Material **material,MethodInfo *method)

{
  if (*mesh != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(*mesh,(MethodInfo *)0x0);
    pMVar1 = *mesh;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar2 != (MeshDataPool *)0x0) {
      value = (Vector3__Array *)
              func_?(TypeInfo__UnityEngine__Vector3,(pMVar2->fields).vertexPos);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 != (MeshDataPool *)0x0) {
        sourceArray = (pMVar2->fields).vertices;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar2 != (MeshDataPool *)0x0) {
          mscorlib.dll::System::Array::Array_Copy_3
                    ((Array *)sourceArray,0,(Array *)value,0,(pMVar2->fields).vertexPos,
                     (MethodInfo *)0x0);
          if (pMVar1 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                      (pMVar1,value,(MethodInfo *)0x0);
            pMVar1 = *mesh;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MeshDataPool);
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
            if (pMVar2 != (MeshDataPool *)0x0) {
              value_00 = (Color__Array *)
                         func_?(TypeInfo__UnityEngine__Color,(pMVar2->fields).colorPos);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MeshDataPool);
                cRam_? = '\x01';
              }
              pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
              if (pMVar2 != (MeshDataPool *)0x0) {
                sourceArray_00 = (pMVar2->fields).colors;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__MeshDataPool);
                  cRam_? = '\x01';
                }
                pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                if (pMVar2 != (MeshDataPool *)0x0) {
                  mscorlib.dll::System::Array::Array_Copy_3
                            ((Array *)sourceArray_00,0,(Array *)value_00,0,(pMVar2->fields).colorPos
                             ,(MethodInfo *)0x0);
                  if (pMVar1 != (Mesh *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                              (pMVar1,value_00,(MethodInfo *)0x0);
                    pMVar1 = *mesh;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__MeshDataPool);
                      cRam_? = '\x01';
                    }
                    pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                    if (pMVar2 != (MeshDataPool *)0x0) {
                      value_01 = (Vector2__Array *)
                                 func_?(TypeInfo__UnityEngine__Vector2,
                                                 (pMVar2->fields).uvPos);
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__MeshDataPool);
                        cRam_? = '\x01';
                      }
                      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                      if (pMVar2 != (MeshDataPool *)0x0) {
                        sourceArray_01 = (pMVar2->fields).uvs;
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__MeshDataPool);
                          cRam_? = '\x01';
                        }
                        pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                        if (pMVar2 != (MeshDataPool *)0x0) {
                          mscorlib.dll::System::Array::Array_Copy_3
                                    ((Array *)sourceArray_01,0,(Array *)value_01,0,
                                     (pMVar2->fields).uvPos,(MethodInfo *)0x0);
                          if (pMVar1 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                      (pMVar1,value_01,(MethodInfo *)0x0);
                            pMVar1 = *mesh;
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            if (cRam_? == '\0') {
                              func_?(&TypeInfo__MeshDataPool);
                              cRam_? = '\x01';
                            }
                            pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                            if (pMVar2 != (MeshDataPool *)0x0) {
                              value_02 = (Int32__Array *)
                                         func_?(TypeInfo__System__Int32,
                                                         (pMVar2->fields).indicesPos);
                              if (cRam_? == '\0') {
                                func_?(&TypeInfo__MeshDataPool);
                                cRam_? = '\x01';
                              }
                              pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                              if (pMVar2 != (MeshDataPool *)0x0) {
                                sourceArray_02 = (pMVar2->fields).indices;
                                if (cRam_? == '\0') {
                                  func_?(&TypeInfo__MeshDataPool);
                                  cRam_? = '\x01';
                                }
                                pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
                                if (pMVar2 != (MeshDataPool *)0x0) {
                                  mscorlib.dll::System::Array::Array_Copy_2
                                            ((Array *)sourceArray_02,(Array *)value_02,
                                             (pMVar2->fields).indicesPos,(MethodInfo *)0x0);
                                  if (pMVar1 != (Mesh *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                    Mesh_set_triangles(pMVar1,value_02,(MethodInfo *)0x0);
                                    if (*mesh != (Mesh *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateNormals(*mesh,(MethodInfo *)0x0);
                                      if (*mesh != (Mesh *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                        Mesh_RecalculateBounds(*mesh,(MethodInfo *)0x0);
                                        pMVar3 = MVGameControllerBase::
                                                 MVGameControllerBase_get_MaterialLoader
                                                           ((MethodInfo *)0x0);
                                        if (pMVar3 != (MaterialLoader *)0x0) {
                                          pMStack4 =
                                               (pMVar3->fields)._CubeModelMaterial_k__BackingField;
                                          uStack5 = 0;
                                          pMRam00000000 = pMStack4;
                                          func_?();
                                          return;
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
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

