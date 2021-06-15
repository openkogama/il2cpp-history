
/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,
               AvatarLimbManager *limbManager,AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.limbManager = limbManager;
  (this->fields)._.limbRotator = limbRotator;
  if (enableChangeHandler != (AvatarEnabledChangeHandler *)0x0) {
    pAVar1 = (enableChangeHandler->fields).OnEnabled;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnEnable__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (enableChangeHandler->fields).OnEnabled = pAVar1;
    pAVar1 = (enableChangeHandler->fields).OnDisabled;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnDisable__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (enableChangeHandler->fields).OnDisabled = pAVar1;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar5 = pQVar4->y;
    fVar6 = pQVar4->z;
    fVar7 = pQVar4->w;
    (this->fields).remoteYawRotation.x = pQVar4->x;
    (this->fields).remoteYawRotation.y = fVar5;
    (this->fields).remoteYawRotation.z = fVar6;
    (this->fields).remoteYawRotation.w = fVar7;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar5 = pQVar4->x;
    fVar6 = pQVar4->y;
    fVar7 = pQVar4->z;
    fVar8 = pQVar4->w;
    (this->fields)._.pointingDuration = 1.5;
    (this->fields)._.shouldPoint = 0;
    (this->fields).remotePitchRotation.x = fVar5;
    (this->fields).remotePitchRotation.y = fVar6;
    (this->fields).remotePitchRotation.z = fVar7;
    (this->fields).remotePitchRotation.w = fVar8;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetRotationRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,float yaw,float pitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  if ((this->fields)._.isActive != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       (&QStack_6,(MethodInfo *)0x0);
    fStack_1 = pQVar5->x;
    fStack_2 = pQVar5->y;
    fStack_3 = pQVar5->z;
    fStack_4 = pQVar5->w;
    puVar7 = (undefined8 *)func_?(&uStack_8,&fStack_1,0);
    QStack_6._4_8_ = *puVar7;
    QStack_6.w = *(float *)(puVar7 + 1);
    if (yaw == QStack_6.z) {
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                (&QStack_6,(MethodInfo *)0x0);
      puVar7 = (undefined8 *)func_?();
      QStack_6._4_8_ = *puVar7;
      QStack_6.w = *(float *)(puVar7 + 1);
      if (pitch == QStack_6.y) {
        (this->fields)._.shouldPoint = 0;
        AvatarLimbManager+AvatarPointingHandler::
        AvatarLimbManager_AvatarPointingHandler_StopPointing
                  ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
        return;
      }
    }
    uStack_9 = 0;
    uStack_8 = 0;
    func_?(&uStack_8,0,yaw,0);
    func_?(&(this->fields).remoteYawRotation,uStack_8,uStack_9);
    QStack_6.w = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    func_?(&QStack_6.y,pitch,0,0);
    func_?(&(this->fields).remotePitchRotation,QStack_6._4_8_,QStack_6.w);
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
    (this->fields)._.shouldPoint = 1;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_UpdatePointing
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,Vector3 localLookDirection
               ,MethodInfo *method)

{
  if ((this->fields)._.shouldPoint != 0) {
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_HandlePointing
              ((AvatarLimbManager_AvatarPointingHandler *)this,(this->fields).remoteYawRotation,
               (this->fields).remotePitchRotation,(MethodInfo *)0x0);
  }
  fVar1 = (this->fields)._.elapsedPointingTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields)._.prevLookDirection.x = localLookDirection.x;
  (this->fields)._.prevLookDirection.y = localLookDirection.y;
  (this->fields)._.elapsedPointingTime = fVar1 - fVar2;
  (this->fields)._.prevLookDirection.z = localLookDirection.z;
  return;
}

