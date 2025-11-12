
/* Void Activate(Int32, SpawnRoleDataReceiver, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Activate
               (MVBuildModeAvatarLocal *this,int32_t idFrom,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,Vector3 *position,Quaternion *rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarLocal__HideEditCube__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRoleDataReceiver >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     (pGVar8 = (pMVar7->fields).GameEventManager, pGVar8 != (GameEventManager *)0x0)) {
    this_00 = (pGVar8->fields).AvatarCommandsPlayMode;
    pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar9,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
                (this_00,(Action *)pNVar9,(MethodInfo *)0x0);
      pLVar10 = (this->fields).laserPoint;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pLVar10 != (LaserPointer *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pLVar10->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pLVar10 = (this->fields).laserPoint;
          if ((pLVar10 == (LaserPointer *)0x0) ||
             (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pLVar10,(MethodInfo *)0x0),
             this_06 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_06,1,(MethodInfo *)0x0);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (this_01 = (pMVar7->fields)._PlayerController_k__BackingField,
         this_01 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
                  (this_01,(ILocalObject *)this,(MethodInfo *)0x0);
        pAVar11 = (this->fields).avatarScriptObject;
        if (((pAVar11 != (AvatarLocalBuildMode *)0x0) &&
            (pAVar12 = (pAVar11->fields).avatarCamerasDesktop,
            pAVar12 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
           (pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0), pMVar13 != (MainCameraManager *)0x0)) {
          MainCameraManager::MainCameraManager_SetCameraController
                    (pMVar13,(pAVar12->fields).cameraController,(MethodInfo *)0x0);
          pAVar11 = (this->fields).avatarScriptObject;
          if (((pAVar11 != (AvatarLocalBuildMode *)0x0) &&
              (pAVar12 = (pAVar11->fields).avatarCamerasDesktop,
              pAVar12 != (AvatarCamerasDesktopBuildMode *)0x0)) &&
             (pMVar14 = (pAVar12->fields).cameraController, pMVar14 != (MVCameraController *)0x0)) {
            MVCameraController::MVCameraController_SetCamera
                      (pMVar14,CameraType__Enum_EditorCamera,(MethodInfo *)0x0);
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (((pMVar15 != (MainCameraManager *)0x0) &&
                (pMVar14 = (pMVar15->fields).cameraController, pMVar14 != (MVCameraController *)0x0))
               && ((this_02 = (pMVar14->fields).cameraStack,
                   this_02 != (MVCameraController_CameraStack *)0x0 &&
                   (((pMVar16 = MVCameraController+CameraStack::
                                MVCameraController_CameraStack_get_CurCamera
                                          (this_02,(MethodInfo *)0x0),
                     pMVar16 != (MVCameraBase *)0x0 &&
                     (value_00 = (float)(*(pMVar16->klass->vtable).get_FieldOfView.methodPtr)
                                                  (pMVar16,(pMVar16->klass->vtable).get_FieldOfView.
                                                           method),
                     pMVar13 != (MainCameraManager *)0x0)) &&
                    (this_03 = (pMVar13->fields).mainCamera, this_03 != (Camera *)0x0)))))) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                        (this_03,value_00,(MethodInfo *)0x0);
              fStackY_30 = position->z;
              uStackY_38._0_4_ = position->x;
              uStackY_38._4_4_ = position->y;
              (*(this->klass->vtable).set_Position.methodPtr)
                        (this,&uStackY_38,(this->klass->vtable).set_Position.method);
              fStackY_28 = rotation->x;
              fStackY_24 = rotation->y;
              fStackY_20 = rotation->z;
              fStackY_1c = rotation->w;
              (*(this->klass->vtable).set_Rotation.methodPtr)
                        (this,&fStackY_28,(this->klass->vtable).set_Rotation.method);
              if (spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                if (0 < idFrom) {
                  pSVar17 = (spawnRoleDataReceiver->fields).position;
                  puVar18 = (undefined8 *)
                            (*(this->klass->vtable).get_Position.methodPtr)
                                      (&fStackY_28,this,(this->klass->vtable).get_Position.method);
                  if (pSVar17 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0)
                  goto code_?;
                  uStackY_38 = *puVar18;
                  fStackY_30 = *(float *)(puVar18 + 1);
                  FUN_?(pSVar17,&uStackY_38);
                }
                if ((spawnRoleDataReceiver->fields).woId !=
                    (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
                  FUN_?();
                  distanceReferencePoint = (this->fields)._._._.transform;
                  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                            (distanceReferencePoint,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  a = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  uVar19 = 0;
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar9,(Object *)this,
                             MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,(MethodInfo *)0x0);
                  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,(Delegate *)pNVar9,(MethodInfo *)0x0);
                  value = (Delegate *)0x0;
                  if (pDVar20 != (Delegate *)0x0) {
                    if ((Action__Class *)pDVar20->klass == TypeInfo__System__Action) {
                      value = pDVar20;
                    }
                    if (value == (Delegate *)0x0) {
                      FUN_?(pDVar20,TypeInfo__System__Action);
                      pcVar21 = (code *)swi(3);
                      (*pcVar21)();
                      return;
                    }
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__ChatCommandManager,value,0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__ChatCommandManager);
                  }
                  this_04 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                            TypeInfo__ChatCommandManager->static_fields->
                            chatCommandCallBackDictionary;
                  if (this_04 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
                    FUN_?();
                    pcVar21 = (code *)swi(3);
                    (*pcVar21)();
                    return;
                  }
                  iVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,UnityEngine::Vector3]::
                           Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                     (this_04,3,
                                      MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                      ->klass->rgctx_data[0x21].method);
                  if (-1 < iVar22) {
                    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__ChatCommandManager);
                    }
                    this_05 = TypeInfo__ChatCommandManager->static_fields->
                              chatCommandCallBackDictionary;
                    if (this_05 == (Dictionary_2_ChatCommand_System_Action_ *)0x0)
                    goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::
                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_05,3,
                               (Object *)value,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar19 >> 8),1),
                               MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                               ->klass->rgctx_data[0x22].method);
                  }
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
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void DeActivate(Int32, SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_DeActivate
               (MVBuildModeAvatarLocal *this,int32_t idTo,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,CONCAT44(in_register_00000014,idTo));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarLocal__HideEditCube__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  callback = (Action *)0x0;
  bVar1 = iRam_? != 0;
  (this->fields).spawnRoleDataReceiver = (SpawnRoleDataReceiver *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRoleDataReceiver >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     (pGVar8 = (pMVar7->fields).GameEventManager, pGVar8 != (GameEventManager *)0x0)) {
    this_00 = (pGVar8->fields).AvatarCommandsPlayMode;
    pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar9,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__SetToSpawn__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
                (this_00,(Action *)pNVar9,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar10 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                          (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
      pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar9,(Object *)this,MethodInfo__MVBuildModeAvatarLocal__HideEditCube__,
                 (MethodInfo *)0x0);
      pAVar10 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar10,(Delegate *)pNVar9,(MethodInfo *)0x0);
      if (pAVar10 != (Action *)0x0) {
        if (pAVar10->klass == TypeInfo__System__Action) {
          callback = pAVar10;
        }
        if (callback == (Action *)0x0) {
          FUN_?(pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                (ChatCommand__Enum_HideAllUI,callback,(MethodInfo *)0x0);
      pLVar12 = (this->fields).laserPoint;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pLVar12 != (LaserPointer *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pLVar12->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pLVar12 = (this->fields).laserPoint;
          if ((pLVar12 == (LaserPointer *)0x0) ||
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pLVar12,(MethodInfo *)0x0),
             this_01 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_FixedUpdate
          (MVBuildModeAvatarLocal *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).buildModeAvatarLocalModes;
  if ((pMVar1 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) &&
     (pMVar2 = (pMVar1->fields).currentMode,
     pMVar2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0)) {
    (*(pMVar2->klass->vtable).__unknown_2.methodPtr)
              (pMVar2,movementMap,(pMVar2->klass->vtable).__unknown_2.method);
    return movementMap;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IInputToPlayerMovement *)(*pcVar3)();
  return pIVar4;
}


/* Vector3 GetLookDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_GetLookDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarLocal *this,MethodInfo *method
                    )

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_2,this_01,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      fStack_5 = fVar4;
      uStack_6 = uStack_3;
      fVar7 = (float)FUN_?(&uStack_3);
      if (_UNK_? < fVar7) {
        fVar4 = fVar4 / fVar7;
        uVar8 = CONCAT44(uStack_6._4_4_ / fVar7,(float)uStack_6 / fVar7);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar8._0_4_ = (pVVar9->zeroVector).x;
        uVar8._4_4_ = (pVVar9->zeroVector).y;
        fVar4 = (pVVar9->zeroVector).z;
      }
      __return_storage_ptr__->x = (float)(int)uVar8;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar10)();
  return pVVar1;
}


/* Void HideEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_HideEditCube
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).laserPoint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 != (LaserPointer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pLVar1 = (this->fields).laserPoint;
      if ((pLVar1 != (LaserPointer *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Initialize
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarScriptObject;
  if (pAVar1 == (AvatarLocalBuildMode *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (pAVar1->fields).avatarCamerasDesktopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar2 = (AvatarCamerasDesktopBuildMode *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar2,
                       AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                      );
  bVar3 = iRam_? != 0;
  (pAVar1->fields).avatarCamerasDesktop = pAVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pAVar1->fields).avatarCamerasDesktop >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pAVar2 = (pAVar1->fields).avatarCamerasDesktop;
  if (pAVar2 == (AvatarCamerasDesktopBuildMode *)0x0) goto code_?;
  pMVar8 = this;
  AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_Initialize
            (pAVar2,this,(MethodInfo *)0x0);
  pMVar9 = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)
            FUN_?(TypeInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes);
  iVar10 = iRam_?;
  (pMVar9->fields).avatar = this;
  if (iVar10 != 0) {
    uVar4 = (uint)((ulonglong)&(pMVar9->fields).avatar >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    pMVar8 = (MVBuildModeAvatarLocal *)(lVar5 + 0xADDR);
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *(ulonglong *)(lVar5 + 0xADDR);
      if (bVar3) {
        *(ulonglong *)(lVar5 + 0xADDR) = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar3);
  }
  (this->fields).buildModeAvatarLocalModes = pMVar9;
  if (iVar10 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).buildModeAvatarLocalModes >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    pMVar8 = (MVBuildModeAvatarLocal *)(lVar5 + 0xADDR);
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *(ulonglong *)(lVar5 + 0xADDR);
      if (bVar3) {
        *(ulonglong *)(lVar5 + 0xADDR) = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pMVar9 = (this->fields).buildModeAvatarLocalModes;
  if (pMVar9 == (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) goto code_?;
  MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
  MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_SetMode
            (pMVar9,(MVBuildModeAvatarLocal_AvatarBuildModes__Enum)
                     CONCAT71((int7)((ulonglong)pMVar8 >> 8),1),(MethodInfo *)0x0);
  pMVar11 = (this->fields)._.body;
  if ((pMVar11 == (MVBody *)0x0) ||
     (this_00 = (pMVar11->fields)._._._.gameObject, this_00 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar12 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar12 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar12->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar13 == (MVGameControllerBase *)0x0) ||
         (pMVar14 = (pMVar13->fields).game, pMVar14 == (MVNetworkGame *)0x0)) ||
        (pMVar15 = (pMVar14->fields).playerContainer, pMVar15 == (MVPlayerContainer *)0x0)) ||
       (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar15,(MethodInfo *)0x0),
       this_03 == (MVLocalPlayer *)0x0)) goto code_?;
    PVar16 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_03,(MethodInfo *)0x0);
    if ((byte)((char)PVar16 - 1U) < 2) goto code_?;
  }
  else {
code_?:
    pLVar17 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                        ((MVBuildModeAvatar *)this,1,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).laserPoint = pLVar17;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).laserPoint >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pLVar17 = (this->fields).laserPoint;
    if (pLVar17 == (LaserPointer *)0x0) goto code_?;
    LaserPointer::LaserPointer_SubscribeToCommands(pLVar17,(MethodInfo *)0x0);
  }
  pUVar18 = (this->fields)._._._.PositionChanged;
  pUVar19 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar19,(Object *)this,
             MethodInfo__MVBuildModeAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar18,(Delegate *)pUVar19,(MethodInfo *)0x0);
  pUVar21 = 
  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
  if (pDVar20 == (Delegate *)0x0) {
    (this->fields)._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar18 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
              FUN_?(pDVar20,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
    if (pUVar18 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar20,pUVar21);
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    (this->fields)._._._.PositionChanged = pUVar18;
    pUVar21 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar5 = FUN_?(pDVar20,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (lVar5 == 0) {
      FUN_?(pDVar20,pUVar21);
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pUVar23 = (this->fields)._._._.ScaleChanged;
  pUVar19 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar19,(Object *)this,
             MethodInfo__MVBuildModeAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar23,(Delegate *)pUVar19,(MethodInfo *)0x0);
  pUVar24 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
  if (pDVar20 == (Delegate *)0x0) {
    (this->fields)._._._.ScaleChanged =
         (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
  }
  else {
    pUVar23 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
              FUN_?(pDVar20,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                           );
    if (pUVar23 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
      FUN_?(pDVar20,pUVar24);
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    (this->fields)._._._.ScaleChanged = pUVar23;
    pUVar24 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
    ;
    lVar5 = FUN_?();
    if (lVar5 == 0) {
      FUN_?(pDVar20,pUVar24);
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._._._.ScaleChanged >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,
             UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  pAVar25 = (AvatarLimbManager *)FUN_?(TypeInfo__AvatarLimbManagerLocal);
  bVar3 = iRam_? != 0;
  (this->fields)._.limbManager = pAVar25;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.limbManager >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pAVar1 = (this->fields).avatarScriptObject;
  if ((pAVar1 != (AvatarLocalBuildMode *)0x0) &&
     (pAVar25 = (this->fields)._.limbManager, pAVar25 != (AvatarLimbManager *)0x0)) {
    auStack_26._8_8_ = (pAVar25->klass->vtable).Initialize.method;
    auStack_26._0_8_ = (this->fields)._.limbRotationRuntimeData;
    (*(pAVar25->klass->vtable).Initialize.methodPtr)
              (pAVar25,this,(this->fields)._.body,(pAVar1->fields).enabledChangeHandler);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar13 != (MVGameControllerBase *)0x0) &&
        (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
       ((pMVar15 = (pMVar14->fields).playerContainer, pMVar15 != (MVPlayerContainer *)0x0 &&
        (pMVar27 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar15,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
        pMVar27 != (MVPlayer *)0x0)))) {
      iVar10 = (this->fields)._._._._.id;
      this_01 = (pMVar27->fields).spawnRolesManager;
      if ((this_01 != (SpawnRolesManager *)0x0) &&
         (pSVar28 = (this_01->fields).spawnRolesRuntimeData, pSVar28 != (SpawnRolesRuntimeData *)0x0
         )) {
        if (iVar10 == (pSVar28->fields).activeSpawnRole) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar13 == (MVGameControllerBase *)0x0) ||
               (pMVar14 = (pMVar13->fields).game, pMVar14 == (MVNetworkGame *)0x0)) ||
              ((pMVar14->fields).worldNetwork == (WorldNetwork *)0x0)) ||
             ((this_02 = (MVWorldObjectClientManager *)
                         (((pMVar14->fields).worldNetwork)->fields)._.worldObjectClientManager,
              this_02 == (MVWorldObjectClientManager *)0x0 ||
              (pMVar29 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (this_02,iVar10,(MethodInfo *)0x0),
              pMVar29 == (MVWorldObjectClient *)0x0)))) goto code_?;
          puVar30 = (undefined8 *)
                    (*(pMVar29->klass->vtable).get_Position.methodPtr)
                              (&VStack_31,pMVar29,(pMVar29->klass->vtable).get_Position.method);
          uVar32 = *puVar30;
          fVar33 = *(float *)(puVar30 + 1);
          puVar30 = (undefined8 *)
                    (*(pMVar29->klass->vtable).get_Rotation.methodPtr)
                              (auStack_26,pMVar29,(pMVar29->klass->vtable).get_Rotation.method);
          auStack_26._0_8_ = *puVar30;
          auStack_26._8_8_ = puVar30[1];
          VStack_31._0_8_ = uVar32;
          VStack_31.z = fVar33;
          SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                    (this_01,iVar10,&VStack_31,(Quaternion *)auStack_26,(MethodInfo *)0x0);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void InitializeLaserPointerAndEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::
     MVBuildModeAvatarLocal_InitializeLaserPointerAndEditCube
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
          (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         this_01 == (MVLocalPlayer *)0x0)) goto code_?;
      PVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
      if (1 < (byte)((char)PVar4 - 1U)) {
        return;
      }
    }
    pLVar5 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                        ((MVBuildModeAvatar *)this,1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).laserPoint = pLVar5;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields).laserPoint >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    pLVar5 = (this->fields).laserPoint;
    if (pLVar5 != (LaserPointer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<bool>,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Action<float>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Action<LaserPointerState>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Action<unsigned_char>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         ((pGVar11 = (pMVar3->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0 &&
          (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
          pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
        pGVar13 = (pGVar12->fields).LaserCommands;
        pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<unsigned_char>);
        if (pLVar5 != (LaserPointer *)0x0) {
          bVar6 = iRam_? != 0;
          pMVar15 = (pLVar5->klass->vtable).SetCurrentCubeMaterial.method;
          (pDVar14->fields).method_ptr = pMVar15->virtualMethodPointer;
          (pDVar14->fields).method = pMVar15;
          (pDVar14->fields).m_target = (Object *)pLVar5;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(pDVar14->fields).m_target >> 0xc);
            lVar16 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
              puVar8 = (ulonglong *)(lVar16 + 0xADDR);
              LOCK();
              bVar6 = uVar10 == *puVar8;
              if (bVar6) {
                *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          uVar17 = pMVar15->parameters_count;
          (pDVar14->fields).method_code = pDVar14;
          if (((pMVar15->flags & 0x10) == 0) || (uVar17 != 1)) {
            (pDVar14->fields).method_code = (pDVar14->fields).m_target;
            puVar18 = (pDVar14->fields).method_ptr;
          }
          else {
            puVar18 = &UNK_?;
          }
          (pDVar14->fields).invoke_impl = puVar18;
          (pDVar14->fields).extra_arg = FUN_?;
          if (pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
             ) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<unsigned_char>);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            ppAVar19 = &(pGVar13->fields).OnCubeMaterialChanged;
            a_03 = (pGVar13->fields).OnCubeMaterialChanged;
            do {
              pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a_03,pDVar14,(MethodInfo *)0x0);
              pAVar21 = TypeInfo__System__Action<unsigned_char>;
              if (pDVar20 == (Delegate *)0x0) {
                pAVar22 = (Action_1_Byte__1 *)0x0;
              }
              else {
                pAVar22 = (Action_1_Byte__1 *)
                          FUN_?(pDVar20,TypeInfo__System__Action<unsigned_char>);
                if (pAVar22 == (Action_1_Byte__1 *)0x0) {
                  FUN_?(pDVar20,pAVar21);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
              }
              LOCK();
              pAVar24 = *ppAVar19;
              bVar6 = a_03 == pAVar24;
              if (bVar6) {
                *ppAVar19 = pAVar22;
                pAVar24 = a_03;
              }
              UNLOCK();
              pAVar22 = a_03;
              if (!bVar6) {
                pAVar22 = pAVar24;
              }
              if (iRam_? != 0) {
                uVar7 = (uint)((ulonglong)ppAVar19 >> 0xc);
                lVar16 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                do {
                  uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar16 + 0xADDR);
                  LOCK();
                  bVar6 = uVar10 == *puVar8;
                  if (bVar6) {
                    *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar6);
              }
              bVar6 = pAVar22 != a_03;
              a_03 = pAVar22;
            } while (bVar6);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
                 (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                (pGVar11 = (pMVar3->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0))
               && (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                  pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
              pGVar13 = (pGVar12->fields).LaserCommands;
              pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
              FUN_?(pDVar14,pLVar5);
              if (pGVar13 !=
                  (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Action<float>);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppAVar25 = &(pGVar13->fields).OnActivateLaserForDuration;
                a = (pGVar13->fields).OnActivateLaserForDuration;
                do {
                  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,pDVar14,(MethodInfo *)0x0);
                  pAVar26 = TypeInfo__System__Action<float>;
                  if (pDVar20 == (Delegate *)0x0) {
                    pAVar27 = (Action_1_Single_ *)0x0;
                  }
                  else {
                    pAVar27 = (Action_1_Single_ *)
                              FUN_?(pDVar20,TypeInfo__System__Action<float>);
                    if (pAVar27 == (Action_1_Single_ *)0x0) {
                      FUN_?(pDVar20,pAVar26);
                      pcVar23 = (code *)swi(3);
                      (*pcVar23)();
                      return;
                    }
                  }
                  LOCK();
                  pAVar28 = *ppAVar25;
                  bVar6 = a == pAVar28;
                  if (bVar6) {
                    *ppAVar25 = pAVar27;
                    pAVar28 = a;
                  }
                  UNLOCK();
                  pAVar27 = a;
                  if (!bVar6) {
                    pAVar27 = pAVar28;
                  }
                  if (iRam_? != 0) {
                    uVar7 = (uint)((ulonglong)ppAVar25 >> 0xc);
                    lVar16 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar16 + 0xADDR);
                      LOCK();
                      bVar6 = uVar10 == *puVar8;
                      if (bVar6) {
                        *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar6);
                  }
                  bVar6 = pAVar27 != a;
                  a = pAVar27;
                } while (bVar6);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                    (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                   ((pGVar11 = (pMVar3->fields).GameEventManager,
                    pGVar11 != (GameEventManager *)0x0 &&
                    (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                    pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
                  pGVar13 = (pGVar12->fields).LaserCommands;
                  this_02 = (UnityAction_1_System_Int32Enum_ *)
                            FUN_?(TypeInfo__System__Action<LaserPointerState>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]
                  ::UnityAction_1_System_Int32Enum___ctor
                            (this_02,(Object *)pLVar5,(pLVar5->klass->vtable).ChangeState.method,
                             (MethodInfo *)0x0);
                  if (pGVar13 !=
                      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Action<LaserPointerState>);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    ppAVar29 = &(pGVar13->fields).OnChangeState;
                    a_00 = (pGVar13->fields).OnChangeState;
                    do {
                      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)a_00,(Delegate *)this_02,(MethodInfo *)0x0);
                      pAVar30 = TypeInfo__System__Action<LaserPointerState>;
                      if (pDVar14 == (Delegate *)0x0) {
                        pAVar31 = (Action_1_LaserPointerState_ *)0x0;
                      }
                      else {
                        pAVar31 = (Action_1_LaserPointerState_ *)
                                  FUN_?(pDVar14,TypeInfo__System__Action<LaserPointerState>)
                        ;
                        if (pAVar31 == (Action_1_LaserPointerState_ *)0x0) {
                          FUN_?(pDVar14,pAVar30);
                          pcVar23 = (code *)swi(3);
                          (*pcVar23)();
                          return;
                        }
                      }
                      LOCK();
                      pAVar32 = *ppAVar29;
                      bVar6 = a_00 == pAVar32;
                      if (bVar6) {
                        *ppAVar29 = pAVar31;
                        pAVar32 = a_00;
                      }
                      UNLOCK();
                      pAVar31 = a_00;
                      if (!bVar6) {
                        pAVar31 = pAVar32;
                      }
                      if (iRam_? != 0) {
                        uVar7 = (uint)((ulonglong)ppAVar29 >> 0xc);
                        lVar16 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar16 + 0xADDR);
                          LOCK();
                          bVar6 = uVar10 == *puVar8;
                          if (bVar6) {
                            *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      bVar6 = pAVar31 != a_00;
                      a_00 = pAVar31;
                    } while (bVar6);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                       ((pGVar11 = (pMVar3->fields).GameEventManager,
                        pGVar11 != (GameEventManager *)0x0 &&
                        (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                        pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
                      pGVar13 = (pGVar12->fields).LaserCommands;
                      pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                      FUN_?(pDVar14,pLVar5);
                      if (pGVar13 !=
                          (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                          0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__System__Action<bool>);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pGVar33 = &pGVar13->fields;
                        a_01 = (pGVar13->fields).OnLaserActiveChanged;
                        do {
                          pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)a_01,pDVar14,(MethodInfo *)0x0);
                          pAVar34 = TypeInfo__System__Action<bool>;
                          if (pDVar20 == (Delegate *)0x0) {
                            pAVar35 = (Action_1_Boolean_ *)0x0;
                          }
                          else {
                            pAVar35 = (Action_1_Boolean_ *)
                                      FUN_?(pDVar20,TypeInfo__System__Action<bool>);
                            if (pAVar35 == (Action_1_Boolean_ *)0x0) {
                              FUN_?(pDVar20,pAVar34);
                              pcVar23 = (code *)swi(3);
                              (*pcVar23)();
                              return;
                            }
                          }
                          LOCK();
                          pAVar36 = pGVar33->OnLaserActiveChanged;
                          bVar6 = a_01 == pAVar36;
                          if (bVar6) {
                            pGVar33->OnLaserActiveChanged = pAVar35;
                            pAVar36 = a_01;
                          }
                          UNLOCK();
                          pAVar35 = a_01;
                          if (!bVar6) {
                            pAVar35 = pAVar36;
                          }
                          if (iRam_? != 0) {
                            uVar7 = (uint)((ulonglong)pGVar33 >> 0xc);
                            lVar16 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
                              puVar8 = (ulonglong *)(lVar16 + 0xADDR);
                              LOCK();
                              bVar6 = uVar10 == *puVar8;
                              if (bVar6) {
                                *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar6);
                          }
                          bVar6 = pAVar35 != a_01;
                          a_01 = pAVar35;
                        } while (bVar6);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
                             (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                            (pGVar11 = (pMVar3->fields).GameEventManager,
                            pGVar11 != (GameEventManager *)0x0)) &&
                           (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                           pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                          pGVar13 = (pGVar12->fields).LaserCommands;
                          pDVar14 = (Delegate *)
                                    FUN_?(TypeInfo__System__Action<UnityEngine::Vector3>);
                          FUN_?(pDVar14,pLVar5);
                          if (pGVar13 !=
                              (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                               *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            a_02 = (pGVar13->fields).OnUpdatePosition;
                            do {
                              pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                  ((Delegate *)a_02,pDVar14,(MethodInfo *)0x0);
                              pAVar37 = TypeInfo__System__Action<UnityEngine::Vector3>;
                              if (pDVar20 == (Delegate *)0x0) {
                                pAVar38 = (Action_1_UnityEngine_Vector3_ *)0x0;
                              }
                              else {
                                pAVar38 = (Action_1_UnityEngine_Vector3_ *)
                                          FUN_?(pDVar20,
                                                  TypeInfo__System__Action<UnityEngine::Vector3>);
                                if (pAVar38 == (Action_1_UnityEngine_Vector3_ *)0x0) {
                                  FUN_?(pDVar20,pAVar37);
                                  pcVar23 = (code *)swi(3);
                                  (*pcVar23)();
                                  return;
                                }
                              }
                              ppAVar39 = &(pGVar13->fields).OnUpdatePosition;
                              LOCK();
                              pAVar40 = *ppAVar39;
                              bVar6 = a_02 == pAVar40;
                              if (bVar6) {
                                *ppAVar39 = pAVar38;
                                pAVar40 = a_02;
                              }
                              UNLOCK();
                              pAVar38 = a_02;
                              if (!bVar6) {
                                pAVar38 = pAVar40;
                              }
                              if (iRam_? != 0) {
                                uVar7 = (uint)((ulonglong)&(pGVar13->fields).OnUpdatePosition >>
                                               0xc);
                                lVar16 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
                                  puVar8 = (ulonglong *)(lVar16 + 0xADDR);
                                  LOCK();
                                  bVar6 = uVar10 == *puVar8;
                                  if (bVar6) {
                                    *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar6);
                              }
                              bVar6 = pAVar38 != a_02;
                              a_02 = pAVar38;
                            } while (bVar6);
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
      FUN_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_OnPositionChanged
               (MVBuildModeAvatarLocal *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass22_0);
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)positionChangedEventArgs;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
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


/* Void OnScaleChanged(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_OnScaleChanged
               (MVBuildModeAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVBuildModeAvatarLocal____c__DisplayClass23_0);
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)scaleChangedEventArgs;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVBuildModeAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
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


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetCamera
               (MVBuildModeAvatarLocal *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarScriptObject;
  if (((pAVar1 == (AvatarLocalBuildMode *)0x0) ||
      (pAVar2 = (pAVar1->fields).avatarCamerasDesktop,
      pAVar2 == (AvatarCamerasDesktopBuildMode *)0x0)) ||
     (pMVar3 = (pAVar2->fields).cameraController, pMVar3 == (MVCameraController *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pMVar5 = (pMVar3->fields).cameraStack;
  if (pMVar5 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                  ,CONCAT44(in_register_00000014,cameraType),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar5->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__get_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,cameraType,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
            );
  MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
            (pMVar5,pMVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar5->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar5,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar7,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar8 = &(pMVar6->fields).OnIgnoreInputTypes;
  a = (pMVar6->fields).OnIgnoreInputTypes;
  do {
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar10 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar9 == (Delegate *)0x0) {
      pEVar11 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar11 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar9);
      if (pEVar11 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar9,pEVar10);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pEVar12 = *ppEVar8;
    bVar13 = a == pEVar12;
    if (bVar13) {
      *ppEVar8 = pEVar11;
      pEVar12 = a;
    }
    UNLOCK();
    pEVar11 = a;
    if (!bVar13) {
      pEVar11 = pEVar12;
    }
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)ppEVar8 >> 0xc);
      uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar16 == *puVar17;
        if (bVar13) {
          *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    bVar13 = pEVar11 != a;
    a = pEVar11;
  } while (bVar13);
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar5,(MethodInfo *)0x0);
  if (pMVar7 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar7->klass->vtable).Enter.methodPtr)();
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
  pMVar3 = (pMVar6->fields).cameraController;
  if (pMVar3 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = (pMVar3->fields).cameraStack;
  if (pMVar5 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar7 == (MVCameraBase *)0x0) {
code_?:
    bVar13 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar7->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar5 = (pMVar3->fields).cameraStack;
    if ((pMVar5 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar5,(MethodInfo *)0x0), pMVar7 == (MVCameraBase *)0x0))
    goto code_?;
    uVar14 = (*(pMVar7->klass->vtable).__unknown.methodPtr)
                       (pMVar7,(pMVar7->klass->vtable).__unknown.method);
    if ((uVar14 < 0x15) && ((0x100441U >> (uVar14 & 0x1f) & 1) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = uVar14 == 0x13;
    }
  }
  this_00 = (pMVar6->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar13 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar13 ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_03 != (MVLocalPlayer *)0x0) {
      pMVar18 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_03,(MethodInfo *)0x0);
      if (pMVar18 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar19 = (pMVar18->fields)._.avatar;
      if (pAVar19 != (Avatar *)0x0) {
        bVar20 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar19->klass->_1).naturalAligment < bVar20) ||
           ((pAVar19->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar19);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = pAVar19[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar13,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetToSpawn() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SetToSpawn
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                      ((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)
             (*(this_01->klass->vtable).get_WorldPosition_1.methodPtr)
                       (&QStack_2,this_01,(this_01->klass->vtable).get_WorldPosition_1.method);
    uStack_3 = *puVar1;
    uStack_4 = *(undefined4 *)(puVar1 + 1);
    (*(this->klass->vtable).set_WorldPosition.methodPtr)(this,&uStack_3);
    pQVar5 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                       (&QStack_2,this_01,(MethodInfo *)0x0);
    QStack_2.x = pQVar5->x;
    QStack_2.y = pQVar5->y;
    QStack_2.z = pQVar5->z;
    QStack_2.w = pQVar5->w;
    MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
              ((MVWorldObjectClient *)this,&QStack_2,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar6 != (MainCameraManager *)0x0) &&
        (pMVar7 = (pMVar6->fields).cameraController, pMVar7 != (MVCameraController *)0x0)) &&
       (this_00 = (pMVar7->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
      pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (this_00,(MethodInfo *)0x0);
      if (pMVar8 != (MVCameraBase *)0x0) {
        UNRECOVERED_JUMPTABLE = (pMVar8->klass->vtable).Reset.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pMVar8,(pMVar8->klass->vtable).Reset.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SpawnRoleDataReceiverAction(MVBuildModeAvatarLocal+SpawnRoleDataReceiverActionDelegate) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_SpawnRoleDataReceiverAction
               (MVBuildModeAvatarLocal *this,
               MVBuildModeAvatarLocal_SpawnRoleDataReceiverActionDelegate
               *spawnRoleDataReceiverActionDelegate,MethodInfo *method)

{
  if ((this->fields).spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) {
    return;
  }
  if (spawnRoleDataReceiverActionDelegate !=
      (MVBuildModeAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(spawnRoleDataReceiverActionDelegate->fields)._._.invoke_impl)
              ((spawnRoleDataReceiverActionDelegate->fields)._._.method_code,
               (this->fields).spawnRoleDataReceiver,
               (spawnRoleDataReceiverActionDelegate->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Suspend() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Suspend
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pTVar3 = (pMVar2->fields).transformNetworkManager;
    iVar4 = (this->fields)._._._._.id;
    if (pTVar3 != (TransformNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pTVar3->fields).networkedObjects;
      if (this_00 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                  );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pRVar5 = (pMVar2->fields).runtimeVariableNetworkManager,
           pRVar5 != (RuntimeVariableNetworkManager *)0x0)) {
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                    (pRVar5,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             (pRVar5 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar5 != (RuntimeVariableNetworkManager *)0x0)) {
            item = (this->fields)._._._._.id;
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_,
                            item,0);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar5->fields).runtimeDataVariables;
            if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
              bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                       HashSet_1_System_Int32Enum__Contains
                                 (this_01,item,
                                  MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                 );
              pMVar7 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
              if (bVar6 == 0) {
                uVar8 = func_?(&TypeInfo__System__Exception);
                this_02 = (Exception *)func_?(uVar8);
                pSVar9 = (String *)func_?(&StringLiteral_wo_Id_not_found);
                mscorlib.dll::System::Exception::Exception__ctor_1
                          (this_02,pSVar9,(MethodInfo *)0x0);
                uVar8 = func_?(&
                                             MethodInfo__RuntimeVariableNetworkManager__RemoveRuntimeDataVariables_int_
                                            );
                FUN_?(this_02,uVar8);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pHVar11 = (pRVar5->fields).runtimeDataVariables;
              if (pHVar11 != (HashSet_1_System_Int32_ *)0x0) {
                if ((pHVar11->fields)._buckets != (Int32__Array *)0x0) {
                  iVar12 = FUN_?(pHVar11,item,
                                         MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_
                                         ->klass->rgctx_data[0x16].rgctxDataDummy);
                  pIVar13 = (pHVar11->fields)._buckets;
                  if (pIVar13 == (Int32__Array *)0x0) {
code_?:
                    FUN_?();
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pHVar14 = (pHVar11->fields)._slots;
                  uVar15 = iVar12 % (int)pIVar13->max_length;
                  if ((uint)pIVar13->max_length <= uVar15) {
code_?:
                    FUN_?();
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  uVar16 = pIVar13->vector[(int)uVar15] - 1;
                  if (-1 < (int)uVar16) {
                    iVar17 = 0;
                    uVar18 = 0xffffffff;
                    if (pHVar14 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
                    goto code_?;
                    do {
                      uVar19 = uVar16;
                      if ((uint)pHVar14->max_length <= uVar19) goto code_?;
                      if (pHVar14->vector[(int)uVar19].hashCode == iVar12) {
                        pIVar20 = (pHVar11->fields)._comparer;
                        iVar4 = pHVar14->vector[(int)uVar19].value;
                        if (pIVar20 == (IEqualityComparer_1_System_Int32_ *)0x0)
                        goto code_?;
                        pvVar21 = pMVar7->klass->rgctx_data[4].rgctxDataDummy;
                        if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
                          pvVar21 = (void *)FUN_?(pvVar21);
                        }
                        cVar22 = FUN_?(item,pvVar21,pIVar20,iVar4,item);
                        if (cVar22 != '\0') {
                          if ((int)uVar18 < 0) {
                            pIVar13 = (pHVar11->fields)._buckets;
                            if ((uint)pHVar14->max_length <= uVar19) goto code_?;
                            if (pIVar13 == (Int32__Array *)0x0) goto code_?;
                            if ((uint)pIVar13->max_length <= uVar15) goto code_?;
                            pIVar13->vector[(int)uVar15] = pHVar14->vector[(int)uVar19].next + 1;
                          }
                          else {
                            if (((uint)pHVar14->max_length <= uVar19) ||
                               ((uint)pHVar14->max_length <= uVar18)) goto code_?;
                            pHVar14->vector[(int)uVar18].next = pHVar14->vector[(int)uVar19].next;
                          }
                          if (uVar19 < (uint)pHVar14->max_length) {
                            pHVar14->vector[(int)uVar19].hashCode = -1;
                            if (uVar19 < (uint)pHVar14->max_length) {
                              pHVar14->vector[(int)uVar19].next = (pHVar11->fields)._freeList;
                              piVar23 = &(pHVar11->fields)._version;
                              *piVar23 = *piVar23 + 1;
                              iVar12 = (pHVar11->fields)._count + -1;
                              (pHVar11->fields)._count = iVar12;
                              if (iVar12 == 0) {
                                (pHVar11->fields)._lastIndex = 0;
                                uVar19 = 0xffffffff;
                              }
                              (pHVar11->fields)._freeList = uVar19;
                              return;
                            }
                          }
                          goto code_?;
                        }
                      }
                      if ((int)pHVar14->max_length <= iVar17) {
                        uVar8 = func_?(&TypeInfo__System__InvalidOperationException);
                        this_03 = (ProtocolViolationException *)func_?(uVar8);
                        pSVar9 = (String *)
                                  func_?(&
                                                  StringLiteral_Operations_that_change_non_concu);
                        System.dll::System::Net::ProtocolViolationException::
                        ProtocolViolationException__ctor_1(this_03,pSVar9,(MethodInfo *)0x0);
                        FUN_?(this_03,pMVar7);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      iVar17 = iVar17 + 1;
                      if ((uint)pHVar14->max_length <= uVar19) goto code_?;
                      uVar16 = pHVar14->vector[(int)uVar19].next;
                      uVar18 = uVar19;
                    } while (-1 < (int)uVar16);
                  }
                }
                return;
              }
            }
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UnSuspend() */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_UnSuspend
               (MVBuildModeAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVCubeModelPrototypeTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Problem__network_reporter_is_add);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(&(this->klass->_0).byval_arg);
  pIVar2 = TypeRef__MVCubeModelFineGrainedTerrain;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  lVar3 = 0;
  lVar4 = lVar3;
  if (pIVar2 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar2,1);
    lVar4 = FUN_?(lVar4 + 0x20);
  }
  if (lVar1 != lVar4) {
    lVar1 = FUN_?(&(this->klass->_0).byval_arg);
    pIVar2 = TypeRef__MVCubeModelPrototypeTerrain;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar2 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      FUN_?(pIVar2,1);
      lVar3 = FUN_?();
    }
    if (lVar1 != lVar3) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pTVar6 = (pMVar5->fields).transformNetworkManager,
         pTVar6 != (TransformNetworkManager *)0x0)) {
        pMVar7 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (pTVar6,(this->fields)._._._._.id,(MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Problem__network_reporter_is_add,(MethodInfo *)0x0);
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          pTVar6 = (pMVar5->fields).transformNetworkManager;
          woID = (this->fields)._._._._.id;
          this_01 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
          MVNetworkReporter::MVNetworkReporter__ctor
                    (this_01,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
          if (pTVar6 != (TransformNetworkManager *)0x0) {
            TransformNetworkManager::TransformNetworkManager_AddReporter
                      (pTVar6,woID,this_01,(MethodInfo *)0x0);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (this_00 = (pMVar5->fields).runtimeVariableNetworkManager,
               this_00 != (RuntimeVariableNetworkManager *)0x0)) {
              RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_AddRuntimeDataVariables
                        (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal_Update
          (MVBuildModeAvatarLocal *this,InputToInGameAction *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).buildModeAvatarLocalModes;
  if ((pMVar1 != (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0) &&
     (pMVar2 = (pMVar1->fields).currentMode,
     pMVar2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0)) {
    (*(pMVar2->klass->vtable).__unknown_3.methodPtr)
              (pMVar2,movementMap,(pMVar2->klass->vtable).__unknown_3.method);
    return movementMap;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (InputToInGameAction *)(*pcVar3)();
  return pIVar4;
}


/* MVBuildModeAvatarLocal(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
               (MVBuildModeAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarLocalBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarLocalBuildMode>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
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
      bVar3 = iRam_? != 0;
      (this->fields).avatarScriptObject = pAVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).avatarScriptObject >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

