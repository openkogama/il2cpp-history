
/* GameObjectRayHit Raycast(Ray) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+TerrainSurfaceRaycaster::
ObjectSurfaceSnap_TerrainSurfaceRaycaster_Raycast
          (ObjectSurfaceSnap_TerrainSurfaceRaycaster *this,Ray ray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    cRam_? = '\x01';
  }
  if ((this->fields)._._raycastReverse == 0) {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    }
    pRVar1 = (RTScene *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (pRVar1 != (RTScene *)0x0) {
      pGVar2 = RTScene::RTScene_RaycastTerrainObject_1
                         (pRVar1,ray,(this->fields)._._surfaceObject,(this->fields)._terrainCollider
                          ,(MethodInfo *)0x0);
      return pGVar2;
    }
  }
  else {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    }
    pRVar1 = (RTScene *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (pRVar1 != (RTScene *)0x0) {
      pGVar2 = RTScene::RTScene_RaycastTerrainObjectReverseIfFail
                         (pRVar1,ray,(this->fields)._._surfaceObject,(MethodInfo *)0x0);
      return pGVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pGVar2 = (GameObjectRayHit *)(*pcVar3)();
  return pGVar2;
}


/* ObjectSurfaceSnap+TerrainSurfaceRaycaster(GameObject, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+TerrainSurfaceRaycaster::
     ObjectSurfaceSnap_TerrainSurfaceRaycaster__ctor
               (ObjectSurfaceSnap_TerrainSurfaceRaycaster *this,GameObject *surfaceObject,
               bool raycastReverse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._surfaceObject = surfaceObject;
  func_?(&this->fields,surfaceObject);
  (this->fields)._._raycastReverse = raycastReverse;
  if (surfaceObject != (GameObject *)0x0) {
    pTVar1 = (TerrainCollider *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (surfaceObject,
                        UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                       );
    (this->fields)._terrainCollider = pTVar1;
    func_?(&(this->fields)._terrainCollider,pTVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

