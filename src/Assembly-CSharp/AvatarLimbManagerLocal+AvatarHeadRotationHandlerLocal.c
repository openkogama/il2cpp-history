
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (lookDirectionHandler != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    pAVar1 = (lookDirectionHandler->fields).OnRotationChange;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__HandleOnRotationChange__
               ,(MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (lookDirectionHandler->fields).OnRotationChange = pAVar1;
    AvatarLimbManager+AvatarHeadRotationHandler::
    AvatarLimbManager_AvatarHeadRotationHandler_Initialize
              ((AvatarLimbManager_AvatarHeadRotationHandler *)lookDirectionHandler,
               (AvatarLimbManager *)lookDirectionHandler,
               (AvatarLimbManager_LimbRotator *)lookDirectionHandler,lookDirectionHandler,
               (MethodInfo *)0x0);
    return;
  }
  func_?(0);
code_?:
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).networkMessageCooldown;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).networkMessageCooldown = fVar1;
  if ((fVar1 <= 0.0) && ((this->fields).shouldSendNetworkMessage != 0)) {
    this_00 = (Action_1_UnityEngine_Vector4_ *)(this->fields).OnUpdateHeadRotationValue;
    if (this_00 != (Action_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                (this_00,(Vector4)rotation,
                 MethodInfo__System__Action<UnityEngine::Quaternion>__Invoke_UnityEngine__Quaternion_
                );
      fVar1 = (this->fields).networkMessageCooldown;
    }
    if (fVar1 < _UNK_?) {
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).yawRotation.x;
  fVar2 = (this->fields).yawRotation.y;
  fVar3 = (this->fields).yawRotation.z;
  fVar4 = (this->fields).yawRotation.w;
  QStack_5.x = (this->fields).pitchRotation.x;
  QStack_5.y = (this->fields).pitchRotation.y;
  QStack_5.z = (this->fields).pitchRotation.z;
  QStack_5.w = (this->fields).pitchRotation.w;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  lhs.y = fVar2;
  lhs.x = fVar1;
  lhs.z = fVar3;
  lhs.w = fVar4;
  rhs.y = QStack_5.y;
  rhs.x = QStack_5.x;
  rhs.z = QStack_5.z;
  rhs.w = QStack_5.w;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     (&QStack_5,lhs,rhs,(MethodInfo *)0x0);
  QStack_5.x = pQVar6->x;
  QStack_5.y = pQVar6->y;
  QStack_5.z = pQVar6->z;
  QStack_5.w = pQVar6->w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).networkMessageCooldown;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = QStack_5.w;
  fVar1 = fVar1 - fVar3;
  (this->fields).networkMessageCooldown = fVar1;
  if ((fVar1 <= 0.0) && ((this->fields).shouldSendNetworkMessage != 0)) {
    this_00 = (Action_1_UnityEngine_Vector4_ *)(this->fields).OnUpdateHeadRotationValue;
    if (this_00 != (Action_1_UnityEngine_Vector4_ *)0x0) {
      QStack_5.w = (float)&UNK_?;
      obj.y = QStack_5.y;
      obj.x = QStack_5.x;
      obj.z = QStack_5.z;
      obj.w = fVar2;
      mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                (this_00,obj,
                 MethodInfo__System__Action<UnityEngine::Quaternion>__Invoke_UnityEngine__Quaternion_
                );
      fVar1 = (this->fields).networkMessageCooldown;
    }
    if (fVar1 < _UNK_?) {
      (this->fields).networkMessageCooldown = 1.0;
    }
    (this->fields).shouldSendNetworkMessage = 0;
  }
  fStack7 = (this->fields).pitchRotation.y;
  fStack8 = (this->fields).pitchRotation.z;
  fStack9 = (this->fields).pitchRotation.w;
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(this->fields).yawRotation,
             (this->fields).pitchRotation,(MethodInfo *)0x0);
  AvatarLimbManager+AvatarHeadRotationHandler::
  AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
            ((AvatarLimbManager_AvatarHeadRotationHandler *)this,(this->fields).yawRotation,
             (this->fields).pitchRotation,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).UpdateIdleTimer.method)();
  (this->fields)._.shouldLean = 1;
  return;
}


/* AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationHandlerLocal::
     AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  (this->fields).yawRotation.x = pQVar1->x;
  (this->fields).yawRotation.y = fVar3;
  (this->fields).yawRotation.z = fVar4;
  (this->fields).yawRotation.w = fVar5;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  (this->fields)._.shouldLean = 1;
  (this->fields).pitchRotation.x = fVar3;
  (this->fields).pitchRotation.y = fVar4;
  (this->fields).pitchRotation.z = fVar5;
  (this->fields).pitchRotation.w = fVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  return;
}

