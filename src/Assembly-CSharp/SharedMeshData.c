
/* Void Destroy() */

void Assembly-CSharp.dll::SharedMeshData::SharedMeshData_Destroy
               (SharedMeshData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = this->mesh;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void SetToMesh(Mesh ByRef, Material ByRef) */

void Assembly-CSharp.dll::SharedMeshData::SharedMeshData_SetToMesh
               (SharedMeshData *this,Mesh **mesh,Material **material,MethodInfo *method)

{
  pMVar1 = this->mesh;
  *mesh = pMVar1;
  func_?(mesh,pMVar1);
  pMVar2 = this->material;
  *material = pMVar2;
  func_?(material,pMVar2);
  return;
}


/* SharedMeshData(Mesh) */

void Assembly-CSharp.dll::SharedMeshData::SharedMeshData__ctor
               (SharedMeshData *this,Mesh *mesh,MethodInfo *method)

{
  this->mesh = mesh;
  func_?(this,mesh);
  this->material = (Material *)0x0;
  func_?(&this->material,0);
  return;
}

