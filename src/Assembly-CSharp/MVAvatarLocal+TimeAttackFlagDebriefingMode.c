
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_Activate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,AvatarRuntimeState__Enum fromMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar2 = (this->fields).avatarInputController;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 != (Transform *)0x0)) {
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffec,pTVar3,(MethodInfo *)0x0);
    if (pIVar2 != (IAvatarInputController *)0x0) {
      func_?(3,TypeInfo__IMotorAPI,pIVar2,pQVar4->x);
      pTVar3 = MVAvatarLocal_TimeAttackFlagDebriefingMode_GetClosestTimeAttackFlag
                         (this,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      (this->fields).flagTransform = pTVar3;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar5 = (pMVar1->fields).avatarEquipable, pAVar5 != (AvatarEquipable *)0x0)) {
        (*(code *)(pAVar5->klass->vtable).Unequip.method)();
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar6 != (FlagDebriefingControl *)0x0) {
          bVar7 = (pFVar6->fields).IsInFlagDebriefing;
          (this->fields).isInDebriefing = bVar7;
          if (bVar7 == 0) {
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              pAVar8 = (AvatarUIHandlerRemote *)
                        MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
              if (pAVar8 != (AvatarUIHandlerRemote *)0x0) {
                pSVar9 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                    (pAVar8,(MethodInfo *)0x0);
                if (pSVar9 != (ShieldBar *)0x0) {
                  func_?(4);
code_?:
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                                     ((MethodInfo *)0x0);
                  if (pFVar6 != (FlagDebriefingControl *)0x0) {
                    pAVar10 = (pFVar6->fields).OnFlagDebriefing;
                    pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar11,(Object *)this,
                               MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
                               ,MethodInfo__System__Action<int>__Action_System__Object__void__);
                    pAVar12 = (Action_1_Int32_ *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
                    pAVar10 = (Action_1_Int32_ *)0x0;
                    if (pAVar12 != (Action_1_Int32_ *)0x0) {
                      if (pAVar12->klass == TypeInfo__System__Action<int>) {
                        pAVar10 = pAVar12;
                      }
                      if (pAVar10 == (Action_1_Int32_ *)0x0) goto code_?;
                    }
                    (pFVar6->fields).OnFlagDebriefing = pAVar10;
                    pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                                       ((MethodInfo *)0x0);
                    if (pFVar6 != (FlagDebriefingControl *)0x0) {
                      pAVar13 = (pFVar6->fields).OnFlagDebriefingEnd;
                      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar11,(Object *)this,
                                 MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                                 ,(MethodInfo *)0x0);
                      pAVar14 = (Action *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pAVar13,(Delegate *)pUVar11,(MethodInfo *)0x0
                                          );
                      pAVar13 = (Action *)0x0;
                      if (pAVar14 == (Action *)0x0) {
code_?:
                        (pFVar6->fields).OnFlagDebriefingEnd = pAVar13;
                        return;
                      }
                      if (pAVar14->klass == TypeInfo__System__Action) {
                        pAVar13 = pAVar14;
                      }
                      if (pAVar13 != (Action *)0x0) goto code_?;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
          else {
            pTVar3 = (this->fields).flagTransform;
            if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__CullingApiWrapper);
            }
            CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint(pTVar3,(MethodInfo *)0x0)
            ;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_02 != (MVNetworkGame *)0x0) {
              this_03 = (GameStatCounterManager *)
                        DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                  ((DayNightCycle *)this_02,(MethodInfo *)0x0);
              pMVar15 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0)
              ;
              if (pMVar15 != (MVLocalPlayer *)0x0) {
                team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar15,
                                  (MethodInfo *)0x0);
                pMVar15 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                   ((MethodInfo *)0x0);
                if (pMVar15 != (MVLocalPlayer *)0x0) {
                  actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                                NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                          ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar15,
                                           (MethodInfo *)0x0);
                  if (this_03 != (GameStatCounterManager *)0x0) {
                    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                              (this_03,GameStatCounterType__Enum_TimeAttackFlag,(MVTeam__Enum)team,
                               (int32_t)actorNumber,(MethodInfo *)0x0);
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
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality
                                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar7 != 0) {
                        pMVar1 = (this->fields)._.mvAvatar;
                        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
                        MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
                      }
                      pMVar1 = (this->fields)._.mvAvatar;
                      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                         (this_00 = (pMVar1->fields).pickupOwner,
                         this_00 != (AvatarPickupOwner *)0x0)) {
                        MVPickupOwner::MVPickupOwner_HandleFire
                                  ((MVPickupOwner *)this_00,0,(pMVar1->fields)._.IsFiring,
                                   (MethodInfo *)0x0);
                        pMVar1 = (this->fields)._.mvAvatar;
                        if (pMVar1 != (MVAvatarLocal *)0x0) {
                          pAVar8 = (AvatarUIHandlerRemote *)
                                    MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                              (pMVar1,(MethodInfo *)0x0);
                          if (pAVar8 != (AvatarUIHandlerRemote *)0x0) {
                            pSVar9 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                                (pAVar8,(MethodInfo *)0x0);
                            if (pSVar9 != (ShieldBar *)0x0) {
                              func_?();
                              pMVar1 = (this->fields)._.mvAvatar;
                              (this->fields).isInDebriefing = 1;
                              if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                                 (this_01 = (pMVar1->fields)._.avatar, this_01 != (Avatar_1 *)0x0))
                              {
                                this_04 = (AvatarFader *)
                                          System.Core.dll::System::Linq::
                                          Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
                                          Object]::
                                          Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                                    ((
                                                  Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_
                                                  *)this_01,(MethodInfo *)0x0);
                                if (this_04 != (AvatarFader *)0x0) {
                                  AvatarFader::AvatarFader_SetTransparency
                                            (this_04,1.0,(MethodInfo *)0x0);
                                  goto code_?;
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
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
MVAvatarLocal_TimeAttackFlagDebriefingMode_CreateInputController
          (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  this_00 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
  return (IAvatarInputController *)this_00;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_DeActivate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,AvatarRuntimeState__Enum toMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined1)toMode;
  toMode = CONCAT13(uVar1,(undefined3)toMode);
  pOVar2 = (Object *)func_?(TypeInfo__AvatarRuntimeState,(byte *)((int)&toMode + 3));
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Time_attack_flag_debriefing_mode,pOVar2,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_DeActivate_,pOVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pMVar4 = (this->fields)._.mvAvatar;
  if ((pMVar4 != (MVAvatarLocal *)0x0) &&
     (pAVar5 = (pMVar4->fields).interactableLocal, pAVar5 != (AvatarInteractable *)0x0)) {
    in_stack_6 = (Action_1_Int32_ *)0xffffffff;
    method = (MethodInfo *)0x11;
    toMode = (AvatarRuntimeState__Enum)pAVar5;
    (*(code *)(pAVar5->klass->vtable).AddModifier.method)();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      in_stack_6 = (Action_1_Int32_ *)&UNK_?;
      func_?();
    }
    in_stack_6 = (Action_1_Int32_ *)&UNK_?;
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 != (FlagDebriefingControl *)0x0) {
      pAVar8 = (pFVar7->fields).OnFlagDebriefing;
      in_stack_6 = (Action_1_Int32_ *)&UNK_?;
      pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar9,(Object *)&UNK_?,
                 MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
                 ,MethodInfo__System__Action<int>__Action_System__Object__void__);
      in_stack_6 =
           (Action_1_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
      pAVar8 = (Action_1_Int32_ *)0x0;
      if (in_stack_6 != (Action_1_Int32_ *)0x0) {
        if (in_stack_6->klass == TypeInfo__System__Action<int>) {
          pAVar8 = in_stack_6;
        }
        if (pAVar8 == (Action_1_Int32_ *)0x0) goto code_?;
      }
      (pFVar7->fields).OnFlagDebriefing = pAVar8;
      in_stack_6 = (Action_1_Int32_ *)&UNK_?;
      pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar7 != (FlagDebriefingControl *)0x0) {
        source = (pFVar7->fields).OnFlagDebriefingEnd;
        pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar9,(Object *)&UNK_?,
                   MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                   ,(MethodInfo *)0x0);
        in_stack_6 =
             (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)pUVar9,(MethodInfo *)0x0);
        pAVar8 = (Action_1_Int32_ *)0x0;
        if (in_stack_6 == (Action_1_Int32_ *)0x0) {
code_?:
          (pFVar7->fields).OnFlagDebriefingEnd = (Action *)pAVar8;
          return;
        }
        if ((Action__Class *)in_stack_6->klass == TypeInfo__System__Action) {
          pAVar8 = in_stack_6;
        }
        if (pAVar8 != (Action_1_Int32_ *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
  in_stack_6 = extraout_ECX;
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DieByFalling() */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_DieByFalling
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.Health, pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    (*(code *)(pMVar2->klass->vtable).set_Value.method)(pMVar2,0,pMVar2->klass[1]._0.image);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        avatarId = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            killerId = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,
                                  (MethodInfo *)0x0);
            gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                    ((int32_t)avatarId,(int32_t)killerId,
                                     PlayerKilledByType__Enum_FallOffWorld,(MethodInfo *)0x0);
            if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                        (this_00,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  uStack_6 = 0;
  pMVar7 = (this->fields)._.mvAvatar;
  if (((pMVar7 != (MVAvatarLocal *)0x0) &&
      (this_00 = (pMVar7->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
     (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_10,pTVar8,(MethodInfo *)0x0);
    uVar11 = pVVar9->x;
    uVar12 = pVVar9->y;
    fStack_13 = pVVar9->z;
    uStack_14 = uVar11;
    fStack_15 = (float)uVar12;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      VStack_16.y = (float)TypeInfo__MVGameControllerBase;
      VStack_16.x = (float)&UNK_?;
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pBVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_WorldBounds
                          (&BStack_18,this_01,(MethodInfo *)0x0);
      fStack_2 = (pBVar17->m_Center).x;
      fStack_3 = (pBVar17->m_Center).y;
      fStack_4 = (pBVar17->m_Center).z;
      fStack_5 = (pBVar17->m_Extents).x;
      uStack_6._0_4_ = (pBVar17->m_Extents).y;
      uStack_6._4_4_ = (pBVar17->m_Extents).z;
      puVar19 = (undefined8 *)func_?(&VStack_20,&fStack_2,0);
      VStack_10.z = *(float *)(puVar19 + 1);
      VStack_10.x = (float)*puVar19;
      VStack_10.y = (float)((ulonglong)*puVar19 >> 0x20);
      if (fStack_15 < VStack_10.y - _UNK_?) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pMVar7 = (this->fields)._.mvAvatar;
        if ((pMVar7 == (MVAvatarLocal *)0x0) ||
           (pMVar21 = (pMVar7->fields)._.Health,
           pMVar21 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
        (*(code *)(pMVar21->klass->vtable).set_Value.method)(pMVar21,0,pMVar21->klass[1]._0.image);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar22 == (MVNetworkGame *)0x0) ||
           (pMVar23 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar22,(MethodInfo *)0x0),
           pMVar23 == (MVLocalPlayer *)0x0)) goto code_?;
        avatarId = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar23,(MethodInfo *)0x0)
        ;
        pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar22 == (MVNetworkGame *)0x0) ||
           (pMVar23 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar22,(MethodInfo *)0x0),
           pMVar23 == (MVLocalPlayer *)0x0)) goto code_?;
        killerId = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar23,(MethodInfo *)0x0)
        ;
        gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                ((int32_t)avatarId,(int32_t)killerId,
                                 PlayerKilledByType__Enum_FallOffWorld,(MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (this_02,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
      }
      pMVar7 = (this->fields)._.mvAvatar;
      if ((pMVar7 != (MVAvatarLocal *)0x0) &&
         (pAVar24 = (pMVar7->fields).avatarMotor, pAVar24 != (AvatarMotor *)0x0)) {
        bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                           ((Behaviour *)pAVar24,(MethodInfo *)0x0);
        pMVar7 = (this->fields)._.mvAvatar;
        if (bVar25 == 0) {
          if ((pMVar7 != (MVAvatarLocal *)0x0) &&
             (pAVar24 = (pMVar7->fields).avatarMotor, pAVar24 != (AvatarMotor *)0x0)) {
            AvatarMotor::AvatarMotor_UpdateVelocity(pAVar24,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                (pAVar26 = (pMVar7->fields).interactableLocal, pAVar26 != (AvatarInteractable *)0x0)
                ) {
          (*(code *)(pAVar26->klass->vtable).AddModifier.method)
                    (pAVar26,0x13,0xffffffff,0,(pAVar26->klass->vtable).HasModifier.methodPtr);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          VStack_10.x = 0.0;
          VStack_10.y = 0.0;
          VStack_10.z = 0.0;
          if ((this->fields).isInDebriefing == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                (&BStack_18.m_Extents,(MethodInfo *)0x0);
          }
          else {
            pTVar8 = (this->fields).flagTransform;
            if (pTVar8 == (Transform *)0x0) goto code_?;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_27,pTVar8,(MethodInfo *)0x0);
            pMVar7 = (this->fields)._.mvAvatar;
            VStack_20.y = pVVar9->x;
            VStack_20.z = pVVar9->y;
            fVar28 = pVVar9->z;
            if (pMVar7 == (MVAvatarLocal *)0x0) goto code_?;
            puVar19 = (undefined8 *)
                      (*(code *)(pMVar7->klass->vtable).get_Position.method)
                                (auStack_29,pMVar7,(pMVar7->klass->vtable).set_Position.methodPtr);
            uVar30 = *puVar19;
            fVar31 = *(float *)(puVar19 + 1);
            fStack_15 = (float)uVar30;
            fStack_13 = (float)((ulonglong)uVar30 >> 0x20);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
              uVar30 = CONCAT44(fStack_13,fStack_15);
            }
            a.z = fVar28;
            a.x = VStack_20.y;
            a.y = VStack_20.z;
            b.z = fVar31;
            b.x = (float)(int)uVar30;
            b.y = (float)(int)((ulonglong)uVar30 >> 0x20);
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                (&VStack_20,a,b,(MethodInfo *)0x0);
            uVar32 = pVVar9->x;
            VStack_10.z = pVVar9->z;
            VStack_10.y = 0.0;
            VStack_10.x = (float)uVar32;
            fVar33 = (float10)func_?(&VStack_10,0);
            if ((float)fVar33 < _UNK_?) {
              direction_01.y = VStack_10.y;
              direction_01.x = VStack_10.x;
              direction_01.z = VStack_10.z;
              pVVar9 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                                  (&VStack_16,this,direction_01,100.0,(MethodInfo *)0x0);
            }
            else if (_UNK_? < (float)fVar33) {
              direction_00.y = VStack_10.y;
              direction_00.x = VStack_10.x;
              direction_00.z = VStack_10.z;
              pVVar9 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                                  (&VStack_34,this,direction_00,20.0,(MethodInfo *)0x0);
            }
            else {
              direction.y = VStack_10.y;
              direction.x = VStack_10.x;
              direction.z = VStack_10.z;
              pVVar9 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                                  (&VStack_35,this,direction,80.0,(MethodInfo *)0x0);
            }
          }
          uVar36 = pVVar9->x;
          uVar37 = pVVar9->y;
          fVar28 = pVVar9->z;
          pIVar38 = (this->fields).avatarInputController;
          fStack_15 = (float)uVar36;
          fStack_13 = (float)uVar37;
          if (movementMap != (IInputToPlayerMovement *)0x0) {
            uVar39 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
            VStack_20.z._0_1_ = uVar39;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                (&BStack_18.m_Extents,(MethodInfo *)0x0);
            uVar40 = pVVar9->x;
            uVar41 = pVVar9->y;
            fStack_42 = pVVar9->z;
            pMVar7 = (this->fields)._.mvAvatar;
            VStack_10.y = (float)uVar40;
            VStack_10.z = (float)uVar41;
            if (pMVar7 != (MVAvatarLocal *)0x0) {
              bVar25 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar7,(MethodInfo *)0x0);
              this = (MVAvatarLocal_TimeAttackFlagDebriefingMode *)(uint)bVar25;
              pMVar7 = (pMVar1->fields)._.mvAvatar;
              if ((pMVar7 != (MVAvatarLocal *)0x0) && (pIVar38 != (IAvatarInputController *)0x0)) {
                func_?(0,TypeInfo__IAvatarInputController,pIVar38,fStack_15,fStack_13,
                                fVar28,VStack_20.z,0,VStack_10.y,VStack_10.z,fStack_42,this,
                                (pMVar7->fields)._ForceRotateAvatarToFiringDirection_k__BackingField
                               );
                pMVar7 = (pMVar1->fields)._.mvAvatar;
                if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                   (pAVar24 = (pMVar7->fields).avatarMotor, pAVar24 != (AvatarMotor *)0x0)) {
                  AvatarMotor::AvatarMotor_FixedUpdateFunction
                            (pAVar24,(IMotorAPI *)(pMVar1->fields).avatarInputController,
                             (MethodInfo *)0x0);
                  if ((pMVar1->fields).isInDebriefing == 0) {
                    return;
                  }
                  pMVar7 = (pMVar1->fields)._.mvAvatar;
                  if (((pMVar7 != (MVAvatarLocal *)0x0) &&
                      (pMVar43 = (pMVar7->fields)._.body, pMVar43 != (MVBody *)0x0)) &&
                     (pBVar44 = MVBody::MVBody_get_Animation(pMVar43,(MethodInfo *)0x0),
                     pBVar44 != (BoneAnimation *)0x0)) {
                    bVar25 = BoneAnimation::BoneAnimation_IsPlaying
                                       (pBVar44,StringLiteral_Jump,(MethodInfo *)0x0);
                    if (bVar25 != 0) {
                      return;
                    }
                    pMVar7 = (pMVar1->fields)._.mvAvatar;
                    if (pMVar7 != (MVAvatarLocal *)0x0) {
                      MVAvatarLocal::MVAvatarLocal_SetAnimation
                                (pMVar7,StringLiteral_Idle,(MethodInfo *)0x0);
                      pMVar7 = (pMVar1->fields)._.mvAvatar;
                      if (pMVar7 != (MVAvatarLocal *)0x0) {
                        MVAvatarLocal::MVAvatarLocal_SetAnimation
                                  (pMVar7,StringLiteral_Jump,(MethodInfo *)0x0);
                        pMVar7 = (pMVar1->fields)._.mvAvatar;
                        if (((pMVar7 != (MVAvatarLocal *)0x0) &&
                            (pMVar43 = (pMVar7->fields)._.body, pMVar43 != (MVBody *)0x0)) &&
                           (pBVar44 = MVBody::MVBody_get_Animation(pMVar43,(MethodInfo *)0x0),
                           pBVar44 != (BoneAnimation *)0x0)) {
                          BoneAnimation::BoneAnimation_Play
                                    (pBVar44,StringLiteral_Jump,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_FrameUpdate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,InputToInGameAction *interactionMap
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)pAVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
    AvatarMotor::AvatarMotor_UpdateFunction(pAVar2,(MethodInfo *)0x0);
  }
  if ((this->fields).isInDebriefing == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar4 == (MainCameraManager *)0x0) ||
       (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0),
       pMVar5 == (MVCameraBase *)0x0)) goto code_?;
    iVar6 = (*(code *)(pMVar5->klass->vtable).__unknown.method)
                       (pMVar5,(pMVar5->klass->vtable).Awake.methodPtr);
    if (iVar6 != 0x12) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (this_01 = (AvatarUIHandlerRemote *)
                     MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
          this_01 == (AvatarUIHandlerRemote *)0x0)) ||
         (pSVar7 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                              (this_01,(MethodInfo *)0x0), pSVar7 == (ShieldBar *)0x0))
      goto code_?;
      func_?(4,TypeInfo__IAvatarCameraController,pSVar7,0x12);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar4 == (MainCameraManager *)0x0) ||
         (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera
                              (pMVar4,(MethodInfo *)0x0), pMVar5 == (MVCameraBase *)0x0))
      goto code_?;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pMVar5,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         ((this_00 = (pMVar1->fields)._._._.transform, this_00 == (Transform *)0x0 ||
          (pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)auStack_10,this_00,(MethodInfo *)0x0),
          pTVar8 == (Transform *)0x0)))) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar8,*pQVar9,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar4 == (MainCameraManager *)0x0) ||
     (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0),
     pMVar5 == (MVCameraBase *)0x0)) goto code_?;
  iVar6 = (*(code *)(pMVar5->klass->vtable).__unknown.method)
                     (pMVar5,(pMVar5->klass->vtable).Awake.methodPtr);
  if (iVar6 == 0x11) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar4 == (MainCameraManager *)0x0) ||
       (pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar4,(MethodInfo *)0x0),
       pMVar5 == (MVCameraBase *)0x0)) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar5,(MethodInfo *)0x0);
    auStack_10._0_4_ =
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fStack_11 = 0.0;
    uStack_12 = 0;
    uStack_13 = 0;
    auStack_10._0_4_ = (float)auStack_10._0_4_ * _UNK_?;
    fStack_14 = 0.0;
    auStack_10._4_4_ = 0.0;
    func_?(&uStack_12,0);
    if (pTVar8 == (Transform *)0x0) goto code_?;
    eulers.y = (float)uStack_13;
    eulers.x = (float)uStack_12;
    eulers.z = fStack_11;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
              (pTVar8,eulers,(MethodInfo *)0x0);
  }
  if ((this->fields).isInDebriefing != 0) {
    return;
  }
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar15 = (this->fields).avatarInputController;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pTVar8 = (pMVar1->fields)._._._.transform, pTVar8 != (Transform *)0x0)) &&
     (pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)auStack_10,pTVar8,(MethodInfo *)0x0),
     pIVar15 != (IAvatarInputController *)0x0)) {
    func_?(3,TypeInfo__IMotorAPI,pIVar15,pQVar9->x,pQVar9->y,pQVar9->z,pQVar9->w);
    pMVar1 = (this->fields)._.mvAvatar;
    pIVar15 = (this->fields).avatarInputController;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pTVar8 = (pMVar1->fields)._._._.transform, pTVar8 != (Transform *)0x0)) {
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)(auStack_10 + 4),pTVar8,(MethodInfo *)0x0);
      uVar17._0_4_ = pVVar16->x;
      uVar17._4_4_ = pVVar16->y;
      fVar18 = pVVar16->z;
      uStack_13 = (undefined4)uVar17;
      fStack_11 = (float)uVar17._4_4_;
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
        uVar17 = CONCAT44(fStack_11,uStack_13);
