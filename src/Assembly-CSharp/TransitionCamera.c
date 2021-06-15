
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pMVar1,(MethodInfo *)0x0);
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
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar1,(MethodInfo *)0x0);
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
          if (pMVar1 != (MainCameraManager *)0x0) {
            fVar5 = MainCameraManager::MainCameraManager_get_FieldOfView(pMVar1,(MethodInfo *)0x0);
            (this->fields).fieldOfView = fVar5;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,(this->fields).prevCameraPosition,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar2,(this->fields).prevCameraRotation,(MethodInfo *)0x0);
                (this->fields).time = transitionTime;
                (this->fields).superSoft = 0xee;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = eulerTo.x;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pQVar1->x;
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  euler_00.y = 0.0;
  euler_00.z = 0.0;
  euler_00.x = eulerFrom.x;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffdc,euler_00,method_00);
  b.y = fVar2;
  b.x = (float)method_00;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  auVar1._4_8_ = 0;
  auVar1._0_4_ = eulerTo.y;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffec,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pQVar2->x;
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  auVar6._4_8_ = 0;
  auVar6._0_4_ = eulerFrom.y;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffdc,(Vector3)(auVar6 << 0x20),method_00);
  b.y = fVar3;
  b.x = (float)method_00;
  b.z = fVar4;
  b.w = fVar5;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffdc,*pQVar2,b,percentage,(MethodInfo *)0x0);
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TransitionCamera::TransitionCamera_UpdateCamera
               (TransitionCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)(this->fields).transitionPercentage;
  if (_UNK_? <= (float)puStack_1) {
    return;
  }
  fVar2 = (this->fields).time;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = _UNK_?;
  fVar2 = fVar3 * (_UNK_? / fVar2) + (float)puStack_1;
  (this->fields).transitionPercentage = fVar2;
  if (fVar4 < fVar2) {
    (this->fields).transitionPercentage = 1.0;
  }
  if ((this->fields).superSoft == 0) {
    puVar5 = (undefined8 *)func_?(&VStack_6,&(this->fields).prevCameraRotation);
    uStack_7 = *puVar5;
    fVar2 = *(float *)(puVar5 + 1);
    if (((camController == (MVCameraController *)0x0) ||
        (pMVar8 = MVCameraController::MVCameraController_get_CurCamera
                            (camController,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_6,pTVar9,(MethodInfo *)0x0);
    eulerFrom_01.z = fVar2;
    eulerFrom_01.x = (float)(undefined4)uStack_7;
    eulerFrom_01.y = uStack_7._4_4_;
    pQVar11 = TransitionCamera_RotateTowardsX
                       ((Quaternion *)&stack0xffffffb0,this,eulerFrom_01,*pVVar10,
                        (this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar2 = pQVar11->x;
    fVar4 = pQVar11->y;
    fVar3 = pQVar11->z;
    fVar12 = pQVar11->w;
    puVar5 = (undefined8 *)func_?();
    uStack_7 = *puVar5;
    fVar13 = *(float *)(puVar5 + 1);
    pMVar8 = MVCameraController::MVCameraController_get_CurCamera(camController,(MethodInfo *)0x0);
    if ((pMVar8 == (MVCameraBase *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_6,pTVar9,(MethodInfo *)0x0);
    eulerFrom_00.z = fVar13;
    eulerFrom_00.x = (float)(undefined4)uStack_7;
    eulerFrom_00.y = uStack_7._4_4_;
    pQVar11 = TransitionCamera_RotateTowardsY
                       ((Quaternion *)&stack0xffffffb0,this,eulerFrom_00,*pVVar10,
                        (this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar13 = pQVar11->x;
    fVar14 = pQVar11->y;
    fVar15 = pQVar11->z;
    fVar16 = pQVar11->w;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    VStack_6.y = (this->fields).prevCameraPosition.x;
    VStack_6.z = (this->fields).prevCameraPosition.y;
    uStack_7 = CONCAT44((this->fields).prevCameraPosition.z,(undefined4)uStack_7);
    pMVar8 = MVCameraController::MVCameraController_get_CurCamera(camController,(MethodInfo *)0x0);
    if ((pMVar8 == (MVCameraBase *)0x0) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0))
    goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd0,pTVar17,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields).transitionPercentage;
    uStack_18._0_4_ = pVVar10->x;
    uStack_18._4_4_ = pVVar10->y;
    puStack_1 = (undefined *)pVVar10->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_00.z = uStack_7._4_4_;
    a_00.x = VStack_6.y;
    a_00.y = VStack_6.z;
    b_00.z = (float)puStack_1;
    b_00.x = (float)(undefined4)uStack_18;
    b_00.y = (float)uStack_18._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp
                       ((Vector3 *)&stack0xffffffd0,a_00,b_00,(float)method_00,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar9,*pVVar10,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
  }
  else {
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
    VStack_6.y = pVVar10->x;
    VStack_6.z = pVVar10->y;
    fVar2 = pVVar10->z;
    if (((camController == (MVCameraController *)0x0) ||
        (pMVar8 = MVCameraController::MVCameraController_get_CurCamera
                            (camController,(MethodInfo *)0x0), pMVar8 == (MVCameraBase *)0x0)) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
    eulerFrom_02.z = fVar2;
    eulerFrom_02.x = VStack_6.y;
    eulerFrom_02.y = VStack_6.z;
    pQVar11 = TransitionCamera_RotateTowardsX
                       ((Quaternion *)&stack0xffffffb0,this,eulerFrom_02,*pVVar10,
                        (this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar2 = pQVar11->x;
    fVar4 = pQVar11->y;
    fVar3 = pQVar11->z;
    fVar12 = pQVar11->w;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
    VStack_6.y = pVVar10->x;
    VStack_6.z = pVVar10->y;
    fVar13 = pVVar10->z;
    pMVar8 = MVCameraController::MVCameraController_get_CurCamera(camController,(MethodInfo *)0x0);
    if ((pMVar8 == (MVCameraBase *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
    targetTransform = (ProtectedTransform *)this;
    eulerFrom.z = fVar13;
    eulerFrom.x = VStack_6.y;
    eulerFrom.y = VStack_6.z;
    pQVar11 = TransitionCamera_RotateTowardsY
                       ((Quaternion *)&stack0xffffffc0,this,eulerFrom,*pVVar10,
                        (this->fields).transitionPercentage,(MethodInfo *)0x0);
    fVar13 = pQVar11->x;
    fVar14 = pQVar11->y;
    fVar15 = pQVar11->z;
    fVar16 = pQVar11->w;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd0,pTVar17,(MethodInfo *)0x0);
    uStack_18._0_4_ = pVVar10->x;
    uStack_18._4_4_ = pVVar10->y;
    puStack_1 = (undefined *)pVVar10->z;
    pMVar8 = MVCameraController::MVCameraController_get_CurCamera(camController,(MethodInfo *)0x0);
    if ((pMVar8 == (MVCameraBase *)0x0) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0))
    goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd0,pTVar17,(MethodInfo *)0x0);
    t = (this->fields).transitionPercentage;
    VStack_6.y = pVVar10->x;
    VStack_6.z = pVVar10->y;
    uStack_7 = CONCAT44(pVVar10->z,(undefined4)uStack_7);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = (float)puStack_1;
    a.x = (float)(undefined4)uStack_18;
    a.y = (float)uStack_18._4_4_;
    b.z = uStack_7._4_4_;
    b.x = VStack_6.y;
    b.y = VStack_6.z;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Slerp
                       ((Vector3 *)&stack0xffffffd0,a,b,t,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar9,*pVVar10,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    method_00 = (MethodInfo *)0x0;
  }
  lhs.y = fVar14;
  lhs.x = fVar13;
  lhs.z = fVar15;
  lhs.w = fVar16;
  rhs.y = fVar4;
  rhs.x = fVar2;
  rhs.z = fVar3;
  rhs.w = fVar12;
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     ((Quaternion *)&stack0xffffffb0,lhs,rhs,method_00);
  if (pTVar9 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar9,*pQVar11,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    fVar19 = (float10)(*(code *)(this->klass->vtable).get_FieldOfView.method)();
    puStack_1 = (undefined *)(float)fVar19;
    pMVar8 = MVCameraController::MVCameraController_get_CurCamera(camController,(MethodInfo *)0x0);
    if (pMVar8 != (MVCameraBase *)0x0) {
      fVar19 = (float10)(*(code *)(pMVar8->klass->vtable).get_FieldOfView.method)();
      fVar2 = (this->fields).transitionPercentage;
      uStack_7 = CONCAT44((float)fVar19,(undefined4)uStack_7);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         ((float)puStack_1,uStack_7._4_4_,fVar2,(MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_FieldOfView(this_00,fVar2,(MethodInfo *)0x0);
        MVCameraBase::MVCameraBase_UpdateCamera
                  ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

