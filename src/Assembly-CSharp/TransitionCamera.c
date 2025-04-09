
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
                (this->fields).superSoft = 0xaa;
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
  fVar4 = 0.0;
  pQVar5 = (Quaternion *)&stack0xffffffd0;
  euler.y = fVar3;
  euler.x = fVar1;
  euler.z = 0.0;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (pQVar5,euler,(MethodInfo *)0x0);
  b.y = fVar1;
  b.x = (float)pQVar5;
  b.z = fVar3;
  b.w = fVar4;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffc0,*pQVar6,b,percentage,(MethodInfo *)0x0);
  fVar3 = pQVar5->y;
  fVar1 = pQVar5->z;
  fVar4 = pQVar5->w;
  __return_storage_ptr__->x = pQVar5->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar1;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera
               (TransitionCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  this_01 = this;
  fVar1 = (this->fields).transitionPercentage;
  if ((float)_UNK_? <= fVar1) {
    return;
  }
  fVar2 = (this->fields).time;
  uStack_3 = CONCAT44(fVar1,(undefined4)uStack_3);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pTVar4 = _UNK_?;
  fVar1 = fVar1 * ((float)_UNK_? / fVar2) + uStack_3._4_4_;
  (this->fields).transitionPercentage = fVar1;
  if ((float)pTVar4 < fVar1) {
    (this->fields).transitionPercentage = 1.0;
  }
  pTVar5 = (TransitionCamera *)(this->fields).transitionPercentage;
  if ((float)pTVar5 < 0.0) {
    pTVar5 = (TransitionCamera *)0x0;
  }
  else if ((float)pTVar4 < (float)pTVar5) {
    pTVar5 = pTVar4;
  }
  fVar1 = (float)pTVar5 * _UNK_? * (float)pTVar5 * (float)pTVar5 +
           (float)pTVar5 * _UNK_? * (float)pTVar5;
  pTVar4 = (TransitionCamera *)(((float)pTVar4 - fVar1) * 0.0 + fVar1);
  if ((this->fields).superSoft == 0) {
    puVar6 = (undefined8 *)func_?(auStack_7,&(this->fields).prevCameraRotation);
    uVar8 = *puVar6;
    uStack_3 = CONCAT44(*(undefined4 *)(puVar6 + 1),(undefined4)uStack_3);
    if ((((camController == (MVCameraController *)0x0) ||
         (pMVar9 = (camController->fields).cameraStack,
         pMVar9 == (MVCameraController_CameraStack *)0x0)) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    eulerFrom.z = uStack_3._4_4_;
    eulerFrom._0_8_ = uVar8;
    pQVar13 = TransitionCamera_RotateTowardsX
                        ((Quaternion *)&stack0xffffffbc,this,eulerFrom,*pVVar12,(float)pTVar4,
                         (MethodInfo *)0x0);
    fVar1 = pQVar13->x;
    fVar2 = pQVar13->y;
    fVar14 = pQVar13->z;
    fVar15 = pQVar13->w;
    pVVar12 = (Vector3 *)func_?();
    VVar16 = *pVVar12;
    pMVar9 = (camController->fields).cameraStack;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    pQVar13 = TransitionCamera_RotateTowardsY
                        ((Quaternion *)&stack0xffffffbc,this,VVar16,*pVVar12,(float)pTVar4,
                         (MethodInfo *)0x0);
    fVar17 = pQVar13->x;
    fVar18 = pQVar13->y;
    fVar19 = pQVar13->z;
    fVar20 = pQVar13->w;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    uVar21 = (this->fields).prevCameraPosition.x;
    uVar22 = (this->fields).prevCameraPosition.y;
    a.y = (float)uVar22;
    a.x = (float)uVar21;
    pMVar9 = (camController->fields).cameraStack;
    uStack_3 = CONCAT44((this->fields).prevCameraPosition.z,(undefined4)uStack_3);
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar10,(MethodInfo *)0x0), pTVar23 == (Transform *)0x0))
    goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffdc,pTVar23,(MethodInfo *)0x0);
    a.z = uStack_3._4_4_;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp
                        ((Vector3 *)&stack0xffffffdc,a,*pVVar12,(float)pTVar4,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar11,*pVVar12,(MethodInfo *)0x0);
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    fVar24 = (fVar20 * fVar1 + fVar15 * fVar17 + fVar14 * fVar18) - fVar19 * fVar2;
    fVar25 = (fVar20 * fVar2 + fVar15 * fVar18 + fVar19 * fVar1) - fVar14 * fVar17;
    fVar26 = (fVar20 * fVar14 + fVar15 * fVar19 + fVar2 * fVar17) - fVar18 * fVar1;
    uStack_3 = CONCAT44(fVar15 * fVar20,(undefined4)uStack_3);
    fVar1 = ((fVar15 * fVar20 - fVar1 * fVar17) - fVar2 * fVar18) - fVar14 * fVar19;
    this = pTVar4;
  }
  else {
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    VVar16 = *pVVar12;
    if ((((camController == (MVCameraController *)0x0) ||
         (pMVar9 = (camController->fields).cameraStack,
         pMVar9 == (MVCameraController_CameraStack *)0x0)) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    pQVar13 = TransitionCamera_RotateTowardsX
                        ((Quaternion *)&stack0xffffffbc,this,VVar16,*pVVar12,(float)pTVar4,
                         (MethodInfo *)0x0);
    fVar1 = pQVar13->x;
    fVar2 = pQVar13->y;
    fVar14 = pQVar13->z;
    puVar27 = &UNK_?;
    targetTransform =
         (ProtectedTransform *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                   ((Component *)this,(MethodInfo *)0x0);
    if ((Transform *)targetTransform == (Transform *)0x0) goto code_?;
    this = (TransitionCamera *)&UNK_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffdc,(Transform *)targetTransform,(MethodInfo *)0x0)
    ;
    VVar16 = *pVVar12;
    pMVar9 = (camController->fields).cameraStack;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    pQVar13 = TransitionCamera_RotateTowardsY
                        ((Quaternion *)&stack0xffffffbc,this_01,VVar16,*pVVar12,3.2466084e-29,
                         (MethodInfo *)0x0);
    fVar15 = pQVar13->x;
    fVar17 = pQVar13->y;
    fVar18 = pQVar13->z;
    fVar19 = pQVar13->w;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0);
    pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (pTVar23 == (Transform *)0x0) goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffdc,pTVar23,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar12->x;
    uStack_3._4_4_ = pVVar12->y;
    fVar24 = pVVar12->z;
    pMVar9 = (camController->fields).cameraStack;
    if (((pMVar9 == (MVCameraController_CameraStack *)0x0) ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0)) ||
       (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar10,(MethodInfo *)0x0), pTVar23 == (Transform *)0x0))
    goto code_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffdc,pTVar23,(MethodInfo *)0x0);
    VVar16.z = fVar24;
    VVar16.x = (float)(undefined4)uStack_3;
    VVar16.y = uStack_3._4_4_;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp
                        ((Vector3 *)&stack0xffffffdc,VVar16,*pVVar12,3.2466084e-29,(MethodInfo *)0x0)
    ;
    if (pTVar11 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar11,*pVVar12,(MethodInfo *)0x0);
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0);
    fVar24 = (fVar19 * fVar1 + (float)puVar27 * fVar15 + fVar14 * fVar17) - fVar18 * fVar2;
    uStack_3 = CONCAT44(fVar24,(undefined4)uStack_3);
    fVar25 = (fVar19 * fVar2 + (float)puVar27 * fVar17 + fVar18 * fVar1) - fVar14 * fVar15;
    fVar26 = (fVar19 * fVar14 + (float)puVar27 * fVar18 + fVar2 * fVar15) - fVar17 * fVar1;
    fVar1 = (((float)puVar27 * fVar19 - fVar1 * fVar15) - fVar2 * fVar17) - fVar14 * fVar18;
  }
  if (pTVar11 != (Transform *)0x0) {
    value.y = fVar25;
    value.x = fVar24;
    value.z = fVar26;
    value.w = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar11,value,(MethodInfo *)0x0);
    pMVar28 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    fVar29 = (float10)(*(code *)(this_01->klass->vtable).get_FieldOfView.method)();
    pMVar9 = (camController->fields).cameraStack;
    uStack_3 = CONCAT44((float)fVar29,(undefined4)uStack_3);
    if ((pMVar9 != (MVCameraController_CameraStack *)0x0) &&
       (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (pMVar9,(MethodInfo *)0x0), pMVar10 != (MVCameraBase *)0x0)) {
      fVar29 = (float10)(*(code *)(pMVar10->klass->vtable).get_FieldOfView.method)();
      if ((float)this < 0.0) {
        this = (TransitionCamera *)0x0;
      }
      else if ((float)_UNK_? < (float)this) {
        this = _UNK_?;
      }
      if ((pMVar28 != (MainCameraManager *)0x0) &&
         (this_00 = (pMVar28->fields).mainCamera, this_00 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (this_00,((float)fVar29 - uStack_3._4_4_) * (float)this + uStack_3._4_4_,
                   (MethodInfo *)0x0);
        MVCameraBase::MVCameraBase_UpdateCamera
                  ((MVCameraBase *)this_01,camController,targetTransform,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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

