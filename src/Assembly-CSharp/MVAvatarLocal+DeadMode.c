
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_Activate
               (MVAvatarLocal_DeadMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
            (this_02,IncrementStatRequestType__Enum_Died,0,(MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).deadTime = fVar1;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  fVar1 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar2,(MethodInfo *)0x0);
  (this->fields).deadInterval = fVar1;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  MVLocalPlayer::MVLocalPlayer_set_RespawnTime
            (pMVar2,(this->fields).deadInterval + fVar1,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.mvAvatar;
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
  pIVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar6 == (ILockCursorManager *)0x0) goto code_?;
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar7 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar7 == (IPlayModeUI *)0x0) goto code_?;
  func_?();
  pMVar3 = (this->fields)._.mvAvatar;
  if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
  bVar5 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar3,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_03 == (MainCameraManager *)0x0) goto code_?;
    pMVar8 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_03,(MethodInfo *)0x0);
    if (pMVar8 == (MVCameraBase *)0x0) goto code_?;
    iVar9 = (*(code *)(pMVar8->klass->vtable).__unknown.method)();
    if (iVar9 != 0x10) goto code_?;
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
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar12 != (MVNetworkGame *)0x0) &&
     (pGVar13 = (pMVar12->fields).GameEventManager, pGVar13 != (GameEventManager *)0x0)) {
    this_01 = (pGVar13->fields).AvatarCommandsBuildMode;
    this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_04,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      GameEventManager+AvatarCommandsBuildModeManager::
      GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                (this_01,(Action *)this_04,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_DeActivate
               (MVAvatarLocal_DeadMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((undefined1)toMode == AvatarRuntimeState__Enum_Playing) {
    this_00 = (this->fields)._.mvAvatar;
    if ((this_00 == (MVAvatarLocal *)0x0) ||
       (pAVar1 = (this_00->fields).interactableLocal, pAVar1 == (AvatarInteractable *)0x0))
    goto code_?;
    (*(code *)(pAVar1->klass->vtable).AddModifier.method)
              (pAVar1,0x11,0xffffffff,0,(pAVar1->klass->vtable).HasModifier.methodPtr);
    MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(this_00,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
    this_01 = (pGVar3->fields).AvatarCommandsBuildMode;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      GameEventManager+AvatarCommandsBuildModeManager::
      GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                (this_01,(Action *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_FixedUpdate
               (MVAvatarLocal_DeadMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  pMVar2 = (this->fields).inputController;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar3 = (pMVar1->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pAVar3,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)0x0) {
        fVar5 = pQVar4->y;
        fVar6 = pQVar4->z;
        fVar7 = pQVar4->w;
        (pMVar2->fields).rot.x = pQVar4->x;
        (pMVar2->fields).rot.y = fVar5;
        (pMVar2->fields).rot.z = fVar6;
        (pMVar2->fields).rot.w = fVar7;
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar3 = (pMVar1->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
          AvatarMotor::AvatarMotor_FixedUpdateFunction
                    (pAVar3,(IMotorAPI *)(this->fields).inputController,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_FrameUpdate
               (MVAvatarLocal_DeadMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

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
        (pSStack5 =
              AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(this_00,(MethodInfo *)0x0),
        pSStack5 != (ShieldBar *)0x0)))) {
      uStack6 = 0x14;
      func_?();
      (this->fields).setDeadCamDelayed = 0;
      return;
    }
  }
code_?:
  uStack6 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleDeathBriefingPause() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_HandleDeathBriefingPause_1
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    fVar2 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar1,(MethodInfo *)0x0);
    (this->fields).deadInterval = fVar2;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      MVLocalPlayer::MVLocalPlayer_set_RespawnTime
                (pMVar1,fVar2 + (this->fields).deadInterval,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleResetUIPause() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_HandleResetUIPause
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    fVar2 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar1,(MethodInfo *)0x0);
    (this->fields).deadInterval = fVar2;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      MVLocalPlayer::MVLocalPlayer_set_RespawnTime
                (pMVar1,fVar2 + (this->fields).deadInterval,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_OnEnterEditMode
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

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


/* Void RevivePlayer() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_RevivePlayer
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarRespawnHandler, pAVar2 == (AvatarRespawnHandler *)0x0)) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this._1_3_ = (undefined3)((uint)pAVar2 >> 8);
  if ((pAVar2->fields).shouldRespawnAsGhost == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar4 != (FlagDebriefingControl *)0x0) {
      pMVar1 = (pAVar2->fields).mvAvatar;
      if ((pFVar4->fields).IsInFlagDebriefing == 0) {
        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
        this = (MVAvatarLocal_DeadMode *)CONCAT31(this._1_3_,1);
      }
      else {
        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
        this = (MVAvatarLocal_DeadMode *)CONCAT31(this._1_3_,7);
      }
code_?:
      MVAvatarLocal::MVAvatarLocal_SetMode(pMVar1,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0);
      (pAVar2->fields).shouldRespawnAsGhost = 1;
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar4 != (FlagDebriefingControl *)0x0) {
      if ((pFVar4->fields).IsInFlagDebriefing != 0) {
        return;
      }
      pMVar1 = (pAVar2->fields).mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        this = (MVAvatarLocal_DeadMode *)CONCAT31(this._1_3_,9);
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVAvatarLocal+DeadMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor
               (MVAvatarLocal_DeadMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).deadInterval = 4.0;
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__MVAvatarLocal_DeadMode__AvatarInputControllerDead);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this_00->fields)._._._._.m_CachedPtr = (void *)pQVar1->x;
  (this_00->fields).state = (int32_t)fVar2;
  (this_00->fields).originalScale.x = fVar3;
  (this_00->fields).originalScale.y = fVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  (this->fields).inputController = (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 2;
  if (mvAvatar != (MVAvatarLocal *)0x0) {
    pAVar5 = (mvAvatar->fields).OnKilled;
    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar6,(Object *)this,
               MethodInfo__MVAvatarLocal__DeadMode__HandleDeathBriefingPause_int__int__MV__Common__PlayerKilledByType_
               ,
               MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
              );
    pAVar7 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    if (pAVar7 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
      if (pAVar7->klass == TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>) {
        pAVar5 = pAVar7;
      }
      pAStack8 =
           (Action__Class *)TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
      if (pAVar5 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0)
      goto code_?;
    }
    (mvAvatar->fields).OnKilled = pAVar5;
    pAStack8 = TypeInfo__System__Action;
    pAVar9 = (mvAvatar->fields).OnSuicide;
    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar6,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__HandleResetUIPause__,
               (MethodInfo *)0x0);
    pAVar10 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar9,(Delegate *)pUVar6,(MethodInfo *)0x0);
    pAVar9 = (Action *)0x0;
    if (pAVar10 != (Action *)0x0) {
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar10;
      }
      pAStack8 = TypeInfo__System__Action;
      if (pAVar9 == (Action *)0x0) goto code_?;
    }
    (mvAvatar->fields).OnSuicide = pAVar9;
    return;
  }
  func_?();
  pAStack8 = extraout_EDX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

