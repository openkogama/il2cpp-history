
/* Void SetToMesh(Mesh ByRef, Material ByRef) */

void Assembly-CSharp.dll::MeshData::MeshData_SetToMesh
               (MeshData *this,Mesh **mesh,Material **material,MethodInfo *method)

{
  if (*mesh != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(*mesh,(MethodInfo *)0x0);
    pMVar1 = *mesh;
    value = MeshDataPool::MeshDataPool_GetVertices((MethodInfo *)0x0);
    if (pMVar1 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar1,value,(MethodInfo *)0x0);
      pMVar1 = *mesh;
      value_00 = MeshDataPool::MeshDataPool_GetIndices((MethodInfo *)0x0);
      if (pMVar1 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                  (pMVar1,value_00,(MethodInfo *)0x0);
        pMVar1 = *mesh;
        value_01 = MeshDataPool::MeshDataPool_GetColors((MethodInfo *)0x0);
        if (pMVar1 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                    (pMVar1,value_01,(MethodInfo *)0x0);
          pMVar1 = *mesh;
          value_02 = MeshDataPool::MeshDataPool_GetUvs((MethodInfo *)0x0);
          if (pMVar1 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                      (pMVar1,value_02,(MethodInfo *)0x0);
            if (*mesh != (Mesh *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                        (*mesh,(MethodInfo *)0x0);
              if (*mesh != (Mesh *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                          (*mesh,(MethodInfo *)0x0);
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                   ((MethodInfo *)0x0);
                if (pMVar2 != (MaterialLoader *)0x0) {
                  pMStack3 = (pMVar2->fields)._CubeModelMaterial_k__BackingField;
                  uStack4 = 0;
                  pMRam00000000 = pMStack3;
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

