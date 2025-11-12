
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_HandleRotation
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  fVar1 = (float)func_?(((((this->fields)._.duration / (this->fields)._.lifeTime) *
                                      _UNK_?) / _UNK_?) * _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (float)FUN_?(fVar1 + _UNK_?,TypeRef__System__Activator__T._0_4_);
  pcVar2 = pcRam_?;
  if (fVar1 == 0.0) {
    lStack_3 = (ulonglong)_UNK_? << 0x20;
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
    lStack_3 = (ulonglong)_UNK_? << 0x20;
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
  (*pcRam_?)(&lStack_3);
  pLVar8 = (this->fields).headController;
  if (pLVar8 != (LimbController *)0x0) {
    if (_UNK_? <
        uStack_5._4_4_ * (pLVar8->fields).interpolateTowardsYawRotation.y +
        (float)uStack_5 * (pLVar8->fields).interpolateTowardsYawRotation.x +
        (float)uStack_6 * (pLVar8->fields).interpolateTowardsYawRotation.z +
        uStack_6._4_4_ * (pLVar8->fields).interpolateTowardsYawRotation.w) {
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
        fVar1 = (pLVar8->fields).interpolateTowardsPitchRotation.x;
        fVar9 = (pLVar8->fields).interpolateTowardsPitchRotation.y;
        fVar10 = (pLVar8->fields).interpolateTowardsPitchRotation.z;
        fVar11 = (pLVar8->fields).interpolateTowardsPitchRotation.w;
        (pLVar8->fields).elapsedInterpolationTime = 0.0;
        (pLVar8->fields).rotationDuration = 0.0;
        (pLVar8->fields).elapsedInterpolateAnimationTime = 0.0;
        (pLVar8->fields).interpolateTowardsPitchRotation.x = fVar1;
        (pLVar8->fields).interpolateTowardsPitchRotation.y = fVar9;
        (pLVar8->fields).interpolateTowardsPitchRotation.z = fVar10;
        (pLVar8->fields).interpolateTowardsPitchRotation.w = fVar11;
        (pLVar8->fields).shouldRotate = 1;
        (pLVar8->fields).interpolateTowardsYawRotation.x = (float)uStack_5;
        (pLVar8->fields).interpolateTowardsYawRotation.y = uStack_5._4_4_;
        (pLVar8->fields).interpolateTowardsYawRotation.z = (float)uStack_6;
        (pLVar8->fields).interpolateTowardsYawRotation.w = uStack_6._4_4_;
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

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Initialize
               (AvatarLimbManager_AvatarShakeEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
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
      (this->fields)._.emote = 1;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_RotateHead
               (AvatarLimbManager_AvatarShakeEmote *this,Quaternion *yawRotation,MethodInfo *method)

{
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    if (_UNK_? <
        yawRotation->y * (pLVar1->fields).interpolateTowardsYawRotation.y +
        yawRotation->x * (pLVar1->fields).interpolateTowardsYawRotation.x +
        yawRotation->z * (pLVar1->fields).interpolateTowardsYawRotation.z +
        yawRotation->w * (pLVar1->fields).interpolateTowardsYawRotation.w) {
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
        fVar2 = (pLVar1->fields).interpolateTowardsPitchRotation.x;
        fVar3 = (pLVar1->fields).interpolateTowardsPitchRotation.y;
        fVar4 = (pLVar1->fields).interpolateTowardsPitchRotation.z;
        fVar5 = (pLVar1->fields).interpolateTowardsPitchRotation.w;
        (pLVar1->fields).elapsedInterpolationTime = 0.0;
        fVar6 = yawRotation->x;
        fVar7 = yawRotation->y;
        fVar8 = yawRotation->z;
        fVar9 = yawRotation->w;
        (pLVar1->fields).rotationDuration = 0.0;
        (pLVar1->fields).elapsedInterpolateAnimationTime = 0.0;
        (pLVar1->fields).interpolateTowardsPitchRotation.x = fVar2;
        (pLVar1->fields).interpolateTowardsPitchRotation.y = fVar3;
        (pLVar1->fields).interpolateTowardsPitchRotation.z = fVar4;
        (pLVar1->fields).interpolateTowardsPitchRotation.w = fVar5;
        (pLVar1->fields).shouldRotate = 1;
        (pLVar1->fields).interpolateTowardsYawRotation.x = fVar6;
        (pLVar1->fields).interpolateTowardsYawRotation.y = fVar7;
        (pLVar1->fields).interpolateTowardsYawRotation.z = fVar8;
        (pLVar1->fields).interpolateTowardsYawRotation.w = fVar9;
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StartEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  (this->fields)._.duration = (this->fields)._.lifeTime;
  pLVar1 = (this->fields).headController;
  (this->fields)._.isActive = 1;
  if (pLVar1 != (LimbController *)0x0) {
    (pLVar1->fields).interpolationSpeed =
         (_UNK_? / (this->fields)._.lifeTime) * _UNK_?;
    pLVar1 = (this->fields).headController;
    if (pLVar1 != (LimbController *)0x0) {
      (pLVar1->fields).isEventControllingLimb = 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StopEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (pAVar1 != (Action_1_EmoteTypes_ *)0x0) {
    pAVar1 = (this->fields)._.OnEmoteEnd;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields)._.emote,(pAVar1->fields)._._.method);
  }
  pLVar2 = (this->fields).headController;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 0;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Update
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

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
    if (0.0 <= fVar1) {
      fVar1 = (float)func_?(((((this->fields)._.duration / (this->fields)._.lifeTime) *
                                          _UNK_?) / _UNK_?) * _UNK_?,0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar1 = (float)FUN_?(fVar1 + _UNK_?,TypeRef__System__Activator__T._0_4_);
      pcVar2 = pcRam_?;
      if (fVar1 == 0.0) {
        lStack_5 = (ulonglong)_UNK_? << 0x20;
        uStack_6 = 0;
        uStack_7 = 0;
        uStack_8 = 0;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        lStack_5 = (ulonglong)_UNK_? << 0x20;
        uStack_6 = 0;
        uStack_7 = 0;
        uStack_8 = 0;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&lStack_5);
      pLVar9 = (this->fields).headController;
      if (pLVar9 != (LimbController *)0x0) {
        if (_UNK_? <
            uStack_7._4_4_ * (pLVar9->fields).interpolateTowardsYawRotation.y +
            (float)uStack_7 * (pLVar9->fields).interpolateTowardsYawRotation.x +
            (float)uStack_8 * (pLVar9->fields).interpolateTowardsYawRotation.z +
            uStack_8._4_4_ * (pLVar9->fields).interpolateTowardsYawRotation.w) {
          return;
        }
        pLVar9 = (this->fields).headController;
        if (pLVar9 != (LimbController *)0x0) {
          (pLVar9->fields).elapsedInterpolationTime = 0.0;
          (pLVar9->fields).rotationDuration = 0.0;
          (pLVar9->fields).elapsedInterpolateAnimationTime = 0.0;
          (pLVar9->fields).shouldRotate = 1;
          pLVar9 = (this->fields).headController;
          if (pLVar9 != (LimbController *)0x0) {
            fVar1 = (pLVar9->fields).interpolateTowardsPitchRotation.x;
            fVar4 = (pLVar9->fields).interpolateTowardsPitchRotation.y;
            fVar10 = (pLVar9->fields).interpolateTowardsPitchRotation.z;
            fVar11 = (pLVar9->fields).interpolateTowardsPitchRotation.w;
            (pLVar9->fields).elapsedInterpolationTime = 0.0;
            (pLVar9->fields).rotationDuration = 0.0;
            (pLVar9->fields).elapsedInterpolateAnimationTime = 0.0;
            (pLVar9->fields).interpolateTowardsPitchRotation.x = fVar1;
            (pLVar9->fields).interpolateTowardsPitchRotation.y = fVar4;
            (pLVar9->fields).interpolateTowardsPitchRotation.z = fVar10;
            (pLVar9->fields).interpolateTowardsPitchRotation.w = fVar11;
            (pLVar9->fields).shouldRotate = 1;
            (pLVar9->fields).interpolateTowardsYawRotation.x = (float)uStack_7;
            (pLVar9->fields).interpolateTowardsYawRotation.y = uStack_7._4_4_;
            (pLVar9->fields).interpolateTowardsYawRotation.z = (float)uStack_8;
            (pLVar9->fields).interpolateTowardsYawRotation.w = uStack_8._4_4_;
            return;
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(this->klass->vtable).StopEmote.methodPtr)(this,(this->klass->vtable).StopEmote.method);
  }
  return;
}

