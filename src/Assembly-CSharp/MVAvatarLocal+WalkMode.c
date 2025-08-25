
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_Activate
               (MVAvatarLocal_WalkMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IMotorAPI);
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    func_?(&TypeInfo__MainCameraManager);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    cRam_? = '\x01';
  }
  MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
            ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (pMVar1,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    if (pOVar2 != (Object *)0x0) {
      transform = pOVar2[0x12].klass;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pNVar3 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                          ((Nullable_1_UnityEngine_Bounds_ *)auStack_4,(Transform *)transform,
                           (MethodInfo *)0x0);
      if (pNVar3->hasValue == 0) {
        auStack_4._0_4_ = 0.0;
        auStack_4._4_4_ = 0.0;
        fStack_5 = 0.0;
        fStack_6 = 0.0;
        fStack_7 = 0.0;
        fStack_8 = 0.0;
      }
      else {
        pBVar9 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
                  Nullable_1_UnityEngine_Bounds__get_Value
                            ((Bounds *)auStack_4,(Nullable_1_UnityEngine_Bounds_ *)&stack0xffffff94
                             ,MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
        fStack_5 = (pBVar9->m_Center).x;
        fStack_6 = (pBVar9->m_Center).y;
        fStack_7 = (pBVar9->m_Center).z;
        fStack_8 = (pBVar9->m_Extents).x;
        auStack_4._0_4_ = (pBVar9->m_Extents).y;
        auStack_4._4_4_ = (pBVar9->m_Extents).z;
      }
      auStack_4._8_4_ = 0.0;
      fStack_10 = 0.0;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        bounds.m_Center.y = fStack_6;
        bounds.m_Center.x = fStack_5;
        bounds.m_Center.z = fStack_7;
        bounds.m_Extents.x = fStack_8;
        bounds.m_Extents.y = (float)auStack_4._0_4_;
        bounds.m_Extents.z = (float)auStack_4._4_4_;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (pMVar1,bounds,(MethodInfo *)0x0);
        pMVar11 = (this->fields)._.mvAvatar;
        fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
        if (pMVar11 != (MVAvatarLocal *)0x0) {
          (pMVar11->fields)._.healParticleSpawnTime = fStack_12;
          pMVar11 = (this->fields)._.mvAvatar;
          if ((pMVar11 != (MVAvatarLocal *)0x0) &&
             (pMVar13 = (pMVar11->fields)._.shield, pMVar13 != (MVRuntimeDataVariableClampedFloat *)0x0
             )) {
            (*(code *)(pMVar13->klass->vtable).set_Value.method)(pMVar13,0);
            pMVar11 = (this->fields)._.mvAvatar;
            if ((pMVar11 != (MVAvatarLocal *)0x0) &&
               (this_00 = (pMVar11->fields).triggerHandler, this_00 != (MVTriggerHandler *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_00,1,(MethodInfo *)0x0);
              pMVar11 = (this->fields)._.mvAvatar;
              if (pMVar11 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar11,(MethodInfo *)0x0);
                pMVar11 = (this->fields)._.mvAvatar;
                if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                   (this_01 = (pMVar11->fields)._._._.collider, this_01 != (Collider *)0x0)) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                            (this_01,1,(MethodInfo *)0x0);
                  pMVar11 = (this->fields)._.mvAvatar;
                  pIVar14 = (this->fields).avatarInputController;
                  if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                     (pTVar15 = (pMVar11->fields)._._._.transform, pTVar15 != (Transform *)0x0)) {
                    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_rotation
                                        ((Quaternion *)(auStack_4 + 8),pTVar15,(MethodInfo *)0x0);
                    if (pIVar14 != (IAvatarInputController *)0x0) {
                      func_?(3,TypeInfo__IMotorAPI,pIVar14,pQVar16->x,pQVar16->y,pQVar16->z)
                      ;
                      pMVar11 = (this->fields)._.mvAvatar;
                      if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                         (this_02 = (pMVar11->fields)._.limbManager,
                         this_02 != (AvatarLimbManager *)0x0)) {
                        AvatarLimbManager::AvatarLimbManager_SetLimbRotatorActivity
                                  (this_02,1,(MethodInfo *)0x0);
                        pMVar11 = (this->fields)._.mvAvatar;
                        if (pMVar11 != (MVAvatarLocal *)0x0) {
                          if ((pMVar11->fields)._.body != (MVBody *)0x0) {
                            MVBody::MVBody_set_Visible((pMVar11->fields)._.body,1,(MethodInfo *)0x0);
                          }
                          bVar17 = MVClientSettings::MVClientSettings_get_ReviveEnabled
                                            ((MethodInfo *)0x0);
                          if (bVar17 != 0) {
                            pSVar18 = MVGameControllerBase::
                                      MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                ((MethodInfo *)0x0);
                            if ((pSVar18 == (SpawnRoleDataMediator *)0x0) ||
                               (this_03 = (WebCompletionSource_1_System_Object_ *)
                                          (pSVar18->fields).reviveState,
                               this_03 == (WebCompletionSource_1_System_Object_ *)0x0))
                            goto code_?;
                            this_06 = System.dll::System::Net::WebCompletionSource`1[System::Object]
                                      ::WebCompletionSource_1_System_Object__get_Task
                                                (this_03,
                                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                                );
                            if (this_06 == (Task *)0x0) goto code_?;
                            ReviveState::ReviveState_ResetSafePostions
                                      ((ReviveState *)this_06,(MethodInfo *)0x0);
                          }
                          pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar19 != (MVNetworkGame *)0x0) &&
                             (pMVar20 = (pMVar19->fields)._NetworkGameStateListener_k__BackingField,
                             pMVar20 != (MVNetworkGameStateListener *)0x0)) {
                            if ((pMVar20->fields).currentGameState == 2) {
                              pMVar11 = (this->fields)._.mvAvatar;
                              if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                                 (this_05 = (pMVar11->fields).avatarLocalModes,
                                 this_05 != (MVAvatarLocal_AvatarLocalModes *)0x0)) {
                                MVAvatarLocal+AvatarLocalModes::
                                MVAvatarLocal_AvatarLocalModes_SetMode
                                          (this_05,AvatarRuntimeState__Enum_Wait,(MethodInfo *)0x0);
                                return;
                              }
                            }
                            else {
                              if ((undefined1)fromMode == AvatarRuntimeState__Enum_Wait) {
code_?:
                                MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
                                          (1,0,(MethodInfo *)0x0);
                                return;
                              }
                              pMVar21 = MVGameControllerBase::
                                        MVGameControllerBase_get_MainCameraManager
                                                  ((MethodInfo *)0x0);
                              if (pMVar21 != (MainCameraManager *)0x0) {
                                MainCameraManager::MainCameraManager_set_CamMaskMode
                                          (pMVar21,MaskMode__Enum_Default,(MethodInfo *)0x0);
                                pMVar11 = (this->fields)._.mvAvatar;
                                if (pMVar11 != (MVAvatarLocal *)0x0) {
                                  (*(code *)(pMVar11->klass->vtable).set_Visible.method)(pMVar11,1);
                                  pMVar11 = (this->fields)._.mvAvatar;
                                  if (pMVar11 != (MVAvatarLocal *)0x0) {
                                    pAVar22 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                                        (pMVar11,(MethodInfo *)0x0);
                                    if (pAVar22 != (AvatarLocal *)0x0) {
                                      pIVar23 = (pAVar22->fields).avatarCameraController;
                                      if ((TypeInfo__MainCameraManager->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      if (pIVar23 != (IAvatarCameraController *)0x0) {
                                        func_?(2,TypeInfo__IAvatarCameraController,pIVar23);
                                        pMVar21 = MVGameControllerBase::
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                        if (pMVar21 != (MainCameraManager *)0x0) {
                                          pMVar24 = MainCameraManager::
                                                    MainCameraManager_get_CurrentCamera
                                                              (pMVar21,(MethodInfo *)0x0);
                                          if (pMVar24 != (MVCameraBase *)0x0) {
                                            (*(code *)(pMVar24->klass->vtable).Reset.method)
                                                      (pMVar24);
                                            pMVar21 = MVGameControllerBase::
                                                      MVGameControllerBase_get_MainCameraManager
                                                                ((MethodInfo *)0x0);
                                            if (pMVar21 != (MainCameraManager *)0x0) {
                                              pMVar24 = MainCameraManager::
                                                        MainCameraManager_get_CurrentCamera
                                                                  (pMVar21,(MethodInfo *)0x0);
                                              if (pMVar24 != (MVCameraBase *)0x0) {
                                                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_transform
                                                                    ((Component *)pMVar24,
                                                                     (MethodInfo *)0x0);
                                                pMVar11 = (this->fields)._.mvAvatar;
                                                if ((pMVar11 != (MVAvatarLocal *)0x0) &&
                                                   (this_04 = (pMVar11->fields)._._._.transform,
                                                   this_04 != (Transform *)0x0)) {
                                                  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_rotation
                                                                      ((Quaternion *)
                                                                       (auStack_4 + 8),this_04,
                                                                       (MethodInfo *)0x0);
                                                  if (pTVar15 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_rotation
                                                              (pTVar15,*pQVar16,(MethodInfo *)0x0);
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
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_CreateInputController
          (MVAvatarLocal_WalkMode *this,MethodInfo *method)

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

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_DeActivate
               (MVAvatarLocal_WalkMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.limbManager, pAVar2 != (AvatarLimbManager *)0x0)) &&
     (pAVar3 = (pAVar2->fields).limbRotator, pAVar3 != (AvatarLimbManager_LimbRotator *)0x0)) {
    (pAVar3->fields).isActive = 0;
    return;
  }
  puStack_4 = &stack0xfffffffc;
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void DieByFalling() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_DieByFalling
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      this = (MVAvatarLocal_WalkMode *)&TypeInfo__MVGameControllerBase;
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
      (*(code *)(pMVar5->klass->vtable).set_Value.method)();
      pMVar4 = (this->fields)._.mvAvatar;
      if ((pMVar4 != (MVAvatarLocal *)0x0) &&
         ((pMVar4->fields).interactableLocal != (AvatarInteractable *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Byte);
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                         );
          func_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                         );
          func_?(&TypeInfo__System__Int32);
          func_?(&TypeInfo__NotificationController);
          func_?(&TypeInfo__MV__Common__PlayerKilledByType);
          cRam_? = '\x01';
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           pMVar6 != (MVLocalPlayer *)0x0)) {
          avatarId = (pMVar6->fields)._._ActorNr_k__BackingField;
          gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                  (avatarId,avatarId,PlayerKilledByType__Enum_FallOffWorld,
                                   (MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (pMVar7,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
            this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pOVar8 = (Object *)func_?();
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar1 != (MVNetworkGame *)0x0) &&
                (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                pMVar6 != (MVLocalPlayer *)0x0)) &&
               (pOVar9 = (Object *)func_?(),
               this_00 !=
               (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar8,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar8 = (Object *)func_?();
              pOVar9 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar8,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar8 = (Object *)func_?(TypeInfo__System__Byte);
              pOVar9 = (Object *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType,&stack0xfffffffc);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar8,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,
                         (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
              if (pHRam00000054 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (pHRam00000054,10,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar2 == 0) {
                  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar7,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0)
                  ;
                }
                if (iRam_? != 0) {
                  (**(code **)(iRam_? + 0xc))();
                  return;
                }
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
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_FixedUpdate
               (MVAvatarLocal_WalkMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarInputController);
    func_?(&TypeInfo__IInputToPlayerMovement);
    func_?(&TypeInfo__IMotorAPI);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)pAVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
      AvatarMotor::AvatarMotor_UpdateVelocity(pAVar2,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (movementMap == (IInputToPlayerMovement *)0x0) goto code_?;
  puVar4 = (undefined8 *)func_?(&VStack_5,0,TypeInfo__IInputToPlayerMovement,movementMap)
  ;
  uStack_6 = *puVar4;
  fStack_7 = *(float *)(puVar4 + 1);
  pFVar8 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar8 == (FlagDebriefingControl *)0x0) goto code_?;
  if ((pFVar8->fields).IsInFlagDebriefing != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    pIVar9 = (this->fields).avatarInputController;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pTVar10 = (pMVar1->fields)._._._.transform, pTVar10 == (Transform *)0x0)) ||
       (pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            (&QStack_12,pTVar10,(MethodInfo *)0x0),
       pIVar9 == (IAvatarInputController *)0x0)) goto code_?;
    func_?(3,TypeInfo__IMotorAPI,pIVar9,pQVar11->x,pQVar11->y,pQVar11->z,pQVar11->w);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar13->zeroVector).x;
    uStack_6._4_4_ = (pVVar13->zeroVector).y;
    fStack_7 = (pVVar13->zeroVector).z;
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_Swim);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 == (MVAvatarLocal *)0x0) ||
      (this_00 = (pMVar1->fields)._._._.gameObject, this_00 == (GameObject *)0x0)) ||
     (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
  goto code_?;
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      (&VStack_5,pTVar10,(MethodInfo *)0x0);
  if (this_02 == (WaterPlaneManager *)0x0) goto code_?;
  fVar15 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                     (this_02,*pVVar14,(MethodInfo *)0x0);
  fVar16 = (this->fields).swimStartProximity;
  pfVar17 = &(this->fields).prevWaterProximity;
  if ((fVar16 < *pfVar17 || fVar16 == *pfVar17) || (fVar15 < fVar16)) {
    fVar16 = (this->fields).prevWaterProximity;
    pfVar17 = &(this->fields).swimStartProximity;
    if ((*pfVar17 <= fVar16 && fVar16 != *pfVar17) && (fVar15 < (this->fields).swimStartProximity)) {
      pMVar1 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Walk;
      goto joined_?;
    }
  }
  else {
    pMVar1 = (this->fields)._.mvAvatar;
    animationState = StringLiteral_Swim;
joined_?:
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,animationState,(MethodInfo *)0x0);
  }
  pIVar9 = (this->fields).avatarInputController;
  (this->fields).prevWaterProximity = fVar15;
  uVar18 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
  pMVar1 = (this->fields)._.mvAvatar;
  uStack_19 = CONCAT31(uStack_19._1_3_,uVar18);
  uStack_20 = CONCAT31(uStack_20._1_3_,(this->fields).isFiring);
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    puVar4 = (undefined8 *)
              (*(code *)(pAVar2->klass->vtable).get_Velocity.method)
                        (&QStack_12.y,pAVar2,(pAVar2->klass->vtable).get_IsMovementLocked.methodPtr)
    ;
    VStack_5._4_8_ = *puVar4;
    uVar21 = *(undefined4 *)(puVar4 + 1);
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      bVar3 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
      this = (MVAvatarLocal_WalkMode *)(uint)bVar3;
      pMVar1 = (this_01->fields)._.mvAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) && (pIVar9 != (IAvatarInputController *)0x0)) {
        func_?(0,TypeInfo__IAvatarInputController,pIVar9,(int)uStack_6,
                        (int)((ulonglong)uStack_6 >> 0x20),fStack_7,uStack_19,uStack_20,VStack_5.y,
                        VStack_5.z,uVar21,this,
                        (pMVar1->fields)._ForceRotateAvatarToFiringDirection_k__BackingField);
        pMVar1 = (this_01->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
          AvatarMotor::AvatarMotor_FixedUpdateFunction
                    (pAVar2,(IMotorAPI *)(this_01->fields).avatarInputController,(MethodInfo *)0x0);
          pMVar1 = (this_01->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            bVar3 = MVAvatar::MVAvatar_IsInMode
                              ((MVAvatar *)pMVar1,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              pIVar9 = (this_01->fields).avatarInputController;
              if (pIVar9 == (IAvatarInputController *)0x0) goto code_?;
              pVVar14 = (Vector3 *)func_?(&QStack_12.y,0,TypeInfo__IMotorAPI,pIVar9);
              MVAvatarLocal_WalkMode_SetAnimationState(this_01,*pVVar14,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_FrameUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  MVAvatarLocal_WalkMode_HandleFocus(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                     ((Behaviour *)pAVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
    goto code_?;
    AvatarMotor::AvatarMotor_UpdateFunction(pAVar2,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 == (MVAvatarLocal *)0x0) ||
      (this_00 = (pMVar1->fields)._._._.gameObject, this_00 == (GameObject *)0x0)) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
  uVar7 = (pMVar6->fields).worldBounds.m_Extents.y;
  if (fVar5 < ((pMVar6->fields).worldBounds.m_Center.y - (float)uVar7) - _UNK_?) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame *)0x0) goto code_?;
    interactionMap = (InputToInGameAction *)0x0;
    bVar3 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_02,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField == 0)
         || (MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
            MVar8 != MVGameMode__Enum_Edit)) {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pMVar9 = (pMVar1->fields)._.Health,
           pMVar9 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
        (*(code *)(pMVar9->klass->vtable).set_Value.method)(pMVar9);
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar10 = (pMVar1->fields).interactableLocal, pAVar10 == (AvatarInteractable *)0x0))
        goto code_?;
        AvatarInteractable::AvatarInteractable_DieFromFalling(pAVar10,(MethodInfo *)0x0);
      }
    }
  }
  if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
  if ((interactionMap->fields).use != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
    goto code_?;
    cVar11 = (*(code *)(pAVar2->klass->vtable).get_IsMovementLocked.method)();
    if (cVar11 == '\0') {
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (bVar3 != 0) {
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pUVar12 = (pMVar1->fields).useInteractorHandler, pUVar12 == (UseInteractorHandler *)0x0))
        goto code_?;
        bVar3 = UseInteractorHandler::UseInteractorHandler_ClosestUseInteractorHasUseIconInVehicle
                           (pUVar12,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.mvAvatar;
        if (bVar3 == 0) {
          if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
          MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pUVar12 = (pMVar1->fields).useInteractorHandler, pUVar12 == (UseInteractorHandler *)0x0))
      goto code_?;
      UseInteractorHandler::UseInteractorHandler_Use(pUVar12,(MethodInfo *)0x0);
    }
  }
code_?:
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar13 = (pMVar1->fields).pickupOwner, pAVar13 == (AvatarPickupOwner *)0x0))
  goto code_?;
  pPVar14 = (pAVar13->fields)._.currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pPVar14,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar13 = (pMVar1->fields).pickupOwner, pAVar13 == (AvatarPickupOwner *)0x0)) ||
       (pPVar14 = (pAVar13->fields)._.currentItem, pPVar14 == (PickupItem *)0x0))
    goto code_?;
    bVar3 = (pPVar14->fields)._IsHolstered_k__BackingField;
    iVar15 = (*(code *)(((((((this->fields)._.mvAvatar)->fields).pickupOwner)->fields)._.currentItem
                        )->klass->vtable).__unknown.method)();
    pMVar1 = (this->fields)._.mvAvatar;
    isItemHand = iVar15 == 5;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar13 = (pMVar1->fields).pickupOwner, pAVar13 == (AvatarPickupOwner *)0x0))
    goto code_?;
    MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pAVar13,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar13 = (pMVar1->fields).pickupOwner, pAVar13 == (AvatarPickupOwner *)0x0))
      goto code_?;
      MVPickupOwner::MVPickupOwner_HandleFire
                ((MVPickupOwner *)pAVar13,(interactionMap->fields).fire,(pMVar1->fields)._.IsFiring,
                 (MethodInfo *)0x0);
    }
    MVAvatarLocal_WalkMode_HandlePointingItem
              (this,interactionMap,isItemHand,bVar3,(MethodInfo *)0x0);
    MVAvatarLocal_WalkMode_HandleHolsteringItem
              (this,interactionMap,isItemHand,bVar3,(MethodInfo *)0x0);
    if (iVar15 != 5) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
      if (((bVar3 == 0) ||
          (bVar3 = MVAvatarLocal_WalkMode_IsInJetpack(this,(MethodInfo *)0x0), bVar3 != 0)) &&
         ((interactionMap->fields).drop != 0)) {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar16 = (pMVar1->fields).avatarEquipable, pAVar16 == (AvatarEquipable *)0x0))
        goto code_?;
        (*(code *)(pAVar16->klass->vtable).Unequip.method)();
      }
    }
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
    goto code_?;
    bVar3 = AvatarMotor::AvatarMotor_IsStuck(pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pMVar9 = (pMVar1->fields)._.Health,
         pMVar9 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
      (*(code *)(pMVar9->klass->vtable).set_Value.method)(pMVar9);
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar10 = (pMVar1->fields).interactableLocal, pAVar10 == (AvatarInteractable *)0x0))
      goto code_?;
      AvatarInteractable::AvatarInteractable_DieFromBeingStuck(pAVar10,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    return;
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar3 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    bVar3 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar17 == (MainCameraManager *)0x0) ||
       (pMVar18 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar17,(MethodInfo *)0x0),
       pMVar18 == (MVCameraBase *)0x0)) goto code_?;
    iVar15 = (*(code *)(pMVar18->klass->vtable).__unknown.method)();
    if (iVar15 != 0x10) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar19 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
       pAVar19 == (AvatarLocal *)0x0)) goto code_?;
    pIVar20 = (pAVar19->fields).avatarCameraController;
  }
  else {
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar17 == (MainCameraManager *)0x0) ||
       (pMVar18 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar17,(MethodInfo *)0x0),
       pMVar18 == (MVCameraBase *)0x0)) goto code_?;
    iVar15 = (*(code *)(pMVar18->klass->vtable).__unknown.method)();
    if (iVar15 != 0) goto code_?;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar19 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
       pAVar19 == (AvatarLocal *)0x0)) goto code_?;
    pIVar20 = (pAVar19->fields).avatarCameraController;
  }
  if (pIVar20 != (IAvatarCameraController *)0x0) {
    func_?(2,TypeInfo__IAvatarCameraController);
    return;
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void HandleDroppingItem(InputToInGameAction, Boolean, Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleDroppingItem
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,bool isItemHand,
               bool isItemHolstered,MethodInfo *method)

{
  if (isItemHand == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if ((bVar3 == 0) ||
       (bVar3 = MVAvatarLocal_WalkMode_IsInJetpack(this,(MethodInfo *)0x0), bVar3 != 0)) {
      if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
      if ((interactionMap->fields).drop != 0) {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar4 = (pMVar1->fields).avatarEquipable, pAVar4 == (AvatarEquipable *)0x0))
        goto code_?;
        (*(code *)(pAVar4->klass->vtable).Unequip.method)
                  (pAVar4,(pAVar4->klass->vtable).Holster.methodPtr);
      }
    }
  }
  return;
}


/* Void HandleFireItem(InputToInGameAction, Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleFireItem
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,
               bool isItemHolstered,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
    MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pAVar2,(MethodInfo *)0x0);
    if (isItemHolstered == 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (((pMVar1 == (MVAvatarLocal *)0x0) || (interactionMap == (InputToInGameAction *)0x0)) ||
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0))
      goto code_?;
      MVPickupOwner::MVPickupOwner_HandleFire
                ((MVPickupOwner *)pAVar2,(interactionMap->fields).fire,(pMVar1->fields)._.IsFiring,
                 (MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleFocus() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleFocus
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__LobbyStateCamera);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVCameraBase *)0x0)) {
    iVar3 = (*(code *)(pMVar2->klass->vtable).__unknown.method)(pMVar2);
    if (iVar3 == 6) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        cVar4 = func_?(5,TypeInfo__IPlayModeUI);
        if (cVar4 != '\0') goto code_?;
        pMVar5 = (this->fields)._.mvAvatar;
        unaff_ESI = (LobbyStateCamera *)this;
        if (((pMVar5 != (MVAvatarLocal *)0x0) &&
            (pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar5,(MethodInfo *)0x0),
            pAVar6 != (AvatarLocal *)0x0)) &&
           (pIVar7 = (pAVar6->fields).avatarCameraController,
           pIVar7 != (IAvatarCameraController *)0x0)) {
          func_?(6,TypeInfo__IAvatarCameraController,pIVar7);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar1 != (MainCameraManager *)0x0) {
            pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera
                               (pMVar1,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar8 == 0) {
              return;
            }
            pMVar5 = (this->fields)._.mvAvatar;
            if ((pMVar5 != (MVAvatarLocal *)0x0) &&
               (pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar5,(MethodInfo *)0x0),
               pAVar6 != (AvatarLocal *)0x0)) {
              pIVar7 = (pAVar6->fields).avatarCameraController;
              pMVar5 = (this->fields)._.mvAvatar;
              if ((pMVar5 != (MVAvatarLocal *)0x0) &&
                 (MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar5,(MethodInfo *)0x0),
                 pIVar7 != (IAvatarCameraController *)0x0)) {
                func_?(4,TypeInfo__IAvatarCameraController,pIVar7);
                return;
              }
            }
          }
        }
      }
    }
    else {
code_?:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar1 != (MainCameraManager *)0x0) &&
         (pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar1,(MethodInfo *)0x0),
         pMVar2 != (MVCameraBase *)0x0)) {
        iVar3 = (*(code *)(pMVar2->klass->vtable).__unknown.method)(pMVar2);
        if (iVar3 == 6) {
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
            (IPlayModeUI *)0x0) {
          cVar4 = func_?(5,TypeInfo__IPlayModeUI);
          if (cVar4 == '\0') {
            return;
          }
          pMVar5 = (this->fields)._.mvAvatar;
          if (((pMVar5 != (MVAvatarLocal *)0x0) &&
              (pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar5,(MethodInfo *)0x0),
              pAVar6 != (AvatarLocal *)0x0)) &&
             (pIVar7 = (pAVar6->fields).avatarCameraController,
             pIVar7 != (IAvatarCameraController *)0x0)) {
            func_?(4,TypeInfo__IAvatarCameraController,pIVar7);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar1 != (MainCameraManager *)0x0) {
              unaff_ESI = (LobbyStateCamera *)
                          MainCameraManager::MainCameraManager_get_CurrentCamera
                                    (pMVar1,(MethodInfo *)0x0);
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (((pMVar1 != (MainCameraManager *)0x0) &&
                  (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0),
                  this_00 != (Transform *)0x0)) &&
                 (pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_rotation
                                      ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0),
                 unaff_ESI != (LobbyStateCamera *)0x0)) {
                if (((TypeInfo__LobbyStateCamera->_1).naturalAligment <=
                     (unaff_ESI->klass->_1).naturalAligment) &&
                   ((unaff_ESI->klass->_1).typeHierarchy
                    [(TypeInfo__LobbyStateCamera->_1).naturalAligment - 1] ==
                    (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                  LobbyStateCamera::LobbyStateCamera_SetRotation
                            (unaff_ESI,*pQVar9,(MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandleHolsteringItem(InputToInGameAction, Boolean, Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleHolsteringItem
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,bool isItemHand,
               bool isItemHolstered,MethodInfo *method)

{
  if (isItemHand != 0) {
    return;
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    bVar2 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if ((bVar2 != 0) &&
       (bVar2 = MVAvatarLocal_WalkMode_IsInJetpack(this,(MethodInfo *)0x0), bVar2 == 0)) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
        (pAVar3 = (pMVar1->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
       (pPVar4 = (pAVar3->fields)._.currentItem, pPVar4 != (PickupItem *)0x0)) {
      bVar5 = (*(code *)(pPVar4->klass->vtable).get_CanHolster.method)(pPVar4);
      if (isItemHolstered == 0) {
        if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
        bVar6 = (interactionMap->fields).holster != 0;
        bVar2 = 0;
      }
      else {
        bVar6 = false;
        if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
        bVar2 = (interactionMap->fields).holster;
      }
      if ((bVar5 & bVar6) == 0) {
        if ((bVar5 & bVar2 != 0) == 0) {
          return;
        }
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar7 = (pMVar1->fields).avatarEquipable, pAVar7 != (AvatarEquipable *)0x0)) {
          (*(code *)(pAVar7->klass->vtable).Unholster.method)(pAVar7);
          pMVar1 = (this->fields)._.mvAvatar;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             (pAVar3 = (pMVar1->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) {
            AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
                      (pAVar3,(this->fields).storedIsHandEquipableValue,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar7 = (pMVar1->fields).avatarEquipable, pAVar7 != (AvatarEquipable *)0x0)) {
          (*(code *)(pAVar7->klass->vtable).Holster.method)(pAVar7);
          pMVar1 = (this->fields)._.mvAvatar;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             (pAVar3 = (pMVar1->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) {
            AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
                      (pAVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandlePickupUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandlePickupUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    bVar4 = (pPVar3->fields)._IsHolstered_k__BackingField;
    pPVar3 = (((((this->fields)._.mvAvatar)->fields).pickupOwner)->fields)._.currentItem;
    pPVar5 = pPVar3->klass;
    iVar6 = (*(code *)(pPVar5->vtable).__unknown.method)
                      (pPVar3,(pPVar5->vtable).__unknown_1.methodPtr);
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
      MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pAVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (((pMVar1 == (MVAvatarLocal *)0x0) || (interactionMap == (InputToInGameAction *)0x0)) ||
           (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0))
        goto code_?;
        MVPickupOwner::MVPickupOwner_HandleFire
                  ((MVPickupOwner *)pAVar2,(interactionMap->fields).fire,(pMVar1->fields)._.IsFiring
                   ,(MethodInfo *)0x0);
      }
      MVAvatarLocal_WalkMode_HandlePointingItem
                (this,interactionMap,iVar6 == 5,bVar4,(MethodInfo *)0x0);
      MVAvatarLocal_WalkMode_HandleHolsteringItem
                (this,interactionMap,iVar6 == 5,bVar4,(MethodInfo *)0x0);
      if (iVar6 == 5) {
        return;
      }
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        bVar4 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
        if ((bVar4 != 0) &&
           (bVar4 = MVAvatarLocal_WalkMode_IsInJetpack(this,(MethodInfo *)0x0), bVar4 == 0)) {
          return;
        }
        if (interactionMap != (InputToInGameAction *)0x0) {
          if ((interactionMap->fields).drop != 0) {
            pMVar1 = (this->fields)._.mvAvatar;
            if ((pMVar1 == (MVAvatarLocal *)0x0) ||
               (pAVar7 = (pMVar1->fields).avatarEquipable, pAVar7 == (AvatarEquipable *)0x0))
            goto code_?;
            (*(code *)(pAVar7->klass->vtable).Unequip.method)
                      (pAVar7,(pAVar7->klass->vtable).Holster.methodPtr);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandlePointingItem(InputToInGameAction, Boolean, Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandlePointingItem
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,bool isItemHand,
               bool isItemHolstered,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if (isItemHand == 0 && isItemHolstered == 0) {
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0)) ||
       (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 == (PickupItem *)0x0))
    goto code_?;
    cVar4 = (*(code *)(pPVar3->klass->vtable).get_ThirdPersonGunMode.method)
                      (pPVar3,(pPVar3->klass->vtable).get_CanHolster.methodPtr);
    pMVar1 = (this->fields)._.mvAvatar;
    if (cVar4 == '\0') {
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0)) ||
         (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 == (PickupItem *)0x0))
      goto code_?;
      cVar4 = (*(code *)(pPVar3->klass->vtable).get_IsHandEquippable.method)(pPVar3);
      if (cVar4 != '\0') {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0))
        goto code_?;
        AvatarPickupOwner::AvatarPickupOwner_HandlePointWeaponOnlyNetworked
                  (pAVar2,(MethodInfo *)0x0);
      }
    }
    else {
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0))
      goto code_?;
      AvatarPickupOwner::AvatarPickupOwner_HandlePointWeapon(pAVar2,(MethodInfo *)0x0);
    }
  }
  else {
    if (((pMVar1 == (MVAvatarLocal *)0x0) || (interactionMap == (InputToInGameAction *)0x0)) ||
       (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0))
    goto code_?;
    AvatarPickupOwner::AvatarPickupOwner_HandlePointing
              (pAVar2,(interactionMap->fields).fire,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    bVar5 = (*(code *)(pPVar3->klass->vtable).get_IsHandEquippable.method)(pPVar3);
    if (bVar5 == (this->fields).storedIsHandEquipableValue) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
        (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
       (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
      bVar5 = (*(code *)(pPVar3->klass->vtable).get_IsHandEquippable.method)(pPVar3);
      pMVar1 = (this->fields)._.mvAvatar;
      (this->fields).storedIsHandEquipableValue = bVar5;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
        AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
                  (pAVar2,bVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleStuck() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleStuck
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.Health, pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    (*(code *)(pMVar2->klass->vtable).set_Value.method)();
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       ((pMVar1->fields).interactableLocal != (AvatarInteractable *)0x0)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Byte);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__NotificationController);
        func_?(&TypeInfo__MV__Common__PlayerKilledByType);
        cRam_? = '\x01';
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 != (MVLocalPlayer *)0x0) {
          avatarId = (pMVar4->fields)._._ActorNr_k__BackingField;
          gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                  (avatarId,avatarId,PlayerKilledByType__Enum_Crushed,
                                   (MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (pMVar5,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
            this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pOVar6 = (Object *)func_?();
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
              if (pMVar4 != (MVLocalPlayer *)0x0) {
                pOVar7 = (Object *)func_?();
                if (this_00 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar6,pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pOVar6 = (Object *)func_?();
                  pOVar7 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar6,pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pOVar6 = (Object *)func_?(TypeInfo__System__Byte);
                  pOVar7 = (Object *)
                           func_?(TypeInfo__MV__Common__PlayerKilledByType,&stack0xfffffff4
                                          );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar6,pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__NotificationController);
                  }
                  NotificationController::NotificationController_OnNotificationReceived
                            (NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0)
                  ;
                  if (*(HashSet_1_System_ByteEnum_ **)(unaff_retaddr + 0x54) !=
                      (HashSet_1_System_ByteEnum_ *)0x0) {
                    bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                            ByteEnum]::HashSet_1_System_ByteEnum__Contains
                                      (*(HashSet_1_System_ByteEnum_ **)(unaff_retaddr + 0x54),0xe,
                                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                      );
                    if (bVar8 == 0) {
                      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                         ((MethodInfo *)0x0);
                      if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_PostNotificationOperation
                                (pMVar5,NotificationType__Enum_Kill,
                                 (Dictionary_2_System_Object_System_Object_ *)this_00,
                                 (MethodInfo *)0x0);
                    }
                    if (*(int *)(unaff_retaddr + 0x38) != 0) {
                      (**(code **)(*(int *)(unaff_retaddr + 0x38) + 0xc))();
                      return;
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
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleUseInteractionUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleUseInteractionUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar2 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if (bVar2 != 0) {
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pUVar3 = (pMVar1->fields).useInteractorHandler, pUVar3 == (UseInteractorHandler *)0x0))
    goto code_?;
    bVar2 = UseInteractorHandler::UseInteractorHandler_ClosestUseInteractorHasUseIconInVehicle
                      (pUVar3,(MethodInfo *)0x0);
    this_07 = (MVVehicleBase *)interactionMap;
    pMVar1 = (this->fields)._.mvAvatar;
    if (bVar2 == 0) {
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      method = (MethodInfo *)0x0;
      interactionMap = (InputToInGameAction *)0x0;
      if (cRam_? == '\0') {
        func_?(&
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&
                        MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                       );
        func_?(&TypeInfo__IAvatarCameraController);
        func_?(&TypeInfo__MVNetworkReporter);
        func_?(&TypeInfo__MVVehicleBase);
        func_?(&TypeInfo__MainCameraManager);
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        func_?(&
                        MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                       );
        func_?(&TypeInfo__MVAvatarLocal____c);
        func_?(&StringLiteral_vehicleWO_is_null_or_type_is_not);
        cRam_? = '\x01';
      }
      pMVar1 = in_stack_4;
      pAVar5 = (in_stack_4->fields).avatarMotor;
      pMVar6 = in_stack_4;
      if (pAVar5 != (AvatarMotor *)0x0) {
        puVar7 = (undefined8 *)
                 (*(code *)(pAVar5->klass->vtable).get_Velocity.method)
                           (&stack0xfffffff0,pAVar5,
                            (pAVar5->klass->vtable).get_IsMovementLocked.methodPtr);
        pUVar3 = (in_stack_4->fields).useInteractorHandler;
        uVar8 = *puVar7;
        pMVar9 = *(MVAvatarLocal **)(puVar7 + 1);
        this_07 = (MVVehicleBase *)0x0;
        pMVar6 = pMVar9;
        if (pUVar3 != (UseInteractorHandler *)0x0) {
          this_00 = (in_stack_4->fields).vehicleRigidBody;
          this_07 = (MVVehicleBase *)(pUVar3->fields).triggingColliders;
          if ((this_00 != (MVRigidBody *)0x0) &&
             (in_stack_4 = pMVar9,
             collider = (Collider *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)this_00,
                                   UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                  ), pMVar6 = in_stack_4, this_07 != (MVVehicleBase *)0x0)) {
            Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                      ((ColliderCollection *)this_07,collider,(MethodInfo *)0x0);
            (pMVar1->fields).vehicleRigidBody = (MVRigidBody *)0x0;
            func_?(&(pMVar1->fields).vehicleRigidBody,0);
            interactionMap = (InputToInGameAction *)0xffffffff;
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pMVar6 = in_stack_4;
            if ((pMVar10 != (MVNetworkGame *)0x0) &&
               (this_01 = (pMVar10->fields)._PlayerController_k__BackingField,
               this_01 != (MVLocalObjectController *)0x0)) {
              bVar2 = MVLocalObjectController::MVLocalObjectController_DetachWorldObjectFromVehicle
                                (this_01,(pMVar1->fields)._._._._.id,(int32_t *)&interactionMap,
                                 in_stack_11,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                return;
              }
              if (interactionMap != (InputToInGameAction *)0xffffffff) {
                this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                pMVar6 = in_stack_4;
                if (this_06 == (MVWorldObjectClientManager *)0x0) goto code_?;
                this_07 = (MVVehicleBase *)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (this_06,(int32_t)interactionMap,(MethodInfo *)0x0);
                if (((this_07 == (MVVehicleBase *)0x0) ||
                    ((this_07->klass->_1).naturalAligment <
                     (TypeInfo__MVVehicleBase->_1).naturalAligment)) ||
                   ((MVVehicleBase__Class *)
                    (this_07->klass->_1).typeHierarchy
                    [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase))
                {
                  str1 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&interactionMap,(MethodInfo *)0x0);
                  this_07 = (MVVehicleBase *)
                            mscorlib.dll::System::String::String_Concat_3
                                      (StringLiteral_vehicleWO_is_null_or_type_is_not,str1,
                                       (MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)this_07,(MethodInfo *)0x0);
                }
                else {
                  pMVar12 = TypeInfo__MVVehicleBase;
                  if (((this_07->klass->_1).naturalAligment <
                       (TypeInfo__MVVehicleBase->_1).naturalAligment) ||
                     ((MVVehicleBase__Class *)
                      (this_07->klass->_1).typeHierarchy
                      [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase
                     )) goto code_?;
                  MVVehicleBase::MVVehicleBase_LeaveLocal(this_07,(MethodInfo *)0x0);
                  this_02 = (this_07->fields)._._._.gameObject;
                  pMVar6 = in_stack_4;
                  if (this_02 == (GameObject *)0x0) goto code_?;
                  this_07 = (MVVehicleBase *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponent_1
                                      (this_02,
                                       MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                      );
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)this_07,(Object_1 *)0x0,(MethodInfo *)0x0);
                  pMVar9 = in_stack_4;
                  if (bVar2 != 0) {
                    pMVar6 = in_stack_4;
                    if (this_07 == (MVVehicleBase *)0x0) goto code_?;
                    puVar7 = (undefined8 *)func_?(&stack0xfffffff0,6,this_07);
                    uVar8 = *puVar7;
                    fVar13 = *(float *)(puVar7 + 1);
                    fVar14 = (float)uVar8;
                    in_stack_4 =
                         (MVAvatarLocal *)
                         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                    pMVar9 = (MVAvatarLocal *)((fVar13 / (float)in_stack_4) * _UNK_?)
                    ;
                    fVar14 = (fVar14 / (float)in_stack_4) * _UNK_?;
                    fVar13 = ((float)((ulonglong)uVar8 >> 0x20) / (float)in_stack_4) *
                             _UNK_?;
                    fVar15 = (float10)func_?(&stack0xfffffffc,0);
                    uVar8 = CONCAT44((float)(fVar15 / (float10)_UNK_? + (float10)fVar13),
                                      fVar14);
                  }
                }
              }
              MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)pMVar1,(MethodInfo *)0x0);
              pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
              pMVar6 = in_stack_4;
              if (pAVar16 != (AvatarLocal *)0x0) {
                this_07 = (MVVehicleBase *)(pAVar16->fields).avatarCameraController;
                if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MainCameraManager);
                }
                pMVar6 = in_stack_4;
                if (this_07 != (MVVehicleBase *)0x0) {
                  func_?(2,TypeInfo__IAvatarCameraController,this_07,
                                  TypeInfo__MainCameraManager->static_fields->DefaultCameraType);
                  pAVar5 = (pMVar1->fields).avatarMotor;
                  pMVar6 = in_stack_4;
                  if (pAVar5 != (AvatarMotor *)0x0) {
                    (*(code *)(pAVar5->klass->vtable).Reset.method)
                              (pAVar5,(pAVar5->klass->vtable).SuspendImpactDamage.methodPtr);
                    pAVar5 = (pMVar1->fields).avatarMotor;
                    pMVar6 = in_stack_4;
                    if (pAVar5 != (AvatarMotor *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pAVar5,1,(MethodInfo *)0x0);
                      this_03 = (pMVar1->fields).triggerHandler;
                      pMVar6 = in_stack_4;
                      if (this_03 != (MVTriggerHandler *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)this_03,1,(MethodInfo *)0x0);
                        pAVar5 = (pMVar1->fields).avatarMotor;
                        pMVar6 = in_stack_4;
                        if (pAVar5 != (AvatarMotor *)0x0) {
                          impulse.z = (float)pMVar9;
                          this = (MVAvatarLocal_WalkMode *)((ulonglong)uVar8 >> 0x20);
                          impulse.x = (float)uVar17;
                          impulse.y = (float)this;
                          MVRigidBody::MVRigidBody_AddImpulse_1
                                    ((MVRigidBody *)pAVar5,impulse,0,(MethodInfo *)0x0);
                          (*(code *)(pMVar1->klass->vtable).OnLeaveVehicle.method)
                                    (pMVar1,(pMVar1->klass->vtable).AvatarStateChangedHandler.
                                            methodPtr);
                          if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__MVAvatarLocal____c);
                          }
                          this_08 = TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0;
                          if (this_08 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
                            if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?(TypeInfo__MVAvatarLocal____c);
                            }
                            this_07 = (MVVehicleBase *)
                                      TypeInfo__MVAvatarLocal____c->static_fields->__9;
                            this_08 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                                      func_?(
                                                  TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      ((UnityAction_1_System_Object_ *)this_08,(Object *)this_07,
                                       MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                       ,(MethodInfo *)0x0);
                            TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0 = this_08;
                            func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0,
                                            this_08);
                          }
                          if ((pMVar1->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0
                             ) {
                            pMVar6 = in_stack_4;
                            if (this_08 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
                            goto code_?;
                            (*(this_08->fields)._._.invoke_impl)
                                      ((this_08->fields)._._.method_code,
                                       (pMVar1->fields).spawnRoleDataReceiver,
                                       (this_08->fields)._._.method);
                          }
                          this_04 = (pMVar1->fields).pickupGUI;
                          pMVar6 = in_stack_4;
                          if (this_04 != (PickupGUI *)0x0) {
                            PickupGUI::PickupGUI_AvatarLeftVehicle(this_04,(MethodInfo *)0x0);
                            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game
                                               ((MethodInfo *)0x0);
                            pMVar6 = in_stack_4;
                            if (pMVar10 != (MVNetworkGame *)0x0) {
                              this_05 = (pMVar10->fields).transformNetworkManager;
                              in_stack_4 = (MVAvatarLocal *)(pMVar1->fields)._._._._.id;
                              this_09 = (MVNetworkReporter *)
                                        func_?(TypeInfo__MVNetworkReporter);
                              MVNetworkReporter::MVNetworkReporter__ctor
                                        (this_09,(MVWorldObjectClient *)pMVar1,(MethodInfo *)0x0);
                              this_07 = (MVVehicleBase *)0x0;
                              pMVar6 = in_stack_4;
                              if (this_05 != (TransformNetworkManager *)0x0) {
                                TransformNetworkManager::TransformNetworkManager_AddReporter
                                          (this_05,(int32_t)in_stack_4,this_09,
                                           (MethodInfo *)0x0);
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
      }
code_?:
      in_stack_4 = pMVar6;
      func_?();
      pMVar12 = extraout_EDX;
code_?:
      func_?(this_07,pMVar12);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pUVar3 = (pMVar1->fields).useInteractorHandler, pUVar3 != (UseInteractorHandler *)0x0)) {
    UseInteractorHandler::UseInteractorHandler_Use(pUVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void HandleWaterplane() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleWaterplane
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_Swim);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  pMVar2 = (this->fields)._.mvAvatar;
  if (((pMVar2 != (MVAvatarLocal *)0x0) &&
      (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
    if (this_01 == (WaterPlaneManager *)0x0) goto code_?;
    pMVar4 = (MVAvatarLocal_WalkMode *)
             WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                       (this_01,*pVVar3,(MethodInfo *)0x0);
    fVar5 = (this->fields).swimStartProximity;
    pfVar6 = &(this->fields).prevWaterProximity;
    if ((fVar5 < *pfVar6 || fVar5 == *pfVar6) || ((float)pMVar4 < fVar5)) {
      fVar5 = (this->fields).prevWaterProximity;
      pfVar6 = &(this->fields).swimStartProximity;
      if ((fVar5 < *pfVar6 || fVar5 == *pfVar6) ||
         ((this->fields).swimStartProximity <= (float)pMVar4)) goto code_?;
      pMVar2 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Walk;
    }
    else {
      pMVar2 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Swim;
    }
    if (pMVar2 != (MVAvatarLocal *)0x0) {
      this = (MVAvatarLocal_WalkMode *)&UNK_?;
      MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar2,animationState,(MethodInfo *)0x0);
      pMVar4 = this;
code_?:
      this = pMVar4;
      (pMVar1->fields).prevWaterProximity = (float)this;
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsInJetpack() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_IsInJetpack
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVJetPack);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar2 = (this->fields)._.mvAvatar;
  if ((pMVar2 != (MVAvatarLocal *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (pMVar1,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
    if (id != -1) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObject *)0x0) {
        if (((TypeInfo__MVJetPack->_1).naturalAligment <= (pMVar3->klass->_1).naturalAligment) &&
           ((MVJetPack__Class *)
            (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVJetPack->_1).naturalAligment - 1] ==
            TypeInfo__MVJetPack)) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void SetAnimationState(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_SetAnimationState
               (MVAvatarLocal_WalkMode *this,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_Idle);
    func_?(&StringLiteral_Swim);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    bVar3 = AvatarMotor::AvatarMotor_IsJumping(pAVar2,(MethodInfo *)0x0);
    (this->fields).isJumping = bVar3;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
      bVar3 = AvatarMotor::AvatarMotor_IsAirJumping(pAVar2,(MethodInfo *)0x0);
      if ((this->fields).swimStartProximity <= (this->fields).prevWaterProximity) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Swim,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (((this->fields).isJumping == 0) || (bVar3 != 0)) {
          pMVar1 = (this->fields)._.mvAvatar;
          if (((this->fields).isJumping & bVar3) == 0) {
            if (_UNK_? <
                moveDirection.y * moveDirection.y + moveDirection.x * moveDirection.x +
                moveDirection.z * moveDirection.z) {
              if (pMVar1 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_SetAnimation
                          (pMVar1,StringLiteral_Walk,(MethodInfo *)0x0);
                return;
              }
            }
            else if (pMVar1 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0)
              ;
              return;
            }
            goto code_?;
          }
          if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
        }
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Jump,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVAvatarLocal+WalkMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor
               (MVAvatarLocal_WalkMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarSound__HandleActiveBounce__);
    func_?(&MethodInfo__AvatarSound__HandleWallJump__);
    func_?(&AvatarSound_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarSound>__);
    func_?(&TypeInfo__AvatarMotor__OnActiveBounceDelegate);
    func_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    func_?(&TypeInfo__AvatarMotor__OnWallJumpDelegate);
    func_?(&MethodInfo__MVAvatarLocal__WalkMode__OnHandleFiring_bool_);
    cRam_? = '\x01';
  }
  (this->fields).swimStartProximity = 0.6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 1;
  if (mvAvatar == (MVAvatarLocal *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar2 = (mvAvatar->fields).pickupOwner;
    if (pAVar2 == (AvatarPickupOwner *)0x0) goto code_?;
    pMVar3 = (pAVar2->fields)._.onHandleFiring;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__MVAvatarLocal__WalkMode__OnHandleFiring_bool_,
               (MethodInfo *)0x0);
    pMVar3 = (MVPickupOwner_OnHandleFiringDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar3 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      (pAVar2->fields)._.onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar4 == MVGameMode__Enum_CharacterEditor) {
code_?:
        this_01 = (AvatarInputControllerTouch *)func_?();
        this = (MVAvatarLocal_WalkMode *)&UNK_?;
        AvatarInputController::AvatarInputController__ctor
                  ((AvatarInputController *)this_01,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
        goto code_?;
        this_01 = (AvatarInputControllerTouch *)func_?();
        this = (MVAvatarLocal_WalkMode *)&UNK_?;
        AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_01,(MethodInfo *)0x0);
      }
      (pMVar1->fields).avatarInputController = (IAvatarInputController *)this_01;
      func_?();
      if ((GameObject *)this_01[3].monitor != (GameObject *)0x0) {
        pAVar5 = (AvatarSound *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           ((GameObject *)this_01[3].monitor,
                            AvatarSound_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarSound>__
                           );
        (pMVar1->fields).avatarSound = pAVar5;
        func_?(&(pMVar1->fields).avatarSound,pAVar5);
        pAVar6 = this_01[8].klass;
        if (pAVar6 != (AvatarInputControllerTouch__Class *)0x0) {
          pDVar7 = (Delegate *)(pAVar6->_1).cctor_thread;
          pAVar5 = (this->fields).avatarSound;
          pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                   func_?(TypeInfo__AvatarMotor__OnWallJumpDelegate);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar8,(Object *)pAVar5,MethodInfo__AvatarSound__HandleWallJump__,
                     (MethodInfo *)0x0);
          pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
          if (pDVar7 == (Delegate *)0x0) {
            (pAVar6->_1).cctor_thread = 0;
          }
          else {
            pDVar9 = (Delegate *)0x0;
            if ((AvatarMotor_OnWallJumpDelegate__Class *)pDVar7->klass ==
                TypeInfo__AvatarMotor__OnWallJumpDelegate) {
              pDVar9 = pDVar7;
            }
            if (pDVar9 == (Delegate *)0x0) goto code_?;
            (pAVar6->_1).cctor_thread = (uint32_t)pDVar9;
            pDVar9 = (Delegate *)0x0;
            if ((AvatarMotor_OnWallJumpDelegate__Class *)pDVar7->klass ==
                TypeInfo__AvatarMotor__OnWallJumpDelegate) {
              pDVar9 = pDVar7;
            }
            if (pDVar9 == (Delegate *)0x0) goto code_?;
          }
          func_?();
          object = _UNK_?;
          pIVar10 = pAVar6[1].vtable.GetHashCode.methodPtr;
          if (pIVar10 != (Il2CppMethodPointer)0x0) {
            pDVar7 = *(Delegate **)(pIVar10 + 0x7c);
            pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                     func_?(TypeInfo__AvatarMotor__OnActiveBounceDelegate);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar8,object,MethodInfo__AvatarSound__HandleActiveBounce__,(MethodInfo *)0x0
                      );
            pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
            if (pDVar7 == (Delegate *)0x0) {
              *(undefined4 *)(pIVar10 + 0x7c) = 0;
              func_?();
              return;
            }
            pDVar9 = (Delegate *)0x0;
            if ((AvatarMotor_OnActiveBounceDelegate__Class *)pDVar7->klass ==
                TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
              pDVar9 = pDVar7;
            }
            if (pDVar9 == (Delegate *)0x0) goto code_?;
            *(Delegate **)(pIVar10 + 0x7c) = pDVar9;
            pDVar9 = (Delegate *)0x0;
            if ((AvatarMotor_OnActiveBounceDelegate__Class *)pDVar7->klass ==
                TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
              pDVar9 = pDVar7;
            }
            if (pDVar9 != (Delegate *)0x0) {
              func_?();
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pMVar11 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar11 = pMVar3;
    }
    if (pMVar11 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
    (pAVar2->fields)._.onHandleFiring = pMVar11;
    pMVar11 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar11 = pMVar3;
    }
    if (pMVar11 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean get_IsSwimming() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_get_IsSwimming
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  return (this->fields).swimStartProximity <= (this->fields).prevWaterProximity;
}

