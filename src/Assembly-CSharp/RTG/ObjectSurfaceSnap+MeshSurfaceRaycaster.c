
/* GameObjectRayHit Raycast(Ray) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+MeshSurfaceRaycaster::
ObjectSurfaceSnap_MeshSurfaceRaycaster_Raycast
          (ObjectSurfaceSnap_MeshSurfaceRaycaster *this,Ray *ray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (this_00 != (RTScene *)0x0) {
    RStack_1.m_Origin.x = (ray->m_Origin).x;
    RStack_1.m_Origin.y = (ray->m_Origin).y;
    RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    RStack_1.m_Direction.y = (ray->m_Direction).y;
    RStack_1.m_Direction.z = (ray->m_Direction).z;
    pGVar2 = RTScene::RTScene_RaycastMeshObject
                       (this_00,&RStack_1,(this->fields)._._surfaceObject,(MethodInfo *)0x0);
    return pGVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pGVar2 = (GameObjectRayHit *)(*pcVar3)();
  return pGVar2;
}

