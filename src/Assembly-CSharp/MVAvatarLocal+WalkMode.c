
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
                          ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffc8,(Transform *)transform
                           ,(MethodInfo *)0x0);
      if (pNVar3->hasValue == 0) {
        QStack_4.x = 0.0;
        QStack_4.y = 0.0;
        QStack_4.z = 0.0;
        QStack_4.w = 0.0;
        uStack_5 = 0;
      }
      else {
        pBVar6 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
                  Nullable_1_UnityEngine_Bounds__get_Value
                            ((Bounds *)&stack0xffffffcc,
                             (Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffac,
                             MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
        QStack_4.x = (pBVar6->m_Center).x;
        QStack_4.y = (pBVar6->m_Center).y;
        QStack_4.z = (pBVar6->m_Center).z;
        QStack_4.w = (pBVar6->m_Extents).x;
        uStack_5._0_4_ = (pBVar6->m_Extents).y;
        uStack_5._4_4_ = (pBVar6->m_Extents).z;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        bounds.m_Center.y = QStack_4.y;
        bounds.m_Center.x = QStack_4.x;
        bounds.m_Center.z = QStack_4.z;
        bounds.m_Extents.x = QStack_4.w;
        bounds.m_Extents.y = (float)(int)uStack_5;
        bounds.m_Extents.z = (float)((ulonglong)uStack_5 >> 0x20);
        MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                  (pMVar1,bounds,(MethodInfo *)0x0);
        pMVar7 = (this->fields)._.mvAvatar;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        uStack_5 = CONCAT44(fVar8,(undefined4)uStack_5);
        if (pMVar7 != (MVAvatarLocal *)0x0) {
          (pMVar7->fields)._.healParticleSpawnTime = fVar8;
          pMVar7 = (this->fields)._.mvAvatar;
          if ((pMVar7 != (MVAvatarLocal *)0x0) &&
             (pMVar9 = (pMVar7->fields)._.shield, pMVar9 != (MVRuntimeDataVariableClampedFloat *)0x0
             )) {
            (*(code *)(pMVar9->klass->vtable).set_Value.method)();
            pMVar7 = (this->fields)._.mvAvatar;
            if ((pMVar7 != (MVAvatarLocal *)0x0) &&
               (this_00 = (pMVar7->fields).triggerHandler, this_00 != (MVTriggerHandler *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_00,1,(MethodInfo *)0x0);
              pMVar7 = (this->fields)._.mvAvatar;
              if (pMVar7 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar7,(MethodInfo *)0x0);
                pMVar7 = (this->fields)._.mvAvatar;
                if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                   (this_01 = (pMVar7->fields)._._._.collider, this_01 != (Collider *)0x0)) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                            (this_01,1,(MethodInfo *)0x0);
                  pMVar7 = (this->fields)._.mvAvatar;
                  pIVar10 = (this->fields).avatarInputController;
                  if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                     (pTVar11 = (pMVar7->fields)._._._.transform, pTVar11 != (Transform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              (&QStack_4,pTVar11,(MethodInfo *)0x0);
                    if (pIVar10 != (IAvatarInputController *)0x0) {
                      func_?(3,TypeInfo__IMotorAPI,pIVar10);
                      pMVar7 = (this->fields)._.mvAvatar;
                      if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                         (this_02 = (pMVar7->fields)._.limbManager,
                         this_02 != (AvatarLimbManager *)0x0)) {
                        AvatarLimbManager::AvatarLimbManager_SetLimbRotatorActivity
                                  (this_02,1,(MethodInfo *)0x0);
                        pMVar7 = (this->fields)._.mvAvatar;
                        if (pMVar7 != (MVAvatarLocal *)0x0) {
                          if ((pMVar7->fields)._.body != (MVBody *)0x0) {
                            MVBody::MVBody_set_Visible((pMVar7->fields)._.body,1,(MethodInfo *)0x0);
                          }
                          bVar12 = MVClientSettings::MVClientSettings_get_ReviveEnabled
                                            ((MethodInfo *)0x0);
                          if (bVar12 != 0) {
                            pSVar13 = MVGameControllerBase::
                                      MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                ((MethodInfo *)0x0);
                            if ((pSVar13 == (SpawnRoleDataMediator *)0x0) ||
                               (this_03 = (WebCompletionSource_1_System_Object_ *)
                                          (pSVar13->fields).reviveState,
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
                          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar14 != (MVNetworkGame *)0x0) &&
                             (pMVar15 = (pMVar14->fields)._NetworkGameStateListener_k__BackingField,
                             pMVar15 != (MVNetworkGameStateListener *)0x0)) {
                            if ((pMVar15->fields).currentGameState == 2) {
                              pMVar7 = (this->fields)._.mvAvatar;
                              if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                                 (this_05 = (pMVar7->fields).avatarLocalModes,
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
                              pMVar16 = MVGameControllerBase::
                                        MVGameControllerBase_get_MainCameraManager
                                                  ((MethodInfo *)0x0);
                              if (pMVar16 != (MainCameraManager *)0x0) {
                                MainCameraManager::MainCameraManager_set_CamMaskMode
                                          (pMVar16,MaskMode__Enum_Default,(MethodInfo *)0x0);
                                pMVar7 = (this->fields)._.mvAvatar;
                                if (pMVar7 != (MVAvatarLocal *)0x0) {
                                  (*(code *)(pMVar7->klass->vtable).set_Visible.method)();
                                  pMVar7 = (this->fields)._.mvAvatar;
                                  if (pMVar7 != (MVAvatarLocal *)0x0) {
                                    pAVar17 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                                        (pMVar7,(MethodInfo *)0x0);
                                    if (pAVar17 != (AvatarLocal *)0x0) {
                                      pIVar18 = (pAVar17->fields).avatarCameraController;
                                      if ((TypeInfo__MainCameraManager->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      if (pIVar18 != (IAvatarCameraController *)0x0) {
                                        func_?();
                                        pMVar16 = MVGameControllerBase::
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                        if (pMVar16 != (MainCameraManager *)0x0) {
                                          pMVar19 = MainCameraManager::
                                                    MainCameraManager_get_CurrentCamera
                                                              (pMVar16,(MethodInfo *)0x0);
                                          if (pMVar19 != (MVCameraBase *)0x0) {
                                            (*(code *)(pMVar19->klass->vtable).Reset.method)();
                                            pMVar16 = MVGameControllerBase::
                                                      MVGameControllerBase_get_MainCameraManager
                                                                ((MethodInfo *)0x0);
                                            if (pMVar16 != (MainCameraManager *)0x0) {
                                              pMVar19 = MainCameraManager::
                                                        MainCameraManager_get_CurrentCamera
                                                                  (pMVar16,(MethodInfo *)0x0);
                                              if (pMVar19 != (MVCameraBase *)0x0) {
                                                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_transform
                                                                    ((Component *)pMVar19,
                                                                     (MethodInfo *)0x0);
                                                pMVar7 = (this->fields)._.mvAvatar;
                                                if ((pMVar7 != (MVAvatarLocal *)0x0) &&
                                                   (this_04 = (pMVar7->fields)._._._.transform,
                                                   this_04 != (Transform *)0x0)) {
                                                  pQVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_rotation
                                                                      (&QStack_4,this_04,
                                                                       (MethodInfo *)0x0);
                                                  if (pTVar11 != (Transform *)0x0) {
                                                    fVar8 = pQVar20->y;
                                                    fVar21 = pQVar20->z;
                                                    fVar22 = pQVar20->w;
                                                    value.y._1_1_ = (char)((uint)fVar8 >> 8);
                                                    value._0_5_ = *(undefined5 *)pQVar20;
                                                    value.y._2_1_ = (char)((uint)fVar8 >> 0x10);
                                                    value.y._3_1_ = (char)((uint)fVar8 >> 0x18);
                                                    value.z._0_1_ = SUB41(fVar21,0);
                                                    value.z._1_1_ = (char)((uint)fVar21 >> 8);
                                                    value.z._2_1_ = (char)((uint)fVar21 >> 0x10);
                                                    value.z._3_1_ = (char)((uint)fVar21 >> 0x18);
                                                    value.w._0_1_ = SUB41(fVar22,0);
                                                    value.w._1_1_ = (char)((uint)fVar22 >> 8);
                                                    value.w._2_1_ = (char)((uint)fVar22 >> 0x10);
                                                    value.w._3_1_ = (char)((uint)fVar22 >> 0x18);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_rotation
                                                              (pTVar11,value,(MethodInfo *)0x0);
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
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
              if (pHRam00000050 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (pHRam00000050,10,
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
    if ((((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) &&
        (pSVar4 = (pAVar2->fields).smoothCharacterController,
        pSVar4 != (SmoothCharacterController *)0x0)) &&
       (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) {
      uVar6 = (pMVar5->fields)._Velocity_k__BackingField.x;
      uVar7 = (pMVar5->fields)._Velocity_k__BackingField.y;
      VStack_8.z = (pMVar5->fields)._Velocity_k__BackingField.z;
      VStack_8.x = (float)uVar6;
      VStack_8.y = (float)uVar7;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (pAVar2->fields).velocityPrevFrame.x = VStack_8.x / fVar9;
      (pAVar2->fields).velocityPrevFrame.y = VStack_8.y / fVar9;
      (pAVar2->fields).velocityPrevFrame.z = VStack_8.z / fVar9;
      return;
    }
    goto code_?;
  }
  if (movementMap == (IInputToPlayerMovement *)0x0) goto code_?;
  puVar10 = (undefined8 *)func_?(&VStack_8,0,TypeInfo__IInputToPlayerMovement,movementMap)
  ;
  uStack_11 = *puVar10;
  fStack_12 = *(float *)(puVar10 + 1);
  pFVar13 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar13 == (FlagDebriefingControl *)0x0) goto code_?;
  if ((pFVar13->fields).IsInFlagDebriefing != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    pIVar14 = (this->fields).avatarInputController;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pTVar15 = (pMVar1->fields)._._._.transform, pTVar15 == (Transform *)0x0)) ||
       (pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            (&QStack_17,pTVar15,(MethodInfo *)0x0),
       pIVar14 == (IAvatarInputController *)0x0)) goto code_?;
    func_?(3,TypeInfo__IMotorAPI,pIVar14,pQVar16->x,pQVar16->y,pQVar16->z,pQVar16->w);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_11._0_4_ = (pVVar18->zeroVector).x;
    uStack_11._4_4_ = (pVVar18->zeroVector).y;
    fStack_12 = (pVVar18->zeroVector).z;
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
     ((pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0 ||
      (pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_8,pTVar15,(MethodInfo *)0x0),
      this_02 == (WaterPlaneManager *)0x0)))) goto code_?;
  fVar20 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                     (this_02,*pVVar19,(MethodInfo *)0x0);
  fVar9 = (this->fields).prevWaterProximity;
  fVar21 = (this->fields).swimStartProximity;
  if ((fVar21 <= fVar9) || (fVar20 < fVar21)) {
    if ((fVar21 < fVar9) && (fVar20 < fVar21)) {
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
  pIVar14 = (this->fields).avatarInputController;
  (this->fields).prevWaterProximity = fVar20;
  uVar22 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
  pMVar1 = (this->fields)._.mvAvatar;
  uStack_23 = CONCAT31(uStack_23._1_3_,uVar22);
  uStack_24 = CONCAT31(uStack_24._1_3_,(this->fields).isFiring);
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    puVar10 = (undefined8 *)
              (*(code *)(pAVar2->klass->vtable).get_Velocity.method)
                        (&QStack_17.y,pAVar2,(pAVar2->klass->vtable).get_IsMovementLocked.methodPtr)
    ;
    uVar25 = *(undefined4 *)(puVar10 + 1);
    pMVar1 = (this->fields)._.mvAvatar;
    VStack_8.y = (float)*puVar10;
    VStack_8.z = (float)((ulonglong)*puVar10 >> 0x20);
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      bVar3 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar1,(MethodInfo *)0x0);
      this = (MVAvatarLocal_WalkMode *)(uint)bVar3;
      pMVar1 = (this_01->fields)._.mvAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) && (pIVar14 != (IAvatarInputController *)0x0)) {
        func_?(0,TypeInfo__IAvatarInputController,pIVar14,(int)uStack_11,
                        (int)((ulonglong)uStack_11 >> 0x20),fStack_12,uStack_23,uStack_24,VStack_8.y,
                        VStack_8.z,uVar25,this,
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
              pIVar14 = (this_01->fields).avatarInputController;
              if (pIVar14 == (IAvatarInputController *)0x0) goto code_?;
              pVVar19 = (Vector3 *)func_?(&QStack_17.y,0,TypeInfo__IMotorAPI,pIVar14);
              MVAvatarLocal_WalkMode_SetAnimationState(this_01,*pVVar19,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
       (this_00 = (pAVar2->fields).smoothCharacterController,
       this_00 == (SmoothCharacterController *)0x0)) goto code_?;
    SmoothCharacterController::SmoothCharacterController_SmoothMove(this_00,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 == (MVAvatarLocal *)0x0) ||
      (this_01 = (pMVar1->fields)._._._.gameObject, this_01 == (GameObject *)0x0)) ||
     (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0), this_04 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xfffffff0,this_04,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
  uVar7 = (pMVar6->fields).worldBounds.m_Extents.y;
  if (fVar5 < ((pMVar6->fields).worldBounds.m_Center.y - (float)uVar7) - _UNK_?) {
    this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_05 == (MVNetworkGame *)0x0) goto code_?;
    interactionMap = (InputToInGameAction *)&UNK_?;
    bVar3 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_05,(MethodInfo *)0x0);
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
       (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) goto code_?;
    cVar11 = (*(code *)(pAVar2->klass->vtable).get_IsMovementLocked.method)();
    if (cVar11 == '\0') {
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (bVar3 == 0) {
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (this_02 = (pMVar1->fields).useInteractorHandler, this_02 == (UseInteractorHandler *)0x0)
           ) goto code_?;
        UseInteractorHandler::UseInteractorHandler_Use(this_02,(MethodInfo *)0x0);
      }
      else {
        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
      }
    }
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar12 = (pMVar1->fields).pickupOwner, pAVar12 == (AvatarPickupOwner *)0x0))
  goto code_?;
  x = (pAVar12->fields)._.currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    MVAvatarLocal_WalkMode_HandlePickupUpdate(this,interactionMap,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar3 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
       (this_03 = (pAVar2->fields).stuckEvaluator, this_03 == (MVRigidBody_StuckEvaluator *)0x0))
    goto code_?;
    bVar3 = MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
                       (this_03,(MethodInfo *)0x0);
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
  bVar3 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    bVar3 = MVAvatarLocal::MVAvatarLocal_get_InGunMode(pMVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar13 == (MainCameraManager *)0x0) ||
       (pMVar14 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar13,(MethodInfo *)0x0),
       pMVar14 == (MVCameraBase *)0x0)) goto code_?;
    iVar15 = (*(code *)(pMVar14->klass->vtable).__unknown.method)();
    if (iVar15 != 0x10) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
       pAVar16 == (AvatarLocal *)0x0)) goto code_?;
    pIVar17 = (pAVar16->fields).avatarCameraController;
  }
  else {
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar13 == (MainCameraManager *)0x0) ||
       (pMVar14 = MainCameraManager::MainCameraManager_get_CurrentCamera(pMVar13,(MethodInfo *)0x0),
       pMVar14 == (MVCameraBase *)0x0)) goto code_?;
    iVar15 = (*(code *)(pMVar14->klass->vtable).__unknown.method)();
    if (iVar15 != 0) goto code_?;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
       pAVar16 == (AvatarLocal *)0x0)) goto code_?;
    pIVar17 = (pAVar16->fields).avatarCameraController;
  }
  if (pIVar17 != (IAvatarCameraController *)0x0) {
    func_?(2,TypeInfo__IAvatarCameraController);
    return;
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
        cVar4 = func_?(3,TypeInfo__IPlayModeUI);
        if (cVar4 != '\0') goto code_?;
        pMVar5 = (this->fields)._.mvAvatar;
        if (((pMVar5 != (MVAvatarLocal *)0x0) &&
            (pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar5,(MethodInfo *)0x0),
            pAVar6 != (AvatarLocal *)0x0)) &&
           (pIVar7 = (pAVar6->fields).avatarCameraController,
           pIVar7 != (IAvatarCameraController *)0x0)) {
          func_?(6,TypeInfo__IAvatarCameraController,pIVar7);
          return;
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
          cVar4 = func_?(3,TypeInfo__IPlayModeUI);
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
                 (pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_rotation
                                      ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0),
                 unaff_ESI != (LobbyStateCamera *)0x0)) {
                bVar9 = (TypeInfo__LobbyStateCamera->_1).naturalAligment;
                if ((bVar9 <= (unaff_ESI->klass->_1).naturalAligment) &&
                   ((unaff_ESI->klass->_1).typeHierarchy[bVar9 - 1] ==
                    (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                  LobbyStateCamera::LobbyStateCamera_SetRotation
                            (unaff_ESI,*pQVar8,(MethodInfo *)0x0);
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


/* Void HandlePickupUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandlePickupUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = this;
  pMVar2 = (this->fields)._.mvAvatar;
  if (((pMVar2 != (MVAvatarLocal *)0x0) &&
      (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
     (pPVar4 = (pAVar3->fields)._.currentItem, pPVar4 != (PickupItem *)0x0)) {
    bVar5 = (pPVar4->fields)._IsHolstered_k__BackingField;
    MVPickupOwner::MVPickupOwner_SetLineOfFireLocal
              ((MVPickupOwner *)(pMVar2->fields).pickupOwner,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pMVar2 = (this->fields)._.mvAvatar;
      if (((pMVar2 == (MVAvatarLocal *)0x0) || (interactionMap == (InputToInGameAction *)0x0)) ||
         (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 == (AvatarPickupOwner *)0x0))
      goto code_?;
      MVPickupOwner::MVPickupOwner_HandleFire
                ((MVPickupOwner *)pAVar3,(interactionMap->fields).fire,(pMVar2->fields)._.IsFiring,
                 (MethodInfo *)0x0);
    }
    pMVar2 = (this->fields)._.mvAvatar;
    if (((pMVar2 != (MVAvatarLocal *)0x0) && (interactionMap != (InputToInGameAction *)0x0)) &&
       (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) {
      this._3_1_ = 0;
      AvatarPickupOwner::AvatarPickupOwner_HandlePointing
                (pAVar3,(interactionMap->fields).fire,(MethodInfo *)0x0);
      pMVar2 = (pMVar1->fields)._.mvAvatar;
      if (((pMVar2 != (MVAvatarLocal *)0x0) &&
          (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
         (pPVar4 = (pAVar3->fields)._.currentItem, pPVar4 != (PickupItem *)0x0)) {
        iVar6 = (*(code *)(pPVar4->klass->vtable).__unknown.method)();
        if (iVar6 == 5) {
          return;
        }
        pMVar2 = (pMVar1->fields)._.mvAvatar;
        if (pMVar2 != (MVAvatarLocal *)0x0) {
          bVar7 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar2,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            if (cRam_? == '\0') {
              this._3_1_ = 0x11;
              func_?();
              cRam_? = '\x01';
            }
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar2 = (pMVar1->fields)._.mvAvatar;
            if ((pMVar2 == (MVAvatarLocal *)0x0) || (pMVar8 == (MVWorldObjectClientManager *)0x0))
            goto code_?;
            id = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                           (pMVar8,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
            if (id == -1) {
              return;
            }
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar8,id,(MethodInfo *)0x0);
            if (pMVar9 == (MVWorldObject *)0x0) {
              return;
            }
            bVar10 = (TypeInfo__MVJetPack->_1).naturalAligment;
            if ((pMVar9->klass->_1).naturalAligment < bVar10) {
              return;
            }
            bVar5 = this._3_1_;
            if ((MVJetPack__Class *)(pMVar9->klass->_1).typeHierarchy[bVar10 - 1] !=
                TypeInfo__MVJetPack) {
              return;
            }
          }
          pMVar2 = (pMVar1->fields)._.mvAvatar;
          if (((pMVar2 != (MVAvatarLocal *)0x0) &&
              (pAVar3 = (pMVar2->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
             (pPVar4 = (pAVar3->fields)._.currentItem, pPVar4 != (PickupItem *)0x0)) {
            cVar11 = (*(code *)(pPVar4->klass->vtable).get_CanHolster.method)();
            if (cVar11 != '\0') {
              if (bVar5 == 0) {
                if ((interactionMap->fields).holster != 0) {
                  pMVar2 = (pMVar1->fields)._.mvAvatar;
                  if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                     (pAVar12 = (pMVar2->fields).avatarEquipable, pAVar12 == (AvatarEquipable *)0x0))
                  goto code_?;
                  (*(code *)(pAVar12->klass->vtable).Holster.method)();
                }
              }
              else if ((interactionMap->fields).holster != 0) {
                pMVar2 = (pMVar1->fields)._.mvAvatar;
                if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                   ((pMVar2->fields).avatarEquipable == (AvatarEquipable *)0x0))
                goto code_?;
                func_?();
              }
            }
            if ((interactionMap->fields).drop != 0) {
              pMVar2 = (pMVar1->fields)._.mvAvatar;
              if ((pMVar2 == (MVAvatarLocal *)0x0) ||
                 (pAVar12 = (pMVar2->fields).avatarEquipable, pAVar12 == (AvatarEquipable *)0x0))
              goto code_?;
              (*(code *)(pAVar12->klass->vtable).Unequip.method)();
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
                  if (*(HashSet_1_System_ByteEnum_ **)(unaff_retaddr + 0x50) !=
                      (HashSet_1_System_ByteEnum_ *)0x0) {
                    bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                            ByteEnum]::HashSet_1_System_ByteEnum__Contains
                                      (*(HashSet_1_System_ByteEnum_ **)(unaff_retaddr + 0x50),0xe,
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
  if ((((pMVar2 != (MVAvatarLocal *)0x0) &&
       (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
      (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) &&
     (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0),
     this_01 != (WaterPlaneManager *)0x0)) {
    pMVar4 = (MVAvatarLocal_WalkMode *)
             WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                       (this_01,*pVVar3,(MethodInfo *)0x0);
    fVar5 = (this->fields).prevWaterProximity;
    fVar6 = (this->fields).swimStartProximity;
    if ((fVar6 <= fVar5) || ((float)pMVar4 < fVar6)) {
      if ((fVar5 <= fVar6) || (fVar6 <= (float)pMVar4)) goto code_?;
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
        bVar4 = (TypeInfo__MVJetPack->_1).naturalAligment;
        if ((bVar4 <= (pMVar3->klass->_1).naturalAligment) &&
           ((MVJetPack__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] == TypeInfo__MVJetPack)
           ) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) &&
     (pJVar3 = (pAVar2->fields).jumpState, pJVar3 != (JumpState *)0x0)) {
    (this->fields).isJumping = (pJVar3->fields).jumping;
    pAVar2 = (pMVar1->fields).avatarMotor;
    if ((pAVar2 != (AvatarMotor *)0x0) &&
       (pJVar3 = (pAVar2->fields).jumpState, pJVar3 != (JumpState *)0x0)) {
      bVar4 = JumpState::JumpState_get_AirJumping(pJVar3,(MethodInfo *)0x0);
      if ((this->fields).swimStartProximity <= (this->fields).prevWaterProximity) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Swim,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        bVar5 = (this->fields).isJumping;
        if ((bVar5 == 0) || (bVar4 != 0)) {
          pMVar1 = (this->fields)._.mvAvatar;
          if ((bVar4 & bVar5) == 0) {
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVAvatarLocal+WalkMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor
               (MVAvatarLocal_WalkMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._.mvAvatar = mvAvatar;
  func_?(&this->fields,mvAvatar);
  (this->fields)._.modeTypes = 1;
  if (mvAvatar == (MVAvatarLocal *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar1 = (mvAvatar->fields).pickupOwner;
    if (pAVar1 == (AvatarPickupOwner *)0x0) goto code_?;
    pMVar2 = (pAVar1->fields)._.onHandleFiring;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__MVAvatarLocal__WalkMode__OnHandleFiring_bool_,
               (MethodInfo *)0x0);
    pMVar2 = (MVPickupOwner_OnHandleFiringDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar2 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      (pAVar1->fields)._.onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar3 == MVGameMode__Enum_CharacterEditor) {
code_?:
        this_02 = (AvatarInputControllerTouch *)func_?();
        this = (MVAvatarLocal_WalkMode *)&UNK_?;
        AvatarInputController::AvatarInputController__ctor
                  ((AvatarInputController *)this_02,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
        goto code_?;
        this_02 = (AvatarInputControllerTouch *)func_?();
        this = (MVAvatarLocal_WalkMode *)&UNK_?;
        AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_02,(MethodInfo *)0x0);
      }
      (this->fields).avatarInputController = (IAvatarInputController *)this_02;
      func_?();
      this_00 = (mvAvatar->fields)._._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        pAVar4 = (AvatarSound *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_00,
                            AvatarSound_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarSound>__
                           );
        ppAVar5 = &(this->fields).avatarSound;
        *ppAVar5 = pAVar4;
        func_?(ppAVar5,pAVar4);
        pAVar6 = (mvAvatar->fields).avatarMotor;
        if (pAVar6 != (AvatarMotor *)0x0) {
          pAVar7 = (pAVar6->fields).OnWallJump;
          pAVar4 = *ppAVar5;
          pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                   func_?(TypeInfo__AvatarMotor__OnWallJumpDelegate);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar8,(Object *)pAVar4,MethodInfo__AvatarSound__HandleWallJump__,
                     (MethodInfo *)0x0);
          pAVar7 = (AvatarMotor_OnWallJumpDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
          if (pAVar7 == (AvatarMotor_OnWallJumpDelegate *)0x0) {
            (pAVar6->fields).OnWallJump = (AvatarMotor_OnWallJumpDelegate *)0x0;
          }
          else {
            pAVar9 = (AvatarMotor_OnWallJumpDelegate *)0x0;
            if (pAVar7->klass == TypeInfo__AvatarMotor__OnWallJumpDelegate) {
              pAVar9 = pAVar7;
            }
            if (pAVar9 == (AvatarMotor_OnWallJumpDelegate *)0x0) goto code_?;
            (pAVar6->fields).OnWallJump = pAVar9;
            pAVar9 = (AvatarMotor_OnWallJumpDelegate *)0x0;
            if (pAVar7->klass == TypeInfo__AvatarMotor__OnWallJumpDelegate) {
              pAVar9 = pAVar7;
            }
            if (pAVar9 == (AvatarMotor_OnWallJumpDelegate *)0x0) goto code_?;
          }
          func_?();
          fVar10 = pAVar6[3].fields.walkSpeedBase;
          if (fVar10 != 0.0) {
            pDVar11 = *(Delegate **)((int)fVar10 + 0x7c);
            pAVar4 = *ppAVar5;
            pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                     func_?(TypeInfo__AvatarMotor__OnActiveBounceDelegate);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar8,(Object *)pAVar4,MethodInfo__AvatarSound__HandleActiveBounce__,
                       (MethodInfo *)0x0);
            pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar11,(Delegate *)pNVar8,(MethodInfo *)0x0);
            if (pDVar11 == (Delegate *)0x0) {
              *(undefined4 *)((int)fVar10 + 0x7c) = 0;
              func_?();
              return;
            }
            pDVar12 = (Delegate *)0x0;
            if ((AvatarMotor_OnActiveBounceDelegate__Class *)pDVar11->klass ==
                TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
              pDVar12 = pDVar11;
            }
            if (pDVar12 == (Delegate *)0x0) goto code_?;
            *(Delegate **)((int)fVar10 + 0x7c) = pDVar12;
            pDVar12 = (Delegate *)0x0;
            if ((AvatarMotor_OnActiveBounceDelegate__Class *)pDVar11->klass ==
                TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
              pDVar12 = pDVar11;
            }
            if (pDVar12 != (Delegate *)0x0) {
              func_?();
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pMVar13 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar13 = pMVar2;
    }
    if (pMVar13 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
    (pAVar1->fields)._.onHandleFiring = pMVar13;
    pMVar13 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar13 = pMVar2;
    }
    if (pMVar13 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean get_IsSwimming() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_get_IsSwimming
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  return (this->fields).swimStartProximity <= (this->fields).prevWaterProximity;
}

