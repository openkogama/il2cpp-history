
/* Void Destroy() */

void Assembly-CSharp.dll::SharedMeshData::SharedMeshData_Destroy
               (SharedMeshData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = this[1].mesh;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  *mesh = this[1].mesh;
  *material = this[1].material;
  return;
}


/* SharedMeshData(Mesh) */

void Assembly-CSharp.dll::SharedMeshData::SharedMeshData__ctor
               (SharedMeshData *this,Mesh *mesh,MethodInfo *method)

{
  this[1].mesh = mesh;
  this[1].material = (Material *)0x0;
  return;
}

