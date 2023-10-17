
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
            ((TypeInfo__MVBuildModeAvatar->_1).typeHierarchyDepth <=
             (pMVar3->klass->_1).typeHierarchyDepth)) &&
           ((MVBuildModeAvatar__Class *)
            (pMVar3->klass->_1).typeHierarchy
            [(TypeInfo__MVBuildModeAvatar->_1).typeHierarchyDepth - 1] ==
            TypeInfo__MVBuildModeAvatar)) {
          (*(this->klass->vtable).set_Position.methodPtr)();
          (*(this->klass->vtable).set_Rotation.methodPtr)();
          puVar4 = (undefined8 *)(*(this->klass->vtable).get_Position.methodPtr)();
          uVar5 = *puVar4;
          fVar6 = *(float *)(puVar4 + 1);
          pQVar7 = (Quaternion *)(*(this->klass->vtable).get_Rotation.methodPtr)(&stack0xffffffe4);
          position_00.z = fVar6;
          position_00.x = (float)(int)uVar5;
          position_00.y = (float)(int)((ulonglong)uVar5 >> 0x20);
          MVAvatarLocal_SetTransform(this,position_00,*pQVar7,(MethodInfo *)0x0);
        }
        MVAvatarLocal_SetupSpawnroleReceiver(this,(SpawnRoleDataReceiver *)0x0,(MethodInfo *)0x0);
        pAVar8 = (this->fields)._.avatar;
        if (pAVar8 != (Avatar *)0x0) {
          if (((pAVar8->klass->_1).typeHierarchyDepth <
               (TypeInfo__AvatarLocal->_1).typeHierarchyDepth) ||
             ((pAVar8->klass->_1).typeHierarchy[(TypeInfo__AvatarLocal->_1).typeHierarchyDepth - 1]
              != (Il2CppClass *)TypeInfo__AvatarLocal)) goto code_?;
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
                      if ((this_05 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
                         (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (this_05,(Object *)this,
                                     MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__,
                                     (MethodInfo *)0x0), this_02 != (BoostController *)0x0)) {
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
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
        (*(pMVar2->klass->vtable).__unknown.methodPtr)
                  (pMVar2,7,(pMVar2->klass->vtable).__unknown.method);
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
            (*(pMVar2->klass->vtable).Activate.methodPtr)
                      (pMVar2,this,(pMVar2->klass->vtable).Activate.method);
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
    func_?(this_01);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__Common__SpawnRoleModeType);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
                   );
    func_?(&StringLiteral_avatar__);
    func_?(&StringLiteral____a__);
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_AvatarStateChangedHandler((MVAvatar *)this,a,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 == (GameObject *)0x0) {
code_?:
    func_?();
    pSVar1 = extraout_ECX;
  }
  else {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (a == (Object *)0x0) goto code_?;
    EStack_3.monitor = (MonitorData *)TypeInfo__MV__Common__SpawnRoleModeType;
    if ((a->klass->_0).element_class != (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    goto code_?;
    EStack_3.monitor = (MonitorData *)a;
    EStack_3.klass = (Enum__Class *)&UNK_?;
    puVar4 = (undefined4 *)func_?();
    uStack_5 = *puVar4;
    EStack_3.klass = (Enum__Class *)TypeInfo__MV__Common__SpawnRoleModeType;
    EStack_3.monitor = (MonitorData *)0xffffffff;
    str3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_avatar__,pSVar2,StringLiteral____a__,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
    ;
    pSVar6 = (this->fields).spawnRoleDataReceiver;
    if ((pSVar6 == (SpawnRoleDataReceiver *)0x0) ||
       (this_01 = (pSVar6->fields).spawnRoleMode,
       this_01 == (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
    goto code_?;
    pSVar1 = TypeInfo__MV__Common__SpawnRoleModeType;
    if ((a->klass->_0).element_class == (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    {
      pIVar7 = (Int32Enum__Enum *)func_?(a);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleReceiverVariable`1[System::Int32Enum]::
      SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_01,*pIVar7,method_00);
      return;
    }
  }
  func_?(a,pSVar1);
  EStack_3.monitor = (MonitorData *)extraout_EDX;
code_?:
  EStack_3.klass = (Enum__Class *)a;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
    DStack_1._version = 0;
    DStack_1._index = 0;
    DStack_1._current.key = 0;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 0;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this_02->fields).triggerBoxEvents;
    (this_02->fields).wasResetThisFrame = 1;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_3,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                         );
      DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2->_dictionary;
      DStack_1._version = pDVar2->_version;
      DStack_1._index = pDVar2->_index;
      DStack_1._current.key = (int32_t)(pDVar2->_current).key;
      DStack_1._16_8_ = *(undefined8 *)&(pDVar2->_current).value;
      while( true ) {
        DStack_1._getEnumeratorRetType = (int32_t)&UNK_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_1,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                 ,method_00);
      this_04 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this_02->fields).newTriggerBoxEvents;
      if (this_04 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (this_04,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)(this_02->fields).triggerBoxEvents;
        if (this_01 !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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
      (*(pAVar2->klass->vtable).Unequip.methodPtr)();
      pAVar3 = (this_03->fields).interactableLocal;
      if (pAVar3 != (AvatarInteractable *)0x0) {
        (*(pAVar3->klass->vtable).ClearModifiers.methodPtr)();
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
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
  func_?(6);
  pMVar5 = (this->fields)._.shield;
  if (pMVar5 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
  (*(pMVar5->klass->vtable).set_Value.methodPtr)();
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
      func_?(6);
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (this->fields).avatarLocalModes;
  if ((pMVar2 != (MVAvatarLocal_AvatarLocalModes *)0x0) &&
     (pMStack_3 = (pMVar2->fields).currentMode, pMStack_3 != (MVAvatarLocal_AvatarMode *)0x0)) {
    pMStack_1 = (pMStack_3->klass->vtable).__unknown_1.method;
    pIStack_4 = movementMap;
    (*(pMStack_3->klass->vtable).__unknown_1.methodPtr)();
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
    pOVar1[2].monitor = (MonitorData *)this;
    func_?(&pOVar1[2].monitor,this);
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
  if (this_01 != (AvatarLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&StringLiteral_OnXpProgressing);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_OnXpProgressing,(MethodInfo *)0x0);
    pMVar1 = (this_01->fields)._.mvAvatar;
    if (((pMVar1 != (MVAvatar *)0x0) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0))
       && (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
      layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (this_00,(MethodInfo *)0x0);
      AvatarLocal::AvatarLocal_CreateXPParticlesWithLayer(this_01,obj,layer,(MethodInfo *)0x0);
      return;
    }
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
    pDVar1 = extraout_EDX;
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (pDVar1->klass->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return pDVar1;
    }
  }
  func_?(pDVar1,unaff_ESI);
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Transform GetSpawnTransform() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetSpawnTransform
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                   );
    func_?(&StringLiteral_No_spawn_point_found_on_planet_);
    func_?(&StringLiteral_Spawn_role);
    func_?(&StringLiteral_Spawn_role_creator_was_destroyed);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pMVar1 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)this_02,(MethodInfo *)0x0);
      pSVar2 = (this->fields).spawnRoleDataReceiver;
      unaff_ESI = this;
      if (pMVar1 == (MVCheckpoint *)0x0) {
        if ((pSVar2 != (SpawnRoleDataReceiver *)0x0) &&
           (this_04 = (MVAvatarLocal *)(pSVar2->fields).lastRespawnType,
           this_04 != (MVAvatarLocal *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Int32Enum]::
          SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                    ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_04,2,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                    );
          if ((this->fields).spawnWorldObjectId == -1) {
code_?:
            pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                               ((MethodInfo *)0x0);
            if (pMVar3 != (MVWorldObjectClient *)0x0) {
              return (pMVar3->fields).transform;
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_No_spawn_point_found_on_planet_,(MethodInfo *)0x0);
            return (Transform *)0x0;
          }
          this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_03 != (MVWorldObjectClientManager *)0x0) {
            bVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                              (this_03,(this->fields).spawnWorldObjectId,
                               (MVWorldObject **)&stack0xfffffff8,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_Spawn_role_creator_was_destroyed,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            unaff_ESI = this_04;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              unaff_ESI = this_04;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Spawn_role,(MethodInfo *)0x0);
            if (unaff_ESI != (MVAvatarLocal *)0x0) {
              if ((((TypeInfo__MVWorldObjectClient->_1).typeHierarchyDepth <=
                    (unaff_ESI->klass->_1).typeHierarchyDepth) &&
                  ((MVWorldObjectClient__Class *)
                   (unaff_ESI->klass->_1).typeHierarchy
                   [(TypeInfo__MVWorldObjectClient->_1).typeHierarchyDepth - 1] ==
                   TypeInfo__MVWorldObjectClient)) && (unaff_ESI != (MVAvatarLocal *)0x0)) {
                return (unaff_ESI->fields)._._._.transform;
              }
              goto code_?;
            }
          }
        }
      }
      else if ((pSVar2 != (SpawnRoleDataReceiver *)0x0) &&
              (this_00 = (pSVar2->fields).lastRespawnType,
              this_00 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Int32Enum]::
        SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                  ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,3,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                  );
        return (pMVar1->fields)._._.transform;
      }
    }
  }
  func_?();
code_?:
  pMStack5 = unaff_ESI;
  func_?();
  pcVar6 = (code *)swi(3);
  pTVar7 = (Transform *)(*pcVar6)();
  return pTVar7;
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
      bVar4 = (pMVar3->_1).typeHierarchyDepth;
      ppIVar2 = (Il2CppClass **)CONCAT31(extraout_var,bVar4);
      if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth <= bVar4) &&
         ((ppIVar2 = (pMVar3->_1).typeHierarchy,
          (MVAvatarSpawnRoleCreator__Class *)
          ppIVar2[(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVAvatarSpawnRoleCreator && (unaff_ESI != (MVAvatarSpawnRoleCreator *)0x0)))) {
        if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth <=
             (pMVar3->_1).typeHierarchyDepth) &&
           ((MVAvatarSpawnRoleCreator__Class *)
            (pMVar3->_1).typeHierarchy
            [(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
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
         (iVar4 = *(int *)(*(int *)(in_stack_3 + 0xfc) + 0x1c), iVar4 != 0)) {
        *(undefined1 *)(iVar4 + 0x14) = 1;
        return;
      }
    }
    else if (((pMVar2 != (MVBody *)0x0) && (*(int *)(in_stack_3 + 0xfc) != 0)) &&
            (iVar4 = *(int *)(*(int *)(in_stack_3 + 0xfc) + 0x1c), iVar4 != 0)) {
      *(undefined1 *)(iVar4 + 0x14) = 0;
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
      if ((((Object__Class *)pMVar1->klass)->_1).typeHierarchyDepth <
          (TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth) {
        return 0;
      }
      if ((((Object__Class *)pMVar1->klass)->_1).typeHierarchy
          [(TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode) {
        return 0;
      }
      pMVar2 = TypeInfo__MVAvatarLocal__DeadMode;
      if (((TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth <=
           (((Object__Class *)pMVar1->klass)->_1).typeHierarchyDepth) &&
         ((((Object__Class *)pMVar1->klass)->_1).typeHierarchy
          [(TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth - 1] ==
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
  this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__WorldObjectSkillDataManager);
  pAVar1 = (AvatarInteractable *)0x0;
  if (this_01 == (TweenRunner_1_FloatTween_ *)0x0) {
code_?:
    uVar2 = func_?();
code_?:
    func_?(uVar2);
  }
  else {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
    (this->fields)._.skillDataManager = (WorldObjectSkillDataManager *)this_01;
    func_?(&(this->fields)._.skillDataManager,this_01);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields)._.skillDataManager;
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
    pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
              AttributePrototypeSettingsManager_GetRoot
                        (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
    Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
              ((Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
                *)pAVar1,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,(MethodInfo *)0x0);
    pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTools::KogamaSettingTools_CreateFromValues
                        (values,pKVar3,
                         (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                          *)pAVar1,(MethodInfo *)0x0);
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    WorldObjectSkillDataManager::WorldObjectSkillDataManager_Initialize
              ((WorldObjectSkillDataManager *)unaff_EBX,pKVar3,(MethodInfo *)0x0);
    MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._._._.gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pAVar5 = (AvatarMotor *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar4,
                         AvatarMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarMotor>__
                        );
    (this->fields).avatarMotor = pAVar5;
    func_?(&(this->fields).avatarMotor,pAVar5);
    pGVar4 = (this->fields)._._._.gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pMVar6 = (MVTriggerHandler *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar4,
                         MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                        );
    (this->fields).triggerHandler = pMVar6;
    func_?(&(this->fields).triggerHandler,pMVar6);
    pGVar4 = (this->fields)._._._.gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    interactableLocal =
         (AvatarInteractable *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                   (pGVar4,
                    AvatarInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarInteractable>__
                   );
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
    if (interactableLocal == (AvatarInteractable *)0x0) goto code_?;
    (*(interactableLocal->klass->vtable).Init.methodPtr)
              (interactableLocal,(this->fields)._.Modifiers,(this->fields)._.Health,
               (this->fields)._.MaxHealth,(this->fields)._.shield,(this->fields)._.skillDataManager,
               (interactableLocal->klass->vtable).Init.method);
    (this->fields).interactableLocal = interactableLocal;
    func_?(&(this->fields).interactableLocal,interactableLocal);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields).interactableLocal;
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    pDVar7 = (Delegate *)(unaff_EBX->_0).typeMetadataHandle;
    this_02 = (Action_3_Single_Object_ByteEnum_ *)
              func_?(
                             TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                             );
    pAVar1 = (AvatarInteractable *)0x0;
    if (this_02 == (Action_3_Single_Object_ByteEnum_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
              (this_02,(Object *)this,
               MethodInfo__MVAvatarLocal__RelayDamageEvent_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,(MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)this_02,(MethodInfo *)0x0);
    in_stack_8 =
         (Action_1_UnityEngine_Vector3___Class *)
         TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
    if (pAVar1 == (AvatarInteractable *)0x0) {
      (unaff_EBX->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)0x0;
      iVar9 = 0;
    }
    else {
      pDVar10 = (DelegateData *)
                func_?(pAVar1,
                                TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                               );
      if (pDVar10 == (DelegateData *)0x0) goto code_?;
      (unaff_EBX->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)pDVar10;
      in_stack_8 =
           (Action_1_UnityEngine_Vector3___Class *)
           TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
      iVar9 = func_?(pAVar1,
                               TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                              );
      if (iVar9 == 0) goto code_?;
    }
    func_?(&(unaff_EBX->_0).typeMetadataHandle,iVar9);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields).interactableLocal;
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    pDVar7 = (Delegate *)(unaff_EBX->_0).interopData;
    this_03 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Vector3>);
    pAVar1 = (AvatarInteractable *)0x0;
    if (this_03 == (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0)
    goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
    SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
              (this_03,(Object *)this,
               MethodInfo__MVAvatarLocal__RelayNewSafePosition_UnityEngine__Vector3_,
               (MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)this_03,(MethodInfo *)0x0);
    in_stack_8 = TypeInfo__System__Action<UnityEngine::Vector3>;
    if (pAVar1 == (AvatarInteractable *)0x0) {
      (unaff_EBX->_0).interopData = (Il2CppInteropData *)0x0;
      iVar9 = 0;
    }
    else {
      pIVar11 = (Il2CppInteropData *)
                func_?(pAVar1,TypeInfo__System__Action<UnityEngine::Vector3>);
      if (pIVar11 == (Il2CppInteropData *)0x0) goto code_?;
      (unaff_EBX->_0).interopData = pIVar11;
      in_stack_8 = TypeInfo__System__Action<UnityEngine::Vector3>;
      iVar9 = func_?(pAVar1,TypeInfo__System__Action<UnityEngine::Vector3>);
      if (iVar9 == 0) goto code_?;
    }
    func_?(&(unaff_EBX->_0).interopData,iVar9);
    pGVar4 = (this->fields)._._._.gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pAVar12 = (AvatarEquipable *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar4,
                         AvatarEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarEquipable>__
                        );
    (this->fields).avatarEquipable = pAVar12;
    func_?(&(this->fields).avatarEquipable,pAVar12);
    pAVar1 = (AvatarInteractable *)(this->fields).avatarEquipable;
    pAVar13 = (this->fields).interactableLocal;
    pMVar14 = (this->fields)._.CurrentItem;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields)._.skillDataManager;
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_UnableToCollectModifierPickups);
      func_?(&StringLiteral_UnableToEquipWeapons);
      cRam_? = '\x01';
    }
    (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method = pAVar13;
    func_?(&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method,pAVar13);
    (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).delegate_trampoline = pMVar14;
    func_?(&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).delegate_trampoline,
                    pMVar14);
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    bVar15 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      ((WorldObjectSkillDataManager *)unaff_EBX,
                       StringLiteral_UnableToCollectModifierPickups,(MethodInfo *)0x0);
    *(bool *)&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).extra_arg = bVar15 == 0;
    bVar15 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      ((WorldObjectSkillDataManager *)unaff_EBX,StringLiteral_UnableToEquipWeapons,
                       (MethodInfo *)0x0);
    *(bool *)((int)&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).extra_arg + 1) =
         bVar15 == 0;
    pAVar5 = (this->fields).avatarMotor;
    if (pAVar5 == (AvatarMotor *)0x0) goto code_?;
    AvatarMotor::AvatarMotor_Init
              (pAVar5,interactableLocal,(this->fields)._.characterControllerCenterOffset,
               (MVWorldObjectClient *)this,(this->fields)._.skillDataManager,(MethodInfo *)0x0);
    pAVar16 = (this->fields)._.avatarPickupOwner;
    (this->fields).pickupOwner = pAVar16;
    func_?(&(this->fields).pickupOwner,pAVar16);
    MVar17 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    pAVar1 = interactableLocal;
    if (MVar17 != MVGameMode__Enum_CharacterEditor) {
      pGVar4 = (this->fields)._._._.gameObject;
      if (pGVar4 != (GameObject *)0x0) {
        pPVar18 = (PickupGUI *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar4,
                             PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                            );
        (this->fields).pickupGUI = pPVar18;
        func_?(&(this->fields).pickupGUI,pPVar18);
        pPVar18 = (this->fields).pickupGUI;
        if (pPVar18 != (PickupGUI *)0x0) {
          PickupGUI::PickupGUI_Initialize
                    (pPVar18,(this->fields)._._._._.id,(MVPickupOwner *)(this->fields).pickupOwner,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pAVar1 = (AvatarInteractable *)(this->fields).pickupOwner;
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    pAVar19 = (pAVar1->fields).OnNewSafePosition;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              ((UnityAction_1_System_Object_ *)unaff_EBX,(Object *)this,
               MethodInfo__MVAvatarLocal__OnEquipItem_PickupItem_,(MethodInfo *)0x0);
    pAVar20 = (Action_1_UnityEngine_Vector3_ *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar19,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__MVPickupOwner__OnEquipItemDelegate,pAVar20);
    pAVar19 = (Action_1_UnityEngine_Vector3_ *)0x0;
    if (pAVar20 != (Action_1_UnityEngine_Vector3_ *)0x0) {
      if ((MVPickupOwner_OnEquipItemDelegate__Class *)pAVar20->klass ==
          TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pAVar19 = pAVar20;
      }
      if (pAVar19 != (Action_1_UnityEngine_Vector3_ *)0x0) {
        (pAVar1->fields).OnNewSafePosition = pAVar19;
        uVar2 = CONCAT44(TypeInfo__MVPickupOwner__OnEquipItemDelegate,pAVar20);
        pAVar19 = (Action_1_UnityEngine_Vector3_ *)0x0;
        if ((MVPickupOwner_OnEquipItemDelegate__Class *)pAVar20->klass ==
            TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
          pAVar19 = pAVar20;
        }
        if (pAVar19 != (Action_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      }
      goto code_?;
    }
    (pAVar1->fields).OnNewSafePosition = (Action_1_UnityEngine_Vector3_ *)0x0;
code_?:
    func_?(&(pAVar1->fields).OnNewSafePosition,pAVar19);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields).pickupOwner;
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    pDVar7 = (Delegate *)(unaff_EBX->_0).events;
    this_04 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
    pAVar1 = (AvatarInteractable *)0x0;
    if (this_04 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_04,(Object *)this,MethodInfo__MVAvatarLocal__OnHolsteredChanged_bool_,
               (MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pAVar1 == (AvatarInteractable *)0x0) {
      (unaff_EBX->_0).events = (EventInfo *)0x0;
      iVar9 = 0;
    }
    else {
      in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)TypeInfo__System__Action<bool>;
      pEVar21 = (EventInfo *)func_?(pAVar1,TypeInfo__System__Action<bool>);
      if (pEVar21 == (EventInfo *)0x0) goto code_?;
      (unaff_EBX->_0).events = pEVar21;
      in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)TypeInfo__System__Action<bool>;
      iVar9 = func_?(pAVar1,TypeInfo__System__Action<bool>);
      if (iVar9 == 0) goto code_?;
    }
    func_?(&(unaff_EBX->_0).events,iVar9);
    in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)&UNK_?;
    pAVar1 = (AvatarInteractable *)func_?(TypeInfo__MVAvatarLocal__AvatarLocalModes);
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
              ((MVAvatarLocal_AvatarLocalModes *)pAVar1,this,(MethodInfo *)0x0);
    (this->fields).avatarLocalModes = (MVAvatarLocal_AvatarLocalModes *)pAVar1;
    func_?(&(this->fields).avatarLocalModes,pAVar1);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__MVAvatarLocal___InitializeHealth_b__125_0_System__Object_);
      func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      cRam_? = '\x01';
    }
    pMVar22 = (this->fields)._.Health;
    if (pMVar22 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar23 = (float10)(*(pMVar22->klass->vtable).get_Value.methodPtr)
                                (pMVar22,(pMVar22->klass->vtable).get_Value.method);
    pAVar1 = (AvatarInteractable *)(this->fields)._.Health;
    (this->fields).previousHealth = (float)fVar23;
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    pDVar7 = (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              ((UnityAction_1_System_Object_ *)unaff_EBX,(Object *)this,
               MethodInfo__MVAvatarLocal___InitializeHealth_b__125_0_System__Object_,
               (MethodInfo *)0x0);
    pDVar24 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pDVar24);
    pDVar7 = (Delegate *)0x0;
    if (pDVar24 != (Delegate *)0x0) {
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar24->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar7 = pDVar24;
      }
      if (pDVar7 != (Delegate *)0x0) {
        (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code = pDVar7;
        uVar2 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pDVar24);
        pDVar7 = (Delegate *)0x0;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar24->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pDVar7 = pDVar24;
        }
        if (pDVar7 != (Delegate *)0x0) goto code_?;
      }
      goto code_?;
    }
    (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code = (void *)0x0;
code_?:
    func_?(&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code,pDVar7);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__MVAvatarLocal___InitializeShield_b__122_0_System__Object_);
      func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      cRam_? = '\x01';
    }
    pMVar25 = (this->fields)._.shield;
    if (pMVar25 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    fVar23 = (float10)(*(pMVar25->klass->vtable).get_Value.methodPtr)
                                (pMVar25,(pMVar25->klass->vtable).get_Value.method);
    pAVar1 = (AvatarInteractable *)(this->fields)._.shield;
    (this->fields).previousShield = (float)fVar23;
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    pDVar7 = (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              ((UnityAction_1_System_Object_ *)unaff_EBX,(Object *)this,
               MethodInfo__MVAvatarLocal___InitializeShield_b__122_0_System__Object_,
               (MethodInfo *)0x0);
    pDVar24 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pDVar24);
    pDVar7 = (Delegate *)0x0;
    if (pDVar24 != (Delegate *)0x0) {
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar24->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar7 = pDVar24;
      }
      if (pDVar7 != (Delegate *)0x0) {
        (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code = pDVar7;
        uVar2 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pDVar24);
        pDVar7 = (Delegate *)0x0;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar24->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pDVar7 = pDVar24;
        }
        if (pDVar7 != (Delegate *)0x0) goto code_?;
      }
      goto code_?;
    }
    (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code = (void *)0x0;
code_?:
    func_?(&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).method_code,pDVar7);
    MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
    MVar17 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar17 != MVGameMode__Enum_CharacterEditor) {
      pGVar4 = (this->fields)._._._.gameObject;
      if (pGVar4 != (GameObject *)0x0) {
        pUVar26 = (UseInteractorHandler *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar4,
                             UseInteractorHandler_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorHandler>__
                            );
        (this->fields).useInteractorHandler = pUVar26;
        func_?(&(this->fields).useInteractorHandler,pUVar26);
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
    pAVar5 = (this->fields).avatarMotor;
    if (pAVar5 == (AvatarMotor *)0x0) goto code_?;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (pAVar5->fields)._GetSizeState_k__BackingField;
    pAVar12 = (this->fields).avatarEquipable;
    pAVar1 = (AvatarInteractable *)func_?(TypeInfo__System__EventHandler);
    if ((pAVar1 == (AvatarInteractable *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pAVar1,(Object *)pAVar12,
                   MethodInfo__AvatarEquipable__EquipSlapGun_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0),
       unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0))
    goto code_?;
    SizeState::SizeState_add_EquipSlapGunEvent
              ((SizeState *)unaff_EBX,(EventHandler *)pAVar1,(MethodInfo *)0x0);
    pAVar5 = (this->fields).avatarMotor;
    if (pAVar5 == (AvatarMotor *)0x0) goto code_?;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (pAVar5->fields)._GetSizeState_k__BackingField;
    pAVar1 = (AvatarInteractable *)func_?(TypeInfo__System__EventHandler<ScaleArgs>);
    if ((pAVar1 == (AvatarInteractable *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pAVar1,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnCameraScale_System__Object__ScaleArgs_,
                   (MethodInfo *)0x0),
       unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0))
    goto code_?;
    SizeState::SizeState_add_CameraScaleEvent
              ((SizeState *)unaff_EBX,(EventHandler_1_ScaleArgs_ *)pAVar1,(MethodInfo *)0x0);
    pAVar5 = (this->fields).avatarMotor;
    if (pAVar5 == (AvatarMotor *)0x0) goto code_?;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (pAVar5->fields)._GetSizeState_k__BackingField;
    pAVar1 = (AvatarInteractable *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if ((pAVar1 == (AvatarInteractable *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pAVar1,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0),
       unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0))
    goto code_?;
    SizeState::SizeState_add_UnEquipSlapGunEvent
              ((SizeState *)unaff_EBX,(EventHandler_1_EventArgs_ *)pAVar1,(MethodInfo *)0x0);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (interactableLocal->fields)._.modifierPackages;
    pUVar27 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if ((pUVar27 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar27,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_,
                   (MethodInfo *)0x0),
       unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      cRam_? = '\x01';
    }
    pAVar1 = ((Delegate__Fields *)&(unaff_EBX->_0).name)->method_ptr;
    pDVar28 = (Delegate__Fields *)&(unaff_EBX->_0).name;
    do {
      pAVar13 = pAVar1;
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar1,(Delegate *)pUVar27,(MethodInfo *)0x0);
      in_stack_8 =
           (Action_1_UnityEngine_Vector3___Class *)TypeInfo__System__EventHandler<System::EventArgs>
      ;
      if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = func_?(unaff_EBX,TypeInfo__System__EventHandler<System::EventArgs>,
                                 TypeInfo__System__EventHandler<System::EventArgs>);
        if (iVar9 == 0) goto code_?;
      }
      pAVar1 = (AvatarInteractable *)func_?(pDVar28,iVar9,pAVar1);
    } while (pAVar1 != pAVar13);
    pAVar1 = (AvatarInteractable *)(interactableLocal->fields)._.modifierPackages;
    pAVar13 = pAVar1;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if ((unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) ||
       (pUVar29 = unaff_EBX,
       UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
       ::UnityAction_2_System_Object_System_Object___ctor
                 ((UnityAction_2_System_Object_System_Object_ *)unaff_EBX,(Object *)this,
                  MethodInfo__MVAvatarLocal__OnDisableVehicles_System__Object__System__EventArgs_,
                  (MethodInfo *)0x0), pAVar1 == (AvatarInteractable *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      cRam_? = '\x01';
    }
    pAVar1 = (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).invoke_impl;
    ppvVar30 = &(((MulticastDelegate__Fields *)&(pAVar13->fields)._)->_).invoke_impl;
    do {
      pAVar13 = pAVar1;
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar1,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
      in_stack_8 =
           (Action_1_UnityEngine_Vector3___Class *)TypeInfo__System__EventHandler<System::EventArgs>
      ;
      if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = func_?(unaff_EBX,TypeInfo__System__EventHandler<System::EventArgs>,
                                 TypeInfo__System__EventHandler<System::EventArgs>);
        if (iVar9 == 0) goto code_?;
      }
      unaff_EBX = pUVar29;
      pAVar1 = (AvatarInteractable *)func_?(ppvVar30,iVar9,pAVar1);
      pUVar29 = unaff_EBX;
    } while (pAVar1 != pAVar13);
    pGVar4 = (this->fields)._._._.gameObject;
    if ((pGVar4 == (GameObject *)0x0) ||
       (pAVar1 = (AvatarInteractable *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar4,
                             AvatarShieldDecay_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarShieldDecay>__
                            ), pAVar1 == (AvatarInteractable *)0x0)) goto code_?;
    pMVar25 = (this->fields)._.shield;
    (((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).m_target = (Object *)pMVar25;
    func_?(&(((MulticastDelegate__Fields *)&(pAVar1->fields)._)->_).m_target,pMVar25);
    pAVar31 = (interactableLocal->fields).OnShieldReplenished;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?(TypeInfo__System__Action);
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)unaff_EBX,(Object *)pAVar1,
               MethodInfo__AvatarShieldDecay__ResetDecayTimer__,(MethodInfo *)0x0);
    pAVar32 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar31,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar32);
    pAVar31 = (Action *)0x0;
    if (pAVar32 != (Action *)0x0) {
      if (pAVar32->klass == TypeInfo__System__Action) {
        pAVar31 = pAVar32;
      }
      if (pAVar31 != (Action *)0x0) {
        (interactableLocal->fields).OnShieldReplenished = pAVar31;
        uVar2 = CONCAT44(TypeInfo__System__Action,pAVar32);
        pAVar31 = (Action *)0x0;
        if (pAVar32->klass == TypeInfo__System__Action) {
          pAVar31 = pAVar32;
        }
        pAVar1 = interactableLocal;
        if (pAVar31 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    (interactableLocal->fields).OnShieldReplenished = (Action *)0x0;
code_?:
    func_?(&(interactableLocal->fields).OnShieldReplenished,pAVar31);
    in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)&UNK_?;
    pAVar1 = (AvatarInteractable *)func_?(TypeInfo__AvatarLimbManagerLocal);
    if (pAVar1 == (AvatarInteractable *)0x0) goto code_?;
    ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single___ctor
              ((ThemeAttribute_1_System_Single_ *)pAVar1,(MethodInfo *)0x0);
    (this->fields)._.limbManager = (AvatarLimbManager *)pAVar1;
    func_?(&(this->fields)._.limbManager,pAVar1);
    pAVar33 = (this->fields)._.avatar;
    if ((pAVar33 == (Avatar *)0x0) ||
       (pAVar34 = (this->fields)._.limbManager, pAVar34 == (AvatarLimbManager *)0x0))
    goto code_?;
    (*(pAVar34->klass->vtable).Initialize.methodPtr)
              (pAVar34,this,(this->fields)._.body,(pAVar33->fields).enabledChangeHandler,
               (this->fields)._.LimbRotationRuntimeData,(pAVar34->klass->vtable).Initialize.method);
    pAVar35 = (this->fields).avatarRespawnHandler;
    if (pAVar35 == (AvatarRespawnHandler *)0x0) goto code_?;
    (pAVar35->fields).mvAvatar = this;
    func_?(&pAVar35->fields,this);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields)._._._.PositionChanged;
    pUVar27 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    pAVar1 = (AvatarInteractable *)0x0;
    if (pUVar27 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar27,(Object *)this,
               MethodInfo__MVAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)unaff_EBX,(Delegate *)pUVar27,(MethodInfo *)0x0);
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pAVar1 != (AvatarInteractable *)0x0) {
      pUVar36 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                func_?(pAVar1,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      if (pUVar36 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (this->fields)._._._.PositionChanged = pUVar36;
        unaff_EBX = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        iVar9 = func_?(pAVar1,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (iVar9 != 0) goto code_?;
      }
      goto code_?;
    }
    (this->fields)._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    iVar9 = 0;
code_?:
    func_?(&(this->fields)._._._.PositionChanged,iVar9);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields)._._._.RotationChanged;
    in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)&UNK_?;
    pUVar27 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                             );
    pAVar1 = (AvatarInteractable *)0x0;
    if (pUVar27 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar27,(Object *)this,
               MethodInfo__MVAvatarLocal__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
               ,(MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)unaff_EBX,(Delegate *)pUVar27,(MethodInfo *)0x0);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
    ;
    if (pAVar1 != (AvatarInteractable *)0x0) {
      pUVar37 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
                func_?(pAVar1,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                               );
      if (pUVar37 != (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
        (this->fields)._._._.RotationChanged = pUVar37;
        unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
        ;
        iVar9 = func_?(pAVar1,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                );
        if (iVar9 != 0) goto code_?;
      }
      goto code_?;
    }
    (this->fields)._._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
    iVar9 = 0;
code_?:
    func_?(&(this->fields)._._._.RotationChanged,iVar9);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields)._._._.ScaleChanged;
    in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)&UNK_?;
    pUVar27 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
    pAVar1 = (AvatarInteractable *)0x0;
    if (pUVar27 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar27,(Object *)this,
               MethodInfo__MVAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    pAVar1 = (AvatarInteractable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)unaff_EBX,(Delegate *)pUVar27,(MethodInfo *)0x0);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
    ;
    if (pAVar1 == (AvatarInteractable *)0x0) {
      (this->fields)._._._.ScaleChanged =
           (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
      iVar9 = 0;
code_?:
      func_?(&(this->fields)._._._.ScaleChanged,iVar9);
      pGVar4 = (this->fields)._._._.gameObject;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pMVar38 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar38 == (MVNetworkGame *)0x0) ||
          (this_00 = (pMVar38->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (pAVar1 = (AvatarInteractable *)
                    MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
         pAVar1 == (AvatarInteractable *)0x0)) goto code_?;
      MVPlayer::MVPlayer_NotifyAvatarCreated
                ((MVPlayer *)pAVar1,(this->fields)._._._._.id,(MethodInfo *)0x0);
      pDVar7 = (Delegate *)(pAVar1->fields)._.poisonResist;
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
      if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)unaff_EBX,(Object *)this,
                 MethodInfo__MVAvatarLocal__OnObserve__,(MethodInfo *)0x0);
      pDVar24 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar7,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pDVar24);
      pDVar7 = (Delegate *)0x0;
      if (pDVar24 == (Delegate *)0x0) {
        (pAVar1->fields)._.poisonResist = 0.0;
code_?:
        func_?(&(pAVar1->fields)._.poisonResist,pDVar7);
        pDVar7 = (Delegate *)(pAVar1->fields)._.shield;
        in_stack_8 = (Action_1_UnityEngine_Vector3___Class *)&UNK_?;
        unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                    func_?();
        if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
        goto code_?;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)unaff_EBX,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnResume__,(MethodInfo *)0x0);
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar7,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
        uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pDVar7);
        if (pDVar7 == (Delegate *)0x0) {
          (pAVar1->fields)._.shield = (MVRuntimeDataVariableClampedFloat *)0x0;
          func_?(&(pAVar1->fields)._.shield,0);
          return;
        }
        pDVar24 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar24 = pDVar7;
        }
        if (pDVar24 != (Delegate *)0x0) {
          (pAVar1->fields)._.shield = (MVRuntimeDataVariableClampedFloat *)pDVar24;
          uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pDVar7);
          pDVar24 = (Delegate *)0x0;
          if ((UnityAction__Class *)pDVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pDVar24 = pDVar7;
          }
          if (pDVar24 != (Delegate *)0x0) {
            func_?(&(pAVar1->fields)._.shield,pDVar24);
            return;
          }
        }
      }
      else {
        if ((UnityAction__Class *)pDVar24->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar7 = pDVar24;
        }
        if (pDVar7 != (Delegate *)0x0) {
          (pAVar1->fields)._.poisonResist = (float)pDVar7;
          uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pDVar24);
          pDVar7 = (Delegate *)0x0;
          if ((UnityAction__Class *)pDVar24->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pDVar7 = pDVar24;
          }
          if (pDVar7 != (Delegate *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
    pUVar39 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
              func_?(pAVar1,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
    if (pUVar39 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
      (this->fields)._._._.ScaleChanged = pUVar39;
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
      ;
      iVar9 = func_?(pAVar1,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                              );
      if (iVar9 != 0) goto code_?;
    }
  }
code_?:
  func_?(pAVar1,unaff_EBX);
code_?:
  func_?(unaff_EBX,in_stack_8);
code_?:
  func_?(pAVar1,in_stack_8);
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVAvatarLocal___InitializeHealth_b__125_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.Health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.Health;
    (this->fields).previousHealth = (float)fVar2;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar3 = (pMVar1->fields)._.OnChange;
      this_00 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      if (this_00 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVAvatarLocal___InitializeHealth_b__125_0_System__Object_,
                   (MethodInfo *)0x0);
        pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
        uVar4 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
        if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar1->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          ppMStack5 = &(pMVar1->fields)._.OnChange;
          pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          func_?();
          return;
        }
        pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar7 = pMVar3;
        }
        if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar1->fields)._.OnChange = pMVar7;
          uVar4 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
          pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMStack6 = pMVar3;
          }
          if (pMStack6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            ppMStack5 = &(pMVar1->fields)._.OnChange;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _ppMStack0000000c = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeShield
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVAvatarLocal___InitializeShield_b__122_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.shield;
    (this->fields).previousShield = (float)fVar2;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pMVar3 = (pMVar1->fields)._._.OnChange;
      this_00 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      if (this_00 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVAvatarLocal___InitializeShield_b__122_0_System__Object_,
                   (MethodInfo *)0x0);
        pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
        uVar4 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
        if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          ppMStack5 = &(pMVar1->fields)._._.OnChange;
          pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          func_?();
          return;
        }
        pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar7 = pMVar3;
        }
        if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar1->fields)._._.OnChange = pMVar7;
          uVar4 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
          pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMStack6 = pMVar3;
          }
          if (pMStack6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            ppMStack5 = &(pMVar1->fields)._._.OnChange;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _ppMStack0000000c = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
      ((pOVar1->klass->_1).typeHierarchyDepth < (TypeInfo__AvatarEquipable->_1).typeHierarchyDepth))
     || ((pOVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarEquipable->_1).typeHierarchyDepth - 1]
         != (Il2CppClass *)TypeInfo__AvatarEquipable)) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?();
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
  if ((pMRam00000018 == (MVRuntimeDataVariable *)0x0) ||
     (unaff_retaddr =
           (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMRam00000018,(MethodInfo *)0x0),
     unaff_retaddr == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    if (((unaff_retaddr->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_retaddr->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (unaff_retaddr,(Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    pMVar4 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (bVar3 == 0) {
      return 0;
    }
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_retaddr,
                        (Object *)StringLiteral_type,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    unaff_retaddr = in_stack_5;
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      piVar6 = (int *)func_?();
      return (MethodInfo *)*piVar6 == pMVar4;
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
            (*(pMVar9->klass->vtable).get_Value.methodPtr)();
            pMVar9 = (pAVar4->fields)._.health;
            if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              (*(pMVar9->klass->vtable).set_Value.methodPtr)();
              if ((pAVar4->fields).OnDamageTaken !=
                  (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                pAVar10 = (pAVar4->fields).OnDamageTaken;
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
      this_00 = (in_stack_3->fields).spawnRoleDataReceiver;
      if (this_00 != (SpawnRoleDataReceiver *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataReceiver
        ::SpawnRoleDataReceiver_NotifySuicide(this_00,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                   );
    func_?(&StringLiteral_vehicleWO_is_null_or_type_is_not);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarMotor;
  if (pAVar1 != (AvatarMotor *)0x0) {
    puVar2 = (undefined8 *)
             (*(pAVar1->klass->vtable).get_Velocity.methodPtr)
                       (&uStack_3,pAVar1,(pAVar1->klass->vtable).get_Velocity.method);
    pUVar4 = (this->fields).useInteractorHandler;
    fVar5 = *(float *)(puVar2 + 1);
    fStack_6 = (float)*puVar2;
    fStack_7 = (float)((ulonglong)*puVar2 >> 0x20);
    unaff_EDI = (MVVehicleBase *)0x0;
    if (pUVar4 != (UseInteractorHandler *)0x0) {
      this_00 = (this->fields).vehicleRigidBody;
      unaff_EDI = (MVVehicleBase *)(pUVar4->fields).triggingColliders;
      if ((this_00 != (MVRigidBody *)0x0) &&
         (collider = (Collider *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this_00,
                                UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                               ), unaff_EDI != (MVVehicleBase *)0x0)) {
        Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                  ((ColliderCollection *)unaff_EDI,collider,(MethodInfo *)0x0);
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
            this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_07 == (MVWorldObjectClientManager *)0x0) goto code_?;
            unaff_EDI = (MVVehicleBase *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_07,IStack_8.m_value,(MethodInfo *)0x0);
            if (((unaff_EDI == (MVVehicleBase *)0x0) ||
                ((unaff_EDI->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth)) ||
               ((MVVehicleBase__Class *)
                (unaff_EDI->klass->_1).typeHierarchy
                [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVVehicleBase))
            {
              str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
              unaff_EDI = (MVVehicleBase *)
                          mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_vehicleWO_is_null_or_type_is_not,str1,
                                     (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)unaff_EDI,(MethodInfo *)0x0);
            }
            else {
              pMVar11 = TypeInfo__MVVehicleBase;
              if (((unaff_EDI->klass->_1).typeHierarchyDepth <
                   (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth) ||
                 ((MVVehicleBase__Class *)
                  (unaff_EDI->klass->_1).typeHierarchy
                  [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVVehicleBase)
                 ) goto code_?;
              MVVehicleBase::MVVehicleBase_LeaveLocal(unaff_EDI,(MethodInfo *)0x0);
              this_02 = (unaff_EDI->fields)._._._.gameObject;
              if (this_02 == (GameObject *)0x0) goto code_?;
              unaff_EDI = (MVVehicleBase *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (this_02,
                                     MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                    );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                if (unaff_EDI == (MVVehicleBase *)0x0) goto code_?;
                puVar2 = (undefined8 *)func_?(&uStack_3,6,unaff_EDI);
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
            unaff_EDI = (MVVehicleBase *)(pAVar16->fields).avatarCameraController;
            if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MainCameraManager);
            }
            if (unaff_EDI != (MVVehicleBase *)0x0) {
              func_?(2,TypeInfo__IAvatarCameraController,unaff_EDI,
                              TypeInfo__MainCameraManager->static_fields->DefaultCameraType);
              pAVar1 = (this->fields).avatarMotor;
              if (pAVar1 != (AvatarMotor *)0x0) {
                (*(pAVar1->klass->vtable).Reset.methodPtr)
                          (pAVar1,(pAVar1->klass->vtable).Reset.method);
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
                      (*(this->klass->vtable).OnLeaveVehicle.methodPtr)
                                (this,(this->klass->vtable).OnLeaveVehicle.method);
                      pSVar17 = (this->fields).spawnRoleDataReceiver;
                      if ((pSVar17 != (SpawnRoleDataReceiver *)0x0) &&
                         (this_04 = (pSVar17->fields).isInVehicle,
                         this_04 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
                        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Boolean]::
                        SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                                  (this_04,0,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                                  );
                        this_05 = (this->fields).pickupGUI;
                        if (this_05 != (PickupGUI *)0x0) {
                          PickupGUI::PickupGUI_AvatarLeftVehicle(this_05,(MethodInfo *)0x0);
                          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game
                                             ((MethodInfo *)0x0);
                          if (pMVar9 != (MVNetworkGame *)0x0) {
                            this_06 = (pMVar9->fields).transformNetworkManager;
                            woID = (this->fields)._._._._.id;
                            unaff_EDI = (MVVehicleBase *)
                                        func_?(TypeInfo__MVNetworkReporter);
                            if ((unaff_EDI != (MVVehicleBase *)0x0) &&
                               (MVNetworkReporter::MVNetworkReporter__ctor
                                          ((MVNetworkReporter *)unaff_EDI,
                                           (MVWorldObjectClient *)this,(MethodInfo *)0x0),
                               this_06 != (TransformNetworkManager *)0x0)) {
                              TransformNetworkManager::TransformNetworkManager_AddReporter
                                        (this_06,woID,(MVNetworkReporter *)unaff_EDI,
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
code_?:
  func_?();
  pMVar11 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pMVar11);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
        uVar4 = 0;
        uVar5 = (pIVar2->klass->_1).interface_offsets_count;
        if (uVar5 != 0) {
          do {
            if (pIVar2->klass->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__ICameraSettings) {
              pVVar6 = &(pIVar2->klass->vtable).ScaleCameraValues +
                       pIVar2->klass->interfaceOffsets[uVar4].offset;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        pVVar6 = (VirtualInvokeData *)func_?(pIVar2,TypeInfo__ICameraSettings,2,fVar3);
code_?:
        (*pVVar6->methodPtr)(pIVar2,fVar3,pVVar6->method);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnCheckpointReachedResetRevive() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCheckpointReachedResetRevive
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = (this->fields).spawnRoleDataReceiver;
  if (((pSVar2 != (SpawnRoleDataReceiver *)0x0) &&
      (this_00 = (pSVar2->fields).reviveState,
      this_00 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) &&
     (pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleReceiverVariable`1[System::Object]::
               SpawnRoleReceiverVariable_1_System_Object__get_Value
                         ((SpawnRoleReceiverVariable_1_System_Object_ *)this_00,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                         ), pOVar3 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar4 = *(int *)(in_stack_5 + 8);
    *(undefined4 *)(in_stack_5 + 0x1c) = 0;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      return;
    }
  }
  uVar6 = func_?(&stack0xfffffffc);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnCurrentPickupChange(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCurrentPickupChange
               (MVAvatarLocal *this,Object *newPickupDataData,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                   );
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
    func_?();
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
        pSVar5 = (this->fields).spawnRoleDataReceiver;
        if ((pSVar5 != (SpawnRoleDataReceiver *)0x0) &&
           (this_04 = (pSVar5->fields).isInVehicle,
           this_04 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Boolean]::
          SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                    (this_04,1,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                    );
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


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnEquipItem
               (MVAvatarLocal *this,PickupItem *equippeditem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    pSVar2 = (pSVar1->fields).isInGunMode;
    pAVar3 = (this->fields).pickupOwner;
    if (pAVar3 != (AvatarPickupOwner *)0x0) {
      bVar4 = MVPickupOwner::MVPickupOwner_get_InGunMode((MVPickupOwner *)pAVar3,(MethodInfo *)0x0);
      if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Boolean]::
        SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                  (pSVar2,bVar4,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                  );
        pSVar1 = (this->fields).spawnRoleDataReceiver;
        if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
          pAVar3 = (this->fields).pickupOwner;
          pSVar2 = (pSVar1->fields).pickupItemIsInHand;
          if (pAVar3 != (AvatarPickupOwner *)0x0) {
            bVar4 = MVPickupOwner::MVPickupOwner_get_PickupItemIsInHand
                              ((MVPickupOwner *)pAVar3,(MethodInfo *)0x0);
            if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleReceiverVariable`1[System::Boolean]::
              SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                        (pSVar2,bVar4,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                        );
              return;
            }
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
          (*(pMVar3->klass->vtable).get_Value.methodPtr)();
          pMVar4 = (this->fields)._.Health;
          if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
            pMVar5 = pMVar4->klass;
            pIStack6 = (Int32__Class *)(pMVar5->vtable).get_Value.method;
            (*(pMVar5->vtable).get_Value.methodPtr)();
            MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
            pMVar3 = (this->fields)._.MaxHealth;
            pMVar4 = (this->fields)._.Health;
            if (pMVar3 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
              pMVar7 = pMVar3->klass;
              pIStack6 = (Int32__Class *)(pMVar7->vtable).get_Value.method;
              (*(pMVar7->vtable).get_Value.methodPtr)();
              if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                pMVar5 = pMVar4->klass;
                pIStack6 = (Int32__Class *)(pMVar5->vtable).set_Value.method;
                (*(pMVar5->vtable).set_Value.methodPtr)();
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
            pIStack6 = (Int32__Class *)(pMVar7->vtable).get_Value.method;
            (*(pMVar7->vtable).get_Value.methodPtr)();
            if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              pMVar5 = pMVar4->klass;
              pIStack6 = (Int32__Class *)(pMVar5->vtable).set_Value.method;
              (*(pMVar5->vtable).set_Value.methodPtr)();
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
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                   );
    cRam_? = '\x01';
  }
  MVAvatarLocal_HandleBlinkerVisibility(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    this_00 = (pSVar1->fields).pickupItemIsInHand;
    this_01 = (this->fields).pickupOwner;
    if (this_01 != (AvatarPickupOwner *)0x0) {
      value = MVPickupOwner::MVPickupOwner_get_PickupItemIsInHand
                        ((MVPickupOwner *)this_01,(MethodInfo *)0x0);
      if (this_00 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Boolean]::
        SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                  (this_00,value,
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
     (this_00 = (RewardedInterstitialAd *)(pMVar1->fields).playerContainer,
     this_00 != (RewardedInterstitialAd *)0x0)) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
    RewardedInterstitialAd__RegisterAdEvents_m__2(this_00,(Object *)0x0,(EventArgs *)this,method);
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
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
      (positionChangedEventArgs != (PositionChangedEventArgs *)0x0)) &&
     (this_00 = (pSVar1->fields).position,
     this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (this_00,(positionChangedEventArgs->fields).NewPos,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRespawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnRespawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).interactableLocal;
  if (pAVar1 != (AvatarInteractable *)0x0) {
    (*(pAVar1->klass->vtable).AddModifier.methodPtr)
              (pAVar1,0x11,0xffffffff,0,(pAVar1->klass->vtable).AddModifier.method);
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
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
      (rotationChangedEventArgs != (RotationChangedEventArgs *)0x0)) &&
     (this_00 = (pSVar1->fields).rotation,
     this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
    SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
              (this_00,(rotationChangedEventArgs->fields).NewRotation,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnScaleChanged(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnScaleChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
      (scaleChangedEventArgs != (ScaleChangedEventArgs *)0x0)) &&
     (this_00 = (pSVar1->fields).scale,
     this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (this_00,(scaleChangedEventArgs->fields).NewScale,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSeatedChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSeatedChanged
               (MVAvatarLocal *this,bool isSeated,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if ((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (pSVar1->fields).isSeated,
     this_00 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Boolean]::
    SpawnRoleReceiverVariable_1_System_Boolean__set_Value
              (this_00,isSeated,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      if (((pAVar1->klass->_1).typeHierarchyDepth <
           (TypeInfo__AvatarEquipable->_1).typeHierarchyDepth) ||
         ((pAVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarEquipable->_1).typeHierarchyDepth - 1]
          != (Il2CppClass *)TypeInfo__AvatarEquipable)) {
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
      fVar4 = (float10)(*(pAVar3->klass->vtable).HandleModifierEffect.methodPtr)
                                 (pAVar3,5,0x3f800000,
                                  (pAVar3->klass->vtable).HandleModifierEffect.method);
      if (_UNK_? < (float)fVar4) {
        if (this_01 == (AvatarEquipable *)0x0) goto code_?;
        bVar5 = AvatarEquipable::AvatarEquipable_GetIsEquipped
                          (this_01,AvatarItemType__Enum_SlapGun,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
      }
      if (this_01 != (AvatarEquipable *)0x0) {
        (*(this_01->klass->vtable).Unequip.methodPtr)
                  (this_01,(this_01->klass->vtable).Unequip.method);
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
  if ((this->fields).OnDamageTaken != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0)
  {
    pAVar1 = (this->fields).OnDamageTaken;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,amount,damageDealer,damageType,
               (pAVar1->fields)._._.method);
  }
  pMVar2 = (this->fields)._.Health;
  if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar3 = (float10)(*(pMVar2->klass->vtable).get_Value.methodPtr)
                               (pMVar2,(pMVar2->klass->vtable).get_Value.method);
    if (0.0 < (float)fVar3) {
      return;
    }
    if (damageDealer == (MVPlayer *)0x0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
      dmgDealerActorNr = (pMVar5->fields)._._ActorNr_k__BackingField;
    }
    else {
      dmgDealerActorNr = (damageDealer->fields)._ActorNr_k__BackingField;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
       pMVar5 != (MVLocalPlayer *)0x0)) {
      if ((this->fields).OnKilled != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        pAVar6 = (this->fields).OnKilled;
        localPlayerActorNr = (pMVar5->fields)._._ActorNr_k__BackingField;
        (*(pAVar6->fields)._._.invoke_impl)
                  ((pAVar6->fields)._._.method_code,localPlayerActorNr,dmgDealerActorNr,damageType,
                   (pAVar6->fields)._._.method);
        this_00 = (this->fields).spawnRoleDataReceiver;
        if (this_00 == (SpawnRoleDataReceiver *)0x0) goto code_?;
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataReceiver
        ::SpawnRoleDataReceiver_NotifyKilled
                  (this_00,localPlayerActorNr,dmgDealerActorNr,damageType,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RelayNewSafePosition(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayNewSafePosition
               (MVAvatarLocal *this,Vector3 lastSafePosition,MethodInfo *method)

{
  auVar1._0_40_ = in_stack_2._0_40_;
  auVar1._40_4_ = unaff_EBP;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__get_Value__
                   );
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff9c,0,0x38);
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_02 != (MainCameraManager *)0x0) {
    this_03 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
    if (this_03 != (MVCameraBase *)0x0) {
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_03,(MethodInfo *)0x0);
      pSVar3 = (this->fields).spawnRoleDataReceiver;
      if ((pSVar3 != (SpawnRoleDataReceiver *)0x0) &&
         (this_00 = (pSVar3->fields).rotation,
         this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) {
        pQVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
                 SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__get_Value
                           ((Quaternion *)&stack0xffffffd4,this_00,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__get_Value__
                           );
        auVar5._16_28_ = auVar1._16_28_;
        auVar5._0_4_ = pQVar4->x;
        auVar5._4_4_ = pQVar4->y;
        auVar5._8_4_ = pQVar4->z;
        auVar5._12_4_ = pQVar4->w;
        if (this_04 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffe8,this_04,(MethodInfo *)0x0);
          uVar7 = pVVar6->x;
          uVar8 = pVVar6->y;
          auVar9._36_4_ = uVar8;
          auVar9._32_4_ = uVar7;
          fVar10 = pVVar6->z;
          auVar9._40_4_ = auVar5._40_4_;
          auVar9._0_32_ = auVar5._0_32_;
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffe4,this_04,(MethodInfo *)0x0);
          fVar11 = pQVar4->x;
          fVar12 = pQVar4->y;
          fVar13 = pQVar4->z;
          fVar14 = pQVar4->w;
          fVar15 = 0.0;
          fVar16 = auVar9._32_4_;
          fVar17 = auVar9._36_4_;
          fVar18 = auVar9._4_4_;
          fVar19 = auVar9._8_4_;
          fVar20 = auVar9._12_4_;
          camPos.z = fVar10;
          camPos.x = (float)(int)auVar9._32_8_;
          camPos.y = (float)(int)((ulonglong)auVar9._32_8_ >> 0x20);
          SafeSpotData::SafeSpotData__ctor
                    ((SafeSpotData *)&stack0xffffff9c,lastSafePosition,auVar9._0_16_,camPos,*pQVar4
                     ,(MethodInfo *)0x0);
          pSVar3 = (this->fields).spawnRoleDataReceiver;
          if ((pSVar3 != (SpawnRoleDataReceiver *)0x0) &&
             (this_01 = (pSVar3->fields).reviveState,
             this_01 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
            lastSafePosition.x =
                 (float)Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
                        SpawnRoleReceiverVariable_1_System_Object__get_Value
                                  ((SpawnRoleReceiverVariable_1_System_Object_ *)this_01,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                                  );
            if ((ReviveState *)lastSafePosition.x != (ReviveState *)0x0) {
              fVar21 = fVar19;
              fVar22 = fVar18;
              uVar23 = CONCAT44(fVar21,fVar22);
              fVar24 = fVar20;
              auVar25 = CONCAT48(fVar24,uVar23);
              fVar26 = fVar16;
              QVar27 = (Quaternion)CONCAT412(fVar26,auVar25);
              fVar28 = fVar17;
              auVar29 = CONCAT416(fVar28,QVar27);
              fVar30 = fVar10;
              auVar31 = CONCAT420(fVar30,auVar29);
              fVar32 = fVar11;
              auVar33 = CONCAT424(fVar32,auVar31);
              fVar34 = fVar12;
              auVar35 = CONCAT428(fVar34,auVar33);
              fVar36 = fVar13;
              auVar37 = CONCAT432(fVar36,auVar35);
              fVar38 = fVar14;
              auVar39 = CONCAT436(fVar38,auVar37);
              fVar40 = fVar15;
              auVar41 = CONCAT440(fVar40,auVar39);
              this = (MVAvatarLocal *)fStack_42;
              fVar43 = fStack_44;
              value = (SafeSpotData)CONCAT1244(value.Position,auVar41);
              ReviveState::ReviveState_set_SafeGroundedData
                        ((ReviveState *)lastSafePosition.x,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
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
            pMStack8 = (pMVar7->vtable).get_Value.method;
            (*(pMVar7->vtable).get_Value.methodPtr)();
            if (pMVar6 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              pMVar9 = pMVar6->klass;
              pMStack8 = (pMVar9->vtable).set_Value.method;
              (*(pMVar9->vtable).set_Value.methodPtr)();
              bVar4 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
              }
              pAVar10 = (this->fields).avatarEquipable;
              if (pAVar10 != (AvatarEquipable *)0x0) {
                pAVar11 = pAVar10->klass;
                pMStack8 = (pAVar11->vtable).Unequip.method;
                (*(pAVar11->vtable).Unequip.methodPtr)();
                pAVar12 = (this->fields).interactableLocal;
                if (pAVar12 != (AvatarInteractable *)0x0) {
                  pAVar13 = pAVar12->klass;
                  pMStack8 = (pAVar13->vtable).ClearModifiers.method;
                  (*(pAVar13->vtable).ClearModifiers.methodPtr)();
                  pAVar14 = (this->fields).avatarMotor;
                  if (pAVar14 != (AvatarMotor *)0x0) {
                    pAVar15 = pAVar14->klass;
                    pMStack8 = (pAVar15->vtable).Reset.method;
                    (*(pAVar15->vtable).Reset.methodPtr)();
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
    unaff_EBX = (Dictionary_2_System_Object_System_Object_ *)
                MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    if ((unaff_EBX != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (((unaff_EBX->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth ||
        ((Dictionary_2_System_Object_System_Object___Class *)
         (unaff_EBX->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
    goto code_?;
    bVar1 = mscorlib.dll::System::String::String_op_Inequality
                      ((this->fields).currAnim,animationState,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      unaff_EBX = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (unaff_EBX != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)unaff_EBX,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (unaff_EBX,(Object *)StringLiteral_state,(Object *)animationState,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        value = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (unaff_EBX,(Object *)StringLiteral_timeStamp,value,
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
      (**(code **)(**(int **)(unaff_EBX + 0xc) + 0xdc))();
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
          (**(code **)(**(int **)(unaff_EBX + 0xc) + 0xf4))();
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
  ppOVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                      ((Void *)this,(MethodInfo *)0x0);
  if (ppOVar1 != (Object **)0x0) {
    (*(code *)(*ppOVar1)[0x32].monitor)(ppOVar1,position._0_8_,position.z,(*ppOVar1)[0x33].klass);
    this_00 = (MVWorldObjectClient *)
              mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                        ((Void *)this,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClient *)0x0) {
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_00,rotation,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._._.gameObject;
      if (pGVar2 != (GameObject *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar3,position,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._._._.gameObject;
          if (pGVar2 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar3,rotation,(MethodInfo *)0x0);
              pAVar4 = (this->fields).avatarMotor;
              if (pAVar4 != (AvatarMotor *)0x0) {
                (*(pAVar4->klass->vtable).Reset.methodPtr)
                          (pAVar4,(pAVar4->klass->vtable).Reset.method);
                return;
              }
            }
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
  object = this;
  pWVar1 = (this->fields)._.skillDataManager;
  if (pWVar1 == (WorldObjectSkillDataManager *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    bVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (pWVar1,StringLiteral_Size,(MethodInfo *)0x0);
    pMVar4 = _UNK_?;
    if (bVar3 != 0) {
      pWVar1 = (object->fields)._.skillDataManager;
      if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
      pMVar4 = (MVAvatarLocal *)
                WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                          (pWVar1,StringLiteral_Size,(MethodInfo *)0x0);
    }
    unaff_EDI = (MVAvatarLocal *)spawnRoleDataReceiver;
    this = pMVar4;
    if ((spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) ||
       (this_00 = (spawnRoleDataReceiver->fields).size,
       this_00 == (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Single]::
    SpawnRoleReceiverVariable_1_System_Single__set_Value
              (this_00,(float)pMVar4,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
              );
    uStack_5._4_4_ = this;
    (*(object->klass->vtable).set_Scale.methodPtr)
              (object,CONCAT44(this,this),this,(object->klass->vtable).set_Scale.method);
    pMVar6 = (object->fields)._.Size;
    if (pMVar6 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    (*(pMVar6->klass->vtable).set_Value.methodPtr)
              (pMVar6,this,(pMVar6->klass->vtable).set_Value.method);
    this = (MVAvatarLocal *)(((SpawnRoleDataReceiver *)unaff_EDI)->fields).reviveState;
    this_03 = (ReviveState *)func_?(TypeInfo__ReviveState);
    if ((this_03 == (ReviveState *)0x0) ||
       (ReviveState::ReviveState__ctor(this_03,(MethodInfo *)0x0), this == (MVAvatarLocal *)0x0))
    goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Object]::
    SpawnRoleReceiverVariable_1_System_Object__set_Value
              ((SpawnRoleReceiverVariable_1_System_Object_ *)this,(Object *)this_03,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__set_Value_ReviveState_
              );
    this_01 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).lastRespawnType;
    if (this_01 == (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_01,0,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
              );
    pSVar7 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).position;
    pVVar8 = (Vector3 *)
             (*(object->klass->vtable).get_Position.methodPtr)
                       (&puStack_9,object,(object->klass->vtable).get_Position.method);
    if (pSVar7 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (pSVar7,*pVVar8,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    this_02 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).rotation;
    pQVar10 = (Quaternion *)
              (*(object->klass->vtable).get_Rotation.methodPtr)
                        (&pUStack_11,object,(object->klass->vtable).get_Rotation.method);
    if (this_02 == (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)
    goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
    SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
              (this_02,*pQVar10,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
              );
    pSVar7 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).defaultScale;
    pVVar8 = (Vector3 *)
             (*(object->klass->vtable).get_Scale.methodPtr)
                       (&puStack_9,object,(object->klass->vtable).get_Scale.method);
    if (pSVar7 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (pSVar7,*pVVar8,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    pSVar7 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).scale;
    pVVar8 = (Vector3 *)
             (*(object->klass->vtable).get_Scale.methodPtr)
                       (&puStack_9,object,(object->klass->vtable).get_Scale.method);
    if (pSVar7 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
              (pSVar7,*pVVar8,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
              );
    pSVar12 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).woId;
    if (pSVar12 == (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32]::SpawnRoleReceiverVariable_1_System_Int32__set_Value
              (pSVar12,(object->fields)._._._._.id,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
              );
    pMVar13 = (object->fields)._.MaxHealth;
    pSVar12 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).maxHealth;
    if ((pMVar13 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) ||
       (value = (*(pMVar13->klass->vtable).get_Value.methodPtr)
                          (pMVar13,(pMVar13->klass->vtable).get_Value.method),
       pSVar12 == (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0)) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[System::Int32]::SpawnRoleReceiverVariable_1_System_Int32__set_Value
              (pSVar12,value,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
              );
    pSStack_14 = (((SpawnRoleDataReceiver *)unaff_EDI)->fields).tierRequirement;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
      cRam_? = '\x01';
    }
    this = (MVAvatarLocal *)0x0;
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
    bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                      (this_04,(object->fields).spawnWorldObjectId,(MVWorldObject **)&this,
                       (MethodInfo *)0x0);
    pMVar4 = this;
    if ((((bVar3 == 0) || (unaff_EDI = this, this == (MVAvatarLocal *)0x0)) ||
        (pMVar15 = this->klass,
        (pMVar15->_1).typeHierarchyDepth <
        (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth)) ||
       (((MVAvatarSpawnRoleCreator__Class *)
         (pMVar15->_1).typeHierarchy[(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1]
         != TypeInfo__MVAvatarSpawnRoleCreator || (this == (MVAvatarLocal *)0x0)))) {
      this = (MVAvatarLocal *)((uint)this & 0xffffff00);
code_?:
      if (pSStack_14 != (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::ByteEnum]::
        SpawnRoleReceiverVariable_1_System_ByteEnum__set_Value
                  ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSStack_14,(ByteEnum__Enum)this,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__set_Value_MV__Common__GamePassTier_
                  );
        unaff_EDI = (MVAvatarLocal *)
                    MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (unaff_EDI != (MVAvatarLocal *)0x0) {
          this = (MVAvatarLocal *)(unaff_EDI->fields)._._._._.inputLinkRefs;
          pUStack_11 = TypeInfo__UnityEngine__Events__UnityAction;
          this_05 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (this_05 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_05,(Object *)object,
                       MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__,(MethodInfo *)0x0
                      );
            pUVar16 = (UnityAction *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)this,(Delegate *)this_05,(MethodInfo *)0x0);
            uVar17 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar16);
            if (pUVar16 == (UnityAction *)0x0) {
              (unaff_EDI->fields)._._._._.inputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
              uStack_5._0_4_ = (UnityAction **)&(unaff_EDI->fields)._._._._.inputLinkRefs;
              uStack_5._4_4_ = (MVAvatarLocal *)0x0;
              func_?();
              return;
            }
            pUVar18 = (UnityAction *)0x0;
            if (pUVar16->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar18 = pUVar16;
            }
            if (pUVar18 != (UnityAction *)0x0) {
              (unaff_EDI->fields)._._._._.inputLinkRefs = (List_1_MV_WorldObject_Link_ *)pUVar18;
              uVar17 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar16);
              uStack_5._4_4_ = (MVAvatarLocal *)(UnityAction *)0x0;
              if (pUVar16->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                uStack_5._4_4_ = (MVAvatarLocal *)pUVar16;
              }
              if (uStack_5._4_4_ != (MVAvatarLocal *)0x0) {
                uStack_5._0_4_ = (UnityAction **)&(unaff_EDI->fields)._._._._.inputLinkRefs;
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pMVar2 = TypeInfo__MVAvatarSpawnRoleCreator;
    if (((TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth <=
         (pMVar15->_1).typeHierarchyDepth) &&
       ((MVAvatarSpawnRoleCreator__Class *)
        (pMVar15->_1).typeHierarchy[(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1]
        == TypeInfo__MVAvatarSpawnRoleCreator)) {
      GVar19 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                         ((MVAvatarSpawnRoleCreator *)this,(MethodInfo *)0x0);
      this = (MVAvatarLocal *)CONCAT31(this._1_3_,(char)GVar19);
      unaff_EDI = pMVar4;
      goto code_?;
    }
  }
  uVar17 = func_?(unaff_EDI,pMVar2);
code_?:
  uStack_5 = uVar17;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
    if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
          if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                               func_?(TypeInfo__System__Action);
                      if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                            if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System
                              ::Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                        (pUVar4,(Object *)this,
                                         MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_
                                         ,(MethodInfo *)0x0);
                              if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                                GameEventManager+AvatarCommandsPlayModeManager::
                                GameEventManager_AvatarCommandsPlayModeManager_add_OnMoveBodyToSafeSpot
                                          (pGVar2,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
                                pGVar1 = MVGameControllerBase::
                                         MVGameControllerBase_get_GameEventManager
                                                   ((MethodInfo *)0x0);
                                if (pGVar1 != (GameEventManager *)0x0) {
                                  pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                  pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                           func_?(TypeInfo__System__Action<int>);
                                  if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`1[System::Int32Enum]::
                                    UnityAction_1_System_Int32Enum___ctor
                                              (pUVar4,(Object *)this,
                                               MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_
                                               ,(MethodInfo *)0x0);
                                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                      GameEventManager+AvatarCommandsPlayModeManager::
                                      GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAtSafeSpot
                                                (pGVar2,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0)
                                      ;
                                      pGVar1 = MVGameControllerBase::
                                               MVGameControllerBase_get_GameEventManager
                                                         ((MethodInfo *)0x0);
                                      if (pGVar1 != (GameEventManager *)0x0) {
                                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                 func_?(TypeInfo__System__Action);
                                        if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                          UnityEngine.AIModule.dll::UnityEngine::AI::
                                          NavMesh+OnNavMeshPreUpdate::
                                          NavMesh_OnNavMeshPreUpdate__ctor
                                                    (pNVar3,(Object *)this,
                                                                                                          
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                                                  ,(MethodInfo *)0x0);
                                          if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                            GameEventManager+AvatarCommandsPlayModeManager::
                                            GameEventManager_AvatarCommandsPlayModeManager_add_OnReadyScreenShot
                                                      (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                                            pGVar1 = MVGameControllerBase::
                                                     MVGameControllerBase_get_GameEventManager
                                                               ((MethodInfo *)0x0);
                                            if (pGVar1 != (GameEventManager *)0x0) {
                                              pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                              pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                                       func_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                              if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0)
                                              {
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Int32Enum]::
                                                UnityAction_1_System_Int32Enum___ctor
                                                          (pUVar4,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                  GameEventManager+AvatarCommandsPlayModeManager::
                                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnWinningConditionIntermediateDebriefing
                                                            (pGVar2,(Action_1_WinningConditionType_
                                                                     *)pUVar4,(MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnRemoveFromGame
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                  (MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAsGhost
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                                                  if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)
                                                                0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Events
                                                    ::UnityAction`1[System::Int32Enum]::
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
                                                  if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)
                                                                0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Events
                                                    ::UnityAction`1[System::Int32Enum]::
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
                                                  if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)
                                                                0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Events
                                                    ::UnityAction`1[System::Int32Enum]::
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
          (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          , _UNK_? < fVar4 - (pAVar3->fields).time)) ||
         (pAVar3 = (pAVar2->fields).lastDamageSource,
         pAVar3 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar4 - (pAVar3->fields).time <= _UNK_?) {
        pAVar2 = (this->fields).interactableLocal;
        if ((pAVar2 != (AvatarInteractable *)0x0) &&
           ((pAVar2->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0)) {
          puVar5 = &UNK_?;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          if ((((fVar4 - *(float *)(puVar5 + 0x10) <= _UNK_?) &&
               (((pAVar2->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0 &&
                (pAVar6 = (this->fields).interactableLocal, pAVar6 != (AvatarInteractable *)0x0))))
              && (pAVar3 = (pAVar6->fields).lastDamageSource,
                 pAVar3 != (AvatarInteractable_DamageSource *)0x0)) &&
             (((fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0),
               fVar4 - (pAVar3->fields).time <= _UNK_? &&
               ((pAVar6->fields).lastDamageSource != (AvatarInteractable_DamageSource *)0x0)) &&
              (pMVar7 = (pAVar2->fields)._.health,
              pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)))) {
            (*(pMVar7->klass->vtable).get_Value.methodPtr)(pMVar7);
            pMVar7 = (pAVar2->fields)._.health;
            if (pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              damageDealer = (MVPlayer *)0x0;
              puVar5 = &UNK_?;
              (*(pMVar7->klass->vtable).set_Value.methodPtr)
                        (pMVar7,0,(pMVar7->klass->vtable).set_Value.method);
              if ((pAVar2->fields).OnDamageTaken !=
                  (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                pAVar8 = (pAVar2->fields).OnDamageTaken;
                (*(pAVar8->fields)._._.invoke_impl)
                          ((pAVar8->fields)._._.method_code,pMVar7,damageDealer,puVar5,
                           (pAVar8->fields)._._.method);
              }
              AvatarInteractable::AvatarInteractable_DoKilledNotification
                        (pAVar2,damageDealer,(PlayerKilledByType__Enum)puVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    MVAvatarLocal_Die(this,(MethodInfo *)0x0);
    if ((this->fields).OnSuicide != (Action *)0x0) {
      pAVar9 = (this->fields).OnSuicide;
      (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code);
      this_00 = (this->fields).spawnRoleDataReceiver;
      if (this_00 != (SpawnRoleDataReceiver *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataReceiver
        ::SpawnRoleDataReceiver_NotifySuicide(this_00,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Already_suspended,(MethodInfo *)0x0);
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
  if (pGVar1 != (GameEventManager *)0x0) {
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
      if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
                  (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
        pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                 func_?(TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                );
        if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                     ,(MethodInfo *)0x0);
          if (pGVar1 != (GameEventManager *)0x0) {
            GameEventManager::GameEventManager_remove_OnFirstTimeEvent
                      (pGVar1,(Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pUVar4,
                       (MethodInfo *)0x0);
            pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (pGVar1 != (GameEventManager *)0x0) {
              pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
              pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar3,(Object *)this,
                           MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,(MethodInfo *)0x0);
                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                  GameEventManager+AvatarCommandsPlayModeManager::
                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetRespawnWhenPossible
                            (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                     ((MethodInfo *)0x0);
                  pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                           func_?(TypeInfo__System__Action<int>);
                  if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                    Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                              (pUVar4,(Object *)this,
                               MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_,
                               (MethodInfo *)0x0);
                    if (pGVar1 != (GameEventManager *)0x0) {
                      GameEventManager::GameEventManager_remove_OnXPRewarded
                                (pGVar1,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
                      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                         ((MethodInfo *)0x0);
                      if ((pGVar1 != (GameEventManager *)0x0) &&
                         (pGVar5 = (pGVar1->fields).GameState,
                         pGVar5 != (GameEventManager_GameStateManager *)0x0)) {
                        this_00 = (SubscribableVariableBase_1_System_Single_ *)
                                  (pGVar5->fields).gameStateType;
                        pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                 func_?(
                                                TypeInfo__System__Action<MV::Common::MVGameStateType>
                                                );
                        if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                    (pUVar4,(Object *)this,
                                     MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                                     ,(MethodInfo *)0x0);
                          if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
                            SubscribableVariableBase`1[System::Single]::
                            SubscribableVariableBase_1_System_Single__remove_OnChange
                                      (this_00,(Action_1_Single_ *)pUVar4,
                                       MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__remove_OnChange_System__Action<MV::Common::MVGameStateType>_
                                      );
                            pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                               ((MethodInfo *)0x0);
                            if (pGVar1 != (GameEventManager *)0x0) {
                              pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                              pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                       func_?(TypeInfo__System__Action);
                              if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                          (pNVar3,(Object *)this,
                                           MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                                           ,(MethodInfo *)0x0);
                                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)
                                {
                                  GameEventManager+AvatarCommandsPlayModeManager::
                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnReadyScreenShot
                                            (pGVar2,(Action *)pNVar3,(MethodInfo *)0x0);
                                  pGVar1 = MVGameControllerBase::
                                           MVGameControllerBase_get_GameEventManager
                                                     ((MethodInfo *)0x0);
                                  if (pGVar1 != (GameEventManager *)0x0) {
                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                             func_?(TypeInfo__System__Action<int>);
                                    if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`1[System::Int32Enum]::
                                      UnityAction_1_System_Int32Enum___ctor
                                                (pUVar4,(Object *)this,
                                                 MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_
                                                 ,(MethodInfo *)0x0);
                                      if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager
                                                     *)0x0) {
                                        GameEventManager+AvatarCommandsPlayModeManager::
                                        GameEventManager_AvatarCommandsPlayModeManager_remove_OnMoveBodyToSafeSpot
                                                  (pGVar2,(Action_1_Int32_ *)pUVar4,
                                                   (MethodInfo *)0x0);
                                        pGVar1 = MVGameControllerBase::
                                                 MVGameControllerBase_get_GameEventManager
                                                           ((MethodInfo *)0x0);
                                        if (pGVar1 != (GameEventManager *)0x0) {
                                          pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                          pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                                   func_?(TypeInfo__System__Action<int>);
                                          if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`1[System::Int32Enum]::
                                            UnityAction_1_System_Int32Enum___ctor
                                                      (pUVar4,(Object *)this,
                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_
                                                  ,(MethodInfo *)0x0);
                                            if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                              GameEventManager+AvatarCommandsPlayModeManager::
                                              GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAtSafeSpot
                                                        (pGVar2,(Action_1_Int32_ *)pUVar4,
                                                         (MethodInfo *)0x0);
                                              pGVar1 = MVGameControllerBase::
                                                       MVGameControllerBase_get_GameEventManager
                                                                 ((MethodInfo *)0x0);
                                              if (pGVar1 != (GameEventManager *)0x0) {
                                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                         func_?(TypeInfo__System__Action);
                                                if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnRespawn
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToSpawnPoint
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pUVar4 = (UnityAction_1_System_Int32Enum_ *)
                                                             func_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                                  if (pUVar4 != (UnityAction_1_System_Int32Enum_ *)
                                                                0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Events
                                                    ::UnityAction`1[System::Int32Enum]::
                                                    UnityAction_1_System_Int32Enum___ctor
                                                              (pUVar4,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnWinningConditionIntermediateDebriefing
                                                            (pGVar2,(Action_1_WinningConditionType_
                                                                     *)pUVar4,(MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnRemoveFromGame
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                  (MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAsGhost
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToDeadMode
                                                            (pGVar2,(Action *)pNVar3,
                                                             (MethodInfo *)0x0);
                                                  pMVar6 = MVGameControllerBase::
                                                           MVGameControllerBase_get_LocalPlayer
                                                                     ((MethodInfo *)0x0);
                                                  if (pMVar6 != (MVLocalPlayer *)0x0) {
                                                    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                             func_?((pMVar6->fields)._.
                                                                             OnCheckpointReached);
                                                    if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0)
                                                    {
                                                      UnityEngine.AIModule.dll::UnityEngine::AI::
                                                      NavMesh+OnNavMeshPreUpdate::
                                                      NavMesh_OnNavMeshPreUpdate__ctor
                                                                (pNVar3,(Object *)this,
                                                                                                                                  
                                                  MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__
                                                  ,(MethodInfo *)0x0);
                                                  pUVar7 = (UnityAction *)
                                                           mscorlib.dll::System::Delegate::
                                                           Delegate_Remove((Delegate *)0x0,
                                                                           (Delegate *)pNVar3,
                                                                           (MethodInfo *)0x0);
                                                  if (pUVar7 == (UnityAction *)0x0) {
                                                    (pMVar6->fields)._.OnCheckpointReached =
                                                         (UnityAction *)0x0;
                                                  }
                                                  else {
                                                    pUVar8 = (UnityAction *)0x0;
                                                    if (pUVar7->klass ==
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pUVar8 = pUVar7;
                                                    }
                                                    if (pUVar8 == (UnityAction *)0x0)
                                                    goto code_?;
                                                    (pMVar6->fields)._.OnCheckpointReached = pUVar8;
                                                    pUVar8 = (UnityAction *)0x0;
                                                    if (pUVar7->klass ==
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pUVar8 = pUVar7;
                                                    }
                                                    if (pUVar8 == (UnityAction *)0x0)
                                                    goto code_?;
                                                  }
                                                  func_?();
                                                  this_02 = MVGameControllerBase::
                                                            MVGameControllerBase_get_Game
                                                                      ((MethodInfo *)0x0);
                                                  if (this_02 != (MVNetworkGame *)0x0) {
                                                    pMVar6 = MVNetworkGame::
                                                             MVNetworkGame_get_LocalPlayer
                                                                       (this_02,(MethodInfo *)0x0);
                                                    if (pMVar6 != (MVLocalPlayer *)0x0) {
                                                      this_01 = (pMVar6->fields).boostController;
                                                      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                                                               func_?(
                                                  TypeInfo__System__Action);
                                                  if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar3,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__
                                                  ,(MethodInfo *)0x0);
                                                  if (this_01 != (BoostController *)0x0) {
                                                    BoostController::
                                                    BoostController_UnSubscribeToBoostChanged
                                                              (this_01,
                                                  BoostType__Enum_ExtraHealthFloatMultiplier,
                                                  (Action *)pNVar3,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Update
          (MVAvatarLocal *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (this->fields).avatarLocalModes;
  if ((pMVar2 != (MVAvatarLocal_AvatarLocalModes *)0x0) &&
     (pMStack_3 = (pMVar2->fields).currentMode, pMStack_3 != (MVAvatarLocal_AvatarMode *)0x0)) {
    pMStack_1 = (pMStack_3->klass->vtable).__unknown_2.method;
    pIStack_4 = interactionMap;
    (*(pMStack_3->klass->vtable).__unknown_2.methodPtr)();
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
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                   );
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
      func_?((double)((float)iVar3 * fVar4),(pMVar6->vtable).set_Value.method);
      func_?();
      (*(pMVar6->vtable).set_Value.methodPtr)(pMVar5);
      if ((this->fields).spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) {
        return;
      }
      pMVar5 = (this->fields)._.MaxHealth;
      this_00 = (((this->fields).spawnRoleDataReceiver)->fields).maxHealth;
      if ((pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
         (value = (*(pMVar5->klass->vtable).get_Value.methodPtr)(),
         this_00 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0)) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Int32]::
        SpawnRoleReceiverVariable_1_System_Int32__set_Value
                  (this_00,value,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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


/* Void <InitializeHealth>b__125_0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeHealth_b__125_0
               (MVAvatarLocal *this,Object *health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                   );
    cRam_? = '\x01';
  }
  if (health != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((health->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(health);
    if (*pfVar2 <= 0.0) {
      MVAvatarLocal_Die(this,(MethodInfo *)0x0);
    }
    else {
      previousHealth = (this->fields).previousHealth;
      pMVar3 = (this->fields)._.Health;
      if (pMVar3 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      fVar4 = (float10)(*(pMVar3->klass->vtable).get_Value.methodPtr)
                                 (pMVar3,(pMVar3->klass->vtable).get_Value.method);
      MVAvatar::MVAvatar_TrySpawningHealParticles
                ((MVAvatar *)this,previousHealth,(float)fVar4,(MethodInfo *)0x0);
    }
    pMVar3 = (this->fields)._.Health;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar4 = (float10)(*(pMVar3->klass->vtable).get_Value.methodPtr)
                                 (pMVar3,(pMVar3->klass->vtable).get_Value.method);
      (this->fields).previousHealth = (float)fVar4;
      method_00 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
      ;
      pSVar5 = (this->fields).spawnRoleDataReceiver;
      if ((pSVar5 != (SpawnRoleDataReceiver *)0x0) &&
         (this_00 = (pSVar5->fields).health,
         this_00 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) {
        pSVar1 = TypeInfo__System__Single;
        if ((health->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar2 = (float *)func_?(health);
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Single]::
          SpawnRoleReceiverVariable_1_System_Single__set_Value(this_00,*pfVar2,method_00);
          return;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pSVar1 = extraout_ECX;
code_?:
  func_?(health,pSVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <InitializeShield>b__122_0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeShield_b__122_0
               (MVAvatarLocal *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                   );
    cRam_? = '\x01';
  }
  previousHealth = (this->fields).previousShield;
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    MVAvatar::MVAvatar_TrySpawningHealParticles
              ((MVAvatar *)this,previousHealth,(float)fVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.shield;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                                 (pMVar1,(pMVar1->klass->vtable).get_Value.method);
      (this->fields).previousShield = (float)fVar2;
      method_00 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
      ;
      pSVar3 = (this->fields).spawnRoleDataReceiver;
      if ((pSVar3 != (SpawnRoleDataReceiver *)0x0) &&
         (this_00 = (pSVar3->fields).shield,
         this_00 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) {
        if (shield != (Object *)0x0) {
          pSVar4 = TypeInfo__System__Single;
          if ((shield->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar5 = (float *)func_?(shield);
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleReceiverVariable`1[System::Single]::
            SpawnRoleReceiverVariable_1_System_Single__set_Value(this_00,*pfVar5,method_00);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  shield = extraout_ECX;
  pSVar4 = extraout_EDX;
code_?:
  func_?(shield,pSVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = (AvatarLimbManager_LimbRotator *)func_?(TypeInfo__AvatarRespawnHandler);
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor(this_00,(MethodInfo *)0x0);
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
  if (((TypeInfo__AvatarLocal->_1).typeHierarchyDepth <= (pAVar1->klass->_1).typeHierarchyDepth) &&
     ((pAVar1->klass->_1).typeHierarchy[(TypeInfo__AvatarLocal->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__AvatarLocal)) {
    return pAVar1;
  }
  func_?(pAVar1,TypeInfo__AvatarLocal);
  pcVar2 = (code *)swi(3);
  pAVar1 = (AvatarLocal *)(*pcVar2)();
  return pAVar1;
}


/* AvatarMotor get_AvatarMotor() */

AvatarMotor *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_AvatarMotor
          (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).avatarMotor;
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


/* Boolean get_InGunMode() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_InGunMode
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
  x = *(Object_1 **)(in_stack_3 + 0x34);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    piVar4 = *(int **)(in_stack_3 + 0x34);
    if (piVar4 == (int *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    if ((char)piVar4[0x13] == '\0') {
      bVar1 = (**(code **)(*piVar4 + 0xfc))();
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
  if (this_00 !=
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
       *)0x0) {
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
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
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingWrapperBase *)(*pcVar2)();
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
    apMStack_3[0] = (((MVRigidBody__Class *)pAVar2->klass)->vtable).__unknown_1.method;
    puVar4 = (undefined8 *)
             (*(((MVRigidBody__Class *)pAVar2->klass)->vtable).__unknown_1.methodPtr)
                       (apMStack_3,pAVar2);
    uVar5 = *puVar4;
    fVar6 = *(float *)(puVar4 + 1);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  apMStack_3[0] = (MethodInfo *)&UNK_?;
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
      apMStack_3[0] = (pAVar1->klass->vtable).get_Velocity.method;
      puVar4 = (undefined8 *)(*(pAVar1->klass->vtable).get_Velocity.methodPtr)(apMStack_3,pAVar1);
      uVar5 = *puVar4;
      fVar6 = *(float *)(puVar4 + 1);
      __return_storage_ptr__->x = (float)(int)uVar5;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
    apMStack_3[0] = (MethodInfo *)&UNK_?;
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  if (cRam_? == '\0') {
    apMStack_3[0] = (MethodInfo *)&TypeInfo__UnityEngine__Vector3;
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
    iVar3 = (*(pMVar2->klass->vtable).get_Value.methodPtr)
                      (pMVar2,(pMVar2->klass->vtable).get_Value.method);
    pMVar4 = (this->fields)._.Health;
    if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar5 = (float10)(*(pMVar4->klass->vtable).get_Value.methodPtr)
                                 (pMVar4,(pMVar4->klass->vtable).get_Value.method);
      MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.MaxHealth;
      pMVar4 = (this->fields)._.Health;
      if ((pMVar2 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
         (iVar6 = (*(pMVar2->klass->vtable).get_Value.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Value.method),
         pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
        (*(pMVar4->klass->vtable).set_Value.methodPtr)
                  (pMVar4,(float)iVar6 / ((float)iVar3 / (float)fVar5),
                   (pMVar4->klass->vtable).set_Value.method);
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

