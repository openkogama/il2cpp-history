
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_Activate
               (MVAvatarLocal_WalkMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IMotorAPI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
    aiStackX_10[0] = (this->fields)._.modeTypes;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,pOVar2,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar3 != (MVWorldObjectClientManager *)0x0) &&
         (pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar3,
                               MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                              ), pOVar2 != (Object *)0x0)) {
        pTVar4 = (Transform *)pOVar2[0xd].monitor;
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pNVar5 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                            (&NStack_6,pTVar4,(MethodInfo *)0x0);
        BStack_7.m_Center.x = *(float *)pNVar5;
        BStack_7.m_Center.y = (pNVar5->value).m_Center.x;
        BStack_7.m_Center.z = (pNVar5->value).m_Center.y;
        BStack_7.m_Extents.x = (pNVar5->value).m_Center.z;
        uVar8 = (pNVar5->value).m_Extents.x;
        uVar9 = (pNVar5->value).m_Extents.y;
        fStack_10 = (pNVar5->value).m_Extents.z;
        fVar11 = BStack_7.m_Center.y;
        fVar12 = BStack_7.m_Center.z;
        fVar13 = BStack_7.m_Extents.x;
        fVar14 = fStack_10;
        BStack_7.m_Extents.y = (float)uVar8;
        BStack_7.m_Extents.z = (float)uVar9;
        if (pNVar5->hasValue == 0) {
          BStack_7.m_Extents.y = 0.0;
          BStack_7.m_Extents.z = 0.0;
          fVar11 = 0.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
          fVar14 = 0.0;
        }
        fVar15 = BStack_7.m_Extents.z;
        fVar16 = BStack_7.m_Extents.y;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          BStack_7.m_Center.x = fVar11;
          BStack_7.m_Center.y = fVar12;
          BStack_7.m_Center.z = fVar13;
          BStack_7.m_Extents.x = fVar16;
          BStack_7.m_Extents.y = fVar15;
          BStack_7.m_Extents.z = fVar14;
          MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
                    (pMVar3,&BStack_7,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          pcVar17 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcRam_? = pcVar17;
          fVar11 = (float)(*pcRam_?)();
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            (pMVar1->fields)._.healParticleSpawnTime = fVar11;
            pMVar1 = (this->fields)._.mvAvatar;
            if ((pMVar1 != (MVAvatarLocal *)0x0) &&
               (pMVar19 = (pMVar1->fields)._.shield,
               pMVar19 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
              (*(pMVar19->klass->vtable).set_Value.methodPtr)(pMVar19,0);
              pMVar1 = (this->fields)._.mvAvatar;
              if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                 (this_01 = (pMVar1->fields).triggerHandler, this_01 != (MVTriggerHandler *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_01,1,(MethodInfo *)0x0);
                pMVar1 = (this->fields)._.mvAvatar;
                if (pMVar1 != (MVAvatarLocal *)0x0) {
                  MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
                  pMVar1 = (this->fields)._.mvAvatar;
                  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                     (this_02 = (pMVar1->fields)._._._.collider, this_02 != (Collider *)0x0)) {
                    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                              (this_02,1,(MethodInfo *)0x0);
                    pMVar1 = (this->fields)._.mvAvatar;
                    pIVar20 = (this->fields).avatarInputController;
                    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                       (pTVar4 = (pMVar1->fields)._._._.transform, pTVar4 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      NStack_6.hasValue = 0;
                      NStack_6._1_3_ = 0;
                      NStack_6.value.m_Center.x = 0.0;
                      NStack_6.value.m_Center.y = 0.0;
                      NStack_6.value.m_Center.z = 0.0;
                      pvVar21 = (pTVar4->fields)._._.m_CachedPtr;
                      if (pvVar21 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar4,(MethodInfo *)0x0);
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      pcVar17 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
                      {
                        uVar18 = func_?(&UNK_?);
                        FUN_?(uVar18,0);
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      pcRam_? = pcVar17;
                      (*pcRam_?)(pvVar21,&NStack_6);
                      if (pIVar20 != (IAvatarInputController *)0x0) {
                        pIVar22 = pIVar20->klass;
                        uVar23 = 0;
                        uVar24._0_1_ = (pIVar22->_1).rank;
                        uVar24._1_1_ = (pIVar22->_1).minimumAlignment;
                        if (uVar24 != 0) {
                          do {
                            if (pIVar22->interfaceOffsets[uVar23].interfaceType ==
                                (Il2CppClass *)TypeInfo__IMotorAPI) {
                              pVVar25 = &(&pIVar22->vtable)
                                         [pIVar22->interfaceOffsets[uVar23].offset + 3].HandleInput;
                              goto code_?;
                            }
                            uVar23 = uVar23 + 1;
                          } while (uVar23 < uVar24);
                        }
                        pVVar25 = (VirtualInvokeData *)FUN_?(pIVar20,TypeInfo__IMotorAPI,3);
code_?:
                        pNVar5 = &NStack_6;
                        (*pVVar25->methodPtr)(pIVar20);
                        pMVar1 = (this->fields)._.mvAvatar;
                        if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                            (pAVar26 = (pMVar1->fields)._.limbManager,
                            pAVar26 != (AvatarLimbManager *)0x0)) &&
                           (pAVar27 = (pAVar26->fields).limbRotator,
                           pAVar27 != (AvatarLimbManager_LimbRotator *)0x0)) {
                          (pAVar27->fields).isActive = 1;
                          pMVar1 = (this->fields)._.mvAvatar;
                          if (pMVar1 != (MVAvatarLocal *)0x0) {
                            if ((((pMVar1->fields)._.body != (MVBody *)0x0) &&
                                (this_03 = (pMVar1->fields)._.body,
                                (this_03->fields).forceHidden == 0)) &&
                               ((this_03->fields).visible != 1)) {
                              pNVar5 = (Nullable_1_UnityEngine_Bounds_ *)0x0;
                              (this_03->fields).visible = 1;
                              MVBody::MVBody_UpdateVisibility(this_03,(MethodInfo *)0x0);
                            }
                            bVar28 = MVClientSettings::MVClientSettings_get_ReviveEnabled
                                               ((MethodInfo *)0x0);
                            if (bVar28 != 0) {
                              pSVar29 = MVGameControllerBase::
                                        MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                  ((MethodInfo *)0x0);
                              if (((pSVar29 == (SpawnRoleDataMediator *)0x0) ||
                                  (pSVar30 = (pSVar29->fields).reviveState,
                                  pSVar30 ==
                                  (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)
                                  0x0)) || ((pSVar31 = (pSVar30->fields)._.subscribableVariable,
                                            pSVar31 == (SubscribableVariable_1_ReviveState_ *)0x0 ||
                                            (pRVar32 = (pSVar31->fields)._.value,
                                            pRVar32 == (ReviveState *)0x0))))
                              goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pLVar33 = (pRVar32->fields).safePositions;
                              (pRVar32->fields).currentPreviewedSafePosition = 0;
                              if (pLVar33 == (List_1_SafeSpotData_ *)0x0) goto code_?;
                              piVar34 = &(pLVar33->fields)._version;
                              *piVar34 = *piVar34 + 1;
                              (pLVar33->fields)._size = 0;
                            }
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar35 != (MVGameControllerBase *)0x0) &&
                                (pMVar36 = (pMVar35->fields).game, pMVar36 != (MVNetworkGame *)0x0))
                               && (pMVar37 = (pMVar36->fields).
                                             _NetworkGameStateListener_k__BackingField,
                                  pMVar37 != (MVNetworkGameStateListener *)0x0)) {
                              if ((pMVar37->fields).currentGameState == 2) {
                                pMVar1 = (this->fields)._.mvAvatar;
                                if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                                   (this_05 = (pMVar1->fields).avatarLocalModes,
                                   this_05 == (MVAvatarLocal_AvatarLocalModes *)0x0))
                                goto code_?;
                                MVAvatarLocal+AvatarLocalModes::
                                MVAvatarLocal_AvatarLocalModes_SetMode
                                          (this_05,(AvatarRuntimeState__Enum)
                                                   CONCAT71((int7)((ulonglong)pNVar5 >> 8),8),
                                           (MethodInfo *)0x0);
                              }
                              else {
                                if ((char)fromMode != '\b') {
                                  pMVar38 = MVGameControllerBase::
                                            MVGameControllerBase_get_MainCameraManager
                                                      ((MethodInfo *)0x0);
                                  if (pMVar38 == (MainCameraManager *)0x0)
                                  goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&StringLiteral_CamRotateTarget);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  (pMVar38->fields).maskMode = 0;
                                  this_04 = (pMVar38->fields).mainCamera;
                                  if (this_04 == (Camera *)0x0) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_set_cullingMask
                                            (this_04,(pMVar38->fields).cullingMask,(MethodInfo *)0x0
                                            );
                                  uVar18 = 0;
                                  (pMVar38->fields).blueModeEnabled = 0;
                                  MainCameraManager::MainCameraManager_RenderLogic
                                            (pMVar38,(pMVar38->fields).isLogicRendered,
                                             (MethodInfo *)0x0);
                                  pMVar1 = (this->fields)._.mvAvatar;
                                  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
                                  (*(pMVar1->klass->vtable).set_Visible.methodPtr)
                                            (pMVar1,CONCAT71((int7)((ulonglong)uVar18 >> 8),1),
                                             (pMVar1->klass->vtable).set_Visible.method);
                                  pMVar1 = (this->fields)._.mvAvatar;
                                  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                                     (pAVar39 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                                          (pMVar1,(MethodInfo *)0x0),
                                     pAVar39 == (AvatarLocal *)0x0)) goto code_?;
                                  pIVar40 = (pAVar39->fields).avatarCameraController;
                                  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
                                    FUN_?(TypeInfo__MainCameraManager);
                                  }
                                  if (pIVar40 == (IAvatarCameraController *)0x0)
                                  goto code_?;
                                  FUN_?(2,TypeInfo__IAvatarCameraController,pIVar40,
                                                TypeInfo__MainCameraManager->static_fields->
                                                DefaultCameraType);
                                  pMVar38 = MVGameControllerBase::
                                            MVGameControllerBase_get_MainCameraManager
                                                      ((MethodInfo *)0x0);
                                  if ((((pMVar38 == (MainCameraManager *)0x0) ||
                                       (pMVar41 = (pMVar38->fields).cameraController,
                                       pMVar41 == (MVCameraController *)0x0)) ||
                                      (pMVar42 = (pMVar41->fields).cameraStack,
                                      pMVar42 == (MVCameraController_CameraStack *)0x0)) ||
                                     (pMVar43 = MVCameraController+CameraStack::
                                                MVCameraController_CameraStack_get_CurCamera
                                                          (pMVar42,(MethodInfo *)0x0),
                                     pMVar43 == (MVCameraBase *)0x0)) goto code_?;
                                  (*(pMVar43->klass->vtable).Reset.methodPtr)();
                                  pMVar38 = MVGameControllerBase::
                                            MVGameControllerBase_get_MainCameraManager
                                                      ((MethodInfo *)0x0);
                                  if (((pMVar38 == (MainCameraManager *)0x0) ||
                                      (pMVar41 = (pMVar38->fields).cameraController,
                                      pMVar41 == (MVCameraController *)0x0)) ||
                                     ((pMVar42 = (pMVar41->fields).cameraStack,
                                      pMVar42 == (MVCameraController_CameraStack *)0x0 ||
                                      (pMVar43 = MVCameraController+CameraStack::
                                                 MVCameraController_CameraStack_get_CurCamera
                                                           (pMVar42,(MethodInfo *)0x0),
                                      pMVar43 == (MVCameraBase *)0x0)))) goto code_?;
                                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pMVar43,(MethodInfo *)0x0);
                                  pMVar1 = (this->fields)._.mvAvatar;
                                  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                                     (obj = (pMVar1->fields)._._._.transform,
                                     obj == (Transform *)0x0)) goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  NStack_6.hasValue = 0;
                                  NStack_6._1_3_ = 0;
                                  NStack_6.value.m_Center.x = 0.0;
                                  NStack_6.value.m_Center.y = 0.0;
                                  NStack_6.value.m_Center.z = 0.0;
                                  pvVar21 = (obj->fields)._._.m_CachedPtr;
                                  if (pvVar21 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)obj,(MethodInfo *)0x0);
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pcVar17 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar17 = (code *)FUN_?(&UNK_?),
                                     pcVar17 == (code *)0x0)) {
                                    uVar18 = func_?(&UNK_?);
                                    FUN_?(uVar18,0);
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pcRam_? = pcVar17;
                                  (*pcRam_?)(pvVar21);
                                  if (pTVar4 == (Transform *)0x0) {
                                    FUN_?();
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  BStack_7.m_Center.x = (float)NStack_6._0_4_;
                                  BStack_7.m_Center.y = NStack_6.value.m_Center.x;
                                  BStack_7.m_Center.z = NStack_6.value.m_Center.y;
                                  BStack_7.m_Extents.x = NStack_6.value.m_Center.z;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar21 = (pTVar4->fields)._._.m_CachedPtr;
                                  if (pvVar21 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pTVar4,(MethodInfo *)0x0);
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pcVar17 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar17 = (code *)FUN_?(&UNK_?),
                                     pcVar17 == (code *)0x0)) {
                                    uVar18 = func_?(&UNK_?);
                                    FUN_?(uVar18,0);
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pcRam_? = pcVar17;
                                  (*pcRam_?)(pvVar21,&BStack_7);
                                }
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__ILockCursorManager);
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
                                if (TypeInfo__MVGameControllerBase->static_fields->
                                    _WebPlayAsTouch_k__BackingField == 0) {
                                  pMVar44 = MVGameControllerDesktop::
                                            MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
                                  if ((pMVar44 == (MVGameControllerDesktop *)0x0) ||
                                     (pIVar45 = (pMVar44->fields).lockCursorManager,
                                     pIVar45 == (ILockCursorManager *)0x0))
                                  goto code_?;
                                  FUN_?(1,TypeInfo__ILockCursorManager,pIVar45,1);
                                }
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
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_CreateInputController
          (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarInputController);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        this_00 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputControllerTouch);
        AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
        return (IAvatarInputController *)this_00;
      }
    }
    this_01 = (AvatarInputController *)FUN_?(TypeInfo__AvatarInputController);
    AvatarInputController::AvatarInputController__ctor(this_01,(MethodInfo *)0x0);
    return (IAvatarInputController *)this_01;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IAvatarInputController *)(*pcVar2)();
  return pIVar3;
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DieByFalling() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_DieByFalling
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && ((pMVar1->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
      if (cVar2 == '\0') {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField != 0)
      {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar3 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar3->fields).gameMode == 0) {
          return;
        }
      }
      pMVar4 = (this->fields)._.mvAvatar;
      if ((pMVar4 != (MVAvatarLocal *)0x0) &&
         (pMVar5 = (pMVar4->fields)._.Health,
         pMVar5 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
        pMVar6 = (pMVar5->klass->vtable).set_Value.method;
        (*(pMVar5->klass->vtable).set_Value.methodPtr)(pMVar5,0,pMVar6);
        pMVar4 = (this->fields)._.mvAvatar;
        if ((pMVar4 != (MVAvatarLocal *)0x0) &&
           (pAVar7 = (pMVar4->fields).interactableLocal, pAVar7 != (AvatarInteractable *)0x0)) {
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
            FUN_?(&
                          MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
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
          if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
               (pMVar8 = (pMVar1->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
              (pMVar9 = (pMVar8->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0)) &&
             (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar9,(MethodInfo *)0x0), pMVar10 != (MVLocalPlayer *)0x0)) {
            avatarId = (pMVar10->fields)._._ActorNr_k__BackingField;
            gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                    (avatarId,avatarId,
                                     (PlayerKilledByType__Enum)
                                     CONCAT71((int7)((ulonglong)pMVar6 >> 8),10),(MethodInfo *)0x0)
            ;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar8 = (pMVar1->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
               (pMVar11 = (pMVar8->fields).operationRequests,
               pMVar11 != (MVNetworkGame_OperationRequests *)0x0)) {
              uVar12 = 0;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                        (pMVar11,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
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
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
              pOVar13 = (Object *)FUN_?(uRam_?,aiStackX_18);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                  (pMVar8 = (pMVar1->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
                 ((pMVar9 = (pMVar8->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0 &&
                  (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (pMVar9,(MethodInfo *)0x0), pMVar10 != (MVLocalPlayer *)0x0))
                 )) {
                aiStackX_18[0] = (pMVar10->fields)._._ActorNr_k__BackingField;
                pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
                if (this_01 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
                  uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar13,pOVar14,
                             (InsertionBehavior__Enum)uVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
                  pOVar13 = (Object *)FUN_?(uRam_?,aiStackX_18);
                  aiStackX_18[0] = avatarId;
                  pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
                  uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar13,pOVar14,
                             (InsertionBehavior__Enum)uVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  aiStackX_18[0]._0_1_ = 8;
                  pOVar13 = (Object *)FUN_?(uRam_?,aiStackX_18);
                  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,10);
                  pOVar14 = (Object *)
                            FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar13,pOVar14,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__NotificationController);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__NotificationsManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField !=
                      0) {
                    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    this_02 = NotificationController::
                              NotificationController_get_NotificationsManager((MethodInfo *)0x0);
                    if (this_02 == (NotificationsManager *)0x0) goto code_?;
                    pOVar13 = (Object *)0x0;
                    NotificationsManager::NotificationsManager_InstantiateNotification
                              (this_02,NotificationType__Enum_Kill,
                               (Dictionary_2_System_Object_System_Object_ *)this_01,
                               (MethodInfo *)0x0);
                  }
                  this_00 = (HashSet_1_System_ByteEnum_ *)(pAVar7->fields).KillNotificationBlacklist
                  ;
                  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                    bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                             ByteEnum]::HashSet_1_System_ByteEnum__Contains
                                       (this_00,(ByteEnum__Enum)
                                                CONCAT71((int7)((ulonglong)pOVar13 >> 8),10),
                                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                       );
                    if (bVar15 == 0) {
                      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                      if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0)
                      goto code_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_PostNotificationOperation
                                (pMVar11,NotificationType__Enum_Kill,
                                 (Dictionary_2_System_Object_System_Object_ *)this_01,
                                 (MethodInfo *)0x0);
                    }
                    pAVar16 = (pAVar7->fields).OnDamageTaken;
                    if (pAVar16 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                      (*(pAVar16->fields)._._.invoke_impl)
                                ((pAVar16->fields)._._.method_code,_UNK_?,0,10,
                                 (pAVar16->fields)._._.method);
                      return;
                    }
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_FixedUpdate
               (MVAvatarLocal_WalkMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarInputController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IMotorAPI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    BVar3._._.m_CachedPtr = (pAVar2->fields)._._._._._;
    if (BVar3._._.m_CachedPtr == (Object_1__Fields)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
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
    cVar6 = (*pcRam_?)(BVar3._._.m_CachedPtr);
    if (cVar6 == '\0') {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
        AvatarMotor::AvatarMotor_UpdateVelocity(pAVar2,(MethodInfo *)0x0);
        return;
      }
    }
    else if (movementMap != (IInputToPlayerMovement *)0x0) {
      puVar7 = (undefined8 *)
                FUN_?(&VStack_8,0,TypeInfo__IInputToPlayerMovement,movementMap);
      fVar9 = (float)*puVar7;
      fVar10 = (float)((ulonglong)*puVar7 >> 0x20);
      fVar11 = *(float *)(puVar7 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar12 != (MVGameControllerBase *)0x0) &&
         (pFVar13 = (pMVar12->fields).flagDebriefingControl, pFVar13 != (FlagDebriefingControl *)0x0))
      {
        if ((pFVar13->fields).IsInFlagDebriefing != 0) {
          pMVar1 = (this->fields)._.mvAvatar;
          pIVar14 = (this->fields).avatarInputController;
          if ((pMVar1 == (MVAvatarLocal *)0x0) ||
             (obj = (pMVar1->fields)._._._.transform, obj == (Transform *)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_15._0_4_ = 0.0;
          auStack_15._4_4_ = 0.0;
          stack0xffffffffffffffb0 = 0;
          pvVar16 = (obj->fields)._._.m_CachedPtr;
          if (pvVar16 == (void *)0x0) {
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
          (*pcRam_?)(pvVar16);
          if (pIVar14 == (IAvatarInputController *)0x0) goto code_?;
          VStack_8.x = (float)auStack_15._0_4_;
          VStack_8.y = (float)auStack_15._4_4_;
          VStack_8.z = (float)auStack_15._8_4_;
          uStack_17 = uStack_18;
          FUN_?();
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar9 = (pVVar19->zeroVector).x;
          fVar10 = (pVVar19->zeroVector).y;
          fVar11 = (pVVar19->zeroVector).z;
        }
        MVAvatarLocal_WalkMode_HandleWaterplane(this,(MethodInfo *)0x0);
        pIVar14 = (this->fields).avatarInputController;
        uVar20 = FUN_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
        pMVar1 = (this->fields)._.mvAvatar;
        bVar21 = (this->fields).isFiring;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
          puVar7 = (undefined8 *)
                    (*(pAVar2->klass->vtable).get_Velocity.methodPtr)
                              (&VStack_8,pAVar2,(pAVar2->klass->vtable).get_Velocity.method);
          pMVar1 = (this->fields)._.mvAvatar;
          uVar5 = *puVar7;
          uVar22 = *(undefined4 *)(puVar7 + 1);
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            bVar23 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0)
            ;
            pMVar1 = (this->fields)._.mvAvatar;
            if ((pMVar1 != (MVAvatarLocal *)0x0) && (pIVar14 != (IAvatarInputController *)0x0)) {
              bVar24 = (pMVar1->fields)._ForceRotateAvatarToFiringDirection_k__BackingField;
              puVar25 = auStack_15;
              stack0xffffffffffffffb0 = CONCAT44(uStack_18,uVar22);
              VStack_8.y = fVar10;
              VStack_8.x = fVar9;
              auStack_15._0_8_ = uVar5;
              VStack_8.z = fVar11;
              FUN_?();
              pMVar1 = (this->fields)._.mvAvatar;
              if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                 (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
                AvatarMotor::AvatarMotor_FixedUpdateFunction
                          (pAVar2,(IMotorAPI *)(this->fields).avatarInputController,
                           (MethodInfo *)0x0);
                pMVar1 = (this->fields)._.mvAvatar;
                if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                    (pMVar26 = (pMVar1->fields)._.SpawnRoleModeTypes,
                    pMVar26 != (MVRuntimeDataVariable *)0x0)) &&
                   (pOVar27 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                        ((pMVar26->fields).value,(MethodInfo *)0x0),
                   pOVar27 != (Object *)0x0)) {
                  if ((pOVar27->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar27,lRam_?);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (((ulonglong)pOVar27[1].klass & 2) == 0) {
                    pIVar14 = (this->fields).avatarInputController;
                    if (pIVar14 == (IAvatarInputController *)0x0) goto code_?;
                    puVar7 = (undefined8 *)
                              FUN_?(auStack_15,0,TypeInfo__IMotorAPI,pIVar14,uVar20,bVar21,
                                            puVar25,bVar23,bVar24);
                    VStack_8._0_8_ = *puVar7;
                    VStack_8.z = *(float *)(puVar7 + 1);
                    MVAvatarLocal_WalkMode_SetAnimationState(this,&VStack_8,(MethodInfo *)0x0);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_FrameUpdate
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVAvatarLocal_WalkMode_HandleFocus(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BVar3._._.m_CachedPtr = (pAVar2->fields)._._._._._;
  if (BVar3._._.m_CachedPtr == (Object_1__Fields)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
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
  cVar6 = (*pcRam_?)(BVar3._._.m_CachedPtr);
  if (cVar6 != '\0') {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
        (pSVar7 = (pAVar2->fields).smoothCharacterController,
        pSVar7 == (SmoothCharacterController *)0x0)) ||
       (this_00 = (pSVar7->fields).smoothPhysicsMovement, this_00 == (SmoothPhysicsMovement *)0x0))
    goto code_?;
    SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_00,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 == (MVAvatarLocal *)0x0) ||
      (this_01 = (pMVar1->fields)._._._.gameObject, this_01 == (GameObject *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_01,(MethodInfo *)0x0), obj == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((obj->fields)._._.m_CachedPtr == (void *)0x0) {
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
  (*pcRam_?)();
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
  uVar9 = (pMVar8->fields).worldBounds.m_Extents.y;
  if (0.0 < ((pMVar8->fields).worldBounds.m_Center.y - (float)uVar9) - _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar10 == (MVGameControllerBase *)0x0) || ((pMVar10->fields).game == (MVNetworkGame *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar10 == (MVGameControllerBase *)0x0) goto code_?;
    cVar6 = (*(pMVar10->klass->vtable).__unknown_1.methodPtr)();
    if (cVar6 != '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField != 0)
      {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar11 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar11->fields).gameMode == 0) goto code_?;
      }
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pMVar12 = (pMVar1->fields)._.Health,
         pMVar12 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
      (*(pMVar12->klass->vtable).set_Value.methodPtr)(pMVar12,0);
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar13 = (pMVar1->fields).interactableLocal, pAVar13 == (AvatarInteractable *)0x0))
      goto code_?;
      AvatarInteractable::AvatarInteractable_DieFromFalling(pAVar13,(MethodInfo *)0x0);
    }
  }
code_?:
  if (interactionMap != (InputToInGameAction *)0x0) {
    if ((interactionMap->fields).use != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
      goto code_?;
      cVar6 = (*(pAVar2->klass->vtable).get_IsMovementLocked.methodPtr)();
      if (cVar6 == '\0') {
        MVAvatarLocal_WalkMode_HandleUseInteractionUpdate(this,interactionMap,(MethodInfo *)0x0);
      }
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar14 = (pMVar1->fields).pickupOwner, pAVar14 == (AvatarPickupOwner *)0x0))
    goto code_?;
    pPVar15 = (pAVar14->fields)._.currentItem;
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
    if (pPVar15 != (PickupItem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pPVar15->fields)._._._._.m_CachedPtr != (void *)0x0) {
        MVAvatarLocal_WalkMode_HandlePickupUpdate(this,interactionMap,(MethodInfo *)0x0);
      }
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    bVar16 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if (bVar16 == 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
         (this_02 = (pAVar2->fields).stuckEvaluator, this_02 == (MVRigidBody_StuckEvaluator *)0x0))
      goto code_?;
      bVar16 = MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
                         (this_02,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pMVar12 = (pMVar1->fields)._.Health,
           pMVar12 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
        (*(pMVar12->klass->vtable).set_Value.methodPtr)
                  (pMVar12,0,(pMVar12->klass->vtable).set_Value.method);
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar13 = (pMVar1->fields).interactableLocal, pAVar13 == (AvatarInteractable *)0x0))
        goto code_?;
        AvatarInteractable::AvatarInteractable_DieFromBeingStuck(pAVar13,(MethodInfo *)0x0);
      }
    }
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    bVar16 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
    if (bVar16 != 0) {
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar17 == (MainCameraManager *)0x0) ||
          (pMVar18 = (pMVar17->fields).cameraController, pMVar18 == (MVCameraController *)0x0)) ||
         ((pMVar19 = (pMVar18->fields).cameraStack, pMVar19 == (MVCameraController_CameraStack *)0x0
          || (pMVar20 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                  (pMVar19,(MethodInfo *)0x0), pMVar20 == (MVCameraBase *)0x0))))
      goto code_?;
      iVar21 = (*(pMVar20->klass->vtable).__unknown.methodPtr)(pMVar20);
      if (iVar21 == 0) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (((pMVar1 == (MVAvatarLocal *)0x0) ||
            (pAVar22 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
            pAVar22 == (AvatarLocal *)0x0)) ||
           (pIVar23 = (pAVar22->fields).avatarCameraController,
           pIVar23 == (IAvatarCameraController *)0x0)) goto code_?;
        uVar5 = 0x10;
        goto code_?;
      }
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      bVar16 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        return;
      }
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((((pMVar17 != (MainCameraManager *)0x0) &&
           (pMVar18 = (pMVar17->fields).cameraController, pMVar18 != (MVCameraController *)0x0)) &&
          (pMVar19 = (pMVar18->fields).cameraStack, pMVar19 != (MVCameraController_CameraStack *)0x0
          )) && (pMVar20 = MVCameraController+CameraStack::
                           MVCameraController_CameraStack_get_CurCamera(pMVar19,(MethodInfo *)0x0),
                pMVar20 != (MVCameraBase *)0x0)) {
        iVar21 = (*(pMVar20->klass->vtable).__unknown.methodPtr)(pMVar20);
        if (iVar21 != 0x10) {
          return;
        }
        pMVar1 = (this->fields)._.mvAvatar;
        if (((pMVar1 != (MVAvatarLocal *)0x0) &&
            (pAVar22 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
            pAVar22 != (AvatarLocal *)0x0)) &&
           (pIVar23 = (pAVar22->fields).avatarCameraController,
           pIVar23 != (IAvatarCameraController *)0x0)) {
          uVar5 = 0;
code_?:
          FUN_?(2,TypeInfo__IAvatarCameraController,pIVar23,uVar5);
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


/* Void HandleDroppingItem(InputToInGameAction, Boolean, Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleDroppingItem
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,bool isItemHand,
               bool isItemHolstered,MethodInfo *method)

{
  if (isItemHand == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) {
code_?:
      FUN_?();
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
        (*(pAVar4->klass->vtable).Unequip.methodPtr)(pAVar4,(pAVar4->klass->vtable).Unequip.method);
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleFocus() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleFocus
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateCamera);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((((pMVar1 == (MainCameraManager *)0x0) ||
       (pMVar2 = (pMVar1->fields).cameraController, pMVar2 == (MVCameraController *)0x0)) ||
      (pMVar3 = (pMVar2->fields).cameraStack, pMVar3 == (MVCameraController_CameraStack *)0x0)) ||
     (pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (pMVar3,(MethodInfo *)0x0), pMVar4 == (MVCameraBase *)0x0))
  goto code_?;
  iVar5 = (*(pMVar4->klass->vtable).__unknown.methodPtr)();
  if (iVar5 == 6) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) goto code_?;
    cVar6 = FUN_?();
    if (cVar6 == '\0') {
      pMVar7 = (this->fields)._.mvAvatar;
      if (((pMVar7 != (MVAvatarLocal *)0x0) &&
          (pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar7,(MethodInfo *)0x0),
          pAVar8 != (AvatarLocal *)0x0)) &&
         (pIVar9 = (pAVar8->fields).avatarCameraController,
         pIVar9 != (IAvatarCameraController *)0x0)) {
        FUN_?(6,TypeInfo__IAvatarCameraController,pIVar9,6);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (((pMVar1 != (MainCameraManager *)0x0) &&
            (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
           (pMVar3 = (pMVar2->fields).cameraStack, pMVar3 != (MVCameraController_CameraStack *)0x0))
        {
          pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                              (pMVar3,(MethodInfo *)0x0);
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
          if (pMVar4 != (MVCameraBase *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pMVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
              return;
            }
          }
          pMVar7 = (this->fields)._.mvAvatar;
          if ((pMVar7 != (MVAvatarLocal *)0x0) &&
             (pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar7,(MethodInfo *)0x0),
             pAVar8 != (AvatarLocal *)0x0)) {
            pMVar7 = (this->fields)._.mvAvatar;
            pIVar9 = (pAVar8->fields).avatarCameraController;
            if ((pMVar7 != (MVAvatarLocal *)0x0) &&
               (bVar10 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode
                                  (pMVar7,(MethodInfo *)0x0),
               pIVar9 != (IAvatarCameraController *)0x0)) {
              FUN_?(4,TypeInfo__IAvatarCameraController,pIVar9,(ulonglong)bVar10 << 4);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((((pMVar1 != (MainCameraManager *)0x0) &&
       (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
      (pMVar3 = (pMVar2->fields).cameraStack, pMVar3 != (MVCameraController_CameraStack *)0x0)) &&
     (pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVCameraBase *)0x0)) {
    iVar5 = (*(pMVar4->klass->vtable).__unknown.methodPtr)
                       (pMVar4,(pMVar4->klass->vtable).__unknown.method);
    if (iVar5 == 6) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      cVar6 = FUN_?(7);
      if (cVar6 == '\0') {
        return;
      }
      pMVar7 = (this->fields)._.mvAvatar;
      if (((pMVar7 != (MVAvatarLocal *)0x0) &&
          (pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar7,(MethodInfo *)0x0),
          pAVar8 != (AvatarLocal *)0x0)) &&
         (pIVar9 = (pAVar8->fields).avatarCameraController,
         pIVar9 != (IAvatarCameraController *)0x0)) {
        FUN_?(4,TypeInfo__IAvatarCameraController,pIVar9,6);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (((pMVar1 != (MainCameraManager *)0x0) &&
            (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
           (pMVar3 = (pMVar2->fields).cameraStack, pMVar3 != (MVCameraController_CameraStack *)0x0))
        {
          this_00 = (LobbyStateCamera *)
                    MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                              (pMVar3,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((pMVar1 != (MainCameraManager *)0x0) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            QStack_11.x = 0.0;
            QStack_11.y = 0.0;
            QStack_11.z = 0.0;
            QStack_11.w = 0.0;
            pvVar12 = (obj->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(pvVar12,&QStack_11);
            if (this_00 != (LobbyStateCamera *)0x0) {
              pLVar15 = this_00->klass;
              bVar16 = (TypeInfo__LobbyStateCamera->_1).naturalAligment;
              if (((pLVar15->_1).naturalAligment < bVar16) ||
                 ((pLVar15->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
                  (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                FUN_?(this_00,TypeInfo__LobbyStateCamera);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              bVar16 = (TypeInfo__LobbyStateCamera->_1).naturalAligment;
              if ((bVar16 <= (pLVar15->_1).naturalAligment) &&
                 ((pLVar15->_1).typeHierarchy[(ulonglong)bVar16 - 1] ==
                  (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                LobbyStateCamera::LobbyStateCamera_SetRotation(this_00,&QStack_11,(MethodInfo *)0x0)
                ;
                return;
              }
              FUN_?(this_00,TypeInfo__LobbyStateCamera);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
      bVar5 = (*(pPVar4->klass->vtable).get_CanHolster.methodPtr)();
      if (isItemHolstered == 0) {
        if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
        bVar2 = 0;
        bVar6 = (interactionMap->fields).holster != 0;
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
          (*(pAVar7->klass->vtable).Unholster.methodPtr)
                    (pAVar7,(pAVar7->klass->vtable).Unholster.method);
          pMVar1 = (this->fields)._.mvAvatar;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             (pAVar3 = (pMVar1->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) {
            bVar2 = (this->fields).storedIsHandEquipableValue;
code_?:
            AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
                      (pAVar3,bVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pAVar7 = (pMVar1->fields).avatarEquipable, pAVar7 != (AvatarEquipable *)0x0)) {
          (*(pAVar7->klass->vtable).Holster.methodPtr)();
          pMVar1 = (this->fields)._.mvAvatar;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             (pAVar3 = (pMVar1->fields).pickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) {
            bVar2 = 0;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
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
    iVar5 = (*(((((((this->fields)._.mvAvatar)->fields).pickupOwner)->fields)._.currentItem)->klass
              ->vtable).__unknown.methodPtr)();
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
                (this,interactionMap,iVar5 == 5,bVar4,(MethodInfo *)0x0);
      MVAvatarLocal_WalkMode_HandleHolsteringItem
                (this,interactionMap,iVar5 == 5,bVar4,(MethodInfo *)0x0);
      if (iVar5 == 5) {
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
               (pAVar6 = (pMVar1->fields).avatarEquipable, pAVar6 == (AvatarEquipable *)0x0))
            goto code_?;
            (*(pAVar6->klass->vtable).Unequip.methodPtr)
                      (pAVar6,(pAVar6->klass->vtable).Unequip.method);
          }
          return;
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


/* Void HandlePointingItem(InputToInGameAction, Boolean, Boolean) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandlePointingItem
               (MVAvatarLocal_WalkMode *this,InputToInGameAction *interactionMap,bool isItemHand,
               bool isItemHolstered,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  if (isItemHand == 0 && isItemHolstered == 0) {
    pAVar2 = (pMVar1->fields).pickupOwner;
    if ((pAVar2 == (AvatarPickupOwner *)0x0) ||
       (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 == (PickupItem *)0x0))
    goto code_?;
    cVar4 = (*(pPVar3->klass->vtable).get_ThirdPersonGunMode.methodPtr)();
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar2 = (pMVar1->fields).pickupOwner;
    if (cVar4 == '\0') {
      if ((pAVar2 == (AvatarPickupOwner *)0x0) ||
         (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 == (PickupItem *)0x0))
      goto code_?;
      cVar4 = (*(pPVar3->klass->vtable).get_IsHandEquippable.methodPtr)
                         (pPVar3,(pPVar3->klass->vtable).get_IsHandEquippable.method);
      if (cVar4 != '\0') {
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 == (AvatarPickupOwner *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AvatarLimbManagerLocal);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = (pAVar2->fields).mvAvatar;
        if ((pMVar5 == (MVAvatar *)0x0) ||
           (pAVar6 = (pMVar5->fields).limbManager, pAVar6 == (AvatarLimbManager *)0x0))
        goto code_?;
        bVar7 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
           ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
          FUN_?(pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pAVar9 = pAVar6[1].fields.OnAvatarRotate;
        if (pAVar9 == (Action *)0x0) goto code_?;
        if (*(char *)&(pAVar9->fields)._._.interp_method != '\0') {
          pvVar10 = (pAVar9->fields)._._.method_ptr;
          *(undefined4 *)((longlong)&(pAVar9->fields)._._.delegate_trampoline + 4) =
               *(undefined4 *)&(pAVar9->fields)._._.delegate_trampoline;
          uVar11 = *(undefined4 *)&(pAVar9->fields)._._.invoke_impl;
          (pAVar9->fields)._._.extra_arg = pvVar10;
          *(undefined4 *)&(pAVar9->fields)._._.method_code = uVar11;
          *(undefined4 *)&(pAVar9->fields)._._.field_0x64 = 3;
        }
      }
    }
    else {
      if (pAVar2 == (AvatarPickupOwner *)0x0) goto code_?;
      AvatarPickupOwner::AvatarPickupOwner_HandlePointWeapon(pAVar2,(MethodInfo *)0x0);
    }
  }
  else {
    if (interactionMap == (InputToInGameAction *)0x0) goto code_?;
    pAVar2 = (pMVar1->fields).pickupOwner;
    bVar12 = (interactionMap->fields).fire;
    if (pAVar2 == (AvatarPickupOwner *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AvatarLimbManagerLocal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (bVar12 != 0) {
      pMVar5 = (pAVar2->fields).mvAvatar;
      if ((pMVar5 == (MVAvatar *)0x0) ||
         (pAVar6 = (pMVar5->fields).limbManager, pAVar6 == (AvatarLimbManager *)0x0))
      goto code_?;
      bVar7 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
         ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
        FUN_?(pAVar6);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pAVar9 = pAVar6[1].fields.OnAvatarRotate;
      if (pAVar9 == (Action *)0x0) goto code_?;
      if (*(char *)&(pAVar9->fields)._._.interp_method != '\0') {
        pvVar10 = (pAVar9->fields)._._.method_ptr;
        *(undefined4 *)((longlong)&(pAVar9->fields)._._.delegate_trampoline + 4) =
             *(undefined4 *)&(pAVar9->fields)._._.delegate_trampoline;
        uVar11 = *(undefined4 *)&(pAVar9->fields)._._.invoke_impl;
        (pAVar9->fields)._._.extra_arg = pvVar10;
        *(undefined4 *)&(pAVar9->fields)._._.method_code = uVar11;
        *(undefined4 *)&(pAVar9->fields)._._.field_0x64 = 1;
        pDVar13 = (pAVar9->fields)._.delegates;
        if (pDVar13 != (Delegate__Array *)0x0) {
          (*(code *)pDVar13->max_length)(pDVar13->vector[4],1);
        }
      }
    }
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    bVar12 = (*(pPVar3->klass->vtable).get_IsHandEquippable.methodPtr)
                       (pPVar3,(pPVar3->klass->vtable).get_IsHandEquippable.method);
    if (bVar12 == (this->fields).storedIsHandEquipableValue) {
      return;
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
        (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
       (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
      bVar12 = (*(pPVar3->klass->vtable).get_IsHandEquippable.methodPtr)
                         (pPVar3,(pPVar3->klass->vtable).get_IsHandEquippable.method);
      pMVar1 = (this->fields)._.mvAvatar;
      (this->fields).storedIsHandEquipableValue = bVar12;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
        AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
                  (pAVar2,bVar12,(MethodInfo *)0x0);
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


/* Void HandleStuck() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleStuck
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.Health, pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    pMVar3 = (pMVar2->klass->vtable).set_Value.method;
    (*(pMVar2->klass->vtable).set_Value.methodPtr)(pMVar2,0,pMVar3);
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pAVar4 = (pMVar1->fields).interactableLocal, pAVar4 != (AvatarInteractable *)0x0)) {
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
        FUN_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__NotificationController);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
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
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar5 != (MVGameControllerBase *)0x0) &&
          (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
         (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
        pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
        if (pMVar8 != (MVLocalPlayer *)0x0) {
          avatarId = (pMVar8->fields)._._ActorNr_k__BackingField;
          gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                  (avatarId,avatarId,
                                   (PlayerKilledByType__Enum)
                                   CONCAT71((int7)((ulonglong)pMVar3 >> 8),0xe),(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar5 != (MVGameControllerBase *)0x0) &&
              (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
             (pMVar9 = (pMVar6->fields).operationRequests,
             pMVar9 != (MVNetworkGame_OperationRequests *)0x0)) {
            uVar10 = 0;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (pMVar9,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
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
            aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
            pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_18);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar5 != (MVGameControllerBase *)0x0) &&
                (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
               (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
              pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar7,(MethodInfo *)0x0);
              if (pMVar8 != (MVLocalPlayer *)0x0) {
                aiStackX_18[0] = (pMVar8->fields)._._ActorNr_k__BackingField;
                pOVar12 = (Object *)FUN_?(uRam_?,aiStackX_18);
                if (this_01 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
                  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar11,pOVar12,
                             (InsertionBehavior__Enum)uVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
                  pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_18);
                  aiStackX_18[0] = avatarId;
                  pOVar12 = (Object *)FUN_?(uRam_?,aiStackX_18);
                  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar11,pOVar12,
                             (InsertionBehavior__Enum)uVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  aiStackX_18[0]._0_1_ = 8;
                  pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_18);
                  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0xe);
                  pOVar12 = (Object *)
                            FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar11,pOVar12,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__NotificationController);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__NotificationsManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField !=
                      0) {
                    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    this_02 = NotificationController::
                              NotificationController_get_NotificationsManager((MethodInfo *)0x0);
                    if (this_02 == (NotificationsManager *)0x0) goto code_?;
                    pOVar11 = (Object *)0x0;
                    NotificationsManager::NotificationsManager_InstantiateNotification
                              (this_02,NotificationType__Enum_Kill,
                               (Dictionary_2_System_Object_System_Object_ *)this_01,
                               (MethodInfo *)0x0);
                  }
                  this_00 = (HashSet_1_System_ByteEnum_ *)(pAVar4->fields).KillNotificationBlacklist
                  ;
                  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                    bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                            ByteEnum]::HashSet_1_System_ByteEnum__Contains
                                      (this_00,(ByteEnum__Enum)
                                               CONCAT71((int7)((ulonglong)pOVar11 >> 8),0xe),
                                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                      );
                    if (bVar13 == 0) {
                      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                      if (pMVar9 == (MVNetworkGame_OperationRequests *)0x0)
                      goto code_?;
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_PostNotificationOperation
                                (pMVar9,NotificationType__Enum_Kill,
                                 (Dictionary_2_System_Object_System_Object_ *)this_01,
                                 (MethodInfo *)0x0);
                    }
                    pAVar14 = (pAVar4->fields).OnDamageTaken;
                    if (pAVar14 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                      (*(pAVar14->fields)._._.invoke_impl)
                                ((pAVar14->fields)._._.method_code,_UNK_?,0,0xe,
                                 (pAVar14->fields)._._.method);
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
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  if (bVar2 == 0) {
code_?:
    pUVar3 = (pMVar1->fields).useInteractorHandler;
    if (pUVar3 != (UseInteractorHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      UseInteractorHandler::UseInteractorHandler_UpdateInteractorsWOID(pUVar3,(MethodInfo *)0x0);
      pDVar4 = (pUVar3->fields).useInteractors;
      if (pDVar4 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
        if ((pDVar4->fields)._count == (pDVar4->fields)._freeCount) {
          return;
        }
        pLVar5 = UseInteractorHandler::UseInteractorHandler_SortByDistance
                            (pUVar3,(MethodInfo *)0x0);
        if (pLVar5 != (List_1_UseInteractor_ *)0x0) {
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
          puStack_11 = (undefined1 *)((ulonglong)(uint)(pLVar5->fields)._version << 0x20);
          lStack_12 = (longlong)puStack_11;
          puStack_13 = (undefined *)0x0;
          uStack_7 = 0;
          puStack_11 = (undefined1 *)&pLStack_14;
          pLStack_14 = pLVar5;
          bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&pLStack_14,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                             );
          if (bVar2 == 0) {
            return;
          }
          goto code_?;
        }
      }
      FUN_?();
      FUN_?();
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    goto code_?;
  }
  pUVar3 = (pMVar1->fields).useInteractorHandler;
  if (pUVar3 == (UseInteractorHandler *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar4 = (pUVar3->fields).useInteractors;
  if (pDVar4 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0) goto code_?;
  if ((pDVar4->fields)._count == (pDVar4->fields)._freeCount) {
code_?:
    pMVar1 = (this->fields)._.mvAvatar;
  }
  else {
    pLVar5 = UseInteractorHandler::UseInteractorHandler_SortByDistance(pUVar3,(MethodInfo *)0x0);
    if (pLVar5 == (List_1_UseInteractor_ *)0x0) goto code_?;
    if ((pLVar5->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pUVar16 = (pLVar5->fields)._items;
    if (pUVar16 == (UseInteractor__Array *)0x0) goto code_?;
    if ((int)pUVar16->max_length == 0) {
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pUVar17 = pUVar16->vector[0];
    if (pUVar17 == (UseInteractor *)0x0) goto code_?;
    if ((pUVar17->fields).checkCanUseFunction != (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
      pFVar18 = (pUVar17->fields).checkCanUseFunction;
      cVar19 = (*(pFVar18->fields)._._.invoke_impl)
                         ((pFVar18->fields)._._.method_code,(pUVar3->fields).ownerWoId,
                          (pUVar3->fields).interactionBase,(pFVar18->fields)._._.method);
      if (cVar19 == '\0') goto code_?;
    }
    pUVar20 = (pUVar17->fields).useInteractorVisuals;
    if (pUVar20 == (UseInteractorVisualization *)0x0) goto code_?;
    UVar21 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                       (pUVar20,(MethodInfo *)0x0);
    if ((((byte)UVar21 & 0xf) < 2) || ((pUVar17->fields)._UsedInVehicles_k__BackingField == 0))
    goto code_?;
    if ((pUVar17->fields)._UsedDirectlyInVehicles_k__BackingField == 0) {
      pMVar1 = (this->fields)._.mvAvatar;
code_?:
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      goto code_?;
    }
    pUVar20 = (pUVar17->fields).useInteractorVisuals;
    if (pUVar20 == (UseInteractorVisualization *)0x0) goto code_?;
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pUVar20->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if (pMVar1 == (MVAvatarLocal *)0x0) {
code_?:
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
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
  pAVar22 = (pMVar1->fields).avatarMotor;
  if (pAVar22 != (AvatarMotor *)0x0) {
    puVar23 = (undefined8 *)(*(pAVar22->klass->vtable).get_Velocity.methodPtr)(auStack_24);
    pUVar3 = (pMVar1->fields).useInteractorHandler;
    uVar25 = *puVar23;
    uVar26 = *(undefined4 *)(puVar23 + 1);
    if (pUVar3 != (UseInteractorHandler *)0x0) {
      this_00 = (pMVar1->fields).vehicleRigidBody;
      this_01 = (pUVar3->fields).triggingColliders;
      if ((this_00 != (MVRigidBody *)0x0) &&
         (collider = (Collider *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this_00,
                                UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                               ), this_01 != (ColliderCollection *)0x0)) {
        Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                  (this_01,collider,(MethodInfo *)0x0);
        bVar27 = iRam_? != 0;
        (pMVar1->fields).vehicleRigidBody = (MVRigidBody *)0x0;
        if (bVar27) {
          uVar6 = (uint)((ulonglong)&(pMVar1->fields).vehicleRigidBody >> 0xc);
          uVar10 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar27 = uVar9 == *puVar8;
            if (bVar27) {
              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar27);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar28 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar28 != (MVGameControllerBase *)0x0) &&
            (pMVar29 = (pMVar28->fields).game, pMVar29 != (MVNetworkGame *)0x0)) &&
           (this_02 = (pMVar29->fields)._PlayerController_k__BackingField,
           this_02 != (MVLocalObjectController *)0x0)) {
          bVar2 = MVLocalObjectController::MVLocalObjectController_DetachWorldObjectFromVehicle
                             (this_02,(pMVar1->fields)._._._._.id,(int32_t *)&stack0x00000008,0,
                              (MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)pMVar1,(MethodInfo *)0x0);
          pAVar30 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
          if (pAVar30 != (AvatarLocal *)0x0) {
            pIVar31 = (pAVar30->fields).avatarCameraController;
            if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MainCameraManager);
            }
            if (pIVar31 != (IAvatarCameraController *)0x0) {
              FUN_?(2,TypeInfo__IAvatarCameraController);
              pAVar22 = (pMVar1->fields).avatarMotor;
              if (pAVar22 != (AvatarMotor *)0x0) {
                (*(pAVar22->klass->vtable).Reset.methodPtr)
                          (pAVar22,(pAVar22->klass->vtable).Reset.method);
                pAVar22 = (pMVar1->fields).avatarMotor;
                if (pAVar22 != (AvatarMotor *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pAVar22,1,(MethodInfo *)0x0);
                  this_03 = (pMVar1->fields).triggerHandler;
                  if (this_03 != (MVTriggerHandler *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)this_03,1,(MethodInfo *)0x0);
                    pAVar22 = (pMVar1->fields).avatarMotor;
                    if (pAVar22 != (AvatarMotor *)0x0) {
                      uStack_7 = CONCAT44(uStack_7._4_4_,uVar26);
                      auStack_24 = (undefined1  [8])uVar25;
                      MVRigidBody::MVRigidBody_AddImpulse_1
                                ((MVRigidBody *)pAVar22,(Vector3 *)auStack_24,0,(MethodInfo *)0x0);
                      (*(pMVar1->klass->vtable).OnLeaveVehicle.methodPtr)(pMVar1);
                      if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      this_06 = TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0;
                      if (this_06 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0) {
                        if (*(int *)&(TypeInfo__MVAvatarLocal____c->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        object = TypeInfo__MVAvatarLocal____c->static_fields->__9;
                        this_06 = (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)
                                  FUN_?(
                                               TypeInfo__MVAvatarLocal__SpawnRoleDataReceiverActionDelegate
                                               );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)this_06,(Object *)object,
                                   MethodInfo__MVAvatarLocal____c___LeaveVehicle_b__83_0_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0 = this_06;
                        if (iRam_? != 0) {
                          uVar6 = (uint)((ulonglong)
                                          &TypeInfo__MVAvatarLocal____c->static_fields->__9__83_0 >>
                                         0xc);
                          uVar10 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                          do {
                            uVar9 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                            puVar8 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                            LOCK();
                            bVar27 = uVar9 == *puVar8;
                            if (bVar27) {
                              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar27);
                        }
                      }
                      if ((pMVar1->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) {
                        if (this_06 == (MVAvatarLocal_SpawnRoleDataReceiverActionDelegate *)0x0)
                        goto code_?;
                        (*(this_06->fields)._._.invoke_impl)((this_06->fields)._._.method_code);
                      }
                      this_04 = (pMVar1->fields).pickupGUI;
                      if (this_04 != (PickupGUI *)0x0) {
                        PickupGUI::PickupGUI_AvatarLeftVehicle(this_04,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar28 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if ((pMVar28 != (MVGameControllerBase *)0x0) &&
                           (pMVar29 = (pMVar28->fields).game, pMVar29 != (MVNetworkGame *)0x0)) {
                          this_05 = (pMVar29->fields).transformNetworkManager;
                          woID = (pMVar1->fields)._._._._.id;
                          this_07 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
                          MVNetworkReporter::MVNetworkReporter__ctor
                                    (this_07,(MVWorldObjectClient *)pMVar1,(MethodInfo *)0x0);
                          if (this_05 != (TransformNetworkManager *)0x0) {
                            TransformNetworkManager::TransformNetworkManager_AddReporter
                                      (this_05,woID,this_07,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleWaterplane() */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_HandleWaterplane
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Swim);
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).waterPlaneManager;
    pMVar2 = (this->fields)._.mvAvatar;
    if (((pMVar2 == (MVAvatarLocal *)0x0) ||
        (this_01 = (pMVar2->fields)._._._.gameObject, this_01 == (GameObject *)0x0)) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0), obj == (Transform *)0x0)) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&VStack_3);
    if (this_00 == (WaterPlaneManager *)0x0) goto DAT_?;
    aVStack_7[0].x = VStack_3.x;
    aVStack_7[0].y = VStack_3.y;
    aVStack_7[0].z = VStack_3.z;
    fVar8 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                      (this_00,aVStack_7,(MethodInfo *)0x0);
    fVar9 = (this->fields).swimStartProximity;
    pfVar10 = &(this->fields).prevWaterProximity;
    if ((fVar9 < *pfVar10 || fVar9 == *pfVar10) || (fVar8 < fVar9)) {
      if (((this->fields).prevWaterProximity <= fVar9) || (fVar9 <= fVar8))
      goto code_?;
      pMVar2 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Walk;
    }
    else {
      pMVar2 = (this->fields)._.mvAvatar;
      animationState = StringLiteral_Swim;
    }
    if (pMVar2 != (MVAvatarLocal *)0x0) {
      MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar2,animationState,(MethodInfo *)0x0);
code_?:
      (this->fields).prevWaterProximity = fVar8;
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsInJetpack() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_IsInJetpack
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
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
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,id,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        bVar4 = (TypeInfo__MVJetPack->_1).naturalAligment;
        if ((bVar4 <= (pMVar3->klass->_1).naturalAligment) &&
           ((MVJetPack__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            TypeInfo__MVJetPack)) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetAnimationState(Vector3) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_SetAnimationState
               (MVAvatarLocal_WalkMode *this,Vector3 *moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Swim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) &&
     (pJVar3 = (pAVar2->fields).jumpState, pJVar3 != (JumpState *)0x0)) {
    (this->fields).isJumping = (pJVar3->fields).jumping;
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
       (pJVar3 = (pAVar2->fields).jumpState, pJVar3 == (JumpState *)0x0)) goto code_?;
    bVar4 = (pJVar3->fields).airJumping != 0;
    if (bVar4) {
      (pJVar3->fields).airJumping = 0;
    }
    if ((this->fields).swimStartProximity <= (this->fields).prevWaterProximity) {
      pMVar1 = (this->fields)._.mvAvatar;
      value = StringLiteral_Swim;
    }
    else {
      if (((this->fields).isJumping == 0) || (bVar4)) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (((this->fields).isJumping & bVar4) == 0) {
          if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
          value = StringLiteral_Walk;
          if (moveDirection->y * moveDirection->y + moveDirection->x * moveDirection->x +
              moveDirection->z * moveDirection->z <= 0.0) {
            value = StringLiteral_Idle;
          }
          goto code_?;
        }
        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields)._.mvAvatar;
      value = StringLiteral_Jump;
    }
    if (pMVar1 != (MVAvatarLocal *)0x0) {
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ,value,0);
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
      pSVar5 = (pMVar1->fields).currAnim;
      if (pSVar5 != value) {
        if (((pSVar5 != (String *)0x0) && (value != (String *)0x0)) &&
           ((pSVar5->fields)._stringLength == (value->fields)._stringLength)) {
          in_R9 = (Object__Class *)0x0;
          bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar5->fields)._firstChar,
                              (uint8_t *)&(value->fields)._firstChar,
                              (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            return;
          }
        }
        pMVar7 = (pMVar1->fields)._.Animation;
        if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
          pOVar8 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar7->fields).value,(MethodInfo *)0x0);
          if (pOVar8 != (Object *)0x0) {
            in_R9 = pOVar8->klass;
            bVar9 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            if (((in_R9->_1).naturalAligment < bVar9) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (in_R9->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              FUN_?(pOVar8);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          pSVar5 = (pMVar1->fields).currAnim;
          if (pSVar5 == value) {
            return;
          }
          if (((pSVar5 != (String *)0x0) && (value != (String *)0x0)) &&
             ((pSVar5->fields)._stringLength == (value->fields)._stringLength)) {
            in_R9 = (Object__Class *)0x0;
            bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar5->fields)._firstChar,
                                (uint8_t *)&(value->fields)._firstChar,
                                (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              return;
            }
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_00 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
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
              uVar11 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,
                         (Object *)StringLiteral_state,(Object *)value,
                         (InsertionBehavior__Enum)uVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pOVar8 = (Object *)FUN_?(uRam_?,&stack0x00000008);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,
                         (Object *)StringLiteral_timeStamp,pOVar8,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pMVar7 = (pMVar1->fields)._.Animation;
              if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
                MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                          (pMVar7,(Object *)this_01,(MethodInfo *)0x0);
                bVar4 = iRam_? == 0;
                (pMVar1->fields).currAnim = value;
                if (bVar4) {
                  return;
                }
                uVar12 = (uint)((ulonglong)&(pMVar1->fields).currAnim >> 0xc);
                puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar14 = *puVar13;
                  LOCK();
                  uVar15 = *puVar13;
                  if (uVar14 == uVar15) {
                    *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar14 != uVar15);
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
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


/* MVAvatarLocal+WalkMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor
               (MVAvatarLocal_WalkMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarSound__HandleActiveBounce__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarSound__HandleWallJump__);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarSound_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarSound>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarMotor__OnActiveBounceDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarMotor__OnWallJumpDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__WalkMode__OnHandleFiring_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).swimStartProximity = 0.6;
  (this->fields)._.mvAvatar = mvAvatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  (this->fields)._.modeTypes = 1;
  if ((mvAvatar == (MVAvatarLocal *)0x0) ||
     (pAVar6 = (mvAvatar->fields).pickupOwner, pAVar6 == (AvatarPickupOwner *)0x0))
  goto code_?;
  pMVar7 = (pAVar6->fields)._.onHandleFiring;
  this_01 = (UnityAction_1_System_ByteEnum_ *)
            FUN_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
  UnityAction_1_System_ByteEnum___ctor
            (this_01,(Object *)this,MethodInfo__MVAvatarLocal__WalkMode__OnHandleFiring_bool_,
             (MethodInfo *)0x0);
  pMVar8 = (MVPickupOwner_OnHandleFiringDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar7,(Delegate *)this_01,(MethodInfo *)0x0);
  pMVar7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
  if (pMVar8 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
    (pAVar6->fields)._.onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
  }
  else {
    pMVar9 = pMVar7;
    if (pMVar8->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (pAVar6->fields)._.onHandleFiring = pMVar9;
    pMVar9 = pMVar7;
    if (pMVar8->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pAVar6->fields)._.onHandleFiring >> 0xc);
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
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarInputController);
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
  pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar11 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar11->fields).gameMode == 2) {
code_?:
    this_02 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputController);
    AvatarInputController::AvatarInputController__ctor
              ((AvatarInputController *)this_02,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    this_02 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputControllerTouch);
    AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_02,(MethodInfo *)0x0);
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarInputController = (IAvatarInputController *)this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarInputController >> 0xc);
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
  this_00 = (mvAvatar->fields)._._._.gameObject;
  if (this_00 == (GameObject *)0x0) goto code_?;
  pAVar12 = (AvatarSound *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (this_00,
                       AvatarSound_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarSound>__)
  ;
  bVar1 = iRam_? != 0;
  (this->fields).avatarSound = pAVar12;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarSound >> 0xc);
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
  pAVar13 = (mvAvatar->fields).avatarMotor;
  if (pAVar13 == (AvatarMotor *)0x0) goto code_?;
  a = (pAVar13->fields).OnWallJump;
  pAVar12 = (this->fields).avatarSound;
  pDVar14 = (Delegate *)FUN_?(TypeInfo__AvatarMotor__OnWallJumpDelegate);
  pMVar15 = MethodInfo__AvatarSound__HandleWallJump__;
  bVar1 = iRam_? != 0;
  (pDVar14->fields).method_ptr = MethodInfo__AvatarSound__HandleWallJump__->virtualMethodPointer;
  (pDVar14->fields).method = pMVar15;
  (pDVar14->fields).m_target = (Object *)pAVar12;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(pDVar14->fields).m_target >> 0xc);
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
  uVar16 = pMVar15->parameters_count;
  (pDVar14->fields).method_code = pDVar14;
  if ((pMVar15->flags & 0x10) == 0) {
    if (pAVar12 == (AvatarSound *)0x0) {
      uVar17 = func_?();
      FUN_?(uVar17,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
code_?:
    (pDVar14->fields).method_code = (pDVar14->fields).m_target;
    puVar18 = (pDVar14->fields).method_ptr;
  }
  else {
    if (uVar16 != 0) goto code_?;
    puVar18 = &UNK_?;
  }
  (pDVar14->fields).invoke_impl = puVar18;
  (pDVar14->fields).extra_arg = FUN_?;
  pMVar8 = (MVPickupOwner_OnHandleFiringDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,pDVar14,(MethodInfo *)0x0)
  ;
  if (pMVar8 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
    (pAVar13->fields).OnWallJump = (AvatarMotor_OnWallJumpDelegate *)0x0;
  }
  else {
    pMVar9 = pMVar7;
    if ((AvatarMotor_OnWallJumpDelegate__Class *)pMVar8->klass ==
        TypeInfo__AvatarMotor__OnWallJumpDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (pAVar13->fields).OnWallJump = (AvatarMotor_OnWallJumpDelegate *)pMVar9;
    pMVar9 = pMVar7;
    if ((AvatarMotor_OnWallJumpDelegate__Class *)pMVar8->klass ==
        TypeInfo__AvatarMotor__OnWallJumpDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pAVar13->fields).OnWallJump >> 0xc);
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
  pAVar13 = (mvAvatar->fields).avatarMotor;
  if (pAVar13 == (AvatarMotor *)0x0) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  a_00 = (pAVar13->fields).OnActiveBounce;
  pAVar12 = (this->fields).avatarSound;
  pDVar14 = (Delegate *)FUN_?(TypeInfo__AvatarMotor__OnActiveBounceDelegate);
  pMVar15 = MethodInfo__AvatarSound__HandleActiveBounce__;
  bVar1 = iRam_? != 0;
  (pDVar14->fields).method_ptr = MethodInfo__AvatarSound__HandleActiveBounce__->virtualMethodPointer
  ;
  (pDVar14->fields).method = pMVar15;
  (pDVar14->fields).m_target = (Object *)pAVar12;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(pDVar14->fields).m_target >> 0xc);
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
  uVar16 = pMVar15->parameters_count;
  (pDVar14->fields).method_code = pDVar14;
  if ((pMVar15->flags & 0x10) == 0) {
    if (pAVar12 == (AvatarSound *)0x0) {
      uVar17 = func_?();
      FUN_?(uVar17,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else if (uVar16 == 0) {
    puVar18 = &UNK_?;
    goto code_?;
  }
  (pDVar14->fields).method_code = (pDVar14->fields).m_target;
  puVar18 = (pDVar14->fields).method_ptr;
code_?:
  (pDVar14->fields).invoke_impl = puVar18;
  (pDVar14->fields).extra_arg = FUN_?;
  pMVar8 = (MVPickupOwner_OnHandleFiringDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a_00,pDVar14,(MethodInfo *)0x0);
  if (pMVar8 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
    (pAVar13->fields).OnActiveBounce = (AvatarMotor_OnActiveBounceDelegate *)0x0;
  }
  else {
    pMVar9 = pMVar7;
    if ((AvatarMotor_OnActiveBounceDelegate__Class *)pMVar8->klass ==
        TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      FUN_?(pMVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (pAVar13->fields).OnActiveBounce = (AvatarMotor_OnActiveBounceDelegate *)pMVar9;
    if ((AvatarMotor_OnActiveBounceDelegate__Class *)pMVar8->klass ==
        TypeInfo__AvatarMotor__OnActiveBounceDelegate) {
      pMVar7 = pMVar8;
    }
    if (pMVar7 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      FUN_?(pMVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pAVar13->fields).OnActiveBounce >> 0xc);
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
  return;
}


/* Boolean get_IsSwimming() */

bool Assembly-CSharp.dll::MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode_get_IsSwimming
               (MVAvatarLocal_WalkMode *this,MethodInfo *method)

{
  return (this->fields).swimStartProximity <= (this->fields).prevWaterProximity;
}

