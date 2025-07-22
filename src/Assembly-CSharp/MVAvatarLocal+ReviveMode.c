
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_Activate
               (MVAvatarLocal_ReviveMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__);
    func_?(&StringLiteral_Dead);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  (this->fields).reviveElapsed = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).deadTime = fVar1;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  fVar1 = RTG::DirectionalLightGizmo3DLookAndFeel::
           DirectionalLightGizmo3DLookAndFeel_get_DefaultLightRayLength((MethodInfo *)pMVar2);
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
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  (pMVar2->fields).respawnTime = fVar1 + (this->fields).reviveInterval;
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
  (this->fields).setDeadCamDelayed = 0;
  if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
  bVar5 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar3,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 == (MainCameraManager *)0x0) goto code_?;
    pMVar6 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
    if (pMVar6 == (MVCameraBase *)0x0) goto code_?;
    iVar7 = (*(code *)(pMVar6->klass->vtable).__unknown.method)();
    if (iVar7 == 0x10) goto code_?;
    pMVar3 = (this->fields)._.mvAvatar;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0);
    if ((pAVar8 == (AvatarLocal *)0x0) ||
       ((pAVar8->fields).avatarCameraController == (IAvatarCameraController *)0x0))
    goto code_?;
    func_?();
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
    (this->fields).setDeadCamDelayed = 1;
  }
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar9 != (MVNetworkGame *)0x0) &&
     (pGVar10 = (pMVar9->fields).GameEventManager, pGVar10 != (GameEventManager *)0x0)) {
    this_01 = (pGVar10->fields).AvatarCommandsBuildMode;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_DeActivate
               (MVAvatarLocal_ReviveMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pGVar2 = (pMVar1->fields).GameEventManager, pGVar2 != (GameEventManager *)0x0)) {
    this_00 = (pGVar2->fields).AvatarCommandsBuildMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      GameEventManager+AvatarCommandsBuildModeManager::
      GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                (this_00,(Action *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
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
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pAVar3,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&puStack_5,this_00,(MethodInfo *)0x0);
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if (pMVar2 != (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *)0x0) {
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
       ((pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        pAVar6 != (AvatarLocal *)0x0 &&
        ((pAVar6->fields).avatarCameraController != (IAvatarCameraController *)0x0)))) {
      puStack7 = (undefined *)0x14;
      func_?();
      (this->fields).setDeadCamDelayed = 0;
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_OnEnterEditMode
               (MVAvatarLocal_ReviveMode *this,MethodInfo *method)

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
    func_?(6);
    return;
  }
  uVar4 = func_?(&pIStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVAvatarLocal+ReviveMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode__ctor
               (MVAvatarLocal_ReviveMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
    cRam_? = '\x01';
  }
  (this->fields).reviveInterval = 10.0;
  value = (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *)
          func_?(TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
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
  return;
}

