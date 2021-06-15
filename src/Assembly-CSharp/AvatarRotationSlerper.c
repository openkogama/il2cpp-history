
/* Boolean Update() */

bool Assembly-CSharp.dll::AvatarRotationSlerper::AvatarRotationSlerper_Update
               (AvatarRotationSlerper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 <= (this->fields).duration + (this->fields).startTime) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).startTime;
    fVar3 = (this->fields).duration;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                      ((fVar2 - fVar1) / fVar3,(MethodInfo *)0x0);
    pTVar4 = (this->fields).target;
    if (pTVar4 != (Transform *)0x0) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
      fVar3 = pQVar5->z;
      fVar2 = pQVar5->w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = 0.0;
      a.x = fVar1;
      a.z = fVar3;
      a.w = fVar2;
      b.y = 0.0;
      b.x = fVar1;
      b.z = fVar3;
      b.w = fVar2;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffd4,a,b,fVar1,(MethodInfo *)0x0);
      pTVar4 = (this->fields).attachPoint;
      if (pTVar4 != (Transform *)0x0) {
        fStack6 = pQVar5->z;
        puStack7 = (undefined *)pQVar5->w;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,*pQVar5,(MethodInfo *)0x0);
        return 1;
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    bVar9 = (*pcVar8)();
    return bVar9;
  }
  return 0;
}


/* AvatarRotationSlerper(Transform, Transform&) */

void Assembly-CSharp.dll::AvatarRotationSlerper::AvatarRotationSlerper__ctor
               (AvatarRotationSlerper *this,Transform *attachPoint,Transform **target,
               MethodInfo *method)

{
  (this->fields).duration = 0.35;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).attachPoint = attachPoint;
  if (attachPoint != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffec,attachPoint,(MethodInfo *)0x0);
    fVar2 = pQVar1->y;
    fVar3 = pQVar1->z;
    fVar4 = pQVar1->w;
    (this->fields).startRot.x = pQVar1->x;
    (this->fields).startRot.y = fVar2;
    (this->fields).startRot.z = fVar3;
    (this->fields).startRot.w = fVar4;
    (this->fields).target = *target;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).startTime = fVar2;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

