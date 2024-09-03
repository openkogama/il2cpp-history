
/* Boolean Update() */

bool Assembly-CSharp.dll::AvatarRotationSlerper::AvatarRotationSlerper_Update
               (AvatarRotationSlerper *this,MethodInfo *method)

{
  pAVar1 = this;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields).startTime + (this->fields).duration < fVar2) {
    return 0;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this = (AvatarRotationSlerper *)((fVar2 - (this->fields).startTime) / (this->fields).duration);
  pAVar3 = (AvatarRotationSlerper *)0x0;
  if (((float)this < 0.0) || (pAVar3 = _UNK_?, (float)_UNK_? < (float)this)) {
    this = pAVar3;
  }
  a = (pAVar1->fields).startRot;
  pTVar4 = (pAVar1->fields).target;
  if (pTVar4 != (Transform *)0x0) {
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                       ((Quaternion *)&stack0xffffffd8,a,*pQVar5,(float)this,(MethodInfo *)0x0);
    pTVar4 = (pAVar1->fields).attachPoint;
    if (pTVar4 != (Transform *)0x0) {
      fStack6 = pQVar5->w;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar4,*pQVar5,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* AvatarRotationSlerper(Transform, Transform&) */

void Assembly-CSharp.dll::AvatarRotationSlerper::AvatarRotationSlerper__ctor
               (AvatarRotationSlerper *this,Transform *attachPoint,Transform **target,
               MethodInfo *method)

{
  (this->fields).duration = 0.35;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).attachPoint = attachPoint;
  func_?(&this->fields,attachPoint);
  if (attachPoint != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_2,attachPoint,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    (this->fields).startRot.x = pQVar1->x;
    (this->fields).startRot.y = fVar3;
    (this->fields).startRot.z = fVar4;
    (this->fields).startRot.w = fVar5;
    pTVar6 = *target;
    (this->fields).target = pTVar6;
    func_?(&(this->fields).target,pTVar6);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).startTime = fVar3;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

