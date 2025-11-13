
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Enter
               (VehicleCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).originalTransformParent = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).originalTransformParent >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      PlaymodeCamera::PlaymodeCamera_Enter
                ((PlaymodeCamera *)this,cameraController,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields)._.lookAtTransform = (this->fields).LookAtTransform;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.lookAtTransform >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Exit
               (VehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VehicleCamera_exit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_VehicleCamera_exit,(MethodInfo *)0x0);
  context = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (context == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = (this->fields).originalTransformParent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (context != (Transform *)0x0) {
    pTVar3 = (Transform *)0x0;
    if (context->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = context;
    }
    if (pTVar3 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral_Parent_of_RectTransform_is_being,(Object_1 *)context,
                 (MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                  ,pTVar2,1,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (context == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (context->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)context,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (pTVar2 == (Transform *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,pvVar5,1);
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Initialize
               (VehicleCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarCameraDistTransparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.avatarLocal = avatarLocal;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.avatarLocal >> 0xc);
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
  fVar6 = (this->fields)._.avatarHeadOffset.x;
  fVar7 = (this->fields)._.avatarHeadOffset.y;
  fVar8 = (this->fields)._.avatarHeadOffset.z;
  pAVar9 = (AvatarCameraDistTransparency *)FUN_?(TypeInfo__AvatarCameraDistTransparency);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (pAVar9->fields).camMoveTowardsOffset.x = fVar6;
  (pAVar9->fields).camMoveTowardsOffset.y = fVar7;
  (pAVar9->fields).camMoveTowardsOffset.z = fVar8;
  (pAVar9->fields).fadeStartBase = 4.0;
  (pAVar9->fields).fadeEndBase = 2.0;
  (pAVar9->fields).prevDist = -1.0;
  (pAVar9->fields).fadeStartDistance = 4.0;
  (pAVar9->fields).fadeEndDistance = 1.0;
  (this->fields)._.avatarCameraDistTransparency = pAVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.avatarCameraDistTransparency >> 0xc);
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
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  (this->fields)._.distanceToAvatar =
       TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Reset(VehicleCamera *this,MethodInfo *method)

{
  PlaymodeCamera::PlaymodeCamera_Reset((PlaymodeCamera *)this,(MethodInfo *)0x0);
  (this->fields).rotationAroundY = 0.0;
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_UpdateCamera
               (VehicleCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  VehicleCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  uStack_1 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  lVar2 = (ulonglong)(uint)(this->fields)._.height << 0x20;
  (this->fields)._.avatarHeadOffset.x = (float)(int)lVar2;
  (this->fields)._.avatarHeadOffset.y = (float)(int)((ulonglong)lVar2 >> 0x20);
  (this->fields)._.avatarHeadOffset.z = 0.0;
  fStack_3 = unaff_XMM10_Dc;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_5.x = 0.0;
    QStack_5.y = 0.0;
    QStack_5.z = 0.0;
    QStack_5.w = 0.0;
    pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar6,&QStack_5);
    this_00 = (this->fields)._.targetRot;
    if (this_00 != (TargetRotation *)0x0) {
      auStack_9._0_4_ = QStack_5.x;
      auStack_9._4_4_ = QStack_5.y;
      uStack_10._0_4_ = QStack_5.z;
      uStack_10._4_4_ = QStack_5.w;
      pQVar11 = TargetRotation::TargetRotation_GetLerpRotation
                          (&QStack_5,this_00,(Quaternion *)auStack_9,(MethodInfo *)0x0);
      fVar12 = pQVar11->x;
      fVar13 = pQVar11->y;
      auStack_9._0_4_ = pQVar11->x;
      auStack_9._4_4_ = pQVar11->y;
      fVar14 = pQVar11->z;
      fVar15 = pQVar11->w;
      uStack_10._0_4_ = pQVar11->z;
      uStack_10._4_4_ = pQVar11->w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
      fVar16 = (this->fields)._.distance;
      fVar17 = (this->fields)._.distanceToAvatar;
      fVar18 = (this->fields)._.targetDistanceStrength;
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
      fVar19 = (float)(*pcRam_?)();
      fVar19 = fVar19 * fVar18;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      else if (_UNK_? < fVar19) {
        fVar19 = _UNK_?;
      }
      (this->fields)._.distance = (fVar17 - fVar16) * fVar19 + fVar16;
      PlaymodeCamera::PlaymodeCamera_UpdatePosition((PlaymodeCamera *)this,(MethodInfo *)0x0);
      (*(this->klass->vtable).CameraCollision.methodPtr)(this);
      fVar16 = (float)((uint)((this->fields)._.actualLookAt.y - (this->fields)._.lookAtPos.y) &
                      _UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_20 = 0;
      fStack_21 = 0.0;
      pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar6,&uStack_20);
      fVar19 = fStack_21;
      uVar22 = (this->fields)._.currentLookAt.x;
      uVar23 = (this->fields)._.currentLookAt.y;
      fVar17 = (float)uStack_20;
      fVar18 = uStack_20._4_4_;
      uVar24 = (this->fields)._.lookAtPos.x;
      uVar25 = (this->fields)._.lookAtPos.y;
      uStack_26 = CONCAT44(uStack_26._4_4_,(this->fields)._.lookAtPos.z - fStack_21);
      QStack_5.z = (this->fields)._.currentLookAt.z - fStack_21;
      uStack_27 = CONCAT44((float)uVar25 - uStack_20._4_4_,(float)uVar24 - (float)uStack_20);
      QStack_5.y = (float)uVar23 - uStack_20._4_4_;
      QStack_5.x = (float)uVar22 - (float)uStack_20;
      auStack_9._0_4_ = 0.0;
      auStack_9._4_4_ = 0.0;
      uStack_10._0_4_ = 0.0;
      uStack_10._4_4_ = 0.0;
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
      (*pcRam_?)(&QStack_5,&uStack_27);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        fVar17 = (float)uStack_20;
        fVar18 = uStack_20._4_4_;
        fVar19 = fStack_21;
      }
      pQVar28 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uVar8._0_4_ = (pQVar28->identityQuaternion).x;
      uVar8._4_4_ = (pQVar28->identityQuaternion).y;
      uVar29._0_4_ = (pQVar28->identityQuaternion).z;
      uVar29._4_4_ = (pQVar28->identityQuaternion).w;
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
      fVar30 = (float)(*pcRam_?)();
      fVar31 = (this->fields)._.followRotationSpeed;
      uStack_27 = 0;
      uStack_26 = 0;
      pcVar7 = pcRam_?;
      QStack_5._0_8_ = uVar8;
      QStack_5._8_8_ = uVar29;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(&QStack_5,auStack_9,fVar30 * fVar31 * fVar16 * fVar16,&uStack_27);
      QStack_5.x = (this->fields)._._.shakeOffset.x;
      QStack_5.y = (this->fields)._._.shakeOffset.y;
      if (targetTransform != (ProtectedTransform *)0x0) {
        QStack_5.y = fVar18 + QStack_5.y;
        QStack_5.x = fVar17 + QStack_5.x;
        QStack_5.z = fVar19 + (this->fields)._._.shakeOffset.z;
        ProtectedTransform::ProtectedTransform_set_position
                  (targetTransform,(Vector3 *)&QStack_5,(MethodInfo *)0x0);
        auStack_9._4_4_ =
             (uStack_27._4_4_ * fVar15 + uStack_26._4_4_ * fVar13 + (float)uStack_26 * fVar12) -
             (float)uStack_27 * fVar14;
        auStack_9._0_4_ =
             ((float)uStack_27 * fVar15 + uStack_26._4_4_ * fVar12 + uStack_27._4_4_ * fVar14) -
             (float)uStack_26 * fVar13;
        uStack_10._4_4_ =
             ((uStack_26._4_4_ * fVar15 - (float)uStack_27 * fVar12) - uStack_27._4_4_ * fVar13) -
             (float)uStack_26 * fVar14;
        uStack_10._0_4_ =
             ((float)uStack_26 * fVar15 + uStack_26._4_4_ * fVar14 + (float)uStack_27 * fVar13) -
             uStack_27._4_4_ * fVar12;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,(Quaternion *)auStack_9,(MethodInfo *)0x0);
        pAVar32 = (this->fields)._.avatarCameraDistTransparency;
        if (pAVar32 != (AvatarCameraDistTransparency *)0x0) {
          pMVar33 = (this->fields)._.avatarLocal;
          pSVar34 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar34 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar35 = (pSVar34->fields).SpawnRoleModeTypeWrapper,
             pSVar35 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar36 = (pSVar35->fields).spawnRoleType;
            if ((pSVar36 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar37 = (pSVar36->fields).subscribableVariable,
               pSVar37 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar37->fields)._.value & 4) != 0) {
                return;
              }
              if (((pMVar33 != (MVAvatarLocal *)0x0) &&
                  (pMVar38 = (pMVar33->fields)._.body, pMVar38 != (MVBody *)0x0)) &&
                 (pTVar4 = (pMVar38->fields)._._._.transform, pTVar4 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_1 = 0;
                fStack_3 = 0.0;
                if ((pTVar4->fields)._._.m_CachedPtr == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if (pcRam_? == (code *)0x0) {
                  pcVar7 = (code *)FUN_?(&UNK_?);
                  if (pcVar7 == (code *)0x0) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pcRam_? = pcVar7;
                (*pcRam_?)();
                uVar39 = (pAVar32->fields).camMoveTowardsOffset.x;
                uVar40 = (pAVar32->fields).camMoveTowardsOffset.y;
                fVar13 = (float)uStack_1 + (float)uVar39;
                fVar14 = fStack_3 + (pAVar32->fields).camMoveTowardsOffset.z;
                fVar12 = uStack_1._4_4_ + (float)uVar40;
                this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_02 != (MainCameraManager *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_02,(MethodInfo *)0x0);
                  if (pTVar4 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_1 = 0;
                    fStack_3 = 0.0;
                    pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
                    if (pvVar6 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0)
                      ;
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if (pcRam_? == (code *)0x0) {
                      pcVar7 = (code *)FUN_?(&UNK_?);
                      if (pcVar7 == (code *)0x0) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pvVar6,&uStack_1);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Math);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    fVar13 = fVar13 - (float)uStack_1;
                    fVar12 = fVar12 - uStack_1._4_4_;
                    fVar14 = fVar14 - fStack_3;
                    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    dVar41 = (double)(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
                    if (dVar41 < 0.0) {
                      dVar41 = (double)FUN_?();
                    }
                    else {
                      auVar42._8_8_ = 0;
                      auVar42._0_8_ = dVar41;
                      auVar42 = sqrtpd(ZEXT816(0),auVar42);
                      dVar41 = auVar42._0_8_;
                    }
                    fVar12 = (float)dVar41;
                    if (_UNK_? <
                        (float)((uint)(fVar12 - (pAVar32->fields).prevDist) & _UNK_?)) {
                      (pAVar32->fields).prevDist = fVar12;
                      fVar12 = (fVar12 - (pAVar32->fields).fadeEndDistance) /
                               ((pAVar32->fields).fadeStartDistance -
                               (pAVar32->fields).fadeEndDistance);
                      if (fVar12 < 0.0) {
                        fVar12 = 0.0;
                      }
                      else if (_UNK_? < fVar12) {
                        fVar12 = _UNK_?;
                      }
                      if ((pMVar33->fields)._.isHidden == 0) {
                        pAVar43 = (pMVar33->fields)._.avatar;
                        if ((pAVar43 == (Avatar *)0x0) ||
                           (this_01 = (pAVar43->fields).avatarFader, this_01 == (AvatarFader *)0x0))
                        goto code_?;
                        AvatarFader::AvatarFader_SetTransparency(this_01,fVar12,(MethodInfo *)0x0);
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
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
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


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_UpdateTargetRotation
               (VehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  pTVar2 = (this->fields)._.targetRot;
  if (pTVar2 != (TargetRotation *)0x0) {
    uVar3._0_4_ = (pTVar2->fields).eulerAngles.x;
    uVar3._4_4_ = (pTVar2->fields).eulerAngles.y;
    VStack_4.z = (pTVar2->fields).eulerAngles.z;
    fVar5 = (float)((uint)(float)uVar3 ^ _UNK_?);
    VStack_4._0_8_ = uVar3;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = (MethodInfo *)
             TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pMVar6 != (MethodInfo *)0x0) {
      bVar7 = FUN_?(7);
      (this->fields)._.autoRotate = bVar7 ^ 1;
      if (((bVar7 ^ 1) != 0) && (((this->fields)._._._.ignoreInputTypes & 1) == 0)) {
        uVar3._4_4_ = (this->fields).rotationAroundY;
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar8 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
        uVar3._4_4_ = fVar8 * (this->fields)._.mouseSensitivity + uVar3._4_4_;
        fVar8 = _UNK_?;
        if ((uVar3._4_4_ < _UNK_?) ||
           (fVar8 = _UNK_?, _UNK_? < uVar3._4_4_)) {
          uVar3._4_4_ = fVar8;
        }
        obj = (this->fields)._.lookAtTransform;
        (this->fields).rotationAroundY = uVar3._4_4_;
        if (obj == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_9._0_8_ = (InvokerMethod)0x0;
        stack0xffffffffffffff60 = (char *)0x0;
        pvVar10 = (obj->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,auStack_9);
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_4,(Quaternion *)auStack_9,pMVar6);
        lStack_13 = (ulonglong)(uint)(pVVar12->y * _UNK_?) << 0x20;
        uStack_14 = 0;
        auStack_9._0_8_ = (InvokerMethod)0x0;
        stack0xffffffffffffff60 = (char *)0x0;
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(&lStack_13,auStack_9);
        uVar3._4_4_ = (this->fields).rotationAroundY;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_4.x = (pVVar15->upVector).x;
        VStack_4.y = (pVVar15->upVector).y;
        VStack_4.z = (pVVar15->upVector).z;
        auStack_16 = (undefined1  [8])0x0;
        uStack_17 = (Il2CppMethodPointer)0x0;
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        pMVar6 = (MethodInfo *)auStack_16;
        (*pcRam_?)(uVar3._4_4_,&VStack_4);
        uVar3._4_4_ = (float)uStack_17 * (float)auStack_9._4_4_;
        fVar18 = (float)auStack_16._0_4_ * (float)auStack_9._0_4_;
        fVar19 = (float)auStack_16._0_4_ * (float)auStack_9._4_4_;
        fVar20 = (float)auStack_16._4_4_ * (float)auStack_9._4_4_;
        fVar8 = (float)auStack_16._4_4_ * (float)auStack_9._0_4_;
        auStack_9._4_4_ =
             ((float)auStack_16._4_4_ * fStack_21 + uStack_17._4_4_ * (float)auStack_9._4_4_ +
             (float)uStack_17 * (float)auStack_9._0_4_) -
             (float)auStack_16._0_4_ * (float)auStack_9._8_4_;
        auStack_9._0_4_ =
             (uStack_17._4_4_ * (float)auStack_9._0_4_ + (float)auStack_16._0_4_ * fStack_21 +
             (float)auStack_16._4_4_ * (float)auStack_9._8_4_) - uVar3._4_4_;
        stack0xffffffffffffff60 =
             (char *)CONCAT44(((uStack_17._4_4_ * fStack_21 - fVar18) - fVar20) -
                              (float)uStack_17 * (float)auStack_9._8_4_,
                              ((float)uStack_17 * fStack_21 +
                               uStack_17._4_4_ * (float)auStack_9._8_4_ + fVar19) - fVar8);
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_4,(Quaternion *)auStack_9,pMVar6);
        uVar3._4_4_ = pVVar12->y;
        fVar8 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        fVar5 = fVar5 + fVar8 * (this->fields)._.mouseSensitivity;
      }
      if (_UNK_? < fVar5) {
        fVar5 = fVar5 + _UNK_?;
      }
      fVar8 = (this->fields)._.minimumY;
      if ((fVar8 <= fVar5) &&
         (fVar19 = (this->fields)._.maximumY, fVar8 = fVar5, fVar19 < fVar5)) {
        fVar8 = fVar19;
      }
      pTVar2 = (this->fields)._.targetRot;
      if (pTVar2 != (TargetRotation *)0x0) {
        (pTVar2->fields).eulerAngles.x = (float)((uint)fVar8 ^ uVar1);
        (pTVar2->fields).eulerAngles.y = uVar3._4_4_;
        (pTVar2->fields).eulerAngles.z = 0.0;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* VehicleCamera() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera__ctor(VehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlaymodeCamera__SmoothLookAt,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  fVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = (ulonglong)_UNK_?;
  (this->fields)._.shoulderOffset.x = (float)(int)uVar5;
  (this->fields)._.shoulderOffset.y = (float)(int)(uVar5 >> 0x20);
  (this->fields)._.avatarHeadOffset.x = (float)(int)((ulonglong)uVar4 << 0x20);
  (this->fields)._.avatarHeadOffset.y = (float)(int)(((ulonglong)uVar4 << 0x20) >> 0x20);
  (this->fields)._.lookAtOffset.x = (float)(int)((ulonglong)uVar3 << 0x20);
  (this->fields)._.lookAtOffset.y = (float)(int)(((ulonglong)uVar3 << 0x20) >> 0x20);
  (this->fields)._.lookAtOffset.z = 0.0;
  (this->fields)._.shoulderOffset.z = fVar2;
  (this->fields)._.avatarHeadOffset.z = 0.0;
  (this->fields)._.distanceToAvatar = 5.0;
  (this->fields)._.height = 1.5;
  (this->fields)._.minimumY = -60.0;
  (this->fields)._.maximumY = 60.0;
  (this->fields)._.targetDistanceStrength = 2.0;
  (this->fields)._.followRotationSpeed = 2.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._.currentLookAt.x = (pVVar6->zeroVector).x;
  (this->fields)._.currentLookAt.y = fVar7;
  (this->fields)._.currentLookAt.z = fVar2;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._.actualLookAt.x = (pVVar6->zeroVector).x;
  (this->fields)._.actualLookAt.y = fVar7;
  (this->fields)._.actualLookAt.z = fVar2;
  (this->fields)._.distance = 2.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._.lookAtPos.x = (pVVar6->zeroVector).x;
  (this->fields)._.lookAtPos.y = fVar7;
  (this->fields)._.lookAtPos.z = fVar2;
  (this->fields)._.mouseSensitivity = 0.25;
  (this->fields)._.lookAtScaleCorrection = 1.0;
  pPVar8 = (PlaymodeCamera_SmoothLookAt *)FUN_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar9 = (Queue_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  FUN_?(pQVar9);
  iVar10 = iRam_?;
  (pPVar8->fields).prevVelocities = pQVar9;
  if (iVar10 != 0) {
    uVar4 = (uint)((ulonglong)&pPVar8->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar13);
  }
  (this->fields)._.smoothLookAt = pPVar8;
  if (iVar10 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.smoothLookAt >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._.prevLookAtTransformPos.x = (pVVar6->zeroVector).x;
  (this->fields)._.prevLookAtTransformPos.y = fVar7;
  (this->fields)._.prevLookAtTransformPos.z = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar13 = cRam_? == '\0';
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._._.shakeOffset.x = (pVVar6->zeroVector).x;
  (this->fields)._._.shakeOffset.y = fVar7;
  (this->fields)._._.shakeOffset.z = fVar2;
  (this->fields)._._.shakeMaxFactor = 1.0;
  (this->fields)._._.shakeTimeFactor = 6.3;
  (this->fields)._._.shakeStrengthFadeSpeed = 1.0;
  (this->fields)._._._.cameraRadius = 0.3;
  if (bVar13) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar14 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar15 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar16 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar17 = ppMVar15;
    if (lVar16 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar16 = lRam_?;
    }
    else {
      do {
        uVar4 = (uint)ppMVar17;
        LOCK();
        bVar13 = uVar4 != uRam_?;
        uVar3 = uVar4;
        uVar18 = uVar4 + 1;
        if (bVar13) {
          uVar3 = uRam_?;
          uVar18 = uRam_?;
        }
        uRam_? = uVar18;
        UNLOCK();
      } while ((bVar13) &&
              (ppMVar17 = (MethodInfo **)(ulonglong)uVar3, uVar4 = uVar3, uVar3 != 2));
      while (uVar4 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar4 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar16;
    puVar19 = &(pOVar14->_1).field_0x1c;
    LOCK();
    bVar13 = *(int *)puVar19 == 1;
    if (bVar13) {
      *(undefined4 *)puVar19 = 1;
    }
    uVar4 = uRam_?;
    UNLOCK();
    if (bVar13) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar4 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar20 = &(pOVar14->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar13 = *puVar20 == 1;
      if (bVar13) {
        *puVar20 = 1;
      }
      uVar4 = uRam_?;
      UNLOCK();
      if (bVar13) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar4 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar4 = GetCurrentThreadId();
        psVar21 = &(pOVar14->_1).cctor_thread;
        LOCK();
        bVar13 = (ulonglong)uVar4 == *psVar21;
        if (bVar13) {
          *psVar21 = (ulonglong)uVar4;
        }
        UNLOCK();
        if (bVar13) {
          return;
        }
        while( true ) {
          puVar19 = &(pOVar14->_1).field_0x1c;
          LOCK();
          bVar13 = *(int *)puVar19 == 1;
          if (bVar13) {
            *(undefined4 *)puVar19 = 1;
          }
          UNLOCK();
          if (bVar13) break;
          LOCK();
          lVar16._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
          lVar16._4_4_ = (pOVar14->_1).cctor_started;
          if (lVar16 == 0) {
            (pOVar14->_1).initializationExceptionGCHandle = 0;
            (pOVar14->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar16 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar4 = GetCurrentThreadId();
        LOCK();
        (pOVar14->_1).cctor_thread = (ulonglong)uVar4;
        UNLOCK();
        LOCK();
        (pOVar14->_1).cctor_finished_or_no_cctor = 1;
        uVar4 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar4 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar14->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar14);
          ppMVar17 = ppMVar15;
          pIVar22 = (Il2CppClass *)pOVar14;
code_?:
          do {
            if (ppMVar17 == (MethodInfo **)0x0) {
              FUN_?(pIVar22);
              if (pIVar22->field_count != 0) {
                ppMVar17 = pIVar22->methods;
                pMVar23 = *ppMVar17;
code_?:
                if (pMVar23 != (MethodInfo *)0x0) {
                  if ((*pMVar23->name == '.') && ((pMVar23->flags & 0x800) != 0)) {
                    ppMVar24 = ppMVar15;
                    while (pcVar25 = (char *)((longlong)ppMVar24 + 0xADDR),
                          ppMVar24 = (MethodInfo **)((longlong)ppMVar24 + 1),
                          *pcVar25 == (pMVar23->name + -1)[(longlong)ppMVar24]) {
                      if (ppMVar24 == (MethodInfo **)0x7) {
                        FUN_?(pMVar23,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar17 = ppMVar17 + 1;
              if (ppMVar17 < pIVar22->methods + pIVar22->field_count) {
                pMVar23 = *ppMVar17;
                goto code_?;
              }
            }
            pIVar22 = pIVar22->parent;
            ppMVar17 = ppMVar15;
          } while (pIVar22 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar14->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar14->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar26._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
      lVar26._4_4_ = (pOVar14->_1).cctor_started;
      if (lVar26 != 0) {
        uVar27._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
        uVar27._4_4_ = (pOVar14->_1).cctor_started;
        uVar27 = FUN_?(uVar27);
        FUN_?(uVar27,0);
        FUN_?(0,0,0,0,0);
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
    }
  }
  return;
}


/* Void set_RotationAroundY(Single) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_set_RotationAroundY
               (VehicleCamera *this,float value,MethodInfo *method)

{
  (this->fields).rotationAroundY = value;
  return;
}

