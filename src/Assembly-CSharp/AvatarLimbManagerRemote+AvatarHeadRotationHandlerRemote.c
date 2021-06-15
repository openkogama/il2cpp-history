
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&pAStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  (this->fields).remoteYawRotation.x = pQVar1->x;
  (this->fields).remoteYawRotation.y = fVar3;
  (this->fields).remoteYawRotation.z = fVar4;
  (this->fields).remoteYawRotation.w = fVar5;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&pAStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  (this->fields).remotePitchRotation.x = pQVar1->x;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
  if (lookDirectionHandler != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    pAStack_2 = TypeInfo__System__Action;
    pAVar6 = (lookDirectionHandler->fields).OnRotationChange;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
               (MethodInfo *)0x0);
    pAVar7 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar6 = (Action *)0x0;
    if (pAVar7 != (Action *)0x0) {
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar7;
      }
      if (pAVar6 == (Action *)0x0) goto code_?;
    }
    (lookDirectionHandler->fields).OnRotationChange = pAVar6;
    AvatarLimbManager+AvatarHeadRotationHandler::
    AvatarLimbManager_AvatarHeadRotationHandler_Initialize
              ((AvatarLimbManager_AvatarHeadRotationHandler *)lookDirectionHandler,
               (AvatarLimbManager *)lookDirectionHandler,
               (AvatarLimbManager_LimbRotator *)lookDirectionHandler,lookDirectionHandler,
               (MethodInfo *)0x0);
    return;
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
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,0,yaw,0,0);
  pQVar3 = &(this->fields).remoteYawRotation;
  func_?(pQVar3,(int)uStack_2,(int)((ulonglong)uStack_2 >> 0x20),uStack_1,0);
  pQVar4 = AvatarLimbManager+AvatarHeadRotationHandler::
           AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                     ((Quaternion *)&stack0xffffffd4,
                      (AvatarLimbManager_AvatarHeadRotationHandler *)this,*pQVar3,(MethodInfo *)0x0)
  ;
  fVar5 = pQVar4->y;
  fVar6 = pQVar4->z;
  fVar7 = pQVar4->w;
  pQVar3->x = pQVar4->x;
  (this->fields).remoteYawRotation.y = fVar5;
  (this->fields).remoteYawRotation.z = fVar6;
  (this->fields).remoteYawRotation.w = fVar7;
  func_?();
  pQVar3 = &(this->fields).remotePitchRotation;
  func_?();
  pQVar4 = AvatarLimbManager+AvatarHeadRotationHandler::
           AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                     ((Quaternion *)&stack0xffffffd4,
                      (AvatarLimbManager_AvatarHeadRotationHandler *)this,*pQVar3,(MethodInfo *)0x0)
  ;
  fVar5 = pQVar4->y;
  fVar6 = pQVar4->z;
  fVar7 = pQVar4->w;
  pQVar3->x = pQVar4->x;
  (this->fields).remotePitchRotation.y = fVar5;
  (this->fields).remotePitchRotation.z = fVar6;
  (this->fields).remotePitchRotation.w = fVar7;
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

