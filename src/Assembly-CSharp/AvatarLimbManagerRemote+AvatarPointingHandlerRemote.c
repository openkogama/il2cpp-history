
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
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).remoteYawRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).remoteYawRotation.y = fVar2;
  (this->fields).remoteYawRotation.z = fVar3;
  (this->fields).remoteYawRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  (this->fields)._.pointingDuration = 1.5;
  (this->fields)._.pointState = 0;
  (this->fields).remotePitchRotation.x = fVar2;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
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
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
      QStack_2.x = (pQVar1->identityQuaternion).x;
      QStack_2.y = (pQVar1->identityQuaternion).y;
      QStack_2.z = (pQVar1->identityQuaternion).z;
      QStack_2.w = (pQVar1->identityQuaternion).w;
      iVar3 = func_?(auStack_4,&QStack_2,0);
      if (yaw == *(float *)(iVar3 + 4)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
        QStack_2.x = (pQVar1->identityQuaternion).x;
        QStack_2.y = (pQVar1->identityQuaternion).y;
        QStack_2.z = (pQVar1->identityQuaternion).z;
        QStack_2.w = (pQVar1->identityQuaternion).w;
        pfVar5 = (float *)func_?(auStack_4,&QStack_2,0);
        if (pitch == *pfVar5) {
          (this->fields)._.pointState = 0;
          return;
        }
      }
    }
    uStack_6 = 0;
    auVar7._4_8_ = 0;
    auVar7._0_4_ = yaw * _UNK_?;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       (&QStack_2,(Vector3)(auVar7 << 0x20),(MethodInfo *)0x0);
    fVar9 = pitch * _UNK_?;
    uStack_6 = 0;
    fVar10 = pQVar8->y;
    fVar11 = pQVar8->z;
    fVar12 = pQVar8->w;
    (this->fields).remoteYawRotation.x = pQVar8->x;
    (this->fields).remoteYawRotation.y = fVar10;
    (this->fields).remoteYawRotation.z = fVar11;
    (this->fields).remoteYawRotation.w = fVar12;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = fVar9;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
    fVar10 = pQVar8->y;
    fVar11 = pQVar8->z;
    fVar12 = pQVar8->w;
    (this->fields).remotePitchRotation.x = pQVar8->x;
    (this->fields).remotePitchRotation.y = fVar10;
    (this->fields).remotePitchRotation.z = fVar11;
    (this->fields).remotePitchRotation.w = fVar12;
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_UpdatePointing
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,Vector3 localLookDirection
               ,MethodInfo *method)

{
  iVar1 = (this->fields)._.pointState;
  if (iVar1 == 2) {
    AvatarLimbManager+AvatarPointingHandler::
    AvatarLimbManager_AvatarPointingHandler_HandleWeaponPointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,(this->fields).remoteYawRotation,
               (this->fields).remotePitchRotation,(MethodInfo *)0x0);
  }
  else if (iVar1 == 1) {
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_HandlePointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,(this->fields).remoteYawRotation,
               (this->fields).remotePitchRotation,(MethodInfo *)0x0);
  }
  else {
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_StopPointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
  }
  AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_UpdatePointing
            ((AvatarLimbManager_AvatarPointingHandler *)this,localLookDirection,(MethodInfo *)0x0);
  return;
}


/* AvatarLimbManagerRemote+AvatarPointingHandlerRemote() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote__ctor
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,MethodInfo *method)

{
  (this->fields)._.pointingDuration = 0.8;
  (this->fields)._.pointState = 1;
  (this->fields)._.isActive = 1;
  return;
}

