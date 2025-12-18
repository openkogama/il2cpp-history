
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+LobbyMode::MVAvatarLocal_LobbyMode_Activate
               (MVAvatarLocal_LobbyMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController,CONCAT44(in_register_00000014,fromMode));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateCamera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CamRotateTarget);
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
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        cVar2 = '\0';
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    cVar2 = FUN_?(1,TypeInfo__IEditModeUI);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode == 4) goto code_?;
    cVar2 = '\x01';
  }
code_?:
  pMVar3 = (this->fields)._.mvAvatar;
  if (pMVar3 != (MVAvatarLocal *)0x0) {
    this_00 = (pMVar3->fields)._.SpawnRoleModeTypes;
    aiStackX_20[0] = (this->fields)._.modeTypes;
    value = (Object *)FUN_?(uRam_?,aiStackX_20);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      layerName = StringLiteral_CamRotateTarget;
      pMVar3 = (this->fields)._.mvAvatar;
      if ((pMVar3 != (MVAvatarLocal *)0x0) &&
         (pMVar4 = (pMVar3->fields)._.body, pMVar4 != (MVBody *)0x0)) {
        pTVar5 = (pMVar4->fields)._._._.transform;
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (layerName,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_2
                  (pTVar5,(LayerMask)(1 << ((byte)iVar6 & 0x1f)),layer,(MethodInfo *)0x0);
        if (cVar2 != '\0') {
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar7->fields).maskMode = 1;
          this_01 = (pMVar7->fields).mainCamera;
          iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
          if (this_01 == (Camera *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (this_01,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
          (pMVar7->fields).blueModeEnabled = 1;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar8 != (IPlayModeUI *)0x0) {
          FUN_?(8,TypeInfo__IPlayModeUI,pIVar8,1);
          pMVar3 = (this->fields)._.mvAvatar;
          if ((pMVar3 != (MVAvatarLocal *)0x0) &&
             (pMVar4 = (pMVar3->fields)._.body, pMVar4 != (MVBody *)0x0)) {
            pTVar5 = (pMVar4->fields)._._._.transform;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_10._0_4_ = (pVVar9->upVector).x;
            uStack_10._4_4_ = (pVVar9->upVector).y;
            fStack_11 = (pVVar9->upVector).z;
            QStack_12.x = 0.0;
            QStack_12.y = 0.0;
            QStack_12.z = 0.0;
            QStack_12.w = 0.0;
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
            (*pcRam_?)(_UNK_?,&uStack_10,&QStack_12);
            if (pTVar5 != (Transform *)0x0) {
              fStack_15 = QStack_12.x;
              fStack_16 = QStack_12.y;
              fStack_17 = QStack_12.z;
              fStack_18 = QStack_12.w;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar19 = (pTVar5->fields)._._.m_CachedPtr;
              if (pvVar19 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar19);
              pMVar3 = (this->fields)._.mvAvatar;
              if (pMVar3 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar3,(MethodInfo *)0x0);
                pMVar3 = (this->fields)._.mvAvatar;
                if (((pMVar3 != (MVAvatarLocal *)0x0) &&
                    (pAVar20 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                         (pMVar3,(MethodInfo *)0x0), pAVar20 != (AvatarLocal *)0x0))
                   && (pIVar21 = (pAVar20->fields).avatarCameraController,
                      pIVar21 != (IAvatarCameraController *)0x0)) {
                  FUN_?(4,TypeInfo__IAvatarCameraController,pIVar21,6);
                  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (((pMVar7 != (MainCameraManager *)0x0) &&
                      (pMVar22 = (pMVar7->fields).cameraController,
                      pMVar22 != (MVCameraController *)0x0)) &&
                     (this_02 = (pMVar22->fields).cameraStack,
                     this_02 != (MVCameraController_CameraStack *)0x0)) {
                    this_03 = (LobbyStateCamera *)
                              MVCameraController+CameraStack::
                              MVCameraController_CameraStack_get_CurCamera
                                        (this_02,(MethodInfo *)0x0);
                    pMVar3 = (this->fields)._.mvAvatar;
                    if ((pMVar3 != (MVAvatarLocal *)0x0) &&
                       (pTVar5 = (pMVar3->fields)._._._.transform, pTVar5 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      QStack_12.x = 0.0;
                      QStack_12.y = 0.0;
                      QStack_12.z = 0.0;
                      QStack_12.w = 0.0;
                      pvVar19 = (pTVar5->fields)._._.m_CachedPtr;
                      if (pvVar19 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar5,(MethodInfo *)0x0);
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      pcVar13 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
                      {
                        uVar14 = func_?(&UNK_?);
                        FUN_?(uVar14,0);
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      pcRam_? = pcVar13;
                      (*pcRam_?)(pvVar19,&QStack_12);
                      if (this_03 != (LobbyStateCamera *)0x0) {
                        pLVar23 = this_03->klass;
                        bVar24 = (TypeInfo__LobbyStateCamera->_1).naturalAligment;
                        if (((pLVar23->_1).naturalAligment < bVar24) ||
                           ((pLVar23->_1).typeHierarchy[(ulonglong)bVar24 - 1] !=
                            (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                          FUN_?(this_03,TypeInfo__LobbyStateCamera);
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        bVar24 = (TypeInfo__LobbyStateCamera->_1).naturalAligment;
                        if (((pLVar23->_1).naturalAligment < bVar24) ||
                           ((pLVar23->_1).typeHierarchy[(ulonglong)bVar24 - 1] !=
                            (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                          FUN_?(this_03,TypeInfo__LobbyStateCamera);
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        LobbyStateCamera::LobbyStateCamera_SetRotation
                                  (this_03,&QStack_12,(MethodInfo *)0x0);
                        pMVar3 = (this->fields)._.mvAvatar;
                        if ((pMVar3 != (MVAvatarLocal *)0x0) &&
                           (pMVar4 = (pMVar3->fields)._.body, pMVar4 != (MVBody *)0x0)) {
                          if (((pMVar4->fields).forceHidden == 0) && ((pMVar4->fields).visible != 1)
                             ) {
                            (pMVar4->fields).visible = 1;
                            MVBody::MVBody_UpdateVisibility(pMVar4,(MethodInfo *)0x0);
                          }
                          return;
                        }
                      }
                      goto code_?;
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


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+LobbyMode::MVAvatarLocal_LobbyMode_DeActivate
               (MVAvatarLocal_LobbyMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController,CONCAT44(in_register_00000014,toMode));
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pMVar2 = (pMVar1->fields)._.body, pMVar2 == (MVBody *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = (pMVar2->fields)._._._.transform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
  (*pcRam_?)(0);
  if (pTVar4 != (Transform *)0x0) {
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar10,&uStack_6);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_CamRotateTarget);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this_01->fields).maskMode = 0;
      this_00 = (this_01->fields).mainCamera;
      if (this_00 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (this_00,(this_01->fields).cullingMask,(MethodInfo *)0x0);
        (this_01->fields).blueModeEnabled = 0;
        MainCameraManager::MainCameraManager_RenderLogic
                  (this_01,(this_01->fields).isLogicRendered,(MethodInfo *)0x0);
        layerName = StringLiteral_Player;
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) {
          pTVar4 = (pMVar2->fields)._._._.transform;
          iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (layerName,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_2
                    (pTVar4,(LayerMask)(1 << ((byte)iVar11 & 0x1f)),layer,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             ((pAVar12 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
              pAVar12 != (AvatarLocal *)0x0 &&
              (pIVar13 = (pAVar12->fields).avatarCameraController,
              pIVar13 != (IAvatarCameraController *)0x0)))) {
            FUN_?(6,TypeInfo__IAvatarCameraController,pIVar13,6);
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

