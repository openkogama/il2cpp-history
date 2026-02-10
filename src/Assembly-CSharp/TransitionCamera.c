
/* Void AbortTransition() */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_AbortTransition(TransitionCamera *this,MethodInfo *method)

{
  (this->fields).transitionPercentage = 1.0;
  return;
}


/* Void InitTransition(Transform, Single, Boolean) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_InitTransition(TransitionCamera *this,Transform *targetCameraTransform,float transitionTime,bool soft,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)();
    (this->fields).prevCameraPosition.x = 0.0;
    (this->fields).prevCameraPosition.y = 0.0;
    (this->fields).prevCameraPosition.z = 0.0;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar1 != (MainCameraManager *)0x0) && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)();
      (this->fields).prevCameraRotation.x = 0.0;
      (this->fields).prevCameraRotation.y = 0.0;
      (this->fields).prevCameraRotation.z = 0.0;
      (this->fields).prevCameraRotation.w = 0.0;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar1 != (MainCameraManager *)0x0) && (obj = (pMVar1->fields).mainCamera, obj != (Camera *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fVar6 = (float)(*pcRam_?)(pvVar5);
        (this->fields).fieldOfView = fVar6;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar5);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            fStack_7 = (this->fields).prevCameraRotation.x;
            fStack_8 = (this->fields).prevCameraRotation.y;
            fStack_9 = (this->fields).prevCameraRotation.z;
            fStack_10 = (this->fields).prevCameraRotation.w;
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar5,&fStack_7);
            (this->fields).time = transitionTime;
            (this->fields).superSoft = soft;
            (this->fields).transitionPercentage = 0.0;
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Quaternion RotateTowardsX(Vector3, Vector3, Single) */

Quaternion * Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsX(Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 *eulerFrom,Vector3 *eulerTo,float percentage,MethodInfo *method)

{
  eulerTo->y = 0.0;
  eulerTo->z = 0.0;
  uStack_1._0_4_ = eulerTo->x;
  uStack_1._4_4_ = eulerTo->y;
  uStack_2 = CONCAT44((float)uStack_1._4_4_ * 0.017453292,(float)(undefined4)uStack_1 * 0.017453292);
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = CONCAT44(uStack_5._4_4_,eulerTo->z * 0.017453292);
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_2,&uStack_3);
  eulerFrom->y = 0.0;
  eulerFrom->z = 0.0;
  uVar9 = eulerFrom->x;
  uVar10 = eulerFrom->y;
  fStack_11 = eulerFrom->z * 0.017453292;
  uStack_1 = CONCAT44((float)uVar10 * 0.017453292,(float)uVar9 * 0.017453292);
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_1,&uStack_12);
  uStack_2 = uStack_3;
  uStack_5 = uStack_4;
  uStack_14 = (undefined4)uStack_12;
  uStack_15 = uStack_12._4_4_;
  uStack_16 = (undefined4)uStack_13;
  uStack_17 = uStack_13._4_4_;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_14,&uStack_2,percentage,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion RotateTowardsY(Vector3, Vector3, Single) */

Quaternion * Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsY(Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 *eulerFrom,Vector3 *eulerTo,float percentage,MethodInfo *method)

{
  eulerTo->x = 0.0;
  eulerTo->z = 0.0;
  uStack_1._0_4_ = eulerTo->x;
  uStack_1._4_4_ = eulerTo->y;
  uStack_2 = CONCAT44((float)uStack_1._4_4_ * 0.017453292,(float)(undefined4)uStack_1 * 0.017453292);
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = CONCAT44(uStack_5._4_4_,eulerTo->z * 0.017453292);
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_2,&uStack_3);
  eulerFrom->x = 0.0;
  eulerFrom->z = 0.0;
  uVar9 = eulerFrom->x;
  uVar10 = eulerFrom->y;
  fStack_11 = eulerFrom->z * 0.017453292;
  uStack_1 = CONCAT44((float)uVar10 * 0.017453292,(float)uVar9 * 0.017453292);
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_1,&uStack_12);
  uStack_2 = uStack_3;
  uStack_5 = uStack_4;
  uStack_14 = (undefined4)uStack_12;
  uStack_15 = uStack_12._4_4_;
  uStack_16 = (undefined4)uStack_13;
  uStack_17 = uStack_13._4_4_;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pQVar8 = (Quaternion *)(*pcVar6)();
    return pQVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_14,&uStack_2,percentage,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera(TransitionCamera *this,MVCameraController *camController,ProtectedTransform *targetTransform,MethodInfo *method)

