
/* Void Enter(GhostEye) */

void Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Enter
               (GhostEye_LookAtTarget *this,GhostEye *ghostEye,MethodInfo *method)

{
  if (ghostEye != (GhostEye *)0x0) {
    (this->fields).maxPitch = (ghostEye->fields).maxPitch;
    (this->fields).maxYaw = (ghostEye->fields).maxYaw;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,
          Vector3 *localTargetDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = localTargetDirection->x;
  uStack_1._4_4_ = localTargetDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,localTargetDirection->z);
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = (float)FUN_?(&uStack_4,&uStack_1);
  fVar6 = fVar6 - _UNK_?;
  fVar7 = (float)((uint)(this->fields).maxPitch ^ _UNK_?);
  if ((fVar6 < fVar7) || (fVar7 = (this->fields).maxPitch, fVar7 < fVar6)) {
    fVar6 = fVar7;
  }
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
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pQVar10 = (Quaternion *)(*pcVar8)();
    return pQVar10;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(fVar6,&uStack_4,&uStack_1);
  __return_storage_ptr__->x = (float)(undefined4)uStack_1;
  __return_storage_ptr__->y = (float)uStack_1._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_2;
  __return_storage_ptr__->w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,
          Vector3 *localTargetDirection,MethodInfo *method)

{
  uVar1._0_4_ = localTargetDirection->x;
  uVar1._4_4_ = localTargetDirection->y;
  fVar2 = localTargetDirection->z;
  uStack_3 = uVar1 & 0xffffffff;
  uStack_4 = CONCAT44(uStack_4._4_4_,fVar2);
  uStack_5 = uVar1;
  fVar6 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar6) {
    fVar2 = fVar2 / fVar6;
    uStack_3 = CONCAT44(0.0 / fVar6,(float)(undefined4)uVar1 / fVar6);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar7->zeroVector).x;
    uStack_3._4_4_ = (pVVar7->zeroVector).y;
    fVar2 = (pVVar7->zeroVector).z;
  }
  uVar8 = uStack_3;
  fVar6 = (float)uStack_3;
  fVar9 = uStack_3._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = CONCAT44(uStack_4._4_4_,fVar2);
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar7->forwardVector).x;
  uStack_5._4_4_ = (pVVar7->forwardVector).y;
  fStack_10 = (pVVar7->forwardVector).z;
  uStack_3 = uVar8;
  fVar11 = (float)FUN_?(&uStack_5,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar7->rightVector).x;
  uStack_5._4_4_ = (pVVar7->rightVector).y;
  if (fVar9 * (float)uStack_5._4_4_ + fVar6 * (float)(undefined4)uStack_5 +
      fVar2 * (pVVar7->rightVector).z < 0.0) {
    fVar11 = (float)((uint)fVar11 ^ _UNK_?);
  }
  fVar2 = (float)((uint)(this->fields).maxYaw ^ _UNK_?);
  if ((fVar2 <= fVar11) && (fVar6 = (this->fields).maxYaw, fVar2 = fVar11, fVar6 < fVar11)) {
    fVar2 = fVar6;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar7->upVector).x;
  uStack_5._4_4_ = (pVVar7->upVector).y;
  fStack_10 = (pVVar7->upVector).z;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar12 = (code *)swi(3);
    pQVar13 = (Quaternion *)(*pcVar12)();
    return pQVar13;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(fVar2,&uStack_5,&uStack_3);
  __return_storage_ptr__->x = (float)uStack_3;
  __return_storage_ptr__->y = uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Single GetPitch(Vector3) */

float Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetPitch
                (GhostEye_LookAtTarget *this,Vector3 *localTargetPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = localTargetPosition->z;
  uStack_2._0_4_ = localTargetPosition->x;
  uStack_2._4_4_ = localTargetPosition->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = (float)FUN_?(&uStack_4,&uStack_2);
  return fVar6 - _UNK_?;
}


/* Single GetSignedYaw(Vector3) */

float Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetSignedYaw
                (GhostEye_LookAtTarget *this,Vector3 *localTargetPosition,MethodInfo *method)

