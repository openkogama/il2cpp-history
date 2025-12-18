
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_Activate
               (MVAvatarLocal_DeadMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dead);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
  value = (Object *)FUN_?(uRam_?,&stack0x00000010);
  if (this_00 == (MVRuntimeDataVariable *)0x0) goto code_?;
  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (this_01 = (pMVar3->fields).operationRequests,
     this_01 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
  player = (MVPlayer *)0x2;
  pMVar4 = (MethodInfo *)0x0;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
            (this_01,IncrementStatRequestType__Enum_Died,0,(MethodInfo *)0x0);
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar7 = (float)(*pcRam_?)();
  (this->fields).deadTime = fVar7;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar4);
  if (extraout_RAX == 0) goto code_?;
  (this->fields).deadInterval = 4.0;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar4);
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
  fVar7 = (float)(*pcRam_?)();
  if (extraout_RAX_00 == 0) goto code_?;
  *(float *)(extraout_RAX_00 + 0xfc) = fVar7 + (this->fields).deadInterval;
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Dead,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar8 = (pMVar1->fields).avatarEquipable, pAVar8 == (AvatarEquipable *)0x0))
  goto code_?;
  (*(pAVar8->klass->vtable).Unequip.methodPtr)();
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar9 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)pMVar1,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    pMVar1 = (this->fields)._.mvAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (this_02 = (pMVar1->fields).triggerHandler, this_02 == (MVTriggerHandler *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_02,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
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
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar10 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar10 == (MVGameControllerDesktop *)0x0) ||
         ((pMVar10->fields).lockCursorManager == (ILockCursorManager *)0x0))
      goto code_?;
      FUN_?(1,TypeInfo__ILockCursorManager);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) goto code_?;
    FUN_?(8);
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar9 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((((pMVar11 == (MainCameraManager *)0x0) ||
         (pMVar12 = (pMVar11->fields).cameraController, pMVar12 == (MVCameraController *)0x0)) ||
        (this_03 = (pMVar12->fields).cameraStack, this_03 == (MVCameraController_CameraStack *)0x0))
       || (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                               (this_03,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0))
    goto code_?;
    iVar14 = (*(pMVar13->klass->vtable).__unknown.methodPtr)(pMVar13);
    if (iVar14 != 0x10) goto code_?;
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar15 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        pAVar15 == (AvatarLocal *)0x0)) ||
       (pMVar4 = (MethodInfo *)(pAVar15->fields).avatarCameraController,
       pMVar4 == (MethodInfo *)0x0)) goto code_?;
    player_00 = TypeInfo__IAvatarCameraController;
    FUN_?();
    (this->fields).setDeadCamDelayed = 1;
  }
  else {
code_?:
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar15 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        pAVar15 == (AvatarLocal *)0x0)) ||
       (pMVar4 = (MethodInfo *)(pAVar15->fields).avatarCameraController,
       pMVar4 == (MethodInfo *)0x0)) goto code_?;
    player_00 = TypeInfo__IAvatarCameraController;
    FUN_?();
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player_00,pMVar4);
  if (extraout_RAX_01 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar6 = *(undefined8 *)(extraout_RAX_01 + 0xac);
    uVar16 = *(undefined8 *)(extraout_RAX_01 + 0xb4);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_17[0]._0_8_ = uVar6;
    aOStack_17[0]._8_8_ = uVar16;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt(aOStack_17,(MethodInfo *)0x0);
    iVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt_1(iVar18 + 1,aOStack_17[0].currentCryptoKey,(MethodInfo *)0x0);
    aOStack_17[0].hiddenValue = iVar19;
    bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar14 = aOStack_17[0].fakeValue;
    if (bVar9 != 0) {
      iVar14 = iVar18 + 1;
    }
    aOStack_17[0].fakeValue = iVar14;
    bVar20 = cRam_? == '\0';
    *(int32_t *)(extraout_RAX_01 + 0xac) = aOStack_17[0].currentCryptoKey;
    *(int32_t *)(extraout_RAX_01 + 0xb0) = aOStack_17[0].hiddenValue;
    *(int *)(extraout_RAX_01 + 0xb4) = iVar14;
    *(undefined4 *)(extraout_RAX_01 + 0xb8) = aOStack_17[0]._12_4_;
    if (bVar20) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pGVar21 = (pMVar3->fields).GameEventManager, pGVar21 != (GameEventManager *)0x0)) {
      pGVar22 = (pGVar21->fields).AvatarCommandsBuildMode;
      this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_04,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__,
                 (MethodInfo *)0x0);
      if (pGVar22 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar23 = &(pGVar22->fields).OnSetToEditMode;
        a = (pGVar22->fields).OnSetToEditMode;
        do {
          pAVar24 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
          pAVar25 = (Action *)0x0;
          if (pAVar24 != (Action *)0x0) {
            if (pAVar24->klass == TypeInfo__System__Action) {
              pAVar25 = pAVar24;
            }
            if (pAVar25 == (Action *)0x0) {
              FUN_?(pAVar24);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          LOCK();
          pAVar24 = *ppAVar23;
          bVar20 = a == pAVar24;
          if (bVar20) {
            *ppAVar23 = pAVar25;
            pAVar24 = a;
          }
          UNLOCK();
          pAVar25 = a;
          if (!bVar20) {
            pAVar25 = pAVar24;
          }
          if (iRam_? != 0) {
            uVar26 = (uint)((ulonglong)ppAVar23 >> 0xc);
            uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
            do {
              uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
              puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
              LOCK();
              bVar20 = uVar28 == *puVar29;
              if (bVar20) {
                *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
              }
              UNLOCK();
            } while (!bVar20);
          }
          bVar20 = pAVar25 != a;
          a = pAVar25;
        } while (bVar20);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_DeActivate
               (MVAvatarLocal_DeadMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((char)toMode == '\x01') {
    this_00 = (this->fields)._.mvAvatar;
    if ((this_00 == (MVAvatarLocal *)0x0) ||
       (pAVar1 = (this_00->fields).interactableLocal, pAVar1 == (AvatarInteractable *)0x0))
    goto code_?;
    (*(pAVar1->klass->vtable).AddModifier.methodPtr)
              (pAVar1,0x11,0xffffffff,0,(pAVar1->klass->vtable).AddModifier.method);
    MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(this_00,(MethodInfo *)0x0);
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
     (pGVar4 = (pMVar3->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0)) {
    pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar6 = &(pGVar5->fields).OnSetToEditMode;
      source = (pGVar5->fields).OnSetToEditMode;
      do {
        pAVar7 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
        pAVar8 = (Action *)0x0;
        if (pAVar7 != (Action *)0x0) {
          if (pAVar7->klass == TypeInfo__System__Action) {
            pAVar8 = pAVar7;
          }
          if (pAVar8 == (Action *)0x0) {
            FUN_?(pAVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        LOCK();
        pAVar7 = *ppAVar6;
        bVar10 = source == pAVar7;
        if (bVar10) {
          *ppAVar6 = pAVar8;
          pAVar7 = source;
        }
        UNLOCK();
        pAVar8 = source;
        if (!bVar10) {
          pAVar8 = pAVar7;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)ppAVar6 >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        bVar10 = pAVar8 != source;
        source = pAVar8;
      } while (bVar10);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_FixedUpdate
               (MVAvatarLocal_DeadMode *this,IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).inputController;
  pMVar2 = (this->fields)._.mvAvatar;
  if ((pMVar2 != (MVAvatarLocal *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pAVar3,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar6 = (code *)FUN_?(&UNK_?);
        if (pcVar6 == (code *)0x0) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&stack0xffffffffffffffe8);
      if (pMVar1 != (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)0x0) {
        (pMVar1->fields).rot.x = 0.0;
        (pMVar1->fields).rot.y = 0.0;
        (pMVar1->fields).rot.z = 0.0;
        (pMVar1->fields).rot.w = 0.0;
        pMVar2 = (this->fields)._.mvAvatar;
        if ((pMVar2 != (MVAvatarLocal *)0x0) &&
           (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
          pMVar1 = (this->fields).inputController;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__IMotorAPI,pMVar1,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_8.x = 0.0;
          VStack_8.y = 0.0;
          VStack_8.z = 0.0;
          cVar9 = (*(pAVar3->klass->vtable).get_IsMovementLocked.methodPtr)(pAVar3);
          if (cVar9 != '\0') {
            return;
          }
          pSVar10 = (pAVar3->fields).smoothCharacterController;
          if (((pSVar10 == (SmoothCharacterController *)0x0) ||
              (pMVar11 = (pSVar10->fields).controller, pMVar11 == (MvCharacterController *)0x0)) ||
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar11,(MethodInfo *)0x0),
             pMVar1 == (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)0x0))
          goto code_?;
          puVar12 = (undefined8 *)FUN_?(&VStack_13,2,TypeInfo__IMotorAPI,pMVar1);
          if (pTVar4 != (Transform *)0x0) {
            auStack_14._0_8_ = *puVar12;
            auStack_14._8_8_ = puVar12[1];
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar5,auStack_14);
            pSVar10 = (pAVar3->fields).smoothCharacterController;
            fVar15 = (pAVar3->fields).velocityPrevFrame.z;
            uVar7._0_4_ = (pAVar3->fields).velocityPrevFrame.x;
            uVar7._4_4_ = (pAVar3->fields).velocityPrevFrame.y;
            if ((pSVar10 != (SmoothCharacterController *)0x0) &&
               (pMVar11 = (pSVar10->fields).controller, pMVar11 != (MvCharacterController *)0x0)) {
              this_00 = (pAVar3->fields).movableMotorState;
              if (this_00 != (MVMovableMotorState *)0x0) {
                VStack_16._0_8_ = uVar7;
                VStack_16.z = fVar15;
                bVar17 = MVMovableMotorState::MVMovableMotorState_Move
                                   (this_00,&VStack_16,pMVar11,(pMVar11->fields).elipsoidRadius.x,
                                    (pAVar3->fields)._.groundState,&VStack_8,(MethodInfo *)0x0);
                inputJump = FUN_?(4,TypeInfo__IMotorAPI,pMVar1);
                puVar12 = (undefined8 *)FUN_?(&VStack_13,0,TypeInfo__IMotorAPI,pMVar1);
                fVar18 = VStack_8.z;
                uVar19 = VStack_8._0_8_;
                VStack_16.z = *(float *)(puVar12 + 1);
                VStack_16._0_8_ = *puVar12;
                VStack_20.x = VStack_8.x;
                VStack_20.y = VStack_8.y;
                VStack_20.z = VStack_8.z;
                VStack_13._0_8_ = uVar7;
                VStack_13.z = fVar15;
                pVVar21 = AvatarMotor::AvatarMotor_GetVelocity
                                    ((Vector3 *)auStack_14,pAVar3,&VStack_13,&VStack_20,inputJump,
                                     &VStack_16,(MethodInfo *)0x0);
                uVar22 = VStack_8._0_8_;
                if (bVar17 == 0) {
                  VStack_20.x = pVVar21->x;
                  VStack_20.y = pVVar21->y;
                  VStack_20.z = pVVar21->z;
                  VStack_8.x = (float)uVar19;
                  VStack_8.y = SUB84(uVar19,4);
                  VStack_13.x = VStack_8.x;
                  VStack_13.y = VStack_8.y;
                  VStack_13.z = fVar18;
                  VStack_8._0_8_ = uVar22;
                  AvatarMotor::AvatarMotor_Move(pAVar3,&VStack_20,&VStack_13,(MethodInfo *)0x0);
                  AvatarMotor::AvatarMotor_UpdateVelocity(pAVar3,(MethodInfo *)0x0);
                  auStack_14._0_4_ = (pAVar3->fields).velocityPrevFrame.x;
                  auStack_14._4_4_ = (pAVar3->fields).velocityPrevFrame.y;
                  fVar23 = (pAVar3->fields).velocityPrevFrame.z;
                  (pAVar3->fields).velocityPrevFrame.x = auStack_14._0_4_ - VStack_8.x;
                  (pAVar3->fields).velocityPrevFrame.y = auStack_14._4_4_ - VStack_8.y;
                  (pAVar3->fields).velocityPrevFrame.z = fVar23 - fVar18;
                }
                else {
                  uVar19._0_4_ = pVVar21->x;
                  uVar19._4_4_ = pVVar21->y;
                  fVar18 = pVVar21->z;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
                  VStack_13.x = (pVVar24->zeroVector).x;
                  VStack_13.y = (pVVar24->zeroVector).y;
                  VStack_13.z = (pVVar24->zeroVector).z;
                  VStack_20._0_8_ = uVar19;
                  VStack_20.z = fVar18;
                  AvatarMotor::AvatarMotor_Move(pAVar3,&VStack_20,&VStack_13,(MethodInfo *)0x0);
                  AvatarMotor::AvatarMotor_UpdateVelocity(pAVar3,(MethodInfo *)0x0);
                }
                this_01 = (pAVar3->fields).impactState;
                if (this_01 != (ImpactState *)0x0) {
                  VStack_20.x = (pAVar3->fields).velocityPrevFrame.x;
                  VStack_20.y = (pAVar3->fields).velocityPrevFrame.y;
                  VStack_20.z = (pAVar3->fields).velocityPrevFrame.z;
                  interactableLocal = (pAVar3->fields).interactableLocal;
                  VStack_13._0_8_ = uVar7;
                  VStack_13.z = fVar15;
                  fVar15 = ImpactState::ImpactState_UpdateImpactState
                                     (this_01,&VStack_20,&VStack_13,
                                      (MVInteractableBase *)interactableLocal,(MethodInfo *)0x0);
                  if (fVar15 != 0.0) {
                    pAVar25 = (pAVar3->fields).interactableLocal;
                    if (pAVar25 == (AvatarInteractable *)0x0) goto code_?;
                    interactableLocal =
                         (AvatarInteractable *)CONCAT71((int7)((ulonglong)interactableLocal >> 8),5)
                    ;
                    (*(pAVar25->klass->vtable).TakeDamage.methodPtr)
                              (pAVar25,fVar15,0,interactableLocal,
                               (pAVar25->klass->vtable).TakeDamage.method);
                  }
                  bVar26 = FUN_?(4);
                  pBVar27 = (pAVar3->fields).bounceState;
                  if (pBVar27 != (BounceState *)0x0) {
                    if ((((pBVar27->fields).bounced & bVar26) != 0) &&
                       ((pAVar3->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0
                       )) {
                      pAVar28 = (pAVar3->fields).OnActiveBounce;
                      (*(pAVar28->fields)._._.invoke_impl)((pAVar28->fields)._._.method_code);
                    }
                    this_02 = (pAVar3->fields)._GetSizeState_k__BackingField;
                    if (this_02 != (SizeState *)0x0) {
                      fVar15 = SizeState::SizeState_get_AvatarScale(this_02,(MethodInfo *)0x0);
                      if ((this_02->fields).currentSize != fVar15) {
                        SizeState::SizeState_ScaleChanged(this_02,(MethodInfo *)0x0);
                      }
                      pSVar10 = (pAVar3->fields).smoothCharacterController;
                      this_03 = (pAVar3->fields).waterState;
                      if (((pSVar10 != (SmoothCharacterController *)0x0) &&
                          (pMVar11 = (pSVar10->fields).controller,
                          pMVar11 != (MvCharacterController *)0x0)) &&
                         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pMVar11,(MethodInfo *)0x0),
                         pTVar4 != (Transform *)0x0)) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        VStack_8.x = 0.0;
                        VStack_8.y = 0.0;
                        VStack_8.z = 0.0;
                        pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
                        if (pvVar5 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar4,(MethodInfo *)0x0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcVar6 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)
                           ) {
                          uVar7 = func_?(&UNK_?);
                          FUN_?(uVar7,0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcRam_? = pcVar6;
                        (*pcRam_?)(pvVar5,&VStack_8);
                        pAVar25 = (pAVar3->fields).interactableLocal;
                        if (this_03 != (WaterState *)0x0) {
                          (this_03->fields).worldPosition.x = VStack_8.x;
                          (this_03->fields).worldPosition.y = VStack_8.y;
                          (this_03->fields).worldPosition.z = VStack_8.z;
                          WaterState::WaterState_UpdateModifiers
                                    (this_03,(MVInteractableBase *)pAVar25,(MethodInfo *)0x0);
                          VStack_13.x = (this_03->fields).worldPosition.x;
                          VStack_13.y = (this_03->fields).worldPosition.y;
                          VStack_13.z = (this_03->fields).worldPosition.z;
                          fVar15 = WaterState::WaterState_ComputeAvatarWaterProximity
                                             (this_03,&VStack_13,(MethodInfo *)0x0);
                          if ((fVar15 < _UNK_? ^ (this_03->fields).hasGillsNoLungs) == 1) {
                            (this_03->fields).oxygen = (this_03->fields).oxygenMax;
                          }
                          else {
                            fVar15 = (this_03->fields).oxygen;
                            pcVar6 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar6 = (code *)FUN_?(&UNK_?),
                               pcVar6 == (code *)0x0)) {
                              uVar7 = func_?(&UNK_?);
                              FUN_?(uVar7,0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pcRam_? = pcVar6;
                            fVar18 = (float)(*pcRam_?)();
                            fVar15 = fVar15 - fVar18;
                            fVar18 = 0.0;
                            if (0.0 <= fVar15) {
                              fVar18 = fVar15;
                            }
                            (this_03->fields).oxygen = fVar18;
                            if (fVar18 <= 0.0) {
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar7 = func_?(&UNK_?);
                                FUN_?(uVar7,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcRam_? = pcVar6;
                              fVar15 = (float)(*pcRam_?)();
                              if (pAVar25 == (AvatarInteractable *)0x0) goto code_?;
                              (*(pAVar25->klass->vtable).TakeDamage.methodPtr)
                                        (pAVar25,fVar15 * _UNK_?,0,
                                         CONCAT71((int7)((ulonglong)interactableLocal >> 8),6),
                                         (pAVar25->klass->vtable).TakeDamage.method);
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
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
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


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_FrameUpdate
               (MVAvatarLocal_DeadMode *this,InputToInGameAction *interactionMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
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
    if (cVar6 != '\0') {
      pMVar1 = (this->fields)._.mvAvatar;
      if ((((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
          (pSVar7 = (pAVar2->fields).smoothCharacterController,
          pSVar7 == (SmoothCharacterController *)0x0)) ||
         (this_00 = (pSVar7->fields).smoothPhysicsMovement, this_00 == (SmoothPhysicsMovement *)0x0)
         ) goto code_?;
      SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_00,(MethodInfo *)0x0);
    }
    if ((this->fields).setDeadCamDelayed != 0) {
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
      fVar8 = (float)(*pcRam_?)();
      if (_UNK_? < fVar8 - (this->fields).deadTime) {
        pMVar1 = (this->fields)._.mvAvatar;
        if (((pMVar1 == (MVAvatarLocal *)0x0) ||
            (pAVar9 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
            pAVar9 == (AvatarLocal *)0x0)) ||
           (pIVar10 = (pAVar9->fields).avatarCameraController,
           pIVar10 == (IAvatarCameraController *)0x0)) goto code_?;
        FUN_?(2,TypeInfo__IAvatarCameraController,pIVar10,0x14);
        (this->fields).setDeadCamDelayed = 0;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleResetUIPause() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_HandleResetUIPause
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    (this->fields).deadInterval = 4.0;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (extraout_RAX_00 != 0) {
      *(float *)(extraout_RAX_00 + 0xfc) = fVar3 + (this->fields).deadInterval;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_HasDied
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  if ((this->fields).deadTime != 0.0) {
    return 1;
  }
  return 0;
}


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_OnEnterEditMode
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

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


/* Void RevivePlayer() */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode_RevivePlayer
               (MVAvatarLocal_DeadMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarRespawnHandler, pAVar2 == (AvatarRespawnHandler *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  if ((pAVar2->fields).shouldRespawnAsGhost == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 != (MVGameControllerBase *)0x0) &&
        (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0))
       && (pMVar1 = (pAVar2->fields).mvAvatar, pMVar1 != (MVAvatarLocal *)0x0)) {
      pMVar7 = (pMVar1->fields).avatarLocalModes;
      uVar8 = (undefined7)((ulonglong)uVar4 >> 8);
      if ((pFVar6->fields).IsInFlagDebriefing == 0) {
        if (pMVar7 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
          MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                    (pMVar7,(AvatarRuntimeState__Enum)CONCAT71(uVar8,1),(MethodInfo *)0x0);
          (pAVar2->fields).shouldRespawnAsGhost = 1;
          return;
        }
      }
      else if (pMVar7 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                  (pMVar7,(AvatarRuntimeState__Enum)CONCAT71(uVar8,7),(MethodInfo *)0x0);
        (pAVar2->fields).shouldRespawnAsGhost = 1;
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
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar6->fields).IsInFlagDebriefing == 0) {
        pMVar1 = (pAVar2->fields).mvAvatar;
        if ((pMVar1 == (MVAvatarLocal *)0x0) ||
           (pMVar7 = (pMVar1->fields).avatarLocalModes,
           pMVar7 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                  (pMVar7,(AvatarRuntimeState__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),9),
                   (MethodInfo *)0x0);
        (pAVar2->fields).shouldRespawnAsGhost = 1;
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVAvatarLocal+DeadMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor
               (MVAvatarLocal_DeadMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal_DeadMode__AvatarInputControllerDead);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__DeadMode__HandleDeathBriefingPause_int__int__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__DeadMode__HandleResetUIPause__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).deadInterval = 4.0;
  pMVar1 = (MVAvatarLocal_DeadMode_AvatarInputControllerDead *)
            FUN_?(TypeInfo__MVAvatarLocal_DeadMode__AvatarInputControllerDead);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar2 = iRam_?;
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar3->identityQuaternion).y;
  fVar5 = (pQVar3->identityQuaternion).z;
  fVar6 = (pQVar3->identityQuaternion).w;
  (pMVar1->fields).rot.x = (pQVar3->identityQuaternion).x;
  (pMVar1->fields).rot.y = fVar4;
  (pMVar1->fields).rot.z = fVar5;
  (pMVar1->fields).rot.w = fVar6;
  (this->fields).inputController = pMVar1;
  if (iVar2 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).inputController >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar11);
  }
  (this->fields)._.mvAvatar = mvAvatar;
  if (iVar2 != 0) {
    uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  (this->fields)._.modeTypes = 2;
  if (mvAvatar == (MVAvatarLocal *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pAVar13 = (mvAvatar->fields).OnKilled;
  pDVar14 = (Delegate *)
            FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(pDVar14,this);
  pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
  pAVar15 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
  if (pDVar14 == (Delegate *)0x0) {
    (mvAvatar->fields).OnKilled = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
  }
  else {
    pAVar13 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
              FUN_?(pDVar14,
                            TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    if (pAVar13 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
      FUN_?(pDVar14,pAVar15);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (mvAvatar->fields).OnKilled = pAVar13;
    pAVar15 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    lVar16 = FUN_?(pDVar14,
                           TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    if (lVar16 == 0) {
      FUN_?(pDVar14,pAVar15);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(mvAvatar->fields).OnKilled >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pAVar17 = (mvAvatar->fields).OnSuicide;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__MVAvatarLocal__DeadMode__HandleResetUIPause__,
             (MethodInfo *)0x0);
  pAVar17 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar17,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar17 == (Action *)0x0) {
    (mvAvatar->fields).OnSuicide = (Action *)0x0;
  }
  else {
    pAVar18 = (Action *)0x0;
    if (pAVar17->klass == TypeInfo__System__Action) {
      pAVar18 = pAVar17;
    }
    if (pAVar18 == (Action *)0x0) {
      FUN_?(pAVar17);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (mvAvatar->fields).OnSuicide = pAVar18;
    pAVar18 = (Action *)0x0;
    if (pAVar17->klass == TypeInfo__System__Action) {
      pAVar18 = pAVar17;
    }
    if (pAVar18 == (Action *)0x0) {
      FUN_?(pAVar17);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(mvAvatar->fields).OnSuicide >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  return;
}

