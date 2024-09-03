
/* Void Apply() */

void Assembly-CSharp.dll::RTG::CapsuleCollider3DSnapshot::CapsuleCollider3DSnapshot_Apply
               (CapsuleCollider3DSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._capsuleCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pCVar1 = (this->fields)._capsuleCollider;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_center
              (pCVar1,(this->fields)._localCenter,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._capsuleCollider;
    if (pCVar1 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_radius
                (pCVar1,(this->fields)._localRadius,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._capsuleCollider;
      if (pCVar1 != (CapsuleCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                  (pCVar1,(this->fields)._localHeight,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Snapshot(CapsuleCollider) */

void Assembly-CSharp.dll::RTG::CapsuleCollider3DSnapshot::CapsuleCollider3DSnapshot_Snapshot
               (CapsuleCollider3DSnapshot *this,CapsuleCollider *capsuleCollider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)capsuleCollider,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._capsuleCollider = capsuleCollider;
    func_?(&this->fields);
    if (capsuleCollider == (CapsuleCollider *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_center
                       ((Vector3 *)&stack0xfffffff0,capsuleCollider,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._localCenter.x = pVVar3->x;
    (this->fields)._localCenter.y = fVar4;
    (this->fields)._localCenter.z = fVar5;
    fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                      (capsuleCollider,(MethodInfo *)0x0);
    (this->fields)._localRadius = fVar5;
    fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                      (capsuleCollider,(MethodInfo *)0x0);
    (this->fields)._localHeight = fVar5;
  }
  return;
}