code_?:
        (**ppvVar22)(pIVar15,uVar17,fVar18,ppvVar22[1]);
        return;
      }
    }
  }
code_?:
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInDebriefing != 0) {
    this_00 = (this->fields).flagTransform;
    if (this_00 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this_00,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._.mvAvatar;
      uVar4._0_4_ = pVVar1->x;
      uVar4._4_4_ = pVVar1->y;
      fVar5 = pVVar1->z;
      if (pMVar3 != (MVAvatarLocal *)0x0) {
        puVar6 = (undefined8 *)
                 (*(code *)(pMVar3->klass->vtable).get_Position.method)
                           (&puStack_7,pMVar3,(pMVar3->klass->vtable).set_Position.methodPtr);
        VStack_2._4_8_ = *puVar6;
        fVar8 = *(float *)(puVar6 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar5;
        a.x = (float)(int)uVar4;
        a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        b.z = fVar8;
        b.x = VStack_2.y;
        b.y = VStack_2.z;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&puStack_7,a,b,(MethodInfo *)0x0);
        uVar9 = pVVar1->x;
        fVar5 = pVVar1->z;
        uVar10 = 0;
        fVar11 = (float10)func_?(&stack0xffffffdc,0);
        if ((float)fVar11 < _UNK_?) {
          direction_01.y = (float)uVar10;
          direction_01.x = (float)uVar9;
          direction_01.z = fVar5;
          pVVar1 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                             ((Vector3 *)&puStack_7,this,direction_01,100.0,(MethodInfo *)0x0);
        }
        else if (_UNK_? < (float)fVar11) {
          direction_00.y = (float)uVar10;
          direction_00.x = (float)uVar9;
          direction_00.z = fVar5;
          pVVar1 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                             ((Vector3 *)&puStack_7,this,direction_00,20.0,(MethodInfo *)0x0);
        }
        else {
          direction.y = (float)uVar10;
          direction.x = (float)uVar9;
          direction.z = fVar5;
          pVVar1 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                             ((Vector3 *)&puStack_7,this,direction,80.0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
    func_?(0);
    pcVar12 = (code *)swi(3);
    pVVar1 = (Vector3 *)(*pcVar12)();
    return pVVar1;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&puStack_7,(MethodInfo *)0x0);
code_?:
  fVar8 = pVVar1->y;
  fVar5 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Transform GetClosestTimeAttackFlag() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
MVAvatarLocal_TimeAttackFlagDebriefingMode_GetClosestTimeAttackFlag
          (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVPointLightObject *)0x0;
  fStack_2 = _UNK_?;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (this_01 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      pMVar4 = (this->fields)._.mvAvatar;
      if (pMVar4 != (MVAvatarLocal *)0x0) {
        plVar5 = (longlong *)(*(code *)(pMVar4->klass->vtable).get_Position.method)();
        index = 0;
        lVar6 = *plVar5;
        lVar7 = plVar5[1];
        while( true ) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if ((int)pOVar3 <= index) {
            return (Transform *)pMStack_1;
          }
          pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
          if (pIVar8 == (IEventSystemHandler *)0x0) break;
          uStack_9 = (uint)((ulonglong)lVar6 >> 0x20);
          pVVar10 = (Vector3 *)(*(code *)pIVar8->klass[1]._0.castClass)();
          b = *pVVar10;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          auVar11._4_4_ = (int)lVar7;
          auVar11._0_4_ = uStack_9;
          auVar11._8_4_ = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffb8,(Vector3)(auVar11 << 0x20),b,(MethodInfo *)0x0);
          lVar6 = (ulonglong)uStack_9 << 0x20;
          fVar12 = (float10)func_?();
          if ((float)fVar12 < fStack_2) {
            this_02 = (PrefabPool *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
            if (this_02 == (PrefabPool *)0x0) break;
            pMStack_1 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
            fStack_2 = (float)fVar12;
          }
          index = index + 1;
        }
      }
    }
  }
  func_?();
code_?:
  this_03 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_03,StringLiteral_Entered_TimeAttackFlagDebriefing,(MethodInfo *)0x0);
  func_?();
  pcVar13 = (code *)swi(3);
  pTVar14 = (Transform *)(*pcVar13)();
  return pTVar14;
}


