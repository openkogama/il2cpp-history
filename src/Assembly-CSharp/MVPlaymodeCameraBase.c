
/* Void Shake(Single) */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
               (MVPlaymodeCameraBase *this,float speed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).shakeFactorSpeedCurve;
  if (obj == (AnimationCurve *)0x0) goto code_?;
  pvVar1 = (obj->fields).m_Ptr;
  if (pvVar1 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  fVar4 = (float)(*pcRam_?)(pvVar1,CONCAT44(in_XMM1_Db,speed));
  fVar4 = fVar4 * (this->fields).shakeMaxFactor;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = _UNK_?;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).z;
  fVar8 = (pVVar6->zeroVector).y;
  (this->fields).shakeOffset.x = (pVVar6->zeroVector).x;
  (this->fields).shakeOffset.y = fVar8;
  (this->fields).shakeOffset.z = fVar7;
  if (0.0 < fVar4) {
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
    fVar8 = (float)(*pcRam_?)();
    fVar7 = (this->fields).shakeTimeFactor;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar1);
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar7 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                       (fVar7 * fVar8,0.0,(MethodInfo *)0x0);
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
    fVar10 = (float)(*pcRam_?)();
    fVar8 = (this->fields).shakeTimeFactor;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar1);
    fVar10 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                       (fVar8 * fVar10,0.0,(MethodInfo *)0x0);
    uVar11 = (this->fields).shakeOffset.x;
    uVar12 = (this->fields).shakeOffset.y;
    fVar8 = (this->fields).shakeOffset.z;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_14,pTVar9,(MethodInfo *)0x0);
    aVStack_15[0].x = pVVar13->x;
    aVStack_15[0].y = pVVar13->y;
    fVar16 = (fVar7 + fVar7) - fVar5;
    fVar7 = pVVar13->z;
    fVar17 = fVar16 * aVStack_15[0].x;
    fVar18 = fVar16 * aVStack_15[0].y;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (aVStack_15,pTVar9,(MethodInfo *)0x0);
    VStack_14.x = pVVar13->x;
    VStack_14.y = pVVar13->y;
    fVar19 = (fVar10 + fVar10) - fVar5;
    fVar10 = pVVar13->z;
    (this->fields).shakeOffset.x = (fVar19 * VStack_14.x + fVar17) * fVar4 + (float)uVar11;
    (this->fields).shakeOffset.y = (fVar19 * VStack_14.y + fVar18) * fVar4 + (float)uVar12;
    (this->fields).shakeOffset.z = (fVar19 * fVar10 + fVar16 * fVar7) * fVar4 + fVar8;
  }
  fVar4 = (this->fields).shakeStrength;
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
  fVar7 = (float)(*pcRam_?)();
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
  fVar10 = (float)(*pcRam_?)();
  fVar8 = (this->fields).shakeStrengthFadeSpeed;
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
  fVar16 = (float)(*pcRam_?)();
  fVar7 = fVar16 * fVar8 + fVar10 * fVar7;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (fVar5 < fVar7) {
    fVar7 = fVar5;
  }
  (this->fields).shakeStrength = (0.0 - fVar4) * fVar7 + fVar4;
  if ((this->fields).shakeDuration <= 0.0) {
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
  fVar7 = (float)(*pcRam_?)();
  fVar4 = (this->fields).shakeTimeFactor;
  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar9 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar1);
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar4 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                       (fVar4 * fVar7,0.0,(MethodInfo *)0x0);
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
    fVar8 = (float)(*pcRam_?)();
    fVar7 = (this->fields).shakeTimeFactor;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar1);
      fVar8 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                         (fVar7 * fVar8,0.0,(MethodInfo *)0x0);
      uVar20 = (this->fields).shakeOffset.x;
      uVar21 = (this->fields).shakeOffset.y;
      fVar7 = (this->fields).shakeOffset.z;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_15,pTVar9,(MethodInfo *)0x0);
        uVar22 = pVVar13->x;
        uVar23 = pVVar13->y;
        fVar10 = (fVar4 + fVar4) - fVar5;
        fVar4 = pVVar13->z;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (aVStack_15,pTVar9,(MethodInfo *)0x0);
          pcVar2 = pcRam_?;
          uVar24 = pVVar13->x;
          uVar25 = pVVar13->y;
          fVar5 = (fVar8 + fVar8) - fVar5;
          fVar8 = (this->fields).shakeStrength;
          fVar16 = pVVar13->z;
          fVar17 = (this->fields).shakeDuration;
          (this->fields).shakeOffset.x =
               (fVar5 * (float)uVar24 + fVar10 * (float)uVar22) * fVar8 + (float)uVar20;
          (this->fields).shakeOffset.y =
               (fVar5 * (float)uVar25 + fVar10 * (float)uVar23) * fVar8 + (float)uVar21;
          (this->fields).shakeOffset.z = (fVar5 * fVar16 + fVar10 * fVar4) * fVar8 + fVar7;
          pcVar26 = pcRam_?;
          if ((pcVar2 == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar26 = pcVar2,
             pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar26;
          fVar4 = (float)(*pcVar2)();
          (this->fields).shakeDuration = fVar17 - fVar4;
          return;
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


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
               (MVPlaymodeCameraBase *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_2.x = 0.0;
    QStack_2.y = 0.0;
    QStack_2.z = 0.0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&QStack_2);
    if (targetTransform != (ProtectedTransform *)0x0) {
      QStack_6.x = QStack_2.x;
      QStack_6.y = QStack_2.y;
      QStack_6.z = QStack_2.z;
      ProtectedTransform::ProtectedTransform_set_position
                (targetTransform,(Vector3 *)&QStack_6,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_6.x = 0.0;
        QStack_6.y = 0.0;
        QStack_6.z = 0.0;
        QStack_6.w = 0.0;
        pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar3,&QStack_6);
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,&QStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVPlaymodeCameraBase() */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor
               (MVPlaymodeCameraBase *this,MethodInfo *method)

{
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
  (this->fields).shakeOffset.x = (pVVar2->zeroVector).x;
  (this->fields).shakeOffset.y = fVar3;
  (this->fields).shakeOffset.z = fVar4;
  (this->fields).shakeMaxFactor = 1.0;
  (this->fields).shakeTimeFactor = 6.3;
  (this->fields).shakeStrengthFadeSpeed = 1.0;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar6 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar7 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar8 = ppMVar6;
  if (lVar7 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar7 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar8;
      LOCK();
      bVar1 = uVar9 != uRam_?;
      uVar10 = uVar9;
      uVar11 = uVar9 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar8 = (MethodInfo **)(ulonglong)uVar10, uVar9 = uVar10, uVar10 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar7;
  puVar12 = &(pOVar5->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar5->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar14 = &(pOVar5->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar9 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar5->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar7._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
      lVar7._4_4_ = (pOVar5->_1).cctor_started;
      if (lVar7 == 0) {
        (pOVar5->_1).initializationExceptionGCHandle = 0;
        (pOVar5->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar7 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar5->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar5->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar5->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar5->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar5);
      ppMVar8 = ppMVar6;
      pIVar16 = (Il2CppClass *)pOVar5;
code_?:
      do {
        if (ppMVar8 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar8 = pIVar16->methods;
            pMVar17 = *ppMVar8;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar6;
                while (ppMVar19 = ppMVar18 + 0x3052aacd,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar8 = ppMVar8 + 1;
          if (ppMVar8 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar8;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar8 = ppMVar6;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar5->_1).cctor_thread = 0;
    uVar20 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar5->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar5->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_24 < 0x10) {
code_?:
      lVar7 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar20;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar7 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar26 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar27 = *puVar26;
            LOCK();
            uVar20 = *puVar26;
            if (uVar27 == uVar20) {
              *puVar26 = uVar27 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar27 != uVar20);
        }
      }
      FUN_?(pOVar5,lVar15);
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar19 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar21 = _UNK_?;
      uVar20 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar5->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

