
/* Void HandleOnRotationChange() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_HandleOnRotationChange
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,MethodInfo *method)

{
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(MethodInfo *)0x0);
  (this->fields).shouldSendNetworkMessage = 1;
  return;
}


/* Void HandleResult(AvatarLimbManagerLocal+HeadRotationCalculationResult) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal_HandleResult
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,
               AvatarLimbManagerLocal_HeadRotationCalculationResult result,MethodInfo *method)

{
  (this->fields).yawRotation.x = result.YawRotation.x;
  (this->fields).yawRotation.y = result.YawRotation.y;
  (this->fields).yawRotation.z = result.YawRotation.z;
  (this->fields).yawRotation.w = result.YawRotation.w;
  (this->fields)._.shouldLean = result.ShouldLean;
  (this->fields).pitchRotation.x = result.PitchRotation.x;
  (this->fields).pitchRotation.y = result.PitchRotation.y;
  (this->fields).pitchRotation.z = result.PitchRotation.z;
  (this->fields).pitchRotation.w = result.PitchRotation.w;
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
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__HandleOnRotationChange__
                   );
    cRam_? = '\x01';
  }
  if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    func_?();
  }
  else {
    pAVar1 = (lookDirectionHandler->fields).OnRotationChange;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__HandleOnRotationChange__
               ,(MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
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
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) {
      (lookDirectionHandler->fields).OnRotationChange = pAVar2;
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,Quaternion rotation,
               MethodInfo *method)

{
  fVar1 = (this->fields).networkMessageCooldown;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).networkMessageCooldown = fVar1;
  if ((fVar1 <= 0.0) && ((this->fields).shouldSendNetworkMessage != 0)) {
    if ((this->fields).OnUpdateHeadRotationValue != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar3 = (this->fields).OnUpdateHeadRotationValue;
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,rotation.x,rotation.y,rotation.z,rotation.w,
                 (pAVar3->fields)._._.method);
    }
    pfVar4 = &(this->fields).networkMessageCooldown;
    if (*pfVar4 <= _UNK_? && _UNK_? != *pfVar4) {
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
  fVar1 = (this->fields).pitchRotation.x;
  fVar2 = (this->fields).pitchRotation.y;
  fVar3 = (this->fields).pitchRotation.z;
  fVar4 = (this->fields).pitchRotation.w;
  fVar5 = (this->fields).yawRotation.y;
  fVar6 = (this->fields).yawRotation.z;
  fVar7 = (this->fields).yawRotation.w;
  fVar8 = (fVar4 * (this->fields).yawRotation.x + fVar1 * fVar7 + fVar3 * fVar5) - fVar2 * fVar6;
  fVar9 = (fVar2 * fVar7 + fVar5 * fVar4 + fVar6 * fVar1) - fVar3 * (this->fields).yawRotation.x;
  fVar10 = (fVar6 * fVar4 + fVar3 * fVar7 + fVar2 * (this->fields).yawRotation.x) -
          fVar5 * (this->fields).pitchRotation.x;
  fVar2 = ((fVar4 * fVar7 - (this->fields).yawRotation.x * (this->fields).pitchRotation.x) -
           fVar2 * fVar5) - fVar6 * fVar3;
  fVar1 = (this->fields).networkMessageCooldown;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar3;
  (this->fields).networkMessageCooldown = fVar1;
  if ((fVar1 <= 0.0) && ((this->fields).shouldSendNetworkMessage != 0)) {
    if ((this->fields).OnUpdateHeadRotationValue != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar11 = (this->fields).OnUpdateHeadRotationValue;
      (*(pAVar11->fields)._._.invoke_impl)
                ((pAVar11->fields)._._.method_code,fVar8,fVar9,fVar10,fVar2,
                 (pAVar11->fields)._._.method);
    }
    pfVar12 = &(this->fields).networkMessageCooldown;
    if (*pfVar12 <= _UNK_? && _UNK_? != *pfVar12) {
      (this->fields).networkMessageCooldown = 1.0;
    }
    (this->fields).shouldSendNetworkMessage = 0;
  }
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(this->fields).yawRotation,
             (this->fields).pitchRotation,(MethodInfo *)0x0);
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(this->fields).yawRotation,
             (this->fields).pitchRotation,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).UpdateIdleTimer.method)(this,this->klass[1]._0.image);
  (this->fields)._.shouldLean = 1;
  return;
}


/* AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).yawRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).yawRotation.y = fVar2;
  (this->fields).yawRotation.z = fVar3;
  (this->fields).yawRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  (this->fields)._.shouldLean = 1;
  (this->fields).pitchRotation.x = fVar2;
  (this->fields).pitchRotation.y = fVar3;
  (this->fields).pitchRotation.z = fVar4;
  (this->fields).pitchRotation.w = fVar5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}

