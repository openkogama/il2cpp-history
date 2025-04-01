
/* Void SetTarget(Transform) */

void Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_SetTarget
               (ScaleAnimationBase *this,Transform *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Target_already_set);
    cRam_? = '\x01';
  }
  x = (this->fields).target;
  ppTVar1 = &(this->fields).target;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
    return;
  }
  *ppTVar1 = target;
  func_?(ppTVar1,target);
  if (target != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_4,target,(MethodInfo *)0x0);
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    (this->fields).originalScale.x = pVVar3->x;
    (this->fields).originalScale.y = fVar5;
    (this->fields).originalScale.z = fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Stop
               (ScaleAnimationBase *this,MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,(this->fields).originalScale,(MethodInfo *)0x0);
    (this->fields).state = 1;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