/* Void OnEnterTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_OnEnterTimeAttackFlagDebriefing
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    x = (pMVar1->fields).vehicleRigidBody;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
        this_02 = (AvatarUIHandlerRemote *)
                  MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
        if (this_02 != (AvatarUIHandlerRemote *)0x0) {
          pSVar3 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                             (this_02,(MethodInfo *)0x0);
          if (pSVar3 != (ShieldBar *)0x0) {
            func_?();
            pMVar1 = (this->fields)._.mvAvatar;
            (this->fields).isInDebriefing = 1;
            if ((pMVar1 != (MVAvatarLocal *)0x0) &&
               (this_01 = (pMVar1->fields)._.avatar, this_01 != (Avatar_1 *)0x0)) {
              this_03 = (AvatarFader *)
                        System.Core.dll::System::Linq::
                        Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                        Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                                   this_01,(MethodInfo *)0x0);
              if (this_03 != (AvatarFader *)0x0) {
                AvatarFader::AvatarFader_SetTransparency(this_03,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnExitTimeAttackFlagDebriefing() */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_OnExitTimeAttackFlagDebriefing
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar6 != (MainCameraManager *)0x0) {
        pMVar7 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar6,(MethodInfo *)0x0);
        if (pMVar7 != (MVCameraBase *)0x0) {
          iVar8 = (*(code *)(pMVar7->klass->vtable).__unknown.method)
                            (pMVar7,(pMVar7->klass->vtable).Awake.methodPtr);
          pMVar1 = (this->fields)._.mvAvatar;
          if (iVar8 == 0x11) {
            if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
            pAVar9 = (AvatarUIHandlerRemote *)
                     MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if (pAVar9 == (AvatarUIHandlerRemote *)0x0) goto code_?;
            pSVar10 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                               (pAVar9,(MethodInfo *)0x0);
            if (pSVar10 == (ShieldBar *)0x0) goto code_?;
            uVar11 = 6;
          }
          else {
            if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
            pAVar9 = (AvatarUIHandlerRemote *)
                     MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if (pAVar9 == (AvatarUIHandlerRemote *)0x0) goto code_?;
            pSVar10 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                               (pAVar9,(MethodInfo *)0x0);
            if (pSVar10 == (ShieldBar *)0x0) goto code_?;
            uVar11 = 0;
          }
          func_?(4,TypeInfo__IAvatarCameraController,pSVar10,uVar11);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar6 != (MainCameraManager *)0x0) {
            this_01 = (Component_1 *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar6,
                                 (MethodInfo *)0x0);
            if (this_01 != (Component_1 *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform(this_01,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
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
                         (this_00 = (pMVar1->fields)._.body, this_00 != (MVBody *)0x0)) {
                        this_02 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0);
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
  }
code_?:
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).lastAngle != angle) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).directionInterpolationStartTime = fVar1;
  }
  (this->fields).lastAngle = angle;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  fVar5 = 0.0;
  fVar6 = 0.0;
  func_?(&stack0xfffffff0,0,angle,0);
  func_?(&stack0xffffffdc,CONCAT44(fVar6,fVar5),0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((this_00 != (MainCameraManager *)0x0) &&
      (this_01 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0),
      this_01 != (MVCameraBase *)0x0)) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
  {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffcc,this_02,(MethodInfo *)0x0);
    uVar7 = 0;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffcc,*pQVar2,(MethodInfo *)0x0);
    rhs.y = fVar1;
    rhs.x = (float)uVar7;
    rhs.z = fVar3;
    rhs.w = fVar4;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&stack0xffffffcc,*pQVar2,rhs,(MethodInfo *)0x0);
    fVar1 = pQVar2->x;
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    pVVar8 = (Vector3 *)(this->fields).currentDirectionRotation.x;
    fVar6 = (this->fields).currentDirectionRotation.y;
    fVar9 = (this->fields).currentDirectionRotation.z;
    fVar10 = (this->fields).currentDirectionRotation.w;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffbc,(MethodInfo *)0x0);
    fVar11 = pQVar2->x;
    puStack12 = (undefined *)pQVar2->w;
    lhs.y = fVar6;
    lhs.x = (float)pVVar8;
    lhs.z = fVar9;
    lhs.w = fVar10;
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Equality
                      (lhs,*pQVar2,(MethodInfo *)0x0);
    fVar6 = fVar1;
    fVar14 = fVar3;
    fVar15 = fVar4;
    fVar16 = fVar5;
    if (bVar13 == 0) {
      fVar14 = (this->fields).currentDirectionRotation.x;
      fVar15 = (this->fields).currentDirectionRotation.y;
      fVar16 = (this->fields).currentDirectionRotation.z;
      fVar17 = (this->fields).currentDirectionRotation.w;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar6 = (this->fields).directionInterpolationStartTime;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = fVar15;
      a.x = fVar14;
      a.z = fVar16;
      a.w = fVar17;
      b.y = fVar3;
      b.x = fVar1;
      b.z = fVar4;
      b.w = fVar5;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                         ((Quaternion *)&stack0xffffffbc,a,b,(fVar18 - fVar6) / _UNK_?,
                          (MethodInfo *)0x0);
      fVar1 = pQVar2->x;
      fVar3 = pQVar2->y;
      fVar4 = pQVar2->z;
      fVar5 = pQVar2->w;
      fVar6 = pQVar2->x;
      fVar14 = pQVar2->y;
      fVar15 = pQVar2->z;
      fVar16 = pQVar2->w;
    }
    (this->fields).currentDirectionRotation.x = fVar1;
    (this->fields).currentDirectionRotation.y = fVar3;
    (this->fields).currentDirectionRotation.z = fVar4;
    (this->fields).currentDirectionRotation.w = fVar5;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    point.y = fVar10;
    point.x = fVar9;
    rotation.y = fVar14;
    rotation.x = fVar6;
    rotation.z = fVar15;
    rotation.w = fVar16;
    point.z = fVar11;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,rotation,point,(MethodInfo *)0x0);
    fVar3 = pVVar19->y;
    fVar1 = pVVar19->z;
    pVVar8->x = pVVar19->x;
    pVVar8->y = fVar3;
    pVVar8->z = fVar1;
    return pVVar8;
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar20)();
  return pVVar8;
}


/* MVAvatarLocal+TimeAttackFlagDebriefingMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode__ctor
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MVAvatarLocal *mvAvatar,
               MethodInfo *method)

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
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields).currentDirectionRotation.x = pQVar1->x;
  (this->fields).currentDirectionRotation.y = fVar2;
  (this->fields).currentDirectionRotation.z = fVar3;
  (this->fields).currentDirectionRotation.w = fVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  bVar5 = cRam_? == '\0';
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields)._.modeTypes = 1;
  if (bVar5) {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  this_00 = (AvatarInputController *)func_?();
  AvatarInputController::AvatarInputController__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).avatarInputController = (IAvatarInputController *)this_00;
  return;
}

