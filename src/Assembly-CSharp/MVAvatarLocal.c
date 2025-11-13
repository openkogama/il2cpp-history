
/* Void Activate(Int32, SpawnRoleDataReceiver, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Activate
               (MVAvatarLocal *this,int32_t idFrom,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               Vector3 *position,Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  (this->fields).suspended = 0;
  MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  player = (MVPlayer *)0x0;
  MVAvatarLocal_SubscribeToExternalEvents(this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRoleDataReceiver >> 0xc);
    method_00 = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    player = (MVPlayer *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pMVar3 = player->klass;
      LOCK();
      bVar1 = pMVar3 == player->klass;
      if (bVar1) {
        player->klass = (MVPlayer__Class *)((ulonglong)pMVar3 | 1L << (longlong)method_00);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (extraout_RAX == 0) goto code_?;
    if ((*(char *)(extraout_RAX + 0x80) == '\x01') &&
       (bVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                           ((MethodInfo *)0x0), bVar4 != 0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
joined_?:
      if (pIVar5 == (IPlayModeUI *)0x0) goto code_?;
      FUN_?(8);
    }
  }
  else {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (extraout_RAX_00 == 0) goto code_?;
    if (*(char *)(extraout_RAX_00 + 0x80) == '\x01') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
          (IPlayModeUI *)0x0) goto code_?;
      cVar6 = FUN_?(7);
      if (cVar6 != '\0') {
        pIVar5 = (IPlayModeUI *)FUN_?();
        goto joined_?;
      }
    }
  }
  MVAvatarLocal_SetToSpawnTransform(this,(MethodInfo *)0x0);
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_02,idFrom,(MethodInfo *)0x0);
  if (pMVar7 != (MVWorldObjectClient *)0x0) {
    bVar8 = (TypeInfo__MVBuildModeAvatar->_1).naturalAligment;
    if ((bVar8 <= (pMVar7->klass->_1).naturalAligment) &&
       ((MVBuildModeAvatar__Class *)(pMVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
        TypeInfo__MVBuildModeAvatar)) {
      auStack_9._0_4_ = position->x;
      auStack_9._4_4_ = position->y;
      auStack_9._8_4_ = position->z;
      (*(this->klass->vtable).set_Position.methodPtr)
                (this,auStack_9,(this->klass->vtable).set_Position.method);
      auStack_9._0_4_ = rotation->x;
      auStack_9._4_4_ = rotation->y;
      auStack_9._8_4_ = rotation->z;
      auStack_9._12_4_ = rotation->w;
      (*(this->klass->vtable).set_Rotation.methodPtr)
                (this,auStack_9,(this->klass->vtable).set_Rotation.method);
      puVar10 = (undefined8 *)
                (*(this->klass->vtable).get_Position.methodPtr)
                          (auStack_9,this,(this->klass->vtable).get_Position.method);
      pBStackX_8 = (Boost *)*puVar10;
      uVar11 = *(undefined4 *)(puVar10 + 1);
      puVar10 = (undefined8 *)
                (*(this->klass->vtable).get_Rotation.methodPtr)
                          (&QStack_12,this,(this->klass->vtable).get_Rotation.method);
      auStack_9._0_8_ = pBStackX_8;
      auStack_9._8_4_ = uVar11;
      QStack_12._0_8_ = *puVar10;
      QStack_12._8_8_ = puVar10[1];
      MVAvatarLocal_SetTransform(this,(Vector3 *)auStack_9,&QStack_12,(MethodInfo *)0x0);
    }
  }
  MVAvatarLocal_SetupSpawnroleReceiver(this,spawnRoleDataReceiver,(MethodInfo *)0x0);
  pAVar13 = (this->fields)._.avatar;
  if (pAVar13 == (Avatar *)0x0) goto code_?;
  bVar8 = (TypeInfo__AvatarLocal->_1).naturalAligment;
  if (((pAVar13->klass->_1).naturalAligment < bVar8) ||
     ((pAVar13->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
      (Il2CppClass *)TypeInfo__AvatarLocal)) {
    FUN_?(pAVar13);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (pAVar13[1].klass == (Avatar__Class *)0x0) goto code_?;
  pIVar15 = TypeInfo__IAvatarCameraController;
  FUN_?(1);
  AVar16 = (AvatarRuntimeState__Enum)pIVar15;
  if ((this->fields)._._._._.id == idFrom) {
code_?:
    this_04 = (this->fields).avatarLocalModes;
    if (this_04 == (MVAvatarLocal_AvatarLocalModes *)0x0) goto code_?;
    AVar16 = AVar16 & 0xffffff00;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    AVar16 = (AvatarRuntimeState__Enum)pIVar15;
    pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar17 == (MVGameControllerBase *)0x0) ||
        (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
       (pMVar19 = (pMVar18->fields)._NetworkGameStateListener_k__BackingField,
       pMVar19 == (MVNetworkGameStateListener *)0x0)) goto code_?;
    if ((pMVar19->fields).currentGameState == 2) goto code_?;
    this_04 = (this->fields).avatarLocalModes;
    if (this_04 == (MVAvatarLocal_AvatarLocalModes *)0x0) goto code_?;
    AVar16 = (AvatarRuntimeState__Enum)CONCAT71((int7)((ulonglong)pIVar15 >> 8),1);
  }
  MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
            (this_04,AVar16,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 == (MVGameControllerBase *)0x0) ||
      (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
     (this_01 = (pMVar18->fields)._PlayerController_k__BackingField,
     this_01 == (MVLocalObjectController *)0x0)) goto code_?;
  MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
            (this_01,(ILocalObject *)this,(MethodInfo *)0x0);
  if (0 < idFrom) {
    pMVar20 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar20 == (MainCameraManager *)0x0) ||
        (pMVar21 = (pMVar20->fields).cameraController, pMVar21 == (MVCameraController *)0x0)) ||
       ((pMVar22 = (pMVar21->fields).cameraStack, pMVar22 == (MVCameraController_CameraStack *)0x0 ||
        (pMVar23 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar22,(MethodInfo *)0x0), pMVar23 == (MVCameraBase *)0x0))))
    goto code_?;
    (*(pMVar23->klass->vtable).Reset.methodPtr)();
    pMVar20 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((((pMVar20 == (MainCameraManager *)0x0) ||
         (pMVar21 = (pMVar20->fields).cameraController, pMVar21 == (MVCameraController *)0x0)) ||
        (pMVar22 = (pMVar21->fields).cameraStack, pMVar22 == (MVCameraController_CameraStack *)0x0)) ||
       ((pMVar23 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar22,(MethodInfo *)0x0), pMVar23 == (MVCameraBase *)0x0 ||
        (pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pMVar23,(MethodInfo *)0x0),
        pMVar7 == (MVWorldObjectClient *)0x0)))) goto code_?;
    puVar10 = (undefined8 *)
              (*(pMVar7->klass->vtable).get_Rotation.methodPtr)
                        (auStack_9,pMVar7,(pMVar7->klass->vtable).get_Rotation.method);
    if (pTVar24 == (Transform *)0x0) {
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    QStack_12._0_8_ = *puVar10;
    QStack_12._8_8_ = puVar10[1];
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar25 = (pTVar24->fields)._._.m_CachedPtr;
    if (pvVar25 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar24,(MethodInfo *)0x0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pcVar14 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
      uVar26 = func_?(&UNK_?);
      FUN_?(uVar26,0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pcRam_? = pcVar14;
    (*pcRam_?)(pvVar25);
  }
  pTVar24 = (this->fields)._._._.transform;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint(pTVar24,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar17 == (MVGameControllerBase *)0x0) ||
       (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
      (pMVar27 = (pMVar18->fields).playerContainer, pMVar27 == (MVPlayerContainer *)0x0)) ||
     (pMVar28 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar27,(MethodInfo *)0x0),
     pMVar28 == (MVLocalPlayer *)0x0)) goto code_?;
  pBVar29 = (pMVar28->fields).boostController;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__,
             (MethodInfo *)0x0);
  if (pBVar29 == (BoostController *)0x0) goto code_?;
  BoostController::BoostController_SubscribeToBoostChanged
            (pBVar29,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)this_03,(MethodInfo *)0x0)
  ;
  bVar1 = cRam_? == '\0';
  pBStackX_8 = (Boost *)0x0;
  (this->fields).boostedHealthMultiplier = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 == (MVGameControllerBase *)0x0) ||
      (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
     ((pMVar27 = (pMVar18->fields).playerContainer, pMVar27 == (MVPlayerContainer *)0x0 ||
      ((pMVar28 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar27,(MethodInfo *)0x0),
       pMVar28 == (MVLocalPlayer *)0x0 ||
       (pBVar29 = (pMVar28->fields).boostController, pBVar29 == (BoostController *)0x0))))))
  goto code_?;
  bVar4 = BoostController::BoostController_TryGetActiveBoost
                     (pBVar29,BoostType__Enum_ExtraHealthFloatMultiplier,&pBStackX_8,
                      (MethodInfo *)0x0);
  if (bVar4 == 0) {
    pMVar30 = (this->fields)._.MaxHealth;
    if (pMVar30 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    (*(pMVar30->klass->vtable).get_Value.methodPtr)
              (pMVar30,(pMVar30->klass->vtable).get_Value.method);
    pMVar31 = (this->fields)._.Health;
    if (pMVar31 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    (*(pMVar31->klass->vtable).get_Value.methodPtr)();
    MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
    pMVar30 = (this->fields)._.MaxHealth;
    pMVar31 = (this->fields)._.Health;
    if (pMVar30 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    (*(pMVar30->klass->vtable).get_Value.methodPtr)
              (pMVar30,(pMVar30->klass->vtable).get_Value.method);
  }
  else {
    if ((pBStackX_8 == (Boost *)0x0) ||
       (pOVar32 = Boost::Boost_get_Value(pBStackX_8,(MethodInfo *)0x0), pOVar32 == (Object *)0x0))
    goto code_?;
    if ((pOVar32->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar32,lRam_?);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    (this->fields).boostedHealthMultiplier =
         (float)*(int *)&pOVar32[1].klass / _UNK_? + _UNK_?;
    MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
    pMVar30 = (this->fields)._.MaxHealth;
    pMVar31 = (this->fields)._.Health;
    if (pMVar30 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    (*(pMVar30->klass->vtable).get_Value.methodPtr)
              (pMVar30,(pMVar30->klass->vtable).get_Value.method);
  }
  if (pMVar31 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    (*(pMVar31->klass->vtable).set_Value.methodPtr)(pMVar31);
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AttachBody
               (MVAvatarLocal *this,MVBody *newBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_AttachBody((MVAvatar *)this,newBody,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) || ((pMVar1->fields).game == (MVNetworkGame *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)(), newBody == (MVBody *)0x0))
  goto code_?;
  if (cVar2 == '\0') {
    if (((newBody->fields).forceHidden == 0) && ((newBody->fields).visible != 0)) {
      (newBody->fields).visible = 0;
      goto code_?;
    }
  }
  else if (((newBody->fields).forceHidden == 0) && ((newBody->fields).visible != 1)) {
    (newBody->fields).visible = 1;
code_?:
    MVBody::MVBody_UpdateVisibility(newBody,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar1->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).operationRequests, pMVar4 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
              (pMVar4,(newBody->fields)._._._._.id,0,(Transform *)0x0,(MethodInfo *)0x0);
    LStack_5._list =
         (List_1_System_Object_ *)
         MVGroup::MVGroup_get_Children((MVGroup *)newBody,(MethodInfo *)0x0);
    if ((List_1_MVWorldObjectClient_ *)LStack_5._list != (List_1_MVWorldObjectClient_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)
                    (uint)(((List_1_MVWorldObjectClient_ *)LStack_5._list)->fields)._version <<
                   0x20);
      uStack_12 = 0;
      LStack_5._8_8_ = pLStack_11;
      LStack_5._current = (Object *)0x0;
      uStack_7 = 0;
      pLStack_11 = &LStack_5;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_5,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                           );
        pOVar14 = LStack_5._current;
        if (bVar13 == 0) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
        pMVar3 = (pMVar1->fields).game;
        if (pMVar3 == (MVNetworkGame *)0x0) break;
        pMVar4 = (pMVar3->fields).operationRequests;
        if (pOVar14 == (Object *)0x0) {
code_?:
          FUN_?();
          break;
        }
        if (pMVar4 == (MVNetworkGame_OperationRequests *)0x0) {
          FUN_?();
          goto code_?;
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                  (pMVar4,*(int32_t *)&pOVar14[1].klass,0,(Transform *)0x0,(MethodInfo *)0x0);
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void AvatarCommandsOnMoveBodyToSafeSpot(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnMoveBodyToSafeSpot
               (MVAvatarLocal *this,int32_t safeSpotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Move_to_safe_spot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
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
       (((pSVar2 = (pSVar1->fields).reviveState,
         pSVar2 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0 &&
         (pSVar3 = (pSVar2->fields).subscribableVariable,
         pSVar3 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
        (pRVar4 = (pSVar3->fields)._.value, pRVar4 != (ReviveState *)0x0)))) {
      ReviveState::ReviveState_SetSafeGroundedDataIndex(pRVar4,safeSpotIndex,(MethodInfo *)0x0);
      pSVar1 = (this->fields).spawnRoleDataReceiver;
      if ((((pSVar1 != (SpawnRoleDataReceiver *)0x0) &&
           (pSVar2 = (pSVar1->fields).reviveState,
           pSVar2 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) &&
          (pSVar3 = (pSVar2->fields).subscribableVariable,
          pSVar3 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
         (pRVar4 = (pSVar3->fields)._.value, pRVar4 != (ReviveState *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        pSVar5 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                            (&SStack_6,pRVar4,(MethodInfo *)0x0);
        auStack_7._4_4_ = (pSVar5->Rotation).y;
        auStack_7._8_4_ = (pSVar5->Rotation).z;
        auStack_7._12_8_ = *(undefined8 *)&(pSVar5->Rotation).w;
        fStack_8 = (pSVar5->Position).x;
        fStack_9 = (pSVar5->Position).y;
        uVar10._0_4_ = (pSVar5->Position).x;
        uVar10._4_4_ = (pSVar5->Position).y;
        fVar11 = (pSVar5->Position).z;
        auStack_7._0_4_ = (pSVar5->Rotation).x;
        uStack_12._0_4_ = (pSVar5->CameraPosition).y;
        uStack_12._4_4_ = (pSVar5->CameraPosition).z;
        QStack_13.x = (pSVar5->CameraRotation).x;
        QStack_13.y = (pSVar5->CameraRotation).y;
        QStack_13.z = (pSVar5->CameraRotation).z;
        QStack_13.w = (pSVar5->CameraRotation).w;
        fStack_14 = fVar11;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                            (&VStack_16,(Quaternion *)auStack_7,method_00);
        uVar17 = pVVar15->x;
        fVar18 = pVVar15->z;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                            (&VStack_19,&QStack_13,method_00);
        uVar20 = pVVar15->y;
        VStack_16.z = fVar18 * _UNK_?;
        VStack_16.y = (float)uVar20 * _UNK_?;
        VStack_16.x = (float)uVar17 * _UNK_?;
        QStack_21.x = 0.0;
        QStack_21.y = 0.0;
        QStack_21.z = 0.0;
        QStack_21.w = 0.0;
        pcVar22 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pcRam_? = pcVar22;
        (*pcRam_?)(&VStack_16,&QStack_21);
        VStack_16._0_8_ = uVar10;
        VStack_16.z = fVar11;
        MVAvatarLocal_SetTransform(this,&VStack_16,&QStack_21,(MethodInfo *)0x0);
        pMVar23 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((((pMVar23 != (MainCameraManager *)0x0) &&
             (pMVar24 = (pMVar23->fields).cameraController, pMVar24 != (MVCameraController *)0x0)) &&
            (this_01 = (pMVar24->fields).cameraStack,
            this_01 != (MVCameraController_CameraStack *)0x0)) &&
           ((this_03 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                 (this_01,(MethodInfo *)0x0), this_03 != (MVCameraBase *)0x0 &&
            (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_03,(MethodInfo *)0x0), obj != (Transform *)0x0)))) {
          VStack_19.x = QStack_13.x;
          VStack_19.y = QStack_13.y;
          VStack_19.z = QStack_13.z;
          fStack_25 = QStack_13.w;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar26 = (obj->fields)._._.m_CachedPtr;
          if (pvVar26 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pcVar22 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pcRam_? = pcVar22;
          pVVar15 = &VStack_19;
          (*pcRam_?)(pvVar26,pVVar15);
          this_02 = (this->fields).avatarLocalModes;
          if (this_02 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
            MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                      (this_02,(AvatarRuntimeState__Enum)
                               CONCAT71((int7)((ulonglong)pVVar15 >> 8),0xb),(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void AvatarCommandsOnRespawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnRespawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 == (AvatarRespawnHandler *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  if ((pAVar1->fields).shouldRespawnAsGhost == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pFVar5 = (pMVar4->fields).flagDebriefingControl, pFVar5 != (FlagDebriefingControl *)0x0))
       && (pMVar6 = (pAVar1->fields).mvAvatar, pMVar6 != (MVAvatarLocal *)0x0)) {
      pMVar7 = (pMVar6->fields).avatarLocalModes;
      uVar8 = (undefined7)((ulonglong)uVar3 >> 8);
      if ((pFVar5->fields).IsInFlagDebriefing == 0) {
        if (pMVar7 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
          MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                    (pMVar7,(AvatarRuntimeState__Enum)CONCAT71(uVar8,1),(MethodInfo *)0x0);
          (pAVar1->fields).shouldRespawnAsGhost = 1;
          return;
        }
      }
      else if (pMVar7 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                  (pMVar7,(AvatarRuntimeState__Enum)CONCAT71(uVar8,7),(MethodInfo *)0x0);
        (pAVar1->fields).shouldRespawnAsGhost = 1;
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 != (MVGameControllerBase *)0x0) &&
       (pFVar5 = (pMVar4->fields).flagDebriefingControl, pFVar5 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar5->fields).IsInFlagDebriefing == 0) {
        pMVar6 = (pAVar1->fields).mvAvatar;
        if ((pMVar6 == (MVAvatarLocal *)0x0) ||
           (pMVar7 = (pMVar6->fields).avatarLocalModes,
           pMVar7 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                  (pMVar7,(AvatarRuntimeState__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),9),
                   (MethodInfo *)0x0);
        (pAVar1->fields).shouldRespawnAsGhost = 1;
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AvatarCommandsOnSetToSpawnMode() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnSetToSpawnMode
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pTVar2 = (pMVar1->fields).transitionCamera, pTVar2 != (TransitionCamera *)0x0)) {
    (pTVar2->fields).transitionPercentage = 1.0;
    obj = MVAvatarLocal_GetSpawnTransform(this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6.z = 0.0;
      QStack_6.w = 0.0;
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&QStack_6);
      QStack_7.x = QStack_6.x;
      QStack_7.y = QStack_6.y;
      QStack_7.z = QStack_6.z;
      QStack_7.w = QStack_6.w;
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6._8_8_ = QStack_6._8_8_ & 0xffffffff00000000;
      MVAvatarLocal_SetTransform(this,(Vector3 *)&QStack_6,&QStack_7,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AvatarCommandsOnSpawnAtSafeSpot(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsOnSpawnAtSafeSpot
               (MVAvatarLocal *this,int32_t safeSpotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SetMode_to_playing_from_SafeSpot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_SetMode_to_playing_from_SafeSpot,(MethodInfo *)0x0);
  MVAvatarLocal_AvatarCommandsOnMoveBodyToSafeSpot(this,safeSpotIndex,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 != (AvatarRespawnHandler *)0x0) {
    (pAVar1->fields).shouldRespawnAsGhost = 0;
    pAVar1 = (this->fields).avatarRespawnHandler;
    if (pAVar1 != (AvatarRespawnHandler *)0x0) {
      uVar2 = 0;
      if ((pAVar1->fields).shouldRespawnAsGhost == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pFVar4 = (pMVar3->fields).flagDebriefingControl, pFVar4 != (FlagDebriefingControl *)0x0
            )) && (pMVar5 = (pAVar1->fields).mvAvatar, pMVar5 != (MVAvatarLocal *)0x0)) {
          pMVar6 = (pMVar5->fields).avatarLocalModes;
          uVar7 = (undefined7)((ulonglong)uVar2 >> 8);
          if ((pFVar4->fields).IsInFlagDebriefing == 0) {
            if (pMVar6 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
              MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                        (pMVar6,(AvatarRuntimeState__Enum)CONCAT71(uVar7,1),(MethodInfo *)0x0);
              (pAVar1->fields).shouldRespawnAsGhost = 1;
              return;
            }
          }
          else if (pMVar6 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
            MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                      (pMVar6,(AvatarRuntimeState__Enum)CONCAT71(uVar7,7),(MethodInfo *)0x0);
            (pAVar1->fields).shouldRespawnAsGhost = 1;
            return;
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar3 != (MVGameControllerBase *)0x0) &&
           (pFVar4 = (pMVar3->fields).flagDebriefingControl, pFVar4 != (FlagDebriefingControl *)0x0)
           ) {
          if ((pFVar4->fields).IsInFlagDebriefing == 0) {
            pMVar5 = (pAVar1->fields).mvAvatar;
            if ((pMVar5 == (MVAvatarLocal *)0x0) ||
               (pMVar6 = (pMVar5->fields).avatarLocalModes,
               pMVar6 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
            MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                      (pMVar6,(AvatarRuntimeState__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),9),
                       (MethodInfo *)0x0);
            (pAVar1->fields).shouldRespawnAsGhost = 1;
          }
          return;
        }
      }
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnReadyScreenShot() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnReadyScreenShot
               (MVAvatarLocal *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pAVar2 = (this->fields)._.avatar;
  if ((pAVar2 == (Avatar *)0x0) ||
     (this_00 = (pAVar2->fields).avatarFader, this_00 == (AvatarFader *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SM3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar4 = _UNK_?;
  if ((fVar1 == _UNK_?) && ((this_00->fields).fading == 0)) {
    return;
  }
  bVar5 = fVar1 == _UNK_?;
  (this_00->fields).fading = fVar1 < _UNK_?;
  if (bVar5) {
    (this_00->fields).changedShaders = 0;
    (this_00->fields).prevFading = 0;
  }
  pLVar6 = (this_00->fields).avatarMaterials;
  index = 0;
  if (pLVar6 != (List_1_UnityEngine_Material_ *)0x0) {
    lVar7 = 0x20;
    do {
      if ((pLVar6->fields)._size <= (int)index) {
        if ((this_00->fields).changedShaders == 0) {
          return;
        }
        (this_00->fields).prevFading = 1;
        return;
      }
      pLVar6 = (this_00->fields).avatarMaterials;
      if (pLVar6 == (List_1_UnityEngine_Material_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar8 = (pLVar6->fields)._items;
      if (pMVar8 == (Material__Array *)0x0) break;
      if ((uint)pMVar8->max_length <= index) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = *(Material **)((longlong)pMVar8->vector + lVar7 + -0x20);
      pMStackX_20 = this_01;
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
      if (this_01 == (Material *)0x0) {
code_?:
        pLVar6 = (this_00->fields).avatarMaterials;
        if (pLVar6 == (List_1_UnityEngine_Material_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar6,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                  );
        index = index - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
        if ((this_00->fields).prevFading == 0) {
          pSVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                              (this_01,(MethodInfo *)0x0);
          pSVar9 = AvatarFader::AvatarFader_GetShader
                              (this_00,pSVar9,(this_00->fields).fading,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                    (this_01,pSVar9,(MethodInfo *)0x0);
          if ((pSVar9 == (Shader *)0x0) ||
             (pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                  ((Object_1 *)pSVar9,(MethodInfo *)0x0), pSVar10 == (String *)0x0)
             ) break;
          bVar11 = mscorlib.dll::System::String::String_Contains
                            (pSVar10,StringLiteral_CubeModel,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                ((Object_1 *)pSVar9,(MethodInfo *)0x0);
            if (pSVar10 == (String *)0x0) break;
            bVar11 = mscorlib.dll::System::String::String_Contains
                              (pSVar10,StringLiteral_SM3,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
              FUN_?();
            }
            TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                      (&pMStackX_20,bVar11,(MethodInfo *)0x0);
            this_01 = pMStackX_20;
          }
        }
        if (this_01 == (Material *)0x0) break;
        iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                          (this_01,iVar12,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            ((this_00->fields).colorProperty,(MethodInfo *)0x0);
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                            (this_01,iVar12,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              ((this_00->fields).tintProperty,(MethodInfo *)0x0);
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                              (this_01,iVar12,(MethodInfo *)0x0);
            if (bVar11 != 0) {
              pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                  (&CStack_14,this_01,(this_00->fields).tintProperty,
                                   (MethodInfo *)0x0);
              CStack_15.r = pCVar13->r;
              CStack_15.g = pCVar13->g;
              CStack_15.b = pCVar13->b;
              CStack_15.a = fVar1;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (this_01,(this_00->fields).tintProperty,&CStack_15,(MethodInfo *)0x0);
            }
          }
          else {
            pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                (&CStack_16,this_01,(MethodInfo *)0x0);
            CStack_15.r = pCVar13->r;
            CStack_15.g = pCVar13->g;
            CStack_15.b = pCVar13->b;
            CStack_15.a = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_01,&CStack_15,(MethodInfo *)0x0);
          }
        }
        else {
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (this_01,iVar12,fVar4 - fVar1,(MethodInfo *)0x0);
        }
      }
      pLVar6 = (this_00->fields).avatarMaterials;
      index = index + 1;
      lVar7 = lVar7 + 8;
    } while (pLVar6 != (List_1_UnityEngine_Material_ *)0x0);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnRemoveFromGame() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnRemoveFromGame
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).currentMode;
  bVar4 = (pMVar1->fields).currentState;
  if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar3->klass->vtable).__unknown.methodPtr)
              (pMVar3,0,(pMVar3->klass->vtable).__unknown.method);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar3 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      bVar5 = iRam_? != 0;
      (pMVar1->fields).currentMode = pMVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields).currentMode >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      pMVar3 = (pMVar1->fields).currentMode;
      (pMVar1->fields).currentState = 0;
      if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar3->klass->vtable).Activate.methodPtr)
                  (pMVar3,(ulonglong)bVar4,(pMVar3->klass->vtable).Activate.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AvatarCommandsPlayModeOnOnSpawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarCommandsPlayModeOnOnSpawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).currentMode;
  bVar4 = (pMVar1->fields).currentState;
  if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar3->klass->vtable).__unknown.methodPtr)
              (pMVar3,1,(pMVar3->klass->vtable).__unknown.method);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar3 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,1,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      bVar5 = iRam_? != 0;
      (pMVar1->fields).currentMode = pMVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields).currentMode >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      pMVar3 = (pMVar1->fields).currentMode;
      (pMVar1->fields).currentState = 1;
      if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar3->klass->vtable).Activate.methodPtr)
                  (pMVar3,(ulonglong)bVar4,(pMVar3->klass->vtable).Activate.method);
        return;
      }
    }
  }
  FUN_?();
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
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                      ,CONCAT71((int7)(CONCAT44(in_register_00000014,winningConditionType) >> 8),7),
                      0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = (pMVar1->fields).currentMode;
      bVar3 = (pMVar1->fields).currentState;
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
          bVar4 = iRam_? != 0;
          (pMVar1->fields).currentMode = pMVar2;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&(pMVar1->fields).currentMode >> 0xc);
            puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar7 = *puVar6;
              LOCK();
              uVar8 = *puVar6;
              if (uVar7 == uVar8) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar7 != uVar8);
          }
          pMVar2 = (pMVar1->fields).currentMode;
          (pMVar1->fields).currentState = 7;
          if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pMVar2->klass->vtable).Activate.methodPtr)
                      (pMVar2,(ulonglong)bVar3,(pMVar2->klass->vtable).Activate.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    uVar10 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar10);
    message = (String *)func_?(&StringLiteral_Not_implemented);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                               );
    FUN_?(this_01,uVar10);
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_AvatarStateChangedHandler
               (MVAvatarLocal *this,Object *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass96_0___AvatarStateChangedHandler_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass96_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass96_0);
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)a;
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
  MVAvatar::MVAvatar_AvatarStateChangedHandler
            ((MVAvatar *)this,(Object *)object[1].klass,(MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
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


/* Void BeforeVehicleEntered() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_BeforeVehicleEntered
               (MVAvatarLocal *this,MethodInfo *method)

{
  this_00 = (this->fields).triggerHandler;
  if (this_00 == (MVTriggerHandler *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).wasResetThisFrame = 1;
  pDVar3 = (Dictionary_2_System_UInt32_System_Object_ *)(this_00->fields).triggerBoxEvents;
  if (pDVar3 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    uStack_4 = 0;
    uStack_5 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    uStack_11 = (ulonglong)(uint)(pDVar3->fields)._version;
    uStack_12 = 2;
    auStack_1._8_8_ = uStack_11;
    KStack_13.key = 0;
    KStack_13._4_4_ = 0;
    KStack_13.value = (Object *)0x0;
    uStack_14._0_4_ = 2;
    uStack_14._4_4_ = 0;
    pDStack_7 = pDVar3;
    auStack_1._0_8_ = pDVar3;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              auStack_1,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                             ), this_01 = KStack_13.value, bVar15 != 0) {
      other = MVTriggerHandler::MVTriggerHandler_get_TriggingCollider(this_00,(MethodInfo *)0x0);
      if ((TriggerBoxEvents *)this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                ((TriggerBoxEvents *)this_01,other,(MethodInfo *)0x0);
    }
    pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(this_00->fields).newTriggerBoxEvents;
    if (pDVar16 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar16,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)(this_00->fields).triggerBoxEvents;
      if (pDVar16 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        TypeConverterRegistry+ConverterKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                  (pDVar16,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        return;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 CalculateVehicleExitMomentum(Vector3) */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_CalculateVehicleExitMomentum
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,Vector3 *velocity,
                    MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  uVar5 = velocity->x;
  fVar6 = (velocity->y / fVar4) * _UNK_?;
  fVar7 = (velocity->z / fVar4) * _UNK_?;
  velocity->x = ((float)uVar5 / fVar4) * _UNK_?;
  velocity->y = fVar6;
  velocity->z = fVar7;
  fVar4 = (float)FUN_?(velocity);
  uVar8 = velocity->x;
  fVar7 = fVar4 / _UNK_? + velocity->y;
  velocity->x = (float)uVar8;
  velocity->y = fVar7;
  fVar4 = velocity->z;
  __return_storage_ptr__->x = (float)uVar8;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void DeActivate(Int32, SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_DeActivate
               (MVAvatarLocal *this,int32_t idTo,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Removing_network_object_again_as);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarLocalModes;
  if (this_00 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    AVar1 = MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
                       (this_00,(MethodInfo *)0x0);
    MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
              (this_00,AVar1 & 0xff,(MethodInfo *)0x0);
    pAVar2 = (this->fields).avatarEquipable;
    if (pAVar2 != (AvatarEquipable *)0x0) {
      (*(pAVar2->klass->vtable).Unequip.methodPtr)(pAVar2,(pAVar2->klass->vtable).Unequip.method);
      pAVar3 = (this->fields).interactableLocal;
      if (pAVar3 != (AvatarInteractable *)0x0) {
        (*(pAVar3->klass->vtable).ClearModifiers.methodPtr)();
        MVAvatarLocal_UnsubscribeFromExternalEvents(this,(MethodInfo *)0x0);
        this_01 = (this->fields)._._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (this->fields).spawnRoleDataReceiver = (SpawnRoleDataReceiver *)0x0;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&(this->fields).spawnRoleDataReceiver >> 0xc);
            puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar7 = *puVar6;
              LOCK();
              uVar8 = *puVar6;
              if (uVar7 == uVar8) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar7 != uVar8);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar9 != (MVGameControllerBase *)0x0) &&
              (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
             (pMVar11 = (pMVar10->fields)._PlayerController_k__BackingField,
             pMVar11 != (MVLocalObjectController *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar12 = (pMVar11->fields).localControlledStack;
            FUN_?();
            if (pLVar12 != (List_1_ILocalObject_ *)0x0) {
              if ((pLVar12->fields)._size == 0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pIVar14 = (pLVar12->fields)._items;
              if (pIVar14 != (ILocalObject__Array *)0x0) {
                FUN_?(pIVar14,0);
                piVar15 = &(pLVar12->fields)._version;
                *piVar15 = *piVar15 + 1;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar9 != (MVGameControllerBase *)0x0) &&
                    (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                   (pTVar16 = (pMVar10->fields).transformNetworkManager,
                   pTVar16 != (TransformNetworkManager *)0x0)) {
                  pMVar17 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                      (pTVar16,(this->fields)._._._._.id,(MethodInfo *)0x0);
                  if (pMVar17 == (MVNetworkObject *)0x0) {
                    return;
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                            ((Object *)StringLiteral_Removing_network_object_again_as,
                             (MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar9 != (MVGameControllerBase *)0x0) &&
                     (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) {
                    pTVar16 = (pMVar10->fields).transformNetworkManager;
                    key = (this->fields)._._._._.id;
                    if (pTVar16 != (TransformNetworkManager *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      this_02 = (pTVar16->fields).networkedObjects;
                      if (this_02 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Remove
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                                  );
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Die() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Die(MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.SpawnRoleModeTypes;
  if ((pMVar1 == (MVRuntimeDataVariable *)0x0) ||
     (pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                          ((pMVar1->fields).value,(MethodInfo *)0x0), pOVar2 == (Object *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2,lRam_?);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((ulonglong)pOVar2[1].klass & 1) == 0) {
    return;
  }
  uStack_4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  FUN_?(0xc,TypeInfo__IPlayModeUI);
  pMVar5 = (this->fields)._.shield;
  if (pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    (*(pMVar5->klass->vtable).set_Value.methodPtr)(pMVar5,0);
    bVar6 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if (bVar6 == 0) {
code_?:
      bVar6 = 0;
code_?:
      pSVar7 = (this->fields).spawnRoleDataReceiver;
      if (pSVar7 != (SpawnRoleDataReceiver *)0x0) {
        pSVar8 = (pSVar7->fields).reviveState;
        if (pSVar8 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) {
          pSVar9 = (pSVar8->fields).subscribableVariable;
          if (pSVar9 != (SubscribableVariable_1_ReviveState_ *)0x0) {
            pRVar10 = (pSVar9->fields)._.value;
            if (pRVar10 != (ReviveState *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              (pRVar10->fields).currentPreviewedSafePosition = 0;
              pLVar11 = (pRVar10->fields).safePositions;
              if (pLVar11 != (List_1_SafeSpotData_ *)0x0) {
                piVar12 = &(pLVar11->fields)._version;
                *piVar12 = *piVar12 + 1;
                (pLVar11->fields)._size = 0;
code_?:
                this_01 = (this->fields).avatarLocalModes;
                if (this_01 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
                  mode = AvatarRuntimeState__Enum_Revive;
                  if (bVar6 == 0) {
                    mode = AvatarRuntimeState__Enum_Dead;
                  }
                  MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                            (this_01,mode,(MethodInfo *)0x0);
                  FUN_?();
                  return;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      pSVar7 = (this->fields).spawnRoleDataReceiver;
      if (pSVar7 != (SpawnRoleDataReceiver *)0x0) {
        pSVar8 = (pSVar7->fields).reviveState;
        if (pSVar8 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) {
          pSVar9 = (pSVar8->fields).subscribableVariable;
          if (pSVar9 != (SubscribableVariable_1_ReviveState_ *)0x0) {
            pRVar10 = (pSVar9->fields)._.value;
            if (pRVar10 != (ReviveState *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar11 = (pRVar10->fields).safePositions;
              if (pLVar11 != (List_1_SafeSpotData_ *)0x0) {
                if ((pLVar11->fields)._size < 1) goto code_?;
                pAVar13 = (this->fields).avatarMotor;
                if (pAVar13 != (AvatarMotor *)0x0) {
                  this_00 = (pAVar13->fields)._GetSizeState_k__BackingField;
                  pSVar7 = (this->fields).spawnRoleDataReceiver;
                  if (pSVar7 != (SpawnRoleDataReceiver *)0x0) {
                    pSVar8 = (pSVar7->fields).reviveState;
                    if (pSVar8 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) {
                      pSVar9 = (pSVar8->fields).subscribableVariable;
                      if (pSVar9 != (SubscribableVariable_1_ReviveState_ *)0x0) {
                        pRVar10 = (pSVar9->fields)._.value;
                        if (pRVar10 != (ReviveState *)0x0) {
                          pSVar14 = ReviveState::ReviveState_get_SafeGroundedData
                                              (&SStack_15,pRVar10,(MethodInfo *)0x0);
                          uStack_16._0_4_ = (pSVar14->Rotation).y;
                          uStack_16._4_4_ = (pSVar14->Rotation).z;
                          uStack_17 = *(undefined8 *)&(pSVar14->Rotation).w;
                          fStack_18 = (pSVar14->CameraPosition).y;
                          fStack_19 = (pSVar14->CameraPosition).z;
                          fStack_20 = (pSVar14->CameraRotation).x;
                          fStack_21 = (pSVar14->CameraRotation).y;
                          uStack_22._0_4_ = (pSVar14->CameraRotation).z;
                          uStack_22._4_4_ = (pSVar14->CameraRotation).w;
                          if (this_00 != (SizeState *)0x0) {
                            VStack_23.x = (pSVar14->Position).x;
                            VStack_23.y = (pSVar14->Position).y;
                            VStack_23.z = (pSVar14->Position).z;
                            bVar6 = SizeState::SizeState_GetIsValidScaledPosition
                                               (this_00,&VStack_23,_UNK_?,(MethodInfo *)0x0)
                            ;
                            if (bVar6 == 0) goto code_?;
                            goto code_?;
                          }
                          FUN_?();
                        }
                        FUN_?();
                      }
                      FUN_?();
                    }
                    FUN_?();
                  }
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    (*(pMVar2->klass->vtable).__unknown_1.methodPtr)
              (pMVar2,movementMap,(pMVar2->klass->vtable).__unknown_1.method);
    return movementMap;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IInputToPlayerMovement *)(*pcVar3)();
  return pIVar4;
}


/* Void GameEventManagerOnOnFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameEventManagerOnOnFirstTimeEvent
               (MVAvatarLocal *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  FirstTimeAvatarJumpAnimator_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeAvatarJumpAnimator>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (firstTimeEvent == FirstTimeEvent__Enum_PM_LobbyState) {
    this_00 = (this->fields)._._._.gameObject;
    if ((this_00 == (GameObject *)0x0) ||
       (pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (this_00,
                            FirstTimeAvatarJumpAnimator_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeAvatarJumpAnimator>__
                           ), pOVar1 == (Object *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = iRam_? != 0;
    pOVar1[3].klass = (Object__Class *)this;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(pOVar1 + 3) >> 0xc);
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
  }
  return;
}


/* Void GameEventManagerOnOnXpRewarded(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameEventManagerOnOnXpRewarded
               (MVAvatarLocal *this,int32_t obj,MethodInfo *method)

{
  this_02 = MVAvatarLocal_get_AvatarLocal(this,(MethodInfo *)0x0);
  if ((((this_02 == (AvatarLocal *)0x0) ||
       (pMVar1 = (this_02->fields)._.mvAvatar, pMVar1 == (MVAvatar *)0x0)) ||
      (pMVar2 = (pMVar1->fields).body, pMVar2 == (MVBody *)0x0)) ||
     (pGVar3 = (pMVar2->fields)._._._.gameObject, pGVar3 == (GameObject *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (pGVar3->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  value = (*pcRam_?)(pvVar5);
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarPooledXPParticles_MethodInfo__EnumPoolManager__Instantiate<AvatarPooledXPParticles>_PoolEnums_
                  ,obj,value,0);
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
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (((pPVar7 != (PrefabPool *)0x0) &&
      (this_00 = (pPVar7->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
     (this_01 = (AvatarPooledXPParticles *)
                EnumPoolManager::EnumPoolManager_Instantiate
                          (this_00,PoolEnums__Enum_XP,
                           AvatarPooledXPParticles_MethodInfo__EnumPoolManager__Instantiate<AvatarPooledXPParticles>_PoolEnums_
                          ), this_01 != (AvatarPooledXPParticles *)0x0)) {
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0);
    value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_02,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar8,value_00,(MethodInfo *)0x0);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar8 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar5);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar8 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar5);
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar8 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar5);
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      (pGVar3,value,(MethodInfo *)0x0);
            AvatarPooledXPParticles::AvatarPooledXPParticles_Initialize
                      (this_01,obj,(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GameStateTypeOnOnChange(MVGameStateType) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GameStateTypeOnOnChange
               (MVAvatarLocal *this,MVGameStateType__Enum gameStateType,MethodInfo *method)

{
  if (gameStateType == MVGameStateType__Enum_RoundEnded) {
    pMVar1 = (this->fields).avatarLocalModes;
    if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pMVar1->fields).currentState != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                      ,CONCAT71((int7)(CONCAT44(in_register_00000014,gameStateType) >> 8),8),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = (pMVar1->fields).currentMode;
      bVar4 = (pMVar1->fields).currentState;
      if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(pMVar3->klass->vtable).__unknown.methodPtr)
                  (pMVar3,8,(pMVar3->klass->vtable).__unknown.method);
        this_00 = (pMVar1->fields).avatarModes;
        if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
          pMVar3 = (MVAvatarLocal_AvatarMode *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,8,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                             );
          bVar5 = iRam_? != 0;
          (pMVar1->fields).currentMode = pMVar3;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(pMVar1->fields).currentMode >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
          pMVar3 = (pMVar1->fields).currentMode;
          (pMVar1->fields).currentState = 8;
          if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pMVar3->klass->vtable).Activate.methodPtr)
                      (pMVar3,(ulonglong)bVar4,(pMVar3->klass->vtable).Activate.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
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
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar2 = (double)func_?((double)((float)unBoostedMaxHealth * fVar1));
  return (int)dVar2;
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Dictionary`2[System.Object,System.Object] GetCurrentItemState() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetCurrentItemState
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                     ((pMVar1->fields).value,(MethodInfo *)0x0);
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar3->klass->_1).naturalAligment < bVar4) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar3,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar2 = (code *)swi(3);
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
      return pDVar3;
    }
  }
  return pDVar3;
}


/* Transform GetSpawnTransform() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetSpawnTransform
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_spawn_point_found_on_planet_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spawn_role_creator_was_destroyed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStackX_18 = (MVWorldObject *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 == (MVLocalPlayer *)0x0)) goto code_?;
  pMVar3 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)this_01,(MethodInfo *)0x0);
  if (pMVar3 == (MVCheckpoint *)0x0) {
    if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar4 = TypeInfo__MVAvatarLocal____c->static_fields->__9__141_1;
    if (pMVar4 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
      if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = TypeInfo__MVAvatarLocal____c->static_fields->__9;
      pMVar4 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)pMVar4,(Object *)pMVar5,
                 MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 ,(MethodInfo *)0x0);
      TypeInfo__MVAvatarLocal____c->static_fields->__9__141_1 = pMVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__MVAvatarLocal____c->static_fields->__9__141_1 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (this == (MVAvatarLocal *)0x0) goto code_?;
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (pMVar4 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
      goto code_?;
      (*(pMVar4->fields)._._.invoke_impl)
                ((pMVar4->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (pMVar4->fields)._._.method);
    }
    if ((this->fields).spawnWorldObjectId != -1) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClientManager *)0x0) {
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        pTVar12 = (Transform *)(*pcVar11)();
        return pTVar12;
      }
      bVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                        (this_02,(this->fields).spawnWorldObjectId,&pMStackX_18,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        if (pMStackX_18 != (MVWorldObject *)0x0) {
          bVar14 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
          if (((bVar14 <= (pMStackX_18->klass->_1).naturalAligment) &&
              ((MVWorldObjectClient__Class *)
               (pMStackX_18->klass->_1).typeHierarchy[(ulonglong)bVar14 - 1] ==
               TypeInfo__MVWorldObjectClient)) && (pMStackX_18 != (MVWorldObject *)0x0)) {
            return *(Transform **)&pMStackX_18[1].fields.position;
          }
          FUN_?(pMStackX_18);
          pcVar11 = (code *)swi(3);
          pTVar12 = (Transform *)(*pcVar11)();
          return pTVar12;
        }
        goto code_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Spawn_role_creator_was_destroyed,(MethodInfo *)0x0);
    }
    pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
                        ((MethodInfo *)0x0);
    if (pMVar15 == (MVWorldObjectClient *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_spawn_point_found_on_planet_,(MethodInfo *)0x0);
      pTVar12 = (Transform *)0x0;
    }
    else {
      pTVar12 = (pMVar15->fields).transform;
    }
  }
  else {
    if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar4 = TypeInfo__MVAvatarLocal____c->static_fields->__9__141_0;
    if (pMVar4 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
      if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = TypeInfo__MVAvatarLocal____c->static_fields->__9;
      pMVar4 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)pMVar4,(Object *)pMVar5,
                 MethodInfo__MVAvatarLocal____c___GetSpawnTransform_b__141_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 ,(MethodInfo *)0x0);
      TypeInfo__MVAvatarLocal____c->static_fields->__9__141_0 = pMVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__MVAvatarLocal____c->static_fields->__9__141_0 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (this == (MVAvatarLocal *)0x0) goto code_?;
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (pMVar4 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
      goto code_?;
      (*(pMVar4->fields)._._.invoke_impl)
                ((pMVar4->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                 (pMVar4->fields)._._.method);
    }
    pTVar12 = (pMVar3->fields)._._.transform;
  }
  return pTVar12;
}


/* GamePassTier GetTierRequirement() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_GetTierRequirement
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStackX_8 = (MVAvatarSpawnRoleCreator *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                      (this_00,(this->fields).spawnWorldObjectId,(MVWorldObject **)&pMStackX_8,
                       (MethodInfo *)0x0);
    ppIVar2 = (Il2CppClass **)CONCAT71(extraout_var,bVar1);
    if ((bVar1 != 0) && (pMStackX_8 != (MVAvatarSpawnRoleCreator *)0x0)) {
      pMVar3 = pMStackX_8->klass;
      bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      ppIVar2 = (Il2CppClass **)0x0;
      if ((bVar4 <= (pMVar3->_1).naturalAligment) &&
         ((ppIVar2 = (pMVar3->_1).typeHierarchy,
          (MVAvatarSpawnRoleCreator__Class *)ppIVar2[(ulonglong)bVar4 - 1] ==
          TypeInfo__MVAvatarSpawnRoleCreator && (pMStackX_8 != (MVAvatarSpawnRoleCreator *)0x0)))) {
        bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if ((bVar4 <= (pMVar3->_1).naturalAligment) &&
           ((MVAvatarSpawnRoleCreator__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          GVar5 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                            (pMStackX_8,(MethodInfo *)0x0);
          return GVar5;
        }
        FUN_?(pMStackX_8,TypeInfo__MVAvatarSpawnRoleCreator);
        pcVar6 = (code *)swi(3);
        GVar5 = (*pcVar6)();
        return GVar5;
      }
    }
    return (GamePassTier__Enum)ppIVar2 & 0xffffff00;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  GVar5 = (*pcVar6)();
  return GVar5;
}


/* Void HandleBlinkerVisibility() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_HandleBlinkerVisibility
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatarPickupOwner;
  if ((pAVar1 != (AvatarPickupOwner *)0x0) &&
     (pPVar2 = (pAVar1->fields)._.currentItem, pPVar2 != (PickupItem *)0x0)) {
    cVar3 = (*(pPVar2->klass->vtable).get_FirstPerson.methodPtr)
                      (pPVar2,(pPVar2->klass->vtable).get_FirstPerson.method);
    pMVar4 = (this->fields)._.body;
    if ((cVar3 == '\0') || ((pPVar2->fields)._IsHolstered_k__BackingField != 0)) {
      if (((pMVar4 != (MVBody *)0x0) &&
          (pMVar5 = (pMVar4->fields).bodyObject, pMVar5 != (MVBodyObject *)0x0)) &&
         (pAVar6 = (pMVar5->fields).avatarBlinker, pAVar6 != (AvatarBlinker *)0x0)) {
        (pAVar6->fields)._.visible = 1;
        return;
      }
    }
    else if (((pMVar4 != (MVBody *)0x0) &&
             (pMVar5 = (pMVar4->fields).bodyObject, pMVar5 != (MVBodyObject *)0x0)) &&
            (pAVar6 = (pMVar5->fields).avatarBlinker, pAVar6 != (AvatarBlinker *)0x0)) {
      (pAVar6->fields)._.visible = 0;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_HasDied
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVAvatarLocal__DeadMode);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                          (ByteEnum__Enum)CONCAT71((int7)((ulonglong)method >> 8),4),
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      if (pOVar2 != (Object *)0x0) {
        pOVar3 = pOVar2->klass;
        bVar4 = (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment;
        if ((bVar4 <= (pOVar3->_1).naturalAligment) &&
           ((pOVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) {
          bVar4 = (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment;
          if (((pOVar3->_1).naturalAligment < bVar4) ||
             ((pOVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
              (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) {
            FUN_?(pOVar2,TypeInfo__MVAvatarLocal__DeadMode);
            pcVar5 = (code *)swi(3);
            bVar6 = (*pcVar5)();
            return bVar6;
          }
          if (*(float *)&pOVar2[2].klass != 0.0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Initialize
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarEquipable__EquipSlapGun_System__Object__System__EventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__AvatarLocalModes);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarShieldDecay__ResetDecayTimer__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ScaleArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarEquipable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&AvatarMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarMotor>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarShieldDecay_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarShieldDecay>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UseInteractorHandler_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnCameraScale_System__Object__ScaleArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnDisableVehicles_System__Object__System__EventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnEquipItem_PickupItem_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnHolsteredChanged_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnObserve__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnResume__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__RelayDamageEvent_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__RelayHealingEvent_float__MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__RelayNewSafePosition_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
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
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectSkillDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectSkillDataManager *)FUN_?(TypeInfo__WorldObjectSkillDataManager);
  bVar2 = iRam_? != 0;
  (this->fields)._.skillDataManager = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.skillDataManager >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pWVar1 = (this->fields)._.skillDataManager;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  values = (this->fields)._._._._.data;
  if (*(int *)&(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  prototypeRoot =
       MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
       AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
       AttributePrototypeSettingsManager_GetRoot
                 (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
  factoryFunc = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                 *)FUN_?(
                                TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                                );
  FUN_?(factoryFunc);
  pKVar7 = (KogamaSettingsCollectionBase *)
            MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTools::KogamaSettingTools_CreateFromValues
                      (values,prototypeRoot,factoryFunc,(MethodInfo *)0x0);
  if (pWVar1 != (WorldObjectSkillDataManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pKVar7 != (KogamaSettingsCollectionBase *)0x0) {
      bVar8 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pKVar7->klass->_1).naturalAligment < bVar8) ||
         ((pKVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        FUN_?(pKVar7);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar2 = iRam_? != 0;
      (pWVar1->fields).skillData = pKVar7;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&pWVar1->fields >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
    pGVar10 = (this->fields)._._._.gameObject;
    if (pGVar10 != (GameObject *)0x0) {
      pAVar11 = (AvatarMotor *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar10,
                           AvatarMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarMotor>__
                          );
      bVar2 = iRam_? != 0;
      (this->fields).avatarMotor = pAVar11;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).avatarMotor >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar10 = (this->fields)._._._.gameObject;
      if (pGVar10 != (GameObject *)0x0) {
        pMVar12 = (MVTriggerHandler *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar10,
                             MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                            );
        bVar2 = iRam_? != 0;
        (this->fields).triggerHandler = pMVar12;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).triggerHandler >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pGVar10 = (this->fields)._._._.gameObject;
        if ((pGVar10 != (GameObject *)0x0) &&
           (interactableLocal =
                 (AvatarInteractable *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (pGVar10,
                            AvatarInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarInteractable>__
                           ), interactableLocal != (AvatarInteractable *)0x0)) {
          (*(interactableLocal->klass->vtable).Init.methodPtr)
                    (interactableLocal,(this->fields)._.Modifiers,(this->fields)._.Health,
                     (this->fields)._.MaxHealth,(this->fields)._.shield,
                     (this->fields)._.skillDataManager,
                     (interactableLocal->klass->vtable).Init.method);
          bVar2 = iRam_? != 0;
          (this->fields).interactableLocal = interactableLocal;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields).interactableLocal >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pAVar13 = (this->fields).interactableLocal;
          if (pAVar13 != (AvatarInteractable *)0x0) {
            pAVar14 = (pAVar13->fields).OnDamageTaken;
            pDVar15 = (Delegate *)
                      FUN_?(
                                   TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                   );
            FUN_?(pDVar15,this);
            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar14,pDVar15,(MethodInfo *)0x0);
            pAVar16 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
            pMVar17 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
            if (pDVar15 == (Delegate *)0x0) {
              (pAVar13->fields).OnDamageTaken =
                   (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
            }
            else {
              pAVar14 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
                        FUN_?(pDVar15,
                                      TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                     );
              if (pAVar14 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                FUN_?(pDVar15,pAVar16);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              (pAVar13->fields).OnDamageTaken = pAVar14;
              pAVar16 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
              lVar18 = FUN_?(pDVar15,
                                     TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                    );
              if (lVar18 == 0) {
                FUN_?(pDVar15,pAVar16);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&(pAVar13->fields).OnDamageTaken >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pAVar13 = (this->fields).interactableLocal;
            if (pAVar13 != (AvatarInteractable *)0x0) {
              pAVar19 = (pAVar13->fields).OnHealing;
              pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<float,_MVPlayer>);
              FUN_?(pDVar15,this);
              pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar19,pDVar15,(MethodInfo *)0x0);
              pAVar20 = TypeInfo__System__Action<float,_MVPlayer>;
              if (pDVar15 == (Delegate *)0x0) {
                (pAVar13->fields).OnHealing = (Action_2_Single_MVPlayer_ *)0x0;
              }
              else {
                pAVar19 = (Action_2_Single_MVPlayer_ *)
                          FUN_?(pDVar15,TypeInfo__System__Action<float,_MVPlayer>);
                if (pAVar19 == (Action_2_Single_MVPlayer_ *)0x0) {
                  FUN_?(pDVar15,pAVar20);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (pAVar13->fields).OnHealing = pAVar19;
                pAVar20 = TypeInfo__System__Action<float,_MVPlayer>;
                lVar18 = FUN_?(pDVar15,TypeInfo__System__Action<float,_MVPlayer>);
                if (lVar18 == 0) {
                  FUN_?(pDVar15,pAVar20);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&(pAVar13->fields).OnHealing >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pAVar13 = (this->fields).interactableLocal;
              if (pAVar13 != (AvatarInteractable *)0x0) {
                pAVar21 = (pAVar13->fields).OnNewSafePosition;
                pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<UnityEngine::Vector3>);
                FUN_?(pDVar15,this);
                pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar21,pDVar15,(MethodInfo *)0x0);
                pAVar22 = TypeInfo__System__Action<UnityEngine::Vector3>;
                if (pDVar15 == (Delegate *)0x0) {
                  (pAVar13->fields).OnNewSafePosition = (Action_1_UnityEngine_Vector3_ *)0x0;
                }
                else {
                  pAVar21 = (Action_1_UnityEngine_Vector3_ *)
                            FUN_?(pDVar15,TypeInfo__System__Action<UnityEngine::Vector3>);
                  if (pAVar21 == (Action_1_UnityEngine_Vector3_ *)0x0) {
                    FUN_?(pDVar15,pAVar22);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  (pAVar13->fields).OnNewSafePosition = pAVar21;
                  pAVar22 = TypeInfo__System__Action<UnityEngine::Vector3>;
                  lVar18 = FUN_?(pDVar15,TypeInfo__System__Action<UnityEngine::Vector3>);
                  if (lVar18 == 0) {
                    FUN_?(pDVar15,pAVar22);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar3 = (uint)((ulonglong)&(pAVar13->fields).OnNewSafePosition >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                pGVar10 = (this->fields)._._._.gameObject;
                if (pGVar10 != (GameObject *)0x0) {
                  pAVar23 = (AvatarEquipable *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar10,
                                       AvatarEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarEquipable>__
                                      );
                  bVar2 = iRam_? != 0;
                  (this->fields).avatarEquipable = pAVar23;
                  if (bVar2) {
                    uVar3 = (uint)((ulonglong)&(this->fields).avatarEquipable >> 0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  pAVar23 = (this->fields).avatarEquipable;
                  pAVar13 = (this->fields).interactableLocal;
                  pMVar24 = (this->fields)._.CurrentItem;
                  pWVar1 = (this->fields)._.skillDataManager;
                  if (pAVar23 != (AvatarEquipable *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&StringLiteral_UnableToCollectModifierPickups);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_UnableToEquipWeapons);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    bVar2 = iRam_? != 0;
                    (pAVar23->fields).interactableLocal = (MVInteractableBase *)pAVar13;
                    if (bVar2) {
                      uVar3 = (uint)((ulonglong)&(pAVar23->fields).interactableLocal >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    bVar2 = iRam_? != 0;
                    (pAVar23->fields).currentItem = pMVar24;
                    if (bVar2) {
                      uVar3 = (uint)((ulonglong)&(pAVar23->fields).currentItem >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    if (pWVar1 != (WorldObjectSkillDataManager *)0x0) {
                      bVar25 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                         (pWVar1,StringLiteral_UnableToCollectModifierPickups,
                                          (MethodInfo *)0x0);
                      (pAVar23->fields).isAbleToCollectPickups = bVar25 ^ 1;
                      bVar25 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                         (pWVar1,StringLiteral_UnableToEquipWeapons,
                                          (MethodInfo *)0x0);
                      (pAVar23->fields).isAbleToEquipWeapons = bVar25 ^ 1;
                      pAVar11 = (this->fields).avatarMotor;
                      if (pAVar11 != (AvatarMotor *)0x0) {
                        VStack_26.z = (this->fields)._.characterControllerCenterOffset.z;
                        VStack_26.x = (this->fields)._.characterControllerCenterOffset.x;
                        VStack_26.y = (this->fields)._.characterControllerCenterOffset.y;
                        AvatarMotor::AvatarMotor_Init
                                  (pAVar11,interactableLocal,&VStack_26,(MVWorldObjectClient *)this,
                                   (this->fields)._.skillDataManager,(MethodInfo *)0x0);
                        bVar2 = iRam_? != 0;
                        (this->fields).pickupOwner = (this->fields)._.avatarPickupOwner;
                        if (bVar2) {
                          uVar3 = (uint)((ulonglong)&(this->fields).pickupOwner >> 0xc);
                          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                          do {
                            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                            LOCK();
                            bVar2 = uVar5 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar2);
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pGVar27 = TypeInfo__MVGameControllerBase->static_fields->
                                 _GameSessionData_k__BackingField;
                        if (pGVar27 != (GameSessionData *)0x0) {
                          if ((pGVar27->fields).gameMode != 2) {
                            pGVar10 = (this->fields)._._._.gameObject;
                            if (pGVar10 == (GameObject *)0x0) goto code_?;
                            pPVar28 = (PickupGUI *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_AddComponent_1
                                                (pGVar10,
                                                 PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                                );
                            (this->fields).pickupGUI = pPVar28;
                            func_?(&(this->fields).pickupGUI);
                            pPVar28 = (this->fields).pickupGUI;
                            if (pPVar28 == (PickupGUI *)0x0) goto code_?;
                            PickupGUI::PickupGUI_Initialize
                                      (pPVar28,(this->fields)._._._._.id,
                                       (MVPickupOwner *)(this->fields).pickupOwner,(MethodInfo *)0x0
                                      );
                          }
                          pAVar29 = (this->fields).pickupOwner;
                          if (pAVar29 != (AvatarPickupOwner *)0x0) {
                            pMVar30 = (pAVar29->fields)._.onEquipItem;
                            pUVar31 = (UnityAction_1_System_Object_ *)
                                      FUN_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      (pUVar31,(Object *)this,
                                       MethodInfo__MVAvatarLocal__OnEquipItem_PickupItem_,
                                       (MethodInfo *)0x0);
                            pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                      mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pMVar30,(Delegate *)pUVar31,
                                                 (MethodInfo *)0x0);
                            if (pMVar30 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                              (pAVar29->fields)._.onEquipItem =
                                   (MVPickupOwner_OnEquipItemDelegate *)0x0;
                            }
                            else {
                              pMVar32 = pMVar17;
                              if (pMVar30->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
                                pMVar32 = pMVar30;
                              }
                              if (pMVar32 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                FUN_?();
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              (pAVar29->fields)._.onEquipItem = pMVar32;
                              pMVar32 = pMVar17;
                              if (pMVar30->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
                                pMVar32 = pMVar30;
                              }
                              if (pMVar32 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                FUN_?();
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                            }
                            if (iRam_? != 0) {
                              uVar3 = (uint)((ulonglong)&(pAVar29->fields)._.onEquipItem >> 0xc);
                              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                              do {
                                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                LOCK();
                                bVar2 = uVar5 == *puVar6;
                                if (bVar2) {
                                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar2);
                            }
                            pAVar29 = (this->fields).pickupOwner;
                            if (pAVar29 != (AvatarPickupOwner *)0x0) {
                              pAVar33 = (pAVar29->fields)._.OnHolsteredChanged;
                              pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                              FUN_?(pDVar15,this);
                              pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                  ((Delegate *)pAVar33,pDVar15,(MethodInfo *)0x0);
                              pAVar34 = TypeInfo__System__Action<bool>;
                              if (pDVar15 == (Delegate *)0x0) {
                                (pAVar29->fields)._.OnHolsteredChanged = (Action_1_Boolean_ *)0x0;
                              }
                              else {
                                pAVar33 = (Action_1_Boolean_ *)
                                          FUN_?(pDVar15,TypeInfo__System__Action<bool>);
                                if (pAVar33 == (Action_1_Boolean_ *)0x0) {
                                  FUN_?(pDVar15,pAVar34);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                (pAVar29->fields)._.OnHolsteredChanged = pAVar33;
                                pAVar34 = TypeInfo__System__Action<bool>;
                                lVar18 = FUN_?(pDVar15,TypeInfo__System__Action<bool>);
                                if (lVar18 == 0) {
                                  FUN_?(pDVar15,pAVar34);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                              }
                              if (iRam_? != 0) {
                                uVar3 = (uint)((ulonglong)&(pAVar29->fields)._.OnHolsteredChanged >>
                                               0xc);
                                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                do {
                                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              this_01 = (MVAvatarLocal_AvatarLocalModes *)
                                        FUN_?(TypeInfo__MVAvatarLocal__AvatarLocalModes);
                              MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
                                        (this_01,this,(MethodInfo *)0x0);
                              (this->fields).avatarLocalModes = this_01;
                              func_?(&(this->fields).avatarLocalModes);
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_
                                             );
                                LOCK();
                                UNLOCK();
                                FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pMVar35 = (this->fields)._.Health;
                              if (pMVar35 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                                fVar36 = (float)(*(pMVar35->klass->vtable).get_Value.methodPtr)
                                                          (pMVar35,(pMVar35->klass->vtable).get_Value.
                                                                  method);
                                pMVar35 = (this->fields)._.Health;
                                (this->fields).previousHealth = fVar36;
                                if (pMVar35 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                                  pMVar37 = (pMVar35->fields)._.OnChange;
                                  pUVar31 = (UnityAction_1_System_Object_ *)
                                            FUN_?(
                                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                                  ;
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor
                                            (pUVar31,(Object *)this,
                                             MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_
                                             ,(MethodInfo *)0x0);
                                  pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                            mscorlib.dll::System::Delegate::Delegate_Combine
                                                      ((Delegate *)pMVar37,(Delegate *)pUVar31,
                                                       (MethodInfo *)0x0);
                                  if (pMVar30 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                    (pMVar35->fields)._.OnChange =
                                         (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                                  }
                                  else {
                                    pMVar32 = pMVar17;
                                    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                                        pMVar30->klass ==
                                        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                      pMVar32 = pMVar30;
                                    }
                                    if (pMVar32 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                      FUN_?();
                                      pcVar9 = (code *)swi(3);
                                      (*pcVar9)();
                                      return;
                                    }
                                    (pMVar35->fields)._.OnChange =
                                         (MVRuntimeDataVariable_OnChangeDelegate *)pMVar32;
                                    pMVar32 = pMVar17;
                                    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                                        pMVar30->klass ==
                                        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                      pMVar32 = pMVar30;
                                    }
                                    if (pMVar32 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                      FUN_?();
                                      pcVar9 = (code *)swi(3);
                                      (*pcVar9)();
                                      return;
                                    }
                                  }
                                  func_?(&(pMVar35->fields)._.OnChange);
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pMVar38 = (this->fields)._.shield;
                                  if (pMVar38 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                    fVar36 = (float)(*(pMVar38->klass->vtable).get_Value.methodPtr)
                                                              (pMVar38,(pMVar38->klass->vtable).
                                                                       get_Value.method);
                                    pMVar38 = (this->fields)._.shield;
                                    (this->fields).previousShield = fVar36;
                                    if (pMVar38 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                      pMVar37 = (pMVar38->fields)._._.OnChange;
                                      pUVar31 = (UnityAction_1_System_Object_ *)
                                                FUN_?(
                                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                                      ;
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`1[System::Object]::
                                      UnityAction_1_System_Object___ctor
                                                (pUVar31,(Object *)this,
                                                 MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_
                                                 ,(MethodInfo *)0x0);
                                      pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                                mscorlib.dll::System::Delegate::Delegate_Combine
                                                          ((Delegate *)pMVar37,(Delegate *)pUVar31,
                                                           (MethodInfo *)0x0);
                                      if (pMVar30 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                        (pMVar38->fields)._._.OnChange =
                                             (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                                      }
                                      else {
                                        pMVar32 = pMVar17;
                                        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                                            pMVar30->klass ==
                                            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                          pMVar32 = pMVar30;
                                        }
                                        if (pMVar32 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                          FUN_?();
                                          pcVar9 = (code *)swi(3);
                                          (*pcVar9)();
                                          return;
                                        }
                                        (pMVar38->fields)._._.OnChange =
                                             (MVRuntimeDataVariable_OnChangeDelegate *)pMVar32;
                                        pMVar32 = pMVar17;
                                        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                                            pMVar30->klass ==
                                            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                          pMVar32 = pMVar30;
                                        }
                                        if (pMVar32 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                          FUN_?();
                                          pcVar9 = (code *)swi(3);
                                          (*pcVar9)();
                                          return;
                                        }
                                      }
                                      func_?(&(pMVar38->fields)._._.OnChange);
                                      MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
                                      MVar39 = MVGameControllerBase::
                                               MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                                      if (MVar39 != MVGameMode__Enum_CharacterEditor) {
                                        pGVar10 = (this->fields)._._._.gameObject;
                                        if (pGVar10 == (GameObject *)0x0) goto code_?;
                                        pUVar40 = (UseInteractorHandler *)
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_AddComponent_1
                                                            (pGVar10,
                                                  UseInteractorHandler_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorHandler>__
                                                  );
                                        (this->fields).useInteractorHandler = pUVar40;
                                        func_?(&(this->fields).useInteractorHandler);
                                        pUVar40 = (this->fields).useInteractorHandler;
                                        if (pUVar40 == (UseInteractorHandler *)0x0)
                                        goto code_?;
                                        UseInteractorHandler::UseInteractorHandler_Init
                                                  (pUVar40,(this->fields)._._._._.id,
                                                   (this->fields)._._._.collider,(MethodInfo *)0x0);
                                      }
                                      pAVar11 = (this->fields).avatarMotor;
                                      if (pAVar11 != (AvatarMotor *)0x0) {
                                        pSVar41 = (pAVar11->fields)._GetSizeState_k__BackingField;
                                        pAVar23 = (this->fields).avatarEquipable;
                                        pUVar42 = (UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(TypeInfo__System__EventHandler);
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`2[System::Object,System::Object]::
                                        UnityAction_2_System_Object_System_Object___ctor
                                                  (pUVar42,(Object *)pAVar23,
                                                                                                      
                                                  MethodInfo__AvatarEquipable__EquipSlapGun_System__Object__System__EventArgs_
                                                  ,(MethodInfo *)0x0);
                                        if (pSVar41 != (SizeState *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__System__EventHandler);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          a_00 = (pSVar41->fields).EquipSlapGunEvent;
                                          do {
                                            pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                                      mscorlib.dll::System::Delegate::
                                                      Delegate_Combine((Delegate *)a_00,
                                                                       (Delegate *)pUVar42,
                                                                       (MethodInfo *)0x0);
                                            if (pMVar30 != (MVPickupOwner_OnEquipItemDelegate *)0x0)
                                            {
                                              pMVar32 = pMVar17;
                                              if (pMVar30->klass ==
                                                  (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                  TypeInfo__System__EventHandler) {
                                                pMVar32 = pMVar30;
                                              }
                                              if (pMVar32 ==
                                                  (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                FUN_?(pMVar30,TypeInfo__System__EventHandler
                                                             );
                                                pcVar9 = (code *)swi(3);
                                                (*pcVar9)();
                                                return;
                                              }
                                            }
                                            pEVar43 = (EventHandler *)
                                                      func_?(&(pSVar41->fields).
                                                                           EquipSlapGunEvent);
                                            bVar2 = pEVar43 != a_00;
                                            a_00 = pEVar43;
                                          } while (bVar2);
                                          pAVar11 = (this->fields).avatarMotor;
                                          if (pAVar11 != (AvatarMotor *)0x0) {
                                            pSVar41 = (pAVar11->fields).
                                                      _GetSizeState_k__BackingField;
                                            pUVar42 = (UnityAction_2_System_Object_System_Object_ *)
                                                      FUN_?(
                                                  TypeInfo__System__EventHandler<ScaleArgs>);
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`2[System::Object,System::Object]::
                                            UnityAction_2_System_Object_System_Object___ctor
                                                      (pUVar42,(Object *)this,
                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnCameraScale_System__Object__ScaleArgs_
                                                  ,(MethodInfo *)0x0);
                                            if (pSVar41 != (SizeState *)0x0) {
                                              if (cRam_? == '\0') {
                                                FUN_?(&
                                                  TypeInfo__System__EventHandler<ScaleArgs>);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              a_01 = (pSVar41->fields).CameraScaleEvent;
                                              do {
                                                pDVar15 = mscorlib.dll::System::Delegate::
                                                          Delegate_Combine((Delegate *)a_01,
                                                                           (Delegate *)pUVar42,
                                                                           (MethodInfo *)0x0);
                                                pEVar44 = TypeInfo__System__EventHandler<ScaleArgs>;
                                                pMVar30 = pMVar17;
                                                if ((pDVar15 != (Delegate *)0x0) &&
                                                   (pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                                              FUN_?(pDVar15,
                                                  TypeInfo__System__EventHandler<ScaleArgs>),
                                                  pMVar30 ==
                                                  (MVPickupOwner_OnEquipItemDelegate *)0x0)) {
                                                  FUN_?(pDVar15,pEVar44);
                                                  pcVar9 = (code *)swi(3);
                                                  (*pcVar9)();
                                                  return;
                                                }
                                                pEVar45 = (EventHandler_1_ScaleArgs_ *)
                                                          func_?(&(pSVar41->fields).
                                                                               CameraScaleEvent,
                                                                              pMVar30);
                                                bVar2 = pEVar45 != a_01;
                                                a_01 = pEVar45;
                                              } while (bVar2);
                                              pAVar11 = (this->fields).avatarMotor;
                                              if (pAVar11 != (AvatarMotor *)0x0) {
                                                pSVar41 = (pAVar11->fields).
                                                          _GetSizeState_k__BackingField;
                                                pUVar42 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                ;
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`2[System::Object,System::Object]::
                                                UnityAction_2_System_Object_System_Object___ctor
                                                          (pUVar42,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_
                                                  ,(MethodInfo *)0x0);
                                                if (pSVar41 != (SizeState *)0x0) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  ;
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pEVar46 = (pSVar41->fields).UnEquipSlapGunEvent;
                                                  do {
                                                    pDVar15 = mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)pEVar46,
                                                                               (Delegate *)pUVar42,
                                                                               (MethodInfo *)0x0);
                                                    pEVar47 = 
                                                  TypeInfo__System__EventHandler<System::EventArgs>;
                                                  pMVar30 = pMVar17;
                                                  if ((pDVar15 != (Delegate *)0x0) &&
                                                     (pMVar30 = (MVPickupOwner_OnEquipItemDelegate *
                                                                )FUN_?(pDVar15,
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  , pMVar30 ==
                                                    (MVPickupOwner_OnEquipItemDelegate *)0x0)) {
                                                    FUN_?(pDVar15,pEVar47);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pEVar48 = (EventHandler_1_EventArgs_ *)
                                                            func_?(&(pSVar41->fields).
                                                                                 UnEquipSlapGunEvent
                                                                                ,pMVar30);
                                                  bVar2 = pEVar48 != pEVar46;
                                                  pEVar46 = pEVar48;
                                                  } while (bVar2);
                                                  pAVar49 = (interactableLocal->fields)._.
                                                            modifierPackages;
                                                  pUVar42 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar42,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnUnequip_System__Object__System__EventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  if (pAVar49 != (AvatarModifierPackages *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  ;
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pEVar46 = (pAVar49->fields).OnUnequipItemEvent;
                                                  do {
                                                    pDVar15 = mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)pEVar46,
                                                                               (Delegate *)pUVar42,
                                                                               (MethodInfo *)0x0);
                                                    pEVar47 = 
                                                  TypeInfo__System__EventHandler<System::EventArgs>;
                                                  pMVar30 = pMVar17;
                                                  if ((pDVar15 != (Delegate *)0x0) &&
                                                     (pMVar30 = (MVPickupOwner_OnEquipItemDelegate *
                                                                )FUN_?(pDVar15,
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  , pMVar30 ==
                                                    (MVPickupOwner_OnEquipItemDelegate *)0x0)) {
                                                    FUN_?(pDVar15,pEVar47);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pEVar48 = (EventHandler_1_EventArgs_ *)
                                                            func_?(&pAVar49->fields,
                                                                                pMVar30);
                                                  bVar2 = pEVar48 != pEVar46;
                                                  pEVar46 = pEVar48;
                                                  } while (bVar2);
                                                  pAVar49 = (interactableLocal->fields)._.
                                                            modifierPackages;
                                                  pUVar42 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar42,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnDisableVehicles_System__Object__System__EventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  if (pAVar49 != (AvatarModifierPackages *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  ;
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pEVar46 = (pAVar49->fields).OnDisableVehiclesEvent
                                                  ;
                                                  do {
                                                    pDVar15 = mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)pEVar46,
                                                                               (Delegate *)pUVar42,
                                                                               (MethodInfo *)0x0);
                                                    pEVar47 = 
                                                  TypeInfo__System__EventHandler<System::EventArgs>;
                                                  pMVar30 = pMVar17;
                                                  if ((pDVar15 != (Delegate *)0x0) &&
                                                     (pMVar30 = (MVPickupOwner_OnEquipItemDelegate *
                                                                )FUN_?(pDVar15,
                                                  TypeInfo__System__EventHandler<System::EventArgs>)
                                                  , pMVar30 ==
                                                    (MVPickupOwner_OnEquipItemDelegate *)0x0)) {
                                                    FUN_?(pDVar15,pEVar47);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pEVar48 = (EventHandler_1_EventArgs_ *)
                                                            func_?(&(pAVar49->fields).
                                                                                                                                                                  
                                                  OnDisableVehiclesEvent,pMVar30);
                                                  bVar2 = pEVar48 != pEVar46;
                                                  pEVar46 = pEVar48;
                                                  } while (bVar2);
                                                  pGVar10 = (this->fields)._._._.gameObject;
                                                  if ((pGVar10 != (GameObject *)0x0) &&
                                                     (object = UnityEngine.CoreModule.dll::
                                                               UnityEngine::GameObject::
                                                               GameObject_AddComponent_1
                                                                         (pGVar10,
                                                  AvatarShieldDecay_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarShieldDecay>__
                                                  ), object != (Object *)0x0)) {
                                                    object[2].monitor =
                                                         (MonitorData *)(this->fields)._.shield;
                                                    func_?(&object[2].monitor);
                                                    a = (interactableLocal->fields).
                                                        OnShieldReplenished;
                                                    pNVar50 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(TypeInfo__System__Action
                                                                           );
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar50,object,
                                                                                                                              
                                                  MethodInfo__AvatarShieldDecay__ResetDecayTimer__,
                                                  (MethodInfo *)0x0);
                                                  pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)a,
                                                                             (Delegate *)pNVar50,
                                                                             (MethodInfo *)0x0);
                                                  if (pMVar30 ==
                                                      (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                    (interactableLocal->fields).OnShieldReplenished
                                                         = (Action *)0x0;
                                                  }
                                                  else {
                                                    pMVar32 = pMVar17;
                                                    if (pMVar30->klass ==
                                                        (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                        TypeInfo__System__Action) {
                                                      pMVar32 = pMVar30;
                                                    }
                                                    if (pMVar32 ==
                                                        (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                      FUN_?();
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                    (interactableLocal->fields).OnShieldReplenished
                                                         = (Action *)pMVar32;
                                                    pMVar32 = pMVar17;
                                                    if (pMVar30->klass ==
                                                        (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                        TypeInfo__System__Action) {
                                                      pMVar32 = pMVar30;
                                                    }
                                                    if (pMVar32 ==
                                                        (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                      FUN_?();
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                  }
                                                  func_?(&(interactableLocal->fields).
                                                                       OnShieldReplenished);
                                                  pAVar51 = (AvatarLimbManager *)
                                                            FUN_?(
                                                  TypeInfo__AvatarLimbManagerLocal);
                                                  (this->fields)._.limbManager = pAVar51;
                                                  uVar52 = func_?(&(this->fields)._.
                                                                                limbManager);
                                                  pAVar53 = (this->fields)._.avatar;
                                                  if ((pAVar53 != (Avatar *)0x0) &&
                                                     (pAVar51 = (this->fields)._.limbManager,
                                                     pAVar51 != (AvatarLimbManager *)0x0)) {
                                                    FUN_?(uVar52,pAVar51,this,
                                                                  (this->fields)._.body,
                                                                  (pAVar53->fields).
                                                                  enabledChangeHandler,
                                                                  (this->fields)._.
                                                                  LimbRotationRuntimeData);
                                                    pAVar54 = (this->fields).avatarRespawnHandler;
                                                    if (pAVar54 != (AvatarRespawnHandler *)0x0) {
                                                      (pAVar54->fields).mvAvatar = this;
                                                      func_?(&pAVar54->fields);
                                                      pUVar55 = (this->fields)._._._.PositionChanged
                                                      ;
                                                      pUVar42 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar42,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  pDVar15 = mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pUVar55,
                                                                             (Delegate *)pUVar42,
                                                                             (MethodInfo *)0x0);
                                                  pUVar56 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  ;
                                                  if (pDVar15 == (Delegate *)0x0) {
                                                    (this->fields)._._._.PositionChanged =
                                                         (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)0x0;
                                                  }
                                                  else {
                                                    pUVar55 = (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)FUN_?(pDVar15,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                                                  if (pUVar55 ==
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_
                                                  *)0x0) {
                                                    FUN_?(pDVar15,pUVar56);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  (this->fields)._._._.PositionChanged = pUVar55;
                                                  pUVar56 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  ;
                                                  lVar18 = FUN_?(pDVar15,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                                  );
                                                  if (lVar18 == 0) {
                                                    FUN_?(pDVar15,pUVar56);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(this->fields)._._._.
                                                                     PositionChanged >> 0xc);
                                                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar5 = *(ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      puVar6 = (ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  pUVar57 = (this->fields)._._._.RotationChanged;
                                                  pUVar42 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar42,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  pDVar15 = mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pUVar57,
                                                                             (Delegate *)pUVar42,
                                                                             (MethodInfo *)0x0);
                                                  pUVar58 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                                  ;
                                                  if (pDVar15 == (Delegate *)0x0) {
                                                    (this->fields)._._._.RotationChanged =
                                                         (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)0x0;
                                                  }
                                                  else {
                                                    pUVar57 = (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)FUN_?(pDVar15,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                                  );
                                                  if (pUVar57 ==
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_
                                                  *)0x0) {
                                                    FUN_?(pDVar15,pUVar58);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  (this->fields)._._._.RotationChanged = pUVar57;
                                                  pUVar58 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                                  ;
                                                  lVar18 = FUN_?(pDVar15,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                                  );
                                                  if (lVar18 == 0) {
                                                    FUN_?(pDVar15,pUVar58);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(this->fields)._._._.
                                                                     RotationChanged >> 0xc);
                                                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar5 = *(ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      puVar6 = (ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  pUVar59 = (this->fields)._._._.ScaleChanged;
                                                  pUVar42 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar42,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnScaleChanged_MVWorldObjectClient__ScaleChangedEventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  pDVar15 = mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pUVar59,
                                                                             (Delegate *)pUVar42,
                                                                             (MethodInfo *)0x0);
                                                  pUVar60 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                                  ;
                                                  if (pDVar15 == (Delegate *)0x0) {
                                                    (this->fields)._._._.ScaleChanged =
                                                         (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)0x0;
                                                  }
                                                  else {
                                                    pUVar59 = (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)FUN_?(pDVar15,
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                                  );
                                                  if (pUVar59 ==
                                                      (
                                                  UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_
                                                  *)0x0) {
                                                    FUN_?(pDVar15,pUVar60);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  (this->fields)._._._.ScaleChanged = pUVar59;
                                                  pUVar60 = 
                                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                                  ;
                                                  lVar18 = FUN_?();
                                                  if (lVar18 == 0) {
                                                    FUN_?(pDVar15,pUVar60);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(this->fields)._._._.
                                                                     ScaleChanged >> 0xc);
                                                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar5 = *(ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      puVar6 = (ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  pGVar10 = (this->fields)._._._.gameObject;
                                                  if (pGVar10 != (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar10,0,(MethodInfo *)0x0);
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__MVGameControllerBase)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pMVar61 = TypeInfo__MVGameControllerBase->
                                                              static_fields->instance;
                                                    if ((((pMVar61 != (MVGameControllerBase *)0x0)
                                                         && (pMVar62 = (pMVar61->fields).game,
                                                            pMVar62 != (MVNetworkGame *)0x0)) &&
                                                        (this_00 = (pMVar62->fields).playerContainer
                                                        , this_00 != (MVPlayerContainer *)0x0)) &&
                                                       (this_02 = MVPlayerContainer::
                                                                  MVPlayerContainer_GetPlayerUnsafe
                                                                            (this_00,(this->fields).
                                                                                     _._._._.
                                                  ownerActorNr,(MethodInfo *)0x0),
                                                  this_02 != (MVPlayer *)0x0)) {
                                                    MVPlayer::MVPlayer_NotifyAvatarCreated
                                                              (this_02,(this->fields)._._._._.id,
                                                               (MethodInfo *)0x0);
                                                    pUVar63 = (this_02->fields).OnObserve;
                                                    pNVar50 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (pNVar50,(Object *)this,
                                                             MethodInfo__MVAvatarLocal__OnObserve__,
                                                             (MethodInfo *)0x0);
                                                  pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pUVar63,
                                                                             (Delegate *)pNVar50,
                                                                             (MethodInfo *)0x0);
                                                  if (pMVar30 ==
                                                      (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                    (this_02->fields).OnObserve = (UnityAction *)0x0
                                                    ;
                                                  }
                                                  else {
                                                    pMVar32 = pMVar17;
                                                    if (pMVar30->klass ==
                                                        (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pMVar32 = pMVar30;
                                                    }
                                                    if (pMVar32 ==
                                                        (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                      FUN_?();
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                    (this_02->fields).OnObserve =
                                                         (UnityAction *)pMVar32;
                                                    pMVar32 = pMVar17;
                                                    if (pMVar30->klass ==
                                                        (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pMVar32 = pMVar30;
                                                    }
                                                    if (pMVar32 ==
                                                        (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                      FUN_?();
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(this_02->fields).OnObserve >>
                                                                   0xc);
                                                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar5 = *(ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      puVar6 = (ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  pUVar63 = (this_02->fields).OnResume;
                                                  pNVar50 = (NavMesh_OnNavMeshPreUpdate *)
                                                            FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (pNVar50,(Object *)this,
                                                             MethodInfo__MVAvatarLocal__OnResume__,
                                                             (MethodInfo *)0x0);
                                                  pMVar30 = (MVPickupOwner_OnEquipItemDelegate *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pUVar63,
                                                                             (Delegate *)pNVar50,
                                                                             (MethodInfo *)0x0);
                                                  if (pMVar30 ==
                                                      (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                    (this_02->fields).OnResume = (UnityAction *)0x0;
                                                  }
                                                  else {
                                                    pMVar32 = pMVar17;
                                                    if (pMVar30->klass ==
                                                        (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pMVar32 = pMVar30;
                                                    }
                                                    if (pMVar32 ==
                                                        (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                      FUN_?(pMVar30);
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                    (this_02->fields).OnResume =
                                                         (UnityAction *)pMVar32;
                                                    if (pMVar30->klass ==
                                                        (MVPickupOwner_OnEquipItemDelegate__Class *)
                                                        TypeInfo__UnityEngine__Events__UnityAction)
                                                    {
                                                      pMVar17 = pMVar30;
                                                    }
                                                    if (pMVar17 ==
                                                        (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                                                      FUN_?(pMVar30);
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(this_02->fields).OnResume >>
                                                                   0xc);
                                                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar5 = *(ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      puVar6 = (ulonglong *)
                                                               (uVar4 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.Health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                              (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.Health;
    (this->fields).previousHealth = fVar2;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar3 = (pMVar1->fields)._.OnChange;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___InitializeHealth_b__128_0_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar1->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar3,TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pMVar1->fields)._.OnChange = pMVar4;
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields)._.OnChange >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_InitializeShield
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                              (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.shield;
    (this->fields).previousShield = fVar2;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pMVar3 = (pMVar1->fields)._._.OnChange;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVAvatarLocal___InitializeShield_b__125_0_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar3,TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pMVar1->fields)._._.OnChange = pMVar4;
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields)._._.OnChange >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsEquipped(AvatarItemType) */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsEquipped
               (MVAvatarLocal *this,AvatarItemType__Enum avatarItemType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarEquipable);
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (TypeInfo__AvatarEquipable->_1).naturalAligment;
      if ((bVar2 <= (pOVar1->klass->_1).naturalAligment) &&
         (ppIVar3 = (pOVar1->klass->_1).typeHierarchy,
         ppIVar3[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo__AvatarEquipable)) {
        pOVar4 = (Object *)0x0;
        if (ppIVar3[(ulonglong)(TypeInfo__AvatarEquipable->_1).naturalAligment - 1] ==
            (Il2CppClass *)TypeInfo__AvatarEquipable) {
          pOVar4 = pOVar1;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MV__Common__AvatarItemType,avatarItemType,0,
                        TypeInfo__AvatarEquipable,unaff_RDI);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_type);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar4[3].monitor != (MonitorData *)0x0) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                 (*(Object **)(pOVar4[3].monitor + 0x18),(MethodInfo *)0x0);
          if (this_01 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            bVar2 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            if (((this_01->klass->_1).naturalAligment < bVar2) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (this_01->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              FUN_?(this_01);
              pcVar5 = (code *)swi(3);
              bVar6 = (*pcVar5)();
              return bVar6;
            }
            iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_01,(Object *)StringLiteral_type,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (iVar7 < 0) {
              return 0;
            }
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                (Object *)StringLiteral_type,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar1 != (Object *)0x0) {
              if ((pOVar1->klass->_0).element_class ==
                  (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
                return *(AvatarItemType__Enum *)&pOVar1[1].klass == avatarItemType;
              }
              FUN_?(pOVar1,TypeInfo__MV__Common__AvatarItemType);
              pcVar5 = (code *)swi(3);
              bVar6 = (*pcVar5)();
              return bVar6;
            }
          }
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsInTempTier
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      return (pPVar1->fields).gamePassTier < bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsPlaying() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_IsPlaying
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    return (pMVar1->fields).currentState == 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
  pMVar1 = (this->fields)._.SpawnRoleModeTypes;
  if ((pMVar1 == (MVRuntimeDataVariable *)0x0) ||
     (pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                          ((pMVar1->fields).value,(MethodInfo *)0x0), pOVar2 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2,lRam_?);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((ulonglong)pOVar2[1].klass & 1) == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar4 == (MVGameControllerBase *)0x0) ||
     (pFVar5 = (pMVar4->fields).flagDebriefingControl, pFVar5 == (FlagDebriefingControl *)0x0))
  goto code_?;
  if ((pFVar5->fields).IsInFlagDebriefing != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.SpawnRoleModeTypes;
  if ((pMVar1 == (MVRuntimeDataVariable *)0x0) ||
     (pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                          ((pMVar1->fields).value,(MethodInfo *)0x0), pOVar2 == (Object *)0x0))
  goto code_?;
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2,lRam_?);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((ulonglong)pOVar2[1].klass & 2) == 0) {
    pAVar6 = (this->fields).interactableLocal;
    if (pAVar6 == (AvatarInteractable *)0x0) goto code_?;
    pAVar7 = AvatarInteractable::AvatarInteractable_get_LastDamageSource(pAVar6,(MethodInfo *)0x0);
    if (pAVar7 != (AvatarInteractable_DamageSource *)0x0) {
      pAVar6 = (this->fields).interactableLocal;
      if ((pAVar6 == (AvatarInteractable *)0x0) ||
         (pAVar7 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                              (pAVar6,(MethodInfo *)0x0),
         pAVar7 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
      bVar8 = AvatarInteractable+DamageSource::AvatarInteractable_DamageSource_get_Outdated
                         (pAVar7,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        pAVar6 = (this->fields).interactableLocal;
        if ((pAVar6 != (AvatarInteractable *)0x0) &&
           (pAVar7 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                (pAVar6,(MethodInfo *)0x0),
           pAVar7 != (AvatarInteractable_DamageSource *)0x0)) {
          this_00 = (this->fields).interactableLocal;
          damageDealer = (pAVar7->fields).shooter;
          if ((this_00 != (AvatarInteractable *)0x0) &&
             (pAVar7 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                  (this_00,(MethodInfo *)0x0),
             pAVar7 != (AvatarInteractable_DamageSource *)0x0)) {
            pMVar9 = (pAVar6->fields)._.health;
            bVar10 = (pAVar7->fields).damageType;
            if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              uVar11 = (*(pMVar9->klass->vtable).get_Value.methodPtr)
                                 (pMVar9,(pMVar9->klass->vtable).get_Value.method);
              pMVar9 = (pAVar6->fields)._.health;
              if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                (*(pMVar9->klass->vtable).set_Value.methodPtr)
                          (pMVar9,0,(pMVar9->klass->vtable).set_Value.method);
                pAVar12 = (pAVar6->fields).OnDamageTaken;
                if (pAVar12 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar12->fields)._._.invoke_impl)
                            ((pAVar12->fields)._._.method_code,uVar11,damageDealer,bVar10,
                             (pAVar12->fields)._._.method);
                }
                AvatarInteractable::AvatarInteractable_DoKilledNotification
                          (pAVar6,damageDealer,(uint)bVar10,(MethodInfo *)0x0);
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
      pAVar13 = (this->fields).OnSuicide;
      (*(pAVar13->fields)._._.invoke_impl)
                ((pAVar13->fields)._._.method_code,(pAVar13->fields)._._.method);
      if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0;
      if (this_01 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
        if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
        this_01 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                  FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0 = this_01;
        func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0);
      }
      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        if (this_01 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(this_01->fields)._._.invoke_impl)
                  ((this_01->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                   (this_01->fields)._._.method);
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
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleWO_is_null_or_type_is_not);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarMotor;
  if (pAVar1 == (AvatarMotor *)0x0) goto code_?;
  puVar2 = (undefined8 *)(*(pAVar1->klass->vtable).get_Velocity.methodPtr)(&VStack_3);
  pUVar4 = (this->fields).useInteractorHandler;
  uVar5._0_4_ = (float)*puVar2;
  fVar6 = (float)((ulonglong)*puVar2 >> 0x20);
  fVar7 = *(float *)(puVar2 + 1);
  if (pUVar4 == (UseInteractorHandler *)0x0) goto code_?;
  this_00 = (this->fields).vehicleRigidBody;
  this_01 = (pUVar4->fields).triggingColliders;
  if ((this_00 == (MVRigidBody *)0x0) ||
     (collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           ), this_01 == (ColliderCollection *)0x0)) goto code_?;
  Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
            (this_01,collider,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (this->fields).vehicleRigidBody = (MVRigidBody *)0x0;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields).vehicleRigidBody >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  aIStackX_8[0].m_value = -1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar13 == (MVGameControllerBase *)0x0) ||
      (pMVar14 = (pMVar13->fields).game, pMVar14 == (MVNetworkGame *)0x0)) ||
     (this_02 = (pMVar14->fields)._PlayerController_k__BackingField,
     this_02 == (MVLocalObjectController *)0x0)) goto code_?;
  bVar15 = MVLocalObjectController::MVLocalObjectController_DetachWorldObjectFromVehicle
                     (this_02,(this->fields)._._._._.id,&aIStackX_8[0].m_value,leaveBecauseOfServer,
                      (MethodInfo *)0x0);
  id.m_value = aIStackX_8[0].m_value;
  if (bVar15 == 0) {
    return;
  }
  if (aIStackX_8[0].m_value != -1) {
    this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_07 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_07,id.m_value,(MethodInfo *)0x0);
    if (pMVar16 != (MVWorldObjectClient *)0x0) {
      pMVar17 = pMVar16->klass;
      bVar18 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if ((bVar18 <= (pMVar17->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)(pMVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] ==
          TypeInfo__MVVehicleBase)) {
        bVar18 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar17->_1).naturalAligment < bVar18) ||
           ((MVVehicleBase__Class *)(pMVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(pMVar16,TypeInfo__MVVehicleBase);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        plVar20 = *(longlong **)&pMVar16[1].fields._.ownerActorNr;
        if (plVar20 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar20 + 0x1e8))(plVar20,*(undefined8 *)(*plVar20 + 0x1f0));
        this_03 = (pMVar16->fields).gameObject;
        if (this_03 == (GameObject *)0x0) goto code_?;
        pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (this_03,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
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
        if (pOVar21 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar21[1].klass != (Object__Class *)0x0) {
            pOVar22 = pOVar21->klass;
            uVar23._0_2_ = pOVar22[1]._0.byval_arg.attrs;
            uVar23._2_1_ = pOVar22[1]._0.byval_arg.type;
            uVar23._3_5_ = *(undefined5 *)&pOVar22[1]._0.byval_arg.field_0xb;
            puVar2 = (undefined8 *)
                      (*(code *)pOVar22[1]._0.byval_arg.data)(auStack_24,pOVar21,uVar23);
            VStack_3._0_8_ = *puVar2;
            fVar7 = *(float *)(puVar2 + 1);
            pcVar19 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
            pcRam_? = pcVar19;
            uVar5._0_4_ = (float)(*pcRam_?)();
            fVar6 = (VStack_3.y / (float)uVar5) * _UNK_?;
            fVar7 = (fVar7 / (float)uVar5) * _UNK_?;
            VStack_3.y = fVar6;
            VStack_3.x = (VStack_3.x / (float)uVar5) * _UNK_?;
            VStack_3.z = fVar7;
            fVar25 = (float)FUN_?(&VStack_3);
            uVar5._0_4_ = VStack_3.x;
            fVar6 = fVar25 / _UNK_? + fVar6;
            uVar5._4_4_ = fVar6;
            VStack_3._0_8_ = uVar5;
          }
        }
        goto code_?;
      }
    }
    pSVar26 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    pSVar26 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_vehicleWO_is_null_or_type_is_not,pSVar26,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar26,(MethodInfo *)0x0);
  }
code_?:
  MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
  pAVar27 = MVAvatarLocal_get_AvatarLocal(this,(MethodInfo *)0x0);
  if (pAVar27 != (AvatarLocal *)0x0) {
    pIVar28 = (pAVar27->fields).avatarCameraController;
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    if (pIVar28 != (IAvatarCameraController *)0x0) {
      FUN_?(2,TypeInfo__IAvatarCameraController);
      pAVar1 = (this->fields).avatarMotor;
      if (pAVar1 != (AvatarMotor *)0x0) {
        (*(pAVar1->klass->vtable).Reset.methodPtr)(pAVar1,(pAVar1->klass->vtable).Reset.method);
        pAVar1 = (this->fields).avatarMotor;
        if (pAVar1 != (AvatarMotor *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pAVar1,1,(MethodInfo *)0x0);
          this_04 = (this->fields).triggerHandler;
          if (this_04 != (MVTriggerHandler *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_04,1,(MethodInfo *)0x0);
            pAVar1 = (this->fields).avatarMotor;
            if (pAVar1 != (AvatarMotor *)0x0) {
              VStack_3.y = fVar6;
              VStack_3.x = (float)uVar5;
              VStack_3.z = fVar7;
              MVRigidBody::MVRigidBody_AddImpulse_1
                        ((MVRigidBody *)pAVar1,&VStack_3,0,(MethodInfo *)0x0);
              (*(this->klass->vtable).OnLeaveVehicle.methodPtr)(this);
              if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_08 = TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0;
              if (this_08 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
                if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
                  FUN_?();
                }
                object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
                this_08 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                          FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          ((UnityAction_1_System_Object_ *)this_08,(Object *)object,
                           MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                           ,(MethodInfo *)0x0);
                TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0 = this_08;
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)&TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0
                                 >> 0xc);
                  uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                  do {
                    uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                    puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar11 == *puVar12;
                    if (bVar8) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
              }
              if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                if (this_08 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
                goto code_?;
                (*(this_08->fields)._._.invoke_impl)((this_08->fields)._._.method_code);
              }
              this_05 = (this->fields).pickupGUI;
              if (this_05 != (PickupGUI *)0x0) {
                PickupGUI::PickupGUI_AvatarLeftVehicle(this_05,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar13 != (MVGameControllerBase *)0x0) &&
                   (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) {
                  this_06 = (pMVar14->fields).transformNetworkManager;
                  woID = (this->fields)._._._._.id;
                  this_09 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
                  MVNetworkReporter::MVNetworkReporter__ctor
                            (this_09,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
                  if (this_06 != (TransformNetworkManager *)0x0) {
                    TransformNetworkManager::TransformNetworkManager_AddReporter
                              (this_06,woID,this_09,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnCameraScale(Object, ScaleArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCameraScale
               (MVAvatarLocal *this,Object *sender,ScaleArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICameraSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    gameType = (pMVar2->fields)._GameType_k__BackingField;
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = MainCameraManager::MainCameraManager_GetSettings(gameType,(MethodInfo *)0x0);
    if ((args != (ScaleArgs *)0x0) && (pIVar3 != (ICameraSettings *)0x0)) {
      fVar4 = (args->fields).scale;
      pIVar5 = pIVar3->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__ICameraSettings) {
            pVVar8 = &(pIVar5->vtable).UpdateFromCameraSettings +
                     (pIVar5->interfaceOffsets[uVar6].offset + 2);
            goto code_?;
          }
          uVar9 = (short)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
        } while (uVar9 < uVar7);
      }
      pVVar8 = (VirtualInvokeData *)FUN_?(pIVar3,TypeInfo__ICameraSettings,2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar8->methodPtr)(pIVar3,fVar4,pVVar8->method);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnCheckpointReachedResetRevive() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnCheckpointReachedResetRevive
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___OnCheckpointReachedResetRevive_b__142_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__MVAvatarLocal____c->static_fields->__9__142_0;
    if (this_00 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
      if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
      this_00 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__MVAvatarLocal____c___OnCheckpointReachedResetRevive_b__142_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 ,(MethodInfo *)0x0);
      TypeInfo__MVAvatarLocal____c->static_fields->__9__142_0 = this_00;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__MVAvatarLocal____c->static_fields->__9__142_0 >> 0xc);
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
    }
    if (this == (MVAvatarLocal *)0x0) {
DAT_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
      if (this_00 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) goto DAT_?;
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
  pAVar1 = (this->fields)._.avatarPickupOwner;
  if ((pAVar1 != (AvatarPickupOwner *)0x0) &&
     (pPVar2 = (pAVar1->fields)._.currentItem, pPVar2 != (PickupItem *)0x0)) {
    cVar3 = (*(pPVar2->klass->vtable).get_FirstPerson.methodPtr)
                      (pPVar2,(pPVar2->klass->vtable).get_FirstPerson.method);
    pMVar4 = (this->fields)._.body;
    if ((cVar3 == '\0') || ((pPVar2->fields)._IsHolstered_k__BackingField != 0)) {
      if (((pMVar4 != (MVBody *)0x0) &&
          (pMVar5 = (pMVar4->fields).bodyObject, pMVar5 != (MVBodyObject *)0x0)) &&
         (pAVar6 = (pMVar5->fields).avatarBlinker, pAVar6 != (AvatarBlinker *)0x0)) {
        (pAVar6->fields)._.visible = 1;
        return;
      }
    }
    else if (((pMVar4 != (MVBody *)0x0) &&
             (pMVar5 = (pMVar4->fields).bodyObject, pMVar5 != (MVBodyObject *)0x0)) &&
            (pAVar6 = (pMVar5->fields).avatarBlinker, pAVar6 != (AvatarBlinker *)0x0)) {
      (pAVar6->fields)._.visible = 0;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDisableVehicles(Object, EventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnDisableVehicles
               (MVAvatarLocal *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  bVar1 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleWO_is_null_or_type_is_not);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).avatarMotor;
  if (pAVar2 == (AvatarMotor *)0x0) goto code_?;
  puVar3 = (undefined8 *)(*(pAVar2->klass->vtable).get_Velocity.methodPtr)(&VStack_4);
  pUVar5 = (this->fields).useInteractorHandler;
  uVar6._0_4_ = (float)*puVar3;
  fVar7 = (float)((ulonglong)*puVar3 >> 0x20);
  fVar8 = *(float *)(puVar3 + 1);
  if (pUVar5 == (UseInteractorHandler *)0x0) goto code_?;
  this_00 = (this->fields).vehicleRigidBody;
  this_01 = (pUVar5->fields).triggingColliders;
  if ((this_00 == (MVRigidBody *)0x0) ||
     (collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           ), this_01 == (ColliderCollection *)0x0)) goto code_?;
  Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
            (this_01,collider,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  (this->fields).vehicleRigidBody = (MVRigidBody *)0x0;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)&(this->fields).vehicleRigidBody >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  aIStackX_8[0].m_value = -1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar14 == (MVGameControllerBase *)0x0) ||
      (pMVar15 = (pMVar14->fields).game, pMVar15 == (MVNetworkGame *)0x0)) ||
     (this_02 = (pMVar15->fields)._PlayerController_k__BackingField,
     this_02 == (MVLocalObjectController *)0x0)) goto code_?;
  bVar1 = MVLocalObjectController::MVLocalObjectController_DetachWorldObjectFromVehicle
                     (this_02,(this->fields)._._._._.id,&aIStackX_8[0].m_value,0,(MethodInfo *)0x0);
  id.m_value = aIStackX_8[0].m_value;
  if (bVar1 == 0) {
    return;
  }
  if (aIStackX_8[0].m_value != -1) {
    this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_07 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_07,id.m_value,(MethodInfo *)0x0);
    if (pMVar16 != (MVWorldObjectClient *)0x0) {
      pMVar17 = pMVar16->klass;
      bVar18 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if ((bVar18 <= (pMVar17->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)(pMVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] ==
          TypeInfo__MVVehicleBase)) {
        bVar18 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar17->_1).naturalAligment < bVar18) ||
           ((MVVehicleBase__Class *)(pMVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(pMVar16,TypeInfo__MVVehicleBase);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        plVar20 = *(longlong **)&pMVar16[1].fields._.ownerActorNr;
        if (plVar20 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar20 + 0x1e8))(plVar20,*(undefined8 *)(*plVar20 + 0x1f0));
        this_03 = (pMVar16->fields).gameObject;
        if (this_03 == (GameObject *)0x0) goto code_?;
        pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (this_03,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
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
        if (pOVar21 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar21[1].klass != (Object__Class *)0x0) {
            pOVar22 = pOVar21->klass;
            uVar23._0_2_ = pOVar22[1]._0.byval_arg.attrs;
            uVar23._2_1_ = pOVar22[1]._0.byval_arg.type;
            uVar23._3_5_ = *(undefined5 *)&pOVar22[1]._0.byval_arg.field_0xb;
            puVar3 = (undefined8 *)
                      (*(code *)pOVar22[1]._0.byval_arg.data)(auStack_24,pOVar21,uVar23);
            VStack_4._0_8_ = *puVar3;
            fVar8 = *(float *)(puVar3 + 1);
            pcVar19 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
            pcRam_? = pcVar19;
            uVar6._0_4_ = (float)(*pcRam_?)();
            fVar7 = (VStack_4.y / (float)uVar6) * _UNK_?;
            fVar8 = (fVar8 / (float)uVar6) * _UNK_?;
            VStack_4.y = fVar7;
            VStack_4.x = (VStack_4.x / (float)uVar6) * _UNK_?;
            VStack_4.z = fVar8;
            fVar25 = (float)FUN_?(&VStack_4);
            uVar6._0_4_ = VStack_4.x;
            fVar7 = fVar25 / _UNK_? + fVar7;
            uVar6._4_4_ = fVar7;
            VStack_4._0_8_ = uVar6;
          }
        }
        goto code_?;
      }
    }
    pSVar26 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    pSVar26 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_vehicleWO_is_null_or_type_is_not,pSVar26,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar26,(MethodInfo *)0x0);
  }
code_?:
  MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
  pAVar27 = MVAvatarLocal_get_AvatarLocal(this,(MethodInfo *)0x0);
  if (pAVar27 != (AvatarLocal *)0x0) {
    pIVar28 = (pAVar27->fields).avatarCameraController;
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    if (pIVar28 != (IAvatarCameraController *)0x0) {
      FUN_?(2,TypeInfo__IAvatarCameraController);
      pAVar2 = (this->fields).avatarMotor;
      if (pAVar2 != (AvatarMotor *)0x0) {
        (*(pAVar2->klass->vtable).Reset.methodPtr)(pAVar2,(pAVar2->klass->vtable).Reset.method);
        pAVar2 = (this->fields).avatarMotor;
        if (pAVar2 != (AvatarMotor *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pAVar2,1,(MethodInfo *)0x0);
          this_04 = (this->fields).triggerHandler;
          if (this_04 != (MVTriggerHandler *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_04,1,(MethodInfo *)0x0);
            pAVar2 = (this->fields).avatarMotor;
            if (pAVar2 != (AvatarMotor *)0x0) {
              VStack_4.y = fVar7;
              VStack_4.x = (float)uVar6;
              VStack_4.z = fVar8;
              MVRigidBody::MVRigidBody_AddImpulse_1
                        ((MVRigidBody *)pAVar2,&VStack_4,0,(MethodInfo *)0x0);
              (*(this->klass->vtable).OnLeaveVehicle.methodPtr)(this);
              if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_08 = TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0;
              if (this_08 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
                if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
                  FUN_?();
                }
                object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
                this_08 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                          FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          ((UnityAction_1_System_Object_ *)this_08,(Object *)object,
                           MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                           ,(MethodInfo *)0x0);
                TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0 = this_08;
                if (iRam_? != 0) {
                  uVar10 = (uint)((ulonglong)&TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0
                                 >> 0xc);
                  uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                  do {
                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                    LOCK();
                    bVar9 = uVar12 == *puVar13;
                    if (bVar9) {
                      *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar9);
                }
              }
              if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                if (this_08 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
                goto code_?;
                (*(this_08->fields)._._.invoke_impl)((this_08->fields)._._.method_code);
              }
              this_05 = (this->fields).pickupGUI;
              if (this_05 != (PickupGUI *)0x0) {
                PickupGUI::PickupGUI_AvatarLeftVehicle(this_05,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar14 != (MVGameControllerBase *)0x0) &&
                   (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) {
                  this_06 = (pMVar15->fields).transformNetworkManager;
                  woID = (this->fields)._._._._.id;
                  this_09 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
                  MVNetworkReporter::MVNetworkReporter__ctor
                            (this_09,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
                  if (this_06 != (TransformNetworkManager *)0x0) {
                    TransformNetworkManager::TransformNetworkManager_AddReporter
                              (this_06,woID,this_09,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnEnterVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___OnEnterVehicle_b__87_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._._._.group;
    if ((pMVar2 != (MVGroup *)0x0) &&
       (this_01 = (pMVar2->fields)._.gameObject, this_01 != (GameObject *)0x0)) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_01,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
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
      if (pOVar3 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar3[1].klass != (Object__Class *)0x0) {
          this_02 = (this->fields).avatarMotor;
          if (this_02 == (AvatarMotor *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_02,0,(MethodInfo *)0x0);
          this_03 = (this->fields).triggerHandler;
          if (this_03 == (MVTriggerHandler *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_03,0,(MethodInfo *)0x0);
        }
      }
      pMVar4 = (MVRigidBody *)
               MVWorldObjectClientManager::
               MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                         ((this->fields)._._._.gameObject,
                          MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                         );
      bVar5 = iRam_? != 0;
      (this->fields).vehicleRigidBody = pMVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).vehicleRigidBody >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pUVar10 = (this->fields).useInteractorHandler;
      if (pUVar10 != (UseInteractorHandler *)0x0) {
        pMVar4 = (this->fields).vehicleRigidBody;
        this_04 = (pUVar10->fields).triggingColliders;
        if ((pMVar4 != (MVRigidBody *)0x0) &&
           (collider = (Collider *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)pMVar4,
                                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                 ), this_04 != (ColliderCollection *)0x0)) {
          Assets::Scripts::Tools::ColliderCollection::ColliderCollection_SetActiveCollider
                    (this_04,collider,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_05 = TypeInfo__MVAvatarLocal____c->static_fields->__9__87_0;
          if (this_05 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
            if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
              FUN_?();
            }
            object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
            this_05 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                      FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      ((UnityAction_1_System_Object_ *)this_05,(Object *)object,
                       MethodInfo__MVAvatarLocal____c___OnEnterVehicle_b__87_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                       ,(MethodInfo *)0x0);
            TypeInfo__MVAvatarLocal____c->static_fields->__9__87_0 = this_05;
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&TypeInfo__MVAvatarLocal____c->static_fields->__9__87_0 >>
                             0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
          }
          if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
            if (this_05 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
            goto code_?;
            (*(this_05->fields)._._.invoke_impl)
                      ((this_05->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                       (this_05->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnEquipItem
               (MVAvatarLocal *this,PickupItem *equippeditem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVAvatarLocal___OnEquipItem_b__136_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVAvatarLocal___OnEquipItem_b__136_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
             ,(MethodInfo *)0x0);
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    if (this_00 == (UnityAction_1_System_Object_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(this_00->fields)._._.invoke_impl)
              ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
               (this_00->fields)._._.method);
  }
  return;
}


/* Void OnHealthBoostedChanged() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnHealthBoostedChanged
               (MVAvatarLocal *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  pBStackX_8 = (Boost *)0x0;
  (this->fields).boostedHealthMultiplier = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar4 == (MVLocalPlayer *)0x0 ||
      (this_01 = (pMVar4->fields).boostController, this_01 == (BoostController *)0x0))))
  goto code_?;
  bVar5 = BoostController::BoostController_TryGetActiveBoost
                    (this_01,BoostType__Enum_ExtraHealthFloatMultiplier,&pBStackX_8,
                     (MethodInfo *)0x0);
  if (bVar5 == 0) {
    pMVar6 = (this->fields)._.MaxHealth;
    if (pMVar6 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    (*(pMVar6->klass->vtable).get_Value.methodPtr)(pMVar6,(pMVar6->klass->vtable).get_Value.method);
    pMVar7 = (this->fields)._.Health;
    if (pMVar7 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    (*(pMVar7->klass->vtable).get_Value.methodPtr)();
    MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
    pMVar6 = (this->fields)._.MaxHealth;
    pMVar7 = (this->fields)._.Health;
    if (pMVar6 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    (*(pMVar6->klass->vtable).get_Value.methodPtr)(pMVar6,(pMVar6->klass->vtable).get_Value.method);
  }
  else {
    if ((pBStackX_8 == (Boost *)0x0) ||
       (pOVar8 = Boost::Boost_get_Value(pBStackX_8,(MethodInfo *)0x0), pOVar8 == (Object *)0x0))
    goto code_?;
    if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar8,lRam_?);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (this->fields).boostedHealthMultiplier =
         (float)*(int *)&pOVar8[1].klass / _UNK_? + _UNK_?;
    MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
    pMVar6 = (this->fields)._.MaxHealth;
    pMVar7 = (this->fields)._.Health;
    if (pMVar6 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    (*(pMVar6->klass->vtable).get_Value.methodPtr)(pMVar6,(pMVar6->klass->vtable).get_Value.method);
  }
  if (pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    (*(pMVar7->klass->vtable).set_Value.methodPtr)(pMVar7);
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnHolsteredChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnHolsteredChanged
               (MVAvatarLocal *this,bool obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVAvatarLocal___OnHolsteredChanged_b__111_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVAvatarLocal_HandleBlinkerVisibility(this,(MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVAvatarLocal___OnHolsteredChanged_b__111_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
             ,(MethodInfo *)0x0);
  if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
    if (this_00 == (UnityAction_1_System_Object_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(this_00->fields)._._.invoke_impl)
              ((this_00->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
               (this_00->fields)._._.method);
  }
  return;
}


/* Void OnObserve() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnObserve
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    if ((pMVar3->fields).OnPlayerListChanged != (Action *)0x0) {
      pAVar4 = (pMVar3->fields).OnPlayerListChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnPositionChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass145_0___OnPositionChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass145_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass145_0);
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
            FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
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


/* Void OnRespawn() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnRespawn
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).interactableLocal;
  if (pAVar1 == (AvatarInteractable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMStack_3 = (pAVar1->klass->vtable).AddModifier.method;
  (*(pAVar1->klass->vtable).AddModifier.methodPtr)(pAVar1,0x11,0xffffffff);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar4 != (MainCameraManager *)0x0) &&
     (pTVar5 = (pMVar4->fields).transitionCamera, pTVar5 != (TransitionCamera *)0x0)) {
    (pTVar5->fields).transitionPercentage = 1.0;
    obj = MVAvatarLocal_GetSpawnTransform(this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (obj->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar6);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_8.x = 0.0;
      QStack_8.y = 0.0;
      QStack_8.z = 0.0;
      QStack_8.w = 0.0;
      pvVar6 = (obj->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar6,&QStack_8);
      pMStack_3 = (MethodInfo *)QStack_8._0_8_;
      uStack_9._0_4_ = QStack_8.z;
      uStack_9._4_4_ = QStack_8.w;
      QStack_8.x = 0.0;
      QStack_8.y = 0.0;
      QStack_8._8_8_ = QStack_8._8_8_ & 0xffffffff00000000;
      MVAvatarLocal_SetTransform
                (this,(Vector3 *)&QStack_8,(Quaternion *)&pMStack_3,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass146_0___OnRotationChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass146_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass146_0);
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)rotationChangedEventArgs;
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
            FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
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


/* Void OnScaleChanged(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnScaleChanged
               (MVAvatarLocal *this,MVWorldObjectClient *wo,
               ScaleChangedEventArgs *scaleChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass147_0___OnScaleChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass147_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass147_0);
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
            FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
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


/* Void OnSeatedChanged(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSeatedChanged
               (MVAvatarLocal *this,bool isSeated,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass95_0___OnSeatedChanged_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass95_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass95_0);
  if (object != (Object *)0x0) {
    *(bool *)&object[1].klass = isSeated;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,object,
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSetRespawnWhenPossible() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetRespawnWhenPossible
               (MVAvatarLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarRespawnHandler;
  if (pAVar1 != (AvatarRespawnHandler *)0x0) {
    (pAVar1->fields).shouldRespawnAsGhost = 0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      uVar2 = 0;
      if ((pAVar1->fields).shouldRespawnAsGhost == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pFVar4 = (pMVar3->fields).flagDebriefingControl, pFVar4 != (FlagDebriefingControl *)0x0
            )) && (pMVar5 = (pAVar1->fields).mvAvatar, pMVar5 != (MVAvatarLocal *)0x0)) {
          pMVar6 = (pMVar5->fields).avatarLocalModes;
          uVar7 = (undefined7)((ulonglong)uVar2 >> 8);
          if ((pFVar4->fields).IsInFlagDebriefing == 0) {
            if (pMVar6 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
              MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                        (pMVar6,(AvatarRuntimeState__Enum)CONCAT71(uVar7,1),(MethodInfo *)0x0);
              (pAVar1->fields).shouldRespawnAsGhost = 1;
              return;
            }
          }
          else if (pMVar6 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
            MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                      (pMVar6,(AvatarRuntimeState__Enum)CONCAT71(uVar7,7),(MethodInfo *)0x0);
            (pAVar1->fields).shouldRespawnAsGhost = 1;
            return;
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar3 != (MVGameControllerBase *)0x0) &&
           (pFVar4 = (pMVar3->fields).flagDebriefingControl, pFVar4 != (FlagDebriefingControl *)0x0)
           ) {
          if ((pFVar4->fields).IsInFlagDebriefing == 0) {
            pMVar5 = (pAVar1->fields).mvAvatar;
            if ((pMVar5 == (MVAvatarLocal *)0x0) ||
               (pMVar6 = (pMVar5->fields).avatarLocalModes,
               pMVar6 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
            MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                      (pMVar6,(AvatarRuntimeState__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),9),
                       (MethodInfo *)0x0);
            (pAVar1->fields).shouldRespawnAsGhost = 1;
          }
          return;
        }
      }
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSetToDeadMode() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnSetToDeadMode
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                  ,4,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).currentMode;
  bVar4 = (pMVar1->fields).currentState;
  if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar3->klass->vtable).__unknown.methodPtr)
              (pMVar3,4,(pMVar3->klass->vtable).__unknown.method);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar3 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,4,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      bVar5 = iRam_? != 0;
      (pMVar1->fields).currentMode = pMVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields).currentMode >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      pMVar3 = (pMVar1->fields).currentMode;
      (pMVar1->fields).currentState = 4;
      if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar3->klass->vtable).Activate.methodPtr)
                  (pMVar3,(ulonglong)bVar4,(pMVar3->klass->vtable).Activate.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUnequip(Object, EventArgs) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_OnUnequip
               (MVAvatarLocal *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarEquipable);
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pAVar1 = (AvatarEquipable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    this_01 = (AvatarEquipable *)0x0;
    if (pAVar1 != (AvatarEquipable *)0x0) {
      bVar2 = (TypeInfo__AvatarEquipable->_1).naturalAligment;
      if (((pAVar1->klass->_1).naturalAligment < bVar2) ||
         (bVar3 = true,
         (pAVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo__AvatarEquipable)) {
        bVar3 = false;
      }
      if (bVar3) {
        this_01 = pAVar1;
      }
    }
    pAVar4 = (this->fields).interactableLocal;
    if (pAVar4 != (AvatarInteractable *)0x0) {
      fVar5 = (float)(*(pAVar4->klass->vtable).HandleModifierEffect.methodPtr)
                               (pAVar4,5,_UNK_?,
                                (pAVar4->klass->vtable).HandleModifierEffect.method);
      if (_UNK_? < fVar5) {
        if (this_01 == (AvatarEquipable *)0x0) goto code_?;
        bVar6 = AvatarEquipable::AvatarEquipable_GetIsEquipped
                          (this_01,AvatarItemType__Enum_SlapGun,(MethodInfo *)0x0);
        if (bVar6 != 0) {
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
  FUN_?();
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
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass131_0___RelayDamageEvent_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass131_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass131_0);
  if (object != (Object *)0x0) {
    *(char *)&object[1].monitor = (char)damageType;
    pAVar1 = (this->fields).OnDamageTaken;
    if (pAVar1 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
      pvVar2 = (pAVar1->fields)._._.method;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,pvVar2,damageDealer,(char)damageType,pvVar2);
    }
    pMVar3 = (this->fields)._.Health;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar4 = (float)(*(pMVar3->klass->vtable).get_Value.methodPtr)();
      if (0.0 < fVar4) {
        return;
      }
      if ((this->fields).OnKilled == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        return;
      }
      if (damageDealer == (MVPlayer *)0x0) {
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar5 == (MVNetworkGame *)0x0) ||
            (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0)) ||
           (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
           pMVar7 == (MVLocalPlayer *)0x0)) goto code_?;
        iVar8 = (pMVar7->fields)._._ActorNr_k__BackingField;
      }
      else {
        iVar8 = (damageDealer->fields)._ActorNr_k__BackingField;
      }
      *(int32_t *)((longlong)&object[1].klass + 4) = iVar8;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar5 != (MVNetworkGame *)0x0) &&
          (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) &&
         (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
         pMVar7 != (MVLocalPlayer *)0x0)) {
        iVar8 = (pMVar7->fields)._._ActorNr_k__BackingField;
        *(int32_t *)&object[1].klass = iVar8;
        pAVar9 = (this->fields).OnKilled;
        if (pAVar9 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
          (*(pAVar9->fields)._._.invoke_impl)
                    ((pAVar9->fields)._._.method_code,iVar8,
                     *(undefined4 *)((longlong)&object[1].klass + 4),
                     *(undefined1 *)&object[1].monitor,(pAVar9->fields)._._.method);
          this_00 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_00,object,
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RelayHealingEvent(Single, MVPlayer) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayHealingEvent
               (MVAvatarLocal *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  pAVar1 = (this->fields).OnHealing;
  if (pAVar1 != (Action_2_Single_MVPlayer_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,amount,healer,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void RelayNewSafePosition(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_RelayNewSafePosition
               (MVAvatarLocal *this,Vector3 *lastSafePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass133_0___RelayNewSafePosition_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass133_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass133_0);
  if (object != (Object *)0x0) {
    fVar1 = lastSafePosition->z;
    object[1].klass = *(Object__Class **)lastSafePosition;
    *(float *)&object[1].monitor = fVar1;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((((pMVar2 != (MainCameraManager *)0x0) &&
         (pMVar3 = (pMVar2->fields).cameraController, pMVar3 != (MVCameraController *)0x0)) &&
        (this_00 = (pMVar3->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0))
       && (this_01 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                               (this_00,(MethodInfo *)0x0), this_01 != (MVCameraBase *)0x0)) {
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      object[2].klass = pOVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)(object + 2) >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__MVAvatarLocal____c__DisplayClass133_0___RelayNewSafePosition_b__0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 ,(MethodInfo *)0x0);
      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        if (this_02 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
        (*(this_02->fields)._._.invoke_impl)
                  ((this_02->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                   (this_02->fields)._._.method);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetAvatar() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_ResetAvatar
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).triggerHandler;
  if (this_00 != (MVTriggerHandler *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
      pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar3 != (MVLocalPlayer *)0x0) {
        actorNumber = (pMVar3->fields)._._ActorNr_k__BackingField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
          team = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                           (pMVar4,actorNumber,(MethodInfo *)0x0);
          if (team != MVTeam__Enum_None) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 == (MVGameControllerBase *)0x0) ||
                (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
               (pMVar4 = (pMVar2->fields).teamManager, pMVar4 == (MVTeamManager *)0x0))
            goto code_?;
            bVar5 = MVTeamManager::MVTeamManager_IsTeamActive(pMVar4,team,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 == (MVNetworkGame *)0x0) ||
                 (pMVar4 = (pMVar2->fields).teamManager, pMVar4 == (MVTeamManager *)0x0))
              goto code_?;
              pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(pMVar4,(MethodInfo *)0x0);
              this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (pLVar6 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
              if ((pLVar6->fields)._size == 0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pMVar8 = (pLVar6->fields)._items;
              if (pMVar8 == (MVTeam__Enum__Array *)0x0) goto code_?;
              if ((int)pMVar8->max_length == 0) {
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                        (this_02,pMVar8->vector[0],(MethodInfo *)0x0);
            }
          }
          MVAvatarLocal_SetAnimation(this,StringLiteral_Idle,(MethodInfo *)0x0);
          pMVar9 = (this->fields)._.MaxHealth;
          pMVar10 = (this->fields)._.Health;
          if (pMVar9 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
            (*(pMVar9->klass->vtable).get_Value.methodPtr)();
            if (pMVar10 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              (*(pMVar10->klass->vtable).set_Value.methodPtr)(pMVar10);
              bVar5 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
              }
              pAVar11 = (this->fields).avatarEquipable;
              if (pAVar11 != (AvatarEquipable *)0x0) {
                (*(pAVar11->klass->vtable).Unequip.methodPtr)
                          (pAVar11,(pAVar11->klass->vtable).Unequip.method);
                pAVar12 = (this->fields).interactableLocal;
                if (pAVar12 != (AvatarInteractable *)0x0) {
                  (*(pAVar12->klass->vtable).ClearModifiers.methodPtr)
                            (pAVar12,(pAVar12->klass->vtable).ClearModifiers.method);
                  pAVar13 = (this->fields).avatarMotor;
                  if (pAVar13 != (AvatarMotor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(pAVar13->klass->vtable).Reset.methodPtr)
                              (pAVar13,(pAVar13->klass->vtable).Reset.method);
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetAnimation(String) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetAnimation
               (MVAvatarLocal *this,String *animationState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currAnim;
  if (pSVar1 == animationState) {
    return;
  }
  if (((pSVar1 != (String *)0x0) && (animationState != (String *)0x0)) &&
     ((pSVar1->fields)._stringLength == (animationState->fields)._stringLength)) {
    in_R9 = (Object__Class *)0x0;
    bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(pSVar1->fields)._firstChar,
                       (uint8_t *)&(animationState->fields)._firstChar,
                       (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
  }
  pMVar3 = (this->fields)._.Animation;
  if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
    pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                        ((pMVar3->fields).value,(MethodInfo *)0x0);
    if (pOVar4 != (Object *)0x0) {
      in_R9 = pOVar4->klass;
      bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((in_R9->_1).naturalAligment < bVar5) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (in_R9->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pOVar4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar1 = (this->fields).currAnim;
    if (pSVar1 == animationState) {
      return;
    }
    if (((pSVar1 != (String *)0x0) && (animationState != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (animationState->fields)._stringLength)) {
      in_R9 = (Object__Class *)0x0;
      bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(animationState->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return;
      }
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar7 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_state,(Object *)animationState,
                   (InsertionBehavior__Enum)uVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_8[0] = iVar7;
        pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_timeStamp,pOVar4,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pMVar3 = (this->fields)._.Animation;
        if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar3,(Object *)this_01,(MethodInfo *)0x0);
          bVar9 = iRam_? == 0;
          (this->fields).currAnim = animationState;
          if (bVar9) {
            return;
          }
          uVar10 = (uint)((ulonglong)&(this->fields).currAnim >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCharacterController(SmoothCharacterController) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetCharacterController
               (MVAvatarLocal *this,SmoothCharacterController *characterController,
               MethodInfo *method)

{
  pAVar1 = (this->fields).avatarMotor;
  if (pAVar1 == (AvatarMotor *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pAVar1->fields).smoothCharacterController = characterController;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pAVar1->fields).smoothCharacterController >> 0xc);
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


/* Void SetCurrentItemState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetCurrentItemState
               (MVAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *aNewState,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     ((Object *)aNewState,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  pOVar5 = (pMVar1->fields).value;
  (pMVar1->fields).value = pOVar3;
  if (bVar4) {
    uVar6 = (uint)((ulonglong)&(pMVar1->fields).value >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (pOVar5 != pOVar3) {
    if ((pMVar1->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar10 = (pMVar1->fields).OnChange;
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      (*(pMVar10->fields)._._.invoke_impl)
                ((pMVar10->fields)._._.method_code,pOVar5,(pMVar10->fields)._._.method);
    }
    if (((pMVar1->fields).writeThrough != 0) &&
       ((pMVar1->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar11 = (pMVar1->fields).OnWriteThrough;
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      (*(pMVar11->fields)._._.invoke_impl)
                ((pMVar11->fields)._._.method_code,pOVar5,(pMVar11->fields)._._.method);
    }
  }
  return;
}


/* Void SetLocalAvatarEarsState(Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetLocalAvatarEarsState
               (MVAvatarLocal *this,bool activeState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.avatar;
  if (pAVar1 != (Avatar *)0x0) {
    bVar2 = (TypeInfo__AvatarLocal->_1).naturalAligment;
    if (((pAVar1->klass->_1).naturalAligment < bVar2) ||
       ((pAVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLocal)) {
      FUN_?(pAVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = pAVar1[1].fields._.m_CancellationTokenSource;
    if (obj != (CancellationTokenSource *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,activeState,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (CancellationTokenSource *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar4 = (obj->fields)._kernelEvent;
      if (pMVar4 == (ManualResetEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pMVar4,activeState);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetMode
               (MVAvatarLocal *this,AvatarRuntimeState__Enum localMode,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocalModes;
  if (pMVar1 == (MVAvatarLocal_AvatarLocalModes *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                  ,CONCAT44(in_register_00000014,localMode),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).currentMode;
  bVar4 = (pMVar1->fields).currentState;
  if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar3->klass->vtable).__unknown.methodPtr)
              (pMVar3,(ulonglong)(byte)localMode,(pMVar3->klass->vtable).__unknown.method);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar3 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,localMode & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      bVar5 = iRam_? != 0;
      (pMVar1->fields).currentMode = pMVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields).currentMode >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      pMVar3 = (pMVar1->fields).currentMode;
      (pMVar1->fields).currentState = (byte)localMode;
      if (pMVar3 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar3->klass->vtable).Activate.methodPtr)
                  (pMVar3,(ulonglong)bVar4,(pMVar3->klass->vtable).Activate.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToSpawnTransform() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform
               (MVAvatarLocal *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pTVar2 = (pMVar1->fields).transitionCamera, pTVar2 != (TransitionCamera *)0x0)) {
    (pTVar2->fields).transitionPercentage = 1.0;
    obj = MVAvatarLocal_GetSpawnTransform(this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6.z = 0.0;
      QStack_6.w = 0.0;
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&QStack_6);
      QStack_7.x = QStack_6.x;
      QStack_7.y = QStack_6.y;
      QStack_7.z = QStack_6.z;
      QStack_7.w = QStack_6.w;
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6._8_8_ = QStack_6._8_8_ & 0xffffffff00000000;
      MVAvatarLocal_SetTransform(this,(Vector3 *)&QStack_6,&QStack_7,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetTransform(Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetTransform
               (MVAvatarLocal *this,Vector3 *position,Quaternion *rotation,MethodInfo *method)

{
  if (this != (MVAvatarLocal *)0x0) {
    QStack_1.x = position->x;
    QStack_1.y = position->y;
    QStack_1.z = position->z;
    (*(this->klass->vtable).set_WorldPosition.methodPtr)(QStack_1.x,&QStack_1);
    QStack_1.x = rotation->x;
    QStack_1.y = rotation->y;
    QStack_1.z = rotation->z;
    QStack_1.w = rotation->w;
    MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
              ((MVWorldObjectClient *)this,&QStack_1,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._._._.gameObject;
    if ((pGVar2 != (GameObject *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      uStack_4._0_4_ = position->x;
      uStack_4._4_4_ = position->y;
      fStack_5 = position->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pGVar2 = (this->fields)._._._.gameObject;
      if ((pGVar2 != (GameObject *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        fStack_9 = rotation->x;
        fStack_10 = rotation->y;
        fStack_11 = rotation->z;
        fStack_12 = rotation->w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6,&fStack_9);
        pAVar13 = (this->fields).avatarMotor;
        if (pAVar13 != (AvatarMotor *)0x0) {
          (*(pAVar13->klass->vtable).Reset.methodPtr)(pAVar13,(pAVar13->klass->vtable).Reset.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupSpawnroleReceiver(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SetupSpawnroleReceiver
               (MVAvatarLocal *this,SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__set_Value_ReviveState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__set_Value_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Size);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields)._.skillDataManager;
  if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
  bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                     (pWVar1,StringLiteral_Size,(MethodInfo *)0x0);
  fVar3 = _UNK_?;
  if (bVar2 != 0) {
    pWVar1 = (this->fields)._.skillDataManager;
    if (pWVar1 == (WorldObjectSkillDataManager *)0x0) goto code_?;
    fVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                       (pWVar1,StringLiteral_Size,(MethodInfo *)0x0);
  }
  if ((spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) ||
     (pSVar4 = (spawnRoleDataReceiver->fields).size,
     pSVar4 == (SpawnRoleReceiverVariable_1_System_Single_ *)0x0)) goto code_?;
  FUN_?(pSVar4,fVar3,
                MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
               );
  uStack_5 = CONCAT44(fVar3,fVar3);
  fStack_6 = fVar3;
  (*(this->klass->vtable).set_Scale.methodPtr)
            (this,&uStack_5,(this->klass->vtable).set_Scale.method);
  pMVar7 = (this->fields)._.Size;
  if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
  (*(pMVar7->klass->vtable).set_Value.methodPtr)(pMVar7,fVar3);
  pSVar8 = (spawnRoleDataReceiver->fields).reviveState;
  this_01 = (ReviveState *)FUN_?(TypeInfo__ReviveState);
  ReviveState::ReviveState__ctor(this_01,(MethodInfo *)0x0);
  pMVar9 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__set_Value_ReviveState_
  ;
  if ((pSVar8 == (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) ||
     (pSVar10 = (pSVar8->fields).spawnRoleDataReceiver, pSVar10 == (SpawnRoleDataReceiver *)0x0))
  goto code_?;
  if ((pSVar10->fields).isActive == 0) {
    uVar11 = func_?(&TypeInfo__System__Exception);
    pEVar12 = (Exception *)func_?(uVar11);
    pSVar13 = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar12,pSVar13,(MethodInfo *)0x0);
    FUN_?(pEVar12,pMVar9);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((pSVar8->fields).subscribableVariable == (SubscribableVariable_1_ReviveState_ *)0x0)
  goto code_?;
  func_?();
  this_00 = (spawnRoleDataReceiver->fields).lastRespawnType;
  if (this_00 == (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0) goto code_?;
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleReceiverVariable`1[System::Int32Enum]::
  SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
            ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
            );
  pSVar15 = (spawnRoleDataReceiver->fields).position;
  puVar16 = (undefined8 *)
            (*(this->klass->vtable).get_Position.methodPtr)
                      (&uStack_17,this,(this->klass->vtable).get_Position.method);
  if (pSVar15 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  uStack_5 = *puVar16;
  fStack_6 = *(float *)(puVar16 + 1);
  FUN_?(pSVar15,&uStack_5);
  pSVar18 = (spawnRoleDataReceiver->fields).rotation;
  puVar19 = (undefined4 *)
            (*(this->klass->vtable).get_Rotation.methodPtr)
                      (&uStack_17,this,(this->klass->vtable).get_Rotation.method);
  if (pSVar18 == (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0)
  goto code_?;
  uStack_17 = *puVar19;
  uStack_20 = puVar19[1];
  uStack_21 = puVar19[2];
  uStack_22 = puVar19[3];
  FUN_?(pSVar18,&uStack_17);
  pSVar15 = (spawnRoleDataReceiver->fields).defaultScale;
  puVar16 = (undefined8 *)
            (*(this->klass->vtable).get_Scale.methodPtr)
                      (&uStack_17,this,(this->klass->vtable).get_Scale.method);
  if (pSVar15 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  uStack_5 = *puVar16;
  fStack_6 = *(float *)(puVar16 + 1);
  FUN_?(pSVar15,&uStack_5);
  pSVar15 = (spawnRoleDataReceiver->fields).scale;
  puVar16 = (undefined8 *)
            (*(this->klass->vtable).get_Scale.methodPtr)
                      (&uStack_17,this,(this->klass->vtable).get_Scale.method);
  if (pSVar15 == (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  uStack_5 = *puVar16;
  fStack_6 = *(float *)(puVar16 + 1);
  FUN_?(pSVar15,&uStack_5);
  pSVar23 = (spawnRoleDataReceiver->fields).woId;
  if (pSVar23 == (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) goto code_?;
  FUN_?(pSVar23,(this->fields)._._._._.id);
  pMVar24 = (this->fields)._.MaxHealth;
  pSVar23 = (spawnRoleDataReceiver->fields).maxHealth;
  if ((pMVar24 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) ||
     (uVar25 = (*(pMVar24->klass->vtable).get_Value.methodPtr)
                         (pMVar24,(pMVar24->klass->vtable).get_Value.method),
     pSVar23 == (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0)) goto code_?;
  FUN_?(pSVar23,uVar25);
  pSVar26 = (spawnRoleDataReceiver->fields).tierRequirement;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStackX_8 = (MVAvatarSpawnRoleCreator__Class *)0x0;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar27 = (this->fields).spawnWorldObjectId;
  pMVar28 = (MVAvatarSpawnRoleCreator__Class *)(ulonglong)uVar27;
  method_00 = (MVAvatarSpawnRoleCreator__Class *)&pMStackX_8;
  bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                     (this_02,uVar27,(MVWorldObject **)method_00,(MethodInfo *)0x0);
  if ((bVar2 == 0) ||
     (method_00 = pMStackX_8, pMStackX_8 == (MVAvatarSpawnRoleCreator__Class *)0x0)) {
code_?:
    player = (MVPlayer *)((ulonglong)pMVar28 & 0xffffffffffffff00);
  }
  else {
    pMVar29 = (MVAvatarSpawnRoleCreator__Class *)(pMStackX_8->_0).image;
    bVar30 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    pMVar28 = TypeInfo__MVAvatarSpawnRoleCreator;
    if (((pMVar29->_1).naturalAligment < bVar30) ||
       (((MVAvatarSpawnRoleCreator__Class *)(pMVar29->_1).typeHierarchy[(ulonglong)bVar30 - 1] !=
         TypeInfo__MVAvatarSpawnRoleCreator ||
        (pMStackX_8 == (MVAvatarSpawnRoleCreator__Class *)0x0)))) goto code_?;
    bVar30 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((pMVar29->_1).naturalAligment < bVar30) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar29->_1).typeHierarchy[(ulonglong)bVar30 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      FUN_?(pMStackX_8);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    GVar31 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                       ((MVAvatarSpawnRoleCreator *)pMStackX_8,(MethodInfo *)0x0);
    player = (MVPlayer *)(ulonglong)(GVar31 & 0xff);
  }
  pMVar9 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__set_Value_MV__Common__GamePassTier_
  ;
  if ((pSVar26 != (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)0x0) &&
     (pSVar10 = (pSVar26->fields).spawnRoleDataReceiver, pSVar10 != (SpawnRoleDataReceiver *)0x0)) {
    if ((pSVar10->fields).isActive == 0) {
      uVar11 = func_?(&TypeInfo__System__Exception);
      pEVar12 = (Exception *)func_?(uVar11);
      pSVar13 = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar12,pSVar13,(MethodInfo *)0x0);
      FUN_?(pEVar12,pMVar9);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pSVar32 = (pSVar26->fields).subscribableVariable;
    if (pSVar32 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0) {
      (pSVar32->fields)._.value = (uint8_t)player;
      if ((pSVar32->fields)._.OnChange != (Action_1_MV_Common_GamePassTier_ *)0x0) {
        pAVar33 = (pSVar32->fields)._.OnChange;
        method_00 = (pAVar33->fields)._._.method;
        (*(pAVar33->fields)._._.invoke_impl)();
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)method_00);
      if (extraout_RAX != 0) {
        pDVar34 = *(Delegate **)(extraout_RAX + 0x38);
        this_03 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,
                   MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__,(MethodInfo *)0x0);
        pDVar34 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar34,(Delegate *)this_03,(MethodInfo *)0x0);
        if (pDVar34 == (Delegate *)0x0) {
          *(undefined8 *)(extraout_RAX + 0x38) = 0;
        }
        else {
          pDVar35 = (Delegate *)0x0;
          if ((UnityAction__Class *)pDVar34->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pDVar35 = pDVar34;
          }
          if (pDVar35 == (Delegate *)0x0) {
            FUN_?(pDVar34);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          *(Delegate **)(extraout_RAX + 0x38) = pDVar35;
          pDVar35 = (Delegate *)0x0;
          if ((UnityAction__Class *)pDVar34->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pDVar35 = pDVar34;
          }
          if (pDVar35 == (Delegate *)0x0) {
            FUN_?(pDVar34);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar27 = (uint)(extraout_RAX + 0x38U >> 0xc);
          uVar36 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
          do {
            uVar37 = *(ulonglong *)(uVar36 * 8 + 0xADDR);
            puVar38 = (ulonglong *)(uVar36 * 8 + 0xADDR);
            LOCK();
            bVar39 = uVar37 == *puVar38;
            if (bVar39) {
              *puVar38 = uVar37 | 1L << (uVar27 & 0x3f);
            }
            UNLOCK();
          } while (!bVar39);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SpawnRoleDataReceiverAction(MVAvatarLocal+SpawnRoleDataReceiverActionDelegate) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SpawnRoleDataReceiverAction
               (MVAvatarLocal *this,
               MVAvatarLocal_SpawnRoleDataReceiverActionDelegate
               *spawnRoleDataReceiverActionDelegate,MethodInfo *method)

{
  if ((this->fields).spawnRoleDataReceiver == (SpawnRoleDataReceiver *)0x0) {
    return;
  }
  if (spawnRoleDataReceiverActionDelegate !=
      (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
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


/* Void SubscribeToExternalEvents() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_SubscribeToExternalEvents
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MV::Common::MVGameStateType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<WinningConditionType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__KillSelf__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnSetToDeadMode__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__add_OnChange_System__Action<MV::Common::MVGameStateType>_
                 );
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
    pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
    if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
                (pGVar4,(Action *)pNVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
        pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)this,MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,
                   (MethodInfo *)0x0);
        if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          ppAVar6 = &(pGVar4->fields).OnSetRespawnWhenPossible;
          pAVar7 = (pGVar4->fields).OnSetRespawnWhenPossible;
          do {
            pAVar8 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar7,(Delegate *)pNVar5,(MethodInfo *)0x0);
            pAVar9 = (Action *)0x0;
            if (pAVar8 != (Action *)0x0) {
              if (pAVar8->klass == TypeInfo__System__Action) {
                pAVar9 = pAVar8;
              }
              if (pAVar9 == (Action *)0x0) {
                FUN_?(pAVar8);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            LOCK();
            pAVar8 = *ppAVar6;
            bVar11 = pAVar7 == pAVar8;
            if (bVar11) {
              *ppAVar6 = pAVar9;
              pAVar8 = pAVar7;
            }
            UNLOCK();
            pAVar9 = pAVar7;
            if (!bVar11) {
              pAVar9 = pAVar8;
            }
            if (iRam_? != 0) {
              uVar12 = (uint)((ulonglong)ppAVar6 >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            bVar11 = pAVar9 != pAVar7;
            pAVar7 = pAVar9;
          } while (bVar11);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
            pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,
                       MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__,
                       (MethodInfo *)0x0);
            if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
              GameEventManager+AvatarCommandsPlayModeManager::
              GameEventManager_AvatarCommandsPlayModeManager_add_OnEnterPlaymode
                        (pGVar4,(Action *)pNVar5,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                  (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                 (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
                pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar5,(Object *)this,
                           MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__,
                           (MethodInfo *)0x0);
                if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Action);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  ppAVar6 = &(pGVar4->fields).OnSetToSpawnPoint;
                  pAVar7 = (pGVar4->fields).OnSetToSpawnPoint;
                  do {
                    pAVar8 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar7,(Delegate *)pNVar5,(MethodInfo *)0x0);
                    pAVar9 = (Action *)0x0;
                    if (pAVar8 != (Action *)0x0) {
                      if (pAVar8->klass == TypeInfo__System__Action) {
                        pAVar9 = pAVar8;
                      }
                      if (pAVar9 == (Action *)0x0) {
                        FUN_?(pAVar8);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    LOCK();
                    pAVar8 = *ppAVar6;
                    bVar11 = pAVar7 == pAVar8;
                    if (bVar11) {
                      *ppAVar6 = pAVar9;
                      pAVar8 = pAVar7;
                    }
                    UNLOCK();
                    pAVar9 = pAVar7;
                    if (!bVar11) {
                      pAVar9 = pAVar8;
                    }
                    if (iRam_? != 0) {
                      uVar12 = (uint)((ulonglong)ppAVar6 >> 0xc);
                      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                        LOCK();
                        bVar11 = uVar14 == *puVar15;
                        if (bVar11) {
                          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar11);
                    }
                    bVar11 = pAVar9 != pAVar7;
                    pAVar7 = pAVar9;
                  } while (bVar11);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)
                     ) {
                    pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                    pDVar16 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                    FUN_?(pDVar16,this);
                    if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Action<int>);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      ppAVar17 = &(pGVar4->fields).OnMoveBodyToSafeSpot;
                      pAVar18 = (pGVar4->fields).OnMoveBodyToSafeSpot;
                      do {
                        pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pAVar18,pDVar16,(MethodInfo *)0x0);
                        pAVar20 = TypeInfo__System__Action<int>;
                        if (pDVar19 == (Delegate *)0x0) {
                          pAVar21 = (Action_1_Int32_ *)0x0;
                        }
                        else {
                          pAVar21 = (Action_1_Int32_ *)
                                    FUN_?(pDVar19,TypeInfo__System__Action<int>);
                          if (pAVar21 == (Action_1_Int32_ *)0x0) {
                            FUN_?(pDVar19,pAVar20);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                        }
                        LOCK();
                        pAVar22 = *ppAVar17;
                        bVar11 = pAVar18 == pAVar22;
                        if (bVar11) {
                          *ppAVar17 = pAVar21;
                          pAVar22 = pAVar18;
                        }
                        UNLOCK();
                        pAVar21 = pAVar18;
                        if (!bVar11) {
                          pAVar21 = pAVar22;
                        }
                        if (iRam_? != 0) {
                          uVar12 = (uint)((ulonglong)ppAVar17 >> 0xc);
                          lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                            LOCK();
                            bVar11 = uVar14 == *puVar15;
                            if (bVar11) {
                              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar11);
                        }
                        bVar11 = pAVar21 != pAVar18;
                        pAVar18 = pAVar21;
                      } while (bVar11);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                         (pGVar3 = (pMVar2->fields).GameEventManager,
                         pGVar3 != (GameEventManager *)0x0)) {
                        pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                        pDVar16 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                        FUN_?(pDVar16,this);
                        if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Action<int>);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          ppAVar17 = &(pGVar4->fields).OnSpawnAtSafeSpot;
                          pAVar18 = (pGVar4->fields).OnSpawnAtSafeSpot;
                          do {
                            pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar18,pDVar16,(MethodInfo *)0x0);
                            pAVar20 = TypeInfo__System__Action<int>;
                            if (pDVar19 == (Delegate *)0x0) {
                              pAVar21 = (Action_1_Int32_ *)0x0;
                            }
                            else {
                              pAVar21 = (Action_1_Int32_ *)
                                        FUN_?(pDVar19,TypeInfo__System__Action<int>);
                              if (pAVar21 == (Action_1_Int32_ *)0x0) {
                                FUN_?(pDVar19,pAVar20);
                                pcVar10 = (code *)swi(3);
                                (*pcVar10)();
                                return;
                              }
                            }
                            LOCK();
                            pAVar22 = *ppAVar17;
                            bVar11 = pAVar18 == pAVar22;
                            if (bVar11) {
                              *ppAVar17 = pAVar21;
                              pAVar22 = pAVar18;
                            }
                            UNLOCK();
                            pAVar21 = pAVar18;
                            if (!bVar11) {
                              pAVar21 = pAVar22;
                            }
                            if (iRam_? != 0) {
                              uVar12 = (uint)((ulonglong)ppAVar17 >> 0xc);
                              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                LOCK();
                                bVar11 = uVar14 == *puVar15;
                                if (bVar11) {
                                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar11);
                            }
                            bVar11 = pAVar21 != pAVar18;
                            pAVar18 = pAVar21;
                          } while (bVar11);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                             (pGVar3 = (pMVar2->fields).GameEventManager,
                             pGVar3 != (GameEventManager *)0x0)) {
                            pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                      FUN_?(TypeInfo__System__Action);
                            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                            NavMesh_OnNavMeshPreUpdate__ctor
                                      (pNVar5,(Object *)this,
                                       MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                                       ,(MethodInfo *)0x0);
                            if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__System__Action);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              ppAVar6 = &(pGVar4->fields).OnReadyScreenShot;
                              pAVar7 = (pGVar4->fields).OnReadyScreenShot;
                              do {
                                pAVar8 = (Action *)
                                          mscorlib.dll::System::Delegate::Delegate_Combine
                                                    ((Delegate *)pAVar7,(Delegate *)pNVar5,
                                                     (MethodInfo *)0x0);
                                pAVar9 = (Action *)0x0;
                                if (pAVar8 != (Action *)0x0) {
                                  if (pAVar8->klass == TypeInfo__System__Action) {
                                    pAVar9 = pAVar8;
                                  }
                                  if (pAVar9 == (Action *)0x0) {
                                    FUN_?(pAVar8);
                                    pcVar10 = (code *)swi(3);
                                    (*pcVar10)();
                                    return;
                                  }
                                }
                                LOCK();
                                pAVar8 = *ppAVar6;
                                bVar11 = pAVar7 == pAVar8;
                                if (bVar11) {
                                  *ppAVar6 = pAVar9;
                                  pAVar8 = pAVar7;
                                }
                                UNLOCK();
                                pAVar9 = pAVar7;
                                if (!bVar11) {
                                  pAVar9 = pAVar8;
                                }
                                if (iRam_? != 0) {
                                  uVar12 = (uint)((ulonglong)ppAVar6 >> 0xc);
                                  lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                    puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                    LOCK();
                                    bVar11 = uVar14 == *puVar15;
                                    if (bVar11) {
                                      *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar11);
                                }
                                bVar11 = pAVar9 != pAVar7;
                                pAVar7 = pAVar9;
                              } while (bVar11);
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__MVGameControllerBase);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                              if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                  (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0))
                                 && (pGVar3 = (pMVar2->fields).GameEventManager,
                                    pGVar3 != (GameEventManager *)0x0)) {
                                pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                pUVar23 = (UnityAction_1_System_Int32Enum_ *)
                                          FUN_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`1[System::Int32Enum]::
                                UnityAction_1_System_Int32Enum___ctor
                                          (pUVar23,(Object *)this,
                                           MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                           ,(MethodInfo *)0x0);
                                if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0
                                   ) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Action<WinningConditionType>);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  ppAVar24 = &(pGVar4->fields).
                                             OnWinningConditionIntermediateDebriefing;
                                  a = (pGVar4->fields).OnWinningConditionIntermediateDebriefing;
                                  do {
                                    pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                        ((Delegate *)a,(Delegate *)pUVar23,
                                                         (MethodInfo *)0x0);
                                    pAVar25 = TypeInfo__System__Action<WinningConditionType>;
                                    if (pDVar16 == (Delegate *)0x0) {
                                      pAVar26 = (Action_1_WinningConditionType_ *)0x0;
                                    }
                                    else {
                                      pAVar26 = (Action_1_WinningConditionType_ *)
                                                FUN_?(pDVar16,
                                                  TypeInfo__System__Action<WinningConditionType>);
                                      if (pAVar26 == (Action_1_WinningConditionType_ *)0x0) {
                                        FUN_?(pDVar16,pAVar25);
                                        pcVar10 = (code *)swi(3);
                                        (*pcVar10)();
                                        return;
                                      }
                                    }
                                    LOCK();
                                    pAVar27 = *ppAVar24;
                                    bVar11 = a == pAVar27;
                                    if (bVar11) {
                                      *ppAVar24 = pAVar26;
                                      pAVar27 = a;
                                    }
                                    UNLOCK();
                                    pAVar26 = a;
                                    if (!bVar11) {
                                      pAVar26 = pAVar27;
                                    }
                                    if (iRam_? != 0) {
                                      uVar12 = (uint)((ulonglong)ppAVar24 >> 0xc);
                                      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                                      do {
                                        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                        LOCK();
                                        bVar11 = uVar14 == *puVar15;
                                        if (bVar11) {
                                          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar11);
                                    }
                                    bVar11 = pAVar26 != a;
                                    a = pAVar26;
                                  } while (bVar11);
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                      (pMVar2 = (pMVar1->fields).game,
                                      pMVar2 != (MVNetworkGame *)0x0)) &&
                                     (pGVar3 = (pMVar2->fields).GameEventManager,
                                     pGVar3 != (GameEventManager *)0x0)) {
                                    pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                              FUN_?(TypeInfo__System__Action);
                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                    NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                              (pNVar5,(Object *)this,
                                               MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                               ,(MethodInfo *)0x0);
                                    if (pGVar4 !=
                                        (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__System__Action);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      ppAVar6 = &(pGVar4->fields).OnRemoveFromGame;
                                      pAVar7 = (pGVar4->fields).OnRemoveFromGame;
                                      do {
                                        pAVar8 = (Action *)
                                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                                            ((Delegate *)pAVar7,(Delegate *)pNVar5
                                                             ,(MethodInfo *)0x0);
                                        pAVar9 = (Action *)0x0;
                                        if (pAVar8 != (Action *)0x0) {
                                          if (pAVar8->klass == TypeInfo__System__Action) {
                                            pAVar9 = pAVar8;
                                          }
                                          if (pAVar9 == (Action *)0x0) {
                                            FUN_?(pAVar8);
                                            pcVar10 = (code *)swi(3);
                                            (*pcVar10)();
                                            return;
                                          }
                                        }
                                        LOCK();
                                        pAVar8 = *ppAVar6;
                                        bVar11 = pAVar7 == pAVar8;
                                        if (bVar11) {
                                          *ppAVar6 = pAVar9;
                                          pAVar8 = pAVar7;
                                        }
                                        UNLOCK();
                                        pAVar9 = pAVar7;
                                        if (!bVar11) {
                                          pAVar9 = pAVar8;
                                        }
                                        if (iRam_? != 0) {
                                          uVar12 = (uint)((ulonglong)ppAVar6 >> 0xc);
                                          lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                                          do {
                                            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                            LOCK();
                                            bVar11 = uVar14 == *puVar15;
                                            if (bVar11) {
                                              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar11);
                                        }
                                        bVar11 = pAVar9 != pAVar7;
                                        pAVar7 = pAVar9;
                                      } while (bVar11);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__MVGameControllerBase);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->
                                               instance;
                                      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                          (pMVar2 = (pMVar1->fields).game,
                                          pMVar2 != (MVNetworkGame *)0x0)) &&
                                         (pGVar3 = (pMVar2->fields).GameEventManager,
                                         pGVar3 != (GameEventManager *)0x0)) {
                                        pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                  FUN_?(TypeInfo__System__Action);
                                        UnityEngine.AIModule.dll::UnityEngine::AI::
                                        NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                                  (pNVar5,(Object *)this,
                                                   MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                   (MethodInfo *)0x0);
                                        if (pGVar4 !=
                                            (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__System__Action);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          ppAVar6 = &(pGVar4->fields).OnSpawnAsGhost;
                                          pAVar7 = (pGVar4->fields).OnSpawnAsGhost;
                                          do {
                                            pAVar8 = (Action *)
                                                      mscorlib.dll::System::Delegate::
                                                      Delegate_Combine((Delegate *)pAVar7,
                                                                       (Delegate *)pNVar5,
                                                                       (MethodInfo *)0x0);
                                            pAVar9 = (Action *)0x0;
                                            if (pAVar8 != (Action *)0x0) {
                                              if (pAVar8->klass == TypeInfo__System__Action) {
                                                pAVar9 = pAVar8;
                                              }
                                              if (pAVar9 == (Action *)0x0) {
                                                FUN_?(pAVar8);
                                                pcVar10 = (code *)swi(3);
                                                (*pcVar10)();
                                                return;
                                              }
                                            }
                                            LOCK();
                                            pAVar8 = *ppAVar6;
                                            bVar11 = pAVar7 == pAVar8;
                                            if (bVar11) {
                                              *ppAVar6 = pAVar9;
                                              pAVar8 = pAVar7;
                                            }
                                            UNLOCK();
                                            pAVar9 = pAVar7;
                                            if (!bVar11) {
                                              pAVar9 = pAVar8;
                                            }
                                            if (iRam_? != 0) {
                                              uVar12 = (uint)((ulonglong)ppAVar6 >> 0xc);
                                              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                                LOCK();
                                                bVar11 = uVar14 == *puVar15;
                                                if (bVar11) {
                                                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar11);
                                            }
                                            bVar11 = pAVar9 != pAVar7;
                                            pAVar7 = pAVar9;
                                          } while (bVar11);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__MVGameControllerBase);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->
                                                   instance;
                                          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                              (pMVar2 = (pMVar1->fields).game,
                                              pMVar2 != (MVNetworkGame *)0x0)) &&
                                             (pGVar3 = (pMVar2->fields).GameEventManager,
                                             pGVar3 != (GameEventManager *)0x0)) {
                                            pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                      FUN_?(TypeInfo__System__Action);
                                            UnityEngine.AIModule.dll::UnityEngine::AI::
                                            NavMesh+OnNavMeshPreUpdate::
                                            NavMesh_OnNavMeshPreUpdate__ctor
                                                      (pNVar5,(Object *)this,
                                                       MethodInfo__MVAvatarLocal__OnSetToDeadMode__,
                                                       (MethodInfo *)0x0);
                                            if (pGVar4 !=
                                                (GameEventManager_AvatarCommandsPlayModeManager *)
                                                0x0) {
                                              if (cRam_? == '\0') {
                                                FUN_?(&TypeInfo__System__Action);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              ppAVar6 = &(pGVar4->fields).OnSetToDeadMode;
                                              pAVar7 = (pGVar4->fields).OnSetToDeadMode;
                                              do {
                                                pAVar8 = (Action *)
                                                          mscorlib.dll::System::Delegate::
                                                          Delegate_Combine((Delegate *)pAVar7,
                                                                           (Delegate *)pNVar5,
                                                                           (MethodInfo *)0x0);
                                                pAVar9 = (Action *)0x0;
                                                if (pAVar8 != (Action *)0x0) {
                                                  if (pAVar8->klass == TypeInfo__System__Action) {
                                                    pAVar9 = pAVar8;
                                                  }
                                                  if (pAVar9 == (Action *)0x0) {
                                                    FUN_?(pAVar8);
                                                    pcVar10 = (code *)swi(3);
                                                    (*pcVar10)();
                                                    return;
                                                  }
                                                }
                                                LOCK();
                                                pAVar8 = *ppAVar6;
                                                bVar11 = pAVar7 == pAVar8;
                                                if (bVar11) {
                                                  *ppAVar6 = pAVar9;
                                                  pAVar8 = pAVar7;
                                                }
                                                UNLOCK();
                                                pAVar9 = pAVar7;
                                                if (!bVar11) {
                                                  pAVar9 = pAVar8;
                                                }
                                                if (iRam_? != 0) {
                                                  uVar12 = (uint)((ulonglong)ppAVar6 >> 0xc);
                                                  lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                                    puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                                    LOCK();
                                                    bVar11 = uVar14 == *puVar15;
                                                    if (bVar11) {
                                                      *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar11);
                                                }
                                                bVar11 = pAVar9 != pAVar7;
                                                pAVar7 = pAVar9;
                                              } while (bVar11);
                                              if (cRam_? == '\0') {
                                                FUN_?(&TypeInfo__MVGameControllerBase);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pMVar1 = TypeInfo__MVGameControllerBase->static_fields
                                                       ->instance;
                                              if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                  (pMVar2 = (pMVar1->fields).game,
                                                  pMVar2 != (MVNetworkGame *)0x0)) &&
                                                 (pGVar3 = (pMVar2->fields).GameEventManager,
                                                 pGVar3 != (GameEventManager *)0x0)) {
                                                pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                                pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                          FUN_?(TypeInfo__System__Action);
                                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                                NavMesh+OnNavMeshPreUpdate::
                                                NavMesh_OnNavMeshPreUpdate__ctor
                                                          (pNVar5,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar4 !=
                                                    (GameEventManager_AvatarCommandsPlayModeManager
                                                     *)0x0) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__System__Action);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pAVar7 = (pGVar4->fields).OnRespawn;
                                                  do {
                                                    pAVar8 = (Action *)
                                                              mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)pAVar7,
                                                                               (Delegate *)pNVar5,
                                                                               (MethodInfo *)0x0);
                                                    pAVar9 = (Action *)0x0;
                                                    if (pAVar8 != (Action *)0x0) {
                                                      if (pAVar8->klass == TypeInfo__System__Action
                                                         ) {
                                                        pAVar9 = pAVar8;
                                                      }
                                                      if (pAVar9 == (Action *)0x0) {
                                                        FUN_?(pAVar8);
                                                        pcVar10 = (code *)swi(3);
                                                        (*pcVar10)();
                                                        return;
                                                      }
                                                    }
                                                    ppAVar6 = &(pGVar4->fields).OnRespawn;
                                                    LOCK();
                                                    pAVar8 = *ppAVar6;
                                                    bVar11 = pAVar7 == pAVar8;
                                                    if (bVar11) {
                                                      *ppAVar6 = pAVar9;
                                                      pAVar8 = pAVar7;
                                                    }
                                                    UNLOCK();
                                                    pAVar9 = pAVar7;
                                                    if (!bVar11) {
                                                      pAVar9 = pAVar8;
                                                    }
                                                    if (iRam_? != 0) {
                                                      uVar12 = (uint)((ulonglong)
                                                                      &(pGVar4->fields).OnRespawn
                                                                     >> 0xc);
                                                      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6)
                                                              * 8;
                                                      do {
                                                        uVar14 = *(ulonglong *)(lVar13 + 0xADDR)
                                                        ;
                                                        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                                        LOCK();
                                                        bVar11 = uVar14 == *puVar15;
                                                        if (bVar11) {
                                                          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar11);
                                                    }
                                                    bVar11 = pAVar9 != pAVar7;
                                                    pAVar7 = pAVar9;
                                                  } while (bVar11);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                       (pMVar2 = (pMVar1->fields).game,
                                                       pMVar2 != (MVNetworkGame *)0x0)) &&
                                                      (pGVar3 = (pMVar2->fields).GameEventManager,
                                                      pGVar3 != (GameEventManager *)0x0)) &&
                                                     (pGVar28 = (pGVar3->fields).GameState,
                                                     pGVar28 !=
                                                     (GameEventManager_GameStateManager *)0x0)) {
                                                    this_00 = (
                                                  SubscribableVariableBase_1_System_Single_ *)
                                                  (pGVar28->fields).gameStateType;
                                                  pUVar23 = (UnityAction_1_System_Int32Enum_ *)
                                                            FUN_?(
                                                  TypeInfo__System__Action<MV::Common::MVGameStateType>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Int32Enum]::
                                                  UnityAction_1_System_Int32Enum___ctor
                                                            (pUVar23,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                                                  ,(MethodInfo *)0x0);
                                                  if (this_00 !=
                                                      (SubscribableVariableBase_1_System_Single_ *)
                                                      0x0) {
                                                    SubscribableVariableBase`1[System::Single]::
                                                                                                        
                                                  SubscribableVariableBase_1_System_Single__add_OnChange
                                                            (this_00,(Action_1_Single_ *)pUVar23,
                                                                                                                          
                                                  MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__add_OnChange_System__Action<MV::Common::MVGameStateType>_
                                                  );
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                     (pMVar2 = (pMVar1->fields).game,
                                                     pMVar2 != (MVNetworkGame *)0x0)) {
                                                    pGVar3 = (pMVar2->fields).GameEventManager;
                                                    pUVar23 = (UnityAction_1_System_Int32Enum_ *)
                                                              FUN_?(
                                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Int32Enum]::
                                                  UnityAction_1_System_Int32Enum___ctor
                                                            (pUVar23,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar3 != (GameEventManager *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  ppAVar29 = &(pGVar3->fields).OnFirstTimeEvent;
                                                  a_00 = (pGVar3->fields).OnFirstTimeEvent;
                                                  do {
                                                    pDVar16 = mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)a_00,
                                                                               (Delegate *)pUVar23,
                                                                               (MethodInfo *)0x0);
                                                    pAVar30 = 
                                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                                  ;
                                                  if (pDVar16 == (Delegate *)0x0) {
                                                    pAVar31 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0;
                                                  }
                                                  else {
                                                    pAVar31 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )FUN_?(pDVar16,
                                                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                                  );
                                                  if (pAVar31 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pDVar16,pAVar30);
                                                    pcVar10 = (code *)swi(3);
                                                    (*pcVar10)();
                                                    return;
                                                  }
                                                  }
                                                  LOCK();
                                                  pAVar32 = *ppAVar29;
                                                  bVar11 = a_00 == pAVar32;
                                                  if (bVar11) {
                                                    *ppAVar29 = pAVar31;
                                                    pAVar32 = a_00;
                                                  }
                                                  UNLOCK();
                                                  pAVar31 = a_00;
                                                  if (!bVar11) {
                                                    pAVar31 = pAVar32;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar12 = (uint)((ulonglong)ppAVar29 >> 0xc);
                                                    lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                                      puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                                      LOCK();
                                                      bVar11 = uVar14 == *puVar15;
                                                      if (bVar11) {
                                                        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar11);
                                                  }
                                                  bVar11 = pAVar31 != a_00;
                                                  a_00 = pAVar31;
                                                  } while (bVar11);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                     (pMVar2 = (pMVar1->fields).game,
                                                     pMVar2 != (MVNetworkGame *)0x0)) {
                                                    pGVar3 = (pMVar2->fields).GameEventManager;
                                                    pDVar16 = (Delegate *)
                                                              FUN_?(
                                                  TypeInfo__System__Action<int>);
                                                  FUN_?(pDVar16,this);
                                                  if (pGVar3 != (GameEventManager *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__System__Action<int>);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pAVar18 = (pGVar3->fields).OnXPRewarded;
                                                    do {
                                                      pDVar19 = mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)pAVar18
                                                                                 ,pDVar16,(
                                                  MethodInfo *)0x0);
                                                  pAVar20 = TypeInfo__System__Action<int>;
                                                  if (pDVar19 == (Delegate *)0x0) {
                                                    pAVar21 = (Action_1_Int32_ *)0x0;
                                                  }
                                                  else {
                                                    pAVar21 = (Action_1_Int32_ *)
                                                              FUN_?(pDVar19,
                                                  TypeInfo__System__Action<int>);
                                                  if (pAVar21 == (Action_1_Int32_ *)0x0) {
                                                    FUN_?(pDVar19,pAVar20);
                                                    pcVar10 = (code *)swi(3);
                                                    (*pcVar10)();
                                                    return;
                                                  }
                                                  }
                                                  ppAVar17 = &(pGVar3->fields).OnXPRewarded;
                                                  LOCK();
                                                  pAVar22 = *ppAVar17;
                                                  bVar11 = pAVar18 == pAVar22;
                                                  if (bVar11) {
                                                    *ppAVar17 = pAVar21;
                                                    pAVar22 = pAVar18;
                                                  }
                                                  UNLOCK();
                                                  pAVar21 = pAVar18;
                                                  if (!bVar11) {
                                                    pAVar21 = pAVar22;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar12 = (uint)((ulonglong)
                                                                    &(pGVar3->fields).OnXPRewarded
                                                                   >> 0xc);
                                                    lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                                                      puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                                                      LOCK();
                                                      bVar11 = uVar14 == *puVar15;
                                                      if (bVar11) {
                                                        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar11);
                                                  }
                                                  bVar11 = pAVar21 != pAVar18;
                                                  pAVar18 = pAVar21;
                                                  } while (bVar11);
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Suicide() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_Suicide
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.SpawnRoleModeTypes;
  if ((pMVar1 == (MVRuntimeDataVariable *)0x0) ||
     (pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0), pOVar2 == (Object *)0x0))
  goto code_?;
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2,lRam_?);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((ulonglong)pOVar2[1].klass & 2) == 0) {
    pAVar4 = (this->fields).interactableLocal;
    if (pAVar4 == (AvatarInteractable *)0x0) goto code_?;
    pAVar5 = AvatarInteractable::AvatarInteractable_get_LastDamageSource(pAVar4,(MethodInfo *)0x0);
    if (pAVar5 != (AvatarInteractable_DamageSource *)0x0) {
      pAVar4 = (this->fields).interactableLocal;
      if ((pAVar4 == (AvatarInteractable *)0x0) ||
         (pAVar5 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                              (pAVar4,(MethodInfo *)0x0),
         pAVar5 == (AvatarInteractable_DamageSource *)0x0)) goto code_?;
      bVar6 = AvatarInteractable+DamageSource::AvatarInteractable_DamageSource_get_Outdated
                        (pAVar5,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        pAVar4 = (this->fields).interactableLocal;
        if ((pAVar4 != (AvatarInteractable *)0x0) &&
           (pAVar5 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                (pAVar4,(MethodInfo *)0x0),
           pAVar5 != (AvatarInteractable_DamageSource *)0x0)) {
          this_00 = (this->fields).interactableLocal;
          damageDealer = (pAVar5->fields).shooter;
          if ((this_00 != (AvatarInteractable *)0x0) &&
             (pAVar5 = AvatarInteractable::AvatarInteractable_get_LastDamageSource
                                  (this_00,(MethodInfo *)0x0),
             pAVar5 != (AvatarInteractable_DamageSource *)0x0)) {
            pMVar7 = (pAVar4->fields)._.health;
            bVar8 = (pAVar5->fields).damageType;
            if (pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              uVar9 = (*(pMVar7->klass->vtable).get_Value.methodPtr)
                                 (pMVar7,(pMVar7->klass->vtable).get_Value.method);
              pMVar7 = (pAVar4->fields)._.health;
              if (pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                (*(pMVar7->klass->vtable).set_Value.methodPtr)
                          (pMVar7,0,(pMVar7->klass->vtable).set_Value.method);
                pAVar10 = (pAVar4->fields).OnDamageTaken;
                if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar10->fields)._._.invoke_impl)
                            ((pAVar10->fields)._._.method_code,uVar9,damageDealer,bVar8,
                             (pAVar10->fields)._._.method);
                }
                AvatarInteractable::AvatarInteractable_DoKilledNotification
                          (pAVar4,damageDealer,(uint)bVar8,(MethodInfo *)0x0);
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
      (*(pAVar11->fields)._._.invoke_impl)
                ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
      if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0;
      if (this_01 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
        if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
        this_01 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                  FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__MVAvatarLocal____c___Suicide_b__129_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   ,(MethodInfo *)0x0);
        TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0 = this_01;
        func_?(&TypeInfo__MVAvatarLocal____c->static_fields->__9__129_0);
      }
      if ((this->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
        if (this_01 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(this_01->fields)._._.invoke_impl)
                  ((this_01->fields)._._.method_code,(this->fields).spawnRoleDataReceiver,
                   (this_01->fields)._._.method);
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Already_suspended);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).suspended != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Already_suspended;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->fields).suspended = 1;
  bVar4 = MVAvatarLocal_get_IsInVehicle(this,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    MVAvatarLocal_LeaveVehicle(this,0,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar5 != (MVGameControllerBase *)0x0) &&
     (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
    pTVar7 = (pMVar6->fields).transformNetworkManager;
    iVar8 = (this->fields)._._._._.id;
    if (pTVar7 != (TransformNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pTVar7->fields).networkedObjects;
      if (this_00 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                  );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar5 != (MVGameControllerBase *)0x0) &&
            (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
           (pRVar9 = (pMVar6->fields).runtimeVariableNetworkManager,
           pRVar9 != (RuntimeVariableNetworkManager *)0x0)) {
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                    (pRVar9,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar5 != (MVGameControllerBase *)0x0) &&
              (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
             (pRVar9 = (pMVar6->fields).runtimeVariableNetworkManager,
             pRVar9 != (RuntimeVariableNetworkManager *)0x0)) {
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
            this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar9->fields).runtimeDataVariables;
            if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
              bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                       HashSet_1_System_Int32Enum__Contains
                                 (this_01,item,
                                  MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                 );
              pMVar10 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
              if (bVar4 == 0) {
                uVar11 = func_?(&TypeInfo__System__Exception);
                this_02 = (Exception *)func_?(uVar11);
                pSVar1 = (String *)func_?(&StringLiteral_wo_Id_not_found);
                mscorlib.dll::System::Exception::Exception__ctor_1
                          (this_02,pSVar1,(MethodInfo *)0x0);
                uVar11 = func_?(&
                                             MethodInfo__RuntimeVariableNetworkManager__RemoveRuntimeDataVariables_int_
                                            );
                FUN_?(this_02,uVar11);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pHVar12 = (pRVar9->fields).runtimeDataVariables;
              if (pHVar12 != (HashSet_1_System_Int32_ *)0x0) {
                if ((pHVar12->fields)._buckets != (Int32__Array *)0x0) {
                  iVar13 = FUN_?(pHVar12,item,
                                         MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_
                                         ->klass->rgctx_data[0x16].rgctxDataDummy);
                  pIVar14 = (pHVar12->fields)._buckets;
                  if (pIVar14 == (Int32__Array *)0x0) {
code_?:
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pHVar15 = (pHVar12->fields)._slots;
                  uVar16 = iVar13 % (int)pIVar14->max_length;
                  if ((uint)pIVar14->max_length <= uVar16) {
code_?:
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar17 = pIVar14->vector[(int)uVar16] - 1;
                  if (-1 < (int)uVar17) {
                    iVar18 = 0;
                    uVar19 = 0xffffffff;
                    if (pHVar15 == (HashSet_1_T_Slot_System_Int32___Array *)0x0)
                    goto code_?;
                    do {
                      uVar20 = uVar17;
                      if ((uint)pHVar15->max_length <= uVar20) goto code_?;
                      if (pHVar15->vector[(int)uVar20].hashCode == iVar13) {
                        pIVar21 = (pHVar12->fields)._comparer;
                        iVar8 = pHVar15->vector[(int)uVar20].value;
                        if (pIVar21 == (IEqualityComparer_1_System_Int32_ *)0x0)
                        goto code_?;
                        pvVar22 = pMVar10->klass->rgctx_data[4].rgctxDataDummy;
                        if ((*(byte *)((longlong)pvVar22 + 0x135) & 1) == 0) {
                          pvVar22 = (void *)FUN_?(pvVar22);
                        }
                        cVar23 = FUN_?(item,pvVar22,pIVar21,iVar8,item);
                        if (cVar23 != '\0') {
                          if ((int)uVar19 < 0) {
                            pIVar14 = (pHVar12->fields)._buckets;
                            if ((uint)pHVar15->max_length <= uVar20) goto code_?;
                            if (pIVar14 == (Int32__Array *)0x0) goto code_?;
                            if ((uint)pIVar14->max_length <= uVar16) goto code_?;
                            pIVar14->vector[(int)uVar16] = pHVar15->vector[(int)uVar20].next + 1;
                          }
                          else {
                            if (((uint)pHVar15->max_length <= uVar20) ||
                               ((uint)pHVar15->max_length <= uVar19)) goto code_?;
                            pHVar15->vector[(int)uVar19].next = pHVar15->vector[(int)uVar20].next;
                          }
                          if (uVar20 < (uint)pHVar15->max_length) {
                            pHVar15->vector[(int)uVar20].hashCode = -1;
                            if (uVar20 < (uint)pHVar15->max_length) {
                              pHVar15->vector[(int)uVar20].next = (pHVar12->fields)._freeList;
                              piVar24 = &(pHVar12->fields)._version;
                              *piVar24 = *piVar24 + 1;
                              iVar13 = (pHVar12->fields)._count + -1;
                              (pHVar12->fields)._count = iVar13;
                              if (iVar13 == 0) {
                                (pHVar12->fields)._lastIndex = 0;
                                uVar20 = 0xffffffff;
                              }
                              (pHVar12->fields)._freeList = uVar20;
                              return;
                            }
                          }
                          goto code_?;
                        }
                      }
                      if ((int)pHVar15->max_length <= iVar18) {
                        uVar11 = func_?(&TypeInfo__System__InvalidOperationException);
                        this_03 = (ProtocolViolationException *)func_?(uVar11);
                        pSVar1 = (String *)
                                  func_?(&
                                                  StringLiteral_Operations_that_change_non_concu);
                        System.dll::System::Net::ProtocolViolationException::
                        ProtocolViolationException__ctor_1(this_03,pSVar1,(MethodInfo *)0x0);
                        FUN_?(this_03,pMVar10);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      iVar18 = iVar18 + 1;
                      if ((uint)pHVar15->max_length <= uVar20) goto code_?;
                      uVar17 = pHVar15->vector[(int)uVar20].next;
                      uVar19 = uVar20;
                    } while (-1 < (int)uVar17);
                  }
                }
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSuspend() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UnSuspend
               (MVAvatarLocal *this,MethodInfo *method)

{
  (this->fields).suspended = 0;
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


/* Void UnsubscribeFromExternalEvents() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UnsubscribeFromExternalEvents
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MV::Common::MVGameStateType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<WinningConditionType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnMoveBodyToSafeSpot_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsOnSpawnAtSafeSpot_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__GameEventManagerOnOnXpRewarded_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__KillSelf__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__OnSetToDeadMode__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__remove_OnChange_System__Action<MV::Common::MVGameStateType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
    pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__MVAvatarLocal__KillSelf__,(MethodInfo *)0x0);
    if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
                (pGVar4,(Action *)pNVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
        pGVar3 = (pMVar2->fields).GameEventManager;
        pUVar6 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar6,(Object *)this,
                   MethodInfo__MVAvatarLocal__GameEventManagerOnOnFirstTimeEvent_MV__WorldObject__MetaData__FirstTimeEvent_
                   ,(MethodInfo *)0x0);
        if (pGVar3 != (GameEventManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          ppAVar7 = &(pGVar3->fields).OnFirstTimeEvent;
          pAVar8 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
          pAVar9 = (pGVar3->fields).OnFirstTimeEvent;
          do {
            pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar9,(Delegate *)pUVar6,(MethodInfo *)0x0);
            pAVar11 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
            pAVar12 = pAVar8;
            if ((pDVar10 != (Delegate *)0x0) &&
               (pAVar12 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                          FUN_?(pDVar10,
                                        TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>
                                       ),
               pAVar12 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
              FUN_?(pDVar10,pAVar11);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            LOCK();
            pAVar14 = *ppAVar7;
            bVar15 = pAVar9 == pAVar14;
            if (bVar15) {
              *ppAVar7 = pAVar12;
              pAVar14 = pAVar9;
            }
            UNLOCK();
            pAVar12 = pAVar9;
            if (!bVar15) {
              pAVar12 = pAVar14;
            }
            if (iRam_? != 0) {
              uVar16 = (uint)((ulonglong)ppAVar7 >> 0xc);
              lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
              do {
                uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                LOCK();
                bVar15 = uVar18 == *puVar19;
                if (bVar15) {
                  *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                }
                UNLOCK();
              } while (!bVar15);
            }
            bVar15 = pAVar12 != pAVar9;
            pAVar9 = pAVar12;
          } while (bVar15);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
            pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,MethodInfo__MVAvatarLocal__OnSetRespawnWhenPossible__,
                       (MethodInfo *)0x0);
            if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pAVar20 = (pGVar4->fields).OnSetRespawnWhenPossible;
              do {
                pAVar12 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                          mscorlib.dll::System::Delegate::Delegate_Remove
                                    ((Delegate *)pAVar20,(Delegate *)pNVar5,(MethodInfo *)0x0);
                pAVar9 = pAVar8;
                if (pAVar12 != (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
                  if (pAVar12->klass ==
                      (Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class *)
                      TypeInfo__System__Action) {
                    pAVar9 = pAVar12;
                  }
                  if (pAVar9 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
                    FUN_?(pAVar12);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                }
                ppAVar21 = &(pGVar4->fields).OnSetRespawnWhenPossible;
                LOCK();
                pAVar22 = *ppAVar21;
                bVar15 = pAVar20 == pAVar22;
                if (bVar15) {
                  *ppAVar21 = (Action *)pAVar9;
                  pAVar22 = pAVar20;
                }
                UNLOCK();
                pAVar23 = pAVar20;
                if (!bVar15) {
                  pAVar23 = pAVar22;
                }
                if (iRam_? != 0) {
                  uVar16 = (uint)((ulonglong)&(pGVar4->fields).OnSetRespawnWhenPossible >> 0xc);
                  lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                    puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                    LOCK();
                    bVar15 = uVar18 == *puVar19;
                    if (bVar15) {
                      *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar15);
                }
                bVar15 = pAVar23 != pAVar20;
                pAVar20 = pAVar23;
              } while (bVar15);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                 (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
                pGVar3 = (pMVar2->fields).GameEventManager;
                pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                FUN_?(pDVar10,this);
                if (pGVar3 != (GameEventManager *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Action<int>);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  ppAVar24 = &(pGVar3->fields).OnXPRewarded;
                  pAVar25 = (pGVar3->fields).OnXPRewarded;
                  do {
                    pDVar26 = mscorlib.dll::System::Delegate::Delegate_Remove
                                        ((Delegate *)pAVar25,pDVar10,(MethodInfo *)0x0);
                    pAVar27 = TypeInfo__System__Action<int>;
                    pAVar9 = pAVar8;
                    if ((pDVar26 != (Delegate *)0x0) &&
                       (pAVar9 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                                  FUN_?(pDVar26,TypeInfo__System__Action<int>),
                       pAVar9 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
                      FUN_?(pDVar26,pAVar27);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    LOCK();
                    pAVar28 = *ppAVar24;
                    bVar15 = pAVar25 == pAVar28;
                    if (bVar15) {
                      *ppAVar24 = (Action_1_Int32_ *)pAVar9;
                      pAVar28 = pAVar25;
                    }
                    UNLOCK();
                    pAVar29 = pAVar25;
                    if (!bVar15) {
                      pAVar29 = pAVar28;
                    }
                    if (iRam_? != 0) {
                      uVar16 = (uint)((ulonglong)ppAVar24 >> 0xc);
                      lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                        puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                        LOCK();
                        bVar15 = uVar18 == *puVar19;
                        if (bVar15) {
                          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar15);
                    }
                    bVar15 = pAVar29 != pAVar25;
                    pAVar25 = pAVar29;
                  } while (bVar15);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
                       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                      (pGVar3 = (pMVar2->fields).GameEventManager,
                      pGVar3 != (GameEventManager *)0x0)) &&
                     (pGVar30 = (pGVar3->fields).GameState,
                     pGVar30 != (GameEventManager_GameStateManager *)0x0)) {
                    pGVar31 = (pGVar30->fields).gameStateType;
                    pUVar6 = (UnityAction_1_System_Int32Enum_ *)
                              FUN_?(TypeInfo__System__Action<MV::Common::MVGameStateType>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                    Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                              (pUVar6,(Object *)this,
                               MethodInfo__MVAvatarLocal__GameStateTypeOnOnChange_MV__Common__MVGameStateType_
                               ,(MethodInfo *)0x0);
                    pMVar32 = 
                    MethodInfo__SubscribableVariableBase<MV::Common::MVGameStateType>__remove_OnChange_System__Action<MV::Common::MVGameStateType>_
                    ;
                    if (pGVar31 !=
                        (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_
                         *)0x0) {
                      ppAVar33 = &(pGVar31->fields)._.OnChange;
                      source_00 = (pGVar31->fields)._.OnChange;
                      do {
                        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                                            ((Delegate *)source_00,(Delegate *)pUVar6,
                                             (MethodInfo *)0x0);
                        pvVar34 = pMVar32->klass->rgctx_data[7].rgctxDataDummy;
                        if ((*(byte *)((longlong)pvVar34 + 0x135) & 1) == 0) {
                          pvVar34 = (void *)FUN_?(pvVar34);
                        }
                        pAVar9 = pAVar8;
                        if ((pDVar10 != (Delegate *)0x0) &&
                           (pAVar9 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                                      FUN_?(pDVar10,pvVar34),
                           pAVar9 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
                          FUN_?(pDVar10,pvVar34);
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        LOCK();
                        pAVar35 = *ppAVar33;
                        bVar15 = source_00 == pAVar35;
                        if (bVar15) {
                          *ppAVar33 = (Action_1_MV_Common_MVGameStateType_ *)pAVar9;
                          pAVar35 = source_00;
                        }
                        UNLOCK();
                        pAVar36 = source_00;
                        if (!bVar15) {
                          pAVar36 = pAVar35;
                        }
                        if (iRam_? != 0) {
                          uVar16 = (uint)((ulonglong)ppAVar33 >> 0xc);
                          lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                            puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                            LOCK();
                            bVar15 = uVar18 == *puVar19;
                            if (bVar15) {
                              *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar15);
                        }
                        bVar15 = pAVar36 != source_00;
                        source_00 = pAVar36;
                      } while (bVar15);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                         (pGVar3 = (pMVar2->fields).GameEventManager,
                         pGVar3 != (GameEventManager *)0x0)) {
                        pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                  FUN_?(TypeInfo__System__Action);
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (pNVar5,(Object *)this,
                                   MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnReadyScreenShot__
                                   ,(MethodInfo *)0x0);
                        if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Action);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pAVar20 = (pGVar4->fields).OnReadyScreenShot;
                          do {
                            pAVar12 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                                      mscorlib.dll::System::Delegate::Delegate_Remove
                                                ((Delegate *)pAVar20,(Delegate *)pNVar5,
                                                 (MethodInfo *)0x0);
                            pAVar9 = pAVar8;
                            if (pAVar12 != (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
                            {
                              if (pAVar12->klass ==
                                  (Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class *)
                                  TypeInfo__System__Action) {
                                pAVar9 = pAVar12;
                              }
                              if (pAVar9 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0
                                 ) {
                                FUN_?(pAVar12);
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                            }
                            ppAVar21 = &(pGVar4->fields).OnReadyScreenShot;
                            LOCK();
                            pAVar22 = *ppAVar21;
                            bVar15 = pAVar20 == pAVar22;
                            if (bVar15) {
                              *ppAVar21 = (Action *)pAVar9;
                              pAVar22 = pAVar20;
                            }
                            UNLOCK();
                            pAVar23 = pAVar20;
                            if (!bVar15) {
                              pAVar23 = pAVar22;
                            }
                            if (iRam_? != 0) {
                              uVar16 = (uint)((ulonglong)&(pGVar4->fields).OnReadyScreenShot >> 0xc
                                             );
                              lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                LOCK();
                                bVar15 = uVar18 == *puVar19;
                                if (bVar15) {
                                  *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar15);
                            }
                            bVar15 = pAVar23 != pAVar20;
                            pAVar20 = pAVar23;
                          } while (bVar15);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                             (pGVar3 = (pMVar2->fields).GameEventManager,
                             pGVar3 != (GameEventManager *)0x0)) {
                            pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                            pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                            FUN_?(pDVar10,this);
                            if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__System__Action<int>);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              ppAVar24 = &(pGVar4->fields).OnMoveBodyToSafeSpot;
                              pAVar25 = (pGVar4->fields).OnMoveBodyToSafeSpot;
                              do {
                                pDVar26 = mscorlib.dll::System::Delegate::Delegate_Remove
                                                    ((Delegate *)pAVar25,pDVar10,(MethodInfo *)0x0);
                                pAVar27 = TypeInfo__System__Action<int>;
                                pAVar9 = pAVar8;
                                if ((pDVar26 != (Delegate *)0x0) &&
                                   (pAVar9 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                                              FUN_?(pDVar26,TypeInfo__System__Action<int>),
                                   pAVar9 ==
                                   (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
                                  FUN_?(pDVar26,pAVar27);
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                LOCK();
                                pAVar28 = *ppAVar24;
                                bVar15 = pAVar25 == pAVar28;
                                if (bVar15) {
                                  *ppAVar24 = (Action_1_Int32_ *)pAVar9;
                                  pAVar28 = pAVar25;
                                }
                                UNLOCK();
                                pAVar29 = pAVar25;
                                if (!bVar15) {
                                  pAVar29 = pAVar28;
                                }
                                if (iRam_? != 0) {
                                  uVar16 = (uint)((ulonglong)ppAVar24 >> 0xc);
                                  lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                    puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                    LOCK();
                                    bVar15 = uVar18 == *puVar19;
                                    if (bVar15) {
                                      *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar15);
                                }
                                bVar15 = pAVar29 != pAVar25;
                                pAVar25 = pAVar29;
                              } while (bVar15);
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__MVGameControllerBase);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                              if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                  (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0))
                                 && (pGVar3 = (pMVar2->fields).GameEventManager,
                                    pGVar3 != (GameEventManager *)0x0)) {
                                pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                                FUN_?(pDVar10,this);
                                if (pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0
                                   ) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Action<int>);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  ppAVar24 = &(pGVar4->fields).OnSpawnAtSafeSpot;
                                  pAVar25 = (pGVar4->fields).OnSpawnAtSafeSpot;
                                  do {
                                    pDVar26 = mscorlib.dll::System::Delegate::Delegate_Remove
                                                        ((Delegate *)pAVar25,pDVar10,
                                                         (MethodInfo *)0x0);
                                    pAVar27 = TypeInfo__System__Action<int>;
                                    pAVar9 = pAVar8;
                                    if ((pDVar26 != (Delegate *)0x0) &&
                                       (pAVar9 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_
                                                   *)FUN_?(pDVar26,
                                                  TypeInfo__System__Action<int>),
                                       pAVar9 ==
                                       (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
                                      FUN_?(pDVar26,pAVar27);
                                      pcVar13 = (code *)swi(3);
                                      (*pcVar13)();
                                      return;
                                    }
                                    LOCK();
                                    pAVar28 = *ppAVar24;
                                    bVar15 = pAVar25 == pAVar28;
                                    if (bVar15) {
                                      *ppAVar24 = (Action_1_Int32_ *)pAVar9;
                                      pAVar28 = pAVar25;
                                    }
                                    UNLOCK();
                                    pAVar29 = pAVar25;
                                    if (!bVar15) {
                                      pAVar29 = pAVar28;
                                    }
                                    if (iRam_? != 0) {
                                      uVar16 = (uint)((ulonglong)ppAVar24 >> 0xc);
                                      lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                                      do {
                                        uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                        puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                        LOCK();
                                        bVar15 = uVar18 == *puVar19;
                                        if (bVar15) {
                                          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar15);
                                    }
                                    bVar15 = pAVar29 != pAVar25;
                                    pAVar25 = pAVar29;
                                  } while (bVar15);
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                      (pMVar2 = (pMVar1->fields).game,
                                      pMVar2 != (MVNetworkGame *)0x0)) &&
                                     (pGVar3 = (pMVar2->fields).GameEventManager,
                                     pGVar3 != (GameEventManager *)0x0)) {
                                    pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                              FUN_?(TypeInfo__System__Action);
                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                    NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                              (pNVar5,(Object *)this,
                                               MethodInfo__MVAvatarLocal__AvatarCommandsOnRespawn__,
                                               (MethodInfo *)0x0);
                                    if (pGVar4 !=
                                        (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__System__Action);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pAVar20 = (pGVar4->fields).OnRespawn;
                                      do {
                                        pAVar12 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_
                                                   *)mscorlib.dll::System::Delegate::Delegate_Remove
                                                               ((Delegate *)pAVar20,
                                                                (Delegate *)pNVar5,
                                                                (MethodInfo *)0x0);
                                        pAVar9 = pAVar8;
                                        if (pAVar12 !=
                                            (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
                                        {
                                          if (pAVar12->klass ==
                                              (Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                               *)TypeInfo__System__Action) {
                                            pAVar9 = pAVar12;
                                          }
                                          if (pAVar9 ==
                                              (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                                              0x0) {
                                            FUN_?(pAVar12);
                                            pcVar13 = (code *)swi(3);
                                            (*pcVar13)();
                                            return;
                                          }
                                        }
                                        ppAVar21 = &(pGVar4->fields).OnRespawn;
                                        LOCK();
                                        pAVar22 = *ppAVar21;
                                        bVar15 = pAVar20 == pAVar22;
                                        if (bVar15) {
                                          *ppAVar21 = (Action *)pAVar9;
                                          pAVar22 = pAVar20;
                                        }
                                        UNLOCK();
                                        pAVar23 = pAVar20;
                                        if (!bVar15) {
                                          pAVar23 = pAVar22;
                                        }
                                        if (iRam_? != 0) {
                                          uVar16 = (uint)((ulonglong)&(pGVar4->fields).OnRespawn >>
                                                         0xc);
                                          lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                                          do {
                                            uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                            puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                            LOCK();
                                            bVar15 = uVar18 == *puVar19;
                                            if (bVar15) {
                                              *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar15);
                                        }
                                        bVar15 = pAVar23 != pAVar20;
                                        pAVar20 = pAVar23;
                                      } while (bVar15);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__MVGameControllerBase);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->
                                               instance;
                                      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                          (pMVar2 = (pMVar1->fields).game,
                                          pMVar2 != (MVNetworkGame *)0x0)) &&
                                         (pGVar3 = (pMVar2->fields).GameEventManager,
                                         pGVar3 != (GameEventManager *)0x0)) {
                                        pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                  FUN_?(TypeInfo__System__Action);
                                        UnityEngine.AIModule.dll::UnityEngine::AI::
                                        NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                                  (pNVar5,(Object *)this,
                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnSpawn__
                                                  ,(MethodInfo *)0x0);
                                        if (pGVar4 !=
                                            (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                                          GameEventManager+AvatarCommandsPlayModeManager::
                                          GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
                                                    (pGVar4,(Action *)pNVar5,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__MVGameControllerBase);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->
                                                   instance;
                                          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                              (pMVar2 = (pMVar1->fields).game,
                                              pMVar2 != (MVNetworkGame *)0x0)) &&
                                             (pGVar3 = (pMVar2->fields).GameEventManager,
                                             pGVar3 != (GameEventManager *)0x0)) {
                                            pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                      FUN_?(TypeInfo__System__Action);
                                            UnityEngine.AIModule.dll::UnityEngine::AI::
                                            NavMesh+OnNavMeshPreUpdate::
                                            NavMesh_OnNavMeshPreUpdate__ctor
                                                      (pNVar5,(Object *)this,
                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsOnSetToSpawnPoint__
                                                  ,(MethodInfo *)0x0);
                                            if (pGVar4 !=
                                                (GameEventManager_AvatarCommandsPlayModeManager *)
                                                0x0) {
                                              if (cRam_? == '\0') {
                                                FUN_?(&TypeInfo__System__Action);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pAVar20 = (pGVar4->fields).OnSetToSpawnPoint;
                                              do {
                                                pAVar12 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )mscorlib.dll::System::Delegate::Delegate_Remove
                                                             ((Delegate *)pAVar20,
                                                              (Delegate *)pNVar5,(MethodInfo *)0x0)
                                                ;
                                                pAVar9 = pAVar8;
                                                if (pAVar12 !=
                                                    (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                  if (pAVar12->klass ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                                  *)TypeInfo__System__Action) {
                                                    pAVar9 = pAVar12;
                                                  }
                                                  if (pAVar9 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pAVar12);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                }
                                                ppAVar21 = &(pGVar4->fields).OnSetToSpawnPoint;
                                                LOCK();
                                                pAVar22 = *ppAVar21;
                                                bVar15 = pAVar20 == pAVar22;
                                                if (bVar15) {
                                                  *ppAVar21 = (Action *)pAVar9;
                                                  pAVar22 = pAVar20;
                                                }
                                                UNLOCK();
                                                pAVar23 = pAVar20;
                                                if (!bVar15) {
                                                  pAVar23 = pAVar22;
                                                }
                                                if (iRam_? != 0) {
                                                  uVar16 = (uint)((ulonglong)
                                                                  &(pGVar4->fields).
                                                                   OnSetToSpawnPoint >> 0xc);
                                                  lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                                    puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                                    LOCK();
                                                    bVar15 = uVar18 == *puVar19;
                                                    if (bVar15) {
                                                      *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar15);
                                                }
                                                bVar15 = pAVar23 != pAVar20;
                                                pAVar20 = pAVar23;
                                              } while (bVar15);
                                              if (cRam_? == '\0') {
                                                FUN_?(&TypeInfo__MVGameControllerBase);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pMVar1 = TypeInfo__MVGameControllerBase->static_fields
                                                       ->instance;
                                              if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                  (pMVar2 = (pMVar1->fields).game,
                                                  pMVar2 != (MVNetworkGame *)0x0)) &&
                                                 (pGVar3 = (pMVar2->fields).GameEventManager,
                                                 pGVar3 != (GameEventManager *)0x0)) {
                                                pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode;
                                                pUVar6 = (UnityAction_1_System_Int32Enum_ *)
                                                          FUN_?(
                                                  TypeInfo__System__Action<WinningConditionType>);
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Int32Enum]::
                                                UnityAction_1_System_Int32Enum___ctor
                                                          (pUVar6,(Object *)this,
                                                                                                                      
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing_WinningConditionType_
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar4 !=
                                                    (GameEventManager_AvatarCommandsPlayModeManager
                                                     *)0x0) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  TypeInfo__System__Action<WinningConditionType>);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  source = (pGVar4->fields).
                                                           OnWinningConditionIntermediateDebriefing;
                                                  do {
                                                    pDVar10 = mscorlib.dll::System::Delegate::
                                                              Delegate_Remove((Delegate *)source,
                                                                              (Delegate *)pUVar6,
                                                                              (MethodInfo *)0x0);
                                                    pAVar37 = 
                                                  TypeInfo__System__Action<WinningConditionType>;
                                                  pAVar9 = pAVar8;
                                                  if ((pDVar10 != (Delegate *)0x0) &&
                                                     (pAVar9 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )FUN_?(pDVar10,
                                                  TypeInfo__System__Action<WinningConditionType>),
                                                  pAVar9 ==
                                                  (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_
                                                   *)0x0)) {
                                                    FUN_?(pDVar10,pAVar37);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  ppAVar38 = &(pGVar4->fields).
                                                                                                                          
                                                  OnWinningConditionIntermediateDebriefing;
                                                  LOCK();
                                                  pAVar39 = *ppAVar38;
                                                  bVar15 = source == pAVar39;
                                                  if (bVar15) {
                                                    *ppAVar38 = (Action_1_WinningConditionType_ *)
                                                               pAVar9;
                                                    pAVar39 = source;
                                                  }
                                                  UNLOCK();
                                                  pAVar40 = source;
                                                  if (!bVar15) {
                                                    pAVar40 = pAVar39;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar16 = (uint)((ulonglong)
                                                                    &(pGVar4->fields).
                                                                                                                                          
                                                  OnWinningConditionIntermediateDebriefing >> 0xc);
                                                  lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                                    puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                                    LOCK();
                                                    bVar15 = uVar18 == *puVar19;
                                                    if (bVar15) {
                                                      *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar15);
                                                  }
                                                  bVar15 = pAVar40 != source;
                                                  source = pAVar40;
                                                  } while (bVar15);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                      (pMVar2 = (pMVar1->fields).game,
                                                      pMVar2 != (MVNetworkGame *)0x0)) &&
                                                     (pGVar3 = (pMVar2->fields).GameEventManager,
                                                     pGVar3 != (GameEventManager *)0x0)) {
                                                    pGVar4 = (pGVar3->fields).
                                                              AvatarCommandsPlayMode;
                                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(TypeInfo__System__Action
                                                                           );
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar5,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__AvatarCommandsPlayModeOnOnRemoveFromGame__
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar4 !=
                                                      (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__System__Action);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pAVar20 = (pGVar4->fields).OnRemoveFromGame;
                                                    do {
                                                      pAVar12 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )mscorlib.dll::System::Delegate::Delegate_Remove
                                                             ((Delegate *)pAVar20,
                                                              (Delegate *)pNVar5,(MethodInfo *)0x0)
                                                  ;
                                                  pAVar9 = pAVar8;
                                                  if (pAVar12 !=
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    if (pAVar12->klass ==
                                                        (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                                  *)TypeInfo__System__Action) {
                                                    pAVar9 = pAVar12;
                                                  }
                                                  if (pAVar9 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pAVar12);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  }
                                                  ppAVar21 = &(pGVar4->fields).OnRemoveFromGame;
                                                  LOCK();
                                                  pAVar22 = *ppAVar21;
                                                  bVar15 = pAVar20 == pAVar22;
                                                  if (bVar15) {
                                                    *ppAVar21 = (Action *)pAVar9;
                                                    pAVar22 = pAVar20;
                                                  }
                                                  UNLOCK();
                                                  pAVar23 = pAVar20;
                                                  if (!bVar15) {
                                                    pAVar23 = pAVar22;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar16 = (uint)((ulonglong)
                                                                    &(pGVar4->fields).
                                                                     OnRemoveFromGame >> 0xc);
                                                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                                      puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                                      LOCK();
                                                      bVar15 = uVar18 == *puVar19;
                                                      if (bVar15) {
                                                        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar15);
                                                  }
                                                  bVar15 = pAVar23 != pAVar20;
                                                  pAVar20 = pAVar23;
                                                  } while (bVar15);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                      (pMVar2 = (pMVar1->fields).game,
                                                      pMVar2 != (MVNetworkGame *)0x0)) &&
                                                     (pGVar3 = (pMVar2->fields).GameEventManager,
                                                     pGVar3 != (GameEventManager *)0x0)) {
                                                    pGVar4 = (pGVar3->fields).
                                                              AvatarCommandsPlayMode;
                                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(TypeInfo__System__Action
                                                                           );
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar5,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnSetSpawnAsGhost__,
                                                  (MethodInfo *)0x0);
                                                  if (pGVar4 !=
                                                      (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__System__Action);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pAVar20 = (pGVar4->fields).OnSpawnAsGhost;
                                                    do {
                                                      pAVar12 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )mscorlib.dll::System::Delegate::Delegate_Remove
                                                             ((Delegate *)pAVar20,
                                                              (Delegate *)pNVar5,(MethodInfo *)0x0)
                                                  ;
                                                  pAVar9 = pAVar8;
                                                  if (pAVar12 !=
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    if (pAVar12->klass ==
                                                        (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                                  *)TypeInfo__System__Action) {
                                                    pAVar9 = pAVar12;
                                                  }
                                                  if (pAVar9 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pAVar12);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  }
                                                  ppAVar21 = &(pGVar4->fields).OnSpawnAsGhost;
                                                  LOCK();
                                                  pAVar22 = *ppAVar21;
                                                  bVar15 = pAVar20 == pAVar22;
                                                  if (bVar15) {
                                                    *ppAVar21 = (Action *)pAVar9;
                                                    pAVar22 = pAVar20;
                                                  }
                                                  UNLOCK();
                                                  pAVar23 = pAVar20;
                                                  if (!bVar15) {
                                                    pAVar23 = pAVar22;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar16 = (uint)((ulonglong)
                                                                    &(pGVar4->fields).
                                                                     OnSpawnAsGhost >> 0xc);
                                                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                                      puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                                      LOCK();
                                                      bVar15 = uVar18 == *puVar19;
                                                      if (bVar15) {
                                                        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar15);
                                                  }
                                                  bVar15 = pAVar23 != pAVar20;
                                                  pAVar20 = pAVar23;
                                                  } while (bVar15);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                      (pMVar2 = (pMVar1->fields).game,
                                                      pMVar2 != (MVNetworkGame *)0x0)) &&
                                                     (pGVar3 = (pMVar2->fields).GameEventManager,
                                                     pGVar3 != (GameEventManager *)0x0)) {
                                                    pGVar4 = (pGVar3->fields).
                                                              AvatarCommandsPlayMode;
                                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(TypeInfo__System__Action
                                                                           );
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar5,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnSetToDeadMode__,
                                                  (MethodInfo *)0x0);
                                                  if (pGVar4 !=
                                                      (
                                                  GameEventManager_AvatarCommandsPlayModeManager *)
                                                  0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__System__Action);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pAVar20 = (pGVar4->fields).OnSetToDeadMode;
                                                    do {
                                                      pMVar32 = (MethodInfo *)0x0;
                                                      pAVar12 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )mscorlib.dll::System::Delegate::Delegate_Remove
                                                             ((Delegate *)pAVar20,
                                                              (Delegate *)pNVar5,(MethodInfo *)0x0)
                                                  ;
                                                  player = TypeInfo__System__Action;
                                                  pAVar9 = pAVar8;
                                                  if (pAVar12 !=
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    if (pAVar12->klass ==
                                                        (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                                  *)TypeInfo__System__Action) {
                                                    pAVar9 = pAVar12;
                                                  }
                                                  if (pAVar9 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pAVar12);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  }
                                                  ppAVar21 = &(pGVar4->fields).OnSetToDeadMode;
                                                  LOCK();
                                                  pAVar22 = *ppAVar21;
                                                  bVar15 = pAVar20 == pAVar22;
                                                  if (bVar15) {
                                                    *ppAVar21 = (Action *)pAVar9;
                                                    pAVar22 = pAVar20;
                                                  }
                                                  UNLOCK();
                                                  pAVar23 = pAVar20;
                                                  if (!bVar15) {
                                                    pAVar23 = pAVar22;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar16 = (uint)((ulonglong)
                                                                    &(pGVar4->fields).
                                                                     OnSetToDeadMode >> 0xc);
                                                    pMVar32 = (MethodInfo *)
                                                              (ulonglong)(uVar16 & 0x3f);
                                                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) *
                                                            8;
                                                    player = (Action__Class *)(lVar17 + 0xADDR);
                                                    do {
                                                      uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                                      LOCK();
                                                      bVar15 = uVar18 == *(ulonglong *)
                                                                          (lVar17 + 0xADDR);
                                                      if (bVar15) {
                                                        *(ulonglong *)(lVar17 + 0xADDR) =
                                                             uVar18 | 1L << (longlong)pMVar32;
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar15);
                                                  }
                                                  bVar15 = pAVar23 != pAVar20;
                                                  pAVar20 = pAVar23;
                                                  } while (bVar15);
                                                  MVTriggerBox::MVTriggerBox_OnExit
                                                            ((MVTriggerBox *)0x0,(MVPlayer *)player,
                                                             pMVar32);
                                                  if (extraout_RAX != 0) {
                                                    pDVar10 = *(Delegate **)(extraout_RAX + 0x38);
                                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (pNVar5,(Object *)this,
                                                                                                                          
                                                  MethodInfo__MVAvatarLocal__OnCheckpointReachedResetRevive__
                                                  ,(MethodInfo *)0x0);
                                                  pAVar9 = (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )mscorlib.dll::System::Delegate::Delegate_Remove
                                                             (pDVar10,(Delegate *)pNVar5,
                                                              (MethodInfo *)0x0);
                                                  if (pAVar9 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    *(undefined8 *)(extraout_RAX + 0x38) = 0;
                                                  }
                                                  else {
                                                    pAVar12 = pAVar8;
                                                    if (pAVar9->klass ==
                                                        (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                                  *)TypeInfo__UnityEngine__Events__UnityAction) {
                                                    pAVar12 = pAVar9;
                                                  }
                                                  if (pAVar12 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pAVar9);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  *(Action_1_MV_WorldObject_MetaData_FirstTimeEvent_
                                                    **)(extraout_RAX + 0x38) = pAVar12;
                                                  if (pAVar9->klass ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class
                                                  *)TypeInfo__UnityEngine__Events__UnityAction) {
                                                    pAVar8 = pAVar9;
                                                  }
                                                  if (pAVar8 ==
                                                      (
                                                  Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *
                                                  )0x0) {
                                                    FUN_?(pAVar9);
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar16 = (uint)(extraout_RAX + 0x38U >> 0xc);
                                                    lVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar18 = *(ulonglong *)(lVar17 + 0xADDR);
                                                      puVar19 = (ulonglong *)(lVar17 + 0xADDR);
                                                      LOCK();
                                                      bVar15 = uVar18 == *puVar19;
                                                      if (bVar15) {
                                                        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar15);
                                                  }
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar1 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                                                      (pMVar2 = (pMVar1->fields).game,
                                                      pMVar2 != (MVNetworkGame *)0x0)) &&
                                                     ((this_00 = (pMVar2->fields).playerContainer,
                                                      this_00 != (MVPlayerContainer *)0x0 &&
                                                      (pMVar41 = MVPlayerContainer::
                                                                 MVPlayerContainer_get_LocalPlayer
                                                                           (this_00,(MethodInfo *)
                                                                                    0x0),
                                                      pMVar41 != (MVLocalPlayer *)0x0)))) {
                                                    pBVar42 = (pMVar41->fields).boostController;
                                                    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                                                              FUN_?(TypeInfo__System__Action
                                                                           );
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              (pNVar5,(Object *)this,
                                                                                                                              
                                                  MethodInfo__MVAvatarLocal__OnHealthBoostedChanged__
                                                  ,(MethodInfo *)0x0);
                                                  if (pBVar42 != (BoostController *)0x0) {
                                                    uVar43 = 0;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__System__Action,3,
                                                                    pNVar5,0);
                                                      LOCK();
                                                      UNLOCK();
                                                      FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  this_01 = (pBVar42->fields).onBoostTypeUpdate;
                                                  if (this_01 ==
                                                      (Dictionary_2_BoostType_System_Action_ *)0x0)
                                                  {
                                                    FUN_?();
                                                    pcVar13 = (code *)swi(3);
                                                    (*pcVar13)();
                                                    return;
                                                  }
                                                  pDVar10 = (Delegate *)
                                                            mscorlib.dll::System::Collections::
                                                            Generic::Dictionary`2[System::
                                                            Int32Enum,System::Object]::
                                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_01,3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                                                  );
                                                  pDVar26 = mscorlib.dll::System::Delegate::
                                                            Delegate_Remove(pDVar10,(Delegate *)
                                                                                    pNVar5,
                                                                            (MethodInfo *)0x0);
                                                  pDVar10 = (Delegate *)0x0;
                                                  if (pDVar26 != (Delegate *)0x0) {
                                                    if ((Action__Class *)pDVar26->klass ==
                                                        TypeInfo__System__Action) {
                                                      pDVar10 = pDVar26;
                                                    }
                                                    if (pDVar10 == (Delegate *)0x0) {
                                                      FUN_?(pDVar26);
                                                      pcVar13 = (code *)swi(3);
                                                      (*pcVar13)();
                                                      return;
                                                    }
                                                  }
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_01,3,(Object *)pDVar10,
                                                  (InsertionBehavior__Enum)
                                                  CONCAT71((int7)((ulonglong)uVar43 >> 8),1),
                                                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                                                  ->klass->rgctx_data[0x22].method);
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
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    (*(pMVar2->klass->vtable).__unknown_2.methodPtr)
              (pMVar2,interactionMap,(pMVar2->klass->vtable).__unknown_2.method);
    return interactionMap;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (InputToInGameAction *)(*pcVar3)();
  return pIVar4;
}


/* Void UpdateMaxHealth() */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_UpdateMaxHealth
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVAvatarLocal___UpdateMaxHealth_b__119_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxHealth);
    LOCK();
    UNLOCK();
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
    uVar4 = FUN_?((float)iVar3 * (this->fields).boostedHealthMultiplier);
    pMVar5 = (this->fields)._.MaxHealth;
    if (pMVar5 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      (*(pMVar5->klass->vtable).set_Value.methodPtr)
                (pMVar5,(ulonglong)uVar4,(pMVar5->klass->vtable).set_Value.method);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_VisualizeBulletImpact
               (MVAvatarLocal *this,VoxelHit *voxelHit,Ray *lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  apMStack_1[0] = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pMVar4->fields).players;
    if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,shooterActorNumber,
                         (Object **)apMStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar5 == 0) {
        return;
      }
      if (apMStack_1[0] != (MVPlayer *)0x0) {
        bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                          (apMStack_1[0],(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        pMVar6 = (this->fields)._.SpawnRoleModeTypes;
        if ((pMVar6 != (MVRuntimeDataVariable *)0x0) &&
           (pOVar7 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                ((pMVar6->fields).value,(MethodInfo *)0x0), pOVar7 != (Object *)0x0
           )) {
          if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar7,lRam_?);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((ulonglong)pOVar7[1].klass & 2) != 0) {
            return;
          }
          pAVar9 = (this->fields)._.avatar;
          if ((pAVar9 != (Avatar *)0x0) &&
             (pBVar10 = (pAVar9->fields).modifierEffectCount, pBVar10 != (Byte__Array *)0x0)) {
            if ((uint)pBVar10->max_length < 0xb) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pBVar10->vector[10] != 0) {
              return;
            }
            pAVar9 = (this->fields)._.avatar;
            if ((pAVar9 != (Avatar *)0x0) &&
               (pAVar11 = (pAVar9->fields).bulletImpactVisualizer,
               pAVar11 != (AvatarBulletImpactVisualizer *)0x0)) {
              uStack_12._0_4_ = (lineOfFire->m_Origin).x;
              uStack_12._4_4_ = (lineOfFire->m_Origin).y;
              uStack_13 = *(undefined8 *)&(lineOfFire->m_Origin).z;
              uStack_14._0_4_ = (lineOfFire->m_Direction).y;
              uStack_14._4_4_ = (lineOfFire->m_Direction).z;
              uStack_15._0_4_ = (voxelHit->point).x;
              uStack_15._4_4_ = (voxelHit->point).y;
              uStack_16 = *(undefined8 *)&(voxelHit->point).z;
              uStack_17._0_4_ = voxelHit->face;
              uStack_17._4_1_ = voxelHit->isCubeHit;
              uStack_17._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
              uStack_18 = *(undefined8 *)&voxelHit->woId;
              uStack_19._0_4_ = (voxelHit->normal).y;
              uStack_19._4_4_ = (voxelHit->normal).z;
              uStack_20 = *(undefined8 *)&voxelHit->cubePos;
              pCStack_21 = voxelHit->collider;
              pTStack_22 = voxelHit->transform;
              pCStack_23 = voxelHit->cube;
              uStack_24 = *(undefined8 *)&voxelHit->distance;
              iStack_25 = voxelHit->interactionFlags;
              (*(pAVar11->klass->vtable).VisualizeBulletImpact_1.methodPtr)
                        (pAVar11,&uStack_15,&uStack_12,shooterActorNumber,damage,
                         (pAVar11->klass->vtable).VisualizeBulletImpact_1.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <InitializeHealth>b__128_0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeHealth_b__128_0
               (MVAvatarLocal *this,Object *health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass128_0___InitializeHealth_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass128_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass128_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)health;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pOVar6 = object[1].klass;
    if (pOVar6 != (Object__Class *)0x0) {
      pIVar7 = (pOVar6->_0).image;
      lVar8._0_4_ = pIVar7->token;
      lVar8._4_1_ = pIVar7->dynamic;
      lVar8._5_3_ = *(undefined3 *)&pIVar7->field_0x45;
      if (lVar8 != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(pOVar6);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(float *)&(pOVar6->_0).name <= 0.0) {
        MVAvatarLocal_Die(this,(MethodInfo *)0x0);
      }
      else {
        pMVar10 = (this->fields)._.Health;
        fVar11 = (this->fields).previousHealth;
        if (pMVar10 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
        currentHealth =
             (float)(*(pMVar10->klass->vtable).get_Value.methodPtr)
                              (pMVar10,(pMVar10->klass->vtable).get_Value.method);
        MVAvatar::MVAvatar_TrySpawningHealParticles
                  ((MVAvatar *)this,fVar11,currentHealth,(MethodInfo *)0x0);
      }
      pMVar10 = (this->fields)._.Health;
      if (pMVar10 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        fVar11 = (float)(*(pMVar10->klass->vtable).get_Value.methodPtr)
                                  (pMVar10,(pMVar10->klass->vtable).get_Value.method);
        (this->fields).previousHealth = fVar11;
        this_00 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,object,
                   MethodInfo__MVAvatarLocal____c__DisplayClass128_0___InitializeHealth_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <InitializeShield>b__125_0(Object) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__InitializeShield_b__125_0
               (MVAvatarLocal *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal____c__DisplayClass125_0___InitializeShield_b__1_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal____c__DisplayClass125_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarLocal____c__DisplayClass125_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)shield;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pMVar6 = (this->fields)._.shield;
    fVar7 = (this->fields).previousShield;
    if (pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      currentHealth =
           (float)(*(pMVar6->klass->vtable).get_Value.methodPtr)
                            (pMVar6,(pMVar6->klass->vtable).get_Value.method);
      MVAvatar::MVAvatar_TrySpawningHealParticles
                ((MVAvatar *)this,fVar7,currentHealth,(MethodInfo *)0x0);
      pMVar6 = (this->fields)._.shield;
      if (pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar7 = (float)(*(pMVar6->klass->vtable).get_Value.methodPtr)
                                 (pMVar6,(pMVar6->klass->vtable).get_Value.method);
        (this->fields).previousShield = fVar7;
        this_00 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,object,
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnEquipItem>b__136_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__OnEquipItem_b__136_0
               (MVAvatarLocal *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    pAVar1 = (this->fields).pickupOwner;
    pSVar2 = (receiver->fields).isInGunMode;
    if (pAVar1 != (AvatarPickupOwner *)0x0) {
      MVPickupOwner::MVPickupOwner_get_InFirstPerson((MVPickupOwner *)pAVar1,(MethodInfo *)0x0);
      if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
        FUN_?(pSVar2);
        pAVar1 = (this->fields).pickupOwner;
        pSVar2 = (receiver->fields).pickupItemIsInHand;
        if ((pAVar1 != (AvatarPickupOwner *)0x0) &&
           (pPVar3 = (pAVar1->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
          if ((pPVar3->fields)._IsHolstered_k__BackingField == 0) {
            iVar4 = (*(pPVar3->klass->vtable).__unknown.methodPtr)
                              (pPVar3,(pPVar3->klass->vtable).__unknown.method);
            bVar5 = iVar4 != 5;
          }
          else {
            bVar5 = false;
          }
          pMVar6 = 
          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
          ;
          if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
            pSVar7 = (pSVar2->fields).spawnRoleDataReceiver;
            if (pSVar7 != (SpawnRoleDataReceiver *)0x0) {
              if ((pSVar7->fields).isActive == 0) {
                uVar8 = func_?(&TypeInfo__System__Exception);
                this_00 = (Exception *)func_?(uVar8);
                message = (String *)
                          func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
                mscorlib.dll::System::Exception::Exception__ctor_1
                          (this_00,message,(MethodInfo *)0x0);
                FUN_?(this_00,pMVar6);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pSVar10 = (pSVar2->fields).subscribableVariable;
              if (pSVar10 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
                pAVar11 = (pSVar10->fields)._.OnChange;
                (pSVar10->fields)._.value = bVar5;
                if (pAVar11 != (Action_1_Boolean_ *)0x0) {
                  pAVar11 = (pSVar10->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pAVar11->fields)._._.invoke_impl)
                            ((pAVar11->fields)._._.method_code,bVar5,(pAVar11->fields)._._.method);
                  return;
                }
                return;
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <OnHolsteredChanged>b__111_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__OnHolsteredChanged_b__111_0
               (MVAvatarLocal *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    pAVar1 = (this->fields).pickupOwner;
    pSVar2 = (receiver->fields).pickupItemIsInHand;
    if ((pAVar1 != (AvatarPickupOwner *)0x0) &&
       (pPVar3 = (pAVar1->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
      if ((pPVar3->fields)._IsHolstered_k__BackingField == 0) {
        iVar4 = (*(pPVar3->klass->vtable).__unknown.methodPtr)
                          (pPVar3,(pPVar3->klass->vtable).__unknown.method);
        bVar5 = iVar4 != 5;
      }
      else {
        bVar5 = false;
      }
      pMVar6 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
      ;
      if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
        pSVar7 = (pSVar2->fields).spawnRoleDataReceiver;
        if (pSVar7 != (SpawnRoleDataReceiver *)0x0) {
          if ((pSVar7->fields).isActive == 0) {
            uVar8 = func_?(&TypeInfo__System__Exception);
            this_00 = (Exception *)func_?(uVar8);
            message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P)
            ;
            mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
            FUN_?(this_00,pMVar6);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pSVar10 = (pSVar2->fields).subscribableVariable;
          if (pSVar10 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
            pAVar11 = (pSVar10->fields)._.OnChange;
            (pSVar10->fields)._.value = bVar5;
            if (pAVar11 != (Action_1_Boolean_ *)0x0) {
              pAVar11 = (pSVar10->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pAVar11->fields)._._.invoke_impl)
                        ((pAVar11->fields)._._.method_code,bVar5,(pAVar11->fields)._._.method);
              return;
            }
            return;
          }
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <UpdateMaxHealth>b__119_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__UpdateMaxHealth_b__119_0
               (MVAvatarLocal *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    pMVar1 = (this->fields)._.MaxHealth;
    pSVar2 = (receiver->fields).maxHealth;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      iVar3 = (*(pMVar1->klass->vtable).get_Value.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable).get_Value.method);
      pMVar4 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__set_Value_int_
      ;
      if (pSVar2 != (SpawnRoleReceiverVariable_1_System_Int32_ *)0x0) {
        pSVar5 = (pSVar2->fields).spawnRoleDataReceiver;
        if (pSVar5 != (SpawnRoleDataReceiver *)0x0) {
          if ((pSVar5->fields).isActive == 0) {
            uVar6 = func_?(&TypeInfo__System__Exception);
            this_00 = (Exception *)func_?(uVar6);
            message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P)
            ;
            mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
            FUN_?(this_00,pMVar4);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pSVar8 = (pSVar2->fields).subscribableVariable;
          if (pSVar8 != (SubscribableVariable_1_System_Int32_ *)0x0) {
            pAVar9 = (pSVar8->fields)._.OnChange;
            (pSVar8->fields)._.value = iVar3;
            if (pAVar9 != (Action_1_Int32_ *)0x0) {
              pAVar9 = (pSVar8->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pAVar9->fields)._._.invoke_impl)
                        ((pAVar9->fields)._._.method_code,iVar3,(pAVar9->fields)._._.method);
              return;
            }
            return;
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVAvatarLocal(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal__ctor
               (MVAvatarLocal *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarRespawnHandler);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).currAnim = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currAnim >> 0xc);
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
  pAVar6 = (AvatarRespawnHandler *)FUN_?(TypeInfo__AvatarRespawnHandler);
  bVar1 = iRam_? != 0;
  (pAVar6->fields).shouldRespawnAsGhost = 1;
  (this->fields).avatarRespawnHandler = pAVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarRespawnHandler >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields).boostedHealthMultiplier = 1.0;
  (this->fields).defaultBaseMaxHealth = 100;
  (this->fields).spawnWorldObjectId = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  MVAvatar::MVAvatar__ctor
            ((MVAvatar *)this,data,(pPVar7->fields).mvLocalAvatarPrefab,worldObjects,
             (MethodInfo *)0x0);
  return;
}


/* AvatarLocal get_AvatarLocal() */

AvatarLocal *
Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
          (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarLocal *)(this->fields)._.avatar;
  if (pAVar1 != (AvatarLocal *)0x0) {
    bVar2 = (TypeInfo__AvatarLocal->_1).naturalAligment;
    if (((pAVar1->klass->_1).naturalAligment < bVar2) ||
       ((pAVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLocal)) {
      FUN_?(pAVar1,TypeInfo__AvatarLocal);
      pcVar3 = (code *)swi(3);
      pAVar1 = (AvatarLocal *)(*pcVar3)();
      return pAVar1;
    }
  }
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
  if (((pUVar1 == (UseInteractorHandler *)0x0) ||
      (pCVar2 = (pUVar1->fields).triggingColliders, pCVar2 == (ColliderCollection *)0x0)) ||
     (obj = (pCVar2->fields).activeCollider, obj == (Collider *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pBVar4 = (Bounds *)(*pcVar3)();
    return pBVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pBVar4 = (Bounds *)(*pcVar3)();
    return pBVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar3 = (code *)swi(3);
    pBVar4 = (Bounds *)(*pcVar3)();
    return pBVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar8,&uStack_5);
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_5;
  (__return_storage_ptr__->m_Center).y = (float)uStack_5._4_4_;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uStack_6;
  (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_7;
  (__return_storage_ptr__->m_Extents).z = (float)uStack_7._4_4_;
  return __return_storage_ptr__;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).pickupOwner;
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
  if (pAVar1 != (AvatarPickupOwner *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).pickupOwner;
      if (pAVar1 == (AvatarPickupOwner *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,0,in_R8,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar4 = (pAVar1->fields)._.currentItem;
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
      if (pPVar4 != (PickupItem *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pPVar4 = (pAVar1->fields)._.currentItem;
          if (pPVar4 == (PickupItem *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            bVar3 = (*pcVar2)();
            return bVar3;
          }
          if ((pPVar4->fields)._IsHolstered_k__BackingField == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar3 = (*(pPVar4->klass->vtable).get_FirstPerson.methodPtr)
                              (pPVar4,(pPVar4->klass->vtable).get_FirstPerson.method);
            return bVar3;
          }
        }
      }
      return 0;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
     pMVar3 != (MVLocalObjectController *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVLocalObjectController__AttachState);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pMVar3->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
      return 0;
    }
    pMVar4 = (pMVar3->fields).attachState;
    pMVar5 = pMVar4->klass;
    bVar6 = (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment;
    if (((pMVar5->_1).naturalAligment < bVar6) ||
       (bVar7 = true,
       (pMVar5->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
       (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      bVar7 = false;
    }
    pMVar8 = (MVLocalObjectController_IAttachInterface *)0x0;
    if (bVar7) {
      pMVar8 = pMVar4;
    }
    return pMVar8 != (MVLocalObjectController_IAttachInterface *)0x0;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean get_IsInVehicle() */

bool Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_IsInVehicle
               (MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).vehicleRigidBody;
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
  if (pMVar1 != (MVRigidBody *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pMVar1->fields)._._._._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Vector3 get_LookAtPos() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_LookAtPos
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  obj = (this->fields)._._._.transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar7->upVector).x;
  uVar9 = (pVVar7->upVector).y;
  fVar10 = (pVVar7->upVector).z;
  __return_storage_ptr__->x = (float)uStack_3 + (float)uVar8;
  __return_storage_ptr__->y = uStack_3._4_4_ + (float)uVar9;
  __return_storage_ptr__->z = fStack_4 + fVar10;
  return __return_storage_ptr__;
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
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  if (*(int *)&(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     (AttributeSettingWoType__Enum_Avatar,(MethodInfo *)0x0);
  factoryFunc = (String__Class *)
                FUN_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
  FUN_?(factoryFunc);
  pSVar3 = factoryFunc;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar4 = (String *)FUN_?();
code_?:
    FUN_?(pSVar4,pSVar3);
  }
  else {
    uStack_5 = 0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    uStack_12 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_13 = 2;
    auStack_14._8_8_ = uStack_12;
    auStack_14._16_8_ = (String *)0x0;
    auStack_14._24_8_ = (Object *)0x0;
    puStack_15 = (undefined *)0x2;
    pDStack_8 = pDVar1;
    auStack_14._0_8_ = pDVar1;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         auStack_14,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar16 == 0) {
        return (KogamaSettingWrapperBase *)0x0;
      }
      if (pKVar2 == (KogamaSettingWrapperBase *)0x0) break;
      pSVar17 = (pKVar2->fields).key;
      pSVar18 = (String *)0x0;
      if ((String *)auStack_14._16_8_ != (String *)0x0) {
        if (*(String__Class **)auStack_14._16_8_ == pSRam0000000182db2520) {
          pSVar18 = (String *)auStack_14._16_8_;
        }
        pSVar4 = (String *)auStack_14._16_8_;
        pSVar3 = pSRam0000000182db2520;
        if (pSVar18 == (String *)0x0) goto code_?;
      }
      if ((pSVar18 == pSVar17) ||
         ((((pSVar18 != (String *)0x0 && (pSVar17 != (String *)0x0)) &&
           ((pSVar18->fields)._stringLength == (pSVar17->fields)._stringLength)) &&
          (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar18->fields)._firstChar,
                              (uint8_t *)&(pSVar17->fields)._firstChar,
                              (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar16 != 0)))) {
        KStack_19.key = (Object *)auStack_14._16_8_;
        KStack_19.value = (Object *)auStack_14._24_8_;
        pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTools::KogamaSettingTools_CreateFromValues_1
                           (&KStack_19,pKVar2,(KogamaSettingsCollectionBase *)0x0,
                            (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                             *)factoryFunc,(MethodInfo *)0x0);
        return pKVar2;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  pKVar2 = (KogamaSettingWrapperBase *)(*pcVar20)();
  return pKVar2;
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
  pUVar1 = (this->fields).useInteractorHandler;
  if (pUVar1 != (UseInteractorHandler *)0x0) {
    return (pUVar1->fields).triggingColliders;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (ColliderCollection *)(*pcVar2)();
  return pCVar3;
}


/* Vector3 get_VelocityAbsolute() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_VelocityAbsolute
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  bVar1 = MVAvatarLocal_get_IsInVehicle(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pAVar2 = (this->fields).avatarMotor;
  }
  else {
    pAVar2 = (AvatarMotor *)(this->fields).vehicleRigidBody;
  }
  if (pAVar2 != (AvatarMotor *)0x0) {
    puVar3 = (undefined8 *)
             (*(((MVRigidBody__Class *)pAVar2->klass)->vtable).__unknown_1.methodPtr)
                       (auStack_4,pAVar2,
                        (((MVRigidBody__Class *)pAVar2->klass)->vtable).__unknown_1.method);
    uVar5 = *puVar3;
    fVar6 = *(float *)(puVar3 + 1);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Vector3 get_VelocityRelative() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_get_VelocityRelative
                    (Vector3 *__return_storage_ptr__,MVAvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarMotor;
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
  if (pAVar1 != (AvatarMotor *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).avatarMotor;
      if (pAVar1 == (AvatarMotor *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pVVar4 = (Vector3__StaticFields *)
               (*(pAVar1->klass->vtable).get_Velocity.methodPtr)
                         (auStack_5,pAVar1,(pAVar1->klass->vtable).get_Velocity.method);
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
code_?:
  fVar6 = (pVVar4->zeroVector).y;
  fVar7 = (pVVar4->zeroVector).z;
  __return_storage_ptr__->x = (pVVar4->zeroVector).x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar7;
  return __return_storage_ptr__;
}


/* Void set_BaseMaxHealth(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
               (MVAvatarLocal *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&void_MethodInfo__System__Math__ThrowMinMaxException<int>_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
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
      fVar5 = (float)(*(pMVar4->klass->vtable).get_Value.methodPtr)();
      MVAvatarLocal_UpdateMaxHealth(this,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._.MaxHealth;
      pMVar4 = (this->fields)._.Health;
      if ((pMVar2 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
         (iVar6 = (*(pMVar2->klass->vtable).get_Value.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Value.method),
         pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar4->klass->vtable).set_Value.methodPtr)
                  (pMVar4,(ulonglong)(uint)((float)iVar6 / ((float)iVar3 / fVar5)),
                   (pMVar4->klass->vtable).set_Value.method);
        return;
      }
    }
  }
  FUN_?();
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

