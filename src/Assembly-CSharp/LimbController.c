
/* Quaternion AddAndClampRotations(Quaternion, Quaternion) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_AddAndClampRotations
          (Quaternion *__return_storage_ptr__,LimbController *this,Quaternion *rotation1,
          Quaternion *rotation2,MethodInfo *method)

{
  uVar1._4_4_ = rotation1->x;
  fVar2 = rotation1->y;
  fVar3 = rotation1->z;
  fVar4 = rotation1->w;
  fVar5 = rotation2->x;
  fVar6 = rotation2->y;
  fVar7 = rotation2->z;
  fVar8 = rotation2->w;
  VStack_9.x = (fVar5 * fVar4 + fVar8 * uVar1._4_4_ + fVar7 * fVar2) - fVar6 * fVar3;
  VStack_9.y = (fVar8 * fVar2 + fVar6 * fVar4 + fVar5 * fVar3) - fVar7 * uVar1._4_4_;
  VStack_9.z = (fVar8 * fVar3 + fVar7 * fVar4 + fVar6 * uVar1._4_4_) - fVar5 * fVar2;
  fStack_10 = ((fVar8 * fVar4 - fVar5 * uVar1._4_4_) - fVar6 * fVar2) - fVar7 * fVar3;
  __return_storage_ptr__->x = VStack_9.x;
  __return_storage_ptr__->y = VStack_9.y;
  __return_storage_ptr__->z = VStack_9.z;
  __return_storage_ptr__->w = fStack_10;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     (&VStack_9,__return_storage_ptr__,(MethodInfo *)rotation1);
  uVar1._0_4_ = pVVar11->x;
  uVar1._4_4_ = pVVar11->y;
  pfVar12 = &(this->fields).maxPitch;
  uVar13 = uVar1;
  if ((*pfVar12 <= (float)(undefined4)uVar1 && (float)(undefined4)uVar1 != *pfVar12) &&
     ((float)(undefined4)uVar1 <= _UNK_?)) {
    uVar13 = (ulonglong)(uint)(this->fields).maxPitch;
  }
  fVar2 = (float)uVar13;
  if ((fVar2 < _UNK_? - (this->fields).maxPitch) && (_UNK_? < fVar2)) {
    fVar2 = _UNK_? - (this->fields).maxPitch;
  }
  pfVar12 = &(this->fields).maxYaw;
  if ((*pfVar12 <= uVar1._4_4_ && uVar1._4_4_ != *pfVar12) && (uVar1._4_4_ <= _UNK_?)) {
    uVar1._4_4_ = (this->fields).maxYaw;
  }
  if ((uVar1._4_4_ < _UNK_? - (this->fields).maxYaw) && (_UNK_? < uVar1._4_4_)) {
    uVar1._4_4_ = _UNK_? - (this->fields).maxYaw;
  }
  fStack_14 = pVVar11->z * _UNK_?;
  uStack_15 = CONCAT44(uVar1._4_4_ * _UNK_?,fVar2 * _UNK_?);
  uStack_16 = 0;
  uStack_17 = 0;
  pcVar18 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar18 = (code *)swi(3);
    pQVar20 = (Quaternion *)(*pcVar18)();
    return pQVar20;
  }
  pcRam_? = pcVar18;
  (*pcRam_?)(&uStack_15,&uStack_16);
  __return_storage_ptr__->x = (float)(undefined4)uStack_16;
  __return_storage_ptr__->y = (float)uStack_16._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_17;
  __return_storage_ptr__->w = (float)uStack_17._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion CalculateBlendedRotation() */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_CalculateBlendedRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,MethodInfo *method)

