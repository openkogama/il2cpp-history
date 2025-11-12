
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_Activate
               (MVAvatarLocal_ReviveMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__);
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
  pMVar2 = (MVPlayer *)FUN_?(uRam_?,&stack0x00000010);
  if (this_00 == (MVRuntimeDataVariable *)0x0) goto code_?;
  pMVar3 = (MethodInfo *)0x0;
  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
            (this_00,(Object *)pMVar2,(MethodInfo *)0x0);
  pcVar4 = pcRam_?;
  (this->fields).reviveElapsed = 0;
  pcVar5 = pcRam_?;
  if ((pcVar4 == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(), pcVar5 = pcVar4, pcVar4 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar5;
  fVar7 = (float)(*pcVar4)();
  (this->fields).deadTime = fVar7;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar3);
  if (extraout_RAX == 0) goto code_?;
  pMVar1 = (this->fields)._.mvAvatar;
  (this->fields).reviveInterval = 10.0;
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
     (this_01 = (pMVar1->fields).triggerHandler, this_01 == (MVTriggerHandler *)0x0))
  goto code_?;
  pMVar3 = (MethodInfo *)0x0;
  pMVar2 = (MVPlayer *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_01,0,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar3);
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
  fVar7 = (float)(*pcRam_?)();
  cVar10 = cRam_?;
  if (extraout_RAX_00 == 0) goto code_?;
  *(float *)(extraout_RAX_00 + 0xf4) = fVar7 + (this->fields).reviveInterval;
  if (cVar10 == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cVar10 = '\x01';
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      cVar10 = cRam_?;
    }
    if (cVar10 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar11 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar11 == (MVGameControllerDesktop *)0x0) ||
         ((pMVar11->fields).lockCursorManager == (ILockCursorManager *)0x0))
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
  (this->fields).setDeadCamDelayed = 0;
  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
  bVar9 = MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((((pMVar12 == (MainCameraManager *)0x0) ||
         (pMVar13 = (pMVar12->fields).cameraController, pMVar13 == (MVCameraController *)0x0)) ||
        (this_02 = (pMVar13->fields).cameraStack, this_02 == (MVCameraController_CameraStack *)0x0))
       || (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                               (this_02,(MethodInfo *)0x0), pMVar14 == (MVCameraBase *)0x0))
    goto code_?;
    iVar15 = (*(pMVar14->klass->vtable).__unknown.methodPtr)(pMVar14);
    if (iVar15 == 0x10) goto code_?;
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        pAVar16 == (AvatarLocal *)0x0)) ||
       ((pAVar16->fields).avatarCameraController == (IAvatarCameraController *)0x0))
    goto code_?;
    FUN_?(2,TypeInfo__IAvatarCameraController);
  }
  else {
code_?:
    pMVar1 = (this->fields)._.mvAvatar;
    if (((pMVar1 == (MVAvatarLocal *)0x0) ||
        (pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
        pAVar16 == (AvatarLocal *)0x0)) ||
       ((pAVar16->fields).avatarCameraController == (IAvatarCameraController *)0x0))
    goto code_?;
    FUN_?(2,TypeInfo__IAvatarCameraController);
    (this->fields).setDeadCamDelayed = 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 != (MVGameControllerBase *)0x0) &&
      (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
     (pGVar19 = (pMVar18->fields).GameEventManager, pGVar19 != (GameEventManager *)0x0)) {
    pGVar20 = (pGVar19->fields).AvatarCommandsBuildMode;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_03,(Object *)this,MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (pGVar20 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar21 = &(pGVar20->fields).OnSetToEditMode;
      a = (pGVar20->fields).OnSetToEditMode;
      do {
        pAVar22 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
        pAVar23 = (Action *)0x0;
        if (pAVar22 != (Action *)0x0) {
          if (pAVar22->klass == TypeInfo__System__Action) {
            pAVar23 = pAVar22;
          }
          if (pAVar23 == (Action *)0x0) {
            FUN_?(pAVar22);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        LOCK();
        pAVar22 = *ppAVar21;
        bVar24 = a == pAVar22;
        if (bVar24) {
          *ppAVar21 = pAVar23;
          pAVar22 = a;
        }
        UNLOCK();
        pAVar23 = a;
        if (!bVar24) {
          pAVar23 = pAVar22;
        }
        if (iRam_? != 0) {
          uVar25 = (uint)((ulonglong)ppAVar21 >> 0xc);
          uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
          do {
            uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
            puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
            LOCK();
            bVar24 = uVar27 == *puVar28;
            if (bVar24) {
              *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
            }
            UNLOCK();
          } while (!bVar24);
        }
        bVar24 = pAVar23 != a;
        a = pAVar23;
      } while (bVar24);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_DeActivate
               (MVAvatarLocal_ReviveMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,CONCAT44(in_register_00000014,toMode));
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__);
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
    pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVAvatarLocal__ReviveMode__OnEnterEditMode__,
               (MethodInfo *)0x0);
    if (pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar5 = &(pGVar4->fields).OnSetToEditMode;
      source = (pGVar4->fields).OnSetToEditMode;
      do {
        pAVar6 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar7 = (Action *)0x0;
        if (pAVar6 != (Action *)0x0) {
          if (pAVar6->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar6;
          }
          if (pAVar7 == (Action *)0x0) {
            FUN_?(pAVar6);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        LOCK();
        pAVar6 = *ppAVar5;
        bVar9 = source == pAVar6;
        if (bVar9) {
          *ppAVar5 = pAVar7;
          pAVar6 = source;
        }
        UNLOCK();
        pAVar7 = source;
        if (!bVar9) {
          pAVar7 = pAVar6;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppAVar5 >> 0xc);
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
        bVar9 = pAVar7 != source;
        source = pAVar7;
      } while (bVar9);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_FixedUpdate
               (MVAvatarLocal_ReviveMode *this,IInputToPlayerMovement *movementMap,
               MethodInfo *method)

{
  pMVar1 = (this->fields).inputController;
  pMVar2 = (this->fields)._.mvAvatar;
  if (((pMVar2 != (MVAvatarLocal *)0x0) &&
      (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pAVar3,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
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
    (*pcRam_?)(pvVar4);
    if (pMVar1 != (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *)0x0) {
      (pMVar1->fields).rot.x = 0.0;
      (pMVar1->fields).rot.y = 0.0;
      (pMVar1->fields).rot.z = 0.0;
      (pMVar1->fields).rot.w = 0.0;
      pMVar2 = (this->fields)._.mvAvatar;
      if ((pMVar2 != (MVAvatarLocal *)0x0) &&
         (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar7._._.m_CachedPtr = (pAVar3->fields)._._._._._;
        if (BVar7._._.m_CachedPtr == (Object_1__Fields)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
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
        cVar8 = (*pcRam_?)(BVar7._._.m_CachedPtr);
        if (cVar8 != '\0') {
          pMVar2 = (this->fields)._.mvAvatar;
          if ((pMVar2 == (MVAvatarLocal *)0x0) ||
             (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 == (AvatarMotor *)0x0))
          goto code_?;
          AvatarMotor::AvatarMotor_FixedUpdateFunction
                    (pAVar3,(IMotorAPI *)(this->fields).inputController,(MethodInfo *)0x0);
        }
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


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_FrameUpdate
               (MVAvatarLocal_ReviveMode *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

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
    if ((this->fields).reviveElapsed == 0) {
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
      fVar8 = fVar8 - (this->fields).deadTime;
      pfVar9 = &(this->fields).reviveInterval;
      if (*pfVar9 <= fVar8 && fVar8 != *pfVar9) {
        (this->fields).reviveElapsed = 1;
      }
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
            (pAVar10 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
            pAVar10 == (AvatarLocal *)0x0)) ||
           (pIVar11 = (pAVar10->fields).avatarCameraController,
           pIVar11 == (IAvatarCameraController *)0x0)) goto code_?;
        FUN_?(2,TypeInfo__IAvatarCameraController,pIVar11,0x14);
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


/* Void OnEnterEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode_OnEnterEditMode
               (MVAvatarLocal_ReviveMode *this,MethodInfo *method)

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


/* MVAvatarLocal+ReviveMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode::MVAvatarLocal_ReviveMode__ctor
               (MVAvatarLocal_ReviveMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).reviveInterval = 10.0;
  pMVar1 = (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *)
           FUN_?(TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
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
  return;
}

