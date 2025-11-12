
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_HandleRotation
               (AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  fVar1 = (float)func_?(((((this->fields)._.duration / (this->fields)._.lifeTime) *
                                      _UNK_?) / _UNK_?) * _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (float)FUN_?(fVar1 + _UNK_?);
  pcVar2 = pcRam_?;
  if (fVar1 == 0.0) {
    uStack_3 = (ulonglong)_UNK_?;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uStack_3 = (ulonglong)_UNK_?;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_3);
  pLVar8 = (this->fields).headController;
  if (pLVar8 != (LimbController *)0x0) {
    if (_UNK_? <
        uStack_5._4_4_ * (pLVar8->fields).interpolateTowardsPitchRotation.y +
        (float)uStack_5 * (pLVar8->fields).interpolateTowardsPitchRotation.x +
        (float)uStack_6 * (pLVar8->fields).interpolateTowardsPitchRotation.z +
        uStack_6._4_4_ * (pLVar8->fields).interpolateTowardsPitchRotation.w) {
      return;
    }
    pLVar8 = (this->fields).headController;
    if (pLVar8 != (LimbController *)0x0) {
      (pLVar8->fields).elapsedInterpolationTime = 0.0;
      (pLVar8->fields).rotationDuration = 0.0;
      (pLVar8->fields).elapsedInterpolateAnimationTime = 0.0;
      (pLVar8->fields).shouldRotate = 1;
      pLVar8 = (this->fields).headController;
      if (pLVar8 != (LimbController *)0x0) {
        fVar1 = (pLVar8->fields).interpolateTowardsYawRotation.x;
        fVar9 = (pLVar8->fields).interpolateTowardsYawRotation.y;
        fVar10 = (pLVar8->fields).interpolateTowardsYawRotation.z;
        fVar11 = (pLVar8->fields).interpolateTowardsYawRotation.w;
        (pLVar8->fields).elapsedInterpolationTime = 0.0;
        (pLVar8->fields).rotationDuration = 0.0;
        (pLVar8->fields).elapsedInterpolateAnimationTime = 0.0;
        (pLVar8->fields).interpolateTowardsYawRotation.x = fVar1;
        (pLVar8->fields).interpolateTowardsYawRotation.y = fVar9;
        (pLVar8->fields).interpolateTowardsYawRotation.z = fVar10;
        (pLVar8->fields).interpolateTowardsYawRotation.w = fVar11;
        (pLVar8->fields).shouldRotate = 1;
        (pLVar8->fields).interpolateTowardsPitchRotation.x = (float)uStack_5;
        (pLVar8->fields).interpolateTowardsPitchRotation.y = uStack_5._4_4_;
        (pLVar8->fields).interpolateTowardsPitchRotation.z = (float)uStack_6;
        (pLVar8->fields).interpolateTowardsPitchRotation.w = uStack_6._4_4_;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_Initialize
               (AvatarLimbManager_AvatarNodEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._.limbRotator = limbRotator;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.limbRotator >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    pLVar6 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
                       (limbRotator,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).headController = pLVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).headController >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar6 = (this->fields).headController;
    if (pLVar6 != (LimbController *)0x0) {
      (this->fields).originalInterpolationSpeed = (pLVar6->fields).interpolationSpeed;
      (this->fields)._.emote = 2;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_RotateHead
               (AvatarLimbManager_AvatarNodEmote *this,Quaternion *pitchRotation,MethodInfo *method)

{
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    if (_UNK_? <
        pitchRotation->y * (pLVar1->fields).interpolateTowardsPitchRotation.y +
        pitchRotation->x * (pLVar1->fields).interpolateTowardsPitchRotation.x +
        pitchRotation->z * (pLVar1->fields).interpolateTowardsPitchRotation.z +
        pitchRotation->w * (pLVar1->fields).interpolateTowardsPitchRotation.w) {
      return;
    }
    pLVar1 = (this->fields).headController;
    if (pLVar1 != (LimbController *)0x0) {
      (pLVar1->fields).elapsedInterpolationTime = 0.0;
      (pLVar1->fields).rotationDuration = 0.0;
      (pLVar1->fields).elapsedInterpolateAnimationTime = 0.0;
      (pLVar1->fields).shouldRotate = 1;
      pLVar1 = (this->fields).headController;
      if (pLVar1 != (LimbController *)0x0) {
        fVar2 = (pLVar1->fields).interpolateTowardsYawRotation.x;
        fVar3 = (pLVar1->fields).interpolateTowardsYawRotation.y;
        fVar4 = (pLVar1->fields).interpolateTowardsYawRotation.z;
        fVar5 = (pLVar1->fields).interpolateTowardsYawRotation.w;
        (pLVar1->fields).elapsedInterpolationTime = 0.0;
        (pLVar1->fields).rotationDuration = 0.0;
        (pLVar1->fields).elapsedInterpolateAnimationTime = 0.0;
        (pLVar1->fields).interpolateTowardsYawRotation.x = fVar2;
        (pLVar1->fields).interpolateTowardsYawRotation.y = fVar3;
        (pLVar1->fields).interpolateTowardsYawRotation.z = fVar4;
        (pLVar1->fields).interpolateTowardsYawRotation.w = fVar5;
        (pLVar1->fields).shouldRotate = 1;
        fVar2 = pitchRotation->y;
        fVar3 = pitchRotation->z;
        fVar4 = pitchRotation->w;
        (pLVar1->fields).interpolateTowardsPitchRotation.x = pitchRotation->x;
        (pLVar1->fields).interpolateTowardsPitchRotation.y = fVar2;
        (pLVar1->fields).interpolateTowardsPitchRotation.z = fVar3;
        (pLVar1->fields).interpolateTowardsPitchRotation.w = fVar4;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_Update
               (AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar1 = fVar1 - fVar4;
    (this->fields)._.duration = fVar1;
    if (fVar1 < 0.0) {
      (*(this->klass->vtable).StopEmote.methodPtr)(this);
    }
    AvatarLimbManager_AvatarNodEmote_HandleRotation(this,(MethodInfo *)0x0);
  }
  return;
}

