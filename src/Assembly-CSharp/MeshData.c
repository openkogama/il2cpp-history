
/* Void SetToMesh(Mesh ByRef, Material ByRef) */

void Assembly-CSharp.dll::MeshData::MeshData_SetToMesh
               (MeshData *this,Mesh **mesh,Material **material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (*mesh != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(*mesh,(MethodInfo *)0x0);
    pMVar1 = *mesh;
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    iVar2 = MeshDataPool::MeshDataPool_get_VertexPos((MethodInfo *)0x0);
    value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar2);
    sourceArray = MeshDataPool::MeshDataPool_get_Vertices((MethodInfo *)0x0);
    iVar2 = MeshDataPool::MeshDataPool_get_VertexPos((MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Copy_1
              ((Array *)sourceArray,0,(Array *)value,0,iVar2,(MethodInfo *)0x0);
    if (pMVar1 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar1,value,(MethodInfo *)0x0);
      pMVar1 = *mesh;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
        func_?();
      }
      MeshDataPool::MeshDataPool_get_ColorPos((MethodInfo *)0x0);
      value_00 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color);
      sourceArray_00 = MeshDataPool::MeshDataPool_get_Colors((MethodInfo *)0x0);
      iVar2 = MeshDataPool::MeshDataPool_get_ColorPos((MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Copy_1
                ((Array *)sourceArray_00,0,(Array *)value_00,0,iVar2,(MethodInfo *)0x0);
      if (pMVar1 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar1,value_00,(MethodInfo *)0x0);
        pMVar1 = *mesh;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
          func_?();
        }
        MeshDataPool::MeshDataPool_get_UvPos((MethodInfo *)0x0);
        value_01 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2);
        sourceArray_01 = MeshDataPool::MeshDataPool_get_Uvs((MethodInfo *)0x0);
        iVar2 = MeshDataPool::MeshDataPool_get_UvPos((MethodInfo *)0x0);
        mscorlib.dll::System::Array::Array_Copy_1
                  ((Array *)sourceArray_01,0,(Array *)value_01,0,iVar2,(MethodInfo *)0x0);
        if (pMVar1 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                    (pMVar1,value_01,(MethodInfo *)0x0);
          pMVar1 = *mesh;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
            func_?();
          }
          MeshDataPool::MeshDataPool_get_IndicesPos((MethodInfo *)0x0);
          value_02 = (Int32__Array *)func_?(TypeInfo__System__Int32);
          sourceArray_02 = MeshDataPool::MeshDataPool_get_Indices((MethodInfo *)0x0);
          iVar2 = MeshDataPool::MeshDataPool_get_IndicesPos((MethodInfo *)0x0);
          mscorlib.dll::System::Array::Array_Copy
                    ((Array *)sourceArray_02,(Array *)value_02,iVar2,(MethodInfo *)0x0);
          if (pMVar1 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                      (pMVar1,value_02,(MethodInfo *)0x0);
            if (*mesh != (Mesh *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                        (*mesh,(MethodInfo *)0x0);
              if (*mesh != (Mesh *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                          (*mesh,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                   ((MethodInfo *)0x0);
                if (pMVar3 != (MaterialLoader *)0x0) {
                  *material = (pMVar3->fields)._CubeModelMaterial_k__BackingField;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

