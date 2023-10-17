
/* Void SetCubeMaterial(Byte) */

void Assembly-CSharp.dll::CubeBullet::CubeBullet_SetCubeMaterial
               (CubeBullet *this,uint8_t id,MethodInfo *method)

{
  this_00 = (this->fields).meshFilter;
  (this->fields)._MaterialID_k__BackingField = id;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_01 = (pMVar1->fields)._MaterialRepository_k__BackingField,
     this_01 != (MVMaterialRepository *)0x0)) {
    pMVar2 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_01,(this->fields)._MaterialID_k__BackingField,(MethodInfo *)0x0);
    if ((pMVar2 != (MVMaterial *)0x0) && (this_00 != (MeshFilter *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (this_00,(pMVar2->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
      this_02 = (this->fields).meshRenderer;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar3 != (MaterialLoader *)0x0) && (this_02 != (MeshRenderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)this_02,(pMVar3->fields)._CubeModelMaterial_k__BackingField,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CubeBullet::CubeBullet_Update(CubeBullet *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
  fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    auVar4._4_4_ = fVar2;
    auVar4._0_4_ = uVar1;
    auVar4._8_4_ = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
              (this_00,(Vector3)(auVar4 << 0x20),fVar3 * _UNK_?,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

