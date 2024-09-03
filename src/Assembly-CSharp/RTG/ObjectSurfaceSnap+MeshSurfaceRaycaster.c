
/* GameObjectRayHit Raycast(Ray) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+MeshSurfaceRaycaster::
ObjectSurfaceSnap_MeshSurfaceRaycaster_Raycast
          (ObjectSurfaceSnap_MeshSurfaceRaycaster *this,Ray ray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (this_00 != (RTScene *)0x0) {
    pGVar1 = RTScene::RTScene_RaycastMeshObject
                       (this_00,ray,(this->fields)._._surfaceObject,(MethodInfo *)0x0);
    return pGVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pGVar1 = (GameObjectRayHit *)(*pcVar3)();
  return pGVar1;
}

