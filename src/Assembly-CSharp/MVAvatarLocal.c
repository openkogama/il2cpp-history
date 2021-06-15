
/* Void Activate(Int32, SpawnRoleDataReceiver, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Activate
               (MVAvatarLocal *this,int32_t idFrom,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               Vector3 position,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).suspended = 0;
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  MVAvatarLocal_SubscribeToExternalEvents(this,(MethodInfo *)0x0);
  (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_01 != (MVLocalPlayer *)0x0) {
    bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                          ((MethodInfo *)0x0);
      if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
      cVar3 = func_?();
      if (cVar3 != '\0') {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
        if (pIVar4 == (IPlayModeUI *)0x0) goto code_?;
        func_?(4,TypeInfo__IPlayModeUI,pIVar4,0);
      }
    }
    MVAvatarLocal_SetToSpawnTransform(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,idFrom,(MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObject *)0x0) {
        bVar6 = (TypeInfo__MVBuildModeAvatar->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar6) ||
           ((MVBuildModeAvatar__Class *)(pMVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
            TypeInfo__MVBuildModeAvatar)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pMVar8 = (MVWorldObject *)0x0;
        if (bVar7) {
          pMVar8 = pMVar5;
        }
        if (pMVar8 != (MVWorldObject *)0x0) {
          (*(code *)(this->klass->vtable).set_Position.method)(this,position._0_8_,position.z);
          (*(code *)(this->klass->vtable).set_Rotation.method)
                    (this,rotation.x,rotation.y,rotation.z,rotation.w);
          puVar9 = (undefined8 *)
                    (*(code *)(this->klass->vtable).get_Position.method)
                              (&stack0xffffffe4,this,(this->klass->vtable).set_Position.methodPtr);
          uVar10 = *puVar9;
          fVar11 = *(float *)(puVar9 + 1);
          pQVar12 = (Quaternion *)
                    (*(code *)(this->klass->vtable).get_Rotation.method)
                              (&stack0xffffffe0,this,(this->klass->vtable).set_Rotation.methodPtr);
          position_00.z = fVar11;
          position_00.x = (float)(int)uVar10;
          position_00.y = (float)(int)((ulonglong)uVar10 >> 0x20);
          MVAvatarLocal_SetTransform(this,position_00,*pQVar12,(MethodInfo *)0x0);
        }
      }
      MVAvatarLocal_SetupSpawnroleReceiver(this,spawnRoleDataReceiver,(MethodInfo *)0x0);
      pAVar13 = (this->fields)._.avatar;
      if (pAVar13 != (Avatar_1 *)0x0) {
        pAVar14 = pAVar13->klass;
        bVar6 = (pAVar14->_1).naturalAligment;
        bVar15 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if ((bVar6 < bVar15) ||
           (spawnRoleDataReceiver = (SpawnRoleDataReceiver *)CONCAT13(1,spawnRoleDataReceiver._0_3_)
           , (pAVar14->_1).typeHierarchy[bVar15 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
          spawnRoleDataReceiver = (SpawnRoleDataReceiver *)((uint)spawnRoleDataReceiver & 0xffffff);
        }
        pAVar16 = (AvatarUIHandlerRemote *)(this->fields)._.avatar;
        pAVar17 = (AvatarUIHandlerRemote *)0x0;
        if (spawnRoleDataReceiver._3_1_ != '\0') {
          pAVar17 = pAVar16;
        }
        if (pAVar17 == (AvatarUIHandlerRemote *)0x0) goto code_?;
        if ((bVar6 < bVar15) ||
           ((pAVar16->klass->_1).typeHierarchy[bVar15 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pAVar17 = (AvatarUIHandlerRemote *)0x0;
        if (bVar7) {
          pAVar17 = pAVar16;
        }
        if (pAVar17 == (AvatarUIHandlerRemote *)0x0) goto code_?;
        pSVar18 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                            (pAVar17,(MethodInfo *)0x0);
        if (pSVar18 != (ShieldBar *)0x0) {
          func_?();
          pIVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          if (pIVar19 == (IList_1_VoxelHit_ *)idFrom) {
code_?:
            this_04 = (this->fields).avatarLocalModes;
            if (this_04 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
              spawnRoleDataReceiver =
                   (SpawnRoleDataReceiver *)((uint)spawnRoleDataReceiver._1_3_ << 8);
code_?:
              MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                        (this_04,(AvatarRuntimeState__Enum)spawnRoleDataReceiver,(MethodInfo *)0x0);
              this_00 = (this->fields)._._._.gameObject;
              if (this_00 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_00,1,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pPVar20 = (PrefabPool *)
                          MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pPVar20 != (PrefabPool *)0x0) {
                  this_05 = (MVLocalObjectController *)
                            PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar20,(MethodInfo *)0x0);
                  if (this_05 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
                              (this_05,(ILocalObject *)this,(MethodInfo *)0x0);
                    if (idFrom < 1) {
code_?:
                      pTVar21 = (this->fields)._._._.transform;
                      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000
                           ) != 0) && ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
                        func_?();
                      }
                      CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                                (pTVar21,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (pMVar22 != (MVNetworkGame *)0x0) {
                        pPVar20 = (PrefabPool *)
                                  MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar22,(MethodInfo *)0x0);
                        if (pPVar20 != (PrefabPool *)0x0) {
                          this_06 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                              (pPVar20,(MethodInfo *)0x0);
                          this_07 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                     *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (this_07,(Object *)this,
                                     MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__,
                                     (MethodInfo *)0x0);
                          if (this_06 != (ObjectiveArrow *)0x0) {
                            BoostController::BoostController_SubscribeToBoostChanged
                                      ((BoostController *)this_06,
                                       BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)this_07,
                                       (MethodInfo *)0x0);
                            MVAvatarLocal_OnHealthBoostedChanged(this,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                    else {
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pMVar23 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                          ((MethodInfo *)0x0);
                      if (pMVar23 != (MainCameraManager *)0x0) {
                        pMVar24 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                            (pMVar23,(MethodInfo *)0x0);
                        if (pMVar24 != (MVCameraBase *)0x0) {
                          (*(code *)(pMVar24->klass->vtable).Reset.method)();
                          pMVar23 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                              ((MethodInfo *)0x0);
                          if (pMVar23 != (MainCameraManager *)0x0) {
                            pMVar24 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                                (pMVar23,(MethodInfo *)0x0);
                            if (pMVar24 != (MVCameraBase *)0x0) {
                              pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_get_transform
                                                  ((Component_1 *)pMVar24,(MethodInfo *)0x0);
                              if (pMVar5 != (MVWorldObject *)0x0) {
                                pQVar12 = (Quaternion *)
                                          (*(code *)(pMVar5->klass->vtable).get_Rotation.method)();
                                if (pTVar21 != (Transform *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_rotation(pTVar21,*pQVar12,(MethodInfo *)0x0);
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
          else {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar22 != (MVNetworkGame *)0x0) {
              this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                     ((InventoryItemPreviewer *)pMVar22,(MethodInfo *)0x0);
              if (this_03 !=
                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
                pOVar25 = System.dll::System::Collections::Generic::
                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                          ::Single,System::Object]::
                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                    (this_03,(MethodInfo *)0x0);
                if (pOVar25 == (Object *)0x2) goto code_?;
                this_04 = (this->fields).avatarLocalModes;
                if (this_04 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
                  spawnRoleDataReceiver =
                       (SpawnRoleDataReceiver *)CONCAT31(spawnRoleDataReceiver._1_3_,1);
                  goto code_?;
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
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AttachBody
               (MVAvatarLocal *this,MVBody *newBody,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&DAT_?;
  IStack_2.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_2;
  ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
  ppIVar4 = (Il2CppType **)&stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    ppIVar4 = ppIStack_3;
  }
  ppIStack_3 = ppIVar4;
  CStack_5.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_5.monitor = (MonitorData *)0x0;
  CStack_5.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_5.fields.syncRoot = (Object *)0x0;
  func_?();
  pMVar6 = (MethodInfo *)&UNK_?;
  pIStack_7 = (Il2CppType *)&stack0xffffffb8;
  ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
  MVAvatar::MVAvatar_AttachBody((MVAvatar *)this,newBody,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    bVar8 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      if (newBody == (MVBody *)0x0) goto code_?;
      bVar8 = 0;
    }
    else {
      if (newBody == (MVBody *)0x0) goto code_?;
      bVar8 = 1;
    }
    MVBody::MVBody_set_Visible(newBody,bVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      CStack_5.monitor = (MonitorData *)TypeInfo__MVGameControllerBase;
      CStack_5.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&UNK_?;
      func_?();
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)newBody,(MethodInfo *)0x0);
    if (pMVar9 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                (pMVar9,(int32_t)pIVar10,0,(Transform *)0x0,pMVar6);
      this_01 = (List_1_UnityEngine_Color32_ *)
                MVGroup::MVGroup_get_Children((MVGroup *)newBody,(MethodInfo *)0x0);
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_01,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                           );
        CStack_5.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
        CStack_5.monitor = (MonitorData *)pLVar11->next;
        CStack_5.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
        CStack_5.fields.syncRoot = (Object *)(pLVar11->current).rgba;
        uStack_1 = 0;
        while( true ) {
          pMVar6 = (MethodInfo *)&CStack_5;
          cVar12 = func_?();
          if (cVar12 == '\0') {
            (pIStack_7->data).__klassIndex = 0x85;
            uStack_1 = 0xffffffff;
            func_?(&CStack_5);
            *unaff_FS_OFFSET = IStack_2;
            return;
          }
          this_02 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_5,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                              );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if ((this_02 == (Collection_1_VoxelHit_ *)0x0) ||
             (pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0),
             pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) break;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                    (pMVar9,(int32_t)pIVar10,0,(Transform *)0x0,pMVar6);
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


/* Void AvatarCommandsOnMoveBodyToSafeSpot(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnMoveBodyToSafeSpot
               (MVAvatarLocal *this,int32_t safeSpotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x38);
  uStack_2 = 0;
  fStack_3 = 0.0;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Move_to_safe_spot,(MethodInfo *)0x0);
  pSVar4 = (this->fields).spawnRoleDataReceiver;
  if ((pSVar4 != (SpawnRoleDataReceiver *)0x0) &&
     (this_00 = (pSVar4->fields).lastRespawnType,
     this_00 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleReceiverVariable`1[LastRespawnType]::
    SpawnRoleReceiverVariable_1_LastRespawnType__set_Value
              (this_00,LastRespawnType__Enum_Revive,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
              );
    pSVar4 = (this->fields).spawnRoleDataReceiver;
    if ((pSVar4 != (SpawnRoleDataReceiver *)0x0) &&
       (pSVar5 = (pSVar4->fields).reviveState,
       pSVar5 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleReceiverVariable`1[System::Single]::
      SpawnRoleReceiverVariable_1_System_Single__get_Value
                ((SpawnRoleReceiverVariable_1_System_Single_ *)pSVar5,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                );
      if (this_02 != (ReviveState *)0x0) {
        ReviveState::ReviveState_SetSafeGroundedDataIndex(this_02,safeSpotIndex,(MethodInfo *)0x0);
        pSVar4 = (this->fields).spawnRoleDataReceiver;
        if ((pSVar4 != (SpawnRoleDataReceiver *)0x0) &&
           (pSVar5 = (pSVar4->fields).reviveState,
           pSVar5 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Single]::
          SpawnRoleReceiverVariable_1_System_Single__get_Value
                    ((SpawnRoleReceiverVariable_1_System_Single_ *)pSVar5,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                    );
          if (this_03 != (ReviveState *)0x0) {
            pSVar6 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                               ((SafeSpotData *)&stack0xffffff58,this_03,(MethodInfo *)0x0);
            fStack_1 = (pSVar6->Position).x;
            fStack_7 = (pSVar6->Position).y;
            fStack_8 = (pSVar6->Position).z;
            fStack_9 = (pSVar6->Rotation).x;
            fStack_10 = (pSVar6->Rotation).y;
            fStack_11 = (pSVar6->Rotation).z;
            fStack_12 = (pSVar6->Rotation).w;
            fStack_13 = (pSVar6->CameraPosition).x;
            fStack_14 = (pSVar6->CameraPosition).y;
            fStack_15 = (pSVar6->CameraPosition).z;
            fStack_16 = (pSVar6->CameraRotation).x;
            fStack_17 = (pSVar6->CameraRotation).y;
            uStack_18._0_4_ = (pSVar6->CameraRotation).z;
            uStack_18._4_4_ = (pSVar6->CameraRotation).w;
            puVar19 = (undefined8 *)func_?();
            fStack_20 = *(float *)(puVar19 + 1);
            uStack_21 = (undefined4)*puVar19;
            fStack_22 = (float)((ulonglong)*puVar19 >> 0x20);
            puVar19 = (undefined8 *)func_?();
            uStack_23 = *(undefined4 *)(puVar19 + 1);
            uStack_24 = (undefined4)*puVar19;
            uStack_25 = (undefined4)((ulonglong)*puVar19 >> 0x20);
            func_?();
            fVar26 = fStack_3;
            fVar27 = fStack_8;
            fStack_22 = fStack_1;
            fStack_20 = fStack_7;
            uStack_25 = (undefined4)uStack_2;
            uStack_23 = (undefined4)((ulonglong)uStack_2 >> 0x20);
            uVar28 = uStack_2;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
              uVar28 = CONCAT44(uStack_23,uStack_25);
            }
            euler.z = fVar26;
            euler.x = (float)(int)uVar28;
            euler.y = (float)(int)((ulonglong)uVar28 >> 0x20);
            pQVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                               (&QStack_30,euler,(MethodInfo *)0x0);
            position.y = fStack_20;
            position.x = fStack_22;
            position.z = fVar27;
            MVAvatarLocal_SetTransform(this,position,*pQVar29,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_04 != (MainCameraManager *)0x0) {
              this_05 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                  (this_04,(MethodInfo *)0x0);
              if (this_05 != (MVCameraBase *)0x0) {
                this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_05,(MethodInfo *)0x0);
                if (this_06 != (Transform *)0x0) {
                  value.y = fStack_17;
                  value.x = fStack_16;
                  value.z = (float)(undefined4)uStack_18;
                  value.w = uStack_18._4_4_;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (this_06,value,(MethodInfo *)0x0);
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
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void AvatarCommandsOnRespawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnRespawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 == (AvatarRespawnHandler *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this._1_3_ = (undefined3)((uint)pAVar1 >> 8);
  if ((pAVar1->fields).shouldRespawnAsGhost == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar3 != (FlagDebriefingControl *)0x0) {
      this_00 = (pAVar1->fields).mvAvatar;
      if ((pFVar3->fields).IsInFlagDebriefing == 0) {
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
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar3 != (FlagDebriefingControl *)0x0) {
      if ((pFVar3->fields).IsInFlagDebriefing != 0) {
        return;
      }
      this_00 = (pAVar1->fields).mvAvatar;
      if (this_00 != (MVAvatarLocal *)0x0) {
        this = (MVAvatarLocal *)CONCAT31(this._1_3_,9);
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AvatarCommandsOnSetToSpawnMode() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnSetToSpawnMode
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_SetMode_to_playing_from_SafeSpot,(MethodInfo *)0x0);
  MVAvatarLocal_AvatarCommandsOnMoveBodyToSafeSpot(this,safeSpotIndex,(MethodInfo *)0x0);
  this_00 = (CrossPlatformInputManager_VirtualButton *)(this->fields).avatarRespawnHandler;
  if (this_00 != (CrossPlatformInputManager_VirtualButton *)0x0) {
    UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
    CrossPlatformInputManager_VirtualButton_set_matchWithInputManager(this_00,0,(MethodInfo *)0x0);
    this_01 = (this->fields).avatarRespawnHandler;
    if (this_01 != (AvatarRespawnHandler *)0x0) {
      AvatarRespawnHandler::AvatarRespawnHandler_Respawn(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnReadyScreenShot() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnReadyScreenShot
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields)._.avatar;
  if (this_00 != (Avatar_1 *)0x0) {
    this_01 = (AvatarFader *)
              System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System
              ::Object]::
              Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (AvatarFader *)0x0) {
      AvatarFader::AvatarFader_SetTransparency(this_01,1.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing(WinningConditionType) */

