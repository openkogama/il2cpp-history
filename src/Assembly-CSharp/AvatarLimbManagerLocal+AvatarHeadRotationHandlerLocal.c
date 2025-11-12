
/* Void HandleOnRotationChange() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_HandleOnRotationChange
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.limbRotator;
  (this->fields)._.idleTime = 0.0;
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopBlendingWithAnimation
              (this_00,BodyData_PartIndex__Enum_Head,StringLiteral_Idle,(MethodInfo *)0x0);
    (this->fields).shouldSendNetworkMessage = 1;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleResult(AvatarLimbManagerLocal+HeadRotationCalculationResult) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_HandleResult
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,
               AvatarLimbManagerLocal_HeadRotationCalculationResult *result,MethodInfo *method)

{
  fVar1 = (result->YawRotation).x;
  fVar2 = (result->YawRotation).y;
  fVar3 = (result->YawRotation).z;
  fVar4 = (result->YawRotation).w;
  (this->fields)._.shouldLean = result->ShouldLean;
  (this->fields).yawRotation.x = fVar1;
  (this->fields).yawRotation.y = fVar2;
  (this->fields).yawRotation.z = fVar3;
  (this->fields).yawRotation.w = fVar4;
  fVar1 = (result->PitchRotation).y;
  fVar2 = (result->PitchRotation).z;
  fVar3 = (result->PitchRotation).w;
  (this->fields).pitchRotation.x = (result->PitchRotation).x;
  (this->fields).pitchRotation.y = fVar1;
  (this->fields).pitchRotation.z = fVar2;
  (this->fields).pitchRotation.w = fVar3;
  return;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator,
   AvatarLimbManager+AvatarLookDirectionHandler) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_Initialize
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,
               AvatarLimbManager *limbManager,AvatarLimbManager_LimbRotator *limbRotator,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__HandleOnRotationChange__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = (lookDirectionHandler->fields).OnRotationChange;
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,
             MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__HandleOnRotationChange__
             ,(MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    (lookDirectionHandler->fields).OnRotationChange = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (lookDirectionHandler->fields).OnRotationChange = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(lookDirectionHandler->fields).OnRotationChange >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
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
  bVar9 = iRam_? != 0;
  (this->fields)._.limbRotator = limbRotator;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.limbRotator >> 0xc);
    lVar10 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar6 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar9 = uVar8 == *puVar6;
      if (bVar9) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (limbManager == (AvatarLimbManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = (limbManager->fields).OnAvatarRotate;
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,
             MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    (limbManager->fields).OnAvatarRotate = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (limbManager->fields).OnAvatarRotate = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar2;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&limbManager->fields >> 0xc);
    lVar10 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar6 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar9 = uVar8 == *puVar6;
      if (bVar9) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Void ResetNetworkMessageCooldown(Single) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_ResetNetworkMessageCooldown
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,
               float networkMessageDelay,MethodInfo *method)

{
  pfVar1 = &(this->fields).networkMessageCooldown;
  (this->fields).shouldSendNetworkMessage = 0;
  if (*pfVar1 <= networkMessageDelay && networkMessageDelay != *pfVar1) {
    (this->fields).networkMessageCooldown = networkMessageDelay;
  }
  return;
}


/* Void UpdateNetworkMessage(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_UpdateNetworkMessage
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,Quaternion *rotation,
               MethodInfo *method)

{
  fVar1 = (this->fields).networkMessageCooldown;
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
  (this->fields).networkMessageCooldown = fVar1;
  if ((fVar1 <= 0.0) && ((this->fields).shouldSendNetworkMessage != 0)) {
    if ((this->fields).OnUpdateHeadRotationValue != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar5 = (this->fields).OnUpdateHeadRotationValue;
      fStack_6 = rotation->x;
      fStack_7 = rotation->y;
      fStack_8 = rotation->z;
      fStack_9 = rotation->w;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,&fStack_6,(pAVar5->fields)._._.method);
    }
    pfVar10 = &(this->fields).networkMessageCooldown;
    if (*pfVar10 <= _UNK_? && _UNK_? != *pfVar10) {
      (this->fields).networkMessageCooldown = 1.0;
    }
    (this->fields).shouldSendNetworkMessage = 0;
  }
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_UpdateRotation
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,MethodInfo *method)

{
  fVar1 = (this->fields).yawRotation.x;
  fVar2 = (this->fields).yawRotation.y;
  fVar3 = (this->fields).yawRotation.z;
  fVar4 = (this->fields).yawRotation.w;
  fVar5 = (this->fields).pitchRotation.x;
  fVar6 = (this->fields).pitchRotation.y;
  fVar7 = (this->fields).pitchRotation.z;
  fVar8 = (this->fields).pitchRotation.w;
  fVar9 = (this->fields).networkMessageCooldown;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  fVar12 = (float)(*pcRam_?)();
  fVar9 = fVar9 - fVar12;
  (this->fields).networkMessageCooldown = fVar9;
  if ((fVar9 <= 0.0) && ((this->fields).shouldSendNetworkMessage != 0)) {
    if ((this->fields).OnUpdateHeadRotationValue != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar13 = (this->fields).OnUpdateHeadRotationValue;
      QStack_14.y = (fVar8 * fVar2 + fVar6 * fVar4 + fVar5 * fVar3) - fVar7 * fVar1;
      QStack_14.x = (fVar5 * fVar4 + fVar8 * fVar1 + fVar7 * fVar2) - fVar6 * fVar3;
      QStack_14.w = ((fVar8 * fVar4 - fVar5 * fVar1) - fVar6 * fVar2) - fVar7 * fVar3;
      QStack_14.z = (fVar8 * fVar3 + fVar7 * fVar4 + fVar6 * fVar1) - fVar5 * fVar2;
      (*(pAVar13->fields)._._.invoke_impl)
                ((pAVar13->fields)._._.method_code,&QStack_14,(pAVar13->fields)._._.method);
    }
    pfVar15 = &(this->fields).networkMessageCooldown;
    if (*pfVar15 <= _UNK_? && _UNK_? != *pfVar15) {
      (this->fields).networkMessageCooldown = 1.0;
    }
    (this->fields).shouldSendNetworkMessage = 0;
  }
  QStack_14.x = (this->fields).pitchRotation.x;
  QStack_14.y = (this->fields).pitchRotation.y;
  QStack_14.z = (this->fields).pitchRotation.z;
  QStack_14.w = (this->fields).pitchRotation.w;
  aQStack_16[0].x = (this->fields).yawRotation.x;
  aQStack_16[0].y = (this->fields).yawRotation.y;
  aQStack_16[0].z = (this->fields).yawRotation.z;
  aQStack_16[0].w = (this->fields).yawRotation.w;
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,aQStack_16,&QStack_14,
             (MethodInfo *)0x0);
  aQStack_16[0].x = (this->fields).pitchRotation.x;
  aQStack_16[0].y = (this->fields).pitchRotation.y;
  aQStack_16[0].z = (this->fields).pitchRotation.z;
  aQStack_16[0].w = (this->fields).pitchRotation.w;
  QStack_14.x = (this->fields).yawRotation.x;
  QStack_14.y = (this->fields).yawRotation.y;
  QStack_14.z = (this->fields).yawRotation.z;
  QStack_14.w = (this->fields).yawRotation.w;
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,&QStack_14,aQStack_16,
             (MethodInfo *)0x0);
  (*(this->klass->vtable).UpdateIdleTimer.methodPtr)
            (this,(this->klass->vtable).UpdateIdleTimer.method);
  (this->fields)._.shouldLean = 1;
  return;
}


/* AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,MethodInfo *method)

{
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
  (this->fields).yawRotation.x = (pQVar2->identityQuaternion).x;
  (this->fields).yawRotation.y = fVar3;
  (this->fields).yawRotation.z = fVar4;
  (this->fields).yawRotation.w = fVar5;
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
  (this->fields)._.shouldLean = 1;
  (this->fields).pitchRotation.x = fVar3;
  (this->fields).pitchRotation.y = fVar4;
  (this->fields).pitchRotation.z = fVar5;
  (this->fields).pitchRotation.w = fVar6;
  return;
}