{
  fVar1 = localTargetPosition->x;
  fVar2 = localTargetPosition->z;
  uStack_3 = (ulonglong)(uint)fVar1;
  fStack_4 = fVar2;
  fVar5 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar5) {
    fVar2 = fVar2 / fVar5;
    uStack_3 = CONCAT44(0.0 / fVar5,fVar1 / fVar5);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar6->zeroVector).x;
    uStack_3._4_4_ = (pVVar6->zeroVector).y;
    fVar2 = (pVVar6->zeroVector).z;
  }
  uVar7 = uStack_3;
  fVar1 = (float)uStack_3;
  fVar5 = uStack_3._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar6->forwardVector).x;
  uStack_8._4_4_ = (pVVar6->forwardVector).y;
  fStack_9 = (pVVar6->forwardVector).z;
  uStack_3 = uVar7;
  fStack_4 = fVar2;
  fVar10 = (float)FUN_?(&uStack_8,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar6->rightVector).x;
  uVar12 = (pVVar6->rightVector).y;
  if (fVar5 * (float)uVar12 + fVar1 * (float)uVar11 + fVar2 * (pVVar6->rightVector).z < 0.0) {
    fVar10 = (float)((uint)fVar10 ^ _UNK_?);
  }
  return fVar10;
}


/* Boolean TryGetLocalTargetDir(GhostEye, Vector3 ByRef) */

bool Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_TryGetLocalTargetDir
               (GhostEye_LookAtTarget *this,GhostEye *ghostEye,Vector3 *localTargetDir,
               MethodInfo *method)

{
  if ((ghostEye == (GhostEye *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)ghostEye,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  auStack_3._0_8_ = *(undefined8 *)&(this->fields).target;
  auStack_3._8_4_ = (this->fields).target.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  fStack_5 = 0.0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pcRam_? = pcVar1;
    method_00 = (MethodInfo *)auStack_3;
    (*pcRam_?)(pvVar6,method_00,&uStack_4);
    localTargetDir->x = (float)(undefined4)uStack_4;
    localTargetDir->y = (float)uStack_4._4_4_;
    localTargetDir->z = fStack_5;
    if (localTargetDir->x * localTargetDir->x + localTargetDir->y * localTargetDir->y +
        localTargetDir->z * localTargetDir->z < _UNK_?) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(localTargetDir,method_00);
    return 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Update
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  if ((ghostEye != (GhostEye *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)ghostEye,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    auStack_2._0_8_ = *(undefined8 *)&(this->fields).target;
    auStack_2._8_4_ = (this->fields).target.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = (Il2CppClass *)0x0;
    fStack_4 = 0.0;
    pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pQVar7 = (Quaternion *)(*pcVar6)();
      return pQVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      pQVar7 = (Quaternion *)(*pcVar6)();
      return pQVar7;
    }
    pcRam_? = pcVar6;
    method_00 = (MethodInfo *)auStack_2;
    (*pcRam_?)(pvVar5,method_00,&uStack_3);
    auStack_9._0_8_ = uStack_3;
    stack0xffffffffffffffc0 = CONCAT44(fStack_10,fStack_4);
    if ((float)uStack_3 * (float)uStack_3 + uStack_3._4_4_ * uStack_3._4_4_ +
        fStack_4 * fStack_4 < _UNK_?) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)ghostEye,(MethodInfo *)0x0);
      if (pTVar1 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_11 = (Il2CppClass *)0x0;
      uStack_12 = (Il2CppType *)0x0;
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pQVar7 = (Quaternion *)(*pcVar6)();
        return pQVar7;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        pQVar7 = (Quaternion *)(*pcVar6)();
        return pQVar7;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&uStack_11);
      auStack_9._0_4_ = (float)uStack_11;
      auStack_9._4_4_ = uStack_11._4_4_;
      auStack_9._8_4_ = (float)uStack_12;
      fStack_10 = uStack_12._4_4_;
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)auStack_9,method_00);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIStack_13 = *(InvokerMethod *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      fStack_14 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
      uStack_12 = (Il2CppType *)CONCAT44(uStack_12._4_4_,auStack_9._8_4_);
      uStack_11 = (Il2CppClass *)auStack_9._0_8_;
      auStack_9._0_4_ = 0.0;
      auStack_9._4_4_ = 0.0;
      stack0xffffffffffffffc0 = 0;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        pQVar7 = (Quaternion *)(*pcVar6)();
        return pQVar7;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(&uStack_11,&pIStack_13,auStack_9);
    }
    __return_storage_ptr__->x = (float)auStack_9._0_4_;
    __return_storage_ptr__->y = (float)auStack_9._4_4_;
    __return_storage_ptr__->z = (float)auStack_9._8_4_;
    __return_storage_ptr__->w = fStack_10;
    return __return_storage_ptr__;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pQVar7 = (Quaternion *)(*pcVar6)();
  return pQVar7;
}