void Assembly-CSharp.dll::MVAvatarLocal::
     MVAvatarLocal_AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing
               (MVAvatarLocal *this,WinningConditionType__Enum winningConditionType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winningConditionType == WinningConditionType__Enum_TimeAttackFlag) {
    pMVar1 = (this->fields).avatarLocalModes;
    if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?,unaff_EBP);
        cRam_? = '\x01';
      }
      pMVar2 = (pMVar1->fields).currentMode;
      this = (MVAvatarLocal *)CONCAT31((int3)((uint)pMVar1 >> 8),(pMVar1->fields).currentState);
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(code *)(pMVar2->klass->vtable).__unknown.method)
                  (pMVar2,7,(pMVar2->klass->vtable).__unknown_1.methodPtr,unaff_ESI);
        this_00 = (pMVar1->fields).avatarModes;
        if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
          pMVar2 = (MVAvatarLocal_AvatarMode *)
                   mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[AvatarRuntimeState,System::Object]::
                   Dictionary_2_AvatarRuntimeState_System_Object__get_Item
                             ((Dictionary_2_AvatarRuntimeState_System_Object_ *)this_00,
                              AvatarRuntimeState__Enum_TimeAttackFlagDebriefing,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                             );
          (pMVar1->fields).currentState = 7;
          (pMVar1->fields).currentMode = pMVar2;
          if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
            (*(code *)(pMVar2->klass->vtable).Activate.method)
                      (pMVar2,this,(Il2CppClass *)pMVar2->klass[1]._0.image);
            return;
          }
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_01,StringLiteral_Not_implemented,(MethodInfo *)0x0);
    func_?(this_01,0);
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarStateChangedHandler
               (MVAvatarLocal *this,Object *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_AvatarStateChangedHandler((MVAvatar *)this,a,(MethodInfo *)0x0);
  this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                      ((DayNightCycle *)this,(MethodInfo *)0x0);
  if (this_01 == (CelestialParam *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
              ((Object_1 *)this_01,(MethodInfo *)0x0);
    if (a == (Object *)0x0) goto code_?;
    if ((a->klass->_0).element_class != (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    goto code_?;
    func_?();
    pSVar1 = (String *)&UNK_?;
    piVar2 = (int *)func_?();
    if (piVar2 == (int *)0x0) goto code_?;
    str3 = (String *)(**(code **)(*piVar2 + 0xd8))();
    func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_avatar__,pSVar1,StringLiteral____a__,str3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    if ((pSVar3 == (SpawnRoleDataReceiver *)0x0) ||
       (this_00 = (pSVar3->fields).spawnRoleMode,
       this_00 == (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
    goto code_?;
    if ((a->klass->_0).element_class == (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    {
      pSVar4 = (SpawnRoleModeType__Enum *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleReceiverVariable`1[MV::Common::SpawnRoleModeType]::
      SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType__set_Value
                (this_00,*pSVar4,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
                );
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void BeforeVehicleEntered() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_BeforeVehicleEntered
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).triggerHandler;
  if (this_00 == (MVTriggerHandler *)0x0) {
    iStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_1 = -1;
  puStack_3 = &DAT_?;
  pOStack_4 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_4;
  pOStack_5 = (Object__Array *)&stack0xffffffa4;
  pOVar6 = (Object__Array *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pOVar6 = pOStack_5;
  }
  pOStack_5 = pOVar6;
  auStack_7._16_4_ = (Object *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_7._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_7._12_4_ = 0;
  func_?();
  this_01 = (this_00->fields).triggerBoxEvents;
  (this_00->fields).wasResetThisFrame = 1;
  pLStack_9 = (Link__Array *)&stack0xffffffa4;
  pOStack_5 = (Object__Array *)&stack0xffffffa4;
  if (this_01 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
    pLStack_9 = (Link__Array *)&stack0xffffffa4;
    pOStack_5 = (Object__Array *)&stack0xffffffa4;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    auStack_7._0_4_ = pDVar10->dictionary;
    auStack_7._4_4_ = pDVar10->next;
    auStack_7._8_4_ = pDVar10->stamp;
    auStack_7._12_4_ = (pDVar10->current).key;
    auStack_7._16_4_ = (pDVar10->current).value;
    iStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                            );
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
      ;
      this_02 = (TriggerBoxEvents *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pWStack_13 = (WinningConditionType__Enum__Array *)(this_00->fields).triggingCollider;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pWStack_13,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        (this_00->fields).triggingCollider = (Collider *)pMVar15;
      }
      unaff_EDI = 0;
      if (this_02 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                (this_02,(this_00->fields).triggingCollider,(MethodInfo *)0x0);
    }
    unaff_EDI = 0;
    pLStack_9->klass = (Link__Array__Class *)0x51;
    iStack_1 = -1;
    func_?();
    pDVar16 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this_00->fields).newTriggerBoxEvents;
    if (pDVar16 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (pDVar16,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar16 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this_00->fields).triggerBoxEvents;
      if (pDVar16 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDVar16,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        *unaff_FS_OFFSET = pOStack_4;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 CalculateVehicleExitMomentum(Vector3) */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_CalculateVehicleExitMomentum
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,Vector3 velocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = velocity._0_8_;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = velocity.z;
  a.x = (float)uVar1;
  a.y = SUB84(uVar1,4);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     ((Vector3 *)&stack0xffffffec,a,fVar2,(MethodInfo *)0x0);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     ((Vector3 *)&stack0xffffffec,*pVVar3,2.0,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  fVar2 = pVVar3->z;
  puVar5 = &UNK_?;
  fVar6 = (float10)func_?();
  fVar7 = (float10)_UNK_?;
  __return_storage_ptr__->x = (float)uVar4;
  __return_storage_ptr__->y = (float)(fVar6 / fVar7 + (float10)(float)puVar5);
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void DeActivate(Int32, SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_DeActivate
               (MVAvatarLocal *this,int32_t idTo,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarLocalModes;
  if (this_00 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    AVar1 = MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
                      (this_00,(MethodInfo *)0x0);
    this = (MVAvatarLocal *)CONCAT31(this._1_3_,(char)AVar1);
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_00,(AvatarRuntimeState__Enum)this,(MethodInfo *)0x0);
    pAVar2 = (this_02->fields).avatarEquipable;
    if (pAVar2 != (AvatarEquipable *)0x0) {
      (*(code *)(pAVar2->klass->vtable).Unequip.method)();
      pAVar3 = (this_02->fields).interactableLocal;
      if (pAVar3 != (AvatarInteractable *)0x0) {
        (*(code *)(pAVar3->klass->vtable).ClearModifiers.method)();
        MVAvatarLocal_UnsubscribeFromExternalEvents(this_02,(MethodInfo *)0x0);
        this_01 = (this_02->fields)._._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          (this_02->fields).spawnRoleDataReceiver = (SpawnRoleDataReceiver *)0x0;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_03 = (PrefabPool *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_03 != (PrefabPool *)0x0) &&
             (this_04 = (MVLocalObjectController *)
                        PrefabPool::PrefabPool_get_MVSmokePrefab(this_03,(MethodInfo *)0x0),
             this_04 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_RemoveAvatarLocalObject
                      (this_04,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pTVar5 = (TransformNetworkManager *)
                       UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                       TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                       TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                 ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                  (MethodInfo *)0x0);
              woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
              if (pTVar5 != (TransformNetworkManager *)0x0) {
                pMVar6 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                   (pTVar5,(int32_t)woID,(MethodInfo *)0x0);
                if (pMVar6 == (MVNetworkObject *)0x0) {
                  return;
                }
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                          ((Object *)StringLiteral_Removing_network_object_again_as,
                           (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 != (MVNetworkGame *)0x0) &&
                   (pTVar5 = (TransformNetworkManager *)
                             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                        (MethodInfo *)0x0), pTVar5 != (TransformNetworkManager *)0x0
                   )) {
                  TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                            (pTVar5,(this_02->fields)._._._._.id,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Die() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Die(MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Die,(MethodInfo *)0x0);
  bVar1 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)this,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Goto_dead_state,(MethodInfo *)0x0);
  pMVar2 = (this->fields)._.shield;
  if (pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
  (*(code *)(pMVar2->klass->vtable).set_Value.method)();
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    bVar1 = 0;
code_?:
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    if (((pSVar3 == (SpawnRoleDataReceiver *)0x0) ||
        (pSVar4 = (pSVar3->fields).reviveState,
        pSVar4 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) ||
       (Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Single]::
        SpawnRoleReceiverVariable_1_System_Single__get_Value
                  ((SpawnRoleReceiverVariable_1_System_Single_ *)pSVar4,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                  ), this_05 == (ReviveState *)0x0)) goto code_?;
    ReviveState::ReviveState_ResetSafePostions(this_05,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    if (((pSVar3 == (SpawnRoleDataReceiver *)0x0) ||
        (pSVar4 = (pSVar3->fields).reviveState,
        pSVar4 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) ||
       (Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Single]::
        SpawnRoleReceiverVariable_1_System_Single__get_Value
                  ((SpawnRoleReceiverVariable_1_System_Single_ *)pSVar4,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                  ), this_02 == (ReviveState *)0x0)) goto code_?;
    bVar1 = ReviveState::ReviveState_get_CanSafelySpawn(this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    this_00 = (this->fields).avatarMotor;
    if (this_00 == (AvatarMotor *)0x0) goto code_?;
    this_03 = (SizeState *)
              ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
              ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)this_00,
                         (MethodInfo *)0x0);
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    if (((pSVar3 == (SpawnRoleDataReceiver *)0x0) ||
        (pSVar4 = (pSVar3->fields).reviveState,
        pSVar4 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) ||
       (Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Single]::
        SpawnRoleReceiverVariable_1_System_Single__get_Value
                  ((SpawnRoleReceiverVariable_1_System_Single_ *)pSVar4,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                  ), this_04 == (ReviveState *)0x0)) goto code_?;
    pSVar5 = ReviveState::ReviveState_get_SafeGroundedData
                       ((SafeSpotData *)&stack0xffffff8c,this_04,(MethodInfo *)0x0);
    if (this_03 == (SizeState *)0x0) goto code_?;
    bVar1 = SizeState::SizeState_GetIsValidScaledPosition
                      (this_03,pSVar5->Position,1.0,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
  }
  this_01 = (this->fields).avatarLocalModes;
  if (bVar1 == 0) {
    if (this_01 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
      MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                (this_01,AvatarRuntimeState__Enum_Dead,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_01 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_01,AvatarRuntimeState__Enum_Revive,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_FixedUpdate
          (MVAvatarLocal *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if ((pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) &&
     (pMVar2 = (pMVar1->fields).currentMode, pMVar2 != (MVAvatarLocal_AvatarMode *)0x0)) {
    (*(code *)(pMVar2->klass->vtable).__unknown_1.method)
              (pMVar2,movementMap,(pMVar2->klass->vtable).__unknown_2.methodPtr);
    return movementMap;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar4 = (IInputToPlayerMovement *)(*pcVar3)();
  return pIVar4;
}


/* Void GameEventManagerOnOnFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameEventManagerOnOnFirstTimeEvent
               (MVAvatarLocal *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (firstTimeEvent != FirstTimeEvent__Enum_PM_LobbyState) {
    return;
  }
  this_00 = (this->fields)._._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (this_01 = (ObjectPool_1_System_Object_ *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (this_00,
                           FirstTimeAvatarJumpAnimator_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeAvatarJumpAnimator>__
                          ), this_01 != (ObjectPool_1_System_Object_ *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
    ObjectPool_1_System_Object__set_countAll(this_01,(int32_t)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GameEventManagerOnOnXpRewarded(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameEventManagerOnOnXpRewarded
               (MVAvatarLocal *this,int32_t obj,MethodInfo *method)

{
  pAVar1 = MVAvatarLocal_get_AvatarLocal(this,(MethodInfo *)0x0);
  if (pAVar1 == (AvatarLocal *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnXpProgressing,(MethodInfo *)0x0);
  if (pMRam0000000c != (MVAvatar *)0x0) {
    this_00 = MVAvatar::MVAvatar_get_Body(pMRam0000000c,(MethodInfo *)0x0);
    if (this_00 != (MVBody *)0x0) {
      this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this_00,(MethodInfo *)0x0);
      if (this_01 != (CelestialParam *)0x0) {
        xp = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       ((GameObject *)this_01,(MethodInfo *)0x0);
        AvatarLocal::AvatarLocal_CreateXPParticlesWithLayer
                  ((AvatarLocal *)0x0,xp,xp,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GameStateTypeOnOnChange(MVGameStateType) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameStateTypeOnOnChange
               (MVAvatarLocal *this,MVGameStateType__Enum gameStateType,MethodInfo *method)

{
  if (gameStateType != MVGameStateType__Enum_RoundEnded) {
    return;
  }
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    if ((pMVar1->fields).currentState == 0) {
      return;
    }
    if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pMVar2 = (pMVar1->fields).currentMode;
      this = (MVAvatarLocal *)CONCAT31((int3)((uint)pMVar1 >> 8),(pMVar1->fields).currentState);
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(code *)(pMVar2->klass->vtable).__unknown.method)
                  (pMVar2,8,(pMVar2->klass->vtable).__unknown_1.methodPtr);
        this_00 = (pMVar1->fields).avatarModes;
        if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
          pMVar2 = (MVAvatarLocal_AvatarMode *)
                   mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[AvatarRuntimeState,System::Object]::
                   Dictionary_2_AvatarRuntimeState_System_Object__get_Item
                             ((Dictionary_2_AvatarRuntimeState_System_Object_ *)this_00,
                              AvatarRuntimeState__Enum_Wait,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                             );
          (pMVar1->fields).currentState = 8;
          (pMVar1->fields).currentMode = pMVar2;
          if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
            (*(code *)(pMVar2->klass->vtable).Activate.method)
                      (pMVar2,this,(Il2CppClass *)pMVar2->klass[1]._0.image);
            return;
          }
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 GetBoostedHealth(Int32) */

int32_t Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetBoostedHealth
                  (MVAvatarLocal *this,int32_t unBoostedMaxHealth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).boostedHealthMultiplier;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                    ((float)unBoostedMaxHealth * fVar1,(MethodInfo *)0x0);
  return iVar2;
}


/* Single GetColliderRadius() */

float Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetColliderRadius
                (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarMotor;
  if (this_00 != (AvatarMotor *)0x0) {
    pOVar1 = ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
             ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)this_00,
                        (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)(in_stack_2 + 0xc) != 0) {
        return *(float *)(*(int *)(in_stack_2 + 0xc) + 0x1c);
      }
      func_?();
      pcVar3 = (code *)swi(3);
      fVar4 = (float10)(*pcVar3)();
      return (float)fVar4;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Dictionary`2[System.Object,System.Object] GetCurrentItemState() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetCurrentItemState
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.CurrentItem;
  if (this_00 == (MVRuntimeDataVariable *)0x0) {
    func_?(0);
    pDVar1 = extraout_EDX;
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar3) {
      pDVar4 = pDVar1;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return pDVar4;
    }
  }
  func_?(pDVar1,unaff_ESI);
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Transform GetSpawnTransform() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetSpawnTransform
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pPVar1 = (PrefabPool *)MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)this_01,(MethodInfo *)0x0)
      ;
      pSVar2 = (this->fields).spawnRoleDataReceiver;
      if (pPVar1 == (PrefabPool *)0x0) {
        if ((pSVar2 != (SpawnRoleDataReceiver *)0x0) &&
           (pSVar3 = (pSVar2->fields).lastRespawnType,
           pSVar3 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[LastRespawnType]::
          SpawnRoleReceiverVariable_1_LastRespawnType__set_Value
                    (pSVar3,LastRespawnType__Enum_Spawnpoint,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                    );
          if ((this->fields).spawnWorldObjectId != -1) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
            bVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                              (pMVar4,(this->fields).spawnWorldObjectId,
                               (MVWorldObject **)&stack0xfffffff8,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              iVar6 = func_?();
              if (iVar6 != 0) {
                pPVar1 = (PrefabPool *)func_?();
                pMVar7 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
                return (Transform *)pMVar7;
              }
              goto code_?;
            }
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_Spawn_role_creator_was_destroyed,(MethodInfo *)0x0);
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
            pPVar1 = (PrefabPool *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                               (pMVar4,(MethodInfo *)0x0);
            if (pPVar1 != (PrefabPool *)0x0) {
              pMVar7 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
              return (Transform *)pMVar7;
            }
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_No_spawn_point_found_on_planet_,(MethodInfo *)0x0);
            return (Transform *)0x0;
          }
        }
      }
      else if ((pSVar2 != (SpawnRoleDataReceiver *)0x0) &&
              (pSVar3 = (pSVar2->fields).lastRespawnType,
              pSVar3 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[LastRespawnType]::
        SpawnRoleReceiverVariable_1_LastRespawnType__set_Value
                  (pSVar3,LastRespawnType__Enum_Checkpoint,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                  );
        pMVar7 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
        return (Transform *)pMVar7;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pTVar9 = (Transform *)(*pcVar8)();
  return pTVar9;
}


/* GamePassTier GetTierRequirement() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetTierRequirement
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    GVar2 = (*pcVar1)();
    return GVar2;
  }
  bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                    (this_00,(this->fields).spawnWorldObjectId,(MVWorldObject **)&stack0xfffffff8,
                     (MethodInfo *)0x0);
  GVar2 = CONCAT31(extraout_var,bVar3);
  if ((bVar3 != 0) && (unaff_ESI != (MVWorldObject *)0x0)) {
    bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((unaff_ESI->klass->_1).naturalAligment < bVar4) ||
       ((MVAvatarSpawnRoleCreator__Class *)(unaff_ESI->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVWorldObject *)0x0;
    if (bVar5) {
      pMVar6 = unaff_ESI;
    }
    GVar2 = GamePassTier__Enum_Tier0;
    if (pMVar6 != (MVWorldObject *)0x0) {
      iVar7 = func_?();
      if (iVar7 != 0) {
        pMVar6 = (MVWorldObject *)0x0;
        this_01 = (MVAvatarSpawnRoleCreator *)
                  func_?(unaff_ESI,TypeInfo__MVAvatarSpawnRoleCreator);
        GVar2 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                          (this_01,(MethodInfo *)pMVar6);
        return GVar2;
      }
      goto code_?;
    }
  }
  return GVar2 & 0xffffff00;
}


/* Void HandleBlinkerVisibility() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_HandleBlinkerVisibility
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields)._.avatarPickupOwner;
  if (this_00 != (AvatarPickupOwner *)0x0) {
    this_01 = (PickupItem *)
              GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_00,(MethodInfo *)0x0);
    if (this_01 != (PickupItem *)0x0) {
      bVar1 = PickupItem::PickupItem_get_IsInFirstPersonMode(this_01,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.body;
      if (bVar1 == 0) {
        if (pMVar2 != (MVBody *)0x0) {
          if ((*(int *)(in_stack_3 + 0xf4) != 0) &&
             (iVar4 = *(int *)(*(int *)(in_stack_3 + 0xf4) + 0x1c), iVar4 != 0)) {
            *(undefined1 *)(iVar4 + 0x14) = 1;
            return;
          }
          func_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (pMVar2 != (MVBody *)0x0) {
        if ((*(int *)(in_stack_3 + 0xf4) != 0) &&
           (iVar4 = *(int *)(*(int *)(in_stack_3 + 0xf4) + 0x1c), iVar4 != 0)) {
          *(undefined1 *)(iVar4 + 0x14) = 0;
          return;
        }
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Initialize
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__WorldObjectSkillDataManager);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  (this->fields)._.skillDataManager = (WorldObjectSkillDataManager *)this_02;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((((uint)(
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  values = (Dictionary_2_System_Object_System_Object_ *)
           MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
  if (TypeInfo__MVAvatarLocal->static_fields->__f__mg_cache0 ==
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
       *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
              );
    TypeInfo__MVAvatarLocal->static_fields->__f__mg_cache0 =
         (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *)pUVar2;
  }
  settings = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTools::KogamaSettingTools_CreateFromValues
                       (values,(KogamaSettingWrapperBase *)values,
                        TypeInfo__MVAvatarLocal->static_fields->__f__mg_cache0,(MethodInfo *)0x0);
  if (this_02 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    WorldObjectSkillDataManager::WorldObjectSkillDataManager_Initialize
              ((WorldObjectSkillDataManager *)this_02,settings,(MethodInfo *)0x0);
    MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._._.gameObject;
    if (pGVar3 != (GameObject *)0x0) {
      pAVar4 = (AvatarMotor *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                         (pGVar3,
                          AvatarMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarMotor>__
                         );
      (this->fields).avatarMotor = pAVar4;
      pGVar3 = (this->fields)._._._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        pMVar5 = (MVTriggerHandler *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                           (pGVar3,
                            MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                           );
        (this->fields).triggerHandler = pMVar5;
        pGVar3 = (this->fields)._._._.gameObject;
        if (pGVar3 != (GameObject *)0x0) {
          interactableLocal =
               (AvatarInteractable *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                         (pGVar3,
                          AvatarInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarInteractable>__
                         );
          if (interactableLocal != (AvatarInteractable *)0x0) {
            (*(code *)(interactableLocal->klass->vtable).Init.method)();
            (this->fields).interactableLocal = interactableLocal;
            pAVar6 = (interactableLocal->fields).OnDamageTaken;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__MVAvatarLocal__RelayDamageEvent_float__MVPlayer__MV__Common__PlayerKilledByType_
                       ,
                       MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
                      );
            pAVar7 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar6,(Delegate *)pUVar2,(MethodInfo *)0x0);
            pAVar6 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
            if (pAVar7 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
              if (pAVar7->klass ==
                  TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>) {
                pAVar6 = pAVar7;
              }
              if (pAVar6 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0)
              goto code_?;
            }
            (interactableLocal->fields).OnDamageTaken = pAVar6;
            pAVar8 = (this->fields).interactableLocal;
            if (pAVar8 != (AvatarInteractable *)0x0) {
              pAVar9 = (pAVar8->fields).OnNewSafePosition;
              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar2,(Object *)this,
                         MethodInfo__MVAvatarLocal__RelayNewSafePosition_UnityEngine__Vector3_,
                         MethodInfo__System__Action<UnityEngine::Vector3>__Action_System__Object__void__
                        );
              pAVar10 = (Action_1_UnityEngine_Vector3_ *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pAVar9,(Delegate *)pUVar2,(MethodInfo *)0x0);
              pAVar9 = (Action_1_UnityEngine_Vector3_ *)0x0;
              if (pAVar10 != (Action_1_UnityEngine_Vector3_ *)0x0) {
                if (pAVar10->klass == TypeInfo__System__Action<UnityEngine::Vector3>) {
                  pAVar9 = pAVar10;
                }
                if (pAVar9 == (Action_1_UnityEngine_Vector3_ *)0x0) goto code_?;
              }
              (pAVar8->fields).OnNewSafePosition = pAVar9;
              pGVar3 = (this->fields)._._._.gameObject;
              if (pGVar3 != (GameObject *)0x0) {
                pAVar11 = (AvatarEquipable *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_85
                                    (pGVar3,
                                     AvatarEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarEquipable>__
                                    );
                (this->fields).avatarEquipable = pAVar11;
                if (pAVar11 != (AvatarEquipable *)0x0) {
                  AvatarEquipable::AvatarEquipable_Init
                            (pAVar11,(MVInteractableBase *)(this->fields).interactableLocal,
                             (this->fields)._.CurrentItem,(this->fields)._.skillDataManager,
                             (MethodInfo *)0x0);
                  pAVar4 = (this->fields).avatarMotor;
                  if (pAVar4 != (AvatarMotor *)0x0) {
                    AvatarMotor::AvatarMotor_Init
                              (pAVar4,interactableLocal,
                               (this->fields)._.characterControllerCenterOffset,
                               (MVWorldObjectClient *)this,(this->fields)._.skillDataManager,
                               (MethodInfo *)0x0);
                    (this->fields).pickupOwner = (this->fields)._.avatarPickupOwner;
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    MVar12 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                       ((MethodInfo *)0x0);
                    if (MVar12 == MVGameMode__Enum_CharacterEditor) {
code_?:
                      pAVar13 = (this->fields).pickupOwner;
                      if (pAVar13 != (AvatarPickupOwner *)0x0) {
                        pMVar14 = (pAVar13->fields)._.onEquipItem;
                        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar2,(Object *)this,
                                   MethodInfo__MVAvatarLocal__OnEquipItem_PickupItem_,
                                   (MethodInfo *)0x0);
                        pMVar15 = (MVPickupOwner_OnEquipItemDelegate *)
                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pMVar14,(Delegate *)pUVar2,
                                             (MethodInfo *)0x0);
                        pMVar14 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
                        if (pMVar15 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                          if (pMVar15->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
                            pMVar14 = pMVar15;
                          }
                          if (pMVar14 == (MVPickupOwner_OnEquipItemDelegate *)0x0)
                          goto code_?;
                        }
                        (pAVar13->fields)._.onEquipItem = pMVar14;
                        pAVar13 = (this->fields).pickupOwner;
                        if (pAVar13 != (AvatarPickupOwner *)0x0) {
                          pAVar16 = (pAVar13->fields)._.OnHolsteredChanged;
                          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                    *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (pUVar2,(Object *)this,
                                     MethodInfo__MVAvatarLocal__OnHolsteredChanged_bool_,
                                     MethodInfo__System__Action<bool>__Action_System__Object__void__
                                    );
                          pAVar17 = (Action_1_Boolean_ *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar16,(Delegate *)pUVar2,
                                               (MethodInfo *)0x0);
                          pAVar16 = (Action_1_Boolean_ *)0x0;
                          if (pAVar17 != (Action_1_Boolean_ *)0x0) {
                            if (pAVar17->klass == TypeInfo__System__Action<bool>) {
                              pAVar16 = pAVar17;
                            }
                            if (pAVar16 == (Action_1_Boolean_ *)0x0) goto code_?;
                          }
                          (pAVar13->fields)._.OnHolsteredChanged = pAVar16;
                          this_04 = (MVAvatarLocal_AvatarLocalModes *)func_?();
                          MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
                                    (this_04,this,(MethodInfo *)0x0);
                          (this->fields).avatarLocalModes = this_04;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pMVar18 = (this->fields)._.Health;
                          if (pMVar18 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                            fVar19 = (float10)(*(code *)(pMVar18->klass->vtable).get_Value.method)()
                            ;
                            pMVar18 = (this->fields)._.Health;
                            (this->fields).previousHealth = (float)fVar19;
                            if (pMVar18 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                              pMVar20 = (pMVar18->fields)._.OnChange;
                              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                        *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                              UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                              SceneManagement::Scene]::
                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                        (pUVar2,(Object *)this,
                                         MethodInfo__MVAvatarLocal___InitializeHealth_m__1_System__Object_
                                         ,(MethodInfo *)0x0);
                              pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                        mscorlib.dll::System::Delegate::Delegate_Combine
                                                  ((Delegate *)pMVar20,(Delegate *)pUVar2,
                                                   (MethodInfo *)0x0);
                              pMVar20 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                              if (pMVar21 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                if (pMVar21->klass ==
                                    TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                  pMVar20 = pMVar21;
                                }
                                if (pMVar20 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                                goto code_?;
                              }
                              bVar1 = cRam_? == '\0';
                              (pMVar18->fields)._.OnChange = pMVar20;
                              if (bVar1) {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pMVar22 = (this->fields)._.shield;
                              if (pMVar22 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                fVar19 = (float10)(*(code *)(pMVar22->klass->vtable).get_Value.
                                                            method)();
                                pMVar22 = (this->fields)._.shield;
                                (this->fields).previousShield = (float)fVar19;
                                if (pMVar22 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                  pMVar20 = (pMVar22->fields)._._.OnChange;
                                  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                            *)func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                  SceneManagement::Scene]::
                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                            (pUVar2,(Object *)this,
                                             MethodInfo__MVAvatarLocal___InitializeShield_m__0_System__Object_
                                             ,(MethodInfo *)0x0);
                                  pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                            mscorlib.dll::System::Delegate::Delegate_Combine
                                                      ((Delegate *)pMVar20,(Delegate *)pUVar2,
                                                       (MethodInfo *)0x0);
                                  pMVar20 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                                  if (pMVar21 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                    if (pMVar21->klass ==
                                        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                      pMVar20 = pMVar21;
                                    }
                                    if (pMVar20 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                                    goto code_?;
                                  }
                                  (pMVar22->fields)._._.OnChange = pMVar20;
                                  MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
                                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                              methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                    func_?();
                                  }
                                  MVar12 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                                     ((MethodInfo *)0x0);
                                  if (MVar12 == MVGameMode__Enum_CharacterEditor) {
code_?:
                                    pAVar4 = (this->fields).avatarMotor;
                                    if (pAVar4 != (AvatarMotor *)0x0) {
                                      pSVar23 = (SizeState *)
                                                ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0
                                                ::
                                                ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                          ((
                                                  ReviveScreenshotGenerator_GenerateTexture_c_Iterator0
                                                  *)pAVar4,(MethodInfo *)0x0);
                                      pAVar11 = (this->fields).avatarEquipable;
                                      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                *)func_?();
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine
                                      ::SceneManagement::Scene]::
                                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                (pUVar2,(Object *)pAVar11,
                                                 MethodInfo__AvatarEquipable__EquipSlapGun_System__Object__System__EventArgs_
                                                 ,(MethodInfo *)0x0);
                                      if (pSVar23 != (SizeState *)0x0) {
                                        SizeState::SizeState_add_EquipSlapGunEvent
                                                  (pSVar23,(EventHandler *)pUVar2,(MethodInfo *)0x0)
                                        ;
                                        pAVar4 = (this->fields).avatarMotor;
                                        if (pAVar4 != (AvatarMotor *)0x0) {
                                          pSVar23 = (SizeState *)
                                                                                                        
                                                  ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0
                                                  ::
                                                  ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            ((
                                                  ReviveScreenshotGenerator_GenerateTexture_c_Iterator0
                                                  *)pAVar4,(MethodInfo *)0x0);
                                          pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                          UnityEngine.CoreModule.dll::UnityEngine::Events::
                                          UnityAction`2[UnityEngine::SceneManagement::
                                          Scene,UnityEngine::SceneManagement::Scene]::
                                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                    (pUVar2,(Object *)this,
                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnCameraScale_System__Object__ScaleArgs_
                                                  ,
                                                  MethodInfo__System__EventHandler<ScaleArgs>__EventHandler_System__Object__void__
                                                  );
                                          if (pSVar23 != (SizeState *)0x0) {
                                            SizeState::SizeState_add_CameraScaleEvent
                                                      (pSVar23,(EventHandler_1_ScaleArgs_ *)pUVar2,
                                                       (MethodInfo *)0x0);
                                            pAVar4 = (this->fields).avatarMotor;
                                            if (pAVar4 != (AvatarMotor *)0x0) {
                                              pSVar23 = (SizeState *)
                                                                                                                
                                                  ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0
                                                  ::
                                                  ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            ((
                                                  ReviveScreenshotGenerator_GenerateTexture_c_Iterator0
                                                  *)pAVar4,(MethodInfo *)0x0);
                                              pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                                              UnityAction`2[UnityEngine::SceneManagement::
                                              Scene,UnityEngine::SceneManagement::Scene]::
                                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                        (pUVar2,(Object *)this,
                                                                                                                  
                                                  MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_
                                                  ,
                                                  MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                                                  );
                                              if (pSVar23 != (SizeState *)0x0) {
                                                SizeState::SizeState_add_UnEquipSlapGunEvent
                                                          (pSVar23,(EventHandler_1_EventArgs_ *)
                                                                   pUVar2,(MethodInfo *)0x0);
                                                pAVar24 = (AvatarModifierPackages *)
                                                          MVWorldObject.dll::MV::WorldObject::
                                                          KogamaSettings::KogamaSettingsCore::
                                                          KogamaSettingTypes::
                                                          KogamaSettingNumericBase`1[System::Single]
                                                          ::
                                                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                                            ((
                                                  KogamaSettingNumericBase_1_System_Single_ *)
                                                  &UNK_?,(MethodInfo *)0x0);
                                                pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`2[UnityEngine::SceneManagement::
                                                Scene,UnityEngine::SceneManagement::Scene]::
                                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                          (pUVar2,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_
                                                  ,
                                                  MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                                                  );
                                                if (pAVar24 != (AvatarModifierPackages *)0x0) {
                                                  AvatarModifierPackages::
                                                  AvatarModifierPackages_add_OnUnequipItemEvent
                                                            (pAVar24,(EventHandler_1_EventArgs_ *)
                                                                     pUVar2,(MethodInfo *)0x0);
                                                  pAVar24 = (AvatarModifierPackages *)
                                                            MVWorldObject.dll::MV::WorldObject::
                                                            KogamaSettings::KogamaSettingsCore::
                                                            KogamaSettingTypes::
                                                            KogamaSettingNumericBase`1[System::
                                                            Single]::
                                                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                                            ((
                                                  KogamaSettingNumericBase_1_System_Single_ *)
                                                  &UNK_?,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  value = this;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnDisableVehicles_System__Object__System__EventArgs_
                                                  ,
                                                  MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                                                  );
                                                  if (pAVar24 != (AvatarModifierPackages *)0x0) {
                                                    AvatarModifierPackages::
                                                                                                        
                                                  AvatarModifierPackages_add_OnDisableVehiclesEvent
                                                            (pAVar24,(EventHandler_1_EventArgs_ *)
                                                                     value,(MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._._._.gameObject;
                                                  if (pGVar3 != (GameObject *)0x0) {
                                                    this_06 = (MaterialDescription *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_AddComponent_85
                                                                        (pGVar3,
                                                  AvatarShieldDecay_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarShieldDecay>__
                                                  );
                                                  if (this_06 != (MaterialDescription *)0x0) {
                                                    MaterialDescription::
                                                    MaterialDescription_set_SpecialProperties
                                                              (this_06,(BitArray *)
                                                                       (this->fields)._.shield,
                                                               (MethodInfo *)0x0);
                                                    pDVar25 = _UNK_?;
                                                    pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this_06,
                                                                                                                          
                                                  MethodInfo__AvatarShieldDecay__ResetDecayTimer__,
                                                  (MethodInfo *)0x0);
                                                  pDVar26 = mscorlib.dll::System::Delegate::
                                                            Delegate_Combine(pDVar25,(Delegate *)
                                                                                     pUVar2,
                                                                             (MethodInfo *)0x0);
                                                  pDVar25 = (Delegate *)0x0;
                                                  if (pDVar26 != (Delegate *)0x0) {
                                                    if ((Action__Class *)pDVar26->klass ==
                                                        TypeInfo__System__Action) {
                                                      pDVar25 = pDVar26;
                                                    }
                                                    if (pDVar25 == (Delegate *)0x0)
                                                    goto code_?;
                                                  }
                                                  _UNK_? = pDVar25;
                                                  this_07 = (AvatarLimbManager *)func_?();
                                                  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1
                                                  ::
                                                  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                                                            ((
                                                  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1
                                                  *)this_07,(MethodInfo *)0x0);
                                                  this_00 = (
                                                  TierOnDeathProgress_DoTierProgress_c_Iterator0 *)
                                                  (this->fields)._.avatar;
                                                  (this->fields)._.limbManager = this_07;
                                                  if (this_00 !=
                                                      (
                                                  TierOnDeathProgress_DoTierProgress_c_Iterator0 *)
                                                  0x0) {
                                                    TierOnDeathProgress+<DoTierProgress>c__Iterator0
                                                    ::
                                                  TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            (this_00,(MethodInfo *)0x0);
                                                  if (this_07 != (AvatarLimbManager *)0x0) {
                                                    (*(code *)(((
                                                  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__Class
                                                  *)this_07->klass)->vtable).
                                                  System_Collections_IEnumerator_get_Current.method)
                                                            ();
                                                  this_01 = (TweenRunner_1_ColorTween_ *)
                                                            (this->fields).avatarRespawnHandler;
                                                  if (this_01 != (TweenRunner_1_ColorTween_ *)0x0) {
                                                    UnityEngine.UI.dll::UnityEngine::UI::
                                                    CoroutineTween::TweenRunner`1[ColorTween]::
                                                    TweenRunner_1_ColorTween__Init
                                                              (this_01,(MonoBehaviour *)this,
                                                               (MethodInfo *)0x0);
                                                    pUVar27 = (this->fields)._._._.PositionChanged;
                                                    pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                                  ,
                                                  MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                                                  );
                                                  pUVar28 = (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)mscorlib.dll::System::Delegate::Delegate_Combine
                                                              ((Delegate *)pUVar27,
                                                               (Delegate *)pUVar2,(MethodInfo *)0x0)
                                                  ;
                                                  pUVar27 = (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)0x0;
                                                  if (pUVar28 !=
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)0x0) {
                                                    if (pUVar28->klass ==
                                                                                                                
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  ) {
                                                    pUVar27 = pUVar28;
                                                  }
                                                  if (pUVar27 ==
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)0x0) goto code_?;
                                                  }
                                                  pUVar29 = (this->fields)._._._.RotationChanged;
                                                  (this->fields)._._._.PositionChanged = pUVar27;
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                                                  ,
                                                  MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__UnityAction_System__Object__void__
                                                  );
                                                  pUVar30 = (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)mscorlib.dll::System::Delegate::Delegate_Combine
                                                              ((Delegate *)pUVar29,
                                                               (Delegate *)pUVar2,(MethodInfo *)0x0)
                                                  ;
                                                  pUVar29 = (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)0x0;
                                                  if (pUVar30 !=
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)0x0) {
                                                    if (pUVar30->klass ==
                                                                                                                
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                                  ) {
                                                    pUVar29 = pUVar30;
                                                  }
                                                  if (pUVar29 ==
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)0x0) goto code_?;
                                                  }
                                                  pUVar31 = (this->fields)._._._.ScaleChanged;
                                                  (this->fields)._._._.RotationChanged = pUVar29;
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                                                  ,
                                                  MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                                                  );
                                                  pUVar32 = (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)mscorlib.dll::System::Delegate::Delegate_Combine
                                                              ((Delegate *)pUVar31,
                                                               (Delegate *)pUVar2,(MethodInfo *)0x0)
                                                  ;
                                                  pUVar31 = (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)0x0;
                                                  if (pUVar32 !=
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)0x0) {
                                                    if (pUVar32->klass ==
                                                                                                                
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                                  ) {
                                                    pUVar31 = pUVar32;
                                                  }
                                                  if (pUVar31 ==
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)0x0) goto code_?;
                                                  }
                                                  (this->fields)._._._.ScaleChanged = pUVar31;
                                                  pGVar3 = (this->fields)._._._.gameObject;
                                                  if (pGVar3 != (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar3,0,(MethodInfo *)0x0);
                                                    if ((((uint)(TypeInfo__MVGameControllerBase->
                                                                vtable).Equals.methodPtr & 0x2000000
                                                         ) != 0) &&
                                                       ((TypeInfo__MVGameControllerBase->_1).
                                                        cctor_started == 0)) {
                                                      func_?();
                                                    }
                                                    this_08 = (MVAvatar *)
                                                              MVGameControllerBase::
                                                              MVGameControllerBase_get_Game
                                                                        ((MethodInfo *)0x0);
                                                    if (this_08 != (MVAvatar *)0x0) {
                                                      pMVar22 = MVAvatar::MVAvatar_get_Shield
                                                                          (this_08,(MethodInfo *)0x0
                                                                          );
                                                      actorNr = UnityEngine.UI.dll::UnityEngine::UI
                                                                ::CoroutineTween::
                                                                                                                                
                                                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                                            ((
                                                  TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                                  this,(MethodInfo *)0x0);
                                                  if (pMVar22 !=
                                                      (MVRuntimeDataVariableClampedFloat *)0x0) {
                                                    this_09 = MVPlayerContainer::
                                                              MVPlayerContainer_GetPlayerUnsafe
                                                                        ((MVPlayerContainer *)
                                                                         pMVar22,(int32_t)actorNr,
                                                                         (MethodInfo *)0x0);
                                                    pIVar33 = mscorlib.dll::System::Collections::
                                                              ObjectModel::Collection`1[VoxelHit]::
                                                              Collection_1_VoxelHit__get_Items
                                                                        ((Collection_1_VoxelHit_ *)
                                                                         this,(MethodInfo *)0x0);
                                                    if (this_09 != (MVPlayer *)0x0) {
                                                      MVPlayer::MVPlayer_NotifyAvatarCreated
                                                                (this_09,(int32_t)pIVar33,
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
                                  else {
                                    pGVar3 = (this->fields)._._._.gameObject;
                                    if (pGVar3 != (GameObject *)0x0) {
                                      this_05 = (UseInteractorHandler *)
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_AddComponent_85
                                                          (pGVar3,
                                                  UseInteractorHandler_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorHandler>__
                                                  );
                                      (this->fields).useInteractorHandler = this_05;
                                      pIVar33 = mscorlib.dll::System::Collections::ObjectModel::
                                                Collection`1[VoxelHit]::
                                                Collection_1_VoxelHit__get_Items
                                                          ((Collection_1_VoxelHit_ *)this,
                                                           (MethodInfo *)0x0);
                                      triggingCollider =
                                           PrefabPool::PrefabPool_get_MVNegatePrefab
                                                     ((PrefabPool *)this,(MethodInfo *)0x0);
                                      if (this_05 != (UseInteractorHandler *)0x0) {
                                        UseInteractorHandler::UseInteractorHandler_Init
                                                  (this_05,(int32_t)pIVar33,
                                                   (Collider *)triggingCollider,(MethodInfo *)0x0);
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
                    else {
                      pGVar3 = (this->fields)._._._.gameObject;
                      if (pGVar3 != (GameObject *)0x0) {
                        this_03 = (PickupGUI *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_85
                                            (pGVar3,
                                             PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                            );
                        (this->fields).pickupGUI = this_03;
                        pIVar33 = mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                            ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                        if (this_03 != (PickupGUI *)0x0) {
                          PickupGUI::PickupGUI_Initialize
                                    (this_03,(int32_t)pIVar33,
                                     (MVPickupOwner *)(this->fields).pickupOwner,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.Health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    pMVar1 = (this->fields)._.Health;
    (this->fields).previousHealth = (float)fVar2;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar3 = (pMVar1->fields)._.OnChange;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___InitializeHealth_m__1_System__Object_,(MethodInfo *)0x0
                );
      pMStack4 =
           (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMStack4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
        (pMVar1->fields)._.OnChange = pMVar3;
        return;
      }
      if (pMStack4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMStack4;
      }
      pMStack5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pMStack4 = extraout_ECX;
  pMStack5 = extraout_EDX;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    pMVar1 = (this->fields)._.shield;
    (this->fields).previousShield = (float)fVar2;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pMVar3 = (pMVar1->fields)._._.OnChange;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___InitializeShield_m__0_System__Object_,(MethodInfo *)0x0
                );
      pMStack4 =
           (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMStack4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
        (pMVar1->fields)._._.OnChange = pMVar3;
        return;
      }
      if (pMStack4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMStack4;
      }
      pMStack5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pMStack4 = extraout_ECX;
  pMStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsInTempTier
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      bVar3 = (pPVar2->fields).previewGamePassTier;
      pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        return (pPVar2->fields).gamePassTier < bVar3;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    bVar1 = (*pcVar4)();
    return bVar1;
  }
  return 0;
}


/* Boolean IsSpawnRoleActive() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsSpawnRoleActive
               (MVAvatarLocal *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 == (SpawnRoleDataReceiver *)0x0) {
    return 0;
  }
  return (pSVar1->fields).isActive;
}


/* Void KillSelf() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_KillSelf
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)this,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    if ((pFVar2->fields).IsInFlagDebriefing != 0) {
      return;
    }
    bVar1 = MVAvatar::MVAvatar_IsInMode
                      ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pAVar3 = (this->fields).interactableLocal;
    if (pAVar3 != (AvatarInteractable *)0x0) {
      pAVar4 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                          (pAVar3,(MethodInfo *)0x0);
      if (pAVar4 != (AvatarInteractable_DamageSource *)0x0) {
        pAVar3 = (this->fields).interactableLocal;
        if ((pAVar3 == (AvatarInteractable *)0x0) ||
           (pAVar4 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                (pAVar3,(MethodInfo *)0x0),
           pAVar4 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
        bVar1 = AvatarInteractable+DamageSource::AvatarInteractable_DamageSource_get_Outdated
                          (pAVar4,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pAVar3 = (this->fields).interactableLocal;
          if ((pAVar3 != (AvatarInteractable *)0x0) &&
             (pAVar4 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                  (pAVar3,(MethodInfo *)0x0),
             pAVar4 != (AvatarInteractable_DamageSource *)0x0)) {
            damageDealer = (pAVar4->fields).shooter;
            this_00 = (this->fields).interactableLocal;
            if ((this_00 != (AvatarInteractable *)0x0) &&
               ((pAVar4 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                     (this_00,(MethodInfo *)0x0),
                pAVar4 != (AvatarInteractable_DamageSource *)0x0 &&
                (pAVar3 != (AvatarInteractable *)0x0)))) {
              AvatarInteractable::AvatarInteractable_DieFromRespawn
                        (pAVar3,damageDealer,(uint)(pAVar4->fields).damageType,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
      MVAvatarLocal_Die(this,(MethodInfo *)0x0);
      this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnSuicide;
      if (this_01 == (JumpState_OnWallJumpDelegate *)0x0) {
        return;
      }
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0);
      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        iVar5 = *(int *)(in_stack_6 + 0x50);
        if (iVar5 == 0) {
          return;
        }
        uStack7 = 0;
        if (*(JumpState_OnWallJumpDelegate **)(iVar5 + 0x2c) != (JumpState_OnWallJumpDelegate *)0x0)
        {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (*(JumpState_OnWallJumpDelegate **)(iVar5 + 0x2c),(MethodInfo *)0x0);
        }
        method_00 = *(MethodInfo **)(iVar5 + 0x14);
        pcVar8 = *(code **)(iVar5 + 8);
        piVar9 = *(int **)(iVar5 + 0x10);
        method_01 = method_00;
        if (method_00->flags == 0xffff) {
          func_?();
        }
        cVar10 = func_?();
        if (cVar10 == '\0') {
          if ((char)method_00->iflags == '\0') {
            (*pcVar8)();
            return;
          }
        }
        else if ((method_00->flags != 0xffff) &&
                (((piVar9 == (int *)0x0 || ((*(uint *)(*piVar9 + 0xa0) & 0x100) == 0)) &&
                 (*(int *)(iVar5 + 0xc) != 0)))) {
          cVar10 = func_?();
          if (cVar10 != '\0') {
            return;
          }
          cVar10 = func_?();
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                    ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_00);
          cVar11 = func_?();
          if (cVar10 == '\0') {
            if (cVar11 != '\0') {
              mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
              ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                        ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_01);
              func_?();
              return;
            }
            (**(code **)(*piVar9 + 0xc0 + (uint)method_00->flags * 8))();
            return;
          }
          if (cVar11 == '\0') {
            puVar12 = (undefined4 *)func_?();
            (*(code *)*puVar12)();
            return;
          }
          uVar13 = 0;
          uVar14 = *(ushort *)(*piVar9 + 0xb6);
          if (uVar14 != 0) {
            do {
              if (*(char **)(*(int *)(*piVar9 + 0x58) + (uint)uVar13 * 8) == method_00->name)
              goto code_?;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar14);
          }
          func_?();
code_?:
          puVar12 = (undefined4 *)func_?();
          (*(code *)*puVar12)();
          return;
        }
        (*pcVar8)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LeaveVehicle(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_LeaveVehicle
               (MVAvatarLocal *this,bool leaveBecauseOfServer,MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  pAVar2 = (this->fields).avatarMotor;
  if (pAVar2 != (AvatarMotor *)0x0) {
    puVar3 = (undefined8 *)
             (*(code *)(pAVar2->klass->vtable).get_Velocity.method)
                       (&stack0xffffffd4,pAVar2,
                        (pAVar2->klass->vtable).get_IsMovementLocked.methodPtr);
    _fStack_1c = *puVar3;
    pMVar4 = *(MVAvatarLocal **)(puVar3 + 1);
    (this->fields).vehicleRigidBody = (MVRigidBody *)0x0;
    fStack_1 = -NAN;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_04 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_04 != (PrefabPool *)0x0) {
      this_05 = (MVLocalObjectController *)
                PrefabPool::PrefabPool_get_MVSmokePrefab(this_04,(MethodInfo *)0x0);
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if (this_05 != (MVLocalObjectController *)0x0) {
        bVar5 = MVLocalObjectController::MVLocalObjectController_DetachWorldObjectFromVehicle
                          (this_05,(int32_t)worldObjectID,(int32_t *)&fStack_1,leaveBecauseOfServer,
                           (MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        this = pMVar4;
        if (fStack_1 != -NAN) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_06 == (MVWorldObjectClientManager *)0x0) goto code_?;
          this_07 = (DayNightCycle *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_06,(int32_t)fStack_1,(MethodInfo *)0x0);
          pMVar6 = TypeInfo__MVVehicleBase;
          if ((this_07 == (DayNightCycle *)0x0) ||
             (iVar7 = func_?(this_07,TypeInfo__MVVehicleBase), iVar7 == 0)) {
            VStack_8.z = fStack_1;
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&VStack_8.z);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            message = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_vehicleWO_is_null_or_type_is_not,arg1,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)message,(MethodInfo *)0x0);
          }
          else {
            iVar7 = func_?(this_07,pMVar6);
            if (iVar7 == 0) goto code_?;
            this_08 = (MVVehicleBase *)func_?(this_07,TypeInfo__MVVehicleBase,0);
            MVVehicleBase::MVVehicleBase_LeaveLocal(this_08,in_stack_9);
            this_09 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_07,(MethodInfo *)0x0);
            if (this_09 == (CelestialParam *)0x0) goto code_?;
            x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                          ((GameObject *)this_09,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              if (x == (UseInteractorHandler *)0x0) goto code_?;
              puVar3 = (undefined8 *)func_?(&stack0xffffffe0,6,x);
              VStack_8._4_8_ = *puVar3;
              fVar10 = *(float *)(puVar3 + 1);
              pMVar11 = VStack_8.y;
              pMVar12 = VStack_8.z;
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                VStack_8.z = (float)pMVar12;
                VStack_8.y = (float)pMVar11;
                cRam_? = '\x01';
              }
              d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a.z = fVar10;
              a.x = VStack_8.y;
              a.y = VStack_8.z;
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                  ((Vector3 *)&stack0xffffffe0,a,d,(MethodInfo *)0x0);
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                  (&VStack_8,*pVVar13,2.0,(MethodInfo *)0x0);
              pMVar11 = (MVAvatarLocal__Class *)pVVar13->x;
              uVar14 = pVVar13->y;
              this = (MVAvatarLocal *)&stack0xffffffd4;
              fVar15 = (float10)func_?();
              fStack_16 = (float)(fVar15 / (float10)_UNK_? + (float10)(float)uVar14);
              fStack_17 = (float)pMVar11;
            }
          }
        }
        MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this_03,(MethodInfo *)0x0);
        this_10 = (AvatarUIHandlerRemote *)MVAvatarLocal_get_AvatarLocal(this_03,(MethodInfo *)0x0);
        if ((this_10 != (AvatarUIHandlerRemote *)0x0) &&
           (pSVar18 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                (this_10,(MethodInfo *)0x0), pSVar18 != (ShieldBar *)0x0)) {
          func_?(2,TypeInfo__IAvatarCameraController,pSVar18,0);
          pAVar2 = (this_03->fields).avatarMotor;
          if (pAVar2 != (AvatarMotor *)0x0) {
            (*(code *)(pAVar2->klass->vtable).Reset.method)
                      (pAVar2,(pAVar2->klass->vtable).SuspendImpactDamage.methodPtr);
            pAVar2 = (this_03->fields).avatarMotor;
            if (pAVar2 != (AvatarMotor *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pAVar2,1,(MethodInfo *)0x0);
              this_00 = (this_03->fields).triggerHandler;
              if (this_00 != (MVTriggerHandler *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_00,1,(MethodInfo *)0x0);
                pAVar2 = (this_03->fields).avatarMotor;
                if (pAVar2 != (AvatarMotor *)0x0) {
                  impulse.z = (float)this;
                  impulse.x = fStack_17;
                  impulse.y = fStack_16;
                  MVRigidBody::MVRigidBody_AddImpulse_1
                            ((MVRigidBody *)pAVar2,impulse,0,(MethodInfo *)0x0);
                  (*(code *)(this_03->klass->vtable).OnLeaveVehicle.method)
                            (this_03,(this_03->klass->vtable).AvatarStateChangedHandler.methodPtr);
                  pSVar19 = (this_03->fields).spawnRoleDataReceiver;
                  if ((pSVar19 != (SpawnRoleDataReceiver *)0x0) &&
                     (this_01 = (pSVar19->fields).isInVehicle,
                     this_01 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
                    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Boolean]::
                    SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                              (this_01,0,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                              );
                    this_02 = (this_03->fields).pickupGUI;
                    if (this_02 != (PickupGUI *)0x0) {
                      PickupGUI::PickupGUI_AvatarLeftVehicle(this_02,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?(TypeInfo__MVGameControllerBase);
                      }
                      this_11 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (this_11 != (MVNetworkGame *)0x0) {
                        this_12 = (TransformNetworkManager *)
                                  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                            ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                             this_11,(MethodInfo *)0x0);
                        woID = (this_03->fields)._._._._.id;
                        this_13 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
                        MVNetworkReporter::MVNetworkReporter__ctor
                                  (this_13,(MVWorldObjectClient *)this_03,(MethodInfo *)0x0);
                        if (this_12 != (TransformNetworkManager *)0x0) {
                          TransformNetworkManager::TransformNetworkManager_AddReporter
                                    (this_12,woID,this_13,(MethodInfo *)0x0);
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
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnCameraScale(Object, ScaleArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCameraScale
               (MVAvatarLocal *this,Object *sender,ScaleArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    gameType = AddDotsToTruncatedText+<Start>c__Iterator0::
               AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((AddDotsToTruncatedText_Start_c_Iterator0 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__MainCameraManager);
    }
    pIVar1 = MainCameraManager::MainCameraManager_GetSettings
                       ((MVGameType__Enum)gameType,(MethodInfo *)0x0);
    if (args != (ScaleArgs *)0x0) {
      pIVar2 = (ICameraSettings__Class *)(args->fields).scale;
      if (pIVar1 != (ICameraSettings *)0x0) {
        pIVar3 = pIVar1->klass;
        uVar4 = 0;
        uVar5._0_1_ = (pIVar3->_1).rank;
        uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
        if (uVar5 != 0) {
          do {
            if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__ICameraSettings) {
              ppMVar6 = &(&(pIVar1->klass->vtable).ScaleCameraValues)
                         [pIVar3->interfaceOffsets[uVar4].offset].method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        pIVar2 = TypeInfo__ICameraSettings;
        ppMVar6 = (MethodInfo **)func_?(pIVar1,TypeInfo__ICameraSettings,2);
code_?:
        (*(code *)*ppMVar6)(pIVar1,pIVar2,ppMVar6[1]);
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnCheckpointReachedResetRevive() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCheckpointReachedResetRevive
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pSVar2 = (this->fields).spawnRoleDataReceiver;
    if ((pSVar2 != (SpawnRoleDataReceiver *)0x0) &&
       (this_00 = (pSVar2->fields).reviveState,
       this_00 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleReceiverVariable`1[System::Single]::
      SpawnRoleReceiverVariable_1_System_Single__get_Value
                ((SpawnRoleReceiverVariable_1_System_Single_ *)this_00,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                );
      if (extraout_EAX != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        *(undefined4 *)(in_stack_3 + 0x1c) = 0;
        if (*(List_1_UnityEngine_UIVertex_ **)(in_stack_3 + 8) !=
            (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (*(List_1_UnityEngine_UIVertex_ **)(in_stack_3 + 8),
                     MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__);
          return;
        }
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void OnCurrentPickupChange(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCurrentPickupChange
               (MVAvatarLocal *this,Object *newPickupDataData,MethodInfo *method)

{
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.avatar;
  if (this_00 != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_OnEnterVehicle(this_00,(MethodInfo *)0x0);
    this_04 = (DayNightCycle *)
              PrefabPool::PrefabPool_get_MVRandomBoxPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_04 != (DayNightCycle *)0x0) {
      this_05 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_04,(MethodInfo *)0x0);
      if (this_05 != (CelestialParam *)0x0) {
        x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                      ((GameObject *)this_05,
                       MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          this_01 = (this->fields).avatarMotor;
          if (this_01 == (AvatarMotor *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_01,0,(MethodInfo *)0x0);
          this_02 = (this->fields).triggerHandler;
          if (this_02 == (MVTriggerHandler *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_02,0,(MethodInfo *)0x0);
        }
        pMVar2 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy_1
                           ((this->fields)._._._.gameObject,
                            MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                           );
        (this->fields).vehicleRigidBody = pMVar2;
        pSVar3 = (this->fields).spawnRoleDataReceiver;
        if ((pSVar3 != (SpawnRoleDataReceiver *)0x0) &&
           (this_03 = (pSVar3->fields).isInVehicle,
           this_03 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Boolean]::
          SpawnRoleReceiverVariable_1_System_Boolean__set_Value
                    (this_03,1,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                    );
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


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnEquipItem
               (MVAvatarLocal *this,PickupItem *equippeditem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnHealthBoostedChanged() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnHealthBoostedChanged
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).boostedHealthMultiplier = 1.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (ObjectiveArrow *)0x0) {
        this_03 = (Boost *)0x3;
        bVar1 = BoostController::BoostController_TryGetActiveBoost
                          ((BoostController *)this_02,BoostType__Enum_ExtraHealthFloatMultiplier,
                           (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pMVar2 = (this->fields)._.MaxHealth;
          if (pMVar2 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
            iVar3 = (*(code *)(pMVar2->klass->vtable).get_Value.method)();
            pMStack4 = (MVRuntimeDataVariable_1_System_Int32_ *)(this->fields)._.Health;
            if (pMStack4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
              pIStack5 =
                   (Il2CppImage *)
                   (((MVRuntimeDataVariable_1_System_Single_ *)pMStack4)->klass->vtable).
                   set_Value.methodPtr;
              fVar6 = (float10)(*(code *)(((MVRuntimeDataVariable_1_System_Single_ *)pMStack4
                                          )->klass->vtable).get_Value.method)();
              MVAvatarLocal_UpdateMaxHealth((MVAvatarLocal *)(float)fVar6,(MethodInfo *)0x0);
              pMStack4 = (this->fields)._.MaxHealth;
              pMVar7 = (this->fields)._.Health;
              if (pMStack4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
                pIStack5 =
                     (Il2CppImage *)(pMStack4->klass->vtable).set_Value.methodPtr;
                iVar8 = (*(code *)(pMStack4->klass->vtable).get_Value.method)();
                if (pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                  pMVar9 = pMVar7->klass;
                  pIStack5 = pMVar9[1]._0.image;
                  pMStack4 =
                       (MVRuntimeDataVariable_1_System_Int32_ *)
                       ((float)iVar8 / ((float)iVar3 / (float)fVar6));
                  (*(code *)(pMVar9->vtable).set_Value.method)();
                  return;
                }
              }
            }
          }
        }
        else if (this_03 != (Boost *)0x0) {
          pIStack5 = (Il2CppImage *)Boost::Boost_get_Value(this_03,(MethodInfo *)0x0);
          uVar10 = CONCAT44(TypeInfo__System__Int32,pIStack5);
          if (pIStack5 != (Il2CppImage *)0x0) {
            if ((((Object *)pIStack5)->klass->_0).element_class !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar11 = (int *)func_?();
            (this->fields).boostedHealthMultiplier = (float)*piVar11 / _UNK_? + _UNK_?;
            MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
            pMStack4 = (this->fields)._.MaxHealth;
            pMVar7 = (this->fields)._.Health;
            if (pMStack4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
              pIStack5 = (Il2CppImage *)(pMStack4->klass->vtable).set_Value.methodPtr;
              iVar3 = (*(code *)(pMStack4->klass->vtable).get_Value.method)();
              if (pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                pMVar9 = pMVar7->klass;
                pMStack4 = (MVRuntimeDataVariable_1_System_Int32_ *)(float)iVar3;
                pIStack5 = pMVar9[1]._0.image;
                (*(code *)(pMVar9->vtable).set_Value.method)();
                return;
              }
            }
          }
        }
      }
    }
  }
  pIStack5 = (Il2CppImage *)0x0;
  uVar10 = func_?();
code_?:
  _pMStack00000014 = uVar10;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnHolsteredChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnHolsteredChanged
               (MVAvatarLocal *this,bool obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnPositionChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?(0);
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
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnScaleChanged(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnScaleChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSeatedChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSeatedChanged
               (MVAvatarLocal *this,bool isSeated,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSetRespawnWhenPossible() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetRespawnWhenPossible
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (CrossPlatformInputManager_VirtualButton *)(this->fields).avatarRespawnHandler;
  if (this_00 != (CrossPlatformInputManager_VirtualButton *)0x0) {
    UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
    CrossPlatformInputManager_VirtualButton_set_matchWithInputManager(this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSetSpawnAsGhost() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetSpawnAsGhost
               (MVAvatarLocal *this,MethodInfo *method)

{
  iVar1 = in_stack_2;
  this_00 = (CrossPlatformInputManager_VirtualButton *)(this->fields).avatarRespawnHandler;
  if ((this_00 == (CrossPlatformInputManager_VirtualButton *)0x0) ||
     (UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
      CrossPlatformInputManager_VirtualButton_set_matchWithInputManager(this_00,1,(MethodInfo *)0x0)
     , (this->fields).avatarRespawnHandler == (AvatarRespawnHandler *)0x0)) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (*(char *)(in_stack_2 + 0xc) == '\0') {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar4 != (FlagDebriefingControl *)0x0) {
      this_01 = *(MVAvatarLocal **)(in_stack_2 + 8);
      if ((pFVar4->fields).IsInFlagDebriefing == 0) {
        if (this_01 == (MVAvatarLocal *)0x0) goto code_?;
        in_stack_2 = CONCAT31(in_stack_2._1_3_,1);
      }
      else {
        if (this_01 == (MVAvatarLocal *)0x0) goto code_?;
        in_stack_2 = CONCAT31(in_stack_2._1_3_,7);
      }
code_?:
      MVAvatarLocal_SetMode(this_01,in_stack_2,(MethodInfo *)0x0);
      *(undefined1 *)(iVar1 + 0xc) = 1;
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar4 != (FlagDebriefingControl *)0x0) {
      if ((pFVar4->fields).IsInFlagDebriefing != 0) {
        return;
      }
      this_01 = *(MVAvatarLocal **)(in_stack_2 + 8);
      if (this_01 != (MVAvatarLocal *)0x0) {
        in_stack_2 = CONCAT31(in_stack_2._1_3_,9);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUnequip(Object, EventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnUnequip
               (MVAvatarLocal *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    if (pUVar1 == (UseInteractorHandler *)0x0) {
      this_01 = (UseInteractorHandler *)0x0;
    }
    else {
      bVar2 = (TypeInfo__AvatarEquipable->_1).naturalAligment;
      if (((pUVar1->klass->_1).naturalAligment < bVar2) ||
         ((pUVar1->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__AvatarEquipable))
      {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_01 = (UseInteractorHandler *)0x0;
      if (bVar3) {
        this_01 = pUVar1;
      }
    }
    pAVar4 = (this->fields).interactableLocal;
    if (pAVar4 != (AvatarInteractable *)0x0) {
      fVar5 = (float10)(*(code *)(pAVar4->klass->vtable).HandleModifierEffect.method)
                                 (pAVar4,5,0x3f800000,
                                  (pAVar4->klass->vtable).ClearModifiers.methodPtr);
      if (_UNK_? < (float)fVar5) {
        if (this_01 == (UseInteractorHandler *)0x0) goto code_?;
        bVar6 = AvatarEquipable::AvatarEquipable_GetIsEquipped
                          ((AvatarEquipable *)this_01,AvatarItemType__Enum_SlapGun,(MethodInfo *)0x0
                          );
        if (bVar6 != 0) {
          return;
        }
      }
      if (this_01 != (UseInteractorHandler *)0x0) {
        (*(code *)this_01->klass[1]._0.namespaze)(this_01,this_01->klass[1]._0.byval_arg.data.dummy)
        ;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RelayDamageEvent(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayDamageEvent
               (MVAvatarLocal *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)(this->fields).OnDamageTaken;
  if (this_00 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
    System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
    Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
              (this_00,amount,(Object *)damageDealer,damageType,
               MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
              );
  }
  pMVar1 = (this->fields)._.Health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)(pMVar1);
    if (0.0 < (float)fVar2) {
      return;
    }
    if (damageDealer == (MVPlayer *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (damageDealer = (MVPlayer *)
                         MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         (MVLocalPlayer *)damageDealer == (MVLocalPlayer *)0x0)) goto code_?;
    }
    arg2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)damageDealer,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       this_03 != (MVLocalPlayer *)0x0)) {
      arg1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0);
      this_01 = (this->fields).OnKilled;
      if (this_01 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        System.Core.dll::System::Action`3[Int32,Int32,MV::Common::PlayerKilledByType]::
        Action_3_Int32_Int32_MV_Common_PlayerKilledByType__Invoke
                  (this_01,(int32_t)arg1,(int32_t)arg2,damageType,
                   MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Invoke_int__int__MV__Common__PlayerKilledByType_
                  );
        this_02 = (this->fields).spawnRoleDataReceiver;
        if (this_02 == (SpawnRoleDataReceiver *)0x0) goto code_?;
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataReceiver
        ::SpawnRoleDataReceiver_NotifyKilled
                  (this_02,(int32_t)arg1,(int32_t)arg2,damageType,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RelayNewSafePosition(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayNewSafePosition
               (MVAvatarLocal *this,Vector3 lastSafePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff9c,0,0x38);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVCameraBase *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_02,(MethodInfo *)0x0);
      pSVar1 = (this->fields).spawnRoleDataReceiver;
      if ((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
         (this_00 = (pSVar1->fields).rotation,
         this_00 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)) {
        pQVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
                 SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__get_Value
                           (&QStack_3,this_00,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__get_Value__
                           );
        QStack_3.x = pQVar2->x;
        QStack_3.y = pQVar2->y;
        QStack_3.z = pQVar2->z;
        QStack_3.w = pQVar2->w;
        if (this_03 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)(auStack_5 + 4),this_03,(MethodInfo *)0x0);
          uStack_6._0_4_ = pVVar4->x;
          uStack_6._4_4_ = pVVar4->y;
          fVar7 = pVVar4->z;
          pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_5,this_03,(MethodInfo *)0x0);
          fVar8 = pQVar2->x;
          fVar9 = pQVar2->y;
          fVar10 = pQVar2->z;
          fVar11 = pQVar2->w;
          uVar12 = (undefined4)uStack_6;
          func_?(&stack0xffffff9c,lastSafePosition.x,lastSafePosition.y,lastSafePosition.z,
                          QStack_3.x);
          pSVar1 = (this->fields).spawnRoleDataReceiver;
          if ((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
             (this_05 = (pSVar1->fields).reviveState,
             this_05 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) {
            puVar13 = &UNK_?;
            pMVar14 = 
            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
            ;
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleReceiverVariable`1[System::Single]::
            SpawnRoleReceiverVariable_1_System_Single__get_Value
                      ((SpawnRoleReceiverVariable_1_System_Single_ *)this_05,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                      );
            if (this_04 != (ReviveState *)0x0) {
              value.Position.y = (float)this_05;
              value.Position.x = (float)puVar13;
              value.Position.z = (float)pMVar14;
              value.Rotation.x = (float)uVar12;
              value.Rotation.y = 0.0;
              value.Rotation.z = fVar7;
              value.Rotation.w = fVar8;
              value.CameraPosition.x = fVar9;
              value.CameraPosition.y = fVar10;
              value.CameraPosition.z = fVar11;
              value.CameraRotation.x = 0.0;
              value.CameraRotation.y = (float)uStack_15;
              value.CameraRotation.z = (float)(int)uStack_16;
              value.CameraRotation.w = (float)((ulonglong)uStack_16 >> 0x20);
              ReviveState::ReviveState_set_SafeGroundedData(this_04,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ResetAvatar() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_ResetAvatar
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).triggerHandler;
  if (this_00 != (MVTriggerHandler *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (this_01 != (MVLocalPlayer *)0x0) {
        actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,
                                 (MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
          if (pSVar2 != (SkyParam *)0x0) {
            MVar3 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                               ((MVTeamManager *)pSVar2,(int32_t)actorNumber,(MethodInfo *)0x0);
            if (MVar3 != MVTeam__Enum_None) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
              pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                 ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
              if (pSVar2 == (SkyParam *)0x0) goto code_?;
              bVar4 = MVTeamManager::MVTeamManager_IsTeamActive
                                ((MVTeamManager *)pSVar2,MVar3,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
                pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                   ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
                if (pSVar2 == (SkyParam *)0x0) goto code_?;
                this_02 = MVTeamManager::MVTeamManager_GetTeamList
                                    ((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
                this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                if (this_02 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
                MVar3 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::MVTeam]
                         ::List_1_MV_WorldObject_MVTeam__get_Item
                                   (this_02,0,
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                   );
                if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                          (this_03,MVar3,(MethodInfo *)0x0);
              }
            }
            MVAvatarLocal_SetAnimation(this,StringLiteral_Idle,(MethodInfo *)0x0);
            pMVar5 = (this->fields)._.MaxHealth;
            pMVar6 = (this->fields)._.Health;
            if (pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
              (*(code *)(pMVar5->klass->vtable).get_Value.method)();
              if (pMVar6 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                (*(code *)(pMVar6->klass->vtable).set_Value.method)();
                bVar4 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
                }
                pAVar7 = (this->fields).avatarEquipable;
                if (pAVar7 != (AvatarEquipable *)0x0) {
                  (*(code *)(pAVar7->klass->vtable).Unequip.method)();
                  pAVar8 = (this->fields).interactableLocal;
                  if (pAVar8 != (AvatarInteractable *)0x0) {
                    (*(code *)(pAVar8->klass->vtable).ClearModifiers.method)();
                    pAVar9 = (this->fields).avatarMotor;
                    if (pAVar9 != (AvatarMotor *)0x0) {
                      (*(code *)(pAVar9->klass->vtable).Reset.method)();
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
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetAnimation(String) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetAnimation
               (MVAvatarLocal *this,String *animationState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currAnim;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality(pSVar1,animationState,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pMVar3 = (this->fields)._.Animation;
  if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
    pOVar4 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar3,(MethodInfo *)0x0);
    if (pOVar4 != (Object *)0x0) {
      bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar4->klass->_1).naturalAligment < bVar5) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pOVar7 = (Object *)0x0;
      if (bVar6) {
        pOVar7 = pOVar4;
      }
      if (pOVar7 == (Object *)0x0) goto code_?;
    }
    pSVar1 = (this->fields).currAnim;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,animationState,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                 *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this_01 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_01,StringLiteral_state,
                   (CrossPlatformInputManager_VirtualButton *)animationState,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        value = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_01,StringLiteral_timeStamp,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pMVar3 = (this->fields)._.Animation;
        if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar3,(Object *)this_01,(MethodInfo *)0x0);
          (this->fields).currAnim = animationState;
          return;
        }
      }
    }
  }
  func_?();
  pOVar4 = extraout_EDX;
code_?:
  func_?(pOVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetCharacterController(SmoothCharacterController) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetCharacterController
               (MVAvatarLocal *this,SmoothCharacterController *characterController,
               MethodInfo *method)

{
  pAVar1 = (this->fields).avatarMotor;
  if (pAVar1 != (AvatarMotor *)0x0) {
    (pAVar1->fields).smoothCharacterController = characterController;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCurrentItemState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetCurrentItemState
               (MVAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *aNewState,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  obscuredValue =
       ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                 ((Object *)aNewState,(MethodInfo *)0x0);
  pOVar3 = (pMVar1->fields).value;
  (pMVar1->fields).value = obscuredValue;
  if (pOVar3 != obscuredValue) {
    pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(pMVar1->fields).OnChange;
    if (pSVar4 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
      pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         (obscuredValue,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar4,pOVar3,(MethodInfo *)0x0);
    }
    if (((pMVar1->fields).writeThrough != 0) &&
       (pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(pMVar1->fields).OnWriteThrough
       , pSVar4 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0)) {
      pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar4,pOVar3,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetMode
               (MVAvatarLocal *this,AvatarRuntimeState__Enum localMode,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).currentMode;
  this = (MVAvatarLocal *)CONCAT31((int3)((uint)pMVar1 >> 8),(pMVar1->fields).currentState);
  if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(code *)(pMVar3->klass->vtable).__unknown.method)
              (pMVar3,localMode,(pMVar3->klass->vtable).__unknown_1.methodPtr);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar3 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarRuntimeState,System::
               Object]::Dictionary_2_AvatarRuntimeState_System_Object__get_Item
                         ((Dictionary_2_AvatarRuntimeState_System_Object_ *)this_00,localMode,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      (pMVar1->fields).currentState = (uint8_t)localMode;
      (pMVar1->fields).currentMode = pMVar3;
      if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(code *)(pMVar3->klass->vtable).Activate.method)
                  (pMVar3,this,(Il2CppClass *)pMVar3->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToSpawnTransform() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  if (this != (MVAvatarLocal *)0x0) {
    (*(code *)(this->klass->vtable).set_WorldPosition.method)
              (this,position._0_8_,position.z,(this->klass->vtable).get_WorldRotation_1.methodPtr);
    MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
              ((MVWorldObjectClient *)this,rotation,(MethodInfo *)0x0);
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pCVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar2,position,(MethodInfo *)0x0);
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)this,(MethodInfo *)0x0);
        if (pCVar1 != (CelestialParam *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             ((GameObject *)pCVar1,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupSpawnroleReceiver(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetupSpawnroleReceiver
               (MVAvatarLocal *this,SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_05 = this;
  pWVar1 = (this->fields)._.skillDataManager;
  if (pWVar1 != (WorldObjectSkillDataManager *)0x0) {
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                       (pWVar1,StringLiteral_Size,(MethodInfo *)0x0);
    pMVar3 = _UNK_?;
    if (bVar2 != 0) {
      pWVar1 = (this_05->fields)._.skillDataManager;
      if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
      pMVar3 = (MVAvatarLocal *)
                WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                          (pWVar1,StringLiteral_Size,(MethodInfo *)0x0);
    }
    pSVar4 = spawnRoleDataReceiver;
    this = pMVar3;
    if ((spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) &&
       (this_00 = (spawnRoleDataReceiver->fields).size,
       this_00 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleReceiverVariable`1[System::Single]::
      SpawnRoleReceiverVariable_1_System_Single__set_Value
                (this_00,(float)pMVar3,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                );
      uStack_5 = 0;
      uStack_6 = 0;
      func_?(&uStack_6,this,this,this,0);
      (*(code *)(this_05->klass->vtable).set_Scale.method)
                (this_05,uStack_6,uStack_5,(this_05->klass->vtable).get_WorldPosition.methodPtr);
      pMVar7 = (this_05->fields)._.Size;
      if (pMVar7 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        (*(code *)(pMVar7->klass->vtable).set_Value.method)(pMVar7,this,pMVar7->klass[1]._0.image);
        this_01 = (pSVar4->fields).reviveState;
        this = (MVAvatarLocal *)func_?(TypeInfo__ReviveState);
        ReviveState::ReviveState__ctor((ReviveState *)this,(MethodInfo *)0x0);
        if (this_01 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[ReviveState]::
          SpawnRoleReceiverVariable_1_ReviveState__set_Value
                    (this_01,(ReviveState *)this,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__set_Value_ReviveState_
                    );
          this_02 = (pSVar4->fields).lastRespawnType;
          if (this_02 != (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0) {
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleReceiverVariable`1[LastRespawnType]::
            SpawnRoleReceiverVariable_1_LastRespawnType__set_Value
                      (this_02,LastRespawnType__Enum_None,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                      );
            pSVar8 = (pSVar4->fields).position;
            pVVar9 = (Vector3 *)
                      (*(code *)(this_05->klass->vtable).get_Position.method)
                                (&puStack_10,this_05,(this_05->klass->vtable).set_Position.methodPtr
                                );
            if (pSVar8 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
              SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
                        (pSVar8,*pVVar9,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                        );
              this_03 = (pSVar4->fields).rotation;
              pQVar11 = (Quaternion *)
                        (*(code *)(this_05->klass->vtable).get_Rotation.method)
                                  (auStack_12,this_05,
                                   (this_05->klass->vtable).set_Rotation.methodPtr);
              if (this_03 != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0) {
                Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
                SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
                          (this_03,*pQVar11,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
                          );
                pSVar8 = (pSVar4->fields).defaultScale;
                pVVar9 = (Vector3 *)
                          (*(code *)(this_05->klass->vtable).get_Scale.method)
                                    (&puStack_10,this_05,
                                     (this_05->klass->vtable).set_Scale.methodPtr);
                if (pSVar8 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) {
                  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
                            (pSVar8,*pVVar9,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                            );
                  pSVar8 = (pSVar4->fields).scale;
                  pVVar9 = (Vector3 *)
                            (*(code *)(this_05->klass->vtable).get_Scale.method)
                                      (&puStack_10,this_05,
                                       (this_05->klass->vtable).set_Scale.methodPtr);
                  if (pSVar8 != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) {
                    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
                    SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
                              (pSVar8,*pVVar9,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                              );
                    pSVar13 = (pSVar4->fields).woId;
                    value = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)this_05,(MethodInfo *)0x0);
                    if (pSVar13 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
                      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32]::
                      SpawnRoleReceiverVariable_1_System_Int32__set_Value
                                (pSVar13,(int32_t)value,
                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                                );
                      pMVar14 = (this_05->fields)._.MaxHealth;
                      pSVar13 = (pSVar4->fields).maxHealth;
                      if ((pMVar14 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
                         (value_00 = (*(code *)(pMVar14->klass->vtable).get_Value.method)
                                               (pMVar14,(pMVar14->klass->vtable).set_Value.methodPtr),
                         pSVar13 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0)) {
                        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32]::
                        SpawnRoleReceiverVariable_1_System_Int32__set_Value
                                  (pSVar13,value_00,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                                  );
                        this_04 = (pSVar4->fields).tierRequirement;
                        if (cRam_? == '\0') {
                          func_?(_UNK_?);
                          cRam_? = '\x01';
                        }
                        this = (MVAvatarLocal *)0x0;
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                            ((MethodInfo *)0x0);
                        if (this_06 != (MVWorldObjectClientManager *)0x0) {
                          bVar2 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_TryGetWorldObject
                                             (this_06,(this_05->fields).spawnWorldObjectId,
                                              (MVWorldObject **)&this,(MethodInfo *)0x0);
                          pMVar3 = this;
                          if ((bVar2 == 0) || (this == (MVAvatarLocal *)0x0)) {
code_?:
                            this = (MVAvatarLocal *)((uint)this & 0xffffff00);
                          }
                          else {
                            bVar15 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
                            if (((this->klass->_1).naturalAligment < bVar15) ||
                               ((MVAvatarSpawnRoleCreator__Class *)
                                (this->klass->_1).typeHierarchy[bVar15 - 1] !=
                                TypeInfo__MVAvatarSpawnRoleCreator)) {
                              bVar16 = false;
                            }
                            else {
                              bVar16 = true;
                            }
                            pMVar17 = (MVAvatarLocal *)0x0;
                            if (bVar16) {
                              pMVar17 = this;
                            }
                            if (pMVar17 == (MVAvatarLocal *)0x0) goto code_?;
                            iVar18 = func_?(this,TypeInfo__MVAvatarSpawnRoleCreator);
                            if (iVar18 == 0) goto code_?;
                            this_07 = (MVAvatarSpawnRoleCreator *)
                                      func_?(pMVar3,TypeInfo__MVAvatarSpawnRoleCreator,0);
                            GVar19 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                               (this_07,(MethodInfo *)pMVar3);
                            this = (MVAvatarLocal *)CONCAT31(this._1_3_,(char)GVar19);
                          }
                          if (this_04 != (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)0x0)
                          {
                            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common::
                            GamePassTier]::
                            SpawnRoleReceiverVariable_1_MV_Common_GamePassTier__set_Value
                                      (this_04,(GamePassTier__Enum)this,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__set_Value_MV__Common__GamePassTier_
                                      );
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              func_?(TypeInfo__MVGameControllerBase);
                            }
                            this = (MVAvatarLocal *)
                                   MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                             ((MethodInfo *)0x0);
                            if (this != (MVAvatarLocal *)0x0) {
                              a = (UnityAction *)(this->fields)._._._._.objectLinkRefs;
                              this_08 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                         *)func_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                              UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                              SceneManagement::Scene]::
                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                        (this_08,(Object *)this_05,
                                         MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__
                                         ,(MethodInfo *)0x0);
                              pDStack_20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                     ((Delegate *)a,(Delegate *)this_08,
                                                      (MethodInfo *)0x0);
                              pDVar21 = (Delegate *)0x0;
                              if (pDStack_20 == (Delegate *)0x0) {
code_?:
                                (this->fields)._._._._.objectLinkRefs =
                                     (List_1_MV_WorldObject_ObjectLink_ *)pDVar21;
                                return;
                              }
                              if ((UnityAction__Class *)pDStack_20->klass ==
                                  TypeInfo__UnityEngine__Events__UnityAction) {
                                pDVar21 = pDStack_20;
                              }
                              pUStack_22 = TypeInfo__UnityEngine__Events__UnityAction;
                              if (pDVar21 != (Delegate *)0x0) goto code_?;
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
code_?:
  func_?(0);
  pDStack_20 = extraout_ECX;
  pUStack_22 = extraout_EDX;
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SubscribeToExternalEvents() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SubscribeToExternalEvents
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
                (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar1 != (GameEventManager *)0x0) {
        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,
                   (MethodInfo *)0x0);
        if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_add_OnSetRespawnWhenPossible
                    (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (pGVar1 != (GameEventManager *)0x0) {
            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__,
                       (MethodInfo *)0x0);
            if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
              GameEventManager+AvatarCommandsPlayModeManager::
              GameEventManager_AvatarCommandsPlayModeManager_add_OnEnterPlaymode
                        (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
              pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if (pGVar1 != (GameEventManager *)0x0) {
                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__Action);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)this,
                           MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__,
                           (MethodInfo *)0x0);
                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                  GameEventManager+AvatarCommandsPlayModeManager::
                  GameEventManager_AvatarCommandsPlayModeManager_add_OnSetToSpawnPoint
                            (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                     ((MethodInfo *)0x0);
                  if (pGVar1 != (GameEventManager *)0x0) {
                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action<int>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar3,(Object *)this,
                               MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_,
                               MethodInfo__System__Action<int>__Action_System__Object__void__);
                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                      GameEventManager+AvatarCommandsPlayModeManager::
                      GameEventManager_AvatarCommandsPlayModeManager_add_OnMoveBodyToSafeSpot
                                (pGVar2,(Action_1_Int32_ *)pUVar3,(MethodInfo *)0x0);
                      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                         ((MethodInfo *)0x0);
                      if (pGVar1 != (GameEventManager *)0x0) {
                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?(TypeInfo__System__Action<int>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar3,(Object *)this,
                                   MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_,
                                   MethodInfo__System__Action<int>__Action_System__Object__void__);
                        if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                          GameEventManager+AvatarCommandsPlayModeManager::
                          GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAtSafeSpot
                                    (pGVar2,(Action_1_Int32_ *)pUVar3,(MethodInfo *)0x0);
                          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                             ((MethodInfo *)0x0);
                          if (pGVar1 != (GameEventManager *)0x0) {
                            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                      *)func_?(TypeInfo__System__Action);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                            UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                            SceneManagement::Scene]::
                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                      (pUVar3,(Object *)this,
                                       MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                                       ,(MethodInfo *)0x0);
                            if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                              GameEventManager+AvatarCommandsPlayModeManager::
                              GameEventManager_AvatarCommandsPlayModeManager_add_OnReadyScreenShot
                                        (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                              pGVar1 = MVGameControllerBase::
                                       MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                              if (pGVar1 != (GameEventManager *)0x0) {
                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                          *)func_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar3,(Object *)this,
                                           MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                           ,
                                           MethodInfo__System__Action<WinningConditionType>__Action_System__Object__void__
                                          );
                                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)
                                {
                                  GameEventManager+AvatarCommandsPlayModeManager::
                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnWinningConditionIntermediateDebriefing
                                            (pGVar2,(Action_1_WinningConditionType_ *)pUVar3,
                                             (MethodInfo *)0x0);
                                  pGVar1 = MVGameControllerBase::
                                           MVGameControllerBase_get_GameEventManager
                                                     ((MethodInfo *)0x0);
                                  if (pGVar1 != (GameEventManager *)0x0) {
                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                              *)func_?(TypeInfo__System__Action);
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                    SceneManagement::Scene]::
                                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                              (pUVar3,(Object *)this,
                                               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                               ,(MethodInfo *)0x0);
                                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                      GameEventManager+AvatarCommandsPlayModeManager::
                                      GameEventManager_AvatarCommandsPlayModeManager_add_OnRemoveFromGame
                                                (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                                      pGVar1 = MVGameControllerBase::
                                               MVGameControllerBase_get_GameEventManager
                                                         ((MethodInfo *)0x0);
                                      if (pGVar1 != (GameEventManager *)0x0) {
                                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`2[UnityEngine::SceneManagement::
                                        Scene,UnityEngine::SceneManagement::Scene]::
                                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                  (pUVar3,(Object *)this,
                                                   MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                   (MethodInfo *)0x0);
                                        if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                          GameEventManager+AvatarCommandsPlayModeManager::
                                          GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAsGhost
                                                    (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                                          pGVar1 = MVGameControllerBase::
                                                   MVGameControllerBase_get_GameEventManager
                                                             ((MethodInfo *)0x0);
                                          if (pGVar1 != (GameEventManager *)0x0) {
                                            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                            pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`2[UnityEngine::SceneManagement::
                                            Scene,UnityEngine::SceneManagement::Scene]::
                                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                      (pUVar3,(Object *)this,
                                                       MethodInfo__MVAvatarLocal__OnSetToDeadMode__,
                                                       (MethodInfo *)0x0);
                                            if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                              GameEventManager+AvatarCommandsPlayModeManager::
                                              GameEventManager_AvatarCommandsPlayModeManager_add_OnSetToDeadMode
                                                        (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                                              pGVar1 = MVGameControllerBase::
                                                       MVGameControllerBase_get_GameEventManager
                                                                 ((MethodInfo *)0x0);
                                              if (pGVar1 != (GameEventManager *)0x0) {
                                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                                pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`2[UnityEngine::SceneManagement::
                                                Scene,UnityEngine::SceneManagement::Scene]::
                                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                          (pUVar3,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                  GameEventManager+AvatarCommandsPlayModeManager::
                                                  GameEventManager_AvatarCommandsPlayModeManager_add_OnRespawn
                                                            (pGVar2,(Action *)pUVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if ((pGVar1 != (GameEventManager *)0x0) &&
                                                     (this_00 = (
                                                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)(pGVar1->fields).GameState,
                                                  this_00 !=
                                                  (
                                                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)0x0)) {
                                                    this_01 = (
                                                  SubscribableVariableBase_1_System_Single_ *)
                                                  System.dll::System::Collections::Generic::
                                                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                                  ::Single,System::Object]::
                                                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                            (this_00,(MethodInfo *)0x0);
                                                  pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(
                                                  TypeInfo__System__Action<MV::Common::MVGameStateType>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                                                  ,
                                                  MethodInfo__System__Action<MV::Common::MVGameStateType>__Action_System__Object__void__
                                                  );
                                                  if (this_01 !=
                                                      (SubscribableVariableBase_1_System_Single_ *)
                                                      0x0) {
                                                    SubscribableVariableBase`1[System::Single]::
                                                                                                        
                                                  SubscribableVariableBase_1_System_Single__add_OnChange
                                                            (this_01,(Action_1_Single_ *)pUVar3,
                                                                                                                          
                                                  MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__add_OnChange_System__Action<MV::Common::MVGameStateType>_
                                                  );
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(
                                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                                                  ,
                                                  MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
                                                  );
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    GameEventManager::
                                                    GameEventManager_add_OnFirstTimeEvent
                                                              (pGVar1,(
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )pUVar3,(MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<int>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_
                                                  ,
                                                  MethodInfo__System__Action<int>__Action_System__Object__void__
                                                  );
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    GameEventManager::
                                                    GameEventManager_add_OnXPRewarded
                                                              (pGVar1,(Action_1_Int32_ *)pUVar3,
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Suicide() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Suicide
               (MVAvatarLocal *this,MethodInfo *method)

{
  bVar1 = MVAvatar::MVAvatar_IsInMode
                    ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pAVar2 = (this->fields).interactableLocal;
  if (pAVar2 == (AvatarInteractable *)0x0) goto code_?;
  pAVar3 = AvatarInteractable::AvatarInteractable_get_LastDamageSource(pAVar2,(MethodInfo *)0x0);
  if (pAVar3 != (AvatarInteractable_DamageSource *)0x0) {
    pAVar2 = (this->fields).interactableLocal;
    if ((pAVar2 == (AvatarInteractable *)0x0) ||
       (pAVar3 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                            (pAVar2,(MethodInfo *)0x0),
       pAVar3 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
    bVar1 = AvatarInteractable+DamageSource::AvatarInteractable_DamageSource_get_Outdated
                      (pAVar3,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pAVar2 = (this->fields).interactableLocal;
      if ((pAVar2 != (AvatarInteractable *)0x0) &&
         (pAVar3 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                              (pAVar2,(MethodInfo *)0x0),
         pAVar3 != (AvatarInteractable_DamageSource *)0x0)) {
        damageDealer = (pAVar3->fields).shooter;
        this_00 = (this->fields).interactableLocal;
        if ((this_00 != (AvatarInteractable *)0x0) &&
           ((pAVar3 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                 (this_00,(MethodInfo *)0x0),
            pAVar3 != (AvatarInteractable_DamageSource *)0x0 &&
            (pAVar2 != (AvatarInteractable *)0x0)))) {
          AvatarInteractable::AvatarInteractable_DieFromRespawn
                    (pAVar2,damageDealer,(uint)(pAVar3->fields).damageType,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  MVAvatarLocal_Die(this,(MethodInfo *)0x0);
  this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnSuicide;
  if (this_01 == (JumpState_OnWallJumpDelegate *)0x0) {
    return;
  }
  JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0);
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    iVar4 = *(int *)(in_stack_5 + 0x50);
    if (iVar4 == 0) {
      return;
    }
    uStack6 = 0;
    if (*(JumpState_OnWallJumpDelegate **)(iVar4 + 0x2c) != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                (*(JumpState_OnWallJumpDelegate **)(iVar4 + 0x2c),(MethodInfo *)0x0);
    }
    method_00 = *(MethodInfo **)(iVar4 + 0x14);
    pcVar7 = *(code **)(iVar4 + 8);
    piVar8 = *(int **)(iVar4 + 0x10);
    method_01 = method_00;
    if (method_00->flags == 0xffff) {
      func_?();
    }
    cVar9 = func_?();
    if (cVar9 == '\0') {
      if ((char)method_00->iflags == '\0') {
        (*pcVar7)();
        return;
      }
    }
    else if ((method_00->flags != 0xffff) &&
            (((piVar8 == (int *)0x0 || ((*(uint *)(*piVar8 + 0xa0) & 0x100) == 0)) &&
             (*(int *)(iVar4 + 0xc) != 0)))) {
      cVar9 = func_?();
      if (cVar9 != '\0') {
        return;
      }
      cVar9 = func_?();
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_00);
      cVar10 = func_?();
      if (cVar9 == '\0') {
        if (cVar10 != '\0') {
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                    ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_01);
          func_?();
          return;
        }
        (**(code **)(*piVar8 + 0xc0 + (uint)method_00->flags * 8))();
        return;
      }
      if (cVar10 == '\0') {
        puVar11 = (undefined4 *)func_?();
        (*(code *)*puVar11)();
        return;
      }
      uVar12 = 0;
      uVar13 = *(ushort *)(*piVar8 + 0xb6);
      if (uVar13 != 0) {
        do {
          if (*(char **)(*(int *)(*piVar8 + 0x58) + (uint)uVar12 * 8) == method_00->name)
          goto code_?;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      func_?();
code_?:
      puVar11 = (undefined4 *)func_?();
      (*(code *)*puVar11)();
      return;
    }
    (*pcVar7)();
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Suspend() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Suspend
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).suspended == 0) {
    (this->fields).suspended = 1;
    bVar1 = MVAvatarLocal_get_IsInVehicle(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_00 = (TransformNetworkManager *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar2,(MethodInfo *)0x0
                          );
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if (this_00 != (TransformNetworkManager *)0x0) {
        TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                  (this_00,(int32_t)pIVar3,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 != (MVNetworkGame *)0x0) {
          pRVar4 = (RuntimeVariableNetworkManager *)
                   ShootableButton::ShootableButton_get_InputSignalReceiver
                             ((ShootableButton *)pMVar2,(MethodInfo *)0x0);
          if (pRVar4 != (RuntimeVariableNetworkManager *)0x0) {
            RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                      (pRVar4,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 != (MVNetworkGame *)0x0) {
              pRVar4 = (RuntimeVariableNetworkManager *)
                       ShootableButton::ShootableButton_get_InputSignalReceiver
                                 ((ShootableButton *)pMVar2,(MethodInfo *)0x0);
              pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
              if (pRVar4 != (RuntimeVariableNetworkManager *)0x0) {
                RuntimeVariableNetworkManager::
                RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                          (pRVar4,(int32_t)pIVar3,(MethodInfo *)0x0);
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
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
                (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                 ,
                 MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
                );
      if (pGVar1 != (GameEventManager *)0x0) {
        GameEventManager::GameEventManager_remove_OnFirstTimeEvent
                  (pGVar1,(Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pUVar3,
                   (MethodInfo *)0x0);
        pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (pGVar1 != (GameEventManager *)0x0) {
          pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,
                     (MethodInfo *)0x0);
          if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
            GameEventManager+AvatarCommandsPlayModeManager::
            GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetRespawnWhenPossible
                      (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
            pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action<int>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_,
                       MethodInfo__System__Action<int>__Action_System__Object__void__);
            if (pGVar1 != (GameEventManager *)0x0) {
              GameEventManager::GameEventManager_remove_OnXPRewarded
                        (pGVar1,(Action_1_Int32_ *)pUVar3,(MethodInfo *)0x0);
              pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar1 != (GameEventManager *)0x0) &&
                 (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)(pGVar1->fields).GameState,
                 this_00 !=
                 (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                  *)0x0)) {
                this_01 = (SubscribableVariableBase_1_System_Single_ *)
                          System.dll::System::Collections::Generic::
                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                          ::Single,System::Object]::
                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                    (this_00,(MethodInfo *)0x0);
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__Action<MV::Common::MVGameStateType>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)this,
                           MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                           ,
                           MethodInfo__System__Action<MV::Common::MVGameStateType>__Action_System__Object__void__
                          );
                if (this_01 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
                  SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__remove_OnChange
                            (this_01,(Action_1_Single_ *)pUVar3,
                             MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__remove_OnChange_System__Action<MV::Common::MVGameStateType>_
                            );
                  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                     ((MethodInfo *)0x0);
                  if (pGVar1 != (GameEventManager *)0x0) {
                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar3,(Object *)this,
                               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                               ,(MethodInfo *)0x0);
                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                      GameEventManager+AvatarCommandsPlayModeManager::
                      GameEventManager_AvatarCommandsPlayModeManager_remove_OnReadyScreenShot
                                (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                         ((MethodInfo *)0x0);
                      if (pGVar1 != (GameEventManager *)0x0) {
                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?(TypeInfo__System__Action<int>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar3,(Object *)this,
                                   MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_
                                   ,MethodInfo__System__Action<int>__Action_System__Object__void__);
                        if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                          GameEventManager+AvatarCommandsPlayModeManager::
                          GameEventManager_AvatarCommandsPlayModeManager_remove_OnMoveBodyToSafeSpot
                                    (pGVar2,(Action_1_Int32_ *)pUVar3,(MethodInfo *)0x0);
                          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                             ((MethodInfo *)0x0);
                          if (pGVar1 != (GameEventManager *)0x0) {
                            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                      *)func_?(TypeInfo__System__Action<int>);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                            UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                            SceneManagement::Scene]::
                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                      (pUVar3,(Object *)this,
                                       MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_
                                       ,
                                       MethodInfo__System__Action<int>__Action_System__Object__void__
                                      );
                            if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                              GameEventManager+AvatarCommandsPlayModeManager::
                              GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAtSafeSpot
                                        (pGVar2,(Action_1_Int32_ *)pUVar3,(MethodInfo *)0x0);
                              pGVar1 = MVGameControllerBase::
                                       MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                              if (pGVar1 != (GameEventManager *)0x0) {
                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                          *)func_?(TypeInfo__System__Action);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar3,(Object *)this,
                                           MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__,
                                           (MethodInfo *)0x0);
                                if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)
                                {
                                  GameEventManager+AvatarCommandsPlayModeManager::
                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnRespawn
                                            (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                                  pGVar1 = MVGameControllerBase::
                                           MVGameControllerBase_get_GameEventManager
                                                     ((MethodInfo *)0x0);
                                  if (pGVar1 != (GameEventManager *)0x0) {
                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                              *)func_?(TypeInfo__System__Action);
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                    SceneManagement::Scene]::
                                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                              (pUVar3,(Object *)this,
                                               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__
                                               ,(MethodInfo *)0x0);
                                    if (pGVar2 != (GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                      GameEventManager+AvatarCommandsPlayModeManager::
                                      GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
                                                (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                                      pGVar1 = MVGameControllerBase::
                                               MVGameControllerBase_get_GameEventManager
                                                         ((MethodInfo *)0x0);
                                      if (pGVar1 != (GameEventManager *)0x0) {
                                        pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`2[UnityEngine::SceneManagement::
                                        Scene,UnityEngine::SceneManagement::Scene]::
                                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                  (pUVar3,(Object *)this,
                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__
                                                  ,(MethodInfo *)0x0);
                                        if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                          GameEventManager+AvatarCommandsPlayModeManager::
                                          GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToSpawnPoint
                                                    (pGVar2,(Action *)pUVar3,(MethodInfo *)0x0);
                                          pGVar1 = MVGameControllerBase::
                                                   MVGameControllerBase_get_GameEventManager
                                                             ((MethodInfo *)0x0);
                                          if (pGVar1 != (GameEventManager *)0x0) {
                                            pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                            pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`2[UnityEngine::SceneManagement::
                                            Scene,UnityEngine::SceneManagement::Scene]::
                                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                      (pUVar3,(Object *)this,
                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                                  ,
                                                  MethodInfo__System__Action<WinningConditionType>__Action_System__Object__void__
                                                  );
                                            if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                              GameEventManager+AvatarCommandsPlayModeManager::
                                              GameEventManager_AvatarCommandsPlayModeManager_remove_OnWinningConditionIntermediateDebriefing
                                                        (pGVar2,(Action_1_WinningConditionType_ *)
                                                                pUVar3,(MethodInfo *)0x0);
                                              pGVar1 = MVGameControllerBase::
                                                       MVGameControllerBase_get_GameEventManager
                                                                 ((MethodInfo *)0x0);
                                              if (pGVar1 != (GameEventManager *)0x0) {
                                                pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode;
                                                pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`2[UnityEngine::SceneManagement::
                                                Scene,UnityEngine::SceneManagement::Scene]::
                                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                          (pUVar3,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                  GameEventManager+AvatarCommandsPlayModeManager::
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnRemoveFromGame
                                                            (pGVar2,(Action *)pUVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                  (MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAsGhost
                                                            (pGVar2,(Action *)pUVar3,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = MVGameControllerBase::
                                                           MVGameControllerBase_get_GameEventManager
                                                                     ((MethodInfo *)0x0);
                                                  if (pGVar1 != (GameEventManager *)0x0) {
                                                    pGVar2 = (pGVar1->fields).AvatarCommandsPlayMode
                                                    ;
                                                    pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnSetToDeadMode__,
                                                  (MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    GameEventManager+AvatarCommandsPlayModeManager::
                                                                                                        
                                                  GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToDeadMode
                                                            (pGVar2,(Action *)pUVar3,
                                                             (MethodInfo *)0x0);
                                                  pMVar4 = MVGameControllerBase::
                                                           MVGameControllerBase_get_LocalPlayer
                                                                     ((MethodInfo *)0x0);
                                                  if (pMVar4 != (MVLocalPlayer *)0x0) {
                                                    source = (pMVar4->fields)._.OnCheckpointReached;
                                                    pUVar5 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction;
                                                  pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__
                                                  ,(MethodInfo *)0x0);
                                                  pIVar6 = (Il2CppClass *)
                                                           mscorlib.dll::System::Delegate::
                                                           Delegate_Remove((Delegate *)source,
                                                                           (Delegate *)pUVar3,
                                                                           (MethodInfo *)0x0);
                                                  pIVar7 = (Il2CppClass *)0x0;
                                                  if (pIVar6 != (Il2CppClass *)0x0) {
                                                    if ((UnityAction__Class *)pIVar6->image ==
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pIVar7 = pIVar6;
                                                    }
                                                    pUVar8 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction;
                                                  if (pIVar7 == (Il2CppClass *)0x0)
                                                  goto code_?;
                                                  }
                                                  (pUVar5->_0).element_class = pIVar7;
                                                  this_02 = MVGameControllerBase::
                                                            MVGameControllerBase_get_Game
                                                                      ((MethodInfo *)0x0);
                                                  if (this_02 != (MVNetworkGame *)0x0) {
                                                    this_03 = (PrefabPool *)
                                                              MVNetworkGame::
                                                              MVNetworkGame_get_LocalPlayer
                                                                        (this_02,(MethodInfo *)0x0);
                                                    if (this_03 != (PrefabPool *)0x0) {
                                                      this_04 = PrefabPool::
                                                                                                                                
                                                  PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                                            (this_03,(MethodInfo *)0x0);
                                                  pUVar3 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__
                                                  ,(MethodInfo *)0x0);
                                                  if (this_04 != (ObjectiveArrow *)0x0) {
                                                    BoostController::
                                                    BoostController_UnSubscribeToBoostChanged
                                                              ((BoostController *)this_04,
                                                                                                                              
                                                  BoostType__Enum_ExtraHealthFloatMultiplier,
                                                  (Action *)pUVar3,(MethodInfo *)0x0);
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
  func_?(0);
  pIVar6 = extraout_ECX;
  pUVar8 = extraout_EDX;
code_?:
  func_?(pIVar6,pUVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Update
          (MVAvatarLocal *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if ((pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) &&
     (pMVar2 = (pMVar1->fields).currentMode, pMVar2 != (MVAvatarLocal_AvatarMode *)0x0)) {
    (*(code *)(pMVar2->klass->vtable).__unknown_2.method)
              (pMVar2,interactionMap,(pMVar2->klass->vtable).Activate.methodPtr);
    return interactionMap;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar4 = (InputToInGameAction *)(*pcVar3)();
  return pIVar4;
}


/* Void UpdateMaxHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UpdateMaxHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields)._.skillDataManager;
  if (pWVar1 != (WorldObjectSkillDataManager *)0x0) {
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (pWVar1,StringLiteral_MaxHealth,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      iVar3 = 100;
      fVar4 = extraout_ECX;
    }
    else {
      pWVar1 = (this->fields)._.skillDataManager;
      if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (pWVar1,StringLiteral_MaxHealth,(MethodInfo *)0x0);
      fVar4 = extraout_ECX_00;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fVar4 = extraout_ECX_01;
    }
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
      fVar4 = extraout_ECX_02;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
              ((float)iVar3 * fVar4,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._.MaxHealth;
    if (pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      (*(code *)(pMVar5->klass->vtable).set_Value.method)();
      pSVar6 = (this->fields).spawnRoleDataReceiver;
      if (pSVar6 == (SpawnRoleDataReceiver *)0x0) {
        return;
      }
      pMVar5 = (this->fields)._.MaxHealth;
      this_00 = (pSVar6->fields).maxHealth;
      if ((pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
         (iVar3 = (*(code *)(pMVar5->klass->vtable).get_Value.method)(),
         this_00 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0)) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleReceiverVariable`1[System::Int32]::
        SpawnRoleReceiverVariable_1_System_Int32__set_Value
                  (this_00,iVar3,
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
  auVar2._0_44_ = in_stack_3._0_44_;
  auVar2._44_4_ = in_ECX;
  auVar2._48_4_ = unaff_EBP;
  auVar4._44_8_ = auVar2._44_8_;
  auVar4._0_40_ = in_stack_3._0_40_;
  auVar4._40_4_ = unaff_ESI;
  if (cRam_? == '\0') {
    auVar5._40_12_ = auVar4._40_12_;
    auVar5._0_36_ = in_stack_3._0_36_;
    auVar5._36_4_ = _UNK_?;
    auVar4._36_16_ = auVar5._36_16_;
    auVar4._0_32_ = in_stack_3._0_32_;
    auVar4._32_4_ = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  auVar6._48_4_ = auVar4._48_4_;
  auVar6._0_44_ = auVar4._0_44_;
  auVar6._44_4_ = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    auVar7._40_12_ = auVar6._40_12_;
    auVar7._0_36_ = auVar4._0_36_;
    auVar7._36_4_ = TypeInfo__MVGameControllerBase;
    auVar6._36_16_ = auVar7._36_16_;
    auVar6._0_32_ = auVar4._0_32_;
    auVar6._32_4_ = &UNK_?;
    func_?();
  }
  auVar8._40_12_ = auVar6._40_12_;
  auVar8._0_36_ = auVar6._0_36_;
  auVar8._36_4_ = 0;
  auVar9._36_16_ = auVar8._36_16_;
  auVar9._0_32_ = auVar6._0_32_;
  auVar9._32_4_ = &UNK_?;
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    auVar10._44_8_ = auVar9._44_8_;
    auVar10._0_40_ = auVar9._0_40_;
    auVar10._40_4_ = 0;
    auVar11._40_12_ = auVar10._40_12_;
    auVar11._0_36_ = auVar9._0_36_;
    auVar11._36_4_ = this_00;
    auVar12._36_16_ = auVar11._36_16_;
    auVar12._0_32_ = auVar9._0_32_;
    auVar12._32_4_ = &UNK_?;
    this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      auVar13._40_4_ = lineOfFire.m_Direction.z;
      auVar13._0_40_ = auVar12._0_40_;
      auVar13._44_4_ = &stack0xfffffff8;
      auVar14._36_4_ = this_01;
      auVar14._0_36_ = auVar12._0_36_;
      auVar14._40_8_ = auVar13._40_8_;
      auVar15._0_32_ = auVar12._0_32_;
      auVar15._32_4_ = &UNK_?;
      auVar15._36_12_ = auVar14._36_12_;
      auVar15._48_4_ = 0;
      bVar16 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        ((MVPlayerContainer *)this_01,(int32_t)lineOfFire.m_Direction.z,
                         (MVPlayer **)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        if (auVar15._44_4_ == (MVPlayer *)0x0) goto code_?;
        bVar16 = MVPlayer::MVPlayer_IsOnSameTeam_1
                          (auVar15._44_4_,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (bVar16 == 0) {
          bVar16 = MVAvatar::MVAvatar_IsInMode
                            ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
          if (bVar16 == 0) {
            pAVar17 = (this->fields)._.avatar;
            if (pAVar17 == (Avatar_1 *)0x0) goto code_?;
            bVar16 = Avatar::Avatar_1_HasModifierEffect
                              (pAVar17,AvatarModifierEffect__Enum_Invulnerable,(MethodInfo *)0x0);
            if (bVar16 == 0) {
              pAVar17 = (this->fields)._.avatar;
              if (pAVar17 == (Avatar_1 *)0x0) goto code_?;
              voxelHit.normal.z = lineOfFire.m_Direction.x;
              voxelHit.cubePos._0_4_ = lineOfFire.m_Direction.y;
              auVar18 = VVar1._52_20_;
              pCVar19 = (Collider *)auVar18._0_4_;
              this = (MVAvatarLocal *)auVar18._4_4_;
              uVar20 = auVar18._8_4_;
              voxelHit.point.x = (float)(int)auVar18._12_8_;
              voxelHit.point.y = (float)(int)((ulonglong)auVar18._12_8_ >> 0x20);
              Avatar::Avatar_1_VisualizeBulletImpact
                        (pAVar17,(VoxelHit)
                                CONCAT2052(CONCAT164(auVar21,pCVar19),
                                           CONCAT448(voxelHit.distance,
                                                     CONCAT444(voxelHit.cube,
                                                               CONCAT440(voxelHit.woId,
                                                                         CONCAT436(0,CONCAT432(
                                                  shooterActorNumber,
                                                  CONCAT428(lineOfFire.m_Direction.z,
                                                            CONCAT424(CONCAT22(voxelHit.cubePos.y,
                                                                               voxelHit.cubePos.x),
                                                                      CONCAT420(voxelHit.normal.z,
                                                                                CONCAT416(lineOfFire
                                                                                          .m_Origin.
                                                                                          z,
                                                  CONCAT412(lineOfFire.m_Origin.y,
                                                            CONCAT48(lineOfFire.m_Origin.x,
                                                                     CONCAT44((float)voxelHit.
                                                  interactionFlags._4_4_,(float)&UNK_?)))))))
                                                  )))))),lineOfFire,shooterActorNumber,0.0,
                         (MethodInfo *)voxelHit.woId);
            }
          }
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void <InitializeHealth>m__1(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeHealth_m__1
               (MVAvatarLocal *this,Object *health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      fVar4 = (float10)(*(code *)(pMVar3->klass->vtable).get_Value.method)
                                 (pMVar3,(pMVar3->klass->vtable).set_Value.methodPtr);
      MVAvatar::MVAvatar_TrySpawningHealParticles
                ((MVAvatar *)this,previousHealth,(float)fVar4,(MethodInfo *)0x0);
    }
    pMVar3 = (this->fields)._.Health;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar4 = (float10)(*(code *)(pMVar3->klass->vtable).get_Value.method)
                                 (pMVar3,(pMVar3->klass->vtable).set_Value.methodPtr);
      (this->fields).previousHealth = (float)fVar4;
      pSVar5 = (this->fields).spawnRoleDataReceiver;
      if ((pSVar5 != (SpawnRoleDataReceiver *)0x0) &&
         (this_00 = (pSVar5->fields).health,
         this_00 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) {
        pSVar1 = TypeInfo__System__Single;
        if ((health->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar2 = (float *)func_?(health);
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Single]::
          SpawnRoleReceiverVariable_1_System_Single__set_Value
                    (this_00,*pfVar2,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                    );
          return;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pSVar1 = extraout_ECX;
code_?:
  func_?(health,pSVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <InitializeShield>m__0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeShield_m__0
               (MVAvatarLocal *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
            SpawnRoleReceiverVariable_1_System_Single__set_Value
                      (this_00,*pfVar5,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                      );
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).currAnim = TypeInfo__System__String->static_fields->Empty;
  this_00 = (AvatarLimbManager_LimbRotator *)func_?(TypeInfo__AvatarRespawnHandler);
  AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).avatarRespawnHandler = (AvatarRespawnHandler *)this_00;
  (this->fields).boostedHealthMultiplier = 1.0;
  (this->fields).spawnWorldObjectId = -1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    avatarPrefab = (GameObject *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                              (MethodInfo *)0x0);
    MVAvatar::MVAvatar__ctor((MVAvatar *)this,data,avatarPrefab,worldObjects,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AvatarLocal get_AvatarLocal() */

AvatarLocal *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarLocal *)(this->fields)._.avatar;
  if (pAVar1 == (AvatarLocal *)0x0) {
    return (AvatarLocal *)0x0;
  }
  bVar2 = (TypeInfo__AvatarLocal->_1).naturalAligment;
  if (((pAVar1->klass->_1).naturalAligment < bVar2) ||
     ((pAVar1->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pAVar4 = (AvatarLocal *)0x0;
  if (bVar3) {
    pAVar4 = pAVar1;
  }
  if (pAVar4 != (AvatarLocal *)0x0) {
    return pAVar4;
  }
  func_?(pAVar1,TypeInfo__AvatarLocal);
  pcVar5 = (code *)swi(3);
  pAVar1 = (AvatarLocal *)(*pcVar5)();
  return pAVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).pickupOwner;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if ((this->fields).pickupOwner == (AvatarPickupOwner *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x_00 = *(Object_1 **)(in_stack_3 + 0x34);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if (*(MvCharacterController **)(in_stack_3 + 0x34) != (MvCharacterController *)0x0) {
    bVar1 = MvCharacterController::MvCharacterController_get_IsGrounded
                      (*(MvCharacterController **)(in_stack_3 + 0x34),(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    piStack4 = *(int **)(in_stack_3 + 0x34);
    if (piStack4 != (int *)0x0) {
      bVar1 = (**(code **)(*piStack4 + 0x100))();
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (MVLocalObjectController *)
              PrefabPool::PrefabPool_get_MVSmokePrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalObjectController *)0x0) {
      bVar1 = MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
                        (this_01,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean get_IsInVehicle() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_IsInVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).vehicleRigidBody;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    auVar4._4_4_ = fVar3;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = 0;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar4 << 0x20),*pVVar1,
                        (MethodInfo *)0x0);
    fVar5 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar6)();
  return pVVar1;
}


/* AvatarPickupOwner get_PickupOwner() */

AvatarPickupOwner *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_PickupOwner
          (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).pickupOwner;
}


/* MVRigidBody get_RigidBody() */

MVRigidBody *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_RigidBody
          (MVAvatarLocal *this,MethodInfo *method)

{
  return (MVRigidBody *)(this->fields).avatarMotor;
}


/* KogamaSettingWrapperBase get_Settings() */

KogamaSettingWrapperBase *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_Settings
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  values = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((((uint)(
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
  if (TypeInfo__MVAvatarLocal->static_fields->__f__mg_cache0 ==
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
       *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
              );
    TypeInfo__MVAvatarLocal->static_fields->__f__mg_cache0 =
         (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *)this_00;
  }
  pKVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (values,pKVar1,TypeInfo__MVAvatarLocal->static_fields->__f__mg_cache0,
                      (MethodInfo *)0x0);
  return pKVar1;
}


/* Int32 get_SpawnId() */

int32_t Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_SpawnId
                  (MVAvatarLocal *this,MethodInfo *method)

{
  return (this->fields).spawnWorldObjectId;
}


/* Vector3 get_VelocityAbsolute() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_VelocityAbsolute
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).vehicleRigidBody;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pAVar4 = (this->fields).avatarMotor;
    if (pAVar4 != (AvatarMotor *)0x0) {
      apIStack_5[0] = (pAVar4->klass->vtable).get_IsMovementLocked.methodPtr;
      puVar6 = (undefined8 *)
               (*(code *)(pAVar4->klass->vtable).get_Velocity.method)(apIStack_5,pAVar4);
      uVar7 = *puVar6;
      fVar8 = *(float *)(puVar6 + 1);
      __return_storage_ptr__->x = (float)(int)uVar7;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
      __return_storage_ptr__->z = fVar8;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar2 = (this->fields).vehicleRigidBody;
    if (pMVar2 != (MVRigidBody *)0x0) {
      apIStack_5[0] = (pMVar2->klass->vtable).__unknown_2.methodPtr;
      puVar6 = (undefined8 *)
               (*(code *)(pMVar2->klass->vtable).__unknown_1.method)(apIStack_5,pMVar2);
      uVar7 = *puVar6;
      fVar8 = *(float *)(puVar6 + 1);
      __return_storage_ptr__->x = (float)(int)uVar7;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
      __return_storage_ptr__->z = fVar8;
      return __return_storage_ptr__;
    }
  }
  apIStack_5[0] = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar9)();
  return pVVar10;
}


/* Vector3 get_VelocityRelative() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_VelocityRelative
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarMotor;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar1 = (this->fields).avatarMotor;
    if (pAVar1 == (AvatarMotor *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pVVar4 = (Vector3 *)
             (*(code *)(pAVar1->klass->vtable).get_Velocity.method)(&stack0xfffffff0,pAVar1);
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  }
  fVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
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

