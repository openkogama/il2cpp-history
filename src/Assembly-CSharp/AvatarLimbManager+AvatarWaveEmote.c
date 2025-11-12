
/* Void HandleArmRotation(LimbController, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_HandleArmRotation
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,float yawAngle
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStack_1 = (ulonglong)(uint)(yawAngle * _UNK_?) << 0x20;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&lStack_1,&uStack_3);
  fVar7 = (float)func_?(((this->fields)._.duration / (this->fields)._.lifeTime) *
                                     _UNK_? * _UNK_?);
  fVar7 = (float)FUN_?(fVar7 + _UNK_?,TypeRef__System__Activator__T._0_4_);
  if (fVar7 == 0.0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = (ulonglong)_UNK_?;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&uStack_8,&uStack_10);
  if (armController != (LimbController *)0x0) {
    if (uStack_10._4_4_ * (armController->fields).interpolateTowardsPitchRotation.y +
        (float)uStack_10 * (armController->fields).interpolateTowardsPitchRotation.x +
        (float)uStack_11 * (armController->fields).interpolateTowardsPitchRotation.z +
        uStack_11._4_4_ * (armController->fields).interpolateTowardsPitchRotation.w <=
        _UNK_?) {
      (armController->fields).elapsedInterpolationTime = 0.0;
      (armController->fields).rotationDuration = 0.0;
      (armController->fields).elapsedInterpolateAnimationTime = 0.0;
      (armController->fields).shouldRotate = 1;
      (armController->fields).interpolateTowardsYawRotation.x = (float)(undefined4)uStack_3;
      (armController->fields).interpolateTowardsYawRotation.y = (float)uStack_3._4_4_;
      (armController->fields).interpolateTowardsYawRotation.z = (float)(undefined4)uStack_4;
      (armController->fields).interpolateTowardsYawRotation.w = (float)uStack_4._4_4_;
      (armController->fields).interpolateTowardsPitchRotation.x = (float)uStack_10;
      (armController->fields).interpolateTowardsPitchRotation.y = uStack_10._4_4_;
      (armController->fields).interpolateTowardsPitchRotation.z = (float)uStack_11;
      (armController->fields).interpolateTowardsPitchRotation.w = uStack_11._4_4_;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_Initialize
               (AvatarLimbManager_AvatarWaveEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
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
                       (limbRotator,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).RArmController = pLVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).RArmController >> 0xc);
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
    pLVar6 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
                       (limbRotator,BodyData_PartIndex__Enum_LArm,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).LArmController = pLVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).LArmController >> 0xc);
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
    pLVar6 = (this->fields).RArmController;
    if (pLVar6 != (LimbController *)0x0) {
      (this->fields).originalInterpolationSpeed = (pLVar6->fields).interpolationSpeed;
      (this->fields)._.emote = 3;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void MoveArmDownwards(LimbController, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_MoveArmDownwards
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,
               Quaternion *yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&uStack_1,&uStack_3);
  if (armController == (LimbController *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uStack_3._4_4_ * (armController->fields).interpolateTowardsPitchRotation.y +
      (float)uStack_3 * (armController->fields).interpolateTowardsPitchRotation.x +
      (float)uStack_4 * (armController->fields).interpolateTowardsPitchRotation.z +
      uStack_4._4_4_ * (armController->fields).interpolateTowardsPitchRotation.w <= _UNK_?)
  {
    fVar7 = yawRotation->x;
    fVar8 = yawRotation->y;
    fVar9 = yawRotation->z;
    fVar10 = yawRotation->w;
    (armController->fields).elapsedInterpolationTime = 0.0;
    (armController->fields).rotationDuration = 0.0;
    (armController->fields).elapsedInterpolateAnimationTime = 0.0;
    (armController->fields).interpolateTowardsYawRotation.x = fVar7;
    (armController->fields).interpolateTowardsYawRotation.y = fVar8;
    (armController->fields).interpolateTowardsYawRotation.z = fVar9;
    (armController->fields).interpolateTowardsYawRotation.w = fVar10;
    (armController->fields).shouldRotate = 1;
    (armController->fields).interpolateTowardsPitchRotation.x = (float)uStack_3;
    (armController->fields).interpolateTowardsPitchRotation.y = uStack_3._4_4_;
    (armController->fields).interpolateTowardsPitchRotation.z = (float)uStack_4;
    (armController->fields).interpolateTowardsPitchRotation.w = uStack_4._4_4_;
  }
  return;
}


/* Void MoveArmUpwards(LimbController, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_MoveArmUpwards
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,
               Quaternion *yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (ulonglong)_UNK_?;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&uStack_1,&uStack_3);
  if (armController == (LimbController *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uStack_3._4_4_ * (armController->fields).interpolateTowardsPitchRotation.y +
      (float)uStack_3 * (armController->fields).interpolateTowardsPitchRotation.x +
      (float)uStack_4 * (armController->fields).interpolateTowardsPitchRotation.z +
      uStack_4._4_4_ * (armController->fields).interpolateTowardsPitchRotation.w <= _UNK_?)
  {
    fVar7 = yawRotation->x;
    fVar8 = yawRotation->y;
    fVar9 = yawRotation->z;
    fVar10 = yawRotation->w;
    (armController->fields).elapsedInterpolationTime = 0.0;
    (armController->fields).rotationDuration = 0.0;
    (armController->fields).elapsedInterpolateAnimationTime = 0.0;
    (armController->fields).interpolateTowardsYawRotation.x = fVar7;
    (armController->fields).interpolateTowardsYawRotation.y = fVar8;
    (armController->fields).interpolateTowardsYawRotation.z = fVar9;
    (armController->fields).interpolateTowardsYawRotation.w = fVar10;
    (armController->fields).shouldRotate = 1;
    (armController->fields).interpolateTowardsPitchRotation.x = (float)uStack_3;
    (armController->fields).interpolateTowardsPitchRotation.y = uStack_3._4_4_;
    (armController->fields).interpolateTowardsPitchRotation.z = (float)uStack_4;
    (armController->fields).interpolateTowardsPitchRotation.w = uStack_4._4_4_;
  }
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_StartEmote
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  (this->fields)._.duration = (this->fields)._.lifeTime;
  pLVar1 = (this->fields).RArmController;
  (this->fields)._.isActive = 1;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (pLVar1 != (LimbController *)0x0) {
    (pLVar1->fields).interpolationSpeed =
         (_UNK_? / (this->fields)._.lifeTime) * _UNK_?;
    pLVar1 = (this->fields).RArmController;
    if (pLVar1 != (LimbController *)0x0) {
      (pLVar1->fields).isEventControllingLimb = 1;
      pLVar1 = (this->fields).LArmController;
      if (pLVar1 != (LimbController *)0x0) {
        (pLVar1->fields).interpolationSpeed = (fVar2 / (this->fields)._.lifeTime) * fVar3;
        pLVar1 = (this->fields).LArmController;
        if (pLVar1 != (LimbController *)0x0) {
          (pLVar1->fields).isEventControllingLimb = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_StopEmote
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (pAVar1 != (Action_1_EmoteTypes_ *)0x0) {
    pAVar1 = (this->fields)._.OnEmoteEnd;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields)._.emote,(pAVar1->fields)._._.method);
  }
  pLVar2 = (this->fields).RArmController;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
    pLVar2 = (this->fields).RArmController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 0;
      pLVar2 = (this->fields).RArmController;
      if (pLVar2 != (LimbController *)0x0) {
        if ((pLVar2->fields).isEventControllingLimb == 0) {
          (pLVar2->fields).shouldRotate = 0;
        }
        pLVar2 = (this->fields).LArmController;
        if (pLVar2 != (LimbController *)0x0) {
          (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
          pLVar2 = (this->fields).LArmController;
          if (pLVar2 != (LimbController *)0x0) {
            (pLVar2->fields).isEventControllingLimb = 0;
            pLVar2 = (this->fields).LArmController;
            if (pLVar2 != (LimbController *)0x0) {
              if ((pLVar2->fields).isEventControllingLimb == 0) {
                (pLVar2->fields).shouldRotate = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_Update
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    pcVar2 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar2 = (code *)FUN_?(&UNK_?);
      if (pcVar2 == (code *)0x0) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar1 = fVar1 - fVar4;
    (this->fields)._.duration = fVar1;
    if (0.0 < fVar1) {
      AvatarLimbManager_AvatarWaveEmote_HandleArmRotation
                (this,(this->fields).RArmController,_UNK_?,(MethodInfo *)0x0);
      fVar1 = _UNK_?;
      pLVar5 = (this->fields).LArmController;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion,pLVar5,_UNK_?,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lStack_6 = (ulonglong)(uint)(fVar1 * _UNK_?) << 0x20;
      uStack_7 = 0;
      uStack_8 = 0;
      uStack_9 = 0;
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
      (*pcRam_?)(&lStack_6,&uStack_8);
      fVar1 = (float)func_?(((this->fields)._.duration / (this->fields)._.lifeTime) *
                                         _UNK_? * _UNK_?);
      fVar1 = (float)FUN_?(fVar1 + _UNK_?,TypeRef__System__Activator__T._0_4_);
      if (fVar1 == 0.0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_10 = 0;
        uStack_11 = 0;
        uStack_12 = 0;
        uStack_13 = (undefined *)0x0;
        pcVar2 = pcRam_?;
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_10 = (ulonglong)_UNK_?;
        uStack_11 = 0;
        uStack_12 = 0;
        uStack_13 = (undefined *)0x0;
        pcVar2 = pcRam_?;
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
      (*pcRam_?)(&uStack_10,&uStack_12);
      if (pLVar5 != (LimbController *)0x0) {
        if (uStack_12._4_4_ * (pLVar5->fields).interpolateTowardsPitchRotation.y +
            (float)uStack_12 * (pLVar5->fields).interpolateTowardsPitchRotation.x +
            (float)uStack_13 * (pLVar5->fields).interpolateTowardsPitchRotation.z +
            uStack_13._4_4_ * (pLVar5->fields).interpolateTowardsPitchRotation.w <= _UNK_?)
        {
          (pLVar5->fields).elapsedInterpolationTime = 0.0;
          (pLVar5->fields).rotationDuration = 0.0;
          (pLVar5->fields).elapsedInterpolateAnimationTime = 0.0;
          (pLVar5->fields).shouldRotate = 1;
          (pLVar5->fields).interpolateTowardsYawRotation.x = (float)(undefined4)uStack_8;
          (pLVar5->fields).interpolateTowardsYawRotation.y = (float)uStack_8._4_4_;
          (pLVar5->fields).interpolateTowardsYawRotation.z = (float)(undefined4)uStack_9;
          (pLVar5->fields).interpolateTowardsYawRotation.w = (float)uStack_9._4_4_;
          (pLVar5->fields).interpolateTowardsPitchRotation.x = (float)uStack_12;
          (pLVar5->fields).interpolateTowardsPitchRotation.y = uStack_12._4_4_;
          (pLVar5->fields).interpolateTowardsPitchRotation.z = (float)uStack_13;
          (pLVar5->fields).interpolateTowardsPitchRotation.w = uStack_13._4_4_;
        }
        return;
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

