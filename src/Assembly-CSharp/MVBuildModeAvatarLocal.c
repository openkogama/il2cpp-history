
/* Void Activate(Int32, SpawnRoleDataReceiver, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Activate
               (MVBuildModeAvatarLocal *this,int32_t idFrom,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&MethodInfo__MVBuildModeAvatarLocal__HideEditCube__);
    func_?(&MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
  func_?(&(this->fields).spawnRoleDataReceiver,spawnRoleDataReceiver);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
                (this_00,(Action *)pNVar2,(MethodInfo *)0x0);
      pLVar3 = (this->fields).laserPoint;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pLVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
code_?:
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar5->fields)._PlayerController_k__BackingField,
           this_01 != (MVLocalObjectController *)0x0)) {
          MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
                    (this_01,(ILocalObject *)this,(MethodInfo *)0x0);
          pAVar6 = (this->fields).avatarScriptObject;
          if ((pAVar6 != (AvatarLocalBuildMode *)0x0) &&
             (pAVar7 = (pAVar6->fields).avatarCamerasDesktop,
             pAVar7 != (AvatarCamerasDesktopBuildMode *)0x0)) {
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar8 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_SetCameraController
                        (pMVar8,(pAVar7->fields).cameraController,(MethodInfo *)0x0);
              pAVar6 = (this->fields).avatarScriptObject;
              if (((pAVar6 != (AvatarLocalBuildMode *)0x0) &&
                  (pAVar7 = (pAVar6->fields).avatarCamerasDesktop,
                  pAVar7 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
                 (this_02 = (pAVar7->fields).cameraController, this_02 != (MVCameraController *)0x0)
                 ) {
                MVCameraController::MVCameraController_SetCamera
                          (this_02,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                this_06 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_06 != (MainCameraManager *)0x0) {
                  pMVar9 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                      (this_06,(MethodInfo *)0x0);
                  if (pMVar9 != (MVCameraBase *)0x0) {
                    fVar10 = (float10)(*(code *)(pMVar9->klass->vtable).get_FieldOfView.method)
                                                (pMVar9);
                    if (pMVar8 != (MainCameraManager *)0x0) {
                      MainCameraManager::MainCameraManager_set_FieldOfView
                                (pMVar8,(float)fVar10,(MethodInfo *)0x0);
                      (*(code *)(this->klass->vtable).set_Position.method)(this);
                      (*(code *)(this->klass->vtable).set_Rotation.method)(this,rotation.x);
                      if (spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                        if (0 < idFrom) {
                          this_03 = (spawnRoleDataReceiver->fields).position;
                          pVVar11 = (Vector3 *)
                                    (*(code *)(this->klass->vtable).get_Position.method)
                                              (&stack0xfffffff0,this);
                          if (this_03 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)
                          goto code_?;
                          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                          ::SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
                                    (this_03,*pVVar11,
                                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                                    );
                        }
                        this_04 = (spawnRoleDataReceiver->fields).woId;
                        if (this_04 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
                          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                          SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                                    ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_04,
                                     (this->fields)._._._._.id,
                                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                                    );
                          distanceReferencePoint = (this->fields)._._._.transform;
                          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                                    (distanceReferencePoint,(MethodInfo *)0x0);
                          if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pAVar12 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                              (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                          pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (pNVar2,(Object *)this,
                                     MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                                     (MethodInfo *)0x0);
                          pAVar13 = (Action *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar12,(Delegate *)pNVar2,
                                               (MethodInfo *)0x0);
                          pAVar12 = (Action *)0x0;
                          if (pAVar13 == (Action *)0x0) {
code_?:
                            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                                      (ChatCommand__Enum_HideAllUI,pAVar12,(MethodInfo *)0x0);
                            return;
                          }
                          if (pAVar13->klass == TypeInfo__System__Action) {
                            pAVar12 = pAVar13;
                          }
                          if (pAVar12 != (Action *)0x0) goto code_?;
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
        pLVar3 = (this->fields).laserPoint;
        if (pLVar3 != (LaserPointer *)0x0) {
          this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pLVar3,(MethodInfo *)0x0);
          if (this_05 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_05,1,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DeActivate(Int32, SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_DeActivate
               (MVBuildModeAvatarLocal *this,int32_t idTo,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&MethodInfo__MVBuildModeAvatarLocal__HideEditCube__);
    func_?(&MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleDataReceiver = (SpawnRoleDataReceiver *)0x0;
  func_?(&(this->fields).spawnRoleDataReceiver,0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
                (this_00,(Action *)pNVar2,(MethodInfo *)0x0);
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar3 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                         (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
      pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)pNVar2,(MethodInfo *)0x0);
      pAVar3 = (Action *)0x0;
      if (pAVar4 != (Action *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar4;
        }
        pAVar5 = TypeInfo__System__Action;
        if (pAVar3 == (Action *)0x0) goto code_?;
      }
      ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                (ChatCommand__Enum_HideAllUI,pAVar3,(MethodInfo *)0x0);
      pLVar6 = (this->fields).laserPoint;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pLVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        return;
      }
      pLVar6 = (this->fields).laserPoint;
      if ((pLVar6 != (LaserPointer *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pLVar6,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_FixedUpdate
          (MVBuildModeAvatarLocal *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).buildModeAvatarLocalModes;
  if ((pMVar2 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) &&
     (pMStack_3 = (pMVar2->fields).currentMode,
     pMStack_3 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0)) {
    pIStack_1 = (pMStack_3->klass->vtable).__unknown_3.methodPtr;
    pIStack_4 = movementMap;
    (*(code *)(pMStack_3->klass->vtable).__unknown_2.method)();
    return movementMap;
  }
  uVar5 = func_?(&pMStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pIVar7 = (IInputToPlayerMovement *)(*pcVar6)();
  return pIVar7;
}


/* Vector3 GetLookDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_GetLookDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal *this,MethodInfo *method
                    )

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pVVar1 = MainCameraManager::MainCameraManager_get_FireDirection
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar1->x;
    uStack_2._4_4_ = pVVar1->y;
    fStack_3 = pVVar1->z;
    puVar4 = (undefined8 *)func_?(&stack0xffffffe4,&uStack_2);
    uVar5 = *puVar4;
    fVar6 = *(float *)(puVar4 + 1);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Void HideEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_HideEditCube
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).laserPoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pLVar1 = (this->fields).laserPoint;
  if ((pLVar1 != (LaserPointer *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Initialize
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&TypeInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes);
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarScriptObject;
  if (pAVar1 != (AvatarLocalBuildMode *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pAVar2 = (pAVar1->fields).avatarCamerasDesktopPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pAVar2 = (AvatarCamerasDesktopBuildMode *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pAVar2,
                        AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                       );
    (pAVar1->fields).avatarCamerasDesktop = pAVar2;
    func_?(&(pAVar1->fields).avatarCamerasDesktop,pAVar2);
    pAVar2 = (pAVar1->fields).avatarCamerasDesktop;
    if ((pAVar2 != (AvatarCamerasDesktopBuildMode *)0x0) &&
       (pJVar3 = (pAVar2->fields).jetPackCamera, pJVar3 != (JetPackCamera *)0x0)) {
      (*(code *)(pJVar3->klass->vtable).Initialize.method)(pJVar3,this,pJVar3->klass[1]._0.image);
      pAVar4 = (pAVar2->fields).avatarEditModeCamera;
      if (pAVar4 != (AvatarEditModeCamera *)0x0) {
        (*(code *)(pAVar4->klass->vtable).Initialize.method)(pAVar4,this,pAVar4->klass[1]._0.image);
        pAVar5 = (pAVar2->fields).avatarCamerasWrapper;
        if (pAVar5 != (AvatarCamerasWrapper *)0x0) {
          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                    (pAVar5,(MVCameraBase *)(pAVar2->fields).jetPackCamera,(MethodInfo *)0x0);
          pAVar5 = (pAVar2->fields).avatarCamerasWrapper;
          if (pAVar5 != (AvatarCamerasWrapper *)0x0) {
            AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                      (pAVar5,(MVCameraBase *)(pAVar2->fields).avatarEditModeCamera,
                       (MethodInfo *)0x0);
            pAVar5 = (pAVar2->fields).avatarCamerasWrapper;
            this_00 = (pAVar2->fields).cameraController;
            if (pAVar5 != (AvatarCamerasWrapper *)0x0) {
              cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                      (pAVar5,(MethodInfo *)0x0);
              if (this_00 != (MVCameraController *)0x0) {
                MVCameraController::MVCameraController_Initialize
                          (this_00,cameraBases,(MethodInfo *)0x0);
                this_03 = (SchemaElementDecl *)
                          MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_03 != (SchemaElementDecl *)0x0) {
                  bVar6 = System.Xml.dll::System::Xml::Schema::SchemaElementDecl::
                          SchemaElementDecl_get_HasDefaultAttribute(this_03,(MethodInfo *)0x0);
                  if (bVar6 == 0) {
                    this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                        ((MethodInfo *)0x0);
                    if (this_04 == (MainCameraManager *)0x0) goto code_?;
                    MainCameraManager::MainCameraManager_SetCameraController
                              (this_04,(pAVar2->fields).cameraController,(MethodInfo *)0x0);
                  }
                  method_00 = TypeInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes;
                  pMVar7 = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)pMVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  (pMVar7->fields).avatar = this;
                  func_?(&(pMVar7->fields).avatar,this);
                  (this->fields).buildModeAvatarLocalModes = pMVar7;
                  func_?(&(this->fields).buildModeAvatarLocalModes,pMVar7);
                  pMVar7 = (this->fields).buildModeAvatarLocalModes;
                  if (pMVar7 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) {
                    MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
                    MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_SetMode
                              (pMVar7,MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit,
                               (MethodInfo *)0x0);
                    pMVar8 = (this->fields)._.body;
                    if ((pMVar8 != (MVBody *)0x0) &&
                       (this_01 = (pMVar8->fields)._._._.gameObject, this_01 != (GameObject *)0x0))
                    {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_01,0,(MethodInfo *)0x0);
                      MVar9 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                         ((MethodInfo *)0x0);
                      if (MVar9 == MVGameMode__Enum_Edit) {
                        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (pMVar10 != (MVNetworkGame *)0x0) {
                          this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                              (pMVar10,(MethodInfo *)0x0);
                          if (this_05 != (MVLocalPlayer *)0x0) {
                            PVar11 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership
                                               (this_05,(MethodInfo *)0x0);
                            if (((char)PVar11 == '\x02') || ((char)PVar11 == '\x01'))
                            goto code_?;
                            goto code_?;
                          }
                        }
                      }
                      else {
code_?:
                        pLVar12 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                                            ((MVBuildModeAvatar *)this,1,(MethodInfo *)0x0);
                        (this->fields).laserPoint = pLVar12;
                        func_?(&(this->fields).laserPoint,pLVar12);
                        pLVar12 = (this->fields).laserPoint;
                        if (pLVar12 != (LaserPointer *)0x0) {
                          LaserPointer::LaserPointer_SubscribeToCommands(pLVar12,(MethodInfo *)0x0);
code_?:
                          pUVar13 = (this->fields)._._._.PositionChanged;
                          pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                                    func_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    (pUVar14,(Object *)this,
                                     MethodInfo__MVBuildModeAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                     ,(MethodInfo *)0x0);
                          pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pUVar13,(Delegate *)pUVar14,
                                               (MethodInfo *)0x0);
                          if (pDVar15 == (Delegate *)0x0) {
                            (this->fields)._._._.PositionChanged =
                                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                          }
                          else {
                            pUVar13 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *
                                      )func_?();
                            if (pUVar13 ==
                                (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
                            goto code_?;
                            (this->fields)._._._.PositionChanged = pUVar13;
                            iVar16 = func_?();
                            if (iVar16 == 0) goto code_?;
                          }
                          func_?();
                          pUVar17 = (this->fields)._._._.ScaleChanged;
                          pUVar14 = (UnityAction_2_System_Object_System_Object_ *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    (pUVar14,(Object *)this,
                                     MethodInfo__MVBuildModeAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                                     ,(MethodInfo *)0x0);
                          pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pUVar17,(Delegate *)pUVar14,
                                               (MethodInfo *)0x0);
                          if (pDVar15 == (Delegate *)0x0) {
                            (this->fields)._._._.ScaleChanged =
                                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
                          }
                          else {
                            pUVar17 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                                      func_?();
                            if (pUVar17 ==
                                (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
                            goto code_?;
                            (this->fields)._._._.ScaleChanged = pUVar17;
                            iVar16 = func_?();
                            if (iVar16 == 0) goto code_?;
                          }
                          func_?();
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
                          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UpdateController::UpdateController_AddLateUpdateObject
                                    ((IUpdatecontrollerSubscriberLateUpdate *)this,
                                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0)
                          ;
                          pAVar18 = (AvatarLimbManager *)func_?();
                          ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
                          __Il2CppFullySharedGenericType]::
                          ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                    ((ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                      *)pAVar18,(MethodInfo *)0x0);
                          (this->fields)._.limbManager = pAVar18;
                          func_?();
                          pAVar1 = (this->fields).avatarScriptObject;
                          if ((pAVar1 != (AvatarLocalBuildMode *)0x0) &&
                             (pAVar18 = (this->fields)._.limbManager,
                             pAVar18 != (AvatarLimbManager *)0x0)) {
                            (*(code *)(pAVar18->klass->vtable).Initialize.method)
                                      (pAVar18,this,(this->fields)._.body,
                                       (pAVar1->fields).enabledChangeHandler,
                                       (this->fields)._.limbRotationRuntimeData,
                                       (pAVar18->klass->vtable).UpdateLimbRotations.methodPtr);
                            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar10 != (MVNetworkGame *)0x0) &&
                               (this_02 = (pMVar10->fields).playerContainer,
                               this_02 != (MVPlayerContainer *)0x0)) {
                              this_06 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                                  (this_02,(this->fields)._._._._.ownerActorNr,
                                                   (MethodInfo *)0x0);
                              if (this_06 != (MVPlayer *)0x0) {
                                MVPlayer::MVPlayer_NotifyAvatarCreated
                                          (this_06,(this->fields)._._._._.id,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void InitializeLaserPointerAndEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::
     MVBuildModeAvatarLocal_InitializeLaserPointerAndEditCube
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    this = (MVBuildModeAvatarLocal *)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this == (MVBuildModeAvatarLocal *)0x0) goto code_?;
    PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership
                      ((MVLocalPlayer *)this,(MethodInfo *)0x0);
    if (((char)PVar2 != '\x02') && ((char)PVar2 != '\x01')) {
      return;
    }
  }
  pLVar3 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                     ((MVBuildModeAvatar *)this,1,(MethodInfo *)0x0);
  (this->fields).laserPoint = pLVar3;
  func_?(&(this->fields).laserPoint,pLVar3);
  if ((this->fields).laserPoint != (LaserPointer *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__System__Action<LaserPointerState>);
      func_?(&TypeInfo__System__Action<unsigned_char>);
      cRam_? = '\x01';
    }
    pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar4 != (GameEventManager *)0x0) &&
       (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
       pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
      pGVar6 = (pGVar5->fields).LaserCommands;
      pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?();
      if (in_stack_8 != (Object *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar7,in_stack_8,in_stack_8->klass[1]._0.byval_arg.data.dummy,
                   (MethodInfo *)0x0);
        if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnCubeMaterialChanged
                    (pGVar6,(Action_1_Byte__1 *)pUVar7,(MethodInfo *)0x0);
          pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar4 != (GameEventManager *)0x0) &&
             (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
             pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            pGVar6 = (pGVar5->fields).LaserCommands;
            this_01 = (UnityAction_1_System_Single_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
            UnityAction_1_System_Single___ctor
                      (this_01,in_stack_8,in_stack_8->klass[1]._0.declaringType,
                       (MethodInfo *)0x0);
            if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                          0x0) {
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnActivateLaserForDuration
                        (pGVar6,(Action_1_Single_ *)this_01,(MethodInfo *)0x0);
              pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar4 != (GameEventManager *)0x0) &&
                 (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
                 pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                pGVar6 = (pGVar5->fields).LaserCommands;
                pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (pUVar7,in_stack_8,
                           in_stack_8->klass[1]._0.this_arg.data.dummy,(MethodInfo *)0x0);
                if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                               *)0x0) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnChangeState
                            (pGVar6,(Action_1_LaserPointerState_ *)pUVar7,(MethodInfo *)0x0);
                  pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                     ((MethodInfo *)0x0);
                  if ((pGVar4 != (GameEventManager *)0x0) &&
                     (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
                     pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                    pGVar6 = (pGVar5->fields).LaserCommands;
                    pUVar7 = (UnityAction_1_System_Int32Enum_ *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                    Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                              (pUVar7,in_stack_8,in_stack_8->klass[1]._0.name,
                               (MethodInfo *)0x0);
                    if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                   *)0x0) {
                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnLaserActiveChanged
                                (pGVar6,(Action_1_Boolean_ *)pUVar7,(MethodInfo *)0x0);
                      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                         ((MethodInfo *)0x0);
                      if ((pGVar4 != (GameEventManager *)0x0) &&
                         (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
                         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                        pGVar6 = (pGVar5->fields).LaserCommands;
                        this_02 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
                                  func_?();
                        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                        SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::
                        Vector3]::SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
                                  (this_02,in_stack_8,
                                   in_stack_8->klass[1]._0.element_class,(MethodInfo *)0x0);
                        if (pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                       *)0x0) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
                                    (pGVar6,(Action_1_UnityEngine_Vector3_ *)this_02,
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
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_OnPositionChanged
               (MVBuildModeAvatarLocal *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)positionChangedEventArgs;
    func_?(value + 1,positionChangedEventArgs);
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
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

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_OnScaleChanged
               (MVBuildModeAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    func_?(&
                    MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)scaleChangedEventArgs;
    func_?(value + 1,scaleChangedEventArgs);
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
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


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetCamera
               (MVBuildModeAvatarLocal *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarScriptObject;
  if ((((pAVar1 != (AvatarLocalBuildMode *)0x0) &&
       (pAVar2 = (pAVar1->fields).avatarCamerasDesktop,
       pAVar2 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
      (cameraController = (pAVar2->fields).cameraController,
      cameraController != (MVCameraController *)0x0)) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      newCamera = (MVCameraBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                            );
      MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                (this_00,newCamera,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetToSpawn() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                      ((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)(*(code *)(this_00->klass->vtable).get_WorldPosition_1.method)();
    (*(code *)(this->klass->vtable).set_WorldPosition.method)
              (this,*puVar1,*(undefined4 *)(puVar1 + 1),
               (this->klass->vtable).get_IsTransformDefined.methodPtr);
    pQVar2 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                       (&QStack_3,this_00,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
              ((MVWorldObjectClient *)this,*pQVar2,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      pMVar4 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0);
      if (pMVar4 != (MVCameraBase *)0x0) {
        (*(code *)(pMVar4->klass->vtable).Reset.method)
                  (pMVar4,(pMVar4->klass->vtable).FocusOnObject.methodPtr);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SpawnRoleDataReceiverAction(MVBuildModeAvatarLocal+SpawnRoleDataReceiverActionDelegate) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SpawnRoleDataReceiverAction
               (MVBuildModeAvatarLocal *this,
               MVBuildModeAvatarLocal_SpawnRoleDataReceiverActionDelegate
               *spawnRoleDataReceiverActionDelegate,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    if (spawnRoleDataReceiverActionDelegate ==
        (MVBuildModeAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
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


/* Void Suspend() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Suspend
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).transformNetworkManager, this_00 != (TransformNetworkManager *)0x0)
     ) {
    TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
              (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pRVar2 = (pMVar1->fields).runtimeVariableNetworkManager,
       pRVar2 != (RuntimeVariableNetworkManager *)0x0)) {
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                (pRVar2,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pRVar2 = (pMVar1->fields).runtimeVariableNetworkManager,
         pRVar2 != (RuntimeVariableNetworkManager *)0x0)) {
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                  (pRVar2,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSuspend() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_UnSuspend
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Update
          (MVBuildModeAvatarLocal *this,InputToInGameAction *movementMap,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).buildModeAvatarLocalModes;
  if ((pMVar2 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) &&
     (pMStack_3 = (pMVar2->fields).currentMode,
     pMStack_3 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0)) {
    pIStack_1 = (pMStack_3->klass->vtable).__unknown_4.methodPtr;
    pIStack_4 = movementMap;
    (*(code *)(pMStack_3->klass->vtable).__unknown_3.method)();
    return movementMap;
  }
  uVar5 = func_?(&pMStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pIVar7 = (InputToInGameAction *)(*pcVar6)();
  return pIVar7;
}


/* MVBuildModeAvatarLocal(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
               (MVBuildModeAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarLocalBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarLocalBuildMode>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVBuildModeAvatar::MVBuildModeAvatar__ctor
              ((MVBuildModeAvatar *)this,data,(pPVar1->fields).mvLocalAvatarBuildModePrefab,
               worldObjects,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pAVar2 = (AvatarLocalBuildMode *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          AvatarLocalBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarLocalBuildMode>__
                         );
      (this->fields).avatarScriptObject = pAVar2;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

