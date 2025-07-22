
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
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pAVar5 = (lookDirectionHandler->fields).OnRotationChange;
    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar6,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      (lookDirectionHandler->fields).OnRotationChange = (Action *)0x0;
code_?:
      this = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)
             &(lookDirectionHandler->fields).OnRotationChange;
      func_?();
      if (cRam_? == '\0') {
        func_?();
        this = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)
               &MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__;
        func_?();
        cRam_? = '\x01';
      }
      (this->fields)._.limbRotator = limbRotator;
      func_?();
      if (limbManager == (AvatarLimbManager *)0x0) goto code_?;
      pAVar5 = (limbManager->fields).OnAvatarRotate;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)&(this->fields)._.limbRotator,
                 MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (limbManager->fields).OnAvatarRotate = (Action *)0x0;
        func_?();
        return;
      }
      pAVar7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar5;
      }
      if (pAVar7 != (Action *)0x0) {
        (limbManager->fields).OnAvatarRotate = pAVar7;
        pAVar7 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar5;
        }
        if (pAVar7 != (Action *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    (lookDirectionHandler->fields).OnRotationChange = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  fStack_1 = (this->fields).remotePitchRotation.x;
  fStack_2 = (this->fields).remotePitchRotation.y;
  fStack_3 = (this->fields).remotePitchRotation.z;
  fStack_4 = (this->fields).remotePitchRotation.w;
  fStack_5 = (this->fields).remoteYawRotation.x;
  fStack_6 = (this->fields).remoteYawRotation.y;
  fStack_7 = (this->fields).remoteYawRotation.z;
  fStack_8 = (this->fields).remoteYawRotation.w;
  iVar9 = func_?(&fStack_10,&fStack_5,0);
  fVar11 = *(float *)(iVar9 + 4);
  if (_UNK_? < fVar11) {
    fVar11 = _UNK_? - fVar11;
  }
  if ((this->fields)._.shouldLean == 0) {
    fVar11 = _UNK_?;
  }
  pAVar12 = (this->fields)._.limbRotator;
  fStack_10 = fStack_2;
  fStack_13 = fStack_3;
  fStack_14 = fStack_4;
  fStack_15 = fStack_1 / (_UNK_? / (_UNK_? - fVar11 / _UNK_?));
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (pAVar12 != (AvatarLimbManager_LimbRotator *)0x0) {
    QVar16.y = fStack_10;
    QVar16.x = fStack_15;
    QVar16.z = fStack_13;
    QVar16.w = fStack_14;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_TrySetLimbRotation
              (pAVar12,BodyData_PartIndex__Enum_Torso,
               TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,QVar16,
               (MethodInfo *)0x0);
    fStack_5 = (this->fields).remotePitchRotation.x;
    fStack_6 = (this->fields).remotePitchRotation.y;
    fStack_7 = (this->fields).remotePitchRotation.z;
    fStack_8 = (this->fields).remotePitchRotation.w;
    pQVar17 = &(this->fields).remoteYawRotation;
    fStack_1 = pQVar17->x;
    fStack_2 = (this->fields).remoteYawRotation.y;
    fStack_3 = (this->fields).remoteYawRotation.z;
    fStack_4 = (this->fields).remoteYawRotation.w;
    QVar16 = *pQVar17;
    iVar9 = func_?(&fStack_10,&fStack_1,0);
    fVar11 = *(float *)(iVar9 + 4);
    if (_UNK_? < fVar11) {
      fVar11 = _UNK_? - fVar11;
    }
    if ((this->fields)._.shouldLean == 0) {
      fVar11 = _UNK_?;
    }
    pAVar12 = (this->fields)._.limbRotator;
    fStack_10 = fStack_6;
    fStack_13 = fStack_7;
    fStack_14 = fStack_8;
    fStack_15 = fStack_5 /
                (_UNK_? / ((_UNK_? - fVar11 / _UNK_?) + _UNK_?));
    if (pAVar12 != (AvatarLimbManager_LimbRotator *)0x0) {
      limbPitchRotation.y = fStack_6;
      limbPitchRotation.x = fStack_15;
      limbPitchRotation.z = fStack_7;
      limbPitchRotation.w = fStack_8;
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_TrySetLimbRotation
                (pAVar12,BodyData_PartIndex__Enum_Head,QVar16,limbPitchRotation,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).UpdateIdleTimer.method)(this,this->klass[1]._0.image);
      (this->fields)._.shouldLean = 1;
      return;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

