
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_Activate
               (MVAvatarLocal_WaitMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
    aiStackX_10[0] = (this->fields)._.modeTypes;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,pOVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar1,(MethodInfo *)0x0);
          MVAvatarLocal_WaitMode_ResetCamera(this,(MethodInfo *)0x0);
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
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          aiStackX_10[0]._0_1_ = 0x12;
          pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
          aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,1);
          value = (Object *)FUN_?(uRam_?,aiStackX_10);
          if (this_02 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar2,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            NotificationController::NotificationController_PushNotification_2
                      (NotificationType__Enum_WaitCountDown,
                       (Dictionary_2_System_Object_System_Object_ *)this_02,
                       NotificationLifetime__Enum_High,(MethodInfo *)0x0);
            if ((char)fromMode == '\t') {
              pMVar1 = (this->fields)._.mvAvatar;
              if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                 (this_01 = (pMVar1->fields).avatarLocalModes,
                 this_01 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
              MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                        (this_01,fromMode & 0xff,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_CreateInputController
          (MVAvatarLocal_WaitMode *this,MethodInfo *method)

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


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_FixedUpdate
               (MVAvatarLocal_WaitMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (this_00 = (pMVar1->fields).avatarMotor, this_00 == (AvatarMotor *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (this->fields).avatarInputController;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IMotorAPI,pIVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  cVar5 = (*(this_00->klass->vtable).get_IsMovementLocked.methodPtr)(this_00);
  if (cVar5 != '\0') {
    return;
  }
  pSVar6 = (this_00->fields).smoothCharacterController;
  if (((pSVar6 == (SmoothCharacterController *)0x0) ||
      (pMVar7 = (pSVar6->fields).controller, pMVar7 == (MvCharacterController *)0x0)) ||
     (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar7,(MethodInfo *)0x0),
     pIVar3 == (IAvatarInputController *)0x0)) goto code_?;
  puVar9 = (undefined8 *)FUN_?(&VStack_10,2,TypeInfo__IMotorAPI,pIVar3);
  if (pTVar8 != (Transform *)0x0) {
    auStack_11._0_8_ = *puVar9;
    auStack_11._8_8_ = puVar9[1];
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar12,auStack_11);
    pSVar6 = (this_00->fields).smoothCharacterController;
    fVar14 = (this_00->fields).velocityPrevFrame.z;
    uVar13._0_4_ = (this_00->fields).velocityPrevFrame.x;
    uVar13._4_4_ = (this_00->fields).velocityPrevFrame.y;
    if ((pSVar6 != (SmoothCharacterController *)0x0) &&
       (pMVar7 = (pSVar6->fields).controller, pMVar7 != (MvCharacterController *)0x0)) {
      this_01 = (this_00->fields).movableMotorState;
      if (this_01 != (MVMovableMotorState *)0x0) {
        VStack_15._0_8_ = uVar13;
        VStack_15.z = fVar14;
        bVar16 = MVMovableMotorState::MVMovableMotorState_Move
                           (this_01,&VStack_15,pMVar7,(pMVar7->fields).elipsoidRadius.x,
                            (this_00->fields)._.groundState,&VStack_4,(MethodInfo *)0x0);
        inputJump = FUN_?(4,TypeInfo__IMotorAPI,pIVar3);
        puVar9 = (undefined8 *)FUN_?(&VStack_10,0,TypeInfo__IMotorAPI,pIVar3);
        fVar17 = VStack_4.z;
        uVar18 = VStack_4._0_8_;
        VStack_15.z = *(float *)(puVar9 + 1);
        VStack_15._0_8_ = *puVar9;
        VStack_19.x = VStack_4.x;
        VStack_19.y = VStack_4.y;
        VStack_19.z = VStack_4.z;
        VStack_10._0_8_ = uVar13;
        VStack_10.z = fVar14;
        pVVar20 = AvatarMotor::AvatarMotor_GetVelocity
                            ((Vector3 *)auStack_11,this_00,&VStack_10,&VStack_19,inputJump,
                             &VStack_15,(MethodInfo *)0x0);
        uVar21 = VStack_4._0_8_;
        if (bVar16 == 0) {
          VStack_19.x = pVVar20->x;
          VStack_19.y = pVVar20->y;
          VStack_19.z = pVVar20->z;
          VStack_4.x = (float)uVar18;
          VStack_4.y = SUB84(uVar18,4);
          VStack_10.x = VStack_4.x;
          VStack_10.y = VStack_4.y;
          VStack_10.z = fVar17;
          VStack_4._0_8_ = uVar21;
          AvatarMotor::AvatarMotor_Move(this_00,&VStack_19,&VStack_10,(MethodInfo *)0x0);
          AvatarMotor::AvatarMotor_UpdateVelocity(this_00,(MethodInfo *)0x0);
          auStack_11._0_4_ = (this_00->fields).velocityPrevFrame.x;
          auStack_11._4_4_ = (this_00->fields).velocityPrevFrame.y;
          fVar22 = (this_00->fields).velocityPrevFrame.z;
          (this_00->fields).velocityPrevFrame.x = auStack_11._0_4_ - VStack_4.x;
          (this_00->fields).velocityPrevFrame.y = auStack_11._4_4_ - VStack_4.y;
          (this_00->fields).velocityPrevFrame.z = fVar22 - fVar17;
        }
        else {
          uVar18._0_4_ = pVVar20->x;
          uVar18._4_4_ = pVVar20->y;
          fVar17 = pVVar20->z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_10.x = (pVVar23->zeroVector).x;
          VStack_10.y = (pVVar23->zeroVector).y;
          VStack_10.z = (pVVar23->zeroVector).z;
          VStack_19._0_8_ = uVar18;
          VStack_19.z = fVar17;
          AvatarMotor::AvatarMotor_Move(this_00,&VStack_19,&VStack_10,(MethodInfo *)0x0);
          AvatarMotor::AvatarMotor_UpdateVelocity(this_00,(MethodInfo *)0x0);
        }
        this_02 = (this_00->fields).impactState;
        if (this_02 != (ImpactState *)0x0) {
          VStack_19.x = (this_00->fields).velocityPrevFrame.x;
          VStack_19.y = (this_00->fields).velocityPrevFrame.y;
          VStack_19.z = (this_00->fields).velocityPrevFrame.z;
          interactableLocal = (this_00->fields).interactableLocal;
          VStack_10._0_8_ = uVar13;
          VStack_10.z = fVar14;
          fVar14 = ImpactState::ImpactState_UpdateImpactState
                             (this_02,&VStack_19,&VStack_10,(MVInteractableBase *)interactableLocal,
                              (MethodInfo *)0x0);
          if (fVar14 != 0.0) {
            pAVar24 = (this_00->fields).interactableLocal;
            if (pAVar24 == (AvatarInteractable *)0x0) goto code_?;
            interactableLocal =
                 (AvatarInteractable *)CONCAT71((int7)((ulonglong)interactableLocal >> 8),5);
            (*(pAVar24->klass->vtable).TakeDamage.methodPtr)
                      (pAVar24,fVar14,0,interactableLocal,(pAVar24->klass->vtable).TakeDamage.method);
          }
          bVar25 = FUN_?(4);
          pBVar26 = (this_00->fields).bounceState;
          if (pBVar26 != (BounceState *)0x0) {
            if ((((pBVar26->fields).bounced & bVar25) != 0) &&
               ((this_00->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
              pAVar27 = (this_00->fields).OnActiveBounce;
              (*(pAVar27->fields)._._.invoke_impl)((pAVar27->fields)._._.method_code);
            }
            this_03 = (this_00->fields)._GetSizeState_k__BackingField;
            if (this_03 != (SizeState *)0x0) {
              fVar14 = SizeState::SizeState_get_AvatarScale(this_03,(MethodInfo *)0x0);
              if ((this_03->fields).currentSize != fVar14) {
                SizeState::SizeState_ScaleChanged(this_03,(MethodInfo *)0x0);
              }
              pSVar6 = (this_00->fields).smoothCharacterController;
              this_04 = (this_00->fields).waterState;
              if (((pSVar6 != (SmoothCharacterController *)0x0) &&
                  (pMVar7 = (pSVar6->fields).controller, pMVar7 != (MvCharacterController *)0x0)) &&
                 (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pMVar7,(MethodInfo *)0x0),
                 pTVar8 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_4.x = 0.0;
                VStack_4.y = 0.0;
                VStack_4.z = 0.0;
                pvVar12 = (pTVar8->fields)._._.m_CachedPtr;
                if (pvVar12 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcRam_? = pcVar2;
                (*pcRam_?)(pvVar12,&VStack_4);
                pAVar24 = (this_00->fields).interactableLocal;
                if (this_04 != (WaterState *)0x0) {
                  (this_04->fields).worldPosition.x = VStack_4.x;
                  (this_04->fields).worldPosition.y = VStack_4.y;
                  (this_04->fields).worldPosition.z = VStack_4.z;
                  WaterState::WaterState_UpdateModifiers
                            (this_04,(MVInteractableBase *)pAVar24,(MethodInfo *)0x0);
                  VStack_10.x = (this_04->fields).worldPosition.x;
                  VStack_10.y = (this_04->fields).worldPosition.y;
                  VStack_10.z = (this_04->fields).worldPosition.z;
                  fVar14 = WaterState::WaterState_ComputeAvatarWaterProximity
                                     (this_04,&VStack_10,(MethodInfo *)0x0);
                  if ((fVar14 < _UNK_? ^ (this_04->fields).hasGillsNoLungs) == 1) {
                    (this_04->fields).oxygen = (this_04->fields).oxygenMax;
                  }
                  else {
                    fVar14 = (this_04->fields).oxygen;
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    fVar17 = (float)(*pcRam_?)();
                    fVar14 = fVar14 - fVar17;
                    fVar17 = 0.0;
                    if (0.0 <= fVar14) {
                      fVar17 = fVar14;
                    }
                    (this_04->fields).oxygen = fVar17;
                    if (fVar17 <= 0.0) {
                      pcVar2 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
                      {
                        uVar13 = func_?(&UNK_?);
                        FUN_?(uVar13,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pcRam_? = pcVar2;
                      fVar14 = (float)(*pcRam_?)();
                      if (pAVar24 == (AvatarInteractable *)0x0) goto code_?;
                      (*(pAVar24->klass->vtable).TakeDamage.methodPtr)
                                (pAVar24,fVar14 * _UNK_?,0,
                                 CONCAT71((int7)((ulonglong)interactableLocal >> 8),6),
                                 (pAVar24->klass->vtable).TakeDamage.method);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_FrameUpdate
               (MVAvatarLocal_WaitMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

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
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).currentGameState == 2) {
      return;
    }
    pMVar4 = (this->fields)._.mvAvatar;
    if ((pMVar4 != (MVAvatarLocal *)0x0) &&
       (pMVar5 = (pMVar4->fields).avatarLocalModes, pMVar5 != (MVAvatarLocal_AvatarLocalModes *)0x0)
       ) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                      ,CONCAT71((int7)((ulonglong)TypeInfo__MVGameControllerBase->static_fields >> 8
                                      ),1),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = (pMVar5->fields).currentMode;
      bVar7 = (pMVar5->fields).currentState;
      if (pMVar6 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(pMVar6->klass->vtable).__unknown.methodPtr)
                  (pMVar6,1,(pMVar6->klass->vtable).__unknown.method);
        this_00 = (pMVar5->fields).avatarModes;
        if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
          pMVar6 = (MVAvatarLocal_AvatarMode *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,1,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                              );
          bVar8 = iRam_? != 0;
          (pMVar5->fields).currentMode = pMVar6;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(pMVar5->fields).currentMode >> 0xc);
            puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar11 = *puVar10;
              LOCK();
              uVar12 = *puVar10;
              if (uVar11 == uVar12) {
                *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (uVar11 != uVar12);
          }
          pMVar6 = (pMVar5->fields).currentMode;
          (pMVar5->fields).currentState = 1;
          if (pMVar6 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pMVar6->klass->vtable).Activate.methodPtr)
                      (pMVar6,(ulonglong)bVar7,(pMVar6->klass->vtable).Activate.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ResetCamera() */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_ResetCamera
               (MVAvatarLocal_WaitMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
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
        if ((pMVar3 != (MVAvatarLocal *)0x0) &&
           (pAVar4 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0),
           pAVar4 != (AvatarLocal *)0x0)) {
          pIVar5 = (pAVar4->fields).avatarCameraController;
          if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__MainCameraManager);
          }
          if (pIVar5 != (IAvatarCameraController *)0x0) {
            FUN_?(2,TypeInfo__IAvatarCameraController,pIVar5,
                          TypeInfo__MainCameraManager->static_fields->DefaultCameraType);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if ((((pMVar1 != (MainCameraManager *)0x0) &&
                 (pMVar6 = (pMVar1->fields).cameraController, pMVar6 != (MVCameraController *)0x0))
                && (pMVar7 = (pMVar6->fields).cameraStack,
                   pMVar7 != (MVCameraController_CameraStack *)0x0)) &&
               (pMVar8 = MVCameraController+CameraStack::
                         MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0),
               pMVar8 != (MVCameraBase *)0x0)) {
              (*(pMVar8->klass->vtable).Reset.methodPtr)();
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (((pMVar1 != (MainCameraManager *)0x0) &&
                  (pMVar6 = (pMVar1->fields).cameraController, pMVar6 != (MVCameraController *)0x0))
                 && ((pMVar7 = (pMVar6->fields).cameraStack,
                     pMVar7 != (MVCameraController_CameraStack *)0x0 &&
                     (pMVar8 = MVCameraController+CameraStack::
                               MVCameraController_CameraStack_get_CurCamera
                                         (pMVar7,(MethodInfo *)0x0), pMVar8 != (MVCameraBase *)0x0))
                    )) {
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
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SendNotification() */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode_SendNotification
               (MVAvatarLocal_WaitMode *this,MethodInfo *method)

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


/* MVAvatarLocal+WaitMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode__ctor
               (MVAvatarLocal_WaitMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._.mvAvatar = mvAvatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    mvAvatar = (MVAvatarLocal *)(lVar3 + 0xADDR);
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *(ulonglong *)(lVar3 + 0xADDR);
      if (bVar1) {
        *(ulonglong *)(lVar3 + 0xADDR) = uVar4 | 1L << (longlong)method;
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
  pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar5 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pGVar5->fields).gameMode != 2) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputControllerTouch);
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  this_00 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor
            ((AvatarInputController *)this_00,(MethodInfo *)0x0);
code_?:
  bVar1 = iRam_? != 0;
  (this->fields).avatarInputController = (IAvatarInputController *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarInputController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar7 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar7;
      if (bVar1) {
        *puVar7 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