{
  pfVar1 = &(this->fields).transitionPercentage;
  if (1.0 < *pfVar1 || *pfVar1 == 1.0) {
    return;
  }
  fVar2 = (this->fields).transitionPercentage;
  fVar3 = (this->fields).time;
  pMVar4 = (MethodInfo *)targetTransform;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar7 = (float)(*pcRam_?)();
  fVar2 = fVar7 * (1.0 / fVar3) + fVar2;
  (this->fields).transitionPercentage = fVar2;
  if (1.0 < fVar2) {
    (this->fields).transitionPercentage = 1.0;
  }
  fVar2 = (this->fields).transitionPercentage;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  fVar2 = fVar2 * -2.0 * fVar2 * fVar2 + fVar2 * 3.0 * fVar2;
  fVar2 = (1.0 - fVar2) * 0.0 + fVar2;
  if ((this->fields).superSoft == 0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles((Vector3 *)auStack_9,&(this->fields).prevCameraRotation,pMVar4);
    pIVar10 = *(Il2CppClass **)pVVar8;
    fVar3 = pVVar8->z;
    if ((((camController == (MVCameraController *)0x0) || (pMVar11 = (camController->fields).cameraStack, pMVar11 == (MVCameraController_CameraStack *)0x0)) || (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 == (MVCameraBase *)0x0)) || (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0)) goto DAT_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)auStack_9,pTVar13,(MethodInfo *)0x0);
    pMVar4 = (MethodInfo *)auStack_14;
    pIStack_15 = *(Il2CppClass **)pVVar8;
    fStack_16 = pVVar8->z;
    auStack_14 = (undefined1  [8])pIVar10;
    fStack_17 = fVar3;
    pQVar18 = TransitionCamera_RotateTowardsX((Quaternion *)auStack_9,this,(Vector3 *)pMVar4,(Vector3 *)&pIStack_15,fVar2,(MethodInfo *)0x0);
    fVar7 = pQVar18->x;
    fVar19 = pQVar18->y;
    fVar20 = pQVar18->z;
    fVar21 = pQVar18->w;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles((Vector3 *)auStack_9,&(this->fields).prevCameraRotation,pMVar4);
    pMVar11 = (camController->fields).cameraStack;
    pIVar10 = *(Il2CppClass **)pVVar8;
    fVar3 = pVVar8->z;
    if (((pMVar11 == (MVCameraController_CameraStack *)0x0) || (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 == (MVCameraBase *)0x0)) || (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0)) goto DAT_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)auStack_9,pTVar13,(MethodInfo *)0x0);
    pIStack_15 = *(Il2CppClass **)pVVar8;
    fStack_16 = pVVar8->z;
    auStack_14 = (undefined1  [8])pIVar10;
    fStack_17 = fVar3;
    pQVar18 = TransitionCamera_RotateTowardsY((Quaternion *)auStack_9,this,(Vector3 *)auStack_14,(Vector3 *)&pIStack_15,fVar2,(MethodInfo *)0x0);
    fVar22 = pQVar18->x;
    fVar23 = pQVar18->y;
    fVar24 = pQVar18->z;
    fVar25 = pQVar18->w;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    pMVar11 = (camController->fields).cameraStack;
    ppIVar26 = *(Il2CppType ***)&(this->fields).prevCameraPosition;
    fVar3 = (this->fields).prevCameraPosition.z;
    if (((pMVar11 == (MVCameraController_CameraStack *)0x0) || (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 == (MVCameraBase *)0x0)) || (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0)) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_14 = (undefined1  [8])0x0;
    fStack_17 = 0.0;
    pvVar28 = (pTVar27->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar28,auStack_14);
    fStack_29 = fStack_17;
    pIStack_15 = (Il2CppClass *)0x0;
    fStack_16 = 0.0;
    pIStack_30 = (Il2CppClass *)auStack_14;
    pcVar5 = pcRam_?;
    auStack_9._0_8_ = ppIVar26;
    auStack_9._8_4_ = fVar3;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(auStack_9,&pIStack_30,fVar2);
    if (pTVar13 == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    auStack_14 = (undefined1  [8])pIStack_15;
    fStack_17 = fStack_16;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar28 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar28);
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    auStack_9._0_4_ = (fVar22 * fVar21 + fVar25 * fVar7 + fVar23 * fVar20) - fVar24 * fVar19;
    auStack_9._4_4_ = (fVar23 * fVar21 + fVar25 * fVar19 + fVar24 * fVar7) - fVar22 * fVar20;
    auStack_9._8_4_ = (fVar24 * fVar21 + fVar25 * fVar20 + fVar22 * fVar19) - fVar23 * fVar7;
    auStack_9._12_4_ = ((fVar25 * fVar21 - fVar22 * fVar7) - fVar23 * fVar19) - fVar24 * fVar20;
    if (pTVar13 == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar28 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar13 == (Transform *)0x0) goto DAT_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)auStack_9,pTVar13,(MethodInfo *)0x0);
    pIVar10 = *(Il2CppClass **)pVVar8;
    fVar3 = pVVar8->z;
    if ((((camController == (MVCameraController *)0x0) || (pMVar11 = (camController->fields).cameraStack, pMVar11 == (MVCameraController_CameraStack *)0x0)) || (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 == (MVCameraBase *)0x0)) || (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0)) goto DAT_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&pIStack_30,pTVar13,(MethodInfo *)0x0);
    auStack_9._0_8_ = *(undefined8 *)pVVar8;
    auStack_9._8_4_ = pVVar8->z;
    pIStack_30 = pIVar10;
    fStack_29 = fVar3;
    pQVar18 = TransitionCamera_RotateTowardsX((Quaternion *)&pIStack_15,this,(Vector3 *)&pIStack_30,(Vector3 *)auStack_9,fVar2,(MethodInfo *)0x0);
    fVar3 = pQVar18->x;
    fVar7 = pQVar18->y;
    fVar19 = pQVar18->z;
    fVar20 = pQVar18->w;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar13 == (Transform *)0x0) goto DAT_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)auStack_9,pTVar13,(MethodInfo *)0x0);
    pMVar11 = (camController->fields).cameraStack;
    pIVar10 = *(Il2CppClass **)pVVar8;
    fVar21 = pVVar8->z;
    if (((pMVar11 == (MVCameraController_CameraStack *)0x0) || (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 == (MVCameraBase *)0x0)) || (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0)) goto DAT_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&pIStack_30,pTVar13,(MethodInfo *)0x0);
    auStack_9._0_8_ = *(undefined8 *)pVVar8;
    auStack_9._8_4_ = pVVar8->z;
    pIStack_30 = pIVar10;
    fStack_29 = fVar21;
    pQVar18 = TransitionCamera_RotateTowardsY((Quaternion *)&pIStack_15,this,(Vector3 *)&pIStack_30,(Vector3 *)auStack_9,fVar2,(MethodInfo *)0x0);
    fVar21 = pQVar18->x;
    fVar22 = pQVar18->y;
    fVar23 = pQVar18->z;
    fVar24 = pQVar18->w;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar27 == (Transform *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_14 = (undefined1  [8])0x0;
    fStack_17 = 0.0;
    pvVar28 = (pTVar27->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar28);
    pMVar11 = (camController->fields).cameraStack;
    if (((pMVar11 == (MVCameraController_CameraStack *)0x0) || (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 == (MVCameraBase *)0x0)) || (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0)) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIStack_15 = (Il2CppClass *)0x0;
    fStack_16 = 0.0;
    pvVar28 = (pTVar27->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar28,&pIStack_15);
    pIStack_30 = (Il2CppClass *)auStack_14;
    auStack_9._8_4_ = fStack_16;
    fStack_29 = fStack_17;
    auStack_9._0_8_ = pIStack_15;
    auStack_14 = (undefined1  [8])0x0;
    fStack_17 = 0.0;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(&pIStack_30,auStack_9,fVar2);
    if (pTVar13 == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIStack_15 = (Il2CppClass *)auStack_14;
    fStack_16 = fStack_17;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar28 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar28);
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    auStack_9._0_4_ = (fVar21 * fVar20 + fVar24 * fVar3 + fVar22 * fVar19) - fVar23 * fVar7;
    auStack_9._4_4_ = (fVar22 * fVar20 + fVar24 * fVar7 + fVar23 * fVar3) - fVar21 * fVar19;
    auStack_9._8_4_ = (fVar23 * fVar20 + fVar24 * fVar19 + fVar21 * fVar7) - fVar22 * fVar3;
    auStack_9._12_4_ = ((fVar24 * fVar20 - fVar21 * fVar3) - fVar22 * fVar7) - fVar23 * fVar19;
    if (pTVar13 == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar28 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar28 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar28,auStack_9);
  pMVar31 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  fVar3 = (float)(*(this->klass->vtable).get_FieldOfView.methodPtr)(this);
  pMVar11 = (camController->fields).cameraStack;
  if ((pMVar11 != (MVCameraController_CameraStack *)0x0) && (pMVar12 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar11,(MethodInfo *)0x0), pMVar12 != (MVCameraBase *)0x0)) {
    fVar7 = (float)(*(pMVar12->klass->vtable).get_FieldOfView.methodPtr)(pMVar12,(pMVar12->klass->vtable).get_FieldOfView.method);
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    if ((pMVar31 != (MainCameraManager *)0x0) && (this_00 = (pMVar31->fields).mainCamera, this_00 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(this_00,(fVar7 - fVar3) * fVar2 + fVar3,(MethodInfo *)0x0);
      MVCameraBase::MVCameraBase_UpdateCamera((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TransitionCamera() */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera__ctor(TransitionCamera *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).transitionPercentage = 1.0;
  (this->fields).time = 5.0;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
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
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

