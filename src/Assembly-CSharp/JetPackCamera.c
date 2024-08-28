
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_Enter
               (JetPackCamera *this,MVCameraController *camController,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    ppTVar3 = &(this->fields).lookAtTransform;
    *ppTVar3 = pTVar2;
    func_?(ppTVar3,pTVar2);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5 = (pVVar4->upVector).x;
    uVar6 = (pVVar4->upVector).y;
    fStack_7 = (pVVar4->upVector).z;
    VStack_8.z = fStack_7 * _UNK_?;
    fVar9 = (float)uVar6 * _UNK_?;
    (this->fields).lookAtOffset.x = (float)uVar5 * _UNK_?;
    (this->fields).lookAtOffset.y = fVar9;
    (this->fields).lookAtOffset.z = VStack_8.z;
    fStack_10 = (float)uVar5;
    fStack_11 = (float)uVar6;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (*ppTVar3 != (Transform *)0x0) {
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_8,*ppTVar3,(MethodInfo *)0x0);
      uStack_13._0_4_ = pVVar12->x;
      uStack_13._4_4_ = pVVar12->y;
      fStack_14 = pVVar12->z;
      uVar15 = (this->fields).lookAtOffset.x;
      uVar16 = (this->fields).lookAtOffset.y;
      VStack_8.x = (float)uVar15 + (float)(undefined4)uStack_13;
      fStack_7 = (this->fields).lookAtOffset.z;
      VStack_8.y = (float)uVar16 + (float)uStack_13._4_4_;
      VStack_8.z = fStack_7 + fStack_14;
      fStack_10 = (float)uVar15;
      fStack_11 = (float)uVar16;
      if (pTVar2 != (Transform *)0x0) {
        value.y = VStack_8.y;
        value.x = VStack_8.x;
        value.z = VStack_8.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar2,value,(MethodInfo *)0x0);
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar17 != (MainCameraManager *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar17,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                                (&VStack_8,pTVar2,(MethodInfo *)0x0);
            fVar9 = pVVar12->x;
            (this->fields).xAxisTarget = fVar9;
            (this->fields).xAxis = fVar9;
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar17 != (MainCameraManager *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar17,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_eulerAngles(&VStack_8,pTVar2,(MethodInfo *)0x0);
                fVar9 = pVVar12->y;
                (this->fields).yAxisTarget = fVar9;
                (this->fields).yAxis = fVar9;
                pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                ppCVar19 = &(this->fields).mainCamera;
                *ppCVar19 = pCVar18;
                func_?(ppCVar19,pCVar18);
                pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (pMVar17 != (MainCameraManager *)0x0) {
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pMVar17,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_eulerAngles(&VStack_8,pTVar2,(MethodInfo *)0x0);
                    uVar20 = pVVar12->x;
                    uVar21 = pVVar12->y;
                    fVar9 = pVVar12->z;
                    fStack_11 = (float)uVar20;
                    fStack_7 = (float)uVar21;
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      value_00.y = fStack_7;
                      value_00.x = fStack_11;
                      value_00.z = fVar9;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                                (pTVar2,value_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void FocusOnObject(MVWorldObjectClient, Single, Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnObject
               (JetPackCamera *this,MVWorldObjectClient *wo,float transitionTime,
               Vector3 avatarOffset,Vector3 cameraOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_r_);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    SStack_1.m_value =
         MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(wo,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::Single::Single_ToString(&SStack_1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_r_,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      VStack_3.x = (float)TypeInfo__UnityEngine__Debug;
      SStack_1.m_value = (float)&UNK_?;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      VStack_3.x = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                              (this_00,(MethodInfo *)0x0);
      dVar4 = (double)(VStack_3.x * _UNK_? * _UNK_? * _UNK_?);
      func_?();
      fStack_5 = SStack_1.m_value / (float)dVar4;
      puVar6 = (undefined8 *)
               (*(code *)(wo->klass->vtable).get_WorldPivot.method)
                         (auStack_7,wo,(wo->klass->vtable).get_InteractionFlags.methodPtr);
      VStack_3.z = *(float *)(puVar6 + 1);
      pMVar8 = (this->fields).avatarLocal;
      VStack_3.x = (float)*puVar6;
      VStack_3.y = (float)((ulonglong)*puVar6 >> 0x20);
      if ((pMVar8 != (MVBuildModeAvatarLocal *)0x0) &&
         (this_01 = (pMVar8->fields)._._._.gameObject, this_01 != (GameObject *)0x0)) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)(auStack_11 + 4),pTVar9,(MethodInfo *)0x0);
          auStack_11._0_4_ = pVVar10->x;
          auStack_11._4_4_ = pVVar10->y;
          uStack_12._0_4_ = (this->fields).lookAtOffset.x;
          uStack_12._4_4_ = (this->fields).lookAtOffset.y;
          fStack_13 = (this->fields).lookAtOffset.z;
          VStack_3.y = fStack_14 - ((float)(undefined4)uStack_12 + auStack_11._0_4_);
          VStack_3.z = fStack_15 - ((float)uStack_12._4_4_ + auStack_11._4_4_);
          fStack_5 = fStack_16 - (fStack_13 + pVVar10->z);
          uStack_17 = CONCAT44(VStack_3.z,VStack_3.y);
          fStack_18 = fStack_5;
          fStack_19 = fStack_5;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)auStack_11,pTVar9,(MethodInfo *)0x0);
          auStack_11._0_4_ = pVVar10->x;
          auStack_11._4_4_ = pVVar10->y;
          fStack_18 = pVVar10->z;
          puVar6 = (undefined8 *)func_?(&stack0x00000000,auStack_20,0);
          uVar21 = *puVar6;
          fVar22 = *(float *)(puVar6 + 1);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          dVar4 = (double)(fStack_23 * fStack_23 + in_stack_24 * in_stack_24 +
                           in_stack_25 * in_stack_25);
          if (dVar4 < 0.0) {
            func_?();
          }
          else {
            dVar4 = SQRT(dVar4);
          }
          fStack_26 = (float)((ulonglong)uVar21 >> 0x20);
          in_stack_27 = (float)dVar4 - in_stack_27;
          value.y = in_stack_28 + avatarOffset.y + fStack_26 * in_stack_27;
          value.x = in_stack_29 + avatarOffset.x + (float)uVar21 * in_stack_27;
          value.z = in_stack_30 + avatarOffset.z + fVar22 * in_stack_27;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar9,value,(MethodInfo *)0x0);
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_3,pTVar9,(MethodInfo *)0x0);
          fVar22 = pVVar10->z;
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          uVar31 = (this->fields).lookAtOffset.x;
          uVar32 = (this->fields).lookAtOffset.y;
          fVar33 = (this->fields).lookAtOffset.z;
          VStack_3.y = fVar22 + (float)uVar31;
          VStack_3.z = fStack_34 + (float)uVar32;
          fStack_5 = SStack_1.m_value + fVar33;
          if (pTVar9 != (Transform *)0x0) {
            value_00.y = VStack_3.z;
            value_00.x = VStack_3.y;
            value_00.z = fStack_5;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar9,value_00,(MethodInfo *)0x0);
            uStack_12 = CONCAT44(uStack_12._4_4_,cameraOffset.z + fStack_34);
            position.y = cameraOffset.y + fVar22;
            position.x = cameraOffset.x + fVar33;
            position.z = cameraOffset.z + fStack_34;
            JetPackCamera_LookAt(this,position,(MethodInfo *)0x0);
            this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_02 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_StartTransitionCam
                        (this_02,transitionTime,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void FocusOnPointFromAvatarPosition(Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
               (JetPackCamera *this,Vector3 focusPoint,Vector3 avatarPosition,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
    uVar2 = (this->fields).lookAtOffset.x;
    uVar3 = (this->fields).lookAtOffset.y;
    pTVar4 = (pMVar1->fields)._._._.transform;
    value.y = avatarPosition.y - (float)uVar3;
    value.x = avatarPosition.x - (float)uVar2;
    if (pTVar4 != (Transform *)0x0) {
      value.z = avatarPosition.z - (this->fields).lookAtOffset.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,value,(MethodInfo *)0x0);
      pMVar1 = (this->fields).avatarLocal;
      if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
         (pTVar4 = (pMVar1->fields)._._._.transform, pTVar4 != (Transform *)0x0)) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
        uVar7._0_4_ = pVVar5->x;
        uVar7._4_4_ = pVVar5->y;
        fVar8 = pVVar5->z;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)(undefined4)uVar7);
        uVar9 = (this->fields).lookAtOffset.x;
        uVar10 = (this->fields).lookAtOffset.y;
        puStack_6 = (undefined *)((float)uVar7 + (float)uVar9);
        if (pTVar4 != (Transform *)0x0) {
          value_00.y = (float)((ulonglong)uVar7 >> 0x20) + (float)uVar10;
          value_00.x = (float)puStack_6;
          value_00.z = fVar8 + (this->fields).lookAtOffset.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar4,value_00,(MethodInfo *)0x0);
          JetPackCamera_LookAt(this,focusPoint,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void FocusOnPosition(Vector3, Single) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnPosition
               (JetPackCamera *this,Vector3 lookAtPosition,float transitionTime,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->x;
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      uVar7 = (this->fields).lookAtOffset.x;
      uVar8 = (this->fields).lookAtOffset.y;
      if (pTVar2 != (Transform *)0x0) {
        value.y = fVar5 + (float)uVar8;
        value.x = fVar4 + (float)uVar7;
        value.z = (this->fields).lookAtOffset.z + fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar2,value,(MethodInfo *)0x0);
        JetPackCamera_LookAt(this,lookAtPosition,(MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_01 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_StartTransitionCam
                    (this_01,transitionTime,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetLookAtAvatarPosition(Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackCamera::JetPackCamera_GetLookAtAvatarPosition
                    (Vector3 *__return_storage_ptr__,JetPackCamera *this,Vector3 position,
                    MethodInfo *method)

{
  uVar1 = (this->fields).lookAtOffset.x;
  uVar2 = (this->fields).lookAtOffset.y;
  fVar3 = (this->fields).lookAtOffset.z;
  __return_storage_ptr__->x = position.x - (float)uVar1;
  __return_storage_ptr__->y = position.y - (float)uVar2;
  __return_storage_ptr__->z = position.z - fVar3;
  return __return_storage_ptr__;
}


/* Void HandleInput(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_HandleInput
               (JetPackCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if ((bVar1 != 0) && (((this->fields)._.ignoreInputTypes & 1) == 0)) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar2 = fVar2 * _UNK_?;
    fVar3 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar3 = fVar3 * _UNK_?;
    this_00 = (this->fields).mainCamera;
    if (this_00 == (Camera *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (this_00,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fVar7 = _UNK_?;
    (this->fields).yAxisTarget = fVar2 * (fVar5 / (float)iVar6) + (this->fields).yAxisTarget;
    for (fVar2 = (float)((uint)fVar3 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 (fVar5 / (float)iVar6) + (this->fields).xAxisTarget; fVar2 < fVar7;
        fVar2 = fVar2 + _UNK_?) {
    }
    for (; _UNK_? < fVar2; fVar2 = fVar2 - _UNK_?) {
    }
    fVar3 = (float)(this->fields).xMinLimit;
    if ((fVar2 < fVar3) || (fVar3 = (float)(this->fields).xMaxLimit, fVar3 < fVar2)) {
      fVar2 = fVar3;
    }
    (this->fields).xAxisTarget = fVar2;
    (this->fields).rotationSmoothTime = 0.1;
  }
  return;
}


/* Void LookAt(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_LookAt
               (JetPackCamera *this,Vector3 position,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    worldPosition.y = position.y;
    worldPosition.x = position.x;
    worldPosition.z = position.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
              (pTVar1,worldPosition,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      position.z = (float)&position;
      position.y = (float)&UNK_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         ((Vector3 *)position.z,pTVar1,(MethodInfo *)0x0);
      for (fVar3 = pVVar2->x; fVar3 < _UNK_?; fVar3 = fVar3 + _UNK_?) {
      }
      for (; _UNK_? < fVar3; fVar3 = fVar3 - _UNK_?) {
      }
      (this->fields).xAxisTarget = fVar3;
      (this->fields).xAxis = fVar3;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           (&position,pTVar1,(MethodInfo *)0x0);
        fVar3 = pVVar2->y;
        (this->fields).yAxisTarget = fVar3;
        (this->fields).yAxis = fVar3;
        (this->fields).yAxisVelocity = 0.0;
        (this->fields).xAxisVelocity = 0.0;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->z;
    pMVar5 = (this->fields).avatarLocal;
    if ((pMVar5 != (MVBuildModeAvatarLocal *)0x0) &&
       (this_00 = (pMVar5->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)pVVar2->y;
        uVar6 = CONCAT44(method_00,this);
        (this->fields).yAxisTarget = (float)method_00;
        (this->fields).yAxis = (float)method_00;
        (this->fields).xAxisTarget = (float)this;
        (this->fields).xAxis = (float)this;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,method_00);
        if (pTVar1 != (Transform *)0x0) {
          fVar7 = (float)uVar6;
          this = (JetPackCamera *)fVar4;
          fVar8 = (float)(int)((ulonglong)uVar6 >> 0x20);
          value = (Vector3)CONCAT84(uVar9,fVar7);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                    (pTVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetDistanceAndDirectionToAvatar(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
               (JetPackCamera *this,Vector3 lookAtPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__JetPackCamera____c);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((TypeInfo__JetPackCamera____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_02 = TypeInfo__JetPackCamera____c->static_fields->__9__35_0;
  if (this_02 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if ((TypeInfo__JetPackCamera____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__JetPackCamera____c->static_fields->__9;
    this_02 = (Func_2_MVWorldObjectClient_Boolean_ *)func_?();
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_02,(Object *)object,
               MethodInfo__JetPackCamera____c___ResetDistanceAndDirectionToAvatar_b__35_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__JetPackCamera____c->static_fields->__9__35_0 = this_02;
    func_?();
  }
  if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                         (this_01,this_02,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClient *)0x0))
  {
    bVar2 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVSpawnPointBlue__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVSpawnPointBlue)) goto code_?;
    puVar3 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)();
    uVar4 = *puVar3;
    fStack_5 = *(float *)(puVar3 + 1);
    auStack_6._8_4_ = (undefined4)uVar4;
    fStack_7 = (float)((ulonglong)uVar4 >> 0x20);
    fVar8 = fStack_7 - lookAtPosition.y;
    auStack_6._4_4_ = fStack_5 - lookAtPosition.z;
    auStack_6._0_4_ = (float)auStack_6._8_4_ - lookAtPosition.x;
    unique0x1000063c = uVar4;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (fVar8 * fVar8 + (float)auStack_6._0_4_ * (float)auStack_6._0_4_ +
        (float)auStack_6._4_4_ * (float)auStack_6._4_4_ < 0.0) {
      func_?();
    }
    pMVar9 = (this->fields).avatarLocal;
    if (pMVar9 != (MVBuildModeAvatarLocal *)0x0) {
      puVar3 = (undefined8 *)(*(code *)(pMVar9->klass->vtable).get_WorldPosition_1.method)();
      auStack_6._0_4_ = (undefined4)*puVar3;
      fStack_10 = *(float *)(puVar3 + 1) - lookAtPosition.z;
      stack0xffffffd4 = CONCAT44(fStack_7,fStack_10);
      auStack_6._4_4_ = 0;
      auStack_6._0_4_ = (float)auStack_6._0_4_ - lookAtPosition.x;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar11 = auStack_6._0_4_;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)auStack_6,(MethodInfo *)0x0);
      pMVar9 = (this->fields).avatarLocal;
      if (pMVar9 != (MVBuildModeAvatarLocal *)0x0) {
        puVar3 = (undefined8 *)(*(code *)(pMVar9->klass->vtable).get_WorldPosition_1.method)();
        uStack_12 = *puVar3;
        fStack_13 = *(float *)(puVar3 + 1);
        dVar14 = (double)((float)auStack_6._4_4_ * (float)auStack_6._4_4_ + 0.0 +
                         (float)auStack_6._0_4_ * (float)auStack_6._0_4_);
        if (dVar14 < 0.0) {
          func_?();
        }
        else {
          dVar14 = SQRT(dVar14);
        }
        fStack_15 = fStack_13 + fStack_5 * ((float)uVar11 - (float)dVar14);
        pIVar16 = (pMVar9->klass->vtable).get_WorldRotation_1.methodPtr;
        (*(code *)(pMVar9->klass->vtable).set_WorldPosition.method)(pMVar9);
        pMVar9 = (this->fields).avatarLocal;
        if (((pMVar9 != (MVBuildModeAvatarLocal *)0x0) &&
            (this_00 = (pMVar9->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
           (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_00,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffac,pTVar17,(MethodInfo *)0x0);
          fVar8 = pVVar18->z;
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          uVar19 = (this->fields).lookAtOffset.x;
          uVar20 = (this->fields).lookAtOffset.y;
          if (pTVar17 != (Transform *)0x0) {
            value.y = (float)pIVar16 + (float)uVar20;
            value.x = fVar8 + (float)uVar19;
            value.z = (float)auStack_21 + (this->fields).lookAtOffset.z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar17,value,(MethodInfo *)0x0);
            JetPackCamera_LookAt(this,lookAtPosition,(MethodInfo *)0x0);
            this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_03 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_StartTransitionCam
                        (this_03,2.0,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void ResetRotationToTargetTransform() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_ResetRotationToTargetTransform
               (JetPackCamera *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
      uVar3._0_4_ = pVVar2->x;
      uVar3._4_4_ = pVVar2->y;
      fVar4 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  uVar1 = (this->fields).lookAtOffset.x;
  uVar2 = (this->fields).lookAtOffset.y;
  if (this_00 != (Transform *)0x0) {
    value.y = position.y + (float)uVar2;
    value.x = position.x + (float)uVar1;
    value.z = position.z + (this->fields).lookAtOffset.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
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
  JetPackCamera_HandleInput(this,camController,(MethodInfo *)0x0);
  fVar1 = (float10)func_?((this->fields).xAxis,(this->fields).xAxisTarget,
                                   &(this->fields).xAxisVelocity,(this->fields).rotationSmoothTime);
  (this->fields).xAxis = (float)fVar1;
  fVar1 = (float10)func_?((this->fields).yAxis,(this->fields).yAxisTarget,
                                   &(this->fields).yAxisVelocity,(this->fields).rotationSmoothTime);
  (this->fields).yAxis = (float)fVar1;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  euler.y = (this->fields).yAxis * _UNK_?;
  euler.x = (this->fields).xAxis * _UNK_?;
  euler.z = 0.0;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffd4,euler,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar2,*pQVar3,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar2 = (this->fields).lookAtTransform;
    if (pTVar2 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      uVar5 = pVVar4->x;
      uVar6 = pVVar4->y;
      uVar7 = (this->fields).lookAtOffset.x;
      uVar8 = (this->fields).lookAtOffset.y;
      if (this_00 != (Transform *)0x0) {
        value.y = (float)uVar8 + (float)uVar6;
        value.x = (float)uVar7 + (float)uVar5;
        value.z = (this->fields).lookAtOffset.z + pVVar4->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_00,value,(MethodInfo *)0x0);
        MVCameraBase::MVCameraBase_UpdateCamera
                  ((MVCameraBase *)this,(MVCameraController *)&UNK_?,
                   (ProtectedTransform *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

