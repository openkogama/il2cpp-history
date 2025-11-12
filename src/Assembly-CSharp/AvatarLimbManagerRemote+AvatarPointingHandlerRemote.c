
/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,
               AvatarLimbManager *limbManager,AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_Initialize
            ((AvatarLimbManager_AvatarPointingHandler *)this,limbManager,limbRotator,
             enableChangeHandler,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields).remoteYawRotation.x = (pQVar2->identityQuaternion).x;
  (this->fields).remoteYawRotation.y = fVar3;
  (this->fields).remoteYawRotation.z = fVar4;
  (this->fields).remoteYawRotation.w = fVar5;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).x;
  fVar4 = (pQVar2->identityQuaternion).y;
  fVar5 = (pQVar2->identityQuaternion).z;
  fVar6 = (pQVar2->identityQuaternion).w;
  (this->fields)._.pointingDuration = 1.5;
  (this->fields)._.pointState = 0;
  (this->fields).remotePitchRotation.x = fVar3;
  (this->fields).remotePitchRotation.y = fVar4;
  (this->fields).remotePitchRotation.z = fVar5;
  (this->fields).remotePitchRotation.w = fVar6;
  return;
}


/* Void SetRotationRemotely(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,float yaw,float pitch,
               bool isPointingWeapon,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    (this->fields)._.pointState = isPointingWeapon + 1;
    if (isPointingWeapon == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
      aQStack_2[0].x = (pQVar1->identityQuaternion).x;
      aQStack_2[0].y = (pQVar1->identityQuaternion).y;
      aQStack_2[0].z = (pQVar1->identityQuaternion).z;
      aQStack_2[0].w = (pQVar1->identityQuaternion).w;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                         (&VStack_4,aQStack_2,in_R8);
      if (yaw == pVVar3->y) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
        aQStack_2[0].x = (pQVar1->identityQuaternion).x;
        aQStack_2[0].y = (pQVar1->identityQuaternion).y;
        aQStack_2[0].z = (pQVar1->identityQuaternion).z;
        aQStack_2[0].w = (pQVar1->identityQuaternion).w;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_4,aQStack_2,in_R8);
        if (pitch == pVVar3->x) {
          (this->fields)._.pointState = 0;
          return;
        }
      }
    }
    VStack_4._0_8_ = (ulonglong)(uint)yaw << 0x20;
    VStack_4.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
              (&(this->fields).remoteYawRotation,&VStack_4,in_R8);
    VStack_4.z = 0.0;
    VStack_4._0_8_ = ZEXT48((uint)pitch);
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
              (&(this->fields).remotePitchRotation,&VStack_4,in_R8);
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_UpdatePointing
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,
               Vector3 *localLookDirection,MethodInfo *method)

{
  if ((this->fields)._.pointState == 2) {
    aQStack_1[0].x = (this->fields).remotePitchRotation.x;
    aQStack_1[0].y = (this->fields).remotePitchRotation.y;
    aQStack_1[0].z = (this->fields).remotePitchRotation.z;
    aQStack_1[0].w = (this->fields).remotePitchRotation.w;
    QStack_2.x = (this->fields).remoteYawRotation.x;
    QStack_2.y = (this->fields).remoteYawRotation.y;
    QStack_2.z = (this->fields).remoteYawRotation.z;
    QStack_2.w = (this->fields).remoteYawRotation.w;
    AvatarLimbManager+AvatarPointingHandler::
    AvatarLimbManager_AvatarPointingHandler_HandleWeaponPointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,&QStack_2,aQStack_1,
               (MethodInfo *)0x0);
  }
  else if ((this->fields)._.pointState == 1) {
    QStack_2.x = (this->fields).remotePitchRotation.x;
    QStack_2.y = (this->fields).remotePitchRotation.y;
    QStack_2.z = (this->fields).remotePitchRotation.z;
    QStack_2.w = (this->fields).remotePitchRotation.w;
    aQStack_1[0].x = (this->fields).remoteYawRotation.x;
    aQStack_1[0].y = (this->fields).remoteYawRotation.y;
    aQStack_1[0].z = (this->fields).remoteYawRotation.z;
    aQStack_1[0].w = (this->fields).remoteYawRotation.w;
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_HandlePointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,aQStack_1,&QStack_2,
               (MethodInfo *)0x0);
  }
  else {
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_StopPointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
  }
  fVar3 = (this->fields)._.elapsedPointingTime;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar6 = (float)(*pcRam_?)();
  fVar7 = localLookDirection->z;
  fVar8 = localLookDirection->y;
  (this->fields)._.prevLookDirection.x = localLookDirection->x;
  (this->fields)._.prevLookDirection.y = fVar8;
  (this->fields)._.prevLookDirection.z = fVar7;
  (this->fields)._.elapsedPointingTime = fVar3 - fVar6;
  return;
}

