
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
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields).remotePitchRotation.x = (pQVar2->identityQuaternion).x;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
  if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pAVar7 = (lookDirectionHandler->fields).OnRotationChange;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,
             MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
             (MethodInfo *)0x0);
  pAVar7 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
  if (pAVar7 == (Action *)0x0) {
    (lookDirectionHandler->fields).OnRotationChange = (Action *)0x0;
  }
  else {
    pAVar9 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar7;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (lookDirectionHandler->fields).OnRotationChange = pAVar9;
    pAVar9 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar7;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&(lookDirectionHandler->fields).OnRotationChange >> 0xc);
    puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar12 = *puVar11;
      LOCK();
      uVar13 = *puVar11;
      if (uVar12 == uVar13) {
        *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (uVar12 != uVar13);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar14 = iRam_? != 0;
  (this->fields)._.limbRotator = limbRotator;
  if (bVar14) {
    uVar10 = (uint)((ulonglong)&(this->fields)._.limbRotator >> 0xc);
    lVar15 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar15 + 0xADDR);
      puVar11 = (ulonglong *)(lVar15 + 0xADDR);
      LOCK();
      bVar14 = uVar13 == *puVar11;
      if (bVar14) {
        *puVar11 = uVar13 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if (limbManager == (AvatarLimbManager *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pAVar7 = (limbManager->fields).OnAvatarRotate;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,
             MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
             (MethodInfo *)0x0);
  pAVar7 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
  if (pAVar7 == (Action *)0x0) {
    (limbManager->fields).OnAvatarRotate = (Action *)0x0;
  }
  else {
    pAVar9 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar7;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?(pAVar7,TypeInfo__System__Action);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (limbManager->fields).OnAvatarRotate = pAVar9;
    pAVar9 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar7;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&limbManager->fields >> 0xc);
    lVar15 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar15 + 0xADDR);
      puVar11 = (ulonglong *)(lVar15 + 0xADDR);
      LOCK();
      bVar14 = uVar13 == *puVar11;
      if (bVar14) {
        *puVar11 = uVar13 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  return;
}


/* Void SetRotationRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarHeadRotationHandlerRemote::
     AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote_SetRotationRemotely
               (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *this,float yaw,float pitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.limbRotator;
  (this->fields)._.idleTime = 0.0;
  if (this_00 == (AvatarLimbManager_LimbRotator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopBlendingWithAnimation
            (this_00,BodyData_PartIndex__Enum_Head,StringLiteral_Idle,(MethodInfo *)0x0);
  uStack_2 = (ulonglong)(uint)(yaw * _UNK_?) << 0x20;
  uStack_3 = 0;
  QStack_4.x = 0.0;
  QStack_4.y = 0.0;
  QStack_4.z = 0.0;
  QStack_4.w = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_2,&QStack_4);
  (this->fields).remoteYawRotation.x = QStack_4.x;
  (this->fields).remoteYawRotation.y = QStack_4.y;
  (this->fields).remoteYawRotation.z = QStack_4.z;
  (this->fields).remoteYawRotation.w = QStack_4.w;
  pQVar6 = AvatarLimbManager+AvatarHeadRotationHandler::
           AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                     (aQStack_7,(AvatarLimbManager_AvatarHeadRotationHandler *)this,&QStack_4,
                      (MethodInfo *)0x0);
  fVar8 = pitch * _UNK_?;
  fVar9 = pQVar6->y;
  fVar10 = pQVar6->z;
  fVar11 = pQVar6->w;
  (this->fields).remoteYawRotation.x = pQVar6->x;
  (this->fields).remoteYawRotation.y = fVar9;
  (this->fields).remoteYawRotation.z = fVar10;
  (this->fields).remoteYawRotation.w = fVar11;
  uStack_3 = 0;
  uStack_2 = (ulonglong)(uint)fVar8;
  QStack_4.x = 0.0;
  QStack_4.y = 0.0;
  QStack_4.z = 0.0;
  QStack_4.w = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_2,&QStack_4);
  (this->fields).remotePitchRotation.x = QStack_4.x;
  (this->fields).remotePitchRotation.y = QStack_4.y;
  (this->fields).remotePitchRotation.z = QStack_4.z;
  (this->fields).remotePitchRotation.w = QStack_4.w;
  pQVar6 = AvatarLimbManager+AvatarHeadRotationHandler::
           AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                     (aQStack_7,(AvatarLimbManager_AvatarHeadRotationHandler *)this,&QStack_4,
                      (MethodInfo *)0x0);
  fVar9 = pQVar6->y;
  fVar10 = pQVar6->z;
  fVar11 = pQVar6->w;
  (this->fields).remotePitchRotation.x = pQVar6->x;
  (this->fields).remotePitchRotation.y = fVar9;
  (this->fields).remotePitchRotation.z = fVar10;
  (this->fields).remotePitchRotation.w = fVar11;
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarHeadRotationHandlerRemote::
     AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote_UpdateRotation
               (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *this,MethodInfo *method)

{
  QStack_1.x = (this->fields).remotePitchRotation.x;
  QStack_1.y = (this->fields).remotePitchRotation.y;
  QStack_1.z = (this->fields).remotePitchRotation.z;
  QStack_1.w = (this->fields).remotePitchRotation.w;
  QStack_2.x = (this->fields).remoteYawRotation.x;
  QStack_2.y = (this->fields).remoteYawRotation.y;
  QStack_2.z = (this->fields).remoteYawRotation.z;
  QStack_2.w = (this->fields).remoteYawRotation.w;
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,&QStack_2,&QStack_1,
             (MethodInfo *)0x0);
  QStack_2.x = (this->fields).remotePitchRotation.x;
  QStack_2.y = (this->fields).remotePitchRotation.y;
  QStack_2.z = (this->fields).remotePitchRotation.z;
  QStack_2.w = (this->fields).remotePitchRotation.w;
  QStack_1.x = (this->fields).remoteYawRotation.x;
  QStack_1.y = (this->fields).remoteYawRotation.y;
  QStack_1.z = (this->fields).remoteYawRotation.z;
  QStack_1.w = (this->fields).remoteYawRotation.w;
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,&QStack_1,&QStack_2,
             (MethodInfo *)0x0);
  (*(this->klass->vtable).UpdateIdleTimer.methodPtr)
            (this,(this->klass->vtable).UpdateIdleTimer.method);
  (this->fields)._.shouldLean = 1;
  return;
}

