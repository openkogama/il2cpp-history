
/* Void Play(Single) */

void Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
               (ScaleAnimationBase *this,float offsetTime,MethodInfo *method)

{
  return;
}


/* Void ResetScaleAnimation() */

void Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_ResetScaleAnimation
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


/* Void SetTarget(Transform) */

void Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_SetTarget
               (ScaleAnimationBase *this,Transform *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).target;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
    return;
  }
  (this->fields).target = target;
  if (target != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xfffffff0,target,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    (this->fields).originalScale.x = pVVar2->x;
    (this->fields).originalScale.y = fVar3;
    (this->fields).originalScale.z = fVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ScaleAnimationBase() */

void Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase__ctor
               (ScaleAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).originalScale.x = pVVar1->x;
  (this->fields).originalScale.y = fVar3;
  (this->fields).originalScale.z = fVar4;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

