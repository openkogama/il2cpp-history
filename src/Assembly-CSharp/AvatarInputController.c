
/* Quaternion GetCameraYRotation() */

Quaternion *
Assembly-CSharp.dll::AvatarInputController::AvatarInputController_GetCameraYRotation
          (Quaternion *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = TypeInfo__AvatarInputController->static_fields->mainCamera;
  if ((this == (Camera *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&QStack_3);
  aQStack_6[0].x = QStack_3.x;
  aQStack_6[0].y = QStack_3.y;
  aQStack_6[0].z = QStack_3.z;
  aQStack_6[0].w = QStack_3.w;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     ((Vector3 *)&QStack_3,aQStack_6,in_R8);
  lStack_8 = (ulonglong)(uint)(pVVar7->y * _UNK_?) << 0x20;
  uStack_9 = 0;
  aQStack_6[0].x = 0.0;
  aQStack_6[0].y = 0.0;
  aQStack_6[0].z = 0.0;
  aQStack_6[0].w = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&lStack_8,aQStack_6);
  __return_storage_ptr__->x = aQStack_6[0].x;
  __return_storage_ptr__->y = aQStack_6[0].y;
  __return_storage_ptr__->z = aQStack_6[0].z;
  __return_storage_ptr__->w = aQStack_6[0].w;
  return __return_storage_ptr__;
}


/* Void HandleInput(Vector3, Boolean, Boolean, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarInputController::AvatarInputController_HandleInput
               (AvatarInputController *this,Vector3 *moveDirection,bool jump,bool didShoot,
               Vector3 *velocity,bool inGunMode,bool forceRotateToCamDirection,MethodInfo *method)

{
  VStack_1.x = moveDirection->x;
  VStack_1.y = moveDirection->y;
  VStack_1.z = moveDirection->z;
  method_00 = (MethodInfo *)0x0;
  pVVar2 = AvatarInputController_ToCameraDirection
                     ((Vector3 *)&QStack_3,&VStack_1,(MethodInfo *)0x0);
  VStack_1.x = pVVar2->x;
  VStack_1.y = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields).direction.x = VStack_1.x;
  (this->fields).direction.y = VStack_1.y;
  (this->fields).direction.z = fVar4;
  if (didShoot == 0) {
code_?:
    if (inGunMode != 0 || forceRotateToCamDirection != 0) {
      uStack_5._0_4_ = velocity->x;
      uStack_5._4_4_ = velocity->y;
      if (_UNK_? <
          uStack_5._4_4_ * uStack_5._4_4_ + (float)uStack_5 * (float)uStack_5 +
          velocity->z * velocity->z) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar6->zeroVector).x;
    uStack_5._4_4_ = (pVVar6->zeroVector).y;
    fVar4 = fVar4 - (pVVar6->zeroVector).z;
    if ((VStack_1.y - uStack_5._4_4_) * (VStack_1.y - uStack_5._4_4_) +
        (VStack_1.x - (float)uStack_5) * (VStack_1.x - (float)uStack_5) + fVar4 * fVar4 <
        _UNK_?) goto code_?;
    uVar7._0_4_ = (this->fields).direction.x;
    uVar7._4_4_ = (this->fields).direction.y;
    fVar4 = (this->fields).direction.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8 = CONCAT44(uStack_8._4_4_,fVar4);
    VStack_1.x = (pVVar6->upVector).x;
    VStack_1.y = (pVVar6->upVector).y;
    VStack_1.z = (pVVar6->upVector).z;
    aQStack_9[0].x = 0.0;
    aQStack_9[0].y = 0.0;
    aQStack_9[0].z = 0.0;
    aQStack_9[0].w = 0.0;
    pcVar10 = pcRam_?;
    uStack_5 = uVar7;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(&uStack_5,&VStack_1,aQStack_9);
    uStack_5._0_4_ = aQStack_9[0].x;
    uStack_5._4_4_ = aQStack_9[0].y;
    uStack_8._0_4_ = aQStack_9[0].z;
    uStack_8._4_4_ = aQStack_9[0].w;
  }
  else {
    uStack_5._0_4_ = velocity->x;
    uStack_5._4_4_ = velocity->y;
    if (_UNK_? <=
        uStack_5._4_4_ * uStack_5._4_4_ + (float)uStack_5 * (float)uStack_5 +
        velocity->z * velocity->z) goto code_?;
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AvatarInputController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if ((this_00 == (Camera *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
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
    QStack_3.x = 0.0;
    QStack_3.y = 0.0;
    QStack_3.z = 0.0;
    QStack_3.w = 0.0;
    pvVar11 = (obj->fields)._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar11,&QStack_3);
    aQStack_9[0].x = QStack_3.x;
    aQStack_9[0].y = QStack_3.y;
    aQStack_9[0].z = QStack_3.z;
    aQStack_9[0].w = QStack_3.w;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       ((Vector3 *)&QStack_3,aQStack_9,method_00);
    VStack_1._0_8_ = (ulonglong)(uint)(pVVar2->y * _UNK_?) << 0x20;
    VStack_1.z = 0.0;
    uStack_5 = 0;
    uStack_8 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(&VStack_1,&uStack_5);
  }
  (this->fields).rotation.x = (float)uStack_5;
  (this->fields).rotation.y = uStack_5._4_4_;
  (this->fields).rotation.z = (float)uStack_8;
  (this->fields).rotation.w = uStack_8._4_4_;
code_?:
  (this->fields).jump = jump;
  return;
}


/* Boolean RotateToCameraDirection(Boolean, Boolean, Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::AvatarInputController_RotateToCameraDirection
               (bool didShoot,bool inGunOrForce,Vector3 *velocity,MethodInfo *method)

{
  if (((didShoot == 0) ||
      (uVar1 = velocity->x, uVar2 = velocity->y,
      _UNK_? <=
      (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1 + velocity->z * velocity->z)) &&
     ((inGunOrForce == 0 ||
      (uVar3 = velocity->x, uVar4 = velocity->y,
      (float)uVar4 * (float)uVar4 + (float)uVar3 * (float)uVar3 + velocity->z * velocity->z <=
      _UNK_?)))) {
    return 0;
  }
  return 1;
}


/* Boolean RotateToCameraDirectionBecauseOfShooting(Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::
     AvatarInputController_RotateToCameraDirectionBecauseOfShooting
               (Vector3 *velocity,MethodInfo *method)

{
  return velocity->x * velocity->x + velocity->y * velocity->y + velocity->z * velocity->z <
         _UNK_?;
}


/* Boolean RotateToCameraDirection(Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::AvatarInputController_RotateToCameraDirection_1
               (Vector3 *velocity,MethodInfo *method)

{
  return _UNK_? <
         velocity->x * velocity->x + velocity->y * velocity->y + velocity->z * velocity->z;
}


/* Vector3 ToCameraDirection(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputController::AvatarInputController_ToCameraDirection
                    (Vector3 *__return_storage_ptr__,Vector3 *moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (float)FUN_?(moveDirection);
  if (0.0 < fVar1) {
    this = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if ((this == (Camera *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    uStack_5 = 0;
    pvVar6 = (obj->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar6,&uStack_4);
    uVar8 = moveDirection->x;
    uVar9 = moveDirection->y;
    fVar10 = (float)uStack_5 + (float)uStack_5;
    fVar11 = uStack_4._4_4_ + uStack_4._4_4_;
    fVar1 = (_UNK_? - ((float)uStack_5 * fVar10 + uStack_4._4_4_ * fVar11)) * (float)uVar8
            + ((float)uStack_4 * fVar11 - uStack_5._4_4_ * fVar10) * (float)uVar9 +
            (uStack_5._4_4_ * fVar11 + (float)uStack_4 * fVar10) * moveDirection->z;
    fVar11 = (uStack_4._4_4_ * fVar10 + uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4)) *
             (float)uVar9 + ((float)uStack_4 * fVar10 - uStack_5._4_4_ * fVar11) * (float)uVar8 +
             (_UNK_? -
             ((float)uStack_4 * ((float)uStack_4 + (float)uStack_4) + uStack_4._4_4_ * fVar11))
             * moveDirection->z;
    uStack_5 = CONCAT44(uStack_5._4_4_,fVar11);
    uStack_4 = (ulonglong)(uint)fVar1;
    fVar10 = (float)FUN_?(&uStack_4);
    if (_UNK_? < fVar10) {
      fVar1 = fVar1 / fVar10;
      fVar12 = 0.0 / fVar10;
      fVar11 = fVar11 / fVar10;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar1 = (pVVar13->zeroVector).x;
      fVar12 = (pVVar13->zeroVector).y;
      fVar11 = (pVVar13->zeroVector).z;
    }
    moveDirection->x = fVar1;
    moveDirection->y = fVar12;
    moveDirection->z = fVar11;
  }
  fVar1 = moveDirection->z;
  fVar11 = moveDirection->y;
  __return_storage_ptr__->x = moveDirection->x;
  __return_storage_ptr__->y = fVar11;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* AvatarInputController() */

void Assembly-CSharp.dll::AvatarInputController::AvatarInputController__ctor
               (AvatarInputController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputController);
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
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).direction.x = (pVVar2->zeroVector).x;
  (this->fields).direction.y = fVar3;
  (this->fields).direction.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields).rotation.x = (pQVar5->identityQuaternion).x;
  (this->fields).rotation.y = fVar4;
  (this->fields).rotation.z = fVar3;
  (this->fields).rotation.w = fVar6;
  pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  TypeInfo__AvatarInputController->static_fields->mainCamera = pCVar7;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)TypeInfo__AvatarInputController->static_fields >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}

