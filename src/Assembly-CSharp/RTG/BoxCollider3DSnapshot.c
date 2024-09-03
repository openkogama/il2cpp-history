
/* Void Apply() */

void Assembly-CSharp.dll::RTG::BoxCollider3DSnapshot::BoxCollider3DSnapshot_Apply
               (BoxCollider3DSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._boxCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pBVar1 = (this->fields)._boxCollider;
  if (pBVar1 != (BoxCollider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
              (pBVar1,(this->fields)._localCenter,(MethodInfo *)0x0);
    pBVar1 = (this->fields)._boxCollider;
    if (pBVar1 != (BoxCollider *)0x0) {
      fStack3 = (this->fields)._localSize.z;
      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                (pBVar1,(this->fields)._localSize,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Snapshot(BoxCollider) */

void Assembly-CSharp.dll::RTG::BoxCollider3DSnapshot::BoxCollider3DSnapshot_Snapshot
               (BoxCollider3DSnapshot *this,BoxCollider *boxCollider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)boxCollider,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._boxCollider = boxCollider;
    func_?(&this->fields);
    if (boxCollider == (BoxCollider *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                       ((Vector3 *)&stack0xfffffff0,boxCollider,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._localCenter.x = pVVar3->x;
    (this->fields)._localCenter.y = fVar4;
    (this->fields)._localCenter.z = fVar5;
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                       ((Vector3 *)&stack0xfffffff0,boxCollider,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._localSize.x = pVVar3->x;
    (this->fields)._localSize.y = fVar4;
    (this->fields)._localSize.z = fVar5;
  }
  return;
}


/* BoxCollider3DSnapshot(BoxCollider3DSnapshot) */

void Assembly-CSharp.dll::RTG::BoxCollider3DSnapshot::BoxCollider3DSnapshot__ctor_1
               (BoxCollider3DSnapshot *this,BoxCollider3DSnapshot *src,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (src != (BoxCollider3DSnapshot *)0x0) {
    pBVar1 = (src->fields)._boxCollider;
    (this->fields)._boxCollider = pBVar1;
    func_?(&this->fields,pBVar1);
    fVar2 = (src->fields)._localCenter.y;
    fVar3 = (src->fields)._localCenter.z;
    (this->fields)._localCenter.x = (src->fields)._localCenter.x;
    (this->fields)._localCenter.y = fVar2;
    (this->fields)._localCenter.z = fVar3;
    fVar2 = (src->fields)._localSize.y;
    fVar3 = (src->fields)._localSize.z;
    (this->fields)._localSize.x = (src->fields)._localSize.x;
    (this->fields)._localSize.y = fVar2;
    (this->fields)._localSize.z = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

