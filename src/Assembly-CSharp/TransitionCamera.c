
/* Void AbortTransition() */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_AbortTransition
               (TransitionCamera *this,MethodInfo *method)

{
  (this->fields).transitionPercentage = 1.0;
  return;
}


/* Void InitTransition(Transform, Single, Boolean) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_InitTransition
               (TransitionCamera *this,Transform *targetCameraTransform,float transitionTime,
               bool soft,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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
    if ((pMVar1 != (MainCameraManager *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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
      if ((pMVar1 != (MainCameraManager *)0x0) &&
         (obj = (pMVar1->fields).mainCamera, obj != (Camera *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fVar6 = (float)(*pcRam_?)(pvVar5);
        (this->fields).fieldOfView = fVar6;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar5);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            fStack_7 = (this->fields).prevCameraRotation.x;
            fStack_8 = (this->fields).prevCameraRotation.y;
            fStack_9 = (this->fields).prevCameraRotation.z;
            fStack_10 = (this->fields).prevCameraRotation.w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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

Quaternion *
Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsX
          (Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 *eulerFrom,
          Vector3 *eulerTo,float percentage,MethodInfo *method)

{
  fVar1 = _UNK_?;
  eulerTo->y = 0.0;
  eulerTo->z = 0.0;
  uStack_2._0_4_ = eulerTo->x;
  uStack_2._4_4_ = eulerTo->y;
  uStack_3 = CONCAT44((float)uStack_2._4_4_ * fVar1,(float)(undefined4)uStack_2 * fVar1);
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = CONCAT44(uStack_6._4_4_,eulerTo->z * fVar1);
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
  (*pcRam_?)(&uStack_3,&uStack_4);
  eulerFrom->y = 0.0;
  eulerFrom->z = 0.0;
  uVar10 = eulerFrom->x;
  uVar11 = eulerFrom->y;
  fStack_12 = eulerFrom->z * fVar1;
  uStack_2 = CONCAT44((float)uVar11 * fVar1,(float)uVar10 * fVar1);
  uStack_13 = 0;
  uStack_14 = 0;
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
  (*pcRam_?)(&uStack_2,&uStack_13);
  uStack_3 = uStack_4;
  uStack_6 = uStack_5;
  uStack_15 = (undefined4)uStack_13;
  uStack_16 = uStack_13._4_4_;
  uStack_17 = (undefined4)uStack_14;
  uStack_18 = uStack_14._4_4_;
  uStack_4 = 0;
  uStack_5 = 0;
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
  (*pcRam_?)(&uStack_15,&uStack_3,percentage,&uStack_4);
  __return_storage_ptr__->x = (float)(undefined4)uStack_4;
  __return_storage_ptr__->y = (float)uStack_4._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_5;
  __return_storage_ptr__->w = (float)uStack_5._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion RotateTowardsY(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsY
          (Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 *eulerFrom,
          Vector3 *eulerTo,float percentage,MethodInfo *method)

{
  fVar1 = _UNK_?;
  eulerTo->x = 0.0;
  eulerTo->z = 0.0;
  uStack_2._0_4_ = eulerTo->x;
  uStack_2._4_4_ = eulerTo->y;
  uStack_3 = CONCAT44((float)uStack_2._4_4_ * fVar1,(float)(undefined4)uStack_2 * fVar1);
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = CONCAT44(uStack_6._4_4_,eulerTo->z * fVar1);
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
  (*pcRam_?)(&uStack_3,&uStack_4);
  eulerFrom->x = 0.0;
  eulerFrom->z = 0.0;
  uVar10 = eulerFrom->x;
  uVar11 = eulerFrom->y;
  fStack_12 = eulerFrom->z * fVar1;
  uStack_2 = CONCAT44((float)uVar11 * fVar1,(float)uVar10 * fVar1);
  uStack_13 = 0;
  uStack_14 = 0;
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
  (*pcRam_?)(&uStack_2,&uStack_13);
  uStack_3 = uStack_4;
  uStack_6 = uStack_5;
  uStack_15 = (undefined4)uStack_13;
  uStack_16 = uStack_13._4_4_;
  uStack_17 = (undefined4)uStack_14;
  uStack_18 = uStack_14._4_4_;
  uStack_4 = 0;
  uStack_5 = 0;
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
  (*pcRam_?)(&uStack_15,&uStack_3,percentage,&uStack_4);
  __return_storage_ptr__->x = (float)(undefined4)uStack_4;
  __return_storage_ptr__->y = (float)uStack_4._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_5;
  __return_storage_ptr__->w = (float)uStack_5._4_4_;
  return __return_storage_ptr__;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera
               (TransitionCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pfVar2 = &(this->fields).transitionPercentage;
  if (_UNK_? < *pfVar2 || _UNK_? == *pfVar2) {
    return;
  }
  fVar3 = (this->fields).transitionPercentage;
  fVar4 = (this->fields).time;
  pMVar5 = (MethodInfo *)targetTransform;
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
  fVar8 = (float)(*pcRam_?)();
  fVar3 = fVar8 * (fVar1 / fVar4) + fVar3;
  (this->fields).transitionPercentage = fVar3;
  if (fVar1 < fVar3) {
    (this->fields).transitionPercentage = 1.0;
  }
  fVar3 = (this->fields).transitionPercentage;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (fVar1 < fVar3) {
    fVar3 = fVar1;
  }
  fVar3 = fVar3 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar3 * fVar3 + fVar3 * _UNK_? * fVar3;
  fVar3 = (fVar1 - fVar3) * 0.0 + fVar3;
  if ((this->fields).superSoft == 0) {
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                        ((Vector3 *)auStack_10,&(this->fields).prevCameraRotation,pMVar5);
    pIVar11 = *(Il2CppClass **)pVVar9;
    fVar4 = pVVar9->z;
    if ((((camController == (MVCameraController *)0x0) ||
         (pMVar12 = (camController->fields).cameraStack,
         pMVar12 == (MVCameraController_CameraStack *)0x0)) ||
        (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0)) ||
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto DAT_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)auStack_10,pTVar14,(MethodInfo *)0x0);
    pMVar5 = (MethodInfo *)auStack_15;
    pIStack_16 = *(Il2CppClass **)pVVar9;
    fStack_17 = pVVar9->z;
    auStack_15 = (undefined1  [8])pIVar11;
    fStack_18 = fVar4;
    pQVar19 = TransitionCamera_RotateTowardsX
                        ((Quaternion *)auStack_10,this,(Vector3 *)pMVar5,(Vector3 *)&pIStack_16,
                         fVar3,(MethodInfo *)0x0);
    fVar8 = pQVar19->x;
    fVar20 = pQVar19->y;
    fVar21 = pQVar19->z;
    fVar22 = pQVar19->w;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                        ((Vector3 *)auStack_10,&(this->fields).prevCameraRotation,pMVar5);
    pMVar12 = (camController->fields).cameraStack;
    pIVar11 = *(Il2CppClass **)pVVar9;
    fVar4 = pVVar9->z;
    if (((pMVar12 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0)) ||
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto DAT_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)auStack_10,pTVar14,(MethodInfo *)0x0);
    pIStack_16 = *(Il2CppClass **)pVVar9;
    fStack_17 = pVVar9->z;
    auStack_15 = (undefined1  [8])pIVar11;
    fStack_18 = fVar4;
    pQVar19 = TransitionCamera_RotateTowardsY
                        ((Quaternion *)auStack_10,this,(Vector3 *)auStack_15,(Vector3 *)&pIStack_16,
                         fVar3,(MethodInfo *)0x0);
    fVar23 = pQVar19->x;
    fVar24 = pQVar19->y;
    fVar25 = pQVar19->z;
    fVar26 = pQVar19->w;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pMVar12 = (camController->fields).cameraStack;
    ppIVar27 = *(Il2CppType ***)&(this->fields).prevCameraPosition;
    fVar4 = (this->fields).prevCameraPosition.z;
    if (((pMVar12 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0)) ||
       (pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar13,(MethodInfo *)0x0), pTVar28 == (Transform *)0x0))
    goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_15 = (undefined1  [8])0x0;
    fStack_18 = 0.0;
    pvVar29 = (pTVar28->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar28,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar29,auStack_15);
    fStack_30 = fStack_18;
    pIStack_16 = (Il2CppClass *)0x0;
    fStack_17 = 0.0;
    pIStack_31 = (Il2CppClass *)auStack_15;
    pcVar6 = pcRam_?;
    auStack_10._0_8_ = ppIVar27;
    auStack_10._8_4_ = fVar4;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(auStack_10,&pIStack_31,fVar3);
    if (pTVar14 == (Transform *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    auStack_15 = (undefined1  [8])pIStack_16;
    fStack_18 = fStack_17;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar29 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar29);
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    auStack_10._0_4_ = (fVar23 * fVar22 + fVar26 * fVar8 + fVar24 * fVar21) - fVar25 * fVar20;
    auStack_10._4_4_ = (fVar24 * fVar22 + fVar26 * fVar20 + fVar25 * fVar8) - fVar23 * fVar21;
    auStack_10._8_4_ = (fVar25 * fVar22 + fVar26 * fVar21 + fVar23 * fVar20) - fVar24 * fVar8;
    auStack_10._12_4_ = ((fVar26 * fVar22 - fVar23 * fVar8) - fVar24 * fVar20) - fVar25 * fVar21;
    if (pTVar14 == (Transform *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
    pvVar29 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
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
  }
  else {
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto DAT_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)auStack_10,pTVar14,(MethodInfo *)0x0);
    pIVar11 = *(Il2CppClass **)pVVar9;
    fVar4 = pVVar9->z;
    if ((((camController == (MVCameraController *)0x0) ||
         (pMVar12 = (camController->fields).cameraStack,
         pMVar12 == (MVCameraController_CameraStack *)0x0)) ||
        (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0)) ||
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto DAT_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&pIStack_31,pTVar14,(MethodInfo *)0x0);
    auStack_10._0_8_ = *(undefined8 *)pVVar9;
    auStack_10._8_4_ = pVVar9->z;
    pIStack_31 = pIVar11;
    fStack_30 = fVar4;
    pQVar19 = TransitionCamera_RotateTowardsX
                        ((Quaternion *)&pIStack_16,this,(Vector3 *)&pIStack_31,(Vector3 *)auStack_10
                         ,fVar3,(MethodInfo *)0x0);
    fVar4 = pQVar19->x;
    fVar8 = pQVar19->y;
    fVar20 = pQVar19->z;
    fVar21 = pQVar19->w;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto DAT_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)auStack_10,pTVar14,(MethodInfo *)0x0);
    pMVar12 = (camController->fields).cameraStack;
    pIVar11 = *(Il2CppClass **)pVVar9;
    fVar22 = pVVar9->z;
    if (((pMVar12 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0)) ||
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto DAT_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&pIStack_31,pTVar14,(MethodInfo *)0x0);
    auStack_10._0_8_ = *(undefined8 *)pVVar9;
    auStack_10._8_4_ = pVVar9->z;
    pIStack_31 = pIVar11;
    fStack_30 = fVar22;
    pQVar19 = TransitionCamera_RotateTowardsY
                        ((Quaternion *)&pIStack_16,this,(Vector3 *)&pIStack_31,(Vector3 *)auStack_10
                         ,fVar3,(MethodInfo *)0x0);
    fVar22 = pQVar19->x;
    fVar23 = pQVar19->y;
    fVar24 = pQVar19->z;
    fVar25 = pQVar19->w;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar28 == (Transform *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_15 = (undefined1  [8])0x0;
    fStack_18 = 0.0;
    pvVar29 = (pTVar28->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar28,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar29);
    pMVar12 = (camController->fields).cameraStack;
    if (((pMVar12 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar12,(MethodInfo *)0x0), pMVar13 == (MVCameraBase *)0x0)) ||
       (pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar13,(MethodInfo *)0x0), pTVar28 == (Transform *)0x0))
    goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIStack_16 = (Il2CppClass *)0x0;
    fStack_17 = 0.0;
    pvVar29 = (pTVar28->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar28,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar29,&pIStack_16);
    pIStack_31 = (Il2CppClass *)auStack_15;
    auStack_10._8_4_ = fStack_17;
    fStack_30 = fStack_18;
    auStack_10._0_8_ = pIStack_16;
    auStack_15 = (undefined1  [8])0x0;
    fStack_18 = 0.0;
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
    (*pcRam_?)(&pIStack_31,auStack_10,fVar3);
    if (pTVar14 == (Transform *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIStack_16 = (Il2CppClass *)auStack_15;
    fStack_17 = fStack_18;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar29 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar29);
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    auStack_10._0_4_ = (fVar22 * fVar21 + fVar25 * fVar4 + fVar23 * fVar20) - fVar24 * fVar8;
    auStack_10._4_4_ = (fVar23 * fVar21 + fVar25 * fVar8 + fVar24 * fVar4) - fVar22 * fVar20;
    auStack_10._8_4_ = (fVar24 * fVar21 + fVar25 * fVar20 + fVar22 * fVar8) - fVar23 * fVar4;
    auStack_10._12_4_ = ((fVar25 * fVar21 - fVar22 * fVar4) - fVar23 * fVar8) - fVar24 * fVar20;
    if (pTVar14 == (Transform *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
    pvVar29 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
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
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar29,auStack_10);
  pMVar32 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  fVar4 = (float)(*(this->klass->vtable).get_FieldOfView.methodPtr)(this);
  pMVar12 = (camController->fields).cameraStack;
  if ((pMVar12 != (MVCameraController_CameraStack *)0x0) &&
     (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (pMVar12,(MethodInfo *)0x0), pMVar13 != (MVCameraBase *)0x0)) {
    fVar8 = (float)(*(pMVar13->klass->vtable).get_FieldOfView.methodPtr)
                              (pMVar13,(pMVar13->klass->vtable).get_FieldOfView.method);
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (fVar1 < fVar3) {
      fVar3 = fVar1;
    }
    if ((pMVar32 != (MainCameraManager *)0x0) &&
       (this_00 = (pMVar32->fields).mainCamera, this_00 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (this_00,(fVar8 - fVar4) * fVar3 + fVar4,(MethodInfo *)0x0);
      MVCameraBase::MVCameraBase_UpdateCamera
                ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TransitionCamera() */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera__ctor
               (TransitionCamera *this,MethodInfo *method)

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
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
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
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
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
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

