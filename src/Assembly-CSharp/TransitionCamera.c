
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
  if (pMVar1 != (MainCameraManager *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields).prevCameraPosition.x = pVVar3->x;
      (this->fields).prevCameraPosition.y = fVar4;
      (this->fields).prevCameraPosition.z = fVar5;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 != (MainCameraManager *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                             ((Quaternion *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
          fVar5 = pQVar6->y;
          fVar4 = pQVar6->z;
          fVar7 = pQVar6->w;
          (this->fields).prevCameraRotation.x = pQVar6->x;
          (this->fields).prevCameraRotation.y = fVar5;
          (this->fields).prevCameraRotation.z = fVar4;
          (this->fields).prevCameraRotation.w = fVar7;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if ((pMVar1 != (MainCameraManager *)0x0) &&
             (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                              (this_00,(MethodInfo *)0x0);
            (this->fields).fieldOfView = fVar5;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,(this->fields).prevCameraPosition,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar2,(this->fields).prevCameraRotation,(MethodInfo *)0x0);
                (this->fields).time = transitionTime;
                (this->fields).superSoft = 0xfe;
                (this->fields).transitionPercentage = 0.0;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Quaternion RotateTowardsX(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsX
          (Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 eulerFrom,
          Vector3 eulerTo,float percentage,MethodInfo *method)

{
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = eulerTo.x * _UNK_?;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  fVar5 = 0.0;
  euler_00.y = 0.0;
  euler_00.z = 0.0;
  euler_00.x = eulerFrom.x * _UNK_?;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffdc,euler_00,(MethodInfo *)0x0);
  b.y = fVar2;
  b.x = fVar5;
  b.z = fVar3;
  b.w = fVar4;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffdc,*pQVar1,b,percentage,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion RotateTowardsY(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsY
          (Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 eulerFrom,
          Vector3 eulerTo,float percentage,MethodInfo *method)

{
  fVar1 = 0.0;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = eulerTo.y * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
            ((Quaternion *)&stack0xffffffc0,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
  fVar3 = eulerFrom.y * _UNK_?;
  pQVar4 = (Quaternion *)&stack0xffffffd0;
  euler.y = fVar3;
  euler.x = fVar1;
  euler.z = fVar1;
  fVar5 = fVar1;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (pQVar4,euler,(MethodInfo *)0x0);
  b.y = fVar1;
  b.x = (float)pQVar4;
  b.z = fVar3;
  b.w = fVar5;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffc0,*pQVar6,b,percentage,(MethodInfo *)0x0);
  fVar5 = pQVar4->y;
  fVar3 = pQVar4->z;
  fVar1 = pQVar4->w;
  __return_storage_ptr__->x = pQVar4->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar1;
  return __return_storage_ptr__;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera
               (TransitionCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  this_01 = this;
  pfVar1 = &(this->fields).transitionPercentage;
  if ((float)_UNK_? < *pfVar1 || (float)_UNK_? == *pfVar1) {
    return;
  }
  VStack_2.z = (this->fields).transitionPercentage;
  fVar3 = (this->fields).time;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pTVar5 = _UNK_?;
  fVar3 = fVar4 * ((float)_UNK_? / fVar3) + VStack_2.z;
  (this->fields).transitionPercentage = fVar3;
  if ((float)pTVar5 < fVar3) {
    (this->fields).transitionPercentage = 1.0;
  }
  pTVar6 = (TransitionCamera *)(this->fields).transitionPercentage;
  if ((float)pTVar6 < 0.0) {
    pTVar6 = (TransitionCamera *)0x0;
  }
  else if ((float)pTVar5 < (float)pTVar6) {
    pTVar6 = pTVar5;
  }
  fVar3 = (float)pTVar6 * _UNK_? * (float)pTVar6 * (float)pTVar6 +
           (float)pTVar6 * _UNK_? * (float)pTVar6;
  pTVar5 = (TransitionCamera *)(((float)pTVar5 - fVar3) * 0.0 + fVar3);
  if ((this->fields).superSoft == 0) {
    pVVar7 = (Vector3 *)func_?(&VStack_2,&(this->fields).prevCameraRotation);
    VVar8 = *pVVar7;
    if ((((camController == (MVCameraController *)0x0) ||
         (pMVar9 = (camController->fields).cameraStack,
         pMVar9 == (MVCameraController_CameraStack *)0x0)) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_2,pTVar11,(MethodInfo *)0x0);
    pQVar12 = TransitionCamera_RotateTowardsX
                        ((Quaternion *)&stack0xffffffbc,this,VVar8,*pVVar7,(float)pTVar5,
                         (MethodInfo *)0x0);
    fVar13 = pQVar12->x;
    fVar3 = pQVar12->y;
    fVar4 = pQVar12->z;
    fVar14 = pQVar12->w;
    pVVar7 = (Vector3 *)func_?();
    VVar8 = *pVVar7;
    pMVar9 = (camController->fields).cameraStack;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_2,pTVar11,(MethodInfo *)0x0);
    pQVar12 = TransitionCamera_RotateTowardsY
                        ((Quaternion *)&stack0xffffffcc,this,VVar8,*pVVar7,(float)pTVar5,
                         (MethodInfo *)0x0);
    fVar15 = pQVar12->x;
    fVar16 = pQVar12->y;
    fVar17 = pQVar12->z;
    fVar18 = pQVar12->w;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    uVar19 = (this->fields).prevCameraPosition.x;
    uVar20 = (this->fields).prevCameraPosition.y;
    a.y = (float)uVar20;
    a.x = (float)uVar19;
    pMVar9 = (camController->fields).cameraStack;
    VStack_2.z = (this->fields).prevCameraPosition.z;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar10,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    a.z = VStack_2.z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp
                       ((Vector3 *)&stack0xffffffdc,a,*pVVar7,(float)pTVar5,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar11,*pVVar7,(MethodInfo *)0x0);
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    fVar22 = (fVar18 * fVar13 + fVar15 * fVar14 + fVar16 * fVar4) - fVar17 * fVar3;
    fVar23 = (fVar3 * fVar18 + fVar16 * fVar14 + fVar17 * fVar13) - fVar4 * fVar15;
    fVar24 = (fVar4 * fVar18 + fVar17 * fVar14 + fVar3 * fVar15) - fVar16 * fVar13;
    VStack_2.z = fVar18 * fVar14;
    fVar13 = fVar18 * fVar14 - fVar13 * fVar15;
    this = pTVar5;
  }
  else {
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    VVar8 = *pVVar7;
    if ((((camController == (MVCameraController *)0x0) ||
         (pMVar9 = (camController->fields).cameraStack,
         pMVar9 == (MVCameraController_CameraStack *)0x0)) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    pQVar12 = TransitionCamera_RotateTowardsX
                        ((Quaternion *)&stack0xffffffbc,this,VVar8,*pVVar7,(float)pTVar5,
                         (MethodInfo *)0x0);
    fVar13 = pQVar12->x;
    fVar3 = pQVar12->y;
    fVar4 = pQVar12->z;
    fVar14 = pQVar12->w;
    targetTransform =
         (ProtectedTransform *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                   ((Component *)this,(MethodInfo *)0x0);
    if ((Transform *)targetTransform == (Transform *)0x0) goto code_?;
    this = (TransitionCamera *)&UNK_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffdc,(Transform *)targetTransform,(MethodInfo *)0x0);
    VVar8 = *pVVar7;
    pMVar9 = (camController->fields).cameraStack;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    pQVar12 = TransitionCamera_RotateTowardsY
                        ((Quaternion *)&stack0xffffffcc,this_01,VVar8,*pVVar7,3.2548824e-29,
                         (MethodInfo *)0x0);
    fVar15 = pQVar12->x;
    fVar16 = pQVar12->y;
    fVar17 = pQVar12->z;
    fVar18 = pQVar12->w;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0);
    pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (pTVar21 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    VStack_2.y = pVVar7->x;
    VStack_2.z = pVVar7->y;
    fVar22 = pVVar7->z;
    pMVar9 = (camController->fields).cameraStack;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar10,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    VVar8.z = fVar22;
    VVar8.x = VStack_2.y;
    VVar8.y = VStack_2.z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp
                       ((Vector3 *)&stack0xffffffdc,VVar8,*pVVar7,3.2548824e-29,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar11,*pVVar7,(MethodInfo *)0x0);
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0);
    fVar22 = (fVar18 * fVar13 + fVar15 * fVar14 + fVar16 * fVar4) - fVar17 * fVar3;
    VStack_2.z = fVar22;
    fVar23 = (fVar3 * fVar18 + fVar16 * fVar14 + fVar17 * fVar13) - fVar4 * fVar15;
    fVar24 = (fVar4 * fVar18 + fVar17 * fVar14 + fVar3 * fVar15) - fVar16 * fVar13;
    fVar13 = fVar18 * fVar14 - fVar13 * fVar15;
  }
  if (pTVar11 != (Transform *)0x0) {
    value.y = fVar23;
    value.x = fVar22;
    value.z = fVar24;
    value.w = (fVar13 - fVar3 * fVar16) - fVar17 * fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar11,value,(MethodInfo *)0x0);
    pMVar25 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    fVar26 = (float10)(*(code *)(this_01->klass->vtable).get_FieldOfView.method)();
    pMVar9 = (camController->fields).cameraStack;
    VStack_2.z = (float)fVar26;
    if ((pMVar9 != (MVCameraController_CameraStack *)0x0) &&
       (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (pMVar9,(MethodInfo *)0x0), pMVar10 != (MVCameraBase *)0x0)) {
      fVar26 = (float10)(*(code *)(pMVar10->klass->vtable).get_FieldOfView.method)();
      if ((float)this < 0.0) {
        this = (TransitionCamera *)0x0;
      }
      else if ((float)_UNK_? < (float)this) {
        this = _UNK_?;
      }
      if ((pMVar25 != (MainCameraManager *)0x0) &&
         (this_00 = (pMVar25->fields).mainCamera, this_00 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (this_00,((float)fVar26 - VStack_2.z) * (float)this + VStack_2.z,
                   (MethodInfo *)0x0);
        MVCameraBase::MVCameraBase_UpdateCamera
                  ((MVCameraBase *)this_01,camController,targetTransform,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* TransitionCamera() */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera__ctor
               (TransitionCamera *this,MethodInfo *method)

{
  (this->fields).transitionPercentage = 1.0;
  (this->fields).time = 5.0;
  (this->fields)._.cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

