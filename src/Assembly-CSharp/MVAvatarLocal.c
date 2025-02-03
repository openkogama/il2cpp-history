
/* Void Activate(Int32, SpawnRoleDataReceiver, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Activate
               (MVAvatarLocal *this,int32_t idFrom,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               Vector3 position,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__AvatarLocal);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__);
    func_?(&TypeInfo__MVBuildModeAvatar);
    cRam_? = '\x01';
  }
  (this->fields).suspended = 0;
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  MVAvatarLocal_SubscribeToExternalEvents(this,(MethodInfo *)0x0);
  (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
  func_?(&(this->fields).spawnRoleDataReceiver,spawnRoleDataReceiver);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        bVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0)
        ;
code_?:
        if (bVar2 != 0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
              (IPlayModeUI *)0x0) goto code_?;
          idFrom = (int32_t)&UNK_?;
          func_?();
        }
      }
code_?:
      MVAvatarLocal_SetToSpawnTransform(this,(MethodInfo *)0x0);
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_03,idFrom,(MethodInfo *)0x0);
        if (((pMVar3 != (MVWorldObject *)0x0) &&
            ((TypeInfo__MVBuildModeAvatar->_1).naturalAligment <=
             (pMVar3->klass->_1).naturalAligment)) &&
           ((MVBuildModeAvatar__Class *)
            (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVBuildModeAvatar->_1).naturalAligment - 1]
            == TypeInfo__MVBuildModeAvatar)) {
          (*(code *)(this->klass->vtable).set_Position.method)();
          (*(code *)(this->klass->vtable).set_Rotation.method)();
          puVar4 = (undefined8 *)(*(code *)(this->klass->vtable).get_Position.method)();
          uVar5 = *puVar4;
          fVar6 = *(float *)(puVar4 + 1);
          pQVar7 = (Quaternion *)
                   (*(code *)(this->klass->vtable).get_Rotation.method)(&stack0xffffffe4);
          position_00.z = fVar6;
          position_00.x = (float)(int)uVar5;
          position_00.y = (float)(int)((ulonglong)uVar5 >> 0x20);
          MVAvatarLocal_SetTransform(this,position_00,*pQVar7,(MethodInfo *)0x0);
        }
        MVAvatarLocal_SetupSpawnroleReceiver(this,(SpawnRoleDataReceiver *)0x0,(MethodInfo *)0x0);
        pAVar8 = (this->fields)._.avatar;
        if (pAVar8 != (Avatar *)0x0) {
          if (((pAVar8->klass->_1).naturalAligment < (TypeInfo__AvatarLocal->_1).naturalAligment) ||
             ((pAVar8->klass->_1).typeHierarchy[(TypeInfo__AvatarLocal->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarLocal)) goto code_?;
          if (pAVar8[1].klass != (Avatar__Class *)0x0) {
            func_?();
            if ((this->fields)._._._._.id == 0) {
code_?:
              this_04 = (this->fields).avatarLocalModes;
              if (this_04 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
                spawnRoleDataReceiver = (SpawnRoleDataReceiver *)&UNK_?;
code_?:
                MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                          (this_04,(AvatarRuntimeState__Enum)spawnRoleDataReceiver,(MethodInfo *)0x0
                          );
                this_00 = (this->fields)._._._.gameObject;
                if (this_00 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_00,1,(MethodInfo *)0x0);
                  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar9 != (MVNetworkGame *)0x0) &&
                     (this_01 = (pMVar9->fields)._PlayerController_k__BackingField,
                     this_01 != (MVLocalObjectController *)0x0)) {
                    MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
                              (this_01,(ILocalObject *)this,(MethodInfo *)0x0);
                    distanceReferencePoint = (this->fields)._._._.transform;
                    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                              (distanceReferencePoint,(MethodInfo *)0x0);
                    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar9 != (MVNetworkGame *)0x0) &&
                       (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                           (pMVar9,(MethodInfo *)0x0),
                       pMVar1 != (MVLocalPlayer *)0x0)) {
                      this_02 = (pMVar1->fields).boostController;
                      this_05 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (this_05,(Object *)this,
                                 MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__,
                                 (MethodInfo *)0x0);
                      if (this_02 != (BoostController *)0x0) {
                        BoostController::BoostController_SubscribeToBoostChanged
                                  (this_02,BoostType__Enum_ExtraHealthFloatMultiplier,
                                   (Action *)this_05,(MethodInfo *)0x0);
                        MVAvatarLocal_OnHealthBoostedChanged(this,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            else {
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar9 != (MVNetworkGame *)0x0) &&
                 (pMVar10 = (pMVar9->fields)._NetworkGameStateListener_k__BackingField,
                 pMVar10 != (MVNetworkGameStateListener *)0x0)) {
                if ((pMVar10->fields).currentGameState == 2) goto code_?;
                this_04 = (this->fields).avatarLocalModes;
                if (this_04 == (MVAvatarLocal_AvatarLocalModes *)0x0) goto code_?;
                spawnRoleDataReceiver = (SpawnRoleDataReceiver *)&UNK_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        bVar2 = func_?();
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AttachBody
               (MVAvatarLocal *this,MVBody *newBody,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_AttachBody((MVAvatar *)this,newBody,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (newBody != (MVBody *)0x0) {
      MVBody::MVBody_set_Visible(newBody,bVar2 != 0,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                  (pMVar3,(newBody->fields)._._._._.id,0,(Transform *)0x0,(MethodInfo *)0x0);
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVGroup::MVGroup_get_Children((MVGroup *)newBody,(MethodInfo *)0x0);
        if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffd8,this_01,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                             );
          RVar5 = pLVar4->_current;
          while( true ) {
            bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar2 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffc8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                         ,in_stack_6);
              *unaff_FS_OFFSET = puStack_1;
              return;
            }
            RVar7 = RVar5;
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if ((RVar5 == (RegexCharClass_SingleRange)0x0) ||
               (pMVar3 == (MVNetworkGame_OperationRequests *)0x0)) break;
            in_stack_6 = (MethodInfo *)0x0;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                      (pMVar3,*(int32_t *)((int)RVar5 + 8),0,(Transform *)0x0,(MethodInfo *)0x0);
            RVar5 = RVar7;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AvatarCommandsOnMoveBodyToSafeSpot(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnMoveBodyToSafeSpot
               (MVAvatarLocal *this,int32_t safeSpotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                   );
    func_?(&StringLiteral_Move_to_safe_spot);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Move_to_safe_spot,(MethodInfo *)0x0);
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if ((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (pSVar1->fields).lastRespawnType,
     this_00 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,1,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
              );
    pSVar1 = (this->fields).spawnRoleDataReceiver;
    if ((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
       (pSVar2 = (pSVar1->fields).reviveState,
       pSVar2 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
      pRVar3 = (ReviveState *)
               Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleReceiverVariable`1[System::Object]::
               SpawnRoleReceiverVariable_1_System_Object__get_Value
                         ((SpawnRoleReceiverVariable_1_System_Object_ *)pSVar2,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                         );
      if (pRVar3 != (ReviveState *)0x0) {
        ReviveState::ReviveState_SetSafeGroundedDataIndex(pRVar3,safeSpotIndex,(MethodInfo *)0x0);
        pSVar1 = (this->fields).spawnRoleDataReceiver;
        if ((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
           (pSVar2 = (pSVar1->fields).reviveState,
           pSVar2 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
          pRVar3 = (ReviveState *)
                   Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
                   SpawnRoleReceiverVariable_1_System_Object__get_Value
                             ((SpawnRoleReceiverVariable_1_System_Object_ *)pSVar2,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                             );
          if (pRVar3 != (ReviveState *)0x0) {
            pSVar4 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                               ((SafeSpotData *)&stack0xffffff54,pRVar3,(MethodInfo *)0x0);
            position = pSVar4->Position;
            uVar5 = (pSVar4->CameraRotation).w;
            uVar6 = (pSVar4->CameraRotation).x;
            uVar7 = (pSVar4->CameraRotation).y;
            uVar8 = (pSVar4->CameraRotation).z;
            value.z = (float)uVar8;
            value.y = (float)uVar7;
            value.x = (float)uVar6;
            puVar9 = (undefined8 *)func_?();
            uStack_10 = *puVar9;
            fStack_11 = *(float *)(puVar9 + 1);
            puVar9 = (undefined8 *)func_?();
            uStack_12._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
            fStack_13 = fStack_11 * _UNK_?;
            euler.y = uStack_12._4_4_ * _UNK_?;
            euler.x = (float)uStack_10 * _UNK_?;
            euler.z = fStack_13;
            uStack_12 = *puVar9;
            pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad(&QStack_15,euler,(MethodInfo *)0x0);
            MVAvatarLocal_SetTransform(this,position,*pQVar14,(MethodInfo *)0x0);
            this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_02 != (MainCameraManager *)0x0) {
              this_03 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                  (this_02,(MethodInfo *)0x0);
              if (this_03 != (MVCameraBase *)0x0) {
                this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_03,(MethodInfo *)0x0);
                if (this_04 != (Transform *)0x0) {
                  value.w = (float)uVar5;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (this_04,value,(MethodInfo *)0x0);
                  this_01 = (this->fields).avatarLocalModes;
                  if (this_01 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
                    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                              (this_01,AvatarRuntimeState__Enum_ReviveWait,(MethodInfo *)0x0);
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
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void AvatarCommandsOnRespawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnRespawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 != (AvatarRespawnHandler *)0x0) {
    this._1_3_ = (undefined3)((uint)pAVar1 >> 8);
    if ((pAVar1->fields).shouldRespawnAsGhost == 0) {
      pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar2 != (FlagDebriefingControl *)0x0) {
        this_00 = (pAVar1->fields).mvAvatar;
        if ((pFVar2->fields).IsInFlagDebriefing == 0) {
          if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
          this = (MVAvatarLocal *)CONCAT31(this._1_3_,1);
        }
        else {
          if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
          this = (MVAvatarLocal *)CONCAT31(this._1_3_,7);
        }
code_?:
        MVAvatarLocal_SetMode(this_00,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0);
        (pAVar1->fields).shouldRespawnAsGhost = 1;
        return;
      }
    }
    else {
      pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar2 != (FlagDebriefingControl *)0x0) {
        if ((pFVar2->fields).IsInFlagDebriefing != 0) {
          return;
        }
        this_00 = (pAVar1->fields).mvAvatar;
        if (this_00 != (MVAvatarLocal *)0x0) {
          this = (MVAvatarLocal *)CONCAT31(this._1_3_,9);
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AvatarCommandsOnSetToSpawnMode() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnSetToSpawnMode
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_CancelTransitionCam(this_00,(MethodInfo *)0x0);
    this_01 = MVAvatarLocal_GetSpawnTransform(this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      uVar4 = pQVar3->x;
      uVar5 = pQVar3->y;
      position.y = (float)uVar5;
      position.x = (float)uVar4;
      position.z = fVar2;
      MVAvatarLocal_SetTransform((MVAvatarLocal *)0x0,position,*pQVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AvatarCommandsOnSpawnAtSafeSpot(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnSpawnAtSafeSpot
               (MVAvatarLocal *this,int32_t safeSpotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_SetMode_to_playing_from_SafeSpot);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_SetMode_to_playing_from_SafeSpot,(MethodInfo *)0x0);
  MVAvatarLocal_AvatarCommandsOnMoveBodyToSafeSpot(this,safeSpotIndex,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 != (AvatarRespawnHandler *)0x0) {
    (pAVar1->fields).shouldRespawnAsGhost = 0;
    pAVar1 = (this->fields).avatarRespawnHandler;
    if (pAVar1 != (AvatarRespawnHandler *)0x0) {
      AvatarRespawnHandler::AvatarRespawnHandler_Respawn(pAVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnReadyScreenShot() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnReadyScreenShot
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).avatarFader, this_00 != (AvatarFader *)0x0)) {
    AvatarFader::AvatarFader_SetTransparency(this_00,1.0,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnRemoveFromGame() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnRemoveFromGame
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarLocalModes;
  if (this_00 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_00,AvatarRuntimeState__Enum_Hidden,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnSpawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnSpawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarLocalModes;
  if (this_00 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_00,AvatarRuntimeState__Enum_Playing,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing(WinningConditionType) */

void Assembly-CSharp.dll::MVAvatarLocal::
     MVAvatarLocal_AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing
               (MVAvatarLocal *this,WinningConditionType__Enum winningConditionType,
               MethodInfo *method)