{
  pTVar1 = (this->fields).limbTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        ((Vector3 *)&QStack_3,pTVar1,(MethodInfo *)0x0);
    pMVar4 = (this->fields).avatarWO;
    QStack_5.x = pVVar2->x;
    QStack_5.y = pVVar2->y;
    fVar6 = pVVar2->z;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      pTVar1 = (pMVar4->fields).transform;
      obj = (((this->fields).avatarWO)->fields).transform;
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_7.x = 0.0;
        QStack_7.y = 0.0;
        QStack_7._8_8_ = (ulonglong)(uint)QStack_7.w << 0x20;
        pvVar8 = (obj->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pQVar10 = (Quaternion *)(*pcVar9)();
          return pQVar10;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          pQVar10 = (Quaternion *)(*pcVar9)();
          return pQVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8);
        QStack_3.z = QStack_7.z + fVar6;
        QStack_3.y = QStack_7.y + QStack_5.y;
        QStack_3.x = QStack_7.x + QStack_5.x;
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
        pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pQVar10 = (Quaternion *)(*pcVar9)();
          return pQVar10;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          pQVar10 = (Quaternion *)(*pcVar9)();
          return pQVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,&QStack_3,&QStack_5);
        QStack_3.x = QStack_5.x;
        QStack_3.y = QStack_5.y;
        QStack_3.z = QStack_5.z;
        MathFunctions::MathFunctions_SignedYawFromLocalDirection
                  ((Vector3 *)&QStack_3,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        QStack_3.x = (pVVar12->upVector).x;
        QStack_3.y = (pVVar12->upVector).y;
        QStack_3.z = (pVVar12->upVector).z;
        aQStack_13[0].x = 0.0;
        aQStack_13[0].y = 0.0;
        aQStack_13[0].z = 0.0;
        aQStack_13[0].w = 0.0;
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          pQVar10 = (Quaternion *)(*pcVar9)();
          return pQVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)();
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_3.z = QStack_5.z;
        QStack_3.x = QStack_5.x;
        QStack_3.y = QStack_5.y;
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        QStack_7.x = (pVVar12->upVector).x;
        QStack_7.y = (pVVar12->upVector).y;
        QStack_7.z = (pVVar12->upVector).z;
        FUN_?(&QStack_7,&QStack_3);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        QStack_3.x = (pVVar12->rightVector).x;
        QStack_3.y = (pVVar12->rightVector).y;
        QStack_3.z = (pVVar12->rightVector).z;
        QStack_7.x = 0.0;
        QStack_7.y = 0.0;
        QStack_7.z = 0.0;
        QStack_7.w = 0.0;
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          pQVar10 = (Quaternion *)(*pcVar9)();
          return pQVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)();
        fVar6 = (this->fields).interpolateTowardsYawRotation.x;
        QStack_3.y = (this->fields).interpolateTowardsYawRotation.y;
        QStack_3.z = (this->fields).interpolateTowardsYawRotation.z;
        QStack_3.w = (this->fields).interpolateTowardsYawRotation.w;
        (this->fields).elapsedInterpolationTime = 0.0;
        fVar14 = (this->fields).interpolateTowardsPitchRotation.x;
        fVar15 = (this->fields).interpolateTowardsPitchRotation.y;
        fVar16 = (this->fields).interpolateTowardsPitchRotation.z;
        fVar17 = (this->fields).interpolateTowardsPitchRotation.w;
        QStack_3.x = (fVar6 * aQStack_13[0].w + aQStack_13[0].x * QStack_3.w +
                      QStack_3.y * aQStack_13[0].z) - aQStack_13[0].y * QStack_3.z;
        fVar18 = aQStack_13[0].y * QStack_3.y;
        fVar19 = aQStack_13[0].y * fVar6;
        fVar20 = QStack_3.z * aQStack_13[0].w;
        fVar21 = aQStack_13[0].x * fVar6;
        fVar22 = aQStack_13[0].x * QStack_3.y;
        fVar23 = fVar16 * QStack_7.y;
        fVar24 = fVar16 * QStack_7.w;
        fVar25 = fVar14 * QStack_7.x;
        fVar26 = fVar14 * QStack_7.y;
        fVar27 = fVar15 * QStack_7.y;
        fVar28 = fVar15 * QStack_7.x;
        aQStack_13[0].y =
             (aQStack_13[0].y * QStack_3.w + QStack_3.y * aQStack_13[0].w +
             aQStack_13[0].x * QStack_3.z) - fVar6 * aQStack_13[0].z;
        aQStack_13[0].x = QStack_3.x;
        aQStack_13[0].w =
             ((QStack_3.w * aQStack_13[0].w - fVar21) - fVar18) - QStack_3.z * aQStack_13[0].z;
        aQStack_13[0].z = (QStack_3.w * aQStack_13[0].z + fVar20 + fVar19) - fVar22;
        QStack_7.y = (fVar15 * QStack_7.w + fVar17 * QStack_7.y + fVar16 * QStack_7.x) -
                      fVar14 * QStack_7.z;
        QStack_7.x = (fVar14 * QStack_7.w + fVar17 * QStack_7.x + fVar15 * QStack_7.z) - fVar23;
        QStack_7.w = ((fVar17 * QStack_7.w - fVar25) - fVar27) - fVar16 * QStack_7.z;
        QStack_7.z = (fVar24 + fVar17 * QStack_7.z + fVar26) - fVar28;
        pQVar10 = LimbController_AddAndClampRotations
                            (&QStack_3,this,aQStack_13,&QStack_7,(MethodInfo *)0x0);
        fVar6 = pQVar10->y;
        fVar14 = pQVar10->z;
        fVar15 = pQVar10->w;
        __return_storage_ptr__->x = pQVar10->x;
        __return_storage_ptr__->y = fVar6;
        __return_storage_ptr__->z = fVar14;
        __return_storage_ptr__->w = fVar15;
        return __return_storage_ptr__;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pQVar10 = (Quaternion *)(*pcVar9)();
  return pQVar10;
}


