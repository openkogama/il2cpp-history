
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_Activate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,AvatarRuntimeState__Enum fromMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IMotorAPI);
    func_?(&
                    MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
                   );
    func_?(&
                    MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                   );
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar2 = (this->fields).avatarInputController;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 == (Transform *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffec,pTVar3,(MethodInfo *)0x0);
    if (pIVar2 == (IAvatarInputController *)0x0) goto code_?;
    func_?(3,TypeInfo__IMotorAPI,pIVar2,pQVar4->x);
    pTVar3 = MVAvatarLocal_TimeAttackFlagDebriefingMode_GetClosestTimeAttackFlag
                       (this,(MethodInfo *)0x0);
    ppTVar5 = &(this->fields).flagTransform;
    *ppTVar5 = pTVar3;
    func_?(ppTVar5,pTVar3);
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar6 = (pMVar1->fields).avatarEquipable, pAVar6 == (AvatarEquipable *)0x0))
    goto code_?;
    (*(code *)(pAVar6->klass->vtable).Unequip.method)();
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                        ((MethodInfo *)0x0);
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    bVar8 = (pFVar7->fields).IsInFlagDebriefing;
    (this->fields).isInDebriefing = bVar8;
    if (bVar8 != 0) {
      pTVar3 = *ppTVar5;
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint(pTVar3,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar9 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar9->fields).gameStatCounterManager;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar10 != (MVLocalPlayer *)0x0) {
          team = (pMVar10->fields)._._Team_k__BackingField;
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if ((pMVar10 != (MVLocalPlayer *)0x0) && (this_00 != (GameStatCounterManager *)0x0)) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                      (this_00,GameStatCounterType__Enum_TimeAttackFlag,team,
                       (pMVar10->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              x = (pMVar1->fields).vehicleRigidBody;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                pMVar1 = (this->fields)._.mvAvatar;
                if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
              }
              pMVar1 = (this->fields)._.mvAvatar;
              if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                 (this_01 = (pMVar1->fields).pickupOwner, this_01 != (AvatarPickupOwner *)0x0)) {
                MVPickupOwner::MVPickupOwner_HandleFire
                          ((MVPickupOwner *)this_01,0,(pMVar1->fields)._.IsFiring,(MethodInfo *)0x0)
                ;
                pMVar1 = (this->fields)._.mvAvatar;
                if (pMVar1 != (MVAvatarLocal *)0x0) {
                  pAVar11 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
                  if ((pAVar11 != (AvatarLocal *)0x0) &&
                     ((pAVar11->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
                    func_?();
                    pMVar1 = (this->fields)._.mvAvatar;
                    (this->fields).isInDebriefing = 1;
                    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                       ((pAVar12 = (pMVar1->fields)._.avatar, pAVar12 != (Avatar *)0x0 &&
                        (this_02 = (pAVar12->fields).avatarFader, this_02 != (AvatarFader *)0x0)))) {
                      AvatarFader::AvatarFader_SetTransparency(this_02,1.0,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar11 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
    if ((pAVar11 == (AvatarLocal *)0x0) ||
       ((pAVar11->fields).avatarCameraController == (IAvatarCameraController *)0x0))
    goto code_?;
    func_?(4);
code_?:
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                        ((MethodInfo *)0x0);
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    a = (pFVar7->fields).OnFlagDebriefing;
    this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_03,(Object *)this,
               MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
               ,(MethodInfo *)0x0);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar13 == (Delegate *)0x0) {
      (pFVar7->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
      pAVar14 = (pFVar7->fields).OnFlagDebriefingEnd;
      this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_04,(Object *)this,
                 MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                 ,(MethodInfo *)0x0);
      pAVar14 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar14,(Delegate *)this_04,(MethodInfo *)0x0);
      if (pAVar14 == (Action *)0x0) {
        (pFVar7->fields).OnFlagDebriefingEnd = (Action *)0x0;
        func_?();
        return;
      }
      pAVar15 = (Action *)0x0;
      if (pAVar14->klass == TypeInfo__System__Action) {
        pAVar15 = pAVar14;
      }
      if (pAVar15 != (Action *)0x0) {
        (pFVar7->fields).OnFlagDebriefingEnd = pAVar15;
        pAVar15 = (Action *)0x0;
        if (pAVar14->klass == TypeInfo__System__Action) {
          pAVar15 = pAVar14;
        }
        if (pAVar15 != (Action *)0x0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    iVar16 = func_?();
    if (iVar16 == 0) goto code_?;
    _UNK_? = iVar16;
    iVar16 = func_?();
    if (iVar16 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
MVAvatarLocal_TimeAttackFlagDebriefingMode_CreateInputController
          (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_CharacterEditor) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)func_?(TypeInfo__AvatarInputControllerTouch);
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      return (IAvatarInputController *)this_00;
    }
  }
  this_01 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor(this_01,(MethodInfo *)0x0);
  return (IAvatarInputController *)this_01;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_DeActivate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,AvatarRuntimeState__Enum toMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__AvatarRuntimeState);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
                   );
    func_?(&
                    MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                   );
    func_?(&StringLiteral_DeActivate_);
    func_?(&StringLiteral_Time_attack_flag_debriefing_mode);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Time_attack_flag_debriefing_mode,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  IStack_2.m_value =
       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_DeActivate_,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.mvAvatar;
  if ((pMVar3 == (MVAvatarLocal *)0x0) ||
     (pAVar4 = (pMVar3->fields).interactableLocal, pAVar4 == (AvatarInteractable *)0x0)) {
code_?:
    func_?();
  }
  else {
    pAVar5 = pAVar4->klass;
    pAStack6 = (Action_1_Int32___Class *)(pAVar5->vtable).HasModifier.methodPtr;
    (*(code *)(pAVar5->vtable).AddModifier.method)();
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    pAStack6 = TypeInfo__System__Action<int>;
    pAVar8 = (pFVar7->fields).OnFlagDebriefing;
    ppAVar9 = &(pFVar7->fields).OnFlagDebriefing;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)&UNK_?,
               MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
               ,(MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      *ppAVar9 = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar8 = (Action_1_Int32_ *)func_?();
      if (pAVar8 == (Action_1_Int32_ *)0x0) goto code_?;
      *ppAVar9 = pAVar8;
      iVar11 = func_?();
      if (iVar11 == 0) goto code_?;
    }
    func_?();
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    pAStack6 = (Action_1_Int32___Class *)TypeInfo__System__Action;
    pAVar12 = (pFVar7->fields).OnFlagDebriefingEnd;
    ppAVar13 = &(pFVar7->fields).OnFlagDebriefingEnd;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)&UNK_?,
               MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
               ,(MethodInfo *)0x0);
    pAVar12 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar12,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar12 == (Action *)0x0) {
      *ppAVar13 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar14 = (Action *)0x0;
    if (pAVar12->klass == TypeInfo__System__Action) {
      pAVar14 = pAVar12;
    }
    if (pAVar14 != (Action *)0x0) {
      *ppAVar13 = pAVar14;
      pAVar14 = (Action *)0x0;
      if (pAVar12->klass == TypeInfo__System__Action) {
        pAVar14 = pAVar12;
      }
      if (pAVar14 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DieByFalling() */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_DieByFalling
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      this = (MVAvatarLocal_TimeAttackFlagDebriefingMode *)&TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField != 0)
       && (MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
          MVar3 == MVGameMode__Enum_Edit)) {
      return;
    }
    pMVar4 = (this->fields)._.mvAvatar;
    if ((pMVar4 != (MVAvatarLocal *)0x0) &&
       (pMVar5 = (pMVar4->fields)._.Health, pMVar5 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)
       ) {
      (*(code *)(pMVar5->klass->vtable).set_Value.method)(pMVar5,0,pMVar5->klass[1]._0.image);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar6 != (MVLocalPlayer *)0x0)) {
        avatarId = (pMVar6->fields)._._ActorNr_k__BackingField;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 != (MVNetworkGame *)0x0) &&
            (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
            pMVar6 != (MVLocalPlayer *)0x0)) &&
           (gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                    (avatarId,(pMVar6->fields)._._ActorNr_k__BackingField,
                                     PlayerKilledByType__Enum_FallOffWorld,(MethodInfo *)0x0),
           this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                    (this_00,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_FixedUpdate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,IInputToPlayerMovement *movementMap
               ,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarInputController);
    func_?();
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._.mvAvatar;
  if (((pMVar2 != (MVAvatarLocal *)0x0) &&
      (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_5,pTVar3,(MethodInfo *)0x0);
    fVar6 = pVVar4->y;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
      uVar8 = (pMVar7->fields).worldBounds.m_Extents.y;
      if (fVar6 < ((pMVar7->fields).worldBounds.m_Center.y - (float)uVar8) - _UNK_?) {
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
        bVar10 = MVNetworkGame::MVNetworkGame_get_IsPlaying(pMVar9,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField
               == 0) ||
             (MVar11 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
             MVar11 != MVGameMode__Enum_Edit)) {
            pMVar2 = (this->fields)._.mvAvatar;
            if ((pMVar2 == (MVAvatarLocal *)0x0) ||
               (pMVar12 = (pMVar2->fields)._.Health,
               pMVar12 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
            (*(code *)(pMVar12->klass->vtable).set_Value.method)
                      (pMVar12,0,pMVar12->klass[1]._0.image);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 == (MVNetworkGame *)0x0) ||
               (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
               pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
            avatarId = (pMVar13->fields)._._ActorNr_k__BackingField;
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 == (MVNetworkGame *)0x0) ||
               ((pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
                pMVar13 == (MVLocalPlayer *)0x0 ||
                (gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                         (avatarId,(pMVar13->fields)._._ActorNr_k__BackingField,
                                          PlayerKilledByType__Enum_FallOffWorld,(MethodInfo *)0x0),
                this_01 == (MVNetworkGame_OperationRequests *)0x0)))) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (this_01,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
          }
        }
      }
      pMVar2 = (this->fields)._.mvAvatar;
      if ((pMVar2 != (MVAvatarLocal *)0x0) &&
         (pAVar14 = (pMVar2->fields).avatarMotor, pAVar14 != (AvatarMotor *)0x0)) {
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                           ((Behaviour *)pAVar14,(MethodInfo *)0x0);
        pMVar2 = (this->fields)._.mvAvatar;
        if (bVar10 == 0) {
          if ((((pMVar2 != (MVAvatarLocal *)0x0) &&
               (pAVar14 = (pMVar2->fields).avatarMotor, pAVar14 != (AvatarMotor *)0x0)) &&
              (pSVar15 = (pAVar14->fields).smoothCharacterController,
              pSVar15 != (SmoothCharacterController *)0x0)) &&
             (pMVar16 = (pSVar15->fields).controller, pMVar16 != (MvCharacterController *)0x0)) {
            uVar17 = (pMVar16->fields)._Velocity_k__BackingField.x;
            uVar18 = (pMVar16->fields)._Velocity_k__BackingField.y;
            VStack_5.z = (pMVar16->fields)._Velocity_k__BackingField.z;
            VStack_5.x = (float)uVar17;
            VStack_5.y = (float)uVar18;
            fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            (pAVar14->fields).velocityPrevFrame.x = VStack_5.x / fVar6;
            (pAVar14->fields).velocityPrevFrame.y = VStack_5.y / fVar6;
            (pAVar14->fields).velocityPrevFrame.z = VStack_5.z / fVar6;
            return;
          }
        }
        else if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                (pAVar19 = (pMVar2->fields).interactableLocal, pAVar19 != (AvatarInteractable *)0x0
                )) {
          (*(code *)(pAVar19->klass->vtable).AddModifier.method)
                    (pAVar19,0x13,0xffffffff,0,(pAVar19->klass->vtable).HasModifier.methodPtr);
          if ((this->fields).isInDebriefing == 0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
          }
          else {
            pTVar3 = (this->fields).flagTransform;
            if (pTVar3 == (Transform *)0x0) goto code_?;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_21,pTVar3,(MethodInfo *)0x0);
            pMVar2 = (this->fields)._.mvAvatar;
            uVar22 = pVVar4->x;
            uVar23 = pVVar4->y;
            VStack_5.z = pVVar4->z;
            VStack_5.x = (float)uVar22;
            VStack_5.y = (float)uVar23;
            if (pMVar2 == (MVAvatarLocal *)0x0) goto code_?;
            puVar24 = (undefined8 *)
                      (*(code *)(pMVar2->klass->vtable).get_Position.method)
                                (auStack_25,pMVar2,(pMVar2->klass->vtable).set_Position.methodPtr)
            ;
            fStack_26 = (float)*puVar24;
            uStack_27 = (undefined4)((ulonglong)*puVar24 >> 0x20);
            VStack_5.x = VStack_5.x - fStack_26;
            VStack_5.z = VStack_5.z - *(float *)(puVar24 + 1);
            VStack_5.y = 0.0;
            fVar28 = VStack_5.x * VStack_5.x + 0.0 + VStack_5.z * VStack_5.z;
            fStack_29 = VStack_5.z;
            if (fVar28 < _UNK_?) {
              direction_01.y = 0.0;
              direction_01.x = VStack_5.x;
              direction_01.z = VStack_5.z;
              pVVar20 = (Vector3__StaticFields *)
                        MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                                  ((Vector3 *)&stack0xffffffac,this,direction_01,100.0,
                                   (MethodInfo *)0x0);
            }
            else if (_UNK_? < fVar28) {
              direction_00.y = 0.0;
              direction_00.x = VStack_5.x;
              direction_00.z = VStack_5.z;
              pVVar20 = (Vector3__StaticFields *)
                        MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                                  (&VStack_30,this,direction_00,20.0,(MethodInfo *)0x0);
            }
            else {
              direction.y = 0.0;
              direction.x = VStack_5.x;
              direction.z = VStack_5.z;
              pVVar20 = (Vector3__StaticFields *)
                        MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                                  (&VStack_5,this,direction,80.0,(MethodInfo *)0x0);
            }
          }
          uVar31 = (pVVar20->zeroVector).x;
          uVar32 = (pVVar20->zeroVector).y;
          fVar28 = (pVVar20->zeroVector).z;
          pIVar33 = (this->fields).avatarInputController;
          uStack_27 = uVar31;
          fStack_29 = (float)uVar32;
          if (movementMap != (IInputToPlayerMovement *)0x0) {
            uVar34 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
            uStack_35 = CONCAT31(uStack_35._1_3_,uVar34);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar36 = (pVVar20->zeroVector).x;
            uVar37 = (pVVar20->zeroVector).y;
            fStack_38 = (pVVar20->zeroVector).z;
            pMVar2 = (this->fields)._.mvAvatar;
            VStack_5.y = (float)uVar36;
            VStack_5.z = (float)uVar37;
            if (pMVar2 != (MVAvatarLocal *)0x0) {
              bVar10 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode
                                 (pMVar2,(MethodInfo *)0x0);
              this = (MVAvatarLocal_TimeAttackFlagDebriefingMode *)
                     CONCAT31((int3)((uint)fVar6 >> 8),bVar10);
              pMVar2 = (pMVar1->fields)._.mvAvatar;
              if ((pMVar2 != (MVAvatarLocal *)0x0) && (pIVar33 != (IAvatarInputController *)0x0)) {
                func_?(0,TypeInfo__IAvatarInputController,pIVar33,
                                CONCAT44(fStack_29,uStack_27),fVar28,uStack_35,0,
                                CONCAT44(VStack_5.z,VStack_5.y),fStack_38,this,
                                (pMVar2->fields).
                                _ForceRotateAvatarToFiringDirection_k__BackingField);
                pMVar2 = (pMVar1->fields)._.mvAvatar;
                if ((pMVar2 != (MVAvatarLocal *)0x0) &&
                   (pAVar14 = (pMVar2->fields).avatarMotor, pAVar14 != (AvatarMotor *)0x0)) {
                  AvatarMotor::AvatarMotor_FixedUpdateFunction
                            (pAVar14,(IMotorAPI *)(pMVar1->fields).avatarInputController,
                             (MethodInfo *)0x0);
                  if ((pMVar1->fields).isInDebriefing == 0) {
                    return;
                  }
                  pMVar2 = (pMVar1->fields)._.mvAvatar;
                  if (((pMVar2 != (MVAvatarLocal *)0x0) &&
                      (pMVar39 = (pMVar2->fields)._.body, pMVar39 != (MVBody *)0x0)) &&
                     (pBVar40 = MVBody::MVBody_get_Animation(pMVar39,(MethodInfo *)0x0),
                     pBVar40 != (BoneAnimation *)0x0)) {
                    bVar10 = BoneAnimation::BoneAnimation_IsPlaying
                                       (pBVar40,StringLiteral_Jump,(MethodInfo *)0x0);
                    if (bVar10 != 0) {
                      return;
                    }
                    pMVar2 = (pMVar1->fields)._.mvAvatar;
                    if (pMVar2 != (MVAvatarLocal *)0x0) {
                      MVAvatarLocal::MVAvatarLocal_SetAnimation
                                (pMVar2,StringLiteral_Idle,(MethodInfo *)0x0);
                      pMVar2 = (pMVar1->fields)._.mvAvatar;
                      if (pMVar2 != (MVAvatarLocal *)0x0) {
                        MVAvatarLocal::MVAvatarLocal_SetAnimation
                                  (pMVar2,StringLiteral_Jump,(MethodInfo *)0x0);
                        pMVar2 = (pMVar1->fields)._.mvAvatar;
                        if (((pMVar2 != (MVAvatarLocal *)0x0) &&
                            (pMVar39 = (pMVar2->fields)._.body, pMVar39 != (MVBody *)0x0)) &&
                           (pBVar40 = MVBody::MVBody_get_Animation(pMVar39,(MethodInfo *)0x0),
                           pBVar40 != (BoneAnimation *)0x0)) {
                          BoneAnimation::BoneAnimation_Play
                                    (pBVar40,StringLiteral_Jump,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_FrameUpdate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,InputToInGameAction *interactionMap
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IMotorAPI);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
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
  if ((this->fields).isInDebriefing == 0) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar4 == (MainCameraManager *)0x0) ||
       (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0),
       pMVar5 == (MVCameraBase *)0x0)) goto code_?;
    iVar6 = (*(code *)(pMVar5->klass->vtable).__unknown.method)
                       (pMVar5,(pMVar5->klass->vtable).Awake.methodPtr);
    if (iVar6 != 0x12) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (pAVar7 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
          pAVar7 == (AvatarLocal *)0x0)) ||
         (pIVar8 = (pAVar7->fields).avatarCameraController,
         pIVar8 == (IAvatarCameraController *)0x0)) goto code_?;
      func_?(4,TypeInfo__IAvatarCameraController,pIVar8,0x12);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar4 == (MainCameraManager *)0x0) ||
         (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera
                              (pMVar4,(MethodInfo *)0x0), pMVar5 == (MVCameraBase *)0x0))
      goto code_?;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar5,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         ((this_01 = (pMVar1->fields)._._._.transform, this_01 == (Transform *)0x0 ||
          (pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)auStack_11,this_01,(MethodInfo *)0x0),
          pTVar9 == (Transform *)0x0)))) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar9,*pQVar10,(MethodInfo *)0x0);
    }
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar4 == (MainCameraManager *)0x0) ||
     (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0),
     pMVar5 == (MVCameraBase *)0x0)) goto code_?;
  iVar6 = (*(code *)(pMVar5->klass->vtable).__unknown.method)
                     (pMVar5,(pMVar5->klass->vtable).Awake.methodPtr);
  if (iVar6 == 0x11) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar4 == (MainCameraManager *)0x0) ||
       (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0),
       pMVar5 == (MVCameraBase *)0x0)) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar5,(MethodInfo *)0x0);
    uStack_12 = 0;
    fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
    fStack_13 = fStack_13 * _UNK_?;
    uStack_14 = 0;
    if (pTVar9 == (Transform *)0x0) goto code_?;
    eulers.y = fStack_13;
    eulers.x = (float)uStack_12;
    eulers.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
              (pTVar9,eulers,(MethodInfo *)0x0);
  }
  if ((this->fields).isInDebriefing != 0) {
    return;
  }
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar15 = (this->fields).avatarInputController;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pTVar9 = (pMVar1->fields)._._._.transform, pTVar9 != (Transform *)0x0)) &&
     (pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)auStack_11,pTVar9,(MethodInfo *)0x0),
     pIVar15 != (IAvatarInputController *)0x0)) {
    func_?(3,TypeInfo__IMotorAPI,pIVar15,pQVar10->x,pQVar10->y,pQVar10->z,pQVar10->w);
    pMVar1 = (this->fields)._.mvAvatar;
    pIVar15 = (this->fields).avatarInputController;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pTVar9 = (pMVar1->fields)._._._.transform, pTVar9 != (Transform *)0x0)) {
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)(auStack_11 + 4),pTVar9,(MethodInfo *)0x0);
      uVar17._0_4_ = pVVar16->x;
      uVar17._4_4_ = pVVar16->y;
      fVar18 = pVVar16->z;
      fStack_13 = (float)(undefined4)uVar17;
      uStack_14 = uVar17._4_4_;
      if (pIVar15 != (IAvatarInputController *)0x0) {
        pIVar19 = pIVar15->klass;
        uVar20 = 0;
        uVar21._0_1_ = (pIVar19->_1).rank;
        uVar21._1_1_ = (pIVar19->_1).minimumAlignment;
        if (uVar21 != 0) {
          do {
            if (pIVar19->interfaceOffsets[uVar20].interfaceType == (Il2CppClass *)TypeInfo__IMotorAPI
               ) {
              ppvVar22 = &pIVar15->klass[1]._0.gc_desc + pIVar19->interfaceOffsets[uVar20].offset * 2;
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        ppvVar22 = (void **)func_?();
        uVar17 = CONCAT44(uStack_14,fStack_13);
code_?:
        (**ppvVar22)(pIVar15,uVar17,fVar18,ppvVar22[1]);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Vector3 GetAvatarMoveDirection() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
          MVAvatarLocal_TimeAttackFlagDebriefingMode_GetAvatarMoveDirection
                    (Vector3 *__return_storage_ptr__,
                    MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if ((this->fields).isInDebriefing == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    __return_storage_ptr__->x = (pVVar1->zeroVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  this_00 = (this->fields).flagTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,this_00,(MethodInfo *)0x0);
    pMVar6 = (this->fields)._.mvAvatar;
    uStack_7._0_4_ = pVVar4->x;
    uStack_7._4_4_ = pVVar4->y;
    fStack_8 = pVVar4->z;
    if (pMVar6 != (MVAvatarLocal *)0x0) {
      puVar9 = (undefined8 *)
               (*(code *)(pMVar6->klass->vtable).get_Position.method)(&stack0xffffffd8);
      VStack_5._0_8_ = *puVar9;
      fVar2 = (float)uStack_7 - VStack_5.x;
      VStack_5.z = fStack_8 - *(float *)(puVar9 + 1);
      uStack_7 = (ulonglong)(uint)fVar2;
      fVar3 = fVar2 * fVar2 + 0.0 + VStack_5.z * VStack_5.z;
      fStack_8 = VStack_5.z;
      if (fVar3 < _UNK_?) {
        direction_01.y = 0.0;
        direction_01.x = fVar2;
        direction_01.z = VStack_5.z;
        pVVar4 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                           ((Vector3 *)&stack0xffffffd8,this,direction_01,100.0,(MethodInfo *)0x0);
        fVar2 = pVVar4->y;
        fVar3 = pVVar4->z;
        __return_storage_ptr__->x = pVVar4->x;
        __return_storage_ptr__->y = fVar2;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
      if (fVar3 <= _UNK_?) {
        direction.y = 0.0;
        direction.x = fVar2;
        direction.z = VStack_5.z;
        pVVar4 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                           ((Vector3 *)&stack0xffffffd8,this,direction,80.0,(MethodInfo *)0x0);
        fVar2 = pVVar4->y;
        fVar3 = pVVar4->z;
        __return_storage_ptr__->x = pVVar4->x;
        __return_storage_ptr__->y = fVar2;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
      direction_00.y = 0.0;
      direction_00.x = fVar2;
      direction_00.z = VStack_5.z;
      pVVar4 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                         ((Vector3 *)&stack0xffffffd8,this,direction_00,20.0,(MethodInfo *)0x0);
      fVar2 = pVVar4->y;
      fVar3 = pVVar4->z;
      __return_storage_ptr__->x = pVVar4->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar10)();
  return pVVar4;
}


/* Transform GetClosestTimeAttackFlag() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
MVAvatarLocal_TimeAttackFlagDebriefingMode_GetClosestTimeAttackFlag
          (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)0x0;
  fStack_2 = _UNK_?;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_01->fields)._size == 0) goto code_?;
      pMVar3 = (this->fields)._.mvAvatar;
      if (pMVar3 != (MVAvatarLocal *)0x0) {
        puVar4 = (undefined8 *)
                 (*(code *)(pMVar3->klass->vtable).get_Position.method)(&uStack_5,pMVar3);
        index = 0;
        uStack_6 = *puVar4;
        fStack_7 = *(float *)(puVar4 + 1);
        do {
          if ((this_01->fields)._size <= index) {
            return pTVar1;
          }
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
          uStack_5 = CONCAT44(uStack_5._4_4_,*(undefined4 *)(*(int *)RVar8 + 0xe4));
          puVar4 = (undefined8 *)(**(code **)(*(int *)RVar8 + 0xe0))();
          uVar9 = *puVar4;
          fStack_10 = *(float *)(puVar4 + 1);
          uStack_5._0_4_ = (float)uVar9;
          uStack_5._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
          fVar11 = (uStack_6._4_4_ - uStack_5._4_4_) * (uStack_6._4_4_ - uStack_5._4_4_) +
                  ((float)uStack_6 - (float)uStack_5) * ((float)uStack_6 - (float)uStack_5) +
                  (fStack_7 - fStack_10) * (fStack_7 - fStack_10);
          uStack_5 = uVar9;
          if (fVar11 < fStack_2) {
            fStack_2 = fVar11;
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
            if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
            pTVar1 = *(Transform **)((int)RVar8 + 0x90);
          }
          index = index + 1;
        } while( true );
      }
    }
  }
  func_?();
code_?:
  uVar12 = func_?();
  this_02 = (Exception *)func_?(uVar12);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Entered_TimeAttackFlagDebriefing);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,method_00);
  uVar12 = func_?();
  uStack_5 = CONCAT44(uStack_5._4_4_,uVar12);
  func_?();
  pcVar13 = (code *)swi(3);
  pTVar1 = (Transform *)(*pcVar13)();
  return pTVar1;
}


/* Void OnEnterTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_OnEnterTimeAttackFlagDebriefing
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    x = (pMVar1->fields).vehicleRigidBody;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (this_00 = (pMVar1->fields).pickupOwner, this_00 != (AvatarPickupOwner *)0x0)) {
      MVPickupOwner::MVPickupOwner_HandleFire
                ((MVPickupOwner *)this_00,0,(pMVar1->fields)._.IsFiring,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        pAVar3 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
        if ((pAVar3 != (AvatarLocal *)0x0) &&
           ((pAVar3->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
          func_?(4);
          pMVar1 = (this->fields)._.mvAvatar;
          (this->fields).isInDebriefing = 1;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             ((pAVar4 = (pMVar1->fields)._.avatar, pAVar4 != (Avatar *)0x0 &&
              (this_01 = (pAVar4->fields).avatarFader, this_01 != (AvatarFader *)0x0)))) {
            AvatarFader::AvatarFader_SetTransparency(this_01,1.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnExitTimeAttackFlagDebriefing() */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_OnExitTimeAttackFlagDebriefing
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IMotorAPI);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar2 = (this->fields).avatarInputController;
  (this->fields).isInDebriefing = 0;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 != (Transform *)0x0)) {
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_5,pTVar3,(MethodInfo *)0x0);
    if (pIVar2 != (IAvatarInputController *)0x0) {
      QStack_5.x = pQVar4->w;
      func_?(3,TypeInfo__IMotorAPI,pIVar2,pQVar4->x,pQVar4->y,pQVar4->z);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar6 != (MainCameraManager *)0x0) {
        pMVar7 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar6,(MethodInfo *)0x0);
        if (pMVar7 != (MVCameraBase *)0x0) {
          iVar8 = (*(code *)(pMVar7->klass->vtable).__unknown.method)
                            (pMVar7,(pMVar7->klass->vtable).Awake.methodPtr);
          pMVar1 = (this->fields)._.mvAvatar;
          if (iVar8 == 0x11) {
            if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
            pAVar9 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if ((pAVar9 == (AvatarLocal *)0x0) ||
               (pIVar10 = (pAVar9->fields).avatarCameraController,
               pIVar10 == (IAvatarCameraController *)0x0)) goto code_?;
            uVar11 = 6;
          }
          else {
            if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
            pAVar9 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if ((pAVar9 == (AvatarLocal *)0x0) ||
               (pIVar10 = (pAVar9->fields).avatarCameraController,
               pIVar10 == (IAvatarCameraController *)0x0)) goto code_?;
            uVar11 = 0;
          }
          func_?(4,TypeInfo__IAvatarCameraController,pIVar10,uVar11);
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if ((pMVar6 != (MainCameraManager *)0x0) &&
             (this_00 = (pMVar6->fields).mainCamera, this_00 != (Camera *)0x0)) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CullingApiWrapper);
            }
            CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                      (pTVar3,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._.mvAvatar;
              if (pMVar1 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar1,(MethodInfo *)0x0);
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if (pMVar6 != (MainCameraManager *)0x0) {
                  pMVar7 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                     (pMVar6,(MethodInfo *)0x0);
                  if (pMVar7 != (MVCameraBase *)0x0) {
                    (*(code *)(pMVar7->klass->vtable).Reset.method)
                              (pMVar7,(pMVar7->klass->vtable).FocusOnObject.methodPtr);
                    pMVar1 = (this->fields)._.mvAvatar;
                    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                       (this_01 = (pMVar1->fields)._.body, this_01 != (MVBody *)0x0)) {
                      this_02 = MVBody::MVBody_get_Animation(this_01,(MethodInfo *)0x0);
                      if (this_02 != (BoneAnimation *)0x0) {
                        BoneAnimation::BoneAnimation_Play
                                  (this_02,StringLiteral_Idle,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 RotateDirection(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
          MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                    (Vector3 *__return_storage_ptr__,
                    MVAvatarLocal_TimeAttackFlagDebriefingMode *this,Vector3 direction,float angle,
                    MethodInfo *method)

{
  if ((this->fields).lastAngle != angle) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).directionInterpolationStartTime = fVar1;
  }
  (this->fields).lastAngle = angle;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  auVar2._4_8_ = 0;
  auVar2._0_4_ = angle * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
            ((Quaternion *)&stack0xffffffdc,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    QStack_3.w = (float)&UNK_?;
    this_01 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVCameraBase *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffdc,this_02,(MethodInfo *)0x0);
        fVar5 = pQVar4->x;
        fVar6 = pQVar4->y;
        fVar7 = pQVar4->z;
        fVar8 = pQVar4->w;
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                           (&QStack_3,*pQVar4,(MethodInfo *)0x0);
        fVar1 = pQVar4->y;
        fVar9 = pQVar4->z;
        fVar10 = pQVar4->w;
        fVar11 = (fVar8 * pQVar4->x + fVar5 * fVar10 + fVar7 * fVar1) - fVar6 * fVar9;
        fVar12 = (fVar8 * fVar1 + fVar6 * fVar10 + fVar5 * fVar9) - fVar7 * pQVar4->x;
        fVar13 = (fVar8 * fVar9 + fVar7 * fVar10 + fVar6 * pQVar4->x) - fVar5 * fVar1;
        __return_storage_ptr__ =
             (Vector3 *)
             (((fVar8 * fVar10 - fVar5 * pQVar4->x) - fVar6 * fVar1) - fVar7 * fVar9);
        fVar1 = (this->fields).currentDirectionRotation.x;
        fVar9 = (this->fields).currentDirectionRotation.y;
        fVar10 = (this->fields).currentDirectionRotation.z;
        fVar5 = (this->fields).currentDirectionRotation.w;
        if (cRam_? == '\0') {
          direction.z = (float)&TypeInfo__UnityEngine__Quaternion;
          direction.y = (float)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
        if (fVar9 * (pQVar14->identityQuaternion).y + fVar1 * (pQVar14->identityQuaternion).x +
            fVar10 * (pQVar14->identityQuaternion).z + fVar5 * (pQVar14->identityQuaternion).w <=
            _UNK_?) {
          fVar1 = (this->fields).currentDirectionRotation.x;
          fVar9 = (this->fields).currentDirectionRotation.y;
          fVar10 = (this->fields).currentDirectionRotation.z;
          fVar5 = (this->fields).currentDirectionRotation.w;
          direction.x = fVar13;
          direction.y = (float)__return_storage_ptr__;
          fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          direction.z = (fVar13 - (this->fields).directionInterpolationStartTime) / _UNK_?;
          QVar15.y = fVar12;
          QVar15.x = fVar11;
          QVar15.z = direction.x;
          QVar15.w = direction.y;
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                             (&QStack_3,
                              (Quaternion)CONCAT412(fVar5,CONCAT48(fVar10,CONCAT44(fVar9,fVar1))),
                              QVar15,direction.z,(MethodInfo *)0x0);
          fVar11 = pQVar4->x;
          fVar12 = pQVar4->y;
          fVar13 = pQVar4->z;
          __return_storage_ptr__ = (Vector3 *)pQVar4->w;
        }
        (this->fields).currentDirectionRotation.x = fVar11;
        (this->fields).currentDirectionRotation.y = fVar12;
        (this->fields).currentDirectionRotation.z = fVar13;
        (this->fields).currentDirectionRotation.w = (float)__return_storage_ptr__;
        fVar5 = fVar13;
        fVar16 = fVar12;
        fVar17 = fVar11;
        QVar15._0_8_ = CONCAT44(fVar16,fVar17);
        QVar15 = (Quaternion)CONCAT88(QVar15._0_8_,QVar15._0_8_);
        point.y = direction.y;
        point.x = direction.x;
        point.z = direction.z;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&stack0xfffffff0,QVar15,point,(MethodInfo *)0x0);
        fVar9 = pVVar18->y;
        fVar1 = pVVar18->z;
        __return_storage_ptr__->x = pVVar18->x;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar1;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  pVVar18 = (Vector3 *)(*pcVar19)();
  return pVVar18;
}


/* MVAvatarLocal+TimeAttackFlagDebriefingMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode__ctor
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MVAvatarLocal *mvAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).currentDirectionRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).currentDirectionRotation.y = fVar2;
  (this->fields).currentDirectionRotation.z = fVar3;
  (this->fields).currentDirectionRotation.w = fVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar5 != MVGameMode__Enum_CharacterEditor) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)func_?(TypeInfo__AvatarInputControllerTouch);
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  this_00 = (AvatarInputControllerTouch *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor
            ((AvatarInputController *)this_00,(MethodInfo *)0x0);
code_?:
  (this->fields).avatarInputController = (IAvatarInputController *)this_00;
  func_?();
  return;
}

