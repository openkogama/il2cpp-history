
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_Activate
               (MVAvatarLocal_DeadMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&StringLiteral_Dead);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
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
  (pMVar2->fields).respawnTime = fVar1 + (this->fields).deadInterval;
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) goto code_?;
    func_?();
  }
  pMVar3 = (this->fields)._.mvAvatar;
  if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
  bVar5 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar3,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_03 == (MainCameraManager *)0x0) goto code_?;
    pMVar6 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_03,(MethodInfo *)0x0);
    if (pMVar6 == (MVCameraBase *)0x0) goto code_?;
    iVar7 = (*(code *)(pMVar6->klass->vtable).__unknown.method)();
    if (iVar7 != 0x10) goto code_?;
    pMVar3 = (this->fields)._.mvAvatar;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0);
    if ((pAVar8 == (AvatarLocal *)0x0) ||
       ((pAVar8->fields).avatarCameraController == (IAvatarCameraController *)0x0))
    goto code_?;
    func_?();
    (this->fields).setDeadCamDelayed = 1;
  }
  else {
code_?:
    pMVar3 = (this->fields)._.mvAvatar;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0);
    if ((pAVar8 == (AvatarLocal *)0x0) ||
       ((pAVar8->fields).avatarCameraController == (IAvatarCameraController *)0x0))
    goto code_?;
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 != (MVLocalPlayer *)0x0) {
    MVLocalPlayer::MVLocalPlayer_DiedInRound(pMVar2,(MethodInfo *)0x0);
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar9 != (MVNetworkGame *)0x0) &&
       (pGVar10 = (pMVar9->fields).GameEventManager, pGVar10 != (GameEventManager *)0x0)) {
      this_01 = (pGVar10->fields).AvatarCommandsBuildMode;
      this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_04,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__,
                 (MethodInfo *)0x0);
      if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                  (this_01,(Action *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_DeActivate
               (MVAvatarLocal_DeadMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__);
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
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
    this_01 = (pGVar3->fields).AvatarCommandsBuildMode;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
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
  func_?();
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
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pAVar3,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
      fVar5 = pQVar4->y;
      fVar6 = pQVar4->z;
      fVar7 = pQVar4->w;
      if (pMVar2 != (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)0x0) {
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
    func_?(&TypeInfo__IAvatarCameraController);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
         (this_00 = (pAVar2->fields).smoothCharacterController,
         this_00 == (SmoothCharacterController *)0x0)) goto code_?;
      SmoothCharacterController::SmoothCharacterController_SmoothMove(this_00,(MethodInfo *)0x0);
    }
    if (((this->fields).setDeadCamDelayed == 0) ||
       (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       fVar4 - (this->fields).deadTime <= _UNK_?)) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       ((pAVar5 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        pAVar5 != (AvatarLocal *)0x0 &&
        ((pAVar5->fields).avatarCameraController != (IAvatarCameraController *)0x0)))) {
      puStack6 = (undefined *)0x14;
      func_?();
      (this->fields).setDeadCamDelayed = 0;
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleResetUIPause() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_HandleResetUIPause
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    fVar2 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar1,(MethodInfo *)0x0);
    (this->fields).deadInterval = fVar2;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      (pMVar1->fields).respawnTime = fVar2 + (this->fields).deadInterval;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_HasDied
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  if ((this->fields).deadTime == _UNK_?) {
    return 0;
  }
  return 1;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_OnEnterEditMode
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pIStack_2 = TypeInfo__IPlayModeUI;
    pIStack_3 = pIVar1;
    func_?(4);
    return;
  }
  uVar4 = func_?(&pIStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RevivePlayer() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_RevivePlayer
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarRespawnHandler, pAVar2 != (AvatarRespawnHandler *)0x0)) {
    this._1_3_ = (undefined3)((uint)pAVar2 >> 8);
    if ((pAVar2->fields).shouldRespawnAsGhost == 0) {
      pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar3 != (FlagDebriefingControl *)0x0) {
        pMVar1 = (pAVar2->fields).mvAvatar;
        if ((pFVar3->fields).IsInFlagDebriefing == 0) {
          if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
          this = (MVAvatarLocal_DeadMode *)CONCAT31(this._1_3_,1);
        }
        else {
          if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
          this = (MVAvatarLocal_DeadMode *)CONCAT31(this._1_3_,7);
        }
code_?:
        MVAvatarLocal::MVAvatarLocal_SetMode
                  (pMVar1,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0);
        (pAVar2->fields).shouldRespawnAsGhost = 1;
        return;
      }
    }
    else {
      pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar3 != (FlagDebriefingControl *)0x0) {
        if ((pFVar3->fields).IsInFlagDebriefing != 0) {
          return;
        }
        pMVar1 = (pAVar2->fields).mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          this = (MVAvatarLocal_DeadMode *)CONCAT31(this._1_3_,9);
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVAvatarLocal+DeadMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor
               (MVAvatarLocal_DeadMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVAvatarLocal_DeadMode__AvatarInputControllerDead);
    func_?(&
                    MethodInfo__MVAvatarLocal__DeadMode__HandleDeathBriefingPause_int__int__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__MVAvatarLocal__DeadMode__HandleResetUIPause__);
    cRam_? = '\x01';
  }
  (this->fields).deadInterval = 4.0;
  value = (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)
          func_?(TypeInfo__MVAvatarLocal_DeadMode__AvatarInputControllerDead);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (value->fields).rot.x = (pQVar1->identityQuaternion).x;
  (value->fields).rot.y = fVar2;
  (value->fields).rot.z = fVar3;
  (value->fields).rot.w = fVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  method_00 = (MethodInfo *)&(this->fields).inputController;
  (this->fields).inputController = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 2;
  if (mvAvatar == (MVAvatarLocal *)0x0) {
    func_?();
  }
  else {
    pAVar5 = (mvAvatar->fields).OnKilled;
    this_00 = (Action_3_Int32_Int32_ByteEnum_ *)
              func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
              (this_00,(Object *)this,
               MethodInfo__MVAvatarLocal__DeadMode__HandleDeathBriefingPause_int__int__MV__Common__PlayerKilledByType_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      (mvAvatar->fields).OnKilled = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)func_?();
      if (pAVar5 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0)
      goto code_?;
      (mvAvatar->fields).OnKilled = pAVar5;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
    }
    func_?();
    pAVar8 = (mvAvatar->fields).OnSuicide;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__HandleResetUIPause__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      (mvAvatar->fields).OnSuicide = (Action *)0x0;
      func_?();
      return;
    }
    pAVar9 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar8;
    }
    if (pAVar9 != (Action *)0x0) {
      (mvAvatar->fields).OnSuicide = pAVar9;
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