/* Void FinishInterpolation() */

void Assembly-CSharp.dll::LimbController::LimbController_FinishInterpolation
               (LimbController *this,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 1.0;
  return;
}


/* Quaternion GetPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_GetPitchRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,Vector3 *localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = localDirection->x;
  uStack_1._4_4_ = localDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,localDirection->z);
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = (float)FUN_?(&uStack_4,&uStack_1);
  fVar6 = fVar6 - _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->rightVector).x;
  uStack_4._4_4_ = (pVVar3->rightVector).y;
  fStack_5 = (pVVar3->rightVector).z;
  uStack_1 = 0;
  uStack_2 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar6,&uStack_4,&uStack_1);
  __return_storage_ptr__->x = (float)(undefined4)uStack_1;
  __return_storage_ptr__->y = (float)uStack_1._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_2;
  __return_storage_ptr__->w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_GetYawRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,Vector3 *localDirection,
          MethodInfo *method)

{
  VStack_1.x = localDirection->x;
  VStack_1.y = localDirection->y;
  VStack_1.z = localDirection->z;
  fVar2 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(&VStack_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_1.x = (pVVar5->upVector).x;
  VStack_1.y = (pVVar5->upVector).y;
  VStack_1.z = (pVVar5->upVector).z;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(fVar2,&VStack_1,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void Initialize(AvatarLimbManager, MVWorldObjectClient, MVBody, BodyData+PartIndex, Quaternion,
   Quaternion, List`1[System.String], List`1[System.String], Single, Single) */

