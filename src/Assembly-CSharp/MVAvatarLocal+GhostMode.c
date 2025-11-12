
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_Activate
               (MVAvatarLocal_GhostMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
    value = (Object *)FUN_?(uRam_?,&stack0x00000010);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        (pMVar1->fields)._.healParticleSpawnTime = fVar4;
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pMVar5 = (pMVar1->fields)._.shield, pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0))
        {
          (*(pMVar5->klass->vtable).set_Value.methodPtr)
                    (pMVar5,0,(pMVar5->klass->vtable).set_Value.method);
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar1,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._.mvAvatar;
              (this->fields).haveSetTransparency = 0;
              if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                  (pAVar6 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
                  pAVar6 != (AvatarLocal *)0x0)) &&
                 ((pAVar6->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
                FUN_?();
                pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (((pMVar7 != (MainCameraManager *)0x0) &&
                    (pMVar8 = (pMVar7->fields).cameraController,
                    pMVar8 != (MVCameraController *)0x0)) &&
                   ((this_01 = (pMVar8->fields).cameraStack,
                    this_01 != (MVCameraController_CameraStack *)0x0 &&
                    (pMVar9 = MVCameraController+CameraStack::
                               MVCameraController_CameraStack_get_CurCamera
                                         (this_01,(MethodInfo *)0x0), pMVar9 != (MVCameraBase *)0x0
                    )))) {
                  (*(pMVar9->klass->vtable).Reset.methodPtr)
                            (pMVar9,(pMVar9->klass->vtable).Reset.method);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                      (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                     (pGVar12 = (pMVar11->fields).GameEventManager, pGVar12 != (GameEventManager *)0x0)
                     ) {
                    pGVar13 = (pGVar12->fields).AvatarCommandsBuildMode;
                    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_02,(Object *)this,
                               MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__,
                               (MethodInfo *)0x0);
                    if (pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Action);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      ppAVar14 = &(pGVar13->fields).OnSetToEditMode;
                      a = (pGVar13->fields).OnSetToEditMode;
                      do {
                        pAVar15 = (Action *)
                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
                        pAVar16 = (Action *)0x0;
                        if (pAVar15 != (Action *)0x0) {
                          if (pAVar15->klass == TypeInfo__System__Action) {
                            pAVar16 = pAVar15;
                          }
                          if (pAVar16 == (Action *)0x0) {
                            FUN_?(pAVar15);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                        }
                        LOCK();
                        pAVar15 = *ppAVar14;
                        bVar17 = a == pAVar15;
                        if (bVar17) {
                          *ppAVar14 = pAVar16;
                          pAVar15 = a;
                        }
                        UNLOCK();
                        pAVar16 = a;
                        if (!bVar17) {
                          pAVar16 = pAVar15;
                        }
                        if (iRam_? != 0) {
                          uVar18 = (uint)((ulonglong)ppAVar14 >> 0xc);
                          uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
                          do {
                            uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                            puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                            LOCK();
                            bVar17 = uVar20 == *puVar21;
                            if (bVar17) {
                              *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar17);
                        }
                        bVar17 = pAVar16 != a;
                        a = pAVar16;
                      } while (bVar17);
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_CreateInputController
          (MVAvatarLocal_GhostMode *this,MethodInfo *method)

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

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_DeActivate
               (MVAvatarLocal_GhostMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,CONCAT44(in_register_00000014,toMode));
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    if ((pMVar1->fields)._.isHidden == 0) {
      pAVar2 = (pMVar1->fields)._.avatar;
      if ((pAVar2 == (Avatar *)0x0) ||
         (this_00 = (pAVar2->fields).avatarFader, this_00 == (AvatarFader *)0x0))
      goto code_?;
      AvatarFader::AvatarFader_SetTransparency(this_00,_UNK_?,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
      this_01 = (pGVar5->fields).AvatarCommandsBuildMode;
      this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__MVAvatarLocal__GhostMode__OnEnterEditMode__,
                 (MethodInfo *)0x0);
      if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                  (this_01,(Action *)this_03,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__IAvatarCameraController,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar6 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar6->fields).maskMode = 0;
          this_02 = (pMVar6->fields).mainCamera;
          if (this_02 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (this_02,(pMVar6->fields).cullingMask,(MethodInfo *)0x0);
            uVar7 = 0;
            (pMVar6->fields).blueModeEnabled = 0;
            MainCameraManager::MainCameraManager_RenderLogic
                      (pMVar6,(pMVar6->fields).isLogicRendered,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              (*(pMVar1->klass->vtable).set_Visible.methodPtr)
                        (pMVar1,CONCAT71((int7)((ulonglong)uVar7 >> 8),1),
                         (pMVar1->klass->vtable).set_Visible.method);
              pMVar1 = (this->fields)._.mvAvatar;
              if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                  (pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
                  pAVar8 != (AvatarLocal *)0x0)) &&
                 (pIVar9 = (pAVar8->fields).avatarCameraController,
                 pIVar9 != (IAvatarCameraController *)0x0)) {
                FUN_?(2,TypeInfo__IAvatarCameraController,pIVar9,0);
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (((pMVar6 != (MainCameraManager *)0x0) &&
                    (pMVar10 = (pMVar6->fields).cameraController,
                    pMVar10 != (MVCameraController *)0x0)) &&
                   ((pMVar11 = (pMVar10->fields).cameraStack,
                    pMVar11 != (MVCameraController_CameraStack *)0x0 &&
                    (pMVar12 = MVCameraController+CameraStack::
                               MVCameraController_CameraStack_get_CurCamera
                                         (pMVar11,(MethodInfo *)0x0), pMVar12 != (MVCameraBase *)0x0)
                    ))) {
                  (*(pMVar12->klass->vtable).Reset.methodPtr)();
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if ((((pMVar6 != (MainCameraManager *)0x0) &&
                       (pMVar10 = (pMVar6->fields).cameraController,
                       pMVar10 != (MVCameraController *)0x0)) &&
                      (pMVar11 = (pMVar10->fields).cameraStack,
                      pMVar11 != (MVCameraController_CameraStack *)0x0)) &&
                     (pMVar12 = MVCameraController+CameraStack::
                                MVCameraController_CameraStack_get_CurCamera
                                          (pMVar11,(MethodInfo *)0x0), pMVar12 != (MVCameraBase *)0x0
                     )) {
                    obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0);
                    pMVar1 = (this->fields)._.mvAvatar;
                    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                       (obj = (pMVar1->fields)._._._.transform, obj != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar13 = (obj->fields)._._.m_CachedPtr;
                      if (pvVar13 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      pcVar14 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0))
                      {
                        uVar7 = func_?(&UNK_?);
                        FUN_?(uVar7,0);
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      pcRam_? = pcVar14;
                      (*pcRam_?)(pvVar13);
                      if (obj_00 == (Transform *)0x0) {
                        FUN_?();
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      uStack_15 = 0;
                      uStack_16 = 0;
                      uStack_17 = 0;
                      uStack_18 = 0;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar13 = (obj_00->fields)._._.m_CachedPtr;
                      if (pvVar13 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)obj_00,(MethodInfo *)0x0);
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      pcVar14 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0))
                      {
                        uVar7 = func_?(&UNK_?);
                        FUN_?(uVar7,0);
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                      pcRam_? = pcVar14;
                      (*pcRam_?)(pvVar13,&uStack_15);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
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


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_FixedUpdate
               (MVAvatarLocal_GhostMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method
               )

{
  if ((this->fields).haveSetTransparency == 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pMVar1->fields)._.isHidden == 0) {
      pAVar3 = (pMVar1->fields)._.avatar;
      if ((pAVar3 == (Avatar *)0x0) ||
         (this_00 = (pAVar3->fields).avatarFader, this_00 == (AvatarFader *)0x0))
      goto code_?;
      AvatarFader::AvatarFader_SetTransparency(this_00,_UNK_?,(MethodInfo *)0x0);
    }
    (this->fields).haveSetTransparency = 1;
  }
  return;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_OnEnterEditMode
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
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
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 == (IPlayModeUI *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
        pVVar7 = &(pIVar5->vtable).ShowEUseIcon + (pIVar3[uVar4].offset + 8);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1,TypeInfo__IPlayModeUI,8,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,1,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void ResetCamera() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_ResetCamera
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar1->fields).maskMode = 0;
    this_00 = (pMVar1->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (this_00,(pMVar1->fields).cullingMask,(MethodInfo *)0x0);
      uVar2 = 0;
      (pMVar1->fields).blueModeEnabled = 0;
      MainCameraManager::MainCameraManager_RenderLogic
                (pMVar1,(pMVar1->fields).isLogicRendered,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._.mvAvatar;
      if (pMVar3 != (MVAvatarLocal *)0x0) {
        (*(pMVar3->klass->vtable).set_Visible.methodPtr)
                  (pMVar3,CONCAT71((int7)((ulonglong)uVar2 >> 8),1),
                   (pMVar3->klass->vtable).set_Visible.method);
        pMVar3 = (this->fields)._.mvAvatar;
        if (((pMVar3 != (MVAvatarLocal *)0x0) &&
            (pAVar4 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0),
            pAVar4 != (AvatarLocal *)0x0)) &&
           (pIVar5 = (pAVar4->fields).avatarCameraController,
           pIVar5 != (IAvatarCameraController *)0x0)) {
          FUN_?(2,TypeInfo__IAvatarCameraController,pIVar5,0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (((pMVar1 != (MainCameraManager *)0x0) &&
              (pMVar6 = (pMVar1->fields).cameraController, pMVar6 != (MVCameraController *)0x0)) &&
             ((pMVar7 = (pMVar6->fields).cameraStack,
              pMVar7 != (MVCameraController_CameraStack *)0x0 &&
              (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                  (pMVar7,(MethodInfo *)0x0), pMVar8 != (MVCameraBase *)0x0)))) {
            (*(pMVar8->klass->vtable).Reset.methodPtr)();
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (((pMVar1 != (MainCameraManager *)0x0) &&
                (pMVar6 = (pMVar1->fields).cameraController, pMVar6 != (MVCameraController *)0x0))
               && ((pMVar7 = (pMVar6->fields).cameraStack,
                   pMVar7 != (MVCameraController_CameraStack *)0x0 &&
                   (pMVar8 = MVCameraController+CameraStack::
                             MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0),
                   pMVar8 != (MVCameraBase *)0x0)))) {
              obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pMVar8,(MethodInfo *)0x0);
              pMVar3 = (this->fields)._.mvAvatar;
              if ((pMVar3 != (MVAvatarLocal *)0x0) &&
                 (obj = (pMVar3->fields)._._._.transform, obj != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar9 = (obj->fields)._._.m_CachedPtr;
                if (pvVar9 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar2 = func_?(&UNK_?);
                  FUN_?(uVar2,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pvVar9);
                if (obj_00 == (Transform *)0x0) {
                  FUN_?();
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uStack_11 = 0;
                uStack_12 = 0;
                uStack_13 = 0;
                uStack_14 = 0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar9 = (obj_00->fields)._._.m_CachedPtr;
                if (pvVar9 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar2 = func_?(&UNK_?);
                  FUN_?(uVar2,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pvVar9,&uStack_11);
                return;
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


/* Void SendNotification() */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode_SendNotification
               (MVAvatarLocal_GhostMode *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_18[0]._0_1_ = 0x12;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,1);
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_18);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_01,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = 8;
  pOVar2 = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this_00 == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this_00,NotificationType__Enum_WaitCountDown,
                 (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVAvatarLocal+GhostMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+GhostMode::MVAvatarLocal_GhostMode__ctor
               (MVAvatarLocal_GhostMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._.mvAvatar = mvAvatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    mvAvatar = (MVAvatarLocal *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pMVar3 = mvAvatar->klass;
      LOCK();
      bVar1 = pMVar3 == mvAvatar->klass;
      if (bVar1) {
        mvAvatar->klass = (MVAvatarLocal__Class *)((ulonglong)pMVar3 | 1L << (longlong)method);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.modeTypes = 4;
  if (bVar1) {
    FUN_?(&TypeInfo__AvatarInputControllerTouch,mvAvatar,method);
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
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    if ((pGVar4->fields).gameMode != 2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        lVar5 = FUN_?(TypeInfo__AvatarInputControllerTouch);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AvatarInputControllerTouch,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        AvatarInputControllerTouchSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerTouchSettings>_AvatarInputControllerTouchSettings_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar1 = cRam_? == '\0';
        fVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
        *(undefined8 *)(lVar5 + 0x10) =
             *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
        *(float *)(lVar5 + 0x18) = fVar6;
        if (bVar1) {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar1 = cRam_? == '\0';
        pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
        fVar6 = (pQVar7->identityQuaternion).y;
        fVar8 = (pQVar7->identityQuaternion).z;
        fVar9 = (pQVar7->identityQuaternion).w;
        *(float *)(lVar5 + 0x1c) = (pQVar7->identityQuaternion).x;
        *(float *)(lVar5 + 0x20) = fVar6;
        *(float *)(lVar5 + 0x24) = fVar8;
        *(float *)(lVar5 + 0x28) = fVar9;
        if (bVar1) {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar10 == (PrefabPool *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        original = (pPVar10->fields).avatarInputControllerTouchSettings;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             AvatarInputControllerTouchSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerTouchSettings>_AvatarInputControllerTouchSettings_
                            );
        bVar1 = iRam_? != 0;
        *(Object **)(lVar5 + 0x30) = pOVar12;
        if (bVar1) {
          uVar2 = (uint)(lVar5 + 0x30U >> 0xc);
          lVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar13 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar14 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar1 = uVar13 == *puVar14;
            if (bVar1) {
              *puVar14 = uVar13 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pCVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera = pCVar15;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)TypeInfo__AvatarInputControllerTouch->static_fields >> 0xc);
          lVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar13 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar14 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar1 = uVar13 == *puVar14;
            if (bVar1) {
              *puVar14 = uVar13 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        return;
      }
    }
    lVar5 = FUN_?(TypeInfo__AvatarInputController);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AvatarInputController,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar1 = cRam_? == '\0';
    fVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    *(undefined8 *)(lVar5 + 0x10) =
         *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    *(float *)(lVar5 + 0x18) = fVar6;
    if (bVar1) {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar16 = *(undefined8 *)
              &(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).z;
    *(undefined8 *)(lVar5 + 0x1c) =
         *(undefined8 *)&TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    *(undefined8 *)(lVar5 + 0x24) = uVar16;
    pCVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    TypeInfo__AvatarInputController->static_fields->mainCamera = pCVar15;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__AvatarInputController->static_fields >> 0xc);
      puVar14 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar17 = *puVar14;
        LOCK();
        uVar13 = *puVar14;
        if (uVar17 == uVar13) {
          *puVar14 = uVar17 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar17 != uVar13);
    }
    return;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

