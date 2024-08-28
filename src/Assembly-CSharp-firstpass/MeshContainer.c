
/* Void Update() */

void Assembly-CSharp-firstpass.dll::MeshContainer::MeshContainer_Update
               (MeshContainer *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mesh;
  if (pMVar1 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (pMVar1,(this->fields).vertices,(MethodInfo *)0x0);
    pMVar1 = (this->fields).mesh;
    if (pMVar1 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                (pMVar1,(this->fields).normals,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MeshContainer(Mesh) */

void Assembly-CSharp-firstpass.dll::MeshContainer::MeshContainer__ctor
               (MeshContainer *this,Mesh *m,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).mesh = m;
  func_?(&this->fields,m);
  if (m != (Mesh *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(m,(MethodInfo *)0x0);
    ppVVar2 = &(this->fields).vertices;
    *ppVVar2 = pVVar1;
    func_?(ppVVar2,pVVar1);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_normals(m,(MethodInfo *)0x0);
    ppVVar2 = &(this->fields).normals;
    *ppVVar2 = pVVar1;
    func_?(ppVVar2,pVVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