void Assembly-CSharp.dll::LimbController::LimbController_Initialize
               (LimbController *this,AvatarLimbManager *limbManager,MVWorldObjectClient *avatarWO,
               MVBody *body,BodyData_PartIndex__Enum partIndex,Quaternion *modelRotationOffset,
               Quaternion *originalRotation,List_1_System_String_ *blendAnimations,
               List_1_System_String_ *cancelAnimations,float maxYaw,float maxPitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LimbController__FinishInterpolation__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).avatarWO = avatarWO;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  fVar7 = modelRotationOffset->x;
  fVar8 = modelRotationOffset->y;
  fVar9 = modelRotationOffset->z;
  fVar10 = modelRotationOffset->w;
  (this->fields).blendAnimations = blendAnimations;
  (this->fields).modelRotationOffset.x = fVar7;
  (this->fields).modelRotationOffset.y = fVar8;
  (this->fields).modelRotationOffset.z = fVar9;
  (this->fields).modelRotationOffset.w = fVar10;
  iVar11 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).blendAnimations >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).cancelAnimations = cancelAnimations;
  if (iVar11 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cancelAnimations >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).maxYaw = maxYaw;
  (this->fields).maxPitch = maxPitch;
  if ((((body != (MVBody *)0x0) &&
       (pMVar12 = (body->fields).bodyObject, pMVar12 != (MVBodyObject *)0x0)) &&
      (pBVar13 = (pMVar12->fields).bodyData, pBVar13 != (BodyData *)0x0)) &&
     (pTVar14 = (pBVar13->fields).PartBones, pTVar14 != (Transform__Array *)0x0)) {
    if ((BodyData_PartIndex__Enum)pTVar14->max_length <= partIndex) {
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (pTVar14->vector[(int)partIndex] != (Transform *)0x0) {
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar14->vector[(int)partIndex],(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields).limbTransform = pTVar16;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)&(this->fields).limbTransform >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pTVar16 = (this->fields).limbTransform;
      if (pTVar16 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_17 = 0;
        uStack_18 = 0;
        pvVar19 = (pTVar16->fields)._._.m_CachedPtr;
        if (pvVar19 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar19,&uStack_17);
        (this->fields).previousLimbRotation.x = (float)(undefined4)uStack_17;
        (this->fields).previousLimbRotation.y = (float)uStack_17._4_4_;
        (this->fields).previousLimbRotation.z = (float)(undefined4)uStack_18;
        (this->fields).previousLimbRotation.w = (float)uStack_18._4_4_;
        fVar7 = originalRotation->y;
        fVar8 = originalRotation->z;
        fVar9 = originalRotation->w;
        (this->fields).limbsOriginalRotation.x = originalRotation->x;
        (this->fields).limbsOriginalRotation.y = fVar7;
        (this->fields).limbsOriginalRotation.z = fVar8;
        (this->fields).limbsOriginalRotation.w = fVar9;
        if (limbManager != (AvatarLimbManager *)0x0) {
          pAVar21 = (limbManager->fields).OnAvatarRotate;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_00,(Object *)this,MethodInfo__LimbController__FinishInterpolation__,
                     (MethodInfo *)0x0);
          pAVar21 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar21,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pAVar21 == (Action *)0x0) {
            (limbManager->fields).OnAvatarRotate = (Action *)0x0;
          }
          else {
            pAVar22 = (Action *)0x0;
            if (pAVar21->klass == TypeInfo__System__Action) {
              pAVar22 = pAVar21;
            }
            if (pAVar22 == (Action *)0x0) {
              FUN_?(pAVar21,TypeInfo__System__Action);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            (limbManager->fields).OnAvatarRotate = pAVar22;
            pAVar22 = (Action *)0x0;
            if (pAVar21->klass == TypeInfo__System__Action) {
              pAVar22 = pAVar21;
            }
            if (pAVar22 == (Action *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&limbManager->fields >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar6 = uVar4 == *puVar5;
              if (bVar6) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void InterpolateTowardsAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_InterpolateTowardsAnimation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolateAnimationTime;
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
  pcVar2 = pcRam_?;
  fVar1 = fVar4 * (this->fields).interpolationSpeed + fVar1;
  (this->fields).elapsedInterpolateAnimationTime = fVar1;
  pcVar5 = pcRam_?;
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar2, pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar5;
  fVar4 = (float)(*pcVar2)();
  if ((fVar1 < fVar4 * (this->fields).interpolationSpeed + _UNK_?) &&
     (bVar6 = LimbController_IsCancelRotation(this,currentAnimation,(MethodInfo *)0x0), bVar6 == 0))
  {
    pTVar7 = (this->fields).limbTransform;
    uVar3._0_4_ = (this->fields).previousLimbRotation.x;
    uVar3._4_4_ = (this->fields).previousLimbRotation.y;
    uVar8._0_4_ = (this->fields).previousLimbRotation.z;
    uVar8._4_4_ = (this->fields).previousLimbRotation.w;
    if (pTVar7 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    uStack_9 = 0;
    uStack_10 = 0;
    pvVar11 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
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
    (*pcRam_?)(pvVar11,&uStack_9);
    fVar1 = (this->fields).elapsedInterpolateAnimationTime;
    uStack_12 = (undefined4)uStack_9;
    uStack_13 = uStack_9._4_4_;
    uStack_14 = (undefined4)uStack_10;
    uStack_15 = uStack_10._4_4_;
    uStack_16 = 0;
    uStack_17 = 0;
    pcVar2 = pcRam_?;
    uStack_18 = uVar3;
    uStack_19 = uVar8;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(&uStack_18,&uStack_12,fVar1,&uStack_16);
    pTVar7 = (this->fields).limbTransform;
    if (pTVar7 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_9 = uStack_16;
    uStack_10 = uStack_17;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar11 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
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
    (*pcRam_?)(pvVar11,&uStack_9);
  }
  return;
}


/* Boolean IsCancelRotation(String) */

bool Assembly-CSharp.dll::LimbController::LimbController_IsCancelRotation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).cancelAnimations;
  uVar2 = 0;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    iVar3 = (pLVar1->fields)._size;
    lVar4 = 0x20;
    while( true ) {
      if (iVar3 <= (int)uVar2) {
        return 0;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pSVar7 = (pLVar1->fields)._items;
      if (pSVar7 == (String__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pSVar8 = *(String **)((longlong)pSVar7->vector + lVar4 + -0x20);
      if (currentAnimation == pSVar8) {
        return 1;
      }
      if (((currentAnimation == (String *)0x0) || (pSVar8 == (String *)0x0)) ||
         ((currentAnimation->fields)._stringLength != (pSVar8->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 8;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(currentAnimation->fields)._firstChar,
                           (uint8_t *)&(pSVar8->fields)._firstChar,
                           (longlong)(currentAnimation->fields)._stringLength * 2,(MethodInfo *)0x0)
        ;
        if (bVar6 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 8;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void ResetInterpolation() */

void Assembly-CSharp.dll::LimbController::LimbController_ResetInterpolation
               (LimbController *this,MethodInfo *method)

{
  (this->fields).shouldRotate = 1;
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).rotationDuration = 0.0;
  (this->fields).elapsedInterpolateAnimationTime = 0.0;
  return;
}


/* Void SetNewRotation(Quaternion, Quaternion) */

void Assembly-CSharp.dll::LimbController::LimbController_SetNewRotation
               (LimbController *this,Quaternion *yawRotation,Quaternion *PitchRotation,
               MethodInfo *method)

{
  fVar1 = yawRotation->x;
  fVar2 = yawRotation->y;
  fVar3 = yawRotation->z;
  fVar4 = yawRotation->w;
  (this->fields).shouldRotate = 1;
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).interpolateTowardsYawRotation.x = fVar1;
  (this->fields).interpolateTowardsYawRotation.y = fVar2;
  (this->fields).interpolateTowardsYawRotation.z = fVar3;
  (this->fields).interpolateTowardsYawRotation.w = fVar4;
  (this->fields).rotationDuration = 0.0;
  (this->fields).elapsedInterpolateAnimationTime = 0.0;
  fVar1 = PitchRotation->y;
  fVar2 = PitchRotation->z;
  fVar3 = PitchRotation->w;
  (this->fields).interpolateTowardsPitchRotation.x = PitchRotation->x;
  (this->fields).interpolateTowardsPitchRotation.y = fVar1;
  (this->fields).interpolateTowardsPitchRotation.z = fVar2;
  (this->fields).interpolateTowardsPitchRotation.w = fVar3;
  return;
}


/* Void SetNewRotation(Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::LimbController::LimbController_SetNewRotation_1
               (LimbController *this,Quaternion *yawRotation,Quaternion *PitchRotation,
               float duration,MethodInfo *method)

{
  fVar1 = yawRotation->x;
  fVar2 = yawRotation->y;
  fVar3 = yawRotation->z;
  fVar4 = yawRotation->w;
  (this->fields).shouldRotate = 1;
  (this->fields).rotationDuration = duration;
  (this->fields).interpolateTowardsYawRotation.x = fVar1;
  (this->fields).interpolateTowardsYawRotation.y = fVar2;
  (this->fields).interpolateTowardsYawRotation.z = fVar3;
  (this->fields).interpolateTowardsYawRotation.w = fVar4;
  (this->fields).elapsedInterpolationTime = 0.0;
  fVar1 = PitchRotation->x;
  fVar2 = PitchRotation->y;
  fVar3 = PitchRotation->z;
  fVar4 = PitchRotation->w;
  (this->fields).elapsedInterpolateAnimationTime = 0.0;
  (this->fields).interpolateTowardsPitchRotation.x = fVar1;
  (this->fields).interpolateTowardsPitchRotation.y = fVar2;
  (this->fields).interpolateTowardsPitchRotation.z = fVar3;
  (this->fields).interpolateTowardsPitchRotation.w = fVar4;
  return;
}


/* Boolean ShouldBlendWithAnimation(String) */

bool Assembly-CSharp.dll::LimbController::LimbController_ShouldBlendWithAnimation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isEventControllingLimb == 0) {
    pLVar1 = (this->fields).blendAnimations;
    uVar2 = 0;
    if (pLVar1 == (List_1_System_String_ *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    iVar5 = (pLVar1->fields)._size;
    lVar6 = 0x20;
    while ((int)uVar2 < iVar5) {
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pSVar7 = (pLVar1->fields)._items;
      if (pSVar7 == (String__Array *)0x0) goto code_?;
      if ((uint)pSVar7->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pSVar8 = *(String **)((longlong)pSVar7->vector + lVar6 + -0x20);
      if (currentAnimation == pSVar8) {
        return 1;
      }
      if (((currentAnimation == (String *)0x0) || (pSVar8 == (String *)0x0)) ||
         ((currentAnimation->fields)._stringLength != (pSVar8->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar6 = lVar6 + 8;
      }
      else {
        bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(currentAnimation->fields)._firstChar,
                           (uint8_t *)&(pSVar8->fields)._firstChar,
                           (longlong)(currentAnimation->fields)._stringLength * 2,(MethodInfo *)0x0)
        ;
        if (bVar4 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        lVar6 = lVar6 + 8;
      }
    }
  }
  return 0;
}


/* Void StartBlendingWithAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_StartBlendingWithAnimation
               (LimbController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blendAnimations;
  uVar1 = 0;
  if (this_00 != (List_1_System_String_ *)0x0) {
    iVar2 = (this_00->fields)._size;
    lVar3 = 0x20;
    do {
      pMVar4 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      if (iVar2 <= (int)uVar1) {
        piVar5 = &(this_00->fields)._version;
        *piVar5 = *piVar5 + 1;
        pSVar6 = (this_00->fields)._items;
        if (pSVar6 != (String__Array *)0x0) {
          uVar1 = (this_00->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (this_00->fields)._size = uVar1 + 1;
            FUN_?(pSVar6,(longlong)(int)uVar1,animation);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,(Object *)animation,
                       pMVar4->klass->rgctx_data[0xe].method);
          }
          return;
        }
        break;
      }
      if ((uint)(this_00->fields)._size <= uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar6 = (this_00->fields)._items;
      if (pSVar6 == (String__Array *)0x0) break;
      if ((uint)pSVar6->max_length <= uVar1) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar8 = *(String **)((longlong)pSVar6->vector + lVar3 + -0x20);
      if (pSVar8 == animation) {
        return;
      }
      if ((((pSVar8 != (String *)0x0) && (animation != (String *)0x0)) &&
          ((pSVar8->fields)._stringLength == (animation->fields)._stringLength)) &&
         (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar8->fields)._firstChar,
                             (uint8_t *)&(animation->fields)._firstChar,
                             (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar9 != 0)) {
        return;
      }
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 8;
    } while (this_00 != (List_1_System_String_ *)0x0);
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StopBlendingWithAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_StopBlendingWithAnimation
               (LimbController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blendAnimations;
  index = 0;
  if (this_00 != (List_1_System_String_ *)0x0) {
    lVar1 = 0x20;
    while( true ) {
      if ((this_00->fields)._size <= (int)index) {
        return;
      }
      if ((uint)(this_00->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar3 = (this_00->fields)._items;
      if (pSVar3 == (String__Array *)0x0) break;
      if ((uint)pSVar3->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar4 = *(String **)((longlong)pSVar3->vector + lVar1 + -0x20);
      if (pSVar4 == animation) {
code_?:
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)this_00,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
        return;
      }
      if (((pSVar4 == (String *)0x0) || (animation == (String *)0x0)) ||
         ((pSVar4->fields)._stringLength != (animation->fields)._stringLength)) {
        index = index + 1;
        lVar1 = lVar1 + 8;
      }
      else {
        bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar4->fields)._firstChar,
                           (uint8_t *)&(animation->fields)._firstChar,
                           (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar5 != 0) goto code_?;
        index = index + 1;
        lVar1 = lVar1 + 8;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopRotating() */

void Assembly-CSharp.dll::LimbController::LimbController_StopRotating
               (LimbController *this,MethodInfo *method)

{
  if ((this->fields).isEventControllingLimb == 0) {
    (this->fields).shouldRotate = 0;
  }
  return;
}


/* Void TrySetNewRotation(Quaternion, Quaternion) */

void Assembly-CSharp.dll::LimbController::LimbController_TrySetNewRotation
               (LimbController *this,Quaternion *yawRotation,Quaternion *PitchRotation,
               MethodInfo *method)

{
  if ((this->fields).isEventControllingLimb == 0) {
    fVar1 = yawRotation->x;
    fVar2 = yawRotation->y;
    fVar3 = yawRotation->z;
    fVar4 = yawRotation->w;
    (this->fields).shouldRotate = 1;
    (this->fields).elapsedInterpolationTime = 0.0;
    (this->fields).interpolateTowardsYawRotation.x = fVar1;
    (this->fields).interpolateTowardsYawRotation.y = fVar2;
    (this->fields).interpolateTowardsYawRotation.z = fVar3;
    (this->fields).interpolateTowardsYawRotation.w = fVar4;
    (this->fields).rotationDuration = 0.0;
    (this->fields).elapsedInterpolateAnimationTime = 0.0;
    fVar1 = PitchRotation->y;
    fVar2 = PitchRotation->z;
    fVar3 = PitchRotation->w;
    (this->fields).interpolateTowardsPitchRotation.x = PitchRotation->x;
    (this->fields).interpolateTowardsPitchRotation.y = fVar1;
    (this->fields).interpolateTowardsPitchRotation.z = fVar2;
    (this->fields).interpolateTowardsPitchRotation.w = fVar3;
  }
  return;
}


/* Void TrySetNewRotation(Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::LimbController::LimbController_TrySetNewRotation_1
               (LimbController *this,Quaternion *yawRotation,Quaternion *PitchRotation,
               float duration,MethodInfo *method)

{
  if ((this->fields).isEventControllingLimb == 0) {
    fVar1 = yawRotation->x;
    fVar2 = yawRotation->y;
    fVar3 = yawRotation->z;
    fVar4 = yawRotation->w;
    (this->fields).shouldRotate = 1;
    (this->fields).rotationDuration = duration;
    (this->fields).interpolateTowardsYawRotation.x = fVar1;
    (this->fields).interpolateTowardsYawRotation.y = fVar2;
    (this->fields).interpolateTowardsYawRotation.z = fVar3;
    (this->fields).interpolateTowardsYawRotation.w = fVar4;
    (this->fields).elapsedInterpolationTime = 0.0;
    fVar1 = PitchRotation->x;
    fVar2 = PitchRotation->y;
    fVar3 = PitchRotation->z;
    fVar4 = PitchRotation->w;
    (this->fields).elapsedInterpolateAnimationTime = 0.0;
    (this->fields).interpolateTowardsPitchRotation.x = fVar1;
    (this->fields).interpolateTowardsPitchRotation.y = fVar2;
    (this->fields).interpolateTowardsPitchRotation.z = fVar3;
    (this->fields).interpolateTowardsPitchRotation.w = fVar4;
  }
  return;
}


/* Void UpdateInterpolation(Quaternion) */

void Assembly-CSharp.dll::LimbController::LimbController_UpdateInterpolation
               (LimbController *this,Quaternion *interpolateTowardsRotation,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolationTime;
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
  pMVar5 = (this->fields).avatarWO;
  (this->fields).elapsedInterpolationTime = fVar4 * (this->fields).interpolationSpeed + fVar1;
  uStack_6._0_4_ = (this->fields).previousLimbRotation.x;
  uStack_6._4_4_ = (this->fields).previousLimbRotation.y;
  uStack_7._0_4_ = (this->fields).previousLimbRotation.z;
  uStack_7._4_4_ = (this->fields).previousLimbRotation.w;
  if ((pMVar5 == (MVWorldObjectClient *)0x0) ||
     (pTVar8 = (pMVar5->fields).transform, pTVar8 == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  uStack_9 = 0;
  uStack_10 = 0;
  pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  (*pcRam_?)(pvVar11,&uStack_9);
  fVar1 = interpolateTowardsRotation->x;
  fVar4 = interpolateTowardsRotation->y;
  fVar12 = interpolateTowardsRotation->z;
  fVar13 = interpolateTowardsRotation->w;
  fVar14 = (fVar1 * uStack_10._4_4_ + fVar13 * (float)uStack_9 + fVar12 * uStack_9._4_4_) -
           fVar4 * (float)uStack_10;
  fVar15 = (fVar4 * uStack_10._4_4_ + fVar13 * uStack_9._4_4_ + fVar1 * (float)uStack_10) -
          fVar12 * (float)uStack_9;
  fVar16 = (fVar12 * uStack_10._4_4_ + fVar13 * (float)uStack_10 + fVar4 * (float)uStack_9) -
           fVar1 * uStack_9._4_4_;
  fVar1 = ((fVar13 * uStack_10._4_4_ - fVar1 * (float)uStack_9) - fVar4 * uStack_9._4_4_) -
           fVar12 * (float)uStack_10;
  fStack_17 = (this->fields).limbsOriginalRotation.x;
  fStack_18 = (this->fields).limbsOriginalRotation.y;
  fStack_19 = (this->fields).limbsOriginalRotation.z;
  fStack_20 = (this->fields).limbsOriginalRotation.w;
  uStack_21 = 0;
  uStack_22 = 0;
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
  (*pcRam_?)(&fStack_17,&uStack_21);
  fVar23 = ((float)uStack_21 * fVar1 + uStack_22._4_4_ * fVar14 + (float)uStack_22 * fVar15) -
           fVar16 * uStack_21._4_4_;
  fVar24 = (uStack_21._4_4_ * fVar1 + uStack_22._4_4_ * fVar15 + fVar16 * (float)uStack_21) -
           (float)uStack_22 * fVar14;
  fVar25 = (fVar16 * uStack_22._4_4_ + (float)uStack_22 * fVar1 + uStack_21._4_4_ * fVar14) -
           (float)uStack_21 * fVar15;
  fVar15 = ((uStack_22._4_4_ * fVar1 - (float)uStack_21 * fVar14) - uStack_21._4_4_ * fVar15) -
          fVar16 * (float)uStack_22;
  fVar1 = (this->fields).modelRotationOffset.x;
  fVar4 = (this->fields).modelRotationOffset.y;
  fVar12 = (this->fields).modelRotationOffset.z;
  fVar13 = (this->fields).modelRotationOffset.w;
  fStack_26 = (fVar13 * fVar23 + fVar1 * fVar15 + fVar12 * fVar24) - fVar4 * fVar25;
  fStack_27 = (fVar13 * fVar24 + fVar4 * fVar15 + fVar1 * fVar25) - fVar12 * fVar23;
  fStack_28 = (fVar12 * fVar15 + fVar13 * fVar25 + fVar4 * fVar23) - fVar1 * fVar24;
  fStack_29 = ((fVar13 * fVar15 - fVar1 * fVar23) - fVar4 * fVar24) - fVar12 * fVar25;
  fVar1 = (this->fields).elapsedInterpolationTime;
  uStack_9 = 0;
  uStack_10 = 0;
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
  (*pcRam_?)(&uStack_6,&fStack_26,fVar1,&uStack_9);
  pTVar8 = (this->fields).limbTransform;
  if (pTVar8 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fStack_17 = (float)uStack_9;
  fStack_18 = uStack_9._4_4_;
  fStack_19 = (float)uStack_10;
  fStack_20 = uStack_10._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  (*pcRam_?)(pvVar11,&fStack_17);
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::LimbController::LimbController_UpdateRotation
               (LimbController *this,MethodInfo *method)

{
  fVar1 = (this->fields).rotationDuration;
  if (0.0 < fVar1) {
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
    fVar1 = fVar1 - fVar4;
    (this->fields).rotationDuration = fVar1;
    if (fVar1 <= 0.0) {
      (this->fields).shouldRotate = 0;
      (this->fields).elapsedInterpolateAnimationTime = 0.0;
    }
  }
  pSVar5 = (this->fields).currentAnimation;
  if ((this->fields).shouldRotate == 0) {
    LimbController_InterpolateTowardsAnimation(this,pSVar5,(MethodInfo *)0x0);
  }
  else {
    bVar6 = LimbController_IsCancelRotation(this,pSVar5,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      return;
    }
    pSVar5 = (this->fields).currentAnimation;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).isEventControllingLimb == 0) {
      pLVar7 = (this->fields).blendAnimations;
      uVar8 = 0;
      if (pLVar7 == (List_1_System_String_ *)0x0) goto DAT_?;
      iVar9 = (pLVar7->fields)._size;
      lVar10 = 0x20;
      while ((int)uVar8 < iVar9) {
        if ((uint)(pLVar7->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pSVar11 = (pLVar7->fields)._items;
        if (pSVar11 == (String__Array *)0x0) goto DAT_?;
        if ((uint)pSVar11->max_length <= uVar8) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pSVar12 = *(String **)((longlong)pSVar11->vector + lVar10 + -0x20);
        if (pSVar5 == pSVar12) {
code_?:
          pQVar13 = LimbController_CalculateBlendedRotation(&QStack_14,this,(MethodInfo *)0x0);
          goto code_?;
        }
        if (((pSVar5 == (String *)0x0) || (pSVar12 == (String *)0x0)) ||
           ((pSVar5->fields)._stringLength != (pSVar12->fields)._stringLength)) {
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 8;
        }
        else {
          bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar5->fields)._firstChar,
                             (uint8_t *)&(pSVar12->fields)._firstChar,
                             (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar6 != 0) goto code_?;
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 8;
        }
      }
    }
    QStack_15.x = (this->fields).interpolateTowardsPitchRotation.x;
    QStack_15.y = (this->fields).interpolateTowardsPitchRotation.y;
    QStack_15.z = (this->fields).interpolateTowardsPitchRotation.z;
    QStack_15.w = (this->fields).interpolateTowardsPitchRotation.w;
    QStack_14.x = (this->fields).interpolateTowardsYawRotation.x;
    QStack_14.y = (this->fields).interpolateTowardsYawRotation.y;
    QStack_14.z = (this->fields).interpolateTowardsYawRotation.z;
    QStack_14.w = (this->fields).interpolateTowardsYawRotation.w;
    pQVar13 = LimbController_AddAndClampRotations
                       (aQStack_16,this,&QStack_14,&QStack_15,(MethodInfo *)0x0);
code_?:
    QStack_14.x = pQVar13->x;
    QStack_14.y = pQVar13->y;
    QStack_14.z = pQVar13->z;
    QStack_14.w = pQVar13->w;
    LimbController_UpdateInterpolation(this,&QStack_14,(MethodInfo *)0x0);
  }
  obj = (this->fields).limbTransform;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_15.x = 0.0;
    QStack_15.y = 0.0;
    QStack_15.z = 0.0;
    QStack_15.w = 0.0;
    pvVar17 = (obj->fields)._._.m_CachedPtr;
    if (pvVar17 != (void *)0x0) {
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
      (*pcRam_?)(pvVar17,&QStack_15);
      (this->fields).previousLimbRotation.x = QStack_15.x;
      (this->fields).previousLimbRotation.y = QStack_15.y;
      (this->fields).previousLimbRotation.z = QStack_15.z;
      (this->fields).previousLimbRotation.w = QStack_15.w;
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateRotationDuration() */

void Assembly-CSharp.dll::LimbController::LimbController_UpdateRotationDuration
               (LimbController *this,MethodInfo *method)

{
  fVar1 = (this->fields).rotationDuration;
  if (0.0 < fVar1) {
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
    fVar1 = fVar1 - fVar4;
    (this->fields).rotationDuration = fVar1;
    if (fVar1 <= 0.0) {
      (this->fields).shouldRotate = 0;
      (this->fields).elapsedInterpolateAnimationTime = 0.0;
    }
  }
  return;
}


/* LimbController() */

void Assembly-CSharp.dll::LimbController::LimbController__ctor
               (LimbController *this,MethodInfo *method)

{
  (this->fields).interpolationSpeed = 5.0;
  return;
}

