
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_Activate
               (MVAvatarLocal_ReviveMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  (this->fields).reviveElapsed = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).deadTime = fVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  fVar1 = MVLocalPlayer::MVLocalPlayer_get_ReviveTimeout(pMVar2,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.mvAvatar;
  (this->fields).reviveInterval = fVar1;
  if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
  MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar3,StringLiteral_Dead,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.mvAvatar;
  if ((pMVar3 == (MVAvatarLocal *)0x0) ||
     (pAVar4 = (pMVar3->fields).avatarEquipable, pAVar4 == (AvatarEquipable *)0x0))
  goto code_?;
  (*(code *)(pAVar4->klass->vtable).Unequip.method)();
  pMVar3 = (this->fields)._.mvAvatar;
  if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
  bVar5 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar3,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pMVar3 = (this->fields)._.mvAvatar;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar3,0,(MethodInfo *)0x0);
  }
  pMVar3 = (this->fields)._.mvAvatar;
  if ((pMVar3 == (MVAvatarLocal *)0x0) ||
     (this_00 = (pMVar3->fields).triggerHandler, this_00 == (MVTriggerHandler *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_00,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  MVLocalPlayer::MVLocalPlayer_set_RespawnTime
            (pMVar2,fVar1 + (this->fields).reviveInterval,(MethodInfo *)0x0);
  pIVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar6 == (ILockCursorManager *)0x0) goto code_?;
  func_?();
  pIVar7 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar7 == (IPlayModeUI *)0x0) goto code_?;
  func_?();
  pMVar3 = (this->fields)._.mvAvatar;
  (this->fields).setDeadCamDelayed = 0;
  if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
  bVar5 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar3,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 == (MainCameraManager *)0x0) goto code_?;
    pMVar8 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
    if (pMVar8 == (MVCameraBase *)0x0) goto code_?;
    iVar9 = (*(code *)(pMVar8->klass->vtable).__unknown.method)();
    if (iVar9 == 0x10) goto code_?;
    pMVar3 = (this->fields)._.mvAvatar;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar10 = (AvatarUIHandlerRemote *)
              MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0);
    if (pAVar10 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pSVar11 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar10,(MethodInfo *)0x0);
    if (pSVar11 == (ShieldBar *)0x0) goto code_?;
    func_?();
  }
  else {
code_?:
    pMVar3 = (this->fields)._.mvAvatar;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar10 = (AvatarUIHandlerRemote *)
              MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0);
    if (pAVar10 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pSVar11 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar10,(MethodInfo *)0x0);
    if (pSVar11 == (ShieldBar *)0x0) goto code_?;
    func_?();
    (this->fields).setDeadCamDelayed = 1;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar12 != (MVNetworkGame *)0x0) &&
     (pGVar13 = (pMVar12->fields).GameEventManager, pGVar13 != (GameEventManager *)0x0)) {
    this_01 = (pGVar13->fields).AvatarCommandsBuildMode;
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)this,MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      GameEventManager+AvatarCommandsBuildModeManager::
      GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                (this_01,(Action *)this_03,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_DeActivate
               (MVAvatarLocal_ReviveMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pGVar2 = (pMVar1->fields).GameEventManager, pGVar2 != (GameEventManager *)0x0)) {
    this_00 = (pGVar2->fields).AvatarCommandsBuildMode;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      GameEventManager+AvatarCommandsBuildModeManager::
      GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                (this_00,(Action *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_FixedUpdate
               (MVAvatarLocal_ReviveMode *this,IInputToPlayerMovement *movementMap,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  pMVar2 = (this->fields).inputController;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar3 = (pMVar1->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pAVar3,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&puStack_5,this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *)0x0) {
        fVar6 = pQVar4->y;
        fVar7 = pQVar4->z;
        fVar8 = pQVar4->w;
        (pMVar2->fields).rot.x = pQVar4->x;
        (pMVar2->fields).rot.y = fVar6;
        (pMVar2->fields).rot.z = fVar7;
        (pMVar2->fields).rot.w = fVar8;
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar3 = (pMVar1->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                            ((Behaviour *)pAVar3,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pMVar1 = (this->fields)._.mvAvatar;
            if ((pMVar1 == (MVAvatarLocal *)0x0) ||
               (pAVar3 = (pMVar1->fields).avatarMotor, pAVar3 == (AvatarMotor *)0x0))
            goto code_?;
            AvatarMotor::AvatarMotor_FixedUpdateFunction
                      (pAVar3,(IMotorAPI *)(this->fields).inputController,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_FrameUpdate
               (MVAvatarLocal_ReviveMode *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
      goto code_?;
      AvatarMotor::AvatarMotor_UpdateFunction(pAVar2,(MethodInfo *)0x0);
    }
    if (((this->fields).reviveElapsed == 0) &&
       (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       fVar4 = fVar4 - (this->fields).deadTime, pfVar5 = &(this->fields).reviveInterval,
       *pfVar5 <= fVar4 && fVar4 != *pfVar5)) {
      (this->fields).reviveElapsed = 1;
    }
    if (((this->fields).setDeadCamDelayed == 0) ||
       (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       fVar4 - (this->fields).deadTime <= _UNK_?)) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       ((this_00 = (AvatarUIHandlerRemote *)
                   MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        this_00 != (AvatarUIHandlerRemote *)0x0 &&
        (pSStack6 =
              AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(this_00,(MethodInfo *)0x0),
        pSStack6 != (ShieldBar *)0x0)))) {
      uStack7 = 0x14;
      func_?();
      (this->fields).setDeadCamDelayed = 0;
      return;
    }
  }
code_?:
  uStack7 = 0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void NoButtonPressed() */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_NoButtonPressed
               (MVAvatarLocal_ReviveMode *this,MethodInfo *method)

{
  (this->fields).reviveElapsed = 1;
  return;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_OnEnterEditMode
               (MVAvatarLocal_ReviveMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(4,TypeInfo__IPlayModeUI,pIVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVAvatarLocal+ReviveMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode__ctor
               (MVAvatarLocal_ReviveMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).reviveInterval = 10.0;
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
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
  (this_00->fields)._._._._.m_CachedPtr = (void *)pQVar1->x;
  (this_00->fields).state = (int32_t)fVar3;
  (this_00->fields).originalScale.x = fVar4;
  (this_00->fields).originalScale.y = fVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  (this->fields).inputController = (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 2;
  return;
}

