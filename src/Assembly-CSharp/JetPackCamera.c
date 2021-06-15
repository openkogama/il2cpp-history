
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_Enter
               (JetPackCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarLocal;
  if (this_00 != (MVBuildModeAvatarLocal *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)this_01,(MethodInfo *)0x0);
      (this->fields).lookAtTransform = pTVar1;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        VStack_2.y = (float)TypeInfo__UnityEngine__Vector3;
        VStack_2.x = (float)&UNK_?;
        func_?();
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          (&VStack_4,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          (&VStack_4,2.0,*pVVar3,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      (this->fields).lookAtOffset.x = pVVar3->x;
      (this->fields).lookAtOffset.y = fVar5;
      (this->fields).lookAtOffset.z = fVar6;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pTVar1 = (this->fields).lookAtTransform;
      if (pTVar1 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_4,pTVar1,(MethodInfo *)0x0);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_4,*pVVar3,(this->fields).lookAtOffset,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_02,*pVVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (pMVar7 != (MainCameraManager *)0x0) {
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pMVar7,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_eulerAngles(&VStack_2,pTVar1,(MethodInfo *)0x0);
              uVar8 = pVVar3->x;
              uVar9 = pVVar3->y;
              VStack_4.z = pVVar3->z;
              (this->fields).xAxisTarget = (float)uVar8;
              (this->fields).xAxis = (float)uVar8;
              VStack_4.x = (float)uVar8;
              VStack_4.y = (float)uVar9;
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (pMVar7 != (MainCameraManager *)0x0) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pMVar7,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_eulerAngles(&VStack_2,pTVar1,(MethodInfo *)0x0);
                  uVar10 = pVVar3->x;
                  uVar11 = pVVar3->y;
                  VStack_4.z = pVVar3->z;
                  (this->fields).yAxisTarget = (float)uVar11;
                  (this->fields).yAxis = (float)uVar11;
                  VStack_4.x = (float)uVar10;
                  VStack_4.y = (float)uVar11;
                  pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  (this->fields).mainCamera = pCVar12;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (pMVar7 != (MainCameraManager *)0x0) {
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pMVar7,(MethodInfo *)0x0);
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_eulerAngles(&VStack_2,pTVar1,(MethodInfo *)0x0);
                      uVar13 = pVVar3->x;
                      uVar14 = pVVar3->y;
                      fVar6 = pVVar3->z;
                      VStack_4.y = (float)uVar13;
                      VStack_4.z = (float)uVar14;
                      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                      if (pTVar1 != (Transform *)0x0) {
                        value.y = VStack_4.z;
                        value.x = VStack_4.y;
                        value.z = fVar6;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_eulerAngles(pTVar1,value,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void FocusOnObject(MVWorldObjectClient, Single, Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnObject
               (JetPackCamera *this,MVWorldObjectClient *wo,float transitionTime,
               Vector3 avatarOffset,Vector3 cameraOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    fVar1 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(wo,(MethodInfo *)0x0);
    fStack_2 = fVar1;
    arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_r_,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    this_00 = (this->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      uVar3._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                              (this_00,(MethodInfo *)0x0);
      uVar3._0_4_ = (float)uVar3 * _UNK_? * _UNK_?;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      dVar4 = (double)((float)uVar3 * _UNK_?);
      func_?();
      pVVar5 = (Vector3 *)
               (*(code *)(wo->klass->vtable).get_WorldPivot.method)
                         (&stack0xffffffd0,wo,(wo->klass->vtable).get_InteractionFlags.methodPtr);
      a = *pVVar5;
      VVar6 = *pVVar5;
      this_01 = (this->fields).avatarLocal;
      if (this_01 != (MVBuildModeAvatarLocal *)0x0) {
        this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)this_01,(MethodInfo *)0x0);
        if (this_02 != (CelestialParam *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)this_02,(MethodInfo *)0x0);
          if (this_03 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd0,this_03,(MethodInfo *)0x0);
            uVar3._0_4_ = (this->fields).lookAtOffset.x;
            fStack_7 = (this->fields).lookAtOffset.y;
            VVar8 = *pVVar5;
            fVar9 = (this->fields).lookAtOffset.z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            b.z = fVar9;
            b.x = (float)uVar3;
            b.y = SUB84(uVar3,4);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffd0,VVar8,b,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&stack0xffffffd0,VVar6,*pVVar5,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd0,this_03,(MethodInfo *)0x0);
            VVar8 = *pVVar5;
            puVar10 = (undefined8 *)func_?();
            uVar3 = *puVar10;
            fVar9 = *(float *)(puVar10 + 1);
            fVar11 = (float10)func_?();
            VVar6.z = fVar9;
            VVar6.x = (float)uVar3;
            VVar6.y = fStack_7;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xffffffb8,VVar6,
                                (float)fVar11 - fVar1 / (float)dVar4,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffb8,*pVVar5,avatarOffset,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffb8,VVar8,*pVVar5,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_03,*pVVar5,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffb8,this_03,(MethodInfo *)0x0);
            JetPackCamera_SetToPosition(this,*pVVar5,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffb8,a,cameraOffset,(MethodInfo *)0x0);
            JetPackCamera_LookAt(this,*pVVar5,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_04 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_StartTransitionCam
                        (this_04,transitionTime,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void FocusOnPointFromAvatarPosition(Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
               (JetPackCamera *this,Vector3 focusPoint,Vector3 avatarPosition,MethodInfo *method)

{
  this_00 = this;
  pPVar1 = (PrefabPool *)(this->fields).avatarLocal;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    puStack_3 = (undefined *)(this->fields).lookAtOffset.x;
    unique0x0000a404 = (this->fields).lookAtOffset.y;
    fVar4 = (this->fields).lookAtOffset.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    VVar5.z = fVar4;
    VVar5.x = (float)puStack_3;
    VVar5.y = stack0xfffffff8;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xfffffff0,avatarPosition,VVar5,(MethodInfo *)0x0);
    if (pMVar2 != (MVPointLightObject *)0x0) {
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      this = (JetPackCamera *)pVVar6->z;
      fVar9 = (float)uVar8;
      stack0xfffffff8 = (float)pMVar2;
      VVar5.x = (float)uVar7;
      VVar5 = (Vector3)CONCAT84(uVar10,VVar5.x);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                ((Transform *)pMVar2,VVar5,(MethodInfo *)0x0);
      pPVar1 = (PrefabPool *)(this_00->fields).avatarLocal;
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVPointLightObject *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,(Transform *)pMVar2,(MethodInfo *)0x0);
          JetPackCamera_SetToPosition(this_00,*pVVar6,(MethodInfo *)0x0);
          auVar11._8_4_ = 0;
          auVar11._0_8_ = focusPoint._4_8_;
          JetPackCamera_LookAt(this_00,(Vector3)(auVar11 << 0x20),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void FocusOnPosition(Vector3, Single) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnPosition
               (JetPackCamera *this,Vector3 lookAtPosition,float transitionTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarLocal;
  if (this_00 != (MVBuildModeAvatarLocal *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
        JetPackCamera_SetToPosition(this,*pVVar1,(MethodInfo *)0x0);
        JetPackCamera_LookAt(this,lookAtPosition,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_03 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_StartTransitionCam
                    (this_03,lookAtPosition.z,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetLookAtAvatarPosition(Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackCamera::JetPackCamera_GetLookAtAvatarPosition
                    (Vector3 *__return_storage_ptr__,JetPackCamera *this,Vector3 position,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  b = (this->fields).lookAtOffset;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = position.z;
  a.x = position.x;
  a.y = position.y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&position,a,b,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Void HandleInput(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_HandleInput
               (JetPackCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if ((bVar1 != 0) && (((this->fields)._.ignoreInputTypes & 1) == 0)) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
    MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    puVar2 = &stack0xffffffe8;
    fVar3 = _UNK_? * 0.0;
    func_?();
    this_00 = (this->fields).mainCamera;
    if (this_00 == (Camera *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
              (this_00,(MethodInfo *)0x0);
    puVar5 = &UNK_?;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fVar7 = _UNK_?;
    (this->fields).yAxisTarget =
         (float)puVar2 * ((float)puVar5 / (float)iVar6) + (this->fields).yAxisTarget;
    fVar8 = _UNK_?;
    fVar3 = (float)((uint)fVar3 ^ _UNK_?) * ((float)puVar5 / (float)iVar6) +
            (this->fields).xAxisTarget;
    (this->fields).xAxisTarget = fVar3;
    for (; fVar3 < fVar7; fVar3 = fVar3 + fVar8) {
    }
    for (; _UNK_? < fVar3; fVar3 = fVar3 - fVar8) {
    }
    iVar6 = (this->fields).xMaxLimit;
    (this->fields).xAxisTarget = fVar3;
    iVar9 = (this->fields).xMinLimit;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar3 = (float)iVar9;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                      (fVar3,fVar3,(float)iVar6,(MethodInfo *)0x0);
    (this->fields).rotationSmoothTime = 0.1;
    (this->fields).xAxisTarget = fVar3;
  }
  return;
}


/* Void LookAt(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_LookAt
               (JetPackCamera *this,Vector3 position,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
              (pTVar1,position,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
      for (fVar3 = pVVar2->x; fVar3 < _UNK_?; fVar3 = fVar3 + _UNK_?) {
      }
      for (; _UNK_? < fVar3; fVar3 = fVar3 - _UNK_?) {
      }
      (this->fields).xAxisTarget = fVar3;
      (this->fields).xAxis = fVar3;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
        uVar4 = pVVar2->y;
        (this->fields).yAxisTarget = (float)uVar4;
        (this->fields).yAxis = (float)uVar4;
        (this->fields).yAxisVelocity = 0.0;
        (this->fields).xAxisVelocity = 0.0;
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single NormalizeAngle(Single) */

float Assembly-CSharp.dll::JetPackCamera::JetPackCamera_NormalizeAngle
                (float angle,MethodInfo *method)

{
  for (; angle < _UNK_?; angle = angle + _UNK_?) {
  }
  for (; _UNK_? < angle; angle = angle - _UNK_?) {
  }
  return angle;
}


/* Void Reset() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_Reset(JetPackCamera *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    this_01 = (this->fields).avatarLocal;
    if (this_01 != (MVBuildModeAvatarLocal *)0x0) {
      this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      if (this_02 != (CelestialParam *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)this_02,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = (Vector3 *)&stack0xffffffd8;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                             (pVVar2,pTVar1,(MethodInfo *)0x0);
          this_00 = pVVar4->y;
          (this->fields).yAxisTarget = (float)this_00;
          (this->fields).yAxis = (float)this_00;
          (this->fields).xAxisTarget = (float)pVVar2;
          (this->fields).xAxis = (float)pVVar2;
          uVar5 = CONCAT44(this_00,&UNK_?);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            value.z = fVar3;
            value.x = (float)(int)uVar5;
            value.y = (float)(int)((ulonglong)uVar5 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                      (pTVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetDistanceAndDirectionToAvatar(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
               (JetPackCamera *this,Vector3 lookAtPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (TypeInfo__JetPackCamera->static_fields->__f__am_cache0 ==
      (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__JetPackCamera___ResetDistanceAndDirectionToAvatar_m__0_MVWorldObjectClient_
               ,MethodInfo__System__Func<MVWorldObjectClient,_bool>__Func_System__Object__void__);
    TypeInfo__JetPackCamera->static_fields->__f__am_cache0 =
         (Func_2_MVWorldObjectClient_Boolean_ *)this_01;
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                       (this_00,TypeInfo__JetPackCamera->static_fields->__f__am_cache0,
                        (MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVSpawnPointBlue__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__MVSpawnPointBlue)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pMVar4 = (MVWorldObjectClient *)0x0;
      if (bVar3) {
        pMVar4 = pMVar1;
      }
      if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
      pVVar5 = (Vector3 *)
               (*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)
                         (&stack0xffffffe0,pMVar4);
      VVar6 = *pVVar5;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffe0,VVar6,lookAtPosition,(MethodInfo *)0x0);
      fVar7 = (float10)func_?(&stack0xffffffc8);
      pMVar8 = (this->fields).avatarLocal;
      if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
        pVVar5 = (Vector3 *)
                 (*(code *)(pMVar8->klass->vtable).get_WorldPosition_1.method)
                           (&stack0xffffffe0,pMVar8,
                            (pMVar8->klass->vtable).set_WorldPosition.methodPtr);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffffe0,*pVVar5,lookAtPosition,(MethodInfo *)0x0);
        uVar9 = pVVar5->x;
        fVar10 = pVVar5->z;
        uVar11 = 0;
        fVar12 = (float10)func_?(&stack0xffffffd4,0);
        func_?(&stack0xffffffd4,0);
        pMVar8 = (this->fields).avatarLocal;
        if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
          pVVar5 = (Vector3 *)
                   (*(code *)(pMVar8->klass->vtable).get_WorldPosition_1.method)
                             (&stack0xffffffbc,pMVar8,
                              (pMVar8->klass->vtable).set_WorldPosition.methodPtr);
          a = *pVVar5;
          VVar6.y = (float)uVar11;
          VVar6.x = (float)uVar9;
          VVar6.z = fVar10;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffbc,VVar6,(float)fVar7 - (float)fVar12,
                              (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                    ((Vector3 *)&stack0xffffffbc,a,*pVVar5,(MethodInfo *)0x0);
          (*(code *)(pMVar8->klass->vtable).set_WorldPosition.method)();
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pMVar8 = (this->fields).avatarLocal;
          if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
            this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                ((DayNightCycle *)pMVar8,(MethodInfo *)0x0);
            if (this_02 != (CelestialParam *)0x0) {
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform((GameObject *)this_02,(MethodInfo *)0x0);
              if (this_03 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffbc,this_03,(MethodInfo *)0x0);
                JetPackCamera_SetToPosition(this,*pVVar5,(MethodInfo *)0x0);
                JetPackCamera_LookAt(this,lookAtPosition,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_04 != (MainCameraManager *)0x0) {
                  MainCameraManager::MainCameraManager_StartTransitionCam
                            (this_04,2.0,1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ResetRotationToTargetTransform() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_ResetRotationToTargetTransform
               (JetPackCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
      uVar3._0_4_ = pVVar2->x;
      uVar3._4_4_ = pVVar2->y;
      fVar4 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        value.z = fVar4;
        value.x = (float)(int)uVar3;
        value.y = (float)(int)((ulonglong)uVar3 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                  (pTVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetToPosition(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_SetToPosition
               (JetPackCamera *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  b = (this->fields).lookAtOffset;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = position.y;
  a.x = position.x;
  a.z = position.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&position,a,b,(MethodInfo *)0x0);
  position.z = 0.0;
  if (this_00 != (Transform *)0x0) {
    uVar2 = pVVar1->y;
    position.y = pVVar1->z;
    position.x = (float)uVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar1,(MethodInfo *)0x0);
    return;
  }
  position.y = (float)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_UpdateCamera
               (JetPackCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JetPackCamera_HandleInput(this,camController,(MethodInfo *)0x0);
  fVar1 = (this->fields).xAxis;
  fVar2 = (this->fields).xAxisTarget;
  smoothTime = (this->fields).rotationSmoothTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothDampAngle
                    (fVar1,fVar2,&(this->fields).xAxisVelocity,smoothTime,(MethodInfo *)0x0);
  (this->fields).xAxis = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothDampAngle
                    ((this->fields).yAxis,(this->fields).yAxisTarget,&(this->fields).yAxisVelocity,
                     (this->fields).rotationSmoothTime,(MethodInfo *)0x0);
  (this->fields).yAxis = fVar1;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  fVar1 = (this->fields).xAxis;
  camController_00 = (MVCameraController *)(this->fields).yAxis;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffffe0,fVar1,(float)camController_00,0.0,
                      (MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar3,*pQVar4,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar3 = (this->fields).lookAtTransform;
    if (pTVar3 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar6._0_4_ = (this->fields).lookAtOffset.x;
      uVar6._4_4_ = (this->fields).lookAtOffset.y;
      uVar7 = pVVar5->x;
      uVar8 = pVVar5->y;
      a.y = (float)uVar8;
      a.x = (float)uVar7;
      fVar1 = pVVar5->z;
      fVar2 = (this->fields).lookAtOffset.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar1;
      b.z = fVar2;
      b.x = (float)uVar6;
      b.y = SUB84(uVar6,4);
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe4,a,b,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_00,*pVVar5,(MethodInfo *)0x0);
        MVCameraBase::MVCameraBase_UpdateCamera
                  ((MVCameraBase *)this,camController_00,(ProtectedTransform *)&UNK_?,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean <ResetDistanceAndDirectionToAvatar>m__0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::JetPackCamera::JetPackCamera__ResetDistanceAndDirectionToAvatar_m__0
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVSpawnPointBlue__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVSpawnPointBlue)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* JetPackCamera() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera__ctor(JetPackCamera *this,MethodInfo *method)

{
  (this->fields).sensitivityX = 15.0;
  (this->fields).sensitivityY = 15.0;
  (this->fields).aroundXInertia = 0.5;
  (this->fields).aroundYInertiaMouseControlled = 0.5;
  (this->fields).aroundYInertiaAvatarControlled = 1.0;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  (this->fields).scrollSpeed = 0.5;
  (this->fields).xMinLimit = -0x57;
  (this->fields).xMaxLimit = 0x57;
  (this->fields).rotationSmoothTime = 0.1;
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

