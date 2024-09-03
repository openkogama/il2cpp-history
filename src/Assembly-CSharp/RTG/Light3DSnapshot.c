
/* Void Apply() */

void Assembly-CSharp.dll::RTG::Light3DSnapshot::Light3DSnapshot_Apply
               (Light3DSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._light;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pLVar1 = (this->fields)._light;
  if ((pLVar1 != (Light *)0x0) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pLVar1,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar3,(this->fields)._position,(MethodInfo *)0x0);
    pLVar1 = (this->fields)._light;
    if ((pLVar1 != (Light *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar1,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar3,(this->fields)._rotation,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._light;
      if (pLVar1 != (Light *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                  (pLVar1,(this->fields)._range,(MethodInfo *)0x0);
        pLVar1 = (this->fields)._light;
        if (pLVar1 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_spotAngle
                    (pLVar1,(this->fields)._spotAngle,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Snapshot(Light) */

void Assembly-CSharp.dll::RTG::Light3DSnapshot::Light3DSnapshot_Snapshot
               (Light3DSnapshot *this,Light *light,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)light,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  (this->fields)._light = light;
  func_?(&this->fields);
  if ((light != (Light *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)light,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._position.x = pVVar3->x;
    (this->fields)._position.y = fVar4;
    (this->fields)._position.z = fVar5;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)light,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
      fVar5 = pQVar6->y;
      fVar4 = pQVar6->z;
      fVar7 = pQVar6->w;
      (this->fields)._rotation.x = pQVar6->x;
      (this->fields)._rotation.y = fVar5;
      (this->fields)._rotation.z = fVar4;
      (this->fields)._rotation.w = fVar7;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                        (light,(MethodInfo *)0x0);
      (this->fields)._range = fVar5;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_spotAngle
                        (light,(MethodInfo *)0x0);
      (this->fields)._spotAngle = fVar5;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Light3DSnapshot(Light3DSnapshot) */

void Assembly-CSharp.dll::RTG::Light3DSnapshot::Light3DSnapshot__ctor_1
               (Light3DSnapshot *this,Light3DSnapshot *src,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (src != (Light3DSnapshot *)0x0) {
    pLVar1 = (src->fields)._light;
    (this->fields)._light = pLVar1;
    func_?(&this->fields,pLVar1);
    fVar2 = (src->fields)._position.y;
    fVar3 = (src->fields)._position.z;
    (this->fields)._position.x = (src->fields)._position.x;
    (this->fields)._position.y = fVar2;
    (this->fields)._position.z = fVar3;
    fVar3 = (src->fields)._rotation.y;
    fVar2 = (src->fields)._rotation.z;
    fVar4 = (src->fields)._rotation.w;
    (this->fields)._rotation.x = (src->fields)._rotation.x;
    (this->fields)._rotation.y = fVar3;
    (this->fields)._rotation.z = fVar2;
    (this->fields)._rotation.w = fVar4;
    (this->fields)._range = (src->fields)._range;
    (this->fields)._spotAngle = (src->fields)._spotAngle;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

