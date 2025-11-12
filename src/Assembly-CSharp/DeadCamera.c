
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_Enter
               (DeadCamera *this,MVCameraController *camController,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar2 == (MainCameraManager *)0x0) ||
      (this_00 = (pMVar2->fields).mainCamera, this_00 == (Camera *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 != (void *)0x0) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar4);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar2 != (MainCameraManager *)0x0) {
        pMVar6 = (pMVar2->fields).cameraController;
        this_01 = (pMVar2->fields).transitionCamera;
        if ((((pMVar6 != (MVCameraController *)0x0) &&
             (this_02 = (pMVar6->fields).cameraStack,
             this_02 != (MVCameraController_CameraStack *)0x0)) &&
            (this_03 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                 (this_02,(MethodInfo *)0x0), this_03 != (MVCameraBase *)0x0)) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_03,(MethodInfo *)0x0),
           this_01 != (TransitionCamera *)0x0)) {
          TransitionCamera::TransitionCamera_InitTransition
                    (this_01,pTVar1,_UNK_?,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_UpdateCamera
               (DeadCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  MVCameraBase::MVCameraBase_UpdateCamera
            ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
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
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
    QStack_7.x = (this->fields).avatarLocalLookAtOffset.x;
    QStack_7.y = (this->fields).avatarLocalLookAtOffset.y;
    fVar8 = (this->fields).avatarLocalLookAtOffset.z;
    (this->fields).lookAtPos.x = QStack_3.x + QStack_7.x;
    (this->fields).lookAtPos.y = QStack_3.y + QStack_7.y;
    (this->fields).lookAtPos.z = QStack_3.z + fVar8;
    DeadCamera_UpdateRotation(this,(MethodInfo *)0x0);
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
      QStack_3.x = 0.0;
      QStack_3.y = 0.0;
      QStack_3.z = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar4,&QStack_3);
      if (targetTransform != (ProtectedTransform *)0x0) {
        QStack_7.x = QStack_3.x;
        QStack_7.y = QStack_3.y;
        QStack_7.z = QStack_3.z;
        ProtectedTransform::ProtectedTransform_set_position
                  (targetTransform,(Vector3 *)&QStack_7,(MethodInfo *)0x0);
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
          QStack_7.x = 0.0;
          QStack_7.y = 0.0;
          QStack_7.z = 0.0;
          QStack_7.w = 0.0;
          pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar4,&QStack_7);
          ProtectedTransform::ProtectedTransform_set_rotation
                    (targetTransform,&QStack_7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_UpdateRotation(DeadCamera *this,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields).lookAtPos.x;
  uStack_1._4_4_ = (this->fields).lookAtPos.y;
  fVar2 = (this->fields).lookAtPos.z;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar3 == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar7);
  fVar9 = (float)uStack_1 - (float)uStack_5;
  fVar10 = uStack_1._4_4_ - uStack_5._4_4_;
  fVar2 = fVar2 - fStack_6;
  uStack_1 = CONCAT44(fVar10,fVar9);
  fStack_11 = fVar2;
  fVar12 = (float)FUN_?(&uStack_1);
  if (_UNK_? < fVar12) {
    fVar2 = fVar2 / fVar12;
    uStack_5 = CONCAT44(fVar10 / fVar12,fVar9 / fVar12);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar13->zeroVector).x;
    uStack_5._4_4_ = (pVVar13->zeroVector).y;
    fVar2 = (pVVar13->zeroVector).z;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  uVar14 = uStack_5._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_1._0_4_ = (pVVar13->upVector).x;
  uStack_1._4_4_ = (pVVar13->upVector).y;
  fStack_11 = (pVVar13->upVector).z;
  uStack_5 = CONCAT44(uVar14,(float)uStack_5);
  uStack_15 = 0;
  uStack_16 = 0;
  pcVar4 = pcRam_?;
  fStack_6 = fVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(&uStack_5,&uStack_1,&uStack_15);
  if (pTVar3 == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_17 = (undefined4)uStack_15;
  uStack_18 = uStack_15._4_4_;
  uStack_19 = (undefined4)uStack_16;
  uStack_20 = uStack_16._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar7,&uStack_17);
  return;
}

