
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
  if (pMVar1 != (MainCameraManager *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields).prevCameraPosition.x = pVVar3->x;
      (this->fields).prevCameraPosition.y = fVar4;
      (this->fields).prevCameraPosition.z = fVar5;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 != (MainCameraManager *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation((Quaternion *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
          fVar5 = pQVar6->y;
          fVar4 = pQVar6->z;
          fVar7 = pQVar6->w;
          (this->fields).prevCameraRotation.x = pQVar6->x;
          (this->fields).prevCameraRotation.y = fVar5;
          (this->fields).prevCameraRotation.z = fVar4;
          (this->fields).prevCameraRotation.w = fVar7;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
          if ((pMVar1 != (MainCameraManager *)0x0) && (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(this_00,(MethodInfo *)0x0);
            (this->fields).fieldOfView = fVar5;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar2,(this->fields).prevCameraPosition,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation(pTVar2,(this->fields).prevCameraRotation,(MethodInfo *)0x0);
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

Quaternion * Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsX(Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 eulerFrom,Vector3 eulerTo,float percentage,MethodInfo *method)

{
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = eulerTo.x * 0.017453292;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  fVar5 = 0.0;
  euler_00.y = 0.0;
  euler_00.z = 0.0;
  euler_00.x = eulerFrom.x * 0.017453292;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffdc,euler_00,(MethodInfo *)0x0);
  b.y = fVar2;
  b.x = fVar5;
  b.z = fVar3;
  b.w = fVar4;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp((Quaternion *)&stack0xffffffdc,*pQVar1,b,percentage,(MethodInfo *)0x0);
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

Quaternion * Assembly-CSharp.dll::TransitionCamera::TransitionCamera_RotateTowardsY(Quaternion *__return_storage_ptr__,TransitionCamera *this,Vector3 eulerFrom,Vector3 eulerTo,float percentage,MethodInfo *method)

{
  fVar1 = 0.0;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = eulerTo.y * 0.017453292;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffc0,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
  fVar3 = eulerFrom.y * 0.017453292;
  fVar4 = 0.0;
  pQVar5 = (Quaternion *)&stack0xffffffd0;
  euler.y = fVar3;
  euler.x = fVar1;
  euler.z = 0.0;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad(pQVar5,euler,(MethodInfo *)0x0);
  b.y = fVar1;
  b.x = (float)pQVar5;
  b.z = fVar3;
  b.w = fVar4;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp((Quaternion *)&stack0xffffffc0,*pQVar6,b,percentage,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera(TransitionCamera *this,MVCameraController *camController,ProtectedTransform *targetTransform,MethodInfo *method)

{
  this_01 = this;
  fVar1 = (this->fields).transitionPercentage;
  if (1.0 <= fVar1) {
    return;
  }
  fVar2 = (this->fields).time;
  uStack_3 = CONCAT44(fVar1,(undefined4)uStack_3);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 * (1.0 / fVar2) + uStack_3._4_4_;
  (this->fields).transitionPercentage = fVar1;
  if (1.0 < fVar1) {
    (this->fields).transitionPercentage = 1.0;
  }
  fVar1 = (this->fields).transitionPercentage;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  fVar1 = fVar1 * -2.0 * fVar1 * fVar1 + fVar1 * 3.0 * fVar1;
  percentage = (TransitionCamera *)((1.0 - fVar1) * 0.0 + fVar1);
  if ((this->fields).superSoft == 0) {
    puVar4 = (undefined8 *)func_?(auStack_5,&(this->fields).prevCameraRotation);
    uVar6 = *puVar4;
    uStack_3 = CONCAT44(*(undefined4 *)(puVar4 + 1),(undefined4)uStack_3);
    if ((((camController == (MVCameraController *)0x0) || (pMVar7 = (camController->fields).cameraStack, pMVar7 == (MVCameraController_CameraStack *)0x0)) || (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0);
    eulerFrom.z = uStack_3._4_4_;
    eulerFrom._0_8_ = uVar6;
    pQVar11 = TransitionCamera_RotateTowardsX((Quaternion *)&stack0xffffffbc,this,eulerFrom,*pVVar10,(float)percentage,(MethodInfo *)0x0);
    fVar1 = pQVar11->x;
    fVar2 = pQVar11->y;
    fVar12 = pQVar11->z;
    fVar13 = pQVar11->w;
    pVVar10 = (Vector3 *)func_?();
    VVar14 = *pVVar10;
    pMVar7 = (camController->fields).cameraStack;
    if (((pMVar7 == (MVCameraController_CameraStack *)0x0) || (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0);
    pQVar11 = TransitionCamera_RotateTowardsY((Quaternion *)&stack0xffffffbc,this,VVar14,*pVVar10,(float)percentage,(MethodInfo *)0x0);
    fVar15 = pQVar11->x;
    fVar16 = pQVar11->y;
    fVar17 = pQVar11->z;
    fVar18 = pQVar11->w;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    uVar19 = (this->fields).prevCameraPosition.x;
    uVar20 = (this->fields).prevCameraPosition.y;
    a.y = (float)uVar20;
    a.x = (float)uVar19;
    pMVar7 = (camController->fields).cameraStack;
    uStack_3 = CONCAT44((this->fields).prevCameraPosition.z,(undefined4)uStack_3);
    if (((pMVar7 == (MVCameraController_CameraStack *)0x0) || (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) || (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0)) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    a.z = uStack_3._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp((Vector3 *)&stack0xffffffdc,a,*pVVar10,(float)percentage,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar9,*pVVar10,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    fVar22 = (fVar18 * fVar1 + fVar13 * fVar15 + fVar12 * fVar16) - fVar17 * fVar2;
    fVar23 = (fVar18 * fVar2 + fVar13 * fVar16 + fVar17 * fVar1) - fVar12 * fVar15;
    fVar24 = (fVar18 * fVar12 + fVar13 * fVar17 + fVar2 * fVar15) - fVar16 * fVar1;
    uStack_3 = CONCAT44(fVar13 * fVar18,(undefined4)uStack_3);
    fVar1 = ((fVar13 * fVar18 - fVar1 * fVar15) - fVar2 * fVar16) - fVar12 * fVar17;
    this = percentage;
  }
  else {
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0);
    VVar14 = *pVVar10;
    if ((((camController == (MVCameraController *)0x0) || (pMVar7 = (camController->fields).cameraStack, pMVar7 == (MVCameraController_CameraStack *)0x0)) || (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0);
    pQVar11 = TransitionCamera_RotateTowardsX((Quaternion *)&stack0xffffffbc,this,VVar14,*pVVar10,(float)percentage,(MethodInfo *)0x0);
    fVar1 = pQVar11->x;
    fVar2 = pQVar11->y;
    fVar12 = pQVar11->z;
    puVar25 = &UNK_?;
    targetTransform = (ProtectedTransform *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if ((Transform *)targetTransform == (Transform *)0x0) goto code_?;
    this = (TransitionCamera *)&UNK_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffdc,(Transform *)targetTransform,(MethodInfo *)0x0);
    VVar14 = *pVVar10;
    pMVar7 = (camController->fields).cameraStack;
    if (((pMVar7 == (MVCameraController_CameraStack *)0x0) || (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0);
    pQVar11 = TransitionCamera_RotateTowardsY((Quaternion *)&stack0xffffffbc,this_01,VVar14,*pVVar10,3.2466084e-29,(MethodInfo *)0x0);
    fVar13 = pQVar11->x;
    fVar15 = pQVar11->y;
    fVar16 = pQVar11->z;
    fVar17 = pQVar11->w;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
    pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
    if (pTVar21 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar10->x;
    uStack_3._4_4_ = pVVar10->y;
    fVar22 = pVVar10->z;
    pMVar7 = (camController->fields).cameraStack;
    if (((pMVar7 == (MVCameraController_CameraStack *)0x0) || (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) || (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0)) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    VVar14.z = fVar22;
    VVar14.x = (float)(undefined4)uStack_3;
    VVar14.y = uStack_3._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp((Vector3 *)&stack0xffffffdc,VVar14,*pVVar10,3.2466084e-29,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar9,*pVVar10,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
    fVar22 = (fVar17 * fVar1 + (float)puVar25 * fVar13 + fVar12 * fVar15) - fVar16 * fVar2;
    uStack_3 = CONCAT44(fVar22,(undefined4)uStack_3);
    fVar23 = (fVar17 * fVar2 + (float)puVar25 * fVar15 + fVar16 * fVar1) - fVar12 * fVar13;
    fVar24 = (fVar17 * fVar12 + (float)puVar25 * fVar16 + fVar2 * fVar13) - fVar15 * fVar1;
    fVar1 = (((float)puVar25 * fVar17 - fVar1 * fVar13) - fVar2 * fVar15) - fVar12 * fVar16;
  }
  if (pTVar9 != (Transform *)0x0) {
    value.y = fVar23;
    value.x = fVar22;
    value.z = fVar24;
    value.w = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation(pTVar9,value,(MethodInfo *)0x0);
    pMVar26 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    fVar27 = (float10)(*(code *)(this_01->klass->vtable).get_FieldOfView.method)();
    pMVar7 = (camController->fields).cameraStack;
    uStack_3 = CONCAT44((float)fVar27,(undefined4)uStack_3);
    if ((pMVar7 != (MVCameraController_CameraStack *)0x0) && (pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar7,(MethodInfo *)0x0), pMVar8 != (MVCameraBase *)0x0)) {
      fVar27 = (float10)(*(code *)(pMVar8->klass->vtable).get_FieldOfView.method)();
      if ((float)this < 0.0) {
        this = (TransitionCamera *)0x0;
      }
      else if (1.0 < (float)this) {
        this = (TransitionCamera *)0x3f800000;
      }
      if ((pMVar26 != (MainCameraManager *)0x0) && (this_00 = (pMVar26->fields).mainCamera, this_00 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(this_00,((float)fVar27 - uStack_3._4_4_) * (float)this + uStack_3._4_4_,(MethodInfo *)0x0);
        MVCameraBase::MVCameraBase_UpdateCamera((MVCameraBase *)this_01,camController,targetTransform,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* TransitionCamera() */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera__ctor(TransitionCamera *this,MethodInfo *method)

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

