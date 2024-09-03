
/* Void Apply() */

void Assembly-CSharp.dll::RTG::SphereColliderSnapshot::SphereColliderSnapshot_Apply
               (SphereColliderSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._sphereCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pSVar1 = (this->fields)._sphereCollider;
  if (pSVar1 != (SphereCollider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_set_center
              (pSVar1,(this->fields)._localCenter,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._sphereCollider;
    if (pSVar1 != (SphereCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_set_radius
                (pSVar1,(this->fields)._localRadius,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Snapshot(SphereCollider) */

void Assembly-CSharp.dll::RTG::SphereColliderSnapshot::SphereColliderSnapshot_Snapshot
               (SphereColliderSnapshot *this,SphereCollider *sphereCollider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)sphereCollider,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._sphereCollider = sphereCollider;
    func_?(&this->fields);
    if (sphereCollider == (SphereCollider *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_center
                       ((Vector3 *)&stack0xfffffff0,sphereCollider,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._localCenter.x = pVVar3->x;
    (this->fields)._localCenter.y = fVar4;
    (this->fields)._localCenter.z = fVar5;
    fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_radius
                      (sphereCollider,(MethodInfo *)0x0);
    (this->fields)._localRadius = fVar5;
  }
  return;
}


/* SphereColliderSnapshot(SphereColliderSnapshot) */

void Assembly-CSharp.dll::RTG::SphereColliderSnapshot::SphereColliderSnapshot__ctor_1
               (SphereColliderSnapshot *this,SphereColliderSnapshot *src,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (src != (SphereColliderSnapshot *)0x0) {
    pSVar1 = (src->fields)._sphereCollider;
    (this->fields)._sphereCollider = pSVar1;
    func_?(&this->fields,pSVar1);
    fVar2 = (src->fields)._localCenter.y;
    fVar3 = (src->fields)._localCenter.z;
    (this->fields)._localCenter.x = (src->fields)._localCenter.x;
    (this->fields)._localCenter.y = fVar2;
    (this->fields)._localCenter.z = fVar3;
    (this->fields)._localRadius = (src->fields)._localRadius;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

