
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
                (this->fields).superSoft = 0xde;
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
  pQVar4 = (Quaternion *)&stack0xffffffd0;
  euler.y = fVar3;
  euler.x = fVar1;
  euler.z = fVar1;
  fVar5 = fVar1;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad(pQVar4,euler,(MethodInfo *)0x0);
  b.y = fVar1;
  b.x = (float)pQVar4;
  b.z = fVar3;
  b.w = fVar5;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp((Quaternion *)&stack0xffffffc0,*pQVar6,b,percentage,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera(TransitionCamera *this,MVCameraController *camController,ProtectedTransform *targetTransform,MethodInfo *method)

{
  pfVar1 = &(this->fields).transitionPercentage;
  if (1.0 < *pfVar1 || *pfVar1 == 1.0) {
    return;
  }
  fVar2 = (this->fields).transitionPercentage;
  fVar3 = (this->fields).time;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar4 * (1.0 / fVar3) + fVar2;
  (this->fields).transitionPercentage = fVar2;
  if (1.0 < fVar2) {
    (this->fields).transitionPercentage = 1.0;
  }
  if ((this->fields).superSoft == 0) {
    pVVar5 = (Vector3 *)func_?(&stack0xffffffe8,&(this->fields).prevCameraRotation);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    puVar8 = (undefined *)pVVar5->z;
    VVar9 = *pVVar5;
    if ((camController == (MVCameraController *)0x0) || (pTVar10 = (TransitionCamera *)(camController->fields).cameraStack, pTVar10 == (TransitionCamera *)0x0)) goto code_?;
    in_stack_11 = (undefined *)0x0;
    in_stack_12 = (Quaternion *)&UNK_?;
    in_stack_13 = pTVar10;
    pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera((MVCameraController_CameraStack *)pTVar10,(MethodInfo *)0x0);
    if (pMVar14 == (MVCameraBase *)0x0) goto code_?;
    in_stack_15 = (Camera *)0x0;
    in_stack_11 = &UNK_?;
    in_stack_16 = (TransitionCamera *)pMVar14;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    in_stack_18 = (Il2CppMethodPointer)0x0;
    in_stack_15 = (Camera *)&stack0xffffffe8;
    in_stack_16 = (TransitionCamera *)&UNK_?;
    in_stack_19 = (MVCameraBase *)pTVar17;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)in_stack_15,pTVar17,(MethodInfo *)0x0);
    in_stack_20 = (Quaternion *)(this->fields).transitionPercentage;
    in_stack_21 = 0;
    uVar22 = pVVar5->x;
    uVar23 = pVVar5->y;
    in_stack_24 = (undefined1 *)pVVar5->z;
    in_stack_13 = this;
    in_stack_12 = (Quaternion *)&stack0xffffffc8;
    in_stack_25 = (MethodInfo *)&UNK_?;
    in_stack_11 = (undefined *)uVar6;
    in_stack_16 = (TransitionCamera *)uVar7;
    in_stack_15 = (Camera *)puVar8;
    in_stack_19 = (MVCameraBase *)uVar22;
    in_stack_18 = (Il2CppMethodPointer)uVar23;
    pQVar26 = TransitionCamera_RotateTowardsX(in_stack_12,this,VVar9,*pVVar5,(float)in_stack_20,(MethodInfo *)0x0);
    in_stack_21 = 0;
    fVar2 = pQVar26->x;
    fVar3 = pQVar26->y;
    fVar4 = pQVar26->z;
    fVar27 = pQVar26->w;
    in_stack_20 = &(this->fields).prevCameraRotation;
    in_stack_24 = &stack0xffffffe8;
    in_stack_18 = (Il2CppMethodPointer)&UNK_?;
    pVVar5 = (Vector3 *)func_?();
    VVar9 = *pVVar5;
    pMVar28 = (camController->fields).cameraStack;
    if (((pMVar28 == (MVCameraController_CameraStack *)0x0) || (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar28,(MethodInfo *)0x0), pMVar14 == (MVCameraBase *)0x0)) || (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0)) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffe8,pTVar17,(MethodInfo *)0x0);
    pQVar26 = TransitionCamera_RotateTowardsY((Quaternion *)&stack0xffffffd8,this,VVar9,*pVVar5,(this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar29 = pQVar26->x;
    fVar30 = pQVar26->y;
    fVar31 = pQVar26->z;
    fVar32 = pQVar26->w;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    pMVar28 = (camController->fields).cameraStack;
    VVar9 = (this->fields).prevCameraPosition;
    if (((pMVar28 == (MVCameraController_CameraStack *)0x0) || (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar28,(MethodInfo *)0x0), pMVar14 == (MVCameraBase *)0x0)) || (pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0), pTVar33 == (Transform *)0x0)) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe8,pTVar33,(MethodInfo *)0x0);
    in_stack_34 = (this->fields).transitionPercentage;
    in_stack_35 = (undefined *)0x0;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp((Vector3 *)&stack0xffffffe8,VVar9,*pVVar5,in_stack_34,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    in_stack_18 = (Il2CppMethodPointer)0x0;
    puVar36 = (undefined8 *)&stack0x000000d8;
  }
  else {
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffe8,pTVar17,(MethodInfo *)0x0);
    VVar9 = *pVVar5;
    if ((((camController == (MVCameraController *)0x0) || (pMVar28 = (camController->fields).cameraStack, pMVar28 == (MVCameraController_CameraStack *)0x0)) || (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar28,(MethodInfo *)0x0), pMVar14 == (MVCameraBase *)0x0)) || (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0)) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffe8,pTVar17,(MethodInfo *)0x0);
    pQVar26 = TransitionCamera_RotateTowardsX((Quaternion *)&stack0xffffffc8,this,VVar9,*pVVar5,(this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar2 = pQVar26->x;
    fVar3 = pQVar26->y;
    fVar4 = pQVar26->z;
    fVar27 = pQVar26->w;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffe8,pTVar17,(MethodInfo *)0x0);
    VVar9 = *pVVar5;
    pMVar28 = (camController->fields).cameraStack;
    if (((pMVar28 == (MVCameraController_CameraStack *)0x0) || (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar28,(MethodInfo *)0x0), pMVar14 == (MVCameraBase *)0x0)) || (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0)) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffe8,pTVar17,(MethodInfo *)0x0);
    pQVar26 = TransitionCamera_RotateTowardsY((Quaternion *)&stack0xffffffd8,this,VVar9,*pVVar5,(this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar29 = pQVar26->x;
    fVar30 = pQVar26->y;
    fVar31 = pQVar26->z;
    fVar32 = pQVar26->w;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar33 == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe8,pTVar33,(MethodInfo *)0x0);
    VVar9 = *pVVar5;
    pMVar28 = (camController->fields).cameraStack;
    if (((pMVar28 == (MVCameraController_CameraStack *)0x0) || (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(pMVar28,(MethodInfo *)0x0), pMVar14 == (MVCameraBase *)0x0)) || (pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0), pTVar33 == (Transform *)0x0)) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffe8,pTVar33,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp((Vector3 *)&stack0xffffffe8,VVar9,*pVVar5,(this->fields).transitionPercentage,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    in_stack_25 = (MethodInfo *)0x0;
    puVar36 = (undefined8 *)&stack0x000000bc;
  }
  fVar37 = pVVar5->z;
  *puVar36 = *(undefined8 *)pVVar5;
  *(float *)(puVar36 + 1) = fVar37;
  VVar9.y = (float)in_stack_35;
  VVar9.x = in_stack_34;
  VVar9.z = (float)in_stack_38;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar17,VVar9,in_stack_25);
  in_stack_25 = (MethodInfo *)0x0;
  in_stack_38 = this;
  in_stack_35 = &UNK_?;
  pTVar10 = (TransitionCamera *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  puVar39 = (undefined *)((fVar32 * fVar2 + fVar29 * fVar27 + fVar30 * fVar4) - fVar31 * fVar3);
  pMVar40 = (MVCameraBase *)((fVar3 * fVar32 + fVar30 * fVar27 + fVar31 * fVar2) - fVar4 * fVar29);
  puVar8 = (undefined *)((fVar4 * fVar32 + fVar31 * fVar27 + fVar3 * fVar29) - fVar30 * fVar2);
  pMVar14 = (MVCameraBase *)(((fVar32 * fVar27 - fVar2 * fVar29) - fVar3 * fVar30) - fVar31 * fVar4);
  if (pTVar10 != (TransitionCamera *)0x0) {
    in_stack_18 = (Il2CppMethodPointer)0x0;
    in_stack_12 = (Quaternion *)&UNK_?;
    value.y = (float)pMVar40;
    value.x = (float)puVar39;
    value.z = (float)puVar8;
    value.w = (float)pMVar14;
    in_stack_13 = pTVar10;
    in_stack_11 = puVar39;
    in_stack_16 = (TransitionCamera *)pMVar40;
    in_stack_15 = (Camera *)puVar8;
    in_stack_19 = pMVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation((Transform *)pTVar10,value,(MethodInfo *)0x0);
    pMVar41 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    fVar42 = (float10)(*(code *)(this->klass->vtable).get_FieldOfView.method)();
    pMVar14 = (MVCameraBase *)(camController->fields).cameraStack;
    if (pMVar14 != (MVCameraBase *)0x0) {
      in_stack_15 = (Camera *)0x0;
      in_stack_11 = &UNK_?;
      in_stack_16 = (TransitionCamera *)pMVar14;
      pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera((MVCameraController_CameraStack *)pMVar14,(MethodInfo *)0x0);
      if (pMVar14 != (MVCameraBase *)0x0) {
        in_stack_18 = (pMVar14->klass->vtable).UpdateCamera.methodPtr;
        in_stack_15 = (Camera *)&UNK_?;
        in_stack_19 = pMVar14;
        fVar43 = (float10)(*(code *)(pMVar14->klass->vtable).get_FieldOfView.method)();
        fVar2 = (this->fields).transitionPercentage;
        if (fVar2 < 0.0) {
          fVar2 = 0.0;
        }
        else if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        if ((pMVar41 != (MainCameraManager *)0x0) && (this_00 = (pMVar41->fields).mainCamera, this_00 != (Camera *)0x0)) {
          in_stack_18 = (Il2CppMethodPointer)0x0;
          in_stack_19 = (MVCameraBase *)(((float)fVar43 - (float)fVar42) * fVar2 + (float)fVar42);
          in_stack_16 = (TransitionCamera *)&UNK_?;
          in_stack_15 = this_00;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(this_00,(float)in_stack_19,(MethodInfo *)0x0);
          in_stack_18 = (Il2CppMethodPointer)0x0;
          in_stack_19 = (MVCameraBase *)targetTransform;
          in_stack_15 = (Camera *)camController;
          in_stack_16 = this;
          in_stack_11 = &UNK_?;
          MVCameraBase::MVCameraBase_UpdateCamera((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  in_stack_18 = (Il2CppMethodPointer)&UNK_?;
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
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

