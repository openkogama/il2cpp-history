
/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator,
   AvatarLimbManager+AvatarLookDirectionHandler) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarHeadRotationHandlerRemote::
     AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *this,
               AvatarLimbManager *limbManager,AvatarLimbManager_LimbRotator *limbRotator,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
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
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).remotePitchRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).remotePitchRotation.y = fVar2;
  (this->fields).remotePitchRotation.z = fVar3;
  (this->fields).remotePitchRotation.w = fVar4;
  if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    func_?();
  }
  else {
    pAVar5 = (lookDirectionHandler->fields).OnRotationChange;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      (lookDirectionHandler->fields).OnRotationChange = (Action *)0x0;
code_?:
      func_?();
      AvatarLimbManager+AvatarHeadRotationHandler::
      AvatarLimbManager_AvatarHeadRotationHandler_Initialize
                ((AvatarLimbManager_AvatarHeadRotationHandler *)lookDirectionHandler,
                 (AvatarLimbManager *)0x0,
                 (AvatarLimbManager_LimbRotator *)&(lookDirectionHandler->fields).OnRotationChange,
                 lookDirectionHandler,(MethodInfo *)0x0);
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 != (Action *)0x0) {
      (lookDirectionHandler->fields).OnRotationChange = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetRotationRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarHeadRotationHandlerRemote::
     AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote_SetRotationRemotely
               (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *this,float yaw,float pitch,
               MethodInfo *method)

{
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(MethodInfo *)0x0);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = yaw * _UNK_?;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  QVar6 = *pQVar2;
  (this->fields).remoteYawRotation.x = pQVar2->x;
  (this->fields).remoteYawRotation.y = fVar3;
  (this->fields).remoteYawRotation.z = fVar4;
  (this->fields).remoteYawRotation.w = fVar5;
  pQVar2 = AvatarLimbManager+AvatarHeadRotationHandler::
           AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                     ((Quaternion *)&stack0xffffffec,
                      (AvatarLimbManager_AvatarHeadRotationHandler *)this,QVar6,(MethodInfo *)0x0);
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  (this->fields).remoteYawRotation.x = pQVar2->x;
  (this->fields).remoteYawRotation.y = fVar3;
  (this->fields).remoteYawRotation.z = fVar4;
  (this->fields).remoteYawRotation.w = fVar5;
  puStack7 = (undefined *)0x0;
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = pitch * _UNK_?;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  QVar6 = *pQVar2;
  (this->fields).remotePitchRotation.x = pQVar2->x;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
  pQVar2 = AvatarLimbManager+AvatarHeadRotationHandler::
           AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                     ((Quaternion *)&stack0xffffffec,
                      (AvatarLimbManager_AvatarHeadRotationHandler *)this,QVar6,(MethodInfo *)0x0);
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  (this->fields).remotePitchRotation.x = pQVar2->x;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarHeadRotationHandlerRemote::
     AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote_UpdateRotation
               (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *this,MethodInfo *method)

{
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(this->fields).remoteYawRotation,
             (this->fields).remotePitchRotation,(MethodInfo *)0x0);
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(this->fields).remoteYawRotation,
             (this->fields).remotePitchRotation,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).UpdateIdleTimer.method)();
  (this->fields)._.shouldLean = 1;
  return;
}

