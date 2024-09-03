
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
      this_01 = (this->fields).laserPoint;
      if (this_01 != (LaserPointer *)0x0) {
        this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_06 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_06,1,(MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (this_02 = (pMVar3->fields)._PlayerController_k__BackingField,
             this_02 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
                      (this_02,(ILocalObject *)this,(MethodInfo *)0x0);
            pAVar4 = (this->fields).avatarScriptObject;
            if ((pAVar4 != (AvatarLocalBuildMode *)0x0) &&
               (pAVar5 = (pAVar4->fields).avatarCamerasDesktop,
               pAVar5 != (AvatarCamerasDesktopBuildMode *)0x0)) {
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (pMVar6 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_SetCameraController
                          (pMVar6,(pAVar5->fields).cameraController,(MethodInfo *)0x0);
                pAVar4 = (this->fields).avatarScriptObject;
                if (((pAVar4 != (AvatarLocalBuildMode *)0x0) &&
                    (pAVar5 = (pAVar4->fields).avatarCamerasDesktop,
                    pAVar5 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
                   (this_03 = (pAVar5->fields).cameraController,
                   this_03 != (MVCameraController *)0x0)) {
                  MVCameraController::MVCameraController_SetCamera
                            (this_03,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                     ((MethodInfo *)0x0);
                  this_07 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_07 != (MainCameraManager *)0x0) {
                    pMVar7 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                       (this_07,(MethodInfo *)0x0);
                    if (pMVar7 != (MVCameraBase *)0x0) {
                      fVar8 = (float10)(*(code *)(pMVar7->klass->vtable).get_FieldOfView.method)
                                                  (pMVar7);
                      if (pMVar6 != (MainCameraManager *)0x0) {
                        MainCameraManager::MainCameraManager_set_FieldOfView
                                  (pMVar6,(float)fVar8,(MethodInfo *)0x0);
                        (*(code *)(this->klass->vtable).set_Position.method)(this);
                        (*(code *)(this->klass->vtable).set_Rotation.method)(this,rotation.x);
                        if (spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                          if (0 < idFrom) {
                            this_04 = (spawnRoleDataReceiver->fields).position;
                            pVVar9 = (Vector3 *)
                                     (*(code *)(this->klass->vtable).get_Position.method)
                                               (&stack0xfffffff0,this);
                            if (this_04 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)
                            goto code_?;
                            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::
                            Vector3]::SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
                                      (this_04,*pVVar9,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                                      );
                          }
                          this_05 = (spawnRoleDataReceiver->fields).woId;
                          if (this_05 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
                            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                            SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                                      ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_05,
                                       (this->fields)._._._._.id,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                                      );
                            distanceReferencePoint = (this->fields)._._._.transform;
                            if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                                      (distanceReferencePoint,(MethodInfo *)0x0);
                            if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            pAVar10 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                                (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                            pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                            NavMesh_OnNavMeshPreUpdate__ctor
                                      (pNVar2,(Object *)this,
                                       MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                                       (MethodInfo *)0x0);
                            pAVar11 = (Action *)
                                      mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar10,(Delegate *)pNVar2,
                                                 (MethodInfo *)0x0);
                            pAVar10 = (Action *)0x0;
                            if (pAVar11 == (Action *)0x0) {
code_?:
                              ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                                        (ChatCommand__Enum_HideAllUI,pAVar10,(MethodInfo *)0x0);
                              return;
                            }
                            if (pAVar11->klass == TypeInfo__System__Action) {
                              pAVar10 = pAVar11;
                            }
                            if (pAVar10 != (Action *)0x0) goto code_?;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
      this_01 = (this->fields).laserPoint;
      if (this_01 != (LaserPointer *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__ChatCommandManager);
          }
          pAVar3 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                             (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
          pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar2,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                     (MethodInfo *)0x0);
          pAVar4 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pAVar3,(Delegate *)pNVar2,(MethodInfo *)0x0);
          pAVar3 = (Action *)0x0;
          if (pAVar4 == (Action *)0x0) {
code_?:
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_HideAllUI,pAVar3,(MethodInfo *)0x0);
            return;
          }
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar4;
          }
          if (pAVar3 != (Action *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_00 = (this->fields).laserPoint;
  if (this_00 != (LaserPointer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if (pMVar6 != (MainCameraManager *)0x0) {
                  bVar7 = mscorlib.dll::System::Runtime::Serialization::ObjectHolder::
                          ObjectHolder_get_TypeLoadExceptionReachable
                                    ((ObjectHolder *)pMVar6,(MethodInfo *)0x0);
                  if (bVar7 == 0) {
                    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                       ((MethodInfo *)0x0);
                    if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
                    MainCameraManager::MainCameraManager_SetCameraController
                              (pMVar6,(pAVar2->fields).cameraController,(MethodInfo *)0x0);
                  }
                  method_00 = TypeInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes;
                  pMVar8 = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)pMVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  (pMVar8->fields).avatar = this;
                  func_?(&(pMVar8->fields).avatar,this);
                  (this->fields).buildModeAvatarLocalModes = pMVar8;
                  func_?(&(this->fields).buildModeAvatarLocalModes,pMVar8);
                  pMVar8 = (this->fields).buildModeAvatarLocalModes;
                  if (pMVar8 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) {
                    MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
                    MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_SetMode
                              (pMVar8,MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit,
                               (MethodInfo *)0x0);
                    pMVar9 = (this->fields)._.body;
                    if ((pMVar9 != (MVBody *)0x0) &&
                       (this_01 = (pMVar9->fields)._._._.gameObject, this_01 != (GameObject *)0x0))
                    {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_01,0,(MethodInfo *)0x0);
                      pLVar10 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                                          ((MVBuildModeAvatar *)this,1,(MethodInfo *)0x0);
                      (this->fields).laserPoint = pLVar10;
                      func_?(&(this->fields).laserPoint,pLVar10);
                      pLVar10 = (this->fields).laserPoint;
                      if (pLVar10 != (LaserPointer *)0x0) {
                        LaserPointer::LaserPointer_SubscribeToCommands(pLVar10,(MethodInfo *)0x0);
                        pUVar11 = (this->fields)._._._.PositionChanged;
                        pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                                  func_?(
                                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                 );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  (pUVar12,(Object *)this,
                                   MethodInfo__MVBuildModeAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                   ,(MethodInfo *)0x0);
                        pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pUVar11,(Delegate *)pUVar12,
                                             (MethodInfo *)0x0);
                        if (pDVar13 == (Delegate *)0x0) {
                          (this->fields)._._._.PositionChanged =
                               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                        }
                        else {
                          pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                                    func_?();
                          if (pUVar11 ==
                              (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
                          goto code_?;
                          (this->fields)._._._.PositionChanged = pUVar11;
                          iVar14 = func_?();
                          if (iVar14 == 0) goto code_?;
                        }
                        func_?();
                        pUVar15 = (this->fields)._._._.ScaleChanged;
                        pUVar12 = (UnityAction_2_System_Object_System_Object_ *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  (pUVar12,(Object *)this,
                                   MethodInfo__MVBuildModeAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                                   ,(MethodInfo *)0x0);
                        pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pUVar15,(Delegate *)pUVar12,
                                             (MethodInfo *)0x0);
                        if (pDVar13 == (Delegate *)0x0) {
                          (this->fields)._._._.ScaleChanged =
                               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
                        }
                        else {
                          pUVar15 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                                    func_?();
                          if (pUVar15 ==
                              (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
                          goto code_?;
                          (this->fields)._._._.ScaleChanged = pUVar15;
                          iVar14 = func_?();
                          if (iVar14 == 0) goto code_?;
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
                                   UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
                        pAVar16 = (AvatarLimbManager *)func_?();
                        ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
                        __Il2CppFullySharedGenericType]::
                        ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                  ((ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                    *)pAVar16,(MethodInfo *)0x0);
                        (this->fields)._.limbManager = pAVar16;
                        func_?();
                        pAVar1 = (this->fields).avatarScriptObject;
                        if ((pAVar1 != (AvatarLocalBuildMode *)0x0) &&
                           (pAVar16 = (this->fields)._.limbManager,
                           pAVar16 != (AvatarLimbManager *)0x0)) {
                          (*(code *)(pAVar16->klass->vtable).Initialize.method)
                                    (pAVar16,this,(this->fields)._.body,
                                     (pAVar1->fields).enabledChangeHandler,
                                     (this->fields)._.limbRotationRuntimeData,
                                     (pAVar16->klass->vtable).UpdateLimbRotations.methodPtr);
                          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar17 != (MVNetworkGame *)0x0) &&
                             (this_02 = (pMVar17->fields).playerContainer,
                             this_02 != (MVPlayerContainer *)0x0)) {
                            this_03 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                                (this_02,(this->fields)._._._._.ownerActorNr,
                                                 (MethodInfo *)0x0);
                            if (this_03 != (MVPlayer *)0x0) {
                              MVPlayer::MVPlayer_NotifyAvatarCreated
                                        (this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
                    MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass21_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass21_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass21_0;
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
               MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass21_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
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
                    MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0;
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
               MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
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
               (this->klass->vtable).get_WorldRotation_1.methodPtr);
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