{
  if (winningConditionType == WinningConditionType__Enum_TimeAttackFlag) {
    pMVar1 = (this->fields).avatarLocalModes;
    if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                       );
        cRam_? = '\x01';
      }
      pMVar2 = (pMVar1->fields).currentMode;
      this = (MVAvatarLocal *)CONCAT31((int3)((uint)pMVar1 >> 8),(pMVar1->fields).currentState);
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(code *)(pMVar2->klass->vtable).__unknown.method)
                  (pMVar2,7,(pMVar2->klass->vtable).__unknown_1.methodPtr);
        this_00 = (pMVar1->fields).avatarModes;
        if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
          pMVar2 = (MVAvatarLocal_AvatarMode *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,7,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                             );
          (pMVar1->fields).currentMode = pMVar2;
          func_?(&(pMVar1->fields).currentMode,pMVar2);
          pMVar2 = (pMVar1->fields).currentMode;
          (pMVar1->fields).currentState = 7;
          if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
            (*(code *)(pMVar2->klass->vtable).Activate.method)
                      (pMVar2,this,pMVar2->klass[1]._0.image);
            return;
          }
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar4 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar4);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Not_implemented);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
    func_?(&
                    MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                   );
    func_?(this_01);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarStateChangedHandler
               (MVAvatarLocal *this,Object *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass96_0___AvatarStateChangedHandler_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass96_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass96_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)a;
    func_?(value + 1,a);
    MVAvatar::MVAvatar_AvatarStateChangedHandler
              ((MVAvatar *)this,(Object *)value[1].klass,(MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVAvatarLocal____c__DisplayClass96_0___AvatarStateChangedHandler_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
               ,(MethodInfo *)0x0);
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
      (*(this_00->fields)._._.invoke_impl)
                ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (this_00->fields)._._.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void BeforeVehicleEntered() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_BeforeVehicleEntered
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_02 = (this->fields).triggerHandler;
  if (this_02 != (MVTriggerHandler *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
                     );
      cRam_? = '\x01';
    }
    DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_1._version = 0;
    DStack_1._index = 0;
    DStack_1._current.key = 0;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 0;
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this_02->fields).triggerBoxEvents;
    (this_02->fields).wasResetThisFrame = 1;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_3,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                         );
      DStack_1._dictionary = pDVar2->_dictionary;
      DStack_1._version = pDVar2->_version;
      DStack_1._index = pDVar2->_index;
      DStack_1._current.key = (pDVar2->_current).key;
      DStack_1._16_8_ = *(undefined8 *)&(pDVar2->_current).value;
      while( true ) {
        DStack_1._getEnumeratorRetType = (int32_t)&UNK_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_1,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                          );
        if (bVar4 == 0) break;
        this_03 = DStack_1._current.value;
        method_00 = (MethodInfo *)
                    MVTriggerHandler::MVTriggerHandler_get_TriggingCollider
                              (this_02,(MethodInfo *)0x0);
        if ((TriggerBoxEvents *)this_03 == (TriggerBoxEvents *)0x0) goto code_?;
        TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                  ((TriggerBoxEvents *)this_03,(Collider *)method_00,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_1,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                 ,method_00);
      this_04 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this_02->fields).newTriggerBoxEvents;
      if (this_04 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (this_04,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(this_02->fields).triggerBoxEvents;
        if (this_01 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                    );
          *unaff_FS_OFFSET = this_04;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 CalculateVehicleExitMomentum(Vector3) */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_CalculateVehicleExitMomentum
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,Vector3 velocity,
                    MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = (velocity.z / fVar1) * _UNK_?;
  velocity.x = (velocity.x / fVar1) * _UNK_?;
  fVar1 = (velocity.y / fVar1) * _UNK_?;
  velocity.y = fVar1;
  velocity.z = fVar2;
  fVar3 = (float10)func_?(&velocity,0);
  fVar4 = (float10)_UNK_?;
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = (float)(fVar3 / fVar4 + (float10)fVar1);
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void DeActivate(Int32, SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_DeActivate
               (MVAvatarLocal *this,int32_t idTo,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Removing_network_object_again_as);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarLocalModes;
  if (this_00 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    AVar1 = MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
                      (this_00,(MethodInfo *)0x0);
    this = (MVAvatarLocal *)CONCAT31(this._1_3_,(char)AVar1);
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_00,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0);
    pAVar2 = (this_03->fields).avatarEquipable;
    if (pAVar2 != (AvatarEquipable *)0x0) {
      (*(code *)(pAVar2->klass->vtable).Unequip.method)();
      pAVar3 = (this_03->fields).interactableLocal;
      if (pAVar3 != (AvatarInteractable *)0x0) {
        (*(code *)(pAVar3->klass->vtable).ClearModifiers.method)();
        MVAvatarLocal_UnsubscribeFromExternalEvents(this_03,(MethodInfo *)0x0);
        this_01 = (this_03->fields)._._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          (this_03->fields).spawnRoleDataReceiver = (SpawnRoleDataReceiver *)0x0;
          func_?();
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (this_02 = (pMVar4->fields)._PlayerController_k__BackingField,
             this_02 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_RemoveAvatarLocalObject
                      (this_02,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (pTVar5 = (pMVar4->fields).transformNetworkManager,
               pTVar5 != (TransformNetworkManager *)0x0)) {
              pMVar6 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                 (pTVar5,(this_03->fields)._._._._.id,(MethodInfo *)0x0);
              if (pMVar6 != (MVNetworkObject *)0x0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)StringLiteral_Removing_network_object_again_as,
                           (MethodInfo *)0x0);
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 == (MVNetworkGame *)0x0) ||
                   (pTVar5 = (pMVar4->fields).transformNetworkManager,
                   pTVar5 == (TransformNetworkManager *)0x0)) goto code_?;
                TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                          (pTVar5,(this_03->fields)._._._._.id,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Die() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Die(MVAvatarLocal *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                   );
    cRam_? = '\x01';
  }
  bVar4 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)this,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uStack_1 = 1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  func_?(8);
  pMVar5 = (this->fields)._.shield;
  if (pMVar5 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
  (*(code *)(pMVar5->klass->vtable).set_Value.method)();
  bVar4 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar4 == 0) {
code_?:
    bStack_6 = 0;
code_?:
    pSVar7 = (this->fields).spawnRoleDataReceiver;
    if (((pSVar7 == (SpawnRoleDataReceiver *)0x0) ||
        (pSVar8 = (pSVar7->fields).reviveState,
        pSVar8 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) ||
       (pRVar9 = (ReviveState *)
                 Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleReceiverVariable`1[System::Object]::
                 SpawnRoleReceiverVariable_1_System_Object__get_Value
                           ((SpawnRoleReceiverVariable_1_System_Object_ *)pSVar8,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                           ), pRVar9 == (ReviveState *)0x0)) goto code_?;
    ReviveState::ReviveState_ResetSafePostions(pRVar9,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = (this->fields).spawnRoleDataReceiver;
    if (((pSVar7 == (SpawnRoleDataReceiver *)0x0) ||
        (pSVar8 = (pSVar7->fields).reviveState,
        pSVar8 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) ||
       (pRVar9 = (ReviveState *)
                 Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleReceiverVariable`1[System::Object]::
                 SpawnRoleReceiverVariable_1_System_Object__get_Value
                           ((SpawnRoleReceiverVariable_1_System_Object_ *)pSVar8,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                           ), pRVar9 == (ReviveState *)0x0)) goto code_?;
    bVar4 = ReviveState::ReviveState_get_CanSafelySpawn(pRVar9,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    pAVar10 = (this->fields).avatarMotor;
    if (pAVar10 == (AvatarMotor *)0x0) goto code_?;
    this_00 = (pAVar10->fields)._GetSizeState_k__BackingField;
    pSVar7 = (this->fields).spawnRoleDataReceiver;
    if (((pSVar7 == (SpawnRoleDataReceiver *)0x0) ||
        (pSVar8 = (pSVar7->fields).reviveState,
        pSVar8 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) ||
       (pRVar9 = (ReviveState *)
                 Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleReceiverVariable`1[System::Object]::
                 SpawnRoleReceiverVariable_1_System_Object__get_Value
                           ((SpawnRoleReceiverVariable_1_System_Object_ *)pSVar8,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                           ), pRVar9 == (ReviveState *)0x0)) goto code_?;
    pSVar11 = ReviveState::ReviveState_get_SafeGroundedData
                       ((SafeSpotData *)&stack0xffffff6c,pRVar9,(MethodInfo *)0x0);
    if (this_00 == (SizeState *)0x0) goto code_?;
    bStack_6 = SizeState::SizeState_GetIsValidScaledPosition
                          (this_00,pSVar11->Position,1.0,(MethodInfo *)0x0);
    if (bStack_6 == 0) goto code_?;
  }
  this_01 = (this->fields).avatarLocalModes;
  if (this_01 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    mode = AvatarRuntimeState__Enum_Revive;
    if (bStack_6 == 0) {
      mode = AvatarRuntimeState__Enum_Dead;
    }
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_01,mode,(MethodInfo *)0x0);
    uStack_1 = 0xffffffff;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      func_?(8);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_FixedUpdate
          (MVAvatarLocal *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).avatarLocalModes;
  if ((pMVar2 != (MVAvatarLocal_AvatarLocalModes *)0x0) &&
     (pMStack_3 = (pMVar2->fields).currentMode, pMStack_3 != (MVAvatarLocal_AvatarMode *)0x0)) {
    pIStack_1 = (pMStack_3->klass->vtable).__unknown_2.methodPtr;
    pIStack_4 = movementMap;
    (*(code *)(pMStack_3->klass->vtable).__unknown_1.method)();
    return movementMap;
  }
  uVar5 = func_?(&pMStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pIVar7 = (IInputToPlayerMovement *)(*pcVar6)();
  return pIVar7;
}


/* Void GameEventManagerOnOnFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameEventManagerOnOnFirstTimeEvent
               (MVAvatarLocal *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FirstTimeAvatarJumpAnimator_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeAvatarJumpAnimator>__
                   );
    cRam_? = '\x01';
  }
  if (firstTimeEvent != FirstTimeEvent__Enum_PM_LobbyState) {
    return;
  }
  this_00 = (this->fields)._._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_00,
                          FirstTimeAvatarJumpAnimator_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeAvatarJumpAnimator>__
                         ), pOVar1 != (Object *)0x0)) {
    pOVar1[3].klass = (Object__Class *)this;
    func_?(pOVar1 + 3,this);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GameEventManagerOnOnXpRewarded(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameEventManagerOnOnXpRewarded
               (MVAvatarLocal *this,int32_t obj,MethodInfo *method)

{
  this_01 = MVAvatarLocal_get_AvatarLocal(this,(MethodInfo *)0x0);
  if ((((this_01 != (AvatarLocal *)0x0) &&
       (pMVar1 = (this_01->fields)._.mvAvatar, pMVar1 != (MVAvatar *)0x0)) &&
      (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
     (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (this_00,(MethodInfo *)0x0);
    AvatarLocal::AvatarLocal_CreateXPParticlesWithLayer(this_01,obj,layer,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GameStateTypeOnOnChange(MVGameStateType) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameStateTypeOnOnChange
               (MVAvatarLocal *this,MVGameStateType__Enum gameStateType,MethodInfo *method)

{
  if (gameStateType == MVGameStateType__Enum_RoundEnded) {
    this_00 = (this->fields).avatarLocalModes;
    if (this_00 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this_00->fields).currentState != 0) {
      MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                (this_00,AvatarRuntimeState__Enum_Wait,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Int32 GetBoostedHealth(Int32) */

int32_t Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetBoostedHealth
                  (MVAvatarLocal *this,int32_t unBoostedMaxHealth,MethodInfo *method)

{
  fVar1 = (this->fields).boostedHealthMultiplier;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)((float)unBoostedMaxHealth * fVar1));
  return (int)fVar2;
}


/* Single GetColliderRadius() */

float Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetColliderRadius
                (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarMotor;
  if (((pAVar1 != (AvatarMotor *)0x0) &&
      (pSVar2 = (pAVar1->fields)._GetSizeState_k__BackingField, pSVar2 != (SizeState *)0x0)) &&
     (pMVar3 = (pSVar2->fields).controllerLocal, pMVar3 != (MvCharacterController *)0x0)) {
    return (pMVar3->fields).elipsoidRadius.x;
  }
  puStack_4 = &stack0xfffffffc;
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Dictionary`2[System.Object,System.Object] GetCurrentItemState() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetCurrentItemState
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.CurrentItem;
  if (this_00 == (MVRuntimeDataVariable *)0x0) {
    func_?();
  }
  else {
    unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)
                MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= (unaff_ESI->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_ESI->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,unaff_EDI);
  pcVar1 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar1)();
  return pDVar2;
}


/* Transform GetSpawnTransform() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetSpawnTransform
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c);
    func_?(&StringLiteral_No_spawn_point_found_on_planet_);
    func_?(&StringLiteral_Spawn_role_creator_was_destroyed);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVAvatarLocal *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pMVar2 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (pMVar2 == (MVCheckpoint *)0x0) {
        if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        unaff_EDI = (MVWorldObjectClient__Class *)
                    TypeInfo__MVAvatarLocal____c->static_fields->__9__141_1;
        if (unaff_EDI == (MVWorldObjectClient__Class *)0x0) {
          if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVAvatarLocal____c);
          }
          object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
          unaff_EDI = (MVWorldObjectClient__Class *)
                      func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    ((UnityAction_1_System_Object_ *)unaff_EDI,(Object *)object,
                     MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                     ,(MethodInfo *)0x0);
          TypeInfo__MVAvatarLocal____c->static_fields->__9__141_1 =
               (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)unaff_EDI;
          func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__141_1,unaff_EDI);
        }
        unaff_ESI = this;
        if (this != (MVAvatarLocal *)0x0) {
          if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
            if (unaff_EDI == (MVWorldObjectClient__Class *)0x0) goto code_?;
            uVar3._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar3._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar3._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)
                      ((unaff_EDI->_0).element_class,(this->fields).spawnRoleDataReceiver,uVar3);
          }
          if ((this->fields).spawnWorldObjectId == -1) {
code_?:
            pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                               ((MethodInfo *)0x0);
            if (pMVar4 != (MVWorldObjectClient *)0x0) {
              return (pMVar4->fields).transform;
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_No_spawn_point_found_on_planet_,(MethodInfo *)0x0);
            return (Transform *)0x0;
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClientManager *)0x0) {
            bVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                              (this_02,(this->fields).spawnWorldObjectId,
                               (MVWorldObject **)&pMStack_1,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Spawn_role_creator_was_destroyed,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            unaff_ESI = pMStack_1;
            unaff_EDI = TypeInfo__MVWorldObjectClient;
            if (pMStack_1 != (MVAvatarLocal *)0x0) {
              if ((((TypeInfo__MVWorldObjectClient->_1).naturalAligment <=
                    (pMStack_1->klass->_1).naturalAligment) &&
                  ((MVWorldObjectClient__Class *)
                   (pMStack_1->klass->_1).typeHierarchy
                   [(TypeInfo__MVWorldObjectClient->_1).naturalAligment - 1] ==
                   TypeInfo__MVWorldObjectClient)) && (pMStack_1 != (MVAvatarLocal *)0x0)) {
                return (pMStack_1->fields)._._._.transform;
              }
              goto code_?;
            }
          }
        }
      }
      else {
        if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        unaff_EDI = (MVWorldObjectClient__Class *)
                    TypeInfo__MVAvatarLocal____c->static_fields->__9__141_0;
        if (unaff_EDI == (MVWorldObjectClient__Class *)0x0) {
          if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVAvatarLocal____c);
          }
          unaff_ESI = (MVAvatarLocal *)TypeInfo__MVAvatarLocal____c->static_fields->__9;
          unaff_EDI = (MVWorldObjectClient__Class *)
                      func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    ((UnityAction_1_System_Object_ *)unaff_EDI,(Object *)unaff_ESI,
                     MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                     ,(MethodInfo *)0x0);
          TypeInfo__MVAvatarLocal____c->static_fields->__9__141_0 =
               (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)unaff_EDI;
          func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__141_0,unaff_EDI);
        }
        if (this != (MVAvatarLocal *)0x0) {
          if ((this->fields).spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) {
code_?:
            return (pMVar2->fields)._._.transform;
          }
          if (unaff_EDI != (MVWorldObjectClient__Class *)0x0) {
            uVar6._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar6._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar6._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)
                      ((unaff_EDI->_0).element_class,(this->fields).spawnRoleDataReceiver,uVar6);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar7 = (code *)swi(3);
  pTVar8 = (Transform *)(*pcVar7)();
  return pTVar8;
}


/* GamePassTier GetTierRequirement() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetTierRequirement
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                      (this_00,(this->fields).spawnWorldObjectId,(MVWorldObject **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    ppIVar2 = (Il2CppClass **)CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (unaff_ESI != (MVAvatarSpawnRoleCreator *)0x0)) {
      pMVar3 = unaff_ESI->klass;
      bVar4 = (pMVar3->_1).naturalAligment;
      ppIVar2 = (Il2CppClass **)CONCAT31(extraout_var,bVar4);
      if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <= bVar4) &&
         ((ppIVar2 = (pMVar3->_1).typeHierarchy,
          (MVAvatarSpawnRoleCreator__Class *)
          ppIVar2[(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] ==
          TypeInfo__MVAvatarSpawnRoleCreator && (unaff_ESI != (MVAvatarSpawnRoleCreator *)0x0)))) {
        if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <=
             (pMVar3->_1).naturalAligment) &&
           ((MVAvatarSpawnRoleCreator__Class *)
            (pMVar3->_1).typeHierarchy[(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1]
            == TypeInfo__MVAvatarSpawnRoleCreator)) {
          GVar5 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                            (unaff_ESI,(MethodInfo *)0x0);
          return GVar5;
        }
        goto code_?;
      }
    }
    return (uint)ppIVar2 & 0xffffff00;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  GVar5 = (*pcVar6)();
  return GVar5;
}


/* Void HandleBlinkerVisibility() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_HandleBlinkerVisibility
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)this,(MethodInfo *)0x0);
  if (this_00 != (PickupItem *)0x0) {
    bVar1 = PickupItem::PickupItem_get_IsInFirstPersonMode(this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.body;
    if (bVar1 == 0) {
      if (((pMVar2 != (MVBody *)0x0) && (*(int *)(in_stack_3 + 0xfc) != 0)) &&
         (iVar4 = *(int *)(*(int *)(in_stack_3 + 0xfc) + 0x20), iVar4 != 0)) {
        *(undefined1 *)(iVar4 + 0x18) = 1;
        return;
      }
    }
    else if (((pMVar2 != (MVBody *)0x0) && (*(int *)(in_stack_3 + 0xfc) != 0)) &&
            (iVar4 = *(int *)(*(int *)(in_stack_3 + 0xfc) + 0x20), iVar4 != 0)) {
      *(undefined1 *)(iVar4 + 0x18) = 0;
      return;
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_HasDied
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVAvatarLocal__DeadMode);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar1 = (MVAvatarLocal_AvatarLocalModes *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,4,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
        return 0;
      }
      if ((((Object__Class *)pMVar1->klass)->_1).naturalAligment <
          (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment) {
        return 0;
      }
      if ((((Object__Class *)pMVar1->klass)->_1).typeHierarchy
          [(TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode) {
        return 0;
      }
      pMVar2 = TypeInfo__MVAvatarLocal__DeadMode;
      if (((TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment <=
           (((Object__Class *)pMVar1->klass)->_1).naturalAligment) &&
         ((((Object__Class *)pMVar1->klass)->_1).typeHierarchy
          [(TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) {
        if (*(float *)&(pMVar1->fields).currentState == _UNK_?) {
          return 0;
        }
        return 1;
      }
      goto code_?;
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Initialize
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Action<float,_MVPlayer>);
    func_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarEquipable__EquipSlapGun_System__Object__System__EventArgs_);
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&TypeInfo__MVAvatarLocal__AvatarLocalModes);
    func_?(&MethodInfo__AvatarShieldDecay__ResetDecayTimer__);
    func_?(&TypeInfo__System__EventHandler<ScaleArgs>);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&TypeInfo__System__EventHandler);
    func_?(&
                    AvatarEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarEquipable>__
                   );
    func_?(&
                    AvatarInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarInteractable>__
                   );
    func_?(&AvatarMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarMotor>__);
    func_?(&
                    AvatarShieldDecay_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarShieldDecay>__
                   );
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    func_?(&
                    UseInteractorHandler_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorHandler>__
                   );
    func_?(&MethodInfo__MVAvatarLocal__OnCameraScale_System__Object__ScaleArgs_);
    func_?(&MethodInfo__MVAvatarLocal__OnDisableVehicles_System__Object__System__EventArgs_
                   );
    func_?(&MethodInfo__MVAvatarLocal__OnEquipItem_PickupItem_);
    func_?(&MethodInfo__MVAvatarLocal__OnHolsteredChanged_bool_);
    func_?(&MethodInfo__MVAvatarLocal__OnObserve__);
    func_?(&
                    MethodInfo__MVAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__MVAvatarLocal__OnResume__);
    func_?(&
                    MethodInfo__MVAvatarLocal__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__MVAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_);
    func_?(&
                    MethodInfo__MVAvatarLocal__RelayDamageEvent_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__MVAvatarLocal__RelayHealingEvent_float__MVPlayer_);
    func_?(&MethodInfo__MVAvatarLocal__RelayNewSafePosition_UnityEngine__Vector3_);
    func_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&TypeInfo__WorldObjectSkillDataManager);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__WorldObjectSkillDataManager);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._.skillDataManager = (WorldObjectSkillDataManager *)this_01;
  func_?(&(this->fields)._.skillDataManager,this_01);
  pWVar1 = (this->fields)._.skillDataManager;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    cRam_? = '\x01';
  }
  values = (this->fields)._._._._.data;
  if ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
  this_02 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System::
  Object],Object,Object,Object]::
  Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
            (this_02,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,(MethodInfo *)0x0);
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (values,pKVar2,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_02,(MethodInfo *)0x0);
  if (pWVar1 == (WorldObjectSkillDataManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    WorldObjectSkillDataManager::WorldObjectSkillDataManager_Initialize
              (pWVar1,pKVar2,(MethodInfo *)0x0);
    MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._._.gameObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pAVar4 = (AvatarMotor *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar3,
                        AvatarMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarMotor>__
                       );
    (this->fields).avatarMotor = pAVar4;
    func_?();
    pGVar3 = (this->fields)._._._.gameObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pMVar5 = (MVTriggerHandler *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar3,
                        MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                       );
    (this->fields).triggerHandler = pMVar5;
    func_?();
    pGVar3 = (this->fields)._._._.gameObject;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pAVar6 = (AvatarInteractable *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar3,
                             AvatarInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarInteractable>__
                            ), pAVar6 == (AvatarInteractable *)0x0)) goto code_?;
    (*(code *)(pAVar6->klass->vtable).Init.method)();
    (this->fields).interactableLocal = pAVar6;
    func_?();
    pAVar6 = (this->fields).interactableLocal;
    if (pAVar6 == (AvatarInteractable *)0x0) goto code_?;
    pAVar7 = (pAVar6->fields).OnDamageTaken;
    this_03 = (Action_3_Single_Object_ByteEnum_ *)func_?();
    mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
              (this_03,(Object *)this,
               MethodInfo__MVAvatarLocal__RelayDamageEvent_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar7,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (pAVar6->fields).OnDamageTaken =
           (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
code_?:
      func_?();
      pAVar6 = (this->fields).interactableLocal;
      if (pAVar6 == (AvatarInteractable *)0x0) goto code_?;
      pAVar9 = (pAVar6->fields).OnHealing;
      this_04 = (Action_2_Single_Object_ *)func_?();
      mscorlib.dll::System::Action`2[Single,Object]::Action_2_Single_Object___ctor
                (this_04,(Object *)this,
                 MethodInfo__MVAvatarLocal__RelayHealingEvent_float__MVPlayer_,(MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar9,(Delegate *)this_04,(MethodInfo *)0x0);
      if (pDVar8 == (Delegate *)0x0) {
        (pAVar6->fields).OnHealing = (Action_2_Single_MVPlayer_ *)0x0;
      }
      else {
        pAVar9 = (Action_2_Single_MVPlayer_ *)func_?();
        if (pAVar9 == (Action_2_Single_MVPlayer_ *)0x0) goto code_?;
        (pAVar6->fields).OnHealing = pAVar9;
        iVar10 = func_?();
        if (iVar10 == 0) goto code_?;
      }
      func_?();
      pAVar6 = (this->fields).interactableLocal;
      if (pAVar6 == (AvatarInteractable *)0x0) goto code_?;
      pAVar11 = (pAVar6->fields).OnNewSafePosition;
      this_05 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
      SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
                (this_05,(Object *)this,
                 MethodInfo__MVAvatarLocal__RelayNewSafePosition_UnityEngine__Vector3_,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar11,(Delegate *)this_05,(MethodInfo *)0x0);
      if (pDVar8 == (Delegate *)0x0) {
        (pAVar6->fields).OnNewSafePosition = (Action_1_UnityEngine_Vector3_ *)0x0;
      }
      else {
        pAVar11 = (Action_1_UnityEngine_Vector3_ *)func_?();
        if (pAVar11 == (Action_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        (pAVar6->fields).OnNewSafePosition = pAVar11;
        iVar10 = func_?();
        if (iVar10 == 0) goto code_?;
      }
      func_?();
      pGVar3 = (this->fields)._._._.gameObject;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      pAVar12 = (AvatarEquipable *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar3,
                           AvatarEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarEquipable>__
                          );
      (this->fields).avatarEquipable = pAVar12;
      func_?();
      pAVar12 = (this->fields).avatarEquipable;
      pAVar6 = (this->fields).interactableLocal;
      pMVar13 = (this->fields)._.CurrentItem;
      pWVar1 = (this->fields)._.skillDataManager;
      if (pAVar12 == (AvatarEquipable *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      (pAVar12->fields).interactableLocal = (MVInteractableBase *)pAVar6;
      func_?();
      (pAVar12->fields).currentItem = pMVar13;
      func_?();
      if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
      bVar14 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (pWVar1,StringLiteral_UnableToCollectModifierPickups,(MethodInfo *)0x0);
      (pAVar12->fields).isAbleToCollectPickups = bVar14 ^ 1;
      interactableLocal = StringLiteral_UnableToEquipWeapons;
      bVar14 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (pWVar1,StringLiteral_UnableToEquipWeapons,(MethodInfo *)0x0);
      (pAVar12->fields).isAbleToEquipWeapons = bVar14 ^ 1;
      pAVar4 = (this->fields).avatarMotor;
      if (pAVar4 == (AvatarMotor *)0x0) goto code_?;
      AvatarMotor::AvatarMotor_Init
                (pAVar4,(AvatarInteractable *)interactableLocal,
                 (this->fields)._.characterControllerCenterOffset,(MVWorldObjectClient *)this,
                 (this->fields)._.skillDataManager,(MethodInfo *)0x0);
      (this->fields).pickupOwner = (this->fields)._.avatarPickupOwner;
      func_?();
      MVar15 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar15 != MVGameMode__Enum_CharacterEditor) {
        pGVar3 = (this->fields)._._._.gameObject;
        if (pGVar3 != (GameObject *)0x0) {
          pPVar16 = (PickupGUI *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar3,
                               PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                              );
          (this->fields).pickupGUI = pPVar16;
          func_?();
          pPVar16 = (this->fields).pickupGUI;
          if (pPVar16 != (PickupGUI *)0x0) {
            PickupGUI::PickupGUI_Initialize
                      (pPVar16,(this->fields)._._._._.id,(MVPickupOwner *)(this->fields).pickupOwner
                       ,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        goto code_?;
      }
code_?:
      pAVar17 = (this->fields).pickupOwner;
      if (pAVar17 == (AvatarPickupOwner *)0x0) goto code_?;
      pMVar18 = (pAVar17->fields)._.onEquipItem;
      pVVar19 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (pVVar19,(Object *)this,MethodInfo__MVAvatarLocal__OnEquipItem_PickupItem_,
                 (MethodInfo *)0x0);
      pMVar18 = (MVPickupOwner_OnEquipItemDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pMVar18,(Delegate *)pVVar19,(MethodInfo *)0x0);
      if (pMVar18 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
        (pAVar17->fields)._.onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
code_?:
        func_?();
        pAVar17 = (this->fields).pickupOwner;
        if (pAVar17 == (AvatarPickupOwner *)0x0) goto code_?;
        pAVar20 = (pAVar17->fields)._.OnHolsteredChanged;
        this_06 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_06,(Object *)this,MethodInfo__MVAvatarLocal__OnHolsteredChanged_bool_,
                   (MethodInfo *)0x0);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar20,(Delegate *)this_06,(MethodInfo *)0x0);
        if (pDVar8 == (Delegate *)0x0) {
          (pAVar17->fields)._.OnHolsteredChanged = (Action_1_Boolean_ *)0x0;
        }
        else {
          pAVar20 = (Action_1_Boolean_ *)func_?();
          if (pAVar20 == (Action_1_Boolean_ *)0x0) goto code_?;
          (pAVar17->fields)._.OnHolsteredChanged = pAVar20;
          iVar10 = func_?();
          if (iVar10 == 0) goto code_?;
        }
        func_?();
        this_07 = (MVAvatarLocal_AvatarLocalModes *)func_?();
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
                  (this_07,this,(MethodInfo *)0x0);
        (this->fields).avatarLocalModes = this_07;
        func_?();
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pMVar21 = (this->fields)._.Health;
        if (pMVar21 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
        fVar22 = (float10)(*(code *)(pMVar21->klass->vtable).get_Value.method)();
        pMVar21 = (this->fields)._.Health;
        (this->fields).previousHealth = (float)fVar22;
        if (pMVar21 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
        pMVar23 = (pMVar21->fields)._.OnChange;
        pVVar19 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  (pVVar19,(Object *)this,
                   MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_,
                   (MethodInfo *)0x0);
        pMVar23 = (MVRuntimeDataVariable_OnChangeDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pMVar23,(Delegate *)pVVar19,(MethodInfo *)0x0);
        if (pMVar23 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar24 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar23->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar24 = pMVar23;
          }
          if (pMVar24 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar21->fields)._.OnChange = pMVar24;
            pMVar24 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar23->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar24 = pMVar23;
            }
            if (pMVar24 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        (pMVar21->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
        func_?();
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pMVar25 = (this->fields)._.shield;
        if (pMVar25 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        fVar22 = (float10)(*(code *)(pMVar25->klass->vtable).get_Value.method)();
        pMVar25 = (this->fields)._.shield;
        (this->fields).previousShield = (float)fVar22;
        if (pMVar25 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        pMVar23 = (pMVar25->fields)._._.OnChange;
        pVVar19 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  (pVVar19,(Object *)this,
                   MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_,
                   (MethodInfo *)0x0);
        pMVar23 = (MVRuntimeDataVariable_OnChangeDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pMVar23,(Delegate *)pVVar19,(MethodInfo *)0x0);
        if (pMVar23 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar25->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          pMVar24 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar23->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar24 = pMVar23;
          }
          if (pMVar24 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          (pMVar25->fields)._._.OnChange = pMVar24;
          pMVar24 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar23->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar24 = pMVar23;
          }
          if (pMVar24 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        }
        func_?();
        MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
        MVar15 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar15 != MVGameMode__Enum_CharacterEditor) {
          pGVar3 = (this->fields)._._._.gameObject;
          if (pGVar3 != (GameObject *)0x0) {
            pUVar26 = (UseInteractorHandler *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar3,
                                 UseInteractorHandler_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorHandler>__
                                );
            (this->fields).useInteractorHandler = pUVar26;
            func_?();
            pUVar26 = (this->fields).useInteractorHandler;
            if (pUVar26 != (UseInteractorHandler *)0x0) {
              UseInteractorHandler::UseInteractorHandler_Init
                        (pUVar26,(this->fields)._._._._.id,(this->fields)._._._.collider,
                         (MethodInfo *)0x0);
              goto code_?;
            }
          }
          goto code_?;
        }
code_?:
        pAVar4 = (this->fields).avatarMotor;
        if (pAVar4 == (AvatarMotor *)0x0) goto code_?;
        pSVar27 = (pAVar4->fields)._GetSizeState_k__BackingField;
        pAVar12 = (this->fields).avatarEquipable;
        pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar28,(Object *)pAVar12,
                   MethodInfo__AvatarEquipable__EquipSlapGun_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0);
        if (pSVar27 == (SizeState *)0x0) goto code_?;
        SizeState::SizeState_add_EquipSlapGunEvent(pSVar27,(EventHandler *)pUVar28,(MethodInfo *)0x0)
        ;
        pAVar4 = (this->fields).avatarMotor;
        if (pAVar4 == (AvatarMotor *)0x0) goto code_?;
        pSVar27 = (pAVar4->fields)._GetSizeState_k__BackingField;
        pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar28,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnCameraScale_System__Object__ScaleArgs_,
                   (MethodInfo *)0x0);
        if (pSVar27 == (SizeState *)0x0) goto code_?;
        SizeState::SizeState_add_CameraScaleEvent
                  (pSVar27,(EventHandler_1_ScaleArgs_ *)pUVar28,(MethodInfo *)0x0);
        pAVar4 = (this->fields).avatarMotor;
        if (pAVar4 == (AvatarMotor *)0x0) goto code_?;
        pSVar27 = (pAVar4->fields)._GetSizeState_k__BackingField;
        pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar28,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0);
        if (pSVar27 == (SizeState *)0x0) goto code_?;
        SizeState::SizeState_add_UnEquipSlapGunEvent
                  (pSVar27,(EventHandler_1_EventArgs_ *)pUVar28,(MethodInfo *)0x0);
        pLVar29 = (this->fields)._._._._.outputLinkRefs;
        pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar28,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0);
        if (pLVar29 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        a_00 = (pLVar29->fields)._items;
        do {
          pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a_00,(Delegate *)pUVar28,(MethodInfo *)0x0);
          if ((pDVar8 != (Delegate *)0x0) && (iVar10 = func_?(), iVar10 == 0))
          goto code_?;
          pLVar30 = (Link__Array *)func_?();
          bVar31 = pLVar30 != a_00;
          a_00 = pLVar30;
        } while (bVar31);
        pLVar29 = (this->fields)._._._._.outputLinkRefs;
        pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar28,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnDisableVehicles_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0);
        if (pLVar29 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar8 = (Delegate *)(pLVar29->fields)._size;
        do {
          pDVar32 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar8,(Delegate *)pUVar28,(MethodInfo *)0x0);
          pDVar33 = pDVar8;
          if ((pDVar32 != (Delegate *)0x0) &&
             (iVar10 = func_?(), pDVar33 = pDVar8, iVar10 == 0)) goto code_?;
          pDVar8 = (Delegate *)func_?();
        } while (pDVar8 != pDVar33);
        pGVar3 = (this->fields)._._._.gameObject;
        if ((pGVar3 == (GameObject *)0x0) ||
           (object = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                               (pGVar3,
                                AvatarShieldDecay_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarShieldDecay>__
                               ), object == (Object *)0x0)) goto code_?;
        object[2].monitor = (MonitorData *)(this->fields)._.shield;
        func_?();
        pDVar8 = (Delegate *)(this->fields)._._._._.rotation.w;
        pNVar34 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar34,object,MethodInfo__AvatarShieldDecay__ResetDecayTimer__,(MethodInfo *)0x0
                  );
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar8,(Delegate *)pNVar34,(MethodInfo *)0x0);
        if (pDVar8 != (Delegate *)0x0) {
          pDVar33 = (Delegate *)0x0;
          if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
            pDVar33 = pDVar8;
          }
          if (pDVar33 != (Delegate *)0x0) {
            pDVar32 = (Delegate *)0x0;
            if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
              pDVar32 = pDVar8;
            }
            _UNK_? = pDVar33;
            if (pDVar32 != (Delegate *)0x0) goto code_?;
          }
          goto code_?;
        }
        _UNK_? = (Delegate *)0x0;
code_?:
        func_?();
        pAVar35 = (AvatarLimbManager *)func_?();
        ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pAVar35,
                   (MethodInfo *)0x0);
        (this->fields)._.limbManager = pAVar35;
        func_?();
        if (((this->fields)._.avatar == (Avatar *)0x0) ||
           (pAVar35 = (this->fields)._.limbManager, pAVar35 == (AvatarLimbManager *)0x0))
        goto code_?;
        (*(code *)(pAVar35->klass->vtable).Initialize.method)();
        pAVar36 = (this->fields).avatarRespawnHandler;
        if (pAVar36 == (AvatarRespawnHandler *)0x0) goto code_?;
        (pAVar36->fields).mvAvatar = this;
        func_?();
        pUVar37 = (this->fields)._._._.PositionChanged;
        pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar28,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar37,(Delegate *)pUVar28,(MethodInfo *)0x0);
        if (pDVar8 == (Delegate *)0x0) {
          (this->fields)._._._.PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
          func_?();
          pUVar38 = (this->fields)._._._.RotationChanged;
          pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar28,(Object *)this,
                     MethodInfo__MVAvatarLocal__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar38,(Delegate *)pUVar28,(MethodInfo *)0x0);
          if (pDVar8 != (Delegate *)0x0) {
            pUVar38 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
                      func_?();
            if (pUVar38 != (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
              (this->fields)._._._.RotationChanged = pUVar38;
              iVar10 = func_?();
              if (iVar10 != 0) goto code_?;
            }
            goto code_?;
          }
          (this->fields)._._._.RotationChanged =
               (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
code_?:
          func_?();
          pUVar39 = (this->fields)._._._.ScaleChanged;
          pUVar28 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar28,(Object *)this,
                     MethodInfo__MVAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar39,(Delegate *)pUVar28,(MethodInfo *)0x0);
          if (pDVar8 != (Delegate *)0x0) {
            pUVar39 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
            if (pUVar39 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
              (this->fields)._._._.ScaleChanged = pUVar39;
              iVar10 = func_?();
              if (iVar10 != 0) goto code_?;
            }
            goto code_?;
          }
          (this->fields)._._._.ScaleChanged =
               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
code_?:
          func_?();
          pGVar3 = (this->fields)._._._.gameObject;
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pMVar40 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar40 == (MVNetworkGame *)0x0) ||
              (this_00 = (pMVar40->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
             (this_08 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                  (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
             this_08 == (MVPlayer *)0x0)) goto code_?;
          MVPlayer::MVPlayer_NotifyAvatarCreated
                    (this_08,(this->fields)._._._._.id,(MethodInfo *)0x0);
          a = (this_08->fields).OnObserve;
          pNVar34 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar34,(Object *)this,MethodInfo__MVAvatarLocal__OnObserve__,(MethodInfo *)0x0
                    );
          pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)pNVar34,(MethodInfo *)0x0);
          if (pDVar8 == (Delegate *)0x0) {
            _UNK_? = (Delegate *)0x0;
code_?:
            func_?();
            pDVar8 = _UNK_?;
            pNVar34 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar34,(Object *)this,MethodInfo__MVAvatarLocal__OnResume__,
                       (MethodInfo *)0x0);
            pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar8,(Delegate *)pNVar34,(MethodInfo *)0x0);
            if (pDVar8 == (Delegate *)0x0) {
              _UNK_? = (Delegate *)0x0;
              func_?();
              return;
            }
            pDVar33 = (Delegate *)0x0;
            if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction)
            {
              pDVar33 = pDVar8;
            }
            if (pDVar33 != (Delegate *)0x0) {
              pDVar32 = (Delegate *)0x0;
              if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction
                 ) {
                pDVar32 = pDVar8;
              }
              _UNK_? = pDVar33;
              if (pDVar32 != (Delegate *)0x0) {
                func_?();
                return;
              }
              goto code_?;
            }
            goto code_?;
          }
          pDVar33 = (Delegate *)0x0;
          if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pDVar33 = pDVar8;
          }
          if (pDVar33 != (Delegate *)0x0) {
            pDVar32 = (Delegate *)0x0;
            if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction)
            {
              pDVar32 = pDVar8;
            }
            _UNK_? = pDVar33;
            if (pDVar32 != (Delegate *)0x0) goto code_?;
          }
          goto code_?;
        }
        pUVar37 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar37 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          (this->fields)._._._.PositionChanged = pUVar37;
          iVar10 = func_?();
          if (iVar10 != 0) goto code_?;
        }
        goto code_?;
      }
      pMVar41 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar18->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar41 = pMVar18;
      }
      if (pMVar41 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
      (pAVar17->fields)._.onEquipItem = pMVar41;
      pMVar41 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar18->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar41 = pMVar18;
      }
      if (pMVar41 != (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
      goto code_?;
    }
    pAVar7 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)func_?();
    if (pAVar7 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0)
    goto code_?;
    (pAVar6->fields).OnDamageTaken = pAVar7;
    iVar10 = func_?();
    if (iVar10 != 0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.Health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    (this->fields).previousHealth = (float)fVar2;
    pMVar1 = (this->fields)._.Health;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar3 = (pMVar1->fields)._.OnChange;
      this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar1->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
        func_?();
        return;
      }
      pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar3;
      }
      pMStack4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar1->fields)._.OnChange = pMVar5;
        pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar5 = pMVar3;
        }
        pMStack4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMVar5;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  pMStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeShield
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    (this->fields).previousShield = (float)fVar2;
    pMVar1 = (this->fields)._.shield;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pMVar3 = (pMVar1->fields)._._.OnChange;
      this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
        func_?();
        return;
      }
      pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar3;
      }
      pMStack4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar1->fields)._._.OnChange = pMVar5;
        pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar5 = pMVar3;
        }
        pMStack4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMVar5;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  pMStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsEquipped(AvatarItemType) */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsEquipped
               (MVAvatarLocal *this,AvatarItemType__Enum avatarItemType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarEquipable);
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if ((((this_00 == (GameObject *)0x0) ||
       (pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_00,
                            MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                           ), pOVar1 == (Object *)0x0)) ||
      ((pOVar1->klass->_1).naturalAligment < (TypeInfo__AvatarEquipable->_1).naturalAligment)) ||
     ((pOVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarEquipable->_1).naturalAligment - 1] !=
      (Il2CppClass *)TypeInfo__AvatarEquipable)) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  if ((pMRam0000001c == (MVRuntimeDataVariable *)0x0) ||
     (unaff_retaddr =
           (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMRam0000001c,(MethodInfo *)0x0),
     unaff_retaddr == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    if (((unaff_retaddr->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_retaddr->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (unaff_retaddr,(Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      return 0;
    }
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_retaddr,(Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      piVar5 = (int *)func_?();
      return *piVar5 == in_stack_6;
    }
  }
  func_?();
code_?:
  func_?(unaff_retaddr);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsInTempTier
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      return (pPVar1->fields).gamePassTier < bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsPlaying() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsPlaying
               (MVAvatarLocal *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).avatarLocalModes;
  if (pMVar2 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    return (pMVar2->fields).currentState == 1;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsSpawnRoleActive() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsSpawnRoleActive
               (MVAvatarLocal *this,MethodInfo *method)

{
  if ((this->fields).spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) {
    return 0;
  }
  return (((this->fields).spawnRoleDataReceiver)->fields).isActive;
}


/* Void KillSelf() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_KillSelf
               (MVAvatarLocal *this,MethodInfo *method)

{
  bVar1 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)this,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 == (FlagDebriefingControl *)0x0) goto code_?;
  if ((pFVar2->fields).IsInFlagDebriefing != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)in_stack_3,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pAVar4 = (in_stack_3->fields).interactableLocal;
    if ((pAVar4 == (AvatarInteractable *)0x0) ||
       (pAVar5 = (pAVar4->fields).lastDamageSource, pAVar5 == (AvatarInteractable_DamageSource *)0x0
       )) goto code_?;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((fVar6 - (pAVar5->fields).time <= _UNK_?) &&
       ((pAVar4->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0)) {
      pAVar4 = (in_stack_3->fields).interactableLocal;
      if ((((pAVar4 == (AvatarInteractable *)0x0) ||
           (pAVar5 = (pAVar4->fields).lastDamageSource,
           pAVar5 == (AvatarInteractable_DamageSource *)0x0)) ||
          (fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0), _UNK_? < fVar6 - (pAVar5->fields).time))
         || (pAVar5 = (pAVar4->fields).lastDamageSource,
            pAVar5 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
      puVar7 = &UNK_?;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar6 - (pAVar5->fields).time <= _UNK_?) {
        pAVar4 = (in_stack_3->fields).interactableLocal;
        if (((((pAVar4 != (AvatarInteractable *)0x0) &&
              ((pAVar4->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0)) &&
             ((fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0), fVar6 - _UNK_? <= _UNK_? &&
              (((pAVar4->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0 &&
               (pAVar8 = (in_stack_3->fields).interactableLocal,
               pAVar8 != (AvatarInteractable *)0x0)))))) &&
            (pAVar5 = (pAVar8->fields).lastDamageSource,
            pAVar5 != (AvatarInteractable_DamageSource *)0x0)) &&
           ((fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0), fVar6 - (pAVar5->fields).time <= _UNK_?
            && (pAVar5 = (pAVar8->fields).lastDamageSource,
               pAVar5 != (AvatarInteractable_DamageSource *)0x0)))) {
          pMVar9 = (pAVar4->fields)._.health;
          defaultDamageType = CONCAT31((int3)((uint)puVar7 >> 8),(pAVar5->fields).damageType);
          if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
            (*(code *)(pMVar9->klass->vtable).get_Value.method)();
            pMVar9 = (pAVar4->fields)._.health;
            if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              (*(code *)(pMVar9->klass->vtable).set_Value.method)();
              pAVar10 = (pAVar4->fields).OnDamageTaken;
              if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code);
              }
              AvatarInteractable::AvatarInteractable_DoKilledNotification
                        (pAVar4,(MVPlayer *)&UNK_?,defaultDamageType,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    MVAvatarLocal_Die(in_stack_3,(MethodInfo *)0x0);
    if ((in_stack_3->fields).OnSuicide != (Action *)0x0) {
      (*(((in_stack_3->fields).OnSuicide)->fields)._._.invoke_impl)();
      if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_00 = TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0;
      if (this_00 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
        if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
        this_00 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0 = this_00;
        func_?();
      }
      if ((in_stack_3->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        if (this_00 != (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
          (*(this_00->fields)._._.invoke_impl)();
          return;
        }
code_?:
        uVar11 = func_?(&stack0xfffffff0);
        func_?(uVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  return;
}


/* Void LeaveVehicle(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_LeaveVehicle
               (MVAvatarLocal *this,bool leaveBecauseOfServer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
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
  pAVar1 = (this->fields).avatarMotor;
  if (pAVar1 != (AvatarMotor *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(pAVar1->klass->vtable).get_Velocity.method)
                       (&uStack_3,pAVar1,(pAVar1->klass->vtable).get_IsMovementLocked.methodPtr);
    pUVar4 = (this->fields).useInteractorHandler;
    fVar5 = *(float *)(puVar2 + 1);
    fStack_6 = (float)*puVar2;
    fStack_7 = (float)((ulonglong)*puVar2 >> 0x20);
    unaff_ESI = (MVVehicleBase *)0x0;
    if (pUVar4 != (UseInteractorHandler *)0x0) {
      this_00 = (this->fields).vehicleRigidBody;
      unaff_ESI = (MVVehicleBase *)(pUVar4->fields).triggingColliders;
      if ((this_00 != (MVRigidBody *)0x0) &&
         (collider = (Collider *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this_00,
                                UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                               ), unaff_ESI != (MVVehicleBase *)0x0)) {
        Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                  ((ColliderCollection *)unaff_ESI,collider,(MethodInfo *)0x0);
        (this->fields).vehicleRigidBody = (MVRigidBody *)0x0;
        func_?(&(this->fields).vehicleRigidBody,0);
        IStack_8.m_value = -1;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar9 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar9->fields)._PlayerController_k__BackingField,
           this_01 != (MVLocalObjectController *)0x0)) {
          bVar10 = MVLocalObjectController::MVLocalObjectController_DetachWorldObjectFromVehicle
                            (this_01,(this->fields)._._._._.id,&IStack_8.m_value,
                             leaveBecauseOfServer,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            return;
          }
          if (IStack_8.m_value != -1) {
            this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_06 == (MVWorldObjectClientManager *)0x0) goto code_?;
            unaff_ESI = (MVVehicleBase *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_06,IStack_8.m_value,(MethodInfo *)0x0);
            if (((unaff_ESI == (MVVehicleBase *)0x0) ||
                ((unaff_ESI->klass->_1).naturalAligment <
                 (TypeInfo__MVVehicleBase->_1).naturalAligment)) ||
               ((MVVehicleBase__Class *)
                (unaff_ESI->klass->_1).typeHierarchy
                [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase)) {
              str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
              unaff_ESI = (MVVehicleBase *)
                          mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_vehicleWO_is_null_or_type_is_not,str1,
                                     (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)unaff_ESI,(MethodInfo *)0x0);
            }
            else {
              pMVar11 = TypeInfo__MVVehicleBase;
              if (((unaff_ESI->klass->_1).naturalAligment <
                   (TypeInfo__MVVehicleBase->_1).naturalAligment) ||
                 ((MVVehicleBase__Class *)
                  (unaff_ESI->klass->_1).typeHierarchy
                  [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase))
              goto code_?;
              MVVehicleBase::MVVehicleBase_LeaveLocal(unaff_ESI,(MethodInfo *)0x0);
              this_02 = (unaff_ESI->fields)._._._.gameObject;
              if (this_02 == (GameObject *)0x0) goto code_?;
              unaff_ESI = (MVVehicleBase *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (this_02,
                                     MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                    );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                if (unaff_ESI == (MVVehicleBase *)0x0) goto code_?;
                puVar2 = (undefined8 *)func_?(&uStack_3,6,unaff_ESI);
                fStack_7 = *(float *)(puVar2 + 1);
                fStack_12 = (float)*puVar2;
                fStack_6 = (float)((ulonglong)*puVar2 >> 0x20);
                fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                fVar5 = (fStack_7 / fVar13) * _UNK_?;
                fStack_12 = (fStack_12 / fVar13) * _UNK_?;
                fStack_6 = (fStack_6 / fVar13) * _UNK_?;
                uStack_3 = CONCAT44(fStack_6,fStack_12);
                fStack_14 = fVar5;
                fStack_7 = fVar5;
                fVar15 = (float10)func_?(&fStack_12,0);
                fStack_7 = (float)(fVar15 / (float10)_UNK_? + (float10)uStack_3._4_4_);
                fStack_6 = fStack_12;
              }
            }
          }
          MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
          pAVar16 = MVAvatarLocal_get_AvatarLocal(this,(MethodInfo *)0x0);
          if (pAVar16 != (AvatarLocal *)0x0) {
            unaff_ESI = (MVVehicleBase *)(pAVar16->fields).avatarCameraController;
            if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MainCameraManager);
            }
            if (unaff_ESI != (MVVehicleBase *)0x0) {
              func_?(2,TypeInfo__IAvatarCameraController,unaff_ESI,
                              TypeInfo__MainCameraManager->static_fields->DefaultCameraType);
              pAVar1 = (this->fields).avatarMotor;
              if (pAVar1 != (AvatarMotor *)0x0) {
                (*(code *)(pAVar1->klass->vtable).Reset.method)
                          (pAVar1,(pAVar1->klass->vtable).SuspendImpactDamage.methodPtr);
                pAVar1 = (this->fields).avatarMotor;
                if (pAVar1 != (AvatarMotor *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pAVar1,1,(MethodInfo *)0x0);
                  this_03 = (this->fields).triggerHandler;
                  if (this_03 != (MVTriggerHandler *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)this_03,1,(MethodInfo *)0x0);
                    pAVar1 = (this->fields).avatarMotor;
                    if (pAVar1 != (AvatarMotor *)0x0) {
                      impulse.y = fStack_7;
                      impulse.x = fStack_6;
                      impulse.z = fVar5;
                      MVRigidBody::MVRigidBody_AddImpulse_1
                                ((MVRigidBody *)pAVar1,impulse,0,(MethodInfo *)0x0);
                      (*(code *)(this->klass->vtable).OnLeaveVehicle.method)
                                (this,(this->klass->vtable).AvatarStateChangedHandler.methodPtr);
                      if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVAvatarLocal____c);
                      }
                      this_07 = TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0;
                      if (this_07 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
                        if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__MVAvatarLocal____c);
                        }
                        unaff_ESI = (MVVehicleBase *)
                                    TypeInfo__MVAvatarLocal____c->static_fields->__9;
                        this_07 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                                  func_?(
                                                 TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate
                                                 );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)this_07,(Object *)unaff_ESI,
                                   MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0 = this_07;
                        func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0,
                                        this_07);
                      }
                      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                        if (this_07 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
                        goto code_?;
                        (*(this_07->fields)._._.invoke_impl)
                                  ((this_07->fields)._._.method_code,
                                   (this->fields).spawnRoleDataReceiver,(this_07->fields)._._.method
                                  );
                      }
                      this_04 = (this->fields).pickupGUI;
                      if (this_04 != (PickupGUI *)0x0) {
                        PickupGUI::PickupGUI_AvatarLeftVehicle(this_04,(MethodInfo *)0x0);
                        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        if (pMVar9 != (MVNetworkGame *)0x0) {
                          this_05 = (pMVar9->fields).transformNetworkManager;
                          woID = (this->fields)._._._._.id;
                          this_08 = (MVNetworkReporter *)
                                    func_?(TypeInfo__MVNetworkReporter);
                          MVNetworkReporter::MVNetworkReporter__ctor
                                    (this_08,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
                          unaff_ESI = (MVVehicleBase *)0x0;
                          if (this_05 != (TransformNetworkManager *)0x0) {
                            TransformNetworkManager::TransformNetworkManager_AddReporter
                                      (this_05,woID,this_08,(MethodInfo *)0x0);
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
  func_?();
  pMVar11 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar11);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnCameraScale(Object, ScaleArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCameraScale
               (MVAvatarLocal *this,Object *sender,ScaleArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICameraSettings);
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    gameType = (pMVar1->fields)._GameType_k__BackingField;
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    pIVar2 = MainCameraManager::MainCameraManager_GetSettings(gameType,(MethodInfo *)0x0);
    if (args != (ScaleArgs *)0x0) {
      fVar3 = (args->fields).scale;
      if (pIVar2 != (ICameraSettings *)0x0) {
        pIVar4 = pIVar2->klass;
        uVar5 = 0;
        uVar6._0_1_ = (pIVar4->_1).rank;
        uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)TypeInfo__ICameraSettings) {
              ppMVar7 = &(&(pIVar2->klass->vtable).ScaleCameraValues)
                         [pIVar2->klass->interfaceOffsets[uVar5].offset].method;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        ppMVar7 = (MethodInfo **)func_?(pIVar2,TypeInfo__ICameraSettings,2,fVar3);
code_?:
        (*(code *)*ppMVar7)(pIVar2,fVar3,ppMVar7[1]);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnCheckpointReachedResetRevive() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCheckpointReachedResetRevive
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c___OnCheckpointReachedResetRevive_b__142_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c);
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVAvatarLocal____c);
    }
    this_00 = TypeInfo__MVAvatarLocal____c->static_fields->__9__142_0;
    if (this_00 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
      if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVAvatarLocal____c);
      }
      object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
      this_00 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__MVAvatarLocal____c___OnCheckpointReachedResetRevive_b__142_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 ,(MethodInfo *)0x0);
      TypeInfo__MVAvatarLocal____c->static_fields->__9__142_0 = this_00;
      func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__142_0,this_00);
    }
    if (this == (MVAvatarLocal *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
      goto code_?;
      (*(this_00->fields)._._.invoke_impl)
                ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (this_00->fields)._._.method);
    }
  }
  return;
}


/* Void OnCurrentPickupChange(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCurrentPickupChange
               (MVAvatarLocal *this,Object *newPickupDataData,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)newPickupDataData,(MethodInfo *)0x0);
  MVAvatarLocal_HandleBlinkerVisibility(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDisableVehicles(Object, EventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnDisableVehicles
               (MVAvatarLocal *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  bVar1 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnEnterVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&
                    MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c___OnEnterVehicle_b__87_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c);
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_OnEnterVehicle((MVAvatar *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._._._.group;
  if ((pMVar1 == (MVGroup *)0x0) ||
     (this_00 = (pMVar1->fields)._.gameObject, this_00 == (GameObject *)0x0)) goto code_?;
  x = (Object_1 *)
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                (this_00,
                 MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_01 = (this->fields).avatarMotor;
    if (this_01 == (AvatarMotor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_01,0,(MethodInfo *)0x0);
    this_02 = (this->fields).triggerHandler;
    if (this_02 == (MVTriggerHandler *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_02,0,(MethodInfo *)0x0);
  }
  pMVar3 = (MVRigidBody *)
           MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                     ((this->fields)._._._.gameObject,
                      MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                     );
  (this->fields).vehicleRigidBody = pMVar3;
  func_?();
  pUVar4 = (this->fields).useInteractorHandler;
  if (pUVar4 != (UseInteractorHandler *)0x0) {
    pMVar3 = (this->fields).vehicleRigidBody;
    this_03 = (pUVar4->fields).triggingColliders;
    if (pMVar3 != (MVRigidBody *)0x0) {
      collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pMVar3,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
      if (this_03 != (ColliderCollection *)0x0) {
        Assets::Scripts::Tools::ColliderCollection::ColliderCollection_SetActiveCollider
                  (this_03,collider,(MethodInfo *)0x0);
        if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_04 = TypeInfo__MVAvatarLocal____c->static_fields->__9__87_0;
        if (this_04 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
          if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
          this_04 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    ((UnityAction_1_System_Object_ *)this_04,(Object *)object,
                     MethodInfo__MVAvatarLocal____c___OnEnterVehicle_b__87_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                     ,(MethodInfo *)0x0);
          TypeInfo__MVAvatarLocal____c->static_fields->__9__87_0 = this_04;
          func_?();
        }
        if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
          if (this_04 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
          goto code_?;
          (*(this_04->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnEquipItem
               (MVAvatarLocal *this,PickupItem *equippeditem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVAvatarLocal___OnEquipItem_b__136_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVAvatarLocal___OnEquipItem_b__136_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
             ,(MethodInfo *)0x0);
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    if (this_00 == (UnityAction_1_System_Object_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(this_00->fields)._._.invoke_impl)
              ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver);
  }
  return;
}


/* Void OnHealthBoostedChanged() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnHealthBoostedChanged
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  (this->fields).boostedHealthMultiplier = 1.0;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
      this_02 = (Boost *)0x0;
      bVar2 = BoostController::BoostController_TryGetActiveBoost
                        (this_00,BoostType__Enum_ExtraHealthFloatMultiplier,
                         (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pMVar3 = (this->fields)._.MaxHealth;
        if (pMVar3 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
          (*(code *)(pMVar3->klass->vtable).get_Value.method)();
          pMVar4 = (this->fields)._.Health;
          if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
            pMVar5 = pMVar4->klass;
            pIStack6 = (Int32__Class *)(pMVar5->vtable).set_Value.methodPtr;
            (*(code *)(pMVar5->vtable).get_Value.method)();
            MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
            pMVar3 = (this->fields)._.MaxHealth;
            pMVar4 = (this->fields)._.Health;
            if (pMVar3 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
              pMVar7 = pMVar3->klass;
              pIStack6 = (Int32__Class *)(pMVar7->vtable).set_Value.methodPtr;
              (*(code *)(pMVar7->vtable).get_Value.method)();
              if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                pMVar5 = pMVar4->klass;
                pIStack6 = (Int32__Class *)pMVar5[1]._0.image;
                (*(code *)(pMVar5->vtable).set_Value.method)();
                return;
              }
            }
          }
        }
      }
      else if (this_02 != (Boost *)0x0) {
        pIStack6 = (Int32__Class *)Boost::Boost_get_Value(this_02,(MethodInfo *)0x0);
        if (pIStack6 != (Int32__Class *)0x0) {
          pIVar8 = TypeInfo__System__Int32;
          if ((((Object *)pIStack6)->klass->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar9 = (int *)func_?();
          (this->fields).boostedHealthMultiplier = (float)*piVar9 / _UNK_? + _UNK_?;
          MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
          pMVar3 = (this->fields)._.MaxHealth;
          pMVar4 = (this->fields)._.Health;
          if (pMVar3 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
            pMVar7 = pMVar3->klass;
            pIStack6 = (Int32__Class *)(pMVar7->vtable).set_Value.methodPtr;
            (*(code *)(pMVar7->vtable).get_Value.method)();
            if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              pMVar5 = pMVar4->klass;
              pIStack6 = (Int32__Class *)pMVar5[1]._0.image;
              (*(code *)(pMVar5->vtable).set_Value.method)();
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pIVar8 = extraout_EDX;
code_?:
  pIStack6 = pIVar8;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnHolsteredChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnHolsteredChanged
               (MVAvatarLocal *this,bool obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVAvatarLocal___OnHolsteredChanged_b__111_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    cRam_? = '\x01';
  }
  MVAvatarLocal_HandleBlinkerVisibility(this,(MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Object_ *)
            func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVAvatarLocal___OnHolsteredChanged_b__111_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
             ,(MethodInfo *)0x0);
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    if (this_00 == (UnityAction_1_System_Object_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(this_00->fields)._._.invoke_impl)();
  }
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnLeaveVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnObserve() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnObserve
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (RewardedAd *)(pMVar1->fields).playerContainer, this_00 != (RewardedAd *)0x0)) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
              (this_00,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnPositionChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass145_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass145_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass145_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)positionChangedEventArgs;
    func_?(value + 1,positionChangedEventArgs);
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVAvatarLocal____c__DisplayClass145_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
               ,(MethodInfo *)0x0);
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
      (*(this_00->fields)._._.invoke_impl)
                ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (this_00->fields)._._.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnRespawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnRespawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).interactableLocal;
  if (pAVar1 != (AvatarInteractable *)0x0) {
    (*(code *)(pAVar1->klass->vtable).AddModifier.method)
              (pAVar1,0x11,0xffffffff,0,(pAVar1->klass->vtable).HasModifier.methodPtr);
    MVAvatarLocal_SetToSpawnTransform(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnRotationChanged(MVWorldObjectClient, RotationChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnRotationChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               RotationChangedEventArgs *rotationChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass146_0___OnRotationChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass146_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass146_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)rotationChangedEventArgs;
    func_?(value + 1,rotationChangedEventArgs);
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVAvatarLocal____c__DisplayClass146_0___OnRotationChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
               ,(MethodInfo *)0x0);
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
      (*(this_00->fields)._._.invoke_impl)
                ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (this_00->fields)._._.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnScaleChanged(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnScaleChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass147_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass147_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass147_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)scaleChangedEventArgs;
    func_?(value + 1,scaleChangedEventArgs);
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVAvatarLocal____c__DisplayClass147_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
               ,(MethodInfo *)0x0);
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
      (*(this_00->fields)._._.invoke_impl)
                ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (this_00->fields)._._.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSeatedChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSeatedChanged
               (MVAvatarLocal *this,bool isSeated,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass95_0___OnSeatedChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass95_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass95_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    *(bool *)&value[1].klass = isSeated;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVAvatarLocal____c__DisplayClass95_0___OnSeatedChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
               ,(MethodInfo *)0x0);
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
      (*(this_00->fields)._._.invoke_impl)
                ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (this_00->fields)._._.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSetRespawnWhenPossible() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetRespawnWhenPossible
               (MVAvatarLocal *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).avatarRespawnHandler;
  if (pAVar2 != (AvatarRespawnHandler *)0x0) {
    (pAVar2->fields).shouldRespawnAsGhost = 0;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSetSpawnAsGhost() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetSpawnAsGhost
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 != (AvatarRespawnHandler *)0x0) {
    (pAVar1->fields).shouldRespawnAsGhost = 1;
    pAVar1 = (this->fields).avatarRespawnHandler;
    if (pAVar1 != (AvatarRespawnHandler *)0x0) {
      this._1_3_ = (undefined3)((uint)pAVar1 >> 8);
      if ((pAVar1->fields).shouldRespawnAsGhost == 0) {
        pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar2 != (FlagDebriefingControl *)0x0) {
          this_00 = (pAVar1->fields).mvAvatar;
          if ((pFVar2->fields).IsInFlagDebriefing == 0) {
            if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
            this = (MVAvatarLocal *)CONCAT31(this._1_3_,1);
          }
          else {
            if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
            this = (MVAvatarLocal *)CONCAT31(this._1_3_,7);
          }
code_?:
          MVAvatarLocal_SetMode(this_00,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0);
          (pAVar1->fields).shouldRespawnAsGhost = 1;
          return;
        }
      }
      else {
        pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar2 != (FlagDebriefingControl *)0x0) {
          if ((pFVar2->fields).IsInFlagDebriefing != 0) {
            return;
          }
          this_00 = (pAVar1->fields).mvAvatar;
          if (this_00 != (MVAvatarLocal *)0x0) {
            this = (MVAvatarLocal *)CONCAT31(this._1_3_,9);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSetToDeadMode() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetToDeadMode
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarLocalModes;
  if (this_00 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_00,AvatarRuntimeState__Enum_Dead,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUnequip(Object, EventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnUnequip
               (MVAvatarLocal *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarEquipable);
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pAVar1 = (AvatarEquipable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    if (pAVar1 == (AvatarEquipable *)0x0) {
      this_01 = (AvatarEquipable *)0x0;
    }
    else {
      if (((pAVar1->klass->_1).naturalAligment < (TypeInfo__AvatarEquipable->_1).naturalAligment) ||
         ((pAVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarEquipable->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__AvatarEquipable)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      this_01 = (AvatarEquipable *)0x0;
      if (bVar2) {
        this_01 = pAVar1;
      }
    }
    pAVar3 = (this->fields).interactableLocal;
    if (pAVar3 != (AvatarInteractable *)0x0) {
      fVar4 = (float10)(*(code *)(pAVar3->klass->vtable).HandleModifierEffect.method)
                                 (pAVar3,5,0x3f800000,
                                  (pAVar3->klass->vtable).ClearModifiers.methodPtr);
      if (_UNK_? < (float)fVar4) {
        if (this_01 == (AvatarEquipable *)0x0) goto code_?;
        bVar5 = AvatarEquipable::AvatarEquipable_GetIsEquipped
                          (this_01,AvatarItemType__Enum_SlapGun,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
      }
      if (this_01 != (AvatarEquipable *)0x0) {
        (*(code *)(this_01->klass->vtable).Unequip.method)
                  (this_01,(this_01->klass->vtable).Holster.methodPtr);
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


/* Void RelayDamageEvent(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayDamageEvent
               (MVAvatarLocal *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass131_0___RelayDamageEvent_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass131_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass131_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    *(char *)&value[2].klass = (char)damageType;
    pAVar1 = (this->fields).OnDamageTaken;
    if (pAVar1 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,amount,damageDealer,damageType,
                 (pAVar1->fields)._._.method);
    }
    pMVar2 = (this->fields)._.Health;
    if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar3 = (float10)(*(code *)(pMVar2->klass->vtable).get_Value.method)
                                 (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
      if (_UNK_? < (float)fVar3) {
        return;
      }
      if ((this->fields).OnKilled == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        return;
      }
      if (damageDealer == (MVPlayer *)0x0) {
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 == (MVNetworkGame *)0x0) ||
           (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
        pMVar6 = (MonitorData *)(pMVar5->fields)._._ActorNr_k__BackingField;
      }
      else {
        pMVar6 = (MonitorData *)(damageDealer->fields)._ActorNr_k__BackingField;
      }
      value[1].monitor = pMVar6;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 != (MVLocalPlayer *)0x0)) {
        pOVar7 = (Object__Class *)(pMVar5->fields)._._ActorNr_k__BackingField;
        value[1].klass = pOVar7;
        pAVar8 = (this->fields).OnKilled;
        if (pAVar8 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,pOVar7,value[1].monitor,
                     *(undefined1 *)&value[2].klass);
          this_00 = (UnityAction_1_System_Object_ *)
                    func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_00,value,
                     MethodInfo__MVAvatarLocal____c__DisplayClass131_0___RelayDamageEvent_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                     ,(MethodInfo *)0x0);
          if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
            if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
            (*(this_00->fields)._._.invoke_impl)
                      ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                       (this_00->fields)._._.method);
          }
          return;
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


/* Void RelayHealingEvent(Single, MVPlayer) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayHealingEvent
               (MVAvatarLocal *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  pAVar1 = (this->fields).OnHealing;
  if (pAVar1 != (Action_2_Single_MVPlayer_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,amount,healer,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void RelayNewSafePosition(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayNewSafePosition
               (MVAvatarLocal *this,Vector3 lastSafePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass133_0___RelayNewSafePosition_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass133_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass133_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)lastSafePosition.x;
    value[1].monitor = (MonitorData *)lastSafePosition.y;
    value[2].klass = (Object__Class *)lastSafePosition.z;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_00 != (MainCameraManager *)0x0) {
      this_01 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVCameraBase *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        value[2].monitor = (MonitorData *)pTVar1;
        func_?();
        this_02 = (UnityAction_1_System_Object_ *)
                  func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,value,
                   MethodInfo__MVAvatarLocal____c__DisplayClass133_0___RelayNewSafePosition_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        if (pTVar1[0x1c].fields._._.m_CachedPtr != (void *)0x0) {
          if (this_02 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
          (*(this_02->fields)._._.invoke_impl)((this_02->fields)._._.method_code);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAvatar() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_ResetAvatar
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).triggerHandler;
  if (this_00 != (MVTriggerHandler *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        actorNumber = (pMVar2->fields)._._ActorNr_k__BackingField;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar1->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
          team = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                           (pMVar3,actorNumber,(MethodInfo *)0x0);
          if (team != MVTeam__Enum_None) {
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 == (MVNetworkGame *)0x0) ||
               (pMVar3 = (pMVar1->fields).teamManager, pMVar3 == (MVTeamManager *)0x0))
            goto code_?;
            bVar4 = MVTeamManager::MVTeamManager_IsTeamActive(pMVar3,team,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 == (MVNetworkGame *)0x0) ||
                 (pMVar3 = (pMVar1->fields).teamManager, pMVar3 == (MVTeamManager *)0x0))
              goto code_?;
              this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        MVTeamManager::MVTeamManager_GetTeamList(pMVar3,(MethodInfo *)0x0);
              this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_01 ==
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              goto code_?;
              team_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_01,0,
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                  );
              if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                        (this_02,(MVTeam__Enum)team_00,(MethodInfo *)0x0);
            }
          }
          MVAvatarLocal_SetAnimation(this,StringLiteral_Idle,(MethodInfo *)0x0);
          pMVar5 = (this->fields)._.MaxHealth;
          pMVar6 = (this->fields)._.Health;
          if (pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
            pMVar7 = pMVar5->klass;
            pIStack8 = (Il2CppImage *)(pMVar7->vtable).set_Value.methodPtr;
            (*(code *)(pMVar7->vtable).get_Value.method)();
            if (pMVar6 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              pMVar9 = pMVar6->klass;
              pIStack8 = pMVar9[1]._0.image;
              (*(code *)(pMVar9->vtable).set_Value.method)();
              bVar4 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
              }
              pAVar10 = (this->fields).avatarEquipable;
              if (pAVar10 != (AvatarEquipable *)0x0) {
                pAVar11 = pAVar10->klass;
                pIStack8 = (Il2CppImage *)(pAVar11->vtable).Holster.methodPtr;
                (*(code *)(pAVar11->vtable).Unequip.method)();
                pAVar12 = (this->fields).interactableLocal;
                if (pAVar12 != (AvatarInteractable *)0x0) {
                  pAVar13 = pAVar12->klass;
                  pIStack8 = (Il2CppImage *)(pAVar13->vtable).Init.methodPtr;
                  (*(code *)(pAVar13->vtable).ClearModifiers.method)();
                  pAVar14 = (this->fields).avatarMotor;
                  if (pAVar14 != (AvatarMotor *)0x0) {
                    pAVar15 = pAVar14->klass;
                    pIStack8 = (Il2CppImage *)(pAVar15->vtable).SuspendImpactDamage.methodPtr
                    ;
                    (*(code *)(pAVar15->vtable).Reset.method)();
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
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetAnimation(String) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetAnimation
               (MVAvatarLocal *this,String *animationState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_state);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    ((this->fields).currAnim,animationState,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pMVar2 = (this->fields)._.Animation;
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    unaff_EBX = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    if ((unaff_EBX !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0) && (((unaff_EBX->klass->_1).naturalAligment <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment ||
                  ((Dictionary_2_System_Object_System_Object___Class *)
                   (unaff_EBX->klass->_1).typeHierarchy
                   [(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment - 1] !=
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  )))) goto code_?;
    bVar1 = mscorlib.dll::System::String::String_op_Inequality
                      ((this->fields).currAnim,animationState,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      unaff_EBX = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (unaff_EBX,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (unaff_EBX !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                   (Object *)StringLiteral_state,(Object *)animationState,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        value = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                   (Object *)StringLiteral_timeStamp,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pMVar2 = (this->fields)._.Animation;
        if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar2,(Object *)unaff_EBX,(MethodInfo *)0x0);
          (this->fields).currAnim = animationState;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_EBX);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCharacterController(SmoothCharacterController) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetCharacterController
               (MVAvatarLocal *this,SmoothCharacterController *characterController,
               MethodInfo *method)

{
  pSStack_1 = (SmoothCharacterController *)&stack0xfffffffc;
  pAVar2 = (this->fields).avatarMotor;
  if (pAVar2 != (AvatarMotor *)0x0) {
    pSStack_1 = characterController;
    (pAVar2->fields).smoothCharacterController = characterController;
    ppSStack_3 = &(pAVar2->fields).smoothCharacterController;
    func_?();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCurrentItemState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetCurrentItemState
               (MVAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *aNewState,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.CurrentItem;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       ((Object *)aNewState,(MethodInfo *)0x0);
    pOVar3 = (pMVar1->fields).value;
    (pMVar1->fields).value = pOVar2;
    func_?(&(pMVar1->fields).value,pOVar2);
    if (pOVar3 != pOVar2) {
      if ((pMVar1->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        pMVar4 = (pMVar1->fields).OnChange;
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar4->fields)._._.invoke_impl)((pMVar4->fields)._._.method_code);
      }
      if (((pMVar1->fields).writeThrough != 0) &&
         ((pMVar1->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
        pMVar5 = (pMVar1->fields).OnWriteThrough;
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar5->fields)._._.invoke_impl)((pMVar5->fields)._._.method_code);
      }
    }
    return;
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetMode
               (MVAvatarLocal *this,AvatarRuntimeState__Enum localMode,MethodInfo *method)

{
  if ((this->fields).avatarLocalModes != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (*(int **)(unaff_EBX + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBX + 0xc) + 0xe0))();
      if (*(Dictionary_2_System_ByteEnum_System_Object_ **)(unaff_EBX + 8) !=
          (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           (*(Dictionary_2_System_ByteEnum_System_Object_ **)(unaff_EBX + 8),
                            localMode,
                            MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                           );
        *(Object **)(unaff_EBX + 0xc) = pOVar1;
        func_?();
        *(char *)(unaff_EBX + 0x10) = (char)localMode;
        if (*(int **)(unaff_EBX + 0xc) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBX + 0xc) + 0xf8))();
          return;
        }
      }
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetToSpawnTransform() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_CancelTransitionCam(this_00,(MethodInfo *)0x0);
    this_01 = MVAvatarLocal_GetSpawnTransform(this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      uVar4 = pQVar3->x;
      uVar5 = pQVar3->y;
      position.y = (float)uVar5;
      position.x = (float)uVar4;
      position.z = fVar2;
      MVAvatarLocal_SetTransform((MVAvatarLocal *)0x0,position,*pQVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTransform(Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetTransform
               (MVAvatarLocal *this,Vector3 position,Quaternion rotation,MethodInfo *method)

{
  p_Var4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)this,(MethodInfo *)0x0);
  if (p_Var4 != (_Il2CppFullySharedGenericStructType *)0x0) {
    (**(code **)(*(int *)p_Var4 + 400))
              (p_Var4,position._0_8_,position.z,*(undefined4 *)(*(int *)p_Var4 + 0x194));
    this_00 = (MVWorldObjectClient *)
              UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)this,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClient *)0x0) {
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_00,rotation,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._._.gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar2,position,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar2,rotation,(MethodInfo *)0x0);
              pAVar3 = (this->fields).avatarMotor;
              if (pAVar3 != (AvatarMotor *)0x0) {
                (*(code *)(pAVar3->klass->vtable).Reset.method)
                          (pAVar3,(pAVar3->klass->vtable).SuspendImpactDamage.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupSpawnroleReceiver(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetupSpawnroleReceiver
               (MVAvatarLocal *this,SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__);
    func_?(&TypeInfo__ReviveState);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__set_Value_ReviveState_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__set_Value_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Size);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pWVar2 = (this->fields)._.skillDataManager;
  if (pWVar2 == (WorldObjectSkillDataManager *)0x0) {
code_?:
    func_?();
    pMVar3 = extraout_EDX;
code_?:
    func_?(unaff_ESI,pMVar3);
  }
  else {
    bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (pWVar2,StringLiteral_Size,(MethodInfo *)0x0);
    pMVar5 = _UNK_?;
    if (bVar4 != 0) {
      pWVar2 = (pMVar1->fields)._.skillDataManager;
      if (pWVar2 == (WorldObjectSkillDataManager *)0x0) goto code_?;
      pMVar5 = (MVAvatarLocal *)
                WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                          (pWVar2,StringLiteral_Size,(MethodInfo *)0x0);
    }
    unaff_ESI = (MVAvatarLocal *)spawnRoleDataReceiver;
    this = pMVar5;
    if ((spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) ||
       (this_00 = (spawnRoleDataReceiver->fields).size,
       this_00 == (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Single]::
    SpawnRoleReceiverVariable_1_System_Single__set_Value
              (this_00,(float)pMVar5,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
              );
    pMStack_6 = this;
    (*(code *)(pMVar1->klass->vtable).set_Scale.method)
              (pMVar1,CONCAT44(this,this),this,(pMVar1->klass->vtable).get_WorldPosition.methodPtr
              );
    pMVar7 = (pMVar1->fields)._.Size;
    if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    (*(code *)(pMVar7->klass->vtable).set_Value.method)(pMVar7,this,pMVar7->klass[1]._0.image);
    this_01 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).reviveState;
    this = (MVAvatarLocal *)func_?(TypeInfo__ReviveState);
    ReviveState::ReviveState__ctor((ReviveState *)this,(MethodInfo *)0x0);
    if (this_01 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Object]::
    SpawnRoleReceiverVariable_1_System_Object__set_Value
              ((SpawnRoleReceiverVariable_1_System_Object_ *)this_01,(Object *)this,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__set_Value_ReviveState_
              );
    this_02 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).lastRespawnType;
    if (this_02 == (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_02,0,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
              );
    pSVar8 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).position;
    pVVar9 = (Vector3 *)
             (*(code *)(pMVar1->klass->vtable).get_Position.method)
                       (auStack_10,pMVar1,(pMVar1->klass->vtable).set_Position.methodPtr);
    if (pSVar8 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (pSVar8,*pVVar9,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    this_03 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).rotation;
    pQVar11 = (Quaternion *)
              (*(code *)(pMVar1->klass->vtable).get_Rotation.method)
                        (&pUStack_12,pMVar1,(pMVar1->klass->vtable).set_Rotation.methodPtr);
    if (this_03 == (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)
    goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
    SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
              (this_03,*pQVar11,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
              );
    pSVar8 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).defaultScale;
    pVVar9 = (Vector3 *)
             (*(code *)(pMVar1->klass->vtable).get_Scale.method)
                       (auStack_10,pMVar1,(pMVar1->klass->vtable).set_Scale.methodPtr);
    if (pSVar8 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (pSVar8,*pVVar9,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    pSVar8 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).scale;
    pVVar9 = (Vector3 *)
             (*(code *)(pMVar1->klass->vtable).get_Scale.method)
                       (auStack_10,pMVar1,(pMVar1->klass->vtable).set_Scale.methodPtr);
    if (pSVar8 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (pSVar8,*pVVar9,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    pSVar13 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).woId;
    if (pSVar13 == (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)pSVar13,(pMVar1->fields)._._._._.id,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
              );
    pMVar14 = (pMVar1->fields)._.MaxHealth;
    pSVar13 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).maxHealth;
    if ((pMVar14 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) ||
       (value = (*(code *)(pMVar14->klass->vtable).get_Value.method)
                          (pMVar14,(pMVar14->klass->vtable).set_Value.methodPtr),
       pSVar13 == (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0)) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)pSVar13,value,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
              );
    pSStack_15 = (((SpawnRoleDataReceiver *)unaff_ESI)->fields).tierRequirement;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
      cRam_? = '\x01';
    }
    this = (MVAvatarLocal *)0x0;
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
    bVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                      (this_04,(pMVar1->fields).spawnWorldObjectId,(MVWorldObject **)&this,
                       (MethodInfo *)0x0);
    pMVar5 = this;
    if ((((bVar4 != 0) && (unaff_ESI = this, this != (MVAvatarLocal *)0x0)) &&
        (pMVar16 = this->klass,
        (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <= (pMVar16->_1).naturalAligment))
       && (((MVAvatarSpawnRoleCreator__Class *)
            (pMVar16->_1).typeHierarchy[(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1]
            == TypeInfo__MVAvatarSpawnRoleCreator && (this != (MVAvatarLocal *)0x0)))) {
      pMVar3 = TypeInfo__MVAvatarSpawnRoleCreator;
      if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment <= (pMVar16->_1).naturalAligment)
         && ((MVAvatarSpawnRoleCreator__Class *)
             (pMVar16->_1).typeHierarchy
             [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] ==
             TypeInfo__MVAvatarSpawnRoleCreator)) {
        GVar17 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                           ((MVAvatarSpawnRoleCreator *)this,(MethodInfo *)0x0);
        this = (MVAvatarLocal *)CONCAT31(this._1_3_,(char)GVar17);
        unaff_ESI = pMVar5;
        goto code_?;
      }
      goto code_?;
    }
    this = (MVAvatarLocal *)((uint)this & 0xffffff00);
code_?:
    if (pSStack_15 == (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)0x0)
    goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::ByteEnum]::
    SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSStack_15,(ByteEnum__Enum)this,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__set_Value_MV__Common__GamePassTier_
              );
    this = (MVAvatarLocal *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this == (MVAvatarLocal *)0x0) goto code_?;
    pUStack_12 = TypeInfo__UnityEngine__Events__UnityAction;
    a = (UnityAction *)(this->fields)._._._._.inputLinkRefs;
    this_05 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_05,(Object *)pMVar1,MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__
               ,(MethodInfo *)0x0);
    pMVar5 = (MVAvatarLocal *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_05,(MethodInfo *)0x0);
    pMVar1 = this;
    if (pMVar5 == (MVAvatarLocal *)0x0) {
      this = (MVAvatarLocal *)0x0;
      (pMVar1->fields)._._._._.inputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
      func_?();
      return;
    }
    pMVar1 = (MVAvatarLocal *)0x0;
    if (pMVar5->klass == (MVAvatarLocal__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pMVar1 = pMVar5;
    }
    pMVar18 = (MVAvatarLocal *)TypeInfo__UnityEngine__Events__UnityAction;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    (this->fields)._._._._.inputLinkRefs = (List_1_MV_WorldObject_Link_ *)pMVar1;
    this = (MVAvatarLocal *)0x0;
    if (pMVar5->klass == (MVAvatarLocal__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      this = pMVar5;
    }
    unaff_ESI = (MVAvatarLocal *)TypeInfo__UnityEngine__Events__UnityAction;
    if (this != (MVAvatarLocal *)0x0) {
      func_?();
      return;
    }
  }
  this = unaff_ESI;
  func_?();
  pMVar18 = extraout_ECX;
code_?:
  this = pMVar18;
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SpawnRoleDataReceiverAction(MVAvatarLocal+SpawnRoleDataReceiverActionDelegate) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SpawnRoleDataReceiverAction
               (MVAvatarLocal *this,
               MVAvatarLocal_SpawnRoleDataReceiverActionDelegate
               *spawnRoleDataReceiverActionDelegate,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    if (spawnRoleDataReceiverActionDelegate ==
        (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
      uVar2 = func_?(&pvStack_3);
      func_?(uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puStack_1 = (spawnRoleDataReceiverActionDelegate->fields)._._.method;
    pSStack_5 = (this->fields).spawnRoleDataReceiver;
    pvStack_3 = (spawnRoleDataReceiverActionDelegate->fields)._._.method_code;
    (*(spawnRoleDataReceiverActionDelegate->fields)._._.invoke_impl)();
  }
  return;
}


/* Void SubscribeToExternalEvents() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SubscribeToExternalEvents
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    func_?(&TypeInfo__System__Action<MV::Common::MVGameStateType>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action<WinningConditionType>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__);
    func_?(&
                    MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                   );
    func_?(&
                    MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_);
    func_?(&MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                   );
    func_?(&MethodInfo__MVAvatarLocal__KillSelf__);
    func_?(&MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__);
    func_?(&MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__);
    func_?(&MethodInfo__MVAvatarLocal__OnSetToDeadMode__);
    func_?(&
                    MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__add_OnChange_System__Action<MV::Common::MVGameStateType>_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
                (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar1 != (GameEventManager *)0x0) {
        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,
                   (MethodInfo *)0x0);
        if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_add_OnSetRespawnWhenPossible
                    (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (pGVar1 != (GameEventManager *)0x0) {
            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
            pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,
                       MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__,
                       (MethodInfo *)0x0);
            if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
              GameEventManager+AvatarCommandsPlayModeManager::
              GameEventManager_AvatarCommandsPlayModeManager_add_OnEnterPlaymode
                        (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
              pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if (pGVar1 != (GameEventManager *)0x0) {
                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar3,(Object *)this,
                           MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__,
                           (MethodInfo *)0x0);
                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                  GameEventManager+AvatarCommandsPlayModeManager::
                  GameEventManager_AvatarCommandsPlayModeManager_add_OnSetToSpawnPoint
                            (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                     ((MethodInfo *)0x0);
                  if (pGVar1 != (GameEventManager *)0x0) {
                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                             func_?(TypeInfo__System__Action<int>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                    Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                              (pUVar4,(Object *)this,
                               MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_,
                               (MethodInfo *)0x0);
                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                      GameEventManager+AvatarCommandsPlayModeManager::
                      GameEventManager_AvatarCommandsPlayModeManager_add_OnMoveBodyToSafeSpot
                                (pGVar2,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
                      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                         ((MethodInfo *)0x0);
                      if (pGVar1 != (GameEventManager *)0x0) {
                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                        pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                 func_?(TypeInfo__System__Action<int>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (pUVar4,(Object *)this,
                                   MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_,
                                   (MethodInfo *)0x0);
                        if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                          GameEventManager+AvatarCommandsPlayModeManager::
                          GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAtSafeSpot
                                    (pGVar2,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
                          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                             ((MethodInfo *)0x0);
                          if (pGVar1 != (GameEventManager *)0x0) {
                            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                            pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                     func_?(TypeInfo__System__Action);
                            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                            NavMesh_OnNavMeshPreUpdate__ctor
                                      (pNVar3,(Object *)this,
                                       MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                                       ,(MethodInfo *)0x0);
                            if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                              GameEventManager+AvatarCommandsPlayModeManager::
                              GameEventManager_AvatarCommandsPlayModeManager_add_OnReadyScreenShot
                                        (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                              pGVar1 = MVGameControllerBase::
                                       MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                              if (pGVar1 != (GameEventManager *)0x0) {
                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                         func_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`1[System::Int32Enum]::
                                UnityAction_1_System_Int32Enum___ctor
                                          (pUVar4,(Object *)this,
                                           MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                           ,(MethodInfo *)0x0);
                                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)
                                {
                                  GameEventManager+AvatarCommandsPlayModeManager::
                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnWinningConditionIntermediateDebriefing
                                            (pGVar2,(Action_1_WinningConditionType_ *)pUVar4,
                                             (MethodInfo *)0x0);
                                  pGVar1 = MVGameControllerBase::
                                           MVGameControllerBase_get_GameEventManager
                                                     ((MethodInfo *)0x0);
                                  if (pGVar1 != (GameEventManager *)0x0) {
                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                             func_?(TypeInfo__System__Action);
                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                    NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                              (pNVar3,(Object *)this,
                                               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                               ,(MethodInfo *)0x0);
                                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                      GameEventManager+AvatarCommandsPlayModeManager::
                                      GameEventManager_AvatarCommandsPlayModeManager_add_OnRemoveFromGame
                                                (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                                      pGVar1 = MVGameControllerBase::
                                               MVGameControllerBase_get_GameEventManager
                                                         ((MethodInfo *)0x0);
                                      if (pGVar1 != (GameEventManager *)0x0) {
                                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                 func_?(TypeInfo__System__Action);
                                        UnityEngine.AIModule.dll::UnityEngine::AI::
                                        NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                                  (pNVar3,(Object *)this,
                                                   MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                   (MethodInfo *)0x0);
                                        if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                          GameEventManager+AvatarCommandsPlayModeManager::
                                          GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAsGhost
                                                    (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                                          pGVar1 = MVGameControllerBase::
                                                   MVGameControllerBase_get_GameEventManager
                                                             ((MethodInfo *)0x0);
                                          if (pGVar1 != (GameEventManager *)0x0) {
                                            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                            pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                     func_?(TypeInfo__System__Action);
                                            UnityEngine.AIModule.dll::UnityEngine::AI::
                                            NavMesh+OnNavMeshPreUpdate::
                                            NavMesh_OnNavMeshPreUpdate__ctor
                                                      (pNVar3,(Object *)this,
                                                       MethodInfo__MVAvatarLocal__OnSetToDeadMode__,
                                                       (MethodInfo *)0x0);
                                            if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                              GameEventManager+AvatarCommandsPlayModeManager::
                                              GameEventManager_AvatarCommandsPlayModeManager_add_OnSetToDeadMode
                                                        (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                                              pGVar1 = MVGameControllerBase::
                                                       MVGameControllerBase_get_GameEventManager
                                                                 ((MethodInfo *)0x0);
                                              if (pGVar1 != (GameEventManager *)0x0) {
                                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                         func_?(TypeInfo__System__Action);
                                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                                NavMesh+OnNavMeshPreUpdate::
                                                NavMesh_OnNavMeshPreUpdate__ctor
                                                          (pNVar3,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                  GameEventManager+AvatarCommandsPlayModeManager::
                                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnRespawn
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if ((pGVar1 != (GameEventManager *)0x0) &&
                                                     (pGVar5 = (pGVar1->fields).GameState,
                                                     pGVar5 != (GameEventManager_GameStateManager *)
                                                               0x0)) {
                                                    this_00 = (
                                                  SubscribableVariableBase_1_System_Single_ *)
                                                  (pGVar5->fields).gameStateType;
                                                  pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<MV::Common::MVGameStateType>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Int32Enum]::
                                                  UnityAction_1_System_Int32Enum___ctor
                                                            (pUVar4,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                                                  ,(MethodInfo *)0x0);
                                                  if (this_00 !=
                                                      (SubscribableVariableBase_1_System_Single_ *)
                                                      0x0) {
                                                    SubscribableVariableBase`1[System::Single]::
                                                                                                        
                                                  SubscribableVariableBase_1_System_Single__add_OnChange
                                                            (this_00,(Action_1_Single_ *)pUVar4,
                                                                                                                          
                                                  MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__add_OnChange_System__Action<MV::Common::MVGameStateType>_
                                                  );
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Int32Enum]::
                                                  UnityAction_1_System_Int32Enum___ctor
                                                            (pUVar4,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    GameEventManager::
                                                    GameEventManager_add_OnFirstTimeEvent
                                                              (pGVar1,(
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )pUVar4,(MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<int>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Int32Enum]::
                                                  UnityAction_1_System_Int32Enum___ctor
                                                            (pUVar4,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    GameEventManager::
                                                    GameEventManager_add_OnXPRewarded
                                                              (pGVar1,(Action_1_Int32_ *)pUVar4,
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Suicide() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Suicide
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c);
    cRam_? = '\x01';
  }
  bVar1 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pAVar2 = (this->fields).interactableLocal;
    if ((pAVar2 == (AvatarInteractable *)0x0) ||
       (pAVar3 = (pAVar2->fields).lastDamageSource, pAVar3 == (AvatarInteractable_DamageSource *)0x0
       )) goto code_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((fVar4 - (pAVar3->fields).time <= _UNK_?) &&
       ((pAVar2->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0)) {
      pAVar2 = (this->fields).interactableLocal;
      if ((((pAVar2 == (AvatarInteractable *)0x0) ||
           (pAVar3 = (pAVar2->fields).lastDamageSource,
           pAVar3 == (AvatarInteractable_DamageSource *)0x0)) ||
          (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0), _UNK_? < fVar4 - (pAVar3->fields).time))
         || (pAVar3 = (pAVar2->fields).lastDamageSource,
            pAVar3 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
      puVar5 = &UNK_?;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar4 - (pAVar3->fields).time <= _UNK_?) {
        pAVar2 = (this->fields).interactableLocal;
        if ((pAVar2 != (AvatarInteractable *)0x0) &&
           ((pAVar2->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0)) {
          puVar6 = &UNK_?;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          if ((((fVar4 - *(float *)(puVar6 + 0x14) <= _UNK_?) &&
               (((pAVar2->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0 &&
                (pAVar7 = (this->fields).interactableLocal, pAVar7 != (AvatarInteractable *)0x0))))
              && (pAVar3 = (pAVar7->fields).lastDamageSource,
                 pAVar3 != (AvatarInteractable_DamageSource *)0x0)) &&
             ((fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0),
              fVar4 - (pAVar3->fields).time <= _UNK_? &&
              (pAVar3 = (pAVar7->fields).lastDamageSource,
              pAVar3 != (AvatarInteractable_DamageSource *)0x0)))) {
            pMVar8 = (pAVar2->fields)._.health;
            defaultDamageType = CONCAT31((int3)((uint)puVar5 >> 8),(pAVar3->fields).damageType);
            if (pMVar8 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              damageDealer = (MVPlayer *)&UNK_?;
              fVar9 = (float10)(*(code *)(pMVar8->klass->vtable).get_Value.method)(pMVar8);
              pMVar8 = (pAVar2->fields)._.health;
              fVar4 = (float)fVar9;
              if (pMVar8 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                (*(code *)(pMVar8->klass->vtable).set_Value.method)
                          (pMVar8,0,pMVar8->klass[1]._0.image,defaultDamageType,fVar4);
                pAVar10 = (pAVar2->fields).OnDamageTaken;
                if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar10->fields)._._.invoke_impl)
                            ((pAVar10->fields)._._.method_code,fVar4,damageDealer,defaultDamageType,
                             (pAVar10->fields)._._.method);
                }
                AvatarInteractable::AvatarInteractable_DoKilledNotification
                          (pAVar2,damageDealer,defaultDamageType,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    MVAvatarLocal_Die(this,(MethodInfo *)0x0);
    if ((this->fields).OnSuicide != (Action *)0x0) {
      pAVar11 = (this->fields).OnSuicide;
      (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code);
      if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVAvatarLocal____c);
      }
      this_00 = TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0;
      if (this_00 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
        if ((TypeInfo__MVAvatarLocal____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVAvatarLocal____c);
        }
        object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
        this_00 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                  func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0 = this_00;
        func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0,this_00);
      }
      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        if (this_00 != (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
          (*(this_00->fields)._._.invoke_impl)
                    ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                     (this_00->fields)._._.method);
          return;
        }
code_?:
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  return;
}


/* Void Suspend() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Suspend
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Already_suspended);
    cRam_? = '\x01';
  }
  if ((this->fields).suspended == 0) {
    bVar1 = cRam_? == '\0';
    (this->fields).suspended = 1;
    if (bVar1) {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    x = (this->fields).vehicleRigidBody;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar3->fields).transformNetworkManager,
       this_00 != (TransformNetworkManager *)0x0)) {
      TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager,
         pRVar4 != (RuntimeVariableNetworkManager *)0x0)) {
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                  (pRVar4,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager,
           pRVar4 != (RuntimeVariableNetworkManager *)0x0)) {
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar4,(this->fields)._._._._.id,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Already_suspended,(MethodInfo *)0x0);
  return;
}


/* Void ToggleAudioListener(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_ToggleAudioListener
               (MVAvatarLocal *this,bool on,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLocal);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.avatar;
  pAVar2 = TypeInfo__AvatarLocal;
  if (pAVar1 != (Avatar *)0x0) {
    if (((pAVar1->klass->_1).naturalAligment < (TypeInfo__AvatarLocal->_1).naturalAligment) ||
       ((pAVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarLocal->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLocal)) goto code_?;
    pCVar3 = pAVar1[1].fields._.m_CancellationTokenSource;
    pAVar2 = unaff_ESI;
    if (pCVar3 != (CancellationTokenSource *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
      }
      (*pcRam_?)(pCVar3,_on);
      return;
    }
  }
  func_?();
  pAVar1 = extraout_EDX;
code_?:
  func_?(pAVar1,pAVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSuspend() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UnSuspend
               (MVAvatarLocal *this,MethodInfo *method)

{
  (this->fields).suspended = 0;
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void UnsubscribeFromExternalEvents() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UnsubscribeFromExternalEvents
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    func_?(&TypeInfo__System__Action<MV::Common::MVGameStateType>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action<WinningConditionType>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__);
    func_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__);
    func_?(&
                    MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                   );
    func_?(&
                    MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_);
    func_?(&MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                   );
    func_?(&MethodInfo__MVAvatarLocal__KillSelf__);
    func_?(&MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__);
    func_?(&MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__);
    func_?(&MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__);
    func_?(&MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__);
    func_?(&MethodInfo__MVAvatarLocal__OnSetToDeadMode__);
    func_?(&
                    MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__remove_OnChange_System__Action<MV::Common::MVGameStateType>_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 == (GameEventManager *)0x0) {
code_?:
    func_?();
  }
  else {
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,
               MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    GameEventManager::GameEventManager_remove_OnFirstTimeEvent
              (pGVar1,(Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pUVar4,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetRespawnWhenPossible
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_,
               (MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    GameEventManager::GameEventManager_remove_OnXPRewarded
              (pGVar1,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar1 == (GameEventManager *)0x0) ||
       (pGVar5 = (pGVar1->fields).GameState, pGVar5 == (GameEventManager_GameStateManager *)0x0))
    goto code_?;
    this_00 = (SubscribableVariableBase_1_System_Single_ *)(pGVar5->fields).gameStateType;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__System__Action<MV::Common::MVGameStateType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,
               MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_,
               (MethodInfo *)0x0);
    if (this_00 == (SubscribableVariableBase_1_System_Single_ *)0x0) goto code_?;
    SubscribableVariableBase`1[System::Single]::
    SubscribableVariableBase_1_System_Single__remove_OnChange
              (this_00,(Action_1_Single_ *)pUVar4,
               MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__remove_OnChange_System__Action<MV::Common::MVGameStateType>_
              );
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnReadyScreenShot
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,
               MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_,(MethodInfo *)0x0)
    ;
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnMoveBodyToSafeSpot
              (pGVar2,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_
               ,(MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAtSafeSpot
              (pGVar2,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnRespawn
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToSpawnPoint
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__System__Action<WinningConditionType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,
               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
               ,(MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnWinningConditionIntermediateDebriefing
              (pGVar2,(Action_1_WinningConditionType_ *)pUVar4,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnRemoveFromGame
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
               (MethodInfo *)0x0);
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAsGhost
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 == (GameEventManager *)0x0) goto code_?;
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnSetToDeadMode__,(MethodInfo *)0x0)
    ;
    if (pGVar2 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToDeadMode
              (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
    source = (pMVar6->fields)._.OnCheckpointReached;
    pUVar7 = TypeInfo__UnityEngine__Events__UnityAction;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (pUVar7->_0).this_arg.attrs = 0;
      (pUVar7->_0).this_arg.type = 0;
      (pUVar7->_0).this_arg.field_0x7 = 0;
code_?:
      func_?();
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame *)0x0) {
        pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
        if (pMVar6 != (MVLocalPlayer *)0x0) {
          this_01 = (pMVar6->fields).boostController;
          pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__,
                     (MethodInfo *)0x0);
          if (this_01 != (BoostController *)0x0) {
            BoostController::BoostController_UnSubscribeToBoostChanged
                      (this_01,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)pNVar3,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pDVar9 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar9 = pDVar8;
    }
    if (pDVar9 == (Delegate *)0x0) goto code_?;
    *(Delegate **)&(pUVar7->_0).this_arg.attrs = pDVar9;
    pDVar9 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar9 = pDVar8;
    }
    if (pDVar9 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Update
          (MVAvatarLocal *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).avatarLocalModes;
  if ((pMVar2 != (MVAvatarLocal_AvatarLocalModes *)0x0) &&
     (pMStack_3 = (pMVar2->fields).currentMode, pMStack_3 != (MVAvatarLocal_AvatarMode *)0x0)) {
    pIStack_1 = (pMStack_3->klass->vtable).Activate.methodPtr;
    pIStack_4 = interactionMap;
    (*(code *)(pMStack_3->klass->vtable).__unknown_2.method)();
    return interactionMap;
  }
  uVar5 = func_?(&pMStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pIVar7 = (InputToInGameAction *)(*pcVar6)();
  return pIVar7;
}


/* Void UpdateMaxHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UpdateMaxHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVAvatarLocal___UpdateMaxHealth_b__119_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&StringLiteral_MaxHealth);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields)._.skillDataManager;
  if (pWVar1 != (WorldObjectSkillDataManager *)0x0) {
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (pWVar1,StringLiteral_MaxHealth,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      iVar3 = (this->fields).defaultBaseMaxHealth;
    }
    else {
      pWVar1 = (this->fields)._.skillDataManager;
      if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (pWVar1,StringLiteral_MaxHealth,(MethodInfo *)0x0);
    }
    fVar4 = (this->fields).boostedHealthMultiplier;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar5 = (this->fields)._.MaxHealth;
    if (pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      pMVar6 = pMVar5->klass;
      func_?((double)((float)iVar3 * fVar4),pMVar6[1]._0.image);
      uVar7 = func_?();
      (*(code *)(pMVar6->vtable).set_Value.method)(pMVar5,uVar7);
      this_00 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___UpdateMaxHealth_b__119_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 ,(MethodInfo *)0x0);
      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
        (*(this_00->fields)._._.invoke_impl)
                  ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                   (this_00->fields)._._.method);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_VisualizeBulletImpact
               (MVAvatarLocal *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  VVar1 = voxelHit;
  auVar2._0_52_ = in_stack_3._0_52_;
  auVar2._52_4_ = in_ECX;
  auVar2._56_4_ = unaff_EBP;
  auVar4._52_8_ = auVar2._52_8_;
  auVar4._0_48_ = in_stack_3._0_48_;
  auVar4._48_4_ = unaff_ESI;
  auVar5._48_12_ = auVar4._48_12_;
  auVar5._0_44_ = in_stack_3._0_44_;
  auVar5._44_4_ = 0;
  auVar6._0_52_ = auVar5._0_52_;
  auVar6._52_4_ = 0;
  auVar6._56_4_ = unaff_EBP;
  auVar7._44_16_ = auVar6._44_16_;
  auVar7._0_40_ = in_stack_3._0_40_;
  auVar7._40_4_ = &UNK_?;
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar8 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar8->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    auVar9._52_8_ = auVar7._52_8_;
    auVar9._0_48_ = auVar7._0_48_;
    auVar9._48_4_ = 0;
    auVar10._48_12_ = auVar9._48_12_;
    auVar10._0_44_ = auVar7._0_44_;
    auVar10._44_4_ = &stack0xfffffff8;
    auVar11._44_16_ = auVar10._44_16_;
    auVar11._0_40_ = auVar7._0_40_;
    auVar11._40_4_ = lineOfFire.m_Direction.z;
    auVar12._40_20_ = auVar11._40_20_;
    auVar12._0_36_ = auVar7._0_36_;
    auVar12._36_4_ = this_00;
    auVar13._36_24_ = auVar12._36_24_;
    auVar13._0_32_ = auVar7._0_32_;
    auVar13._32_4_ = &UNK_?;
    bVar14 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,(int32_t)lineOfFire.m_Direction.z,(MVPlayer **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar14 != 0) {
      if (auVar13._52_4_ == (MVPlayer *)0x0) goto code_?;
      bVar14 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        (auVar13._52_4_,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        bVar14 = MVAvatar::MVAvatar_IsInMode
                          ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
        if (bVar14 == 0) {
          pAVar15 = (this->fields)._.avatar;
          if (pAVar15 == (Avatar *)0x0) goto code_?;
          bVar14 = Avatar::Avatar_HasModifierEffect
                            (pAVar15,AvatarModifierEffect__Enum_Invulnerable,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            pAVar15 = (this->fields)._.avatar;
            if (pAVar15 == (Avatar *)0x0) goto code_?;
            voxelHit_00.cubePos._0_4_ = shooterActorNumber;
            voxelHit_00._0_24_ = lineOfFire;
            voxelHit_00._28_4_ = 0;
            voxelHit_00.face = voxelHit.face;
            voxelHit_00.isCubeHit = voxelHit.isCubeHit;
            voxelHit_00._37_3_ = voxelHit._37_3_;
            voxelHit_00.woId = voxelHit.woId;
            voxelHit_00.cube = voxelHit.cube;
            voxelHit_00.distance = voxelHit.distance;
            voxelHit_00.collider = voxelHit.collider;
            voxelHit_00.transform = voxelHit.transform;
            voxelHit_00._60_12_ = VVar1._60_12_;
            Avatar::Avatar_VisualizeBulletImpact
                      (pAVar15,voxelHit_00,lineOfFire,shooterActorNumber,0.0,
                       (MethodInfo *)voxelHit.face);
          }
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void <InitializeHealth>b__128_0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeHealth_b__128_0
               (MVAvatarLocal *this,Object *health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass128_0___InitializeHealth_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass128_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass128_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)health;
    func_?(value + 1,health);
    pOVar1 = value[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      pSVar2 = TypeInfo__System__Single;
      if ((Il2CppClass *)((pOVar1->_0).image)->codeGenModule !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      if (*pfVar3 <= 0.0) {
        MVAvatarLocal_Die(this,(MethodInfo *)0x0);
      }
      else {
        previousHealth = (this->fields).previousHealth;
        pMVar4 = (this->fields)._.Health;
        if (pMVar4 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
        fVar5 = (float10)(*(code *)(pMVar4->klass->vtable).get_Value.method)
                                   (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr);
        MVAvatar::MVAvatar_TrySpawningHealParticles
                  ((MVAvatar *)this,previousHealth,(float)fVar5,(MethodInfo *)0x0);
      }
      pMVar4 = (this->fields)._.Health;
      if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        fVar5 = (float10)(*(code *)(pMVar4->klass->vtable).get_Value.method)
                                   (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr);
        (this->fields).previousHealth = (float)fVar5;
        this_00 = (UnityAction_1_System_Object_ *)
                  func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,value,
                   MethodInfo__MVAvatarLocal____c__DisplayClass128_0___InitializeHealth_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        if ((this->fields).spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) {
          return;
        }
        if (this_00 != (UnityAction_1_System_Object_ *)0x0) {
          (*(this_00->fields)._._.invoke_impl)
                    ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                     (this_00->fields)._._.method);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pOVar1 = extraout_ECX;
  pSVar2 = extraout_EDX;
code_?:
  func_?(pOVar1,pSVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <InitializeShield>b__125_0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeShield_b__125_0
               (MVAvatarLocal *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVAvatarLocal____c__DisplayClass125_0___InitializeShield_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVAvatarLocal____c__DisplayClass125_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVAvatarLocal____c__DisplayClass125_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)shield;
    func_?(value + 1,shield);
    previousHealth = (this->fields).previousShield;
    pMVar1 = (this->fields)._.shield;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                 (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
      MVAvatar::MVAvatar_TrySpawningHealParticles
                ((MVAvatar *)this,previousHealth,(float)fVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.shield;
      if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                   (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
        (this->fields).previousShield = (float)fVar2;
        this_00 = (UnityAction_1_System_Object_ *)
                  func_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,value,
                   MethodInfo__MVAvatarLocal____c__DisplayClass125_0___InitializeShield_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
          if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
          (*(this_00->fields)._._.invoke_impl)
                    ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                     (this_00->fields)._._.method);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OnEquipItem>b__136_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__OnEquipItem_b__136_0
               (MVAvatarLocal *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  pSVar1 = receiver;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                   );
    cRam_? = '\x01';
  }
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    pSVar2 = (receiver->fields).isInGunMode;
    pAVar3 = (this->fields).pickupOwner;
    if (pAVar3 != (AvatarPickupOwner *)0x0) {
      bVar4 = MVPickupOwner::MVPickupOwner_get_InFirstPerson
                        ((MVPickupOwner *)pAVar3,(MethodInfo *)0x0);
      receiver = (SpawnRoleDataReceiver *)CONCAT31(receiver._1_3_,bVar4);
      if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::ByteEnum]::
        SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
                  ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSVar2,(ByteEnum__Enum)receiver,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                  );
        pAVar3 = (this->fields).pickupOwner;
        pSVar2 = (pSVar1->fields).pickupItemIsInHand;
        if (pAVar3 != (AvatarPickupOwner *)0x0) {
          bVar4 = MVPickupOwner::MVPickupOwner_get_PickupItemIsInHand
                            ((MVPickupOwner *)pAVar3,(MethodInfo *)0x0);
          receiver = (SpawnRoleDataReceiver *)(uint)bVar4;
          if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleReceiverVariable`1[System::ByteEnum]::
            SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
                      ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSVar2,
                       (ByteEnum__Enum)receiver,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnHolsteredChanged>b__111_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__OnHolsteredChanged_b__111_0
               (MVAvatarLocal *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                   );
    cRam_? = '\x01';
  }
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    this_00 = (receiver->fields).pickupItemIsInHand;
    this_01 = (this->fields).pickupOwner;
    if (this_01 != (AvatarPickupOwner *)0x0) {
      bVar1 = MVPickupOwner::MVPickupOwner_get_PickupItemIsInHand
                        ((MVPickupOwner *)this_01,(MethodInfo *)0x0);
      receiver = (SpawnRoleDataReceiver *)CONCAT31(receiver._1_3_,bVar1);
      if (this_00 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::ByteEnum]::
        SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
                  ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)this_00,(ByteEnum__Enum)receiver,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <UpdateMaxHealth>b__119_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__UpdateMaxHealth_b__119_0
               (MVAvatarLocal *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                   );
    cRam_? = '\x01';
  }
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    this_00 = (receiver->fields).maxHealth;
    pMVar1 = (this->fields)._.MaxHealth;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      value = (*(code *)(pMVar1->klass->vtable).get_Value.method)
                        (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
      if (this_00 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Int32Enum]::
        SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                  ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,value,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVAvatarLocal(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__ctor
               (MVAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarRespawnHandler);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).currAnim = ::StringLiteral__;
  func_?(&(this->fields).currAnim,::StringLiteral__);
  this_00 = (GizmoBehaviour *)func_?(TypeInfo__AvatarRespawnHandler);
  RTG::GizmoBehaviour::GizmoBehaviour__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).avatarRespawnHandler = (AvatarRespawnHandler *)this_00;
  func_?(&(this->fields).avatarRespawnHandler,this_00);
  (this->fields).boostedHealthMultiplier = 1.0;
  (this->fields).defaultBaseMaxHealth = 100;
  (this->fields).spawnWorldObjectId = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVAvatar::MVAvatar__ctor
              ((MVAvatar *)this,data,(pPVar1->fields).mvLocalAvatarPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarLocal get_AvatarLocal() */

AvatarLocal *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLocal);
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarLocal *)(this->fields)._.avatar;
  if (pAVar1 == (AvatarLocal *)0x0) {
    return (AvatarLocal *)0x0;
  }
  if (((TypeInfo__AvatarLocal->_1).naturalAligment <= (pAVar1->klass->_1).naturalAligment) &&
     ((pAVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarLocal->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__AvatarLocal)) {
    return pAVar1;
  }
  func_?(pAVar1,TypeInfo__AvatarLocal);
  pcVar2 = (code *)swi(3);
  pAVar1 = (AvatarLocal *)(*pcVar2)();
  return pAVar1;
}


/* Int32 get_BaseMaxHealth() */

int32_t Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_BaseMaxHealth
                  (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).defaultBaseMaxHealth;
}


/* Bounds get_Bounds() */

Bounds * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_Bounds
                   (Bounds *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorHandler;
  if (((pUVar1 != (UseInteractorHandler *)0x0) &&
      (pCVar2 = (pUVar1->fields).triggingColliders, pCVar2 != (ColliderCollection *)0x0)) &&
     (this_00 = (pCVar2->fields).activeCollider, this_00 != (Collider *)0x0)) {
    pBVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                       (&BStack_4,this_00,(MethodInfo *)0x0);
    fVar5 = (pBVar3->m_Center).y;
    fVar6 = (pBVar3->m_Center).z;
    fVar7 = (pBVar3->m_Extents).x;
    (__return_storage_ptr__->m_Center).x = (pBVar3->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar5;
    (__return_storage_ptr__->m_Center).z = fVar6;
    (__return_storage_ptr__->m_Extents).x = fVar7;
    fVar5 = (pBVar3->m_Extents).z;
    (__return_storage_ptr__->m_Extents).y = (pBVar3->m_Extents).y;
    (__return_storage_ptr__->m_Extents).z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pBVar3 = (Bounds *)(*pcVar8)();
  return pBVar3;
}


/* Boolean get_ForceRotateAvatarToFiringDirection() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_ForceRotateAvatarToFiringDirection
               (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields)._ForceRotateAvatarToFiringDirection_k__BackingField;
}


/* Boolean get_InFirstPersonGunMode() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x_00 = (this->fields).pickupOwner;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if ((this->fields).pickupOwner == (AvatarPickupOwner *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_3 + 0x38);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    piVar4 = *(int **)(in_stack_3 + 0x38);
    if (piVar4 == (int *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    if ((char)piVar4[0x17] == '\0') {
      bVar1 = (**(code **)(*piVar4 + 0xf8))();
      return bVar1;
    }
  }
  return 0;
}


/* AvatarInteractable get_InteractableLocal() */

AvatarInteractable *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_InteractableLocal
          (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).interactableLocal;
}


/* Boolean get_IsEnteringVehicle() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_IsEnteringVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._PlayerController_k__BackingField,
     this_00 != (MVLocalObjectController *)0x0)) {
    bVar2 = MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
                      (this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean get_IsInVehicle() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_IsInVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).vehicleRigidBody;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Vector3 get_LookAtPos() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_LookAtPos
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields)._._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    ppVStack_4 = (Vector3__Class **)pVVar1->z;
    if (cRam_? == '\0') {
      ppVStack_4 = &TypeInfo__UnityEngine__Vector3;
      uStack_3 = CONCAT44(&UNK_?,(float)uStack_3);
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar5->upVector).x;
    uVar7 = (pVVar5->upVector).y;
    fVar8 = (pVVar5->upVector).z;
    __return_storage_ptr__->x = (float)uStack_3 + (float)uVar6;
    __return_storage_ptr__->y = uStack_3._4_4_ + (float)uVar7;
    __return_storage_ptr__->z = fVar8 + (float)ppVStack_4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* AvatarPickupOwner get_PickupOwner() */

AvatarPickupOwner *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_PickupOwner
          (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).pickupOwner;
}


/* KogamaSettingWrapperBase get_Settings() */

KogamaSettingWrapperBase *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_Settings
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    cRam_? = '\x01';
  }
  values = (this->fields)._._._._.data;
  if ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
  this_00 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System::
  Object],Object,Object,Object]::
  Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,(MethodInfo *)0x0);
  pKVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (values,pKVar1,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_00,(MethodInfo *)0x0);
  return pKVar1;
}


/* Int32 get_SpawnId() */

int32_t Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_SpawnId
                  (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).spawnWorldObjectId;
}


/* ColliderCollection get_TriggingColliders() */

ColliderCollection *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
          (MVAvatarLocal *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).useInteractorHandler;
  if (pUVar2 != (UseInteractorHandler *)0x0) {
    return (pUVar2->fields).triggingColliders;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pCVar6 = (ColliderCollection *)(*pcVar5)();
  return pCVar6;
}


/* Vector3 get_VelocityAbsolute() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_VelocityAbsolute
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).vehicleRigidBody;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pAVar2 = (this->fields).avatarMotor;
  }
  else {
    pAVar2 = (AvatarMotor *)(this->fields).vehicleRigidBody;
  }
  if (pAVar2 != (AvatarMotor *)0x0) {
    apIStack_3[0] = (((MVRigidBody__Class *)pAVar2->klass)->vtable).__unknown_2.methodPtr;
    puVar4 = (undefined8 *)
             (*(code *)(((MVRigidBody__Class *)pAVar2->klass)->vtable).__unknown_1.method)
                       (apIStack_3,pAVar2);
    uVar5 = *puVar4;
    fVar6 = *(float *)(puVar4 + 1);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  apIStack_3[0] = (Il2CppMethodPointer)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Vector3 get_VelocityRelative() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_VelocityRelative
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarMotor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar1 = (this->fields).avatarMotor;
    if (pAVar1 != (AvatarMotor *)0x0) {
      appVStack_3[0] = (Vector3__Class **)(pAVar1->klass->vtable).get_IsMovementLocked.methodPtr;
      puVar4 = (undefined8 *)
               (*(code *)(pAVar1->klass->vtable).get_Velocity.method)(appVStack_3,pAVar1);
      uVar5 = *puVar4;
      fVar6 = *(float *)(puVar4 + 1);
      __return_storage_ptr__->x = (float)(int)uVar5;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
    appVStack_3[0] = (Vector3__Class **)&UNK_?;
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  if (cRam_? == '\0') {
    appVStack_3[0] = &TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar6 = (pVVar9->zeroVector).z;
  __return_storage_ptr__->x = (pVVar9->zeroVector).x;
  __return_storage_ptr__->y = fVar10;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Void set_BaseMaxHealth(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
               (MVAvatarLocal *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (cRam_? == '\0') {
    func_?(&void_MethodInfo__System__Math__ThrowMinMaxException<int>_int__int_);
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (value < 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = 999;
    if (value < 1000) {
      iVar1 = value;
    }
  }
  pMVar2 = (this->fields)._.MaxHealth;
  (this->fields).defaultBaseMaxHealth = iVar1;
  if (pMVar2 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    iVar3 = (*(code *)(pMVar2->klass->vtable).get_Value.method)
                      (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
    pMVar4 = (this->fields)._.Health;
    if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar5 = (float10)(*(code *)(pMVar4->klass->vtable).get_Value.method)
                                 (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr);
      MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.MaxHealth;
      pMVar4 = (this->fields)._.Health;
      if ((pMVar2 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
         (iVar6 = (*(code *)(pMVar2->klass->vtable).get_Value.method)
                            (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr),
         pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
        (*(code *)(pMVar4->klass->vtable).set_Value.method)
                  (pMVar4,(float)iVar6 / ((float)iVar3 / (float)fVar5),pMVar4->klass[1]._0.image);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_ForceRotateAvatarToFiringDirection(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_set_ForceRotateAvatarToFiringDirection
               (MVAvatarLocal *this,bool value,MethodInfo *method)

{
  (this->fields)._ForceRotateAvatarToFiringDirection_k__BackingField = value;
  return;
}


/* Void set_SpawnId(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_set_SpawnId
               (MVAvatarLocal *this,int32_t value,MethodInfo *method)

{
  (this->fields).spawnWorldObjectId = value;
  return;
}

