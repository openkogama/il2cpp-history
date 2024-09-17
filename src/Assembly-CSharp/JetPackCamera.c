
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_Enter
               (JetPackCamera *this,MVCameraController *camController,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    (this->fields).lookAtTransform = pTVar2;
    func_?(&(this->fields).lookAtTransform,pTVar2);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar3->upVector).x;
    uVar5 = (pVVar3->upVector).y;
    VStack_6.z = (pVVar3->upVector).z;
    VStack_7.z = VStack_6.z * _UNK_?;
    fVar8 = (float)uVar5 * _UNK_?;
    (this->fields).lookAtOffset.x = (float)uVar4 * _UNK_?;
    (this->fields).lookAtOffset.y = fVar8;
    (this->fields).lookAtOffset.z = VStack_7.z;
    VStack_6.x = (float)uVar4;
    VStack_6.y = (float)uVar5;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar2 = (this->fields).lookAtTransform;
    if (pTVar2 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_6,pTVar2,(MethodInfo *)0x0);
      uVar10 = pVVar9->x;
      uVar11 = pVVar9->y;
      uVar12 = (this->fields).lookAtOffset.x;
      uVar13 = (this->fields).lookAtOffset.y;
      VStack_6.z = (this->fields).lookAtOffset.z;
      VStack_7.z = VStack_6.z + pVVar9->z;
      VStack_7.y = (float)uVar13 + (float)uVar11;
      VStack_7.x = (float)uVar12 + (float)uVar10;
      VStack_6.x = (float)uVar12;
      VStack_6.y = (float)uVar13;
      if (this_01 != (Transform *)0x0) {
        value.y = (float)uVar13 + (float)uVar11;
        value.x = (float)uVar12 + (float)uVar10;
        value.z = VStack_7.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_01,value,(MethodInfo *)0x0);
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar14 != (MainCameraManager *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar14,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                                (&VStack_7,pTVar2,(MethodInfo *)0x0);
            fVar8 = pVVar9->x;
            (this->fields).xAxisTarget = fVar8;
            (this->fields).xAxis = fVar8;
            pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar14 != (MainCameraManager *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar14,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_eulerAngles(&VStack_7,pTVar2,(MethodInfo *)0x0);
                fVar8 = pVVar9->y;
                (this->fields).yAxisTarget = fVar8;
                (this->fields).yAxis = fVar8;
                pCVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                (this->fields).mainCamera = pCVar15;
                func_?(&(this->fields).mainCamera,pCVar15);
                pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (pMVar14 != (MainCameraManager *)0x0) {
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pMVar14,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_eulerAngles(&VStack_7,pTVar2,(MethodInfo *)0x0);
                    uVar16 = pVVar9->x;
                    uVar17 = pVVar9->y;
                    fVar8 = pVVar9->z;
                    VStack_6.y = (float)uVar16;
                    VStack_6.z = (float)uVar17;
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      value_00.y = VStack_6.z;
                      value_00.x = VStack_6.y;
                      value_00.z = fVar8;
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
      VStack_3.y = (float)TypeInfo__UnityEngine__Debug;
      VStack_3.x = (float)&UNK_?;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                        (this_00,(MethodInfo *)0x0);
      fStack_5 = SStack_1.m_value;
      puVar6 = (undefined8 *)
               (*(code *)(wo->klass->vtable).get_WorldPivot.method)
                         (&VStack_3,wo,(wo->klass->vtable).get_InteractionFlags.methodPtr);
      uStack_7 = *puVar6;
      fStack_8 = *(float *)(puVar6 + 1);
      pMVar9 = (this->fields).avatarLocal;
      if ((pMVar9 != (MVBuildModeAvatarLocal *)0x0) &&
         (this_01 = (pMVar9->fields)._._._.gameObject, this_01 != (GameObject *)0x0)) {
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_01,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_3,pTVar10,(MethodInfo *)0x0);
          VStack_12.x = pVVar11->x;
          VStack_12.y = pVVar11->y;
          uStack_13._0_4_ = (this->fields).lookAtOffset.x;
          uStack_13._4_4_ = (this->fields).lookAtOffset.y;
          fStack_14 = (this->fields).lookAtOffset.z;
          VStack_3.x = (float)uStack_7 - ((float)uStack_13 + VStack_12.x);
          VStack_3.y = uStack_7._4_4_ - (uStack_13._4_4_ + VStack_12.y);
          VStack_3.z = fStack_8 - (fStack_14 + pVVar11->z);
          VStack_12.z = VStack_3.z;
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_12,pTVar10,(MethodInfo *)0x0);
          uStack_13._0_4_ = pVVar11->x;
          uStack_13._4_4_ = pVVar11->y;
          fStack_14 = pVVar11->z;
          puVar6 = (undefined8 *)func_?(&VStack_15,&VStack_3,0);
          VStack_12._0_8_ = *puVar6;
          VStack_12.z = *(float *)(puVar6 + 1);
          fVar16 = (float10)func_?(&VStack_3,0);
          fStack_17 = (float)fVar16;
          dVar18 = (double)(fVar4 * _UNK_? * _UNK_? * _UNK_?);
          VStack_3.x = (float)&UNK_?;
          func_?();
          fVar4 = fStack_17 - fStack_5 / (float)dVar18;
          VStack_3.z = fStack_14 + avatarOffset.z + VStack_12.z * fVar4;
          value.y = uStack_13._4_4_ + avatarOffset.y + VStack_12.y * fVar4;
          value.x = (float)uStack_13 + avatarOffset.x + VStack_12.x * fVar4;
          value.z = VStack_3.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar10,value,(MethodInfo *)0x0);
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_15,pTVar10,(MethodInfo *)0x0);
          VStack_12.x = pVVar11->x;
          VStack_12.y = pVVar11->y;
          VStack_12.z = pVVar11->z;
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          uStack_13._0_4_ = (this->fields).lookAtOffset.x;
          uStack_13._4_4_ = (this->fields).lookAtOffset.y;
          fStack_14 = (this->fields).lookAtOffset.z;
          VStack_12.x = VStack_12.x + (float)uStack_13;
          VStack_12.y = VStack_12.y + uStack_13._4_4_;
          VStack_12.z = VStack_12.z + fStack_14;
          if (pTVar10 != (Transform *)0x0) {
            value_00.z = VStack_12.z;
            value_00.x = VStack_12.x;
            value_00.y = VStack_12.y;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar10,value_00,(MethodInfo *)0x0);
            VStack_3.z = cameraOffset.z + fStack_8;
            position.y = cameraOffset.y + uStack_7._4_4_;
            position.x = cameraOffset.x + (float)uStack_7;
            position.z = VStack_3.z;
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
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
        stack0xffffffe8 = (float)&puStack_5;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_5,pTVar4,(MethodInfo *)0x0);
        uVar7._0_4_ = pVVar6->x;
        uVar7._4_4_ = pVVar6->y;
        fVar8 = pVVar6->z;
        stack0xffffffe8 = (float)&UNK_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)(undefined4)uVar7);
        uVar9 = (this->fields).lookAtOffset.x;
        uVar10 = (this->fields).lookAtOffset.y;
        puStack_5 = (undefined *)((float)uVar7 + (float)uVar9);
        fVar11 = (float)((ulonglong)uVar7 >> 0x20) + (float)uVar10;
        stack0xffffffe8 = fVar11;
        if (pTVar4 != (Transform *)0x0) {
          value_00.z = fVar8 + (this->fields).lookAtOffset.z;
          value_00.x = (float)puStack_5;
          value_00.y = fVar11;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar4,value_00,(MethodInfo *)0x0);
          JetPackCamera_LookAt(this,focusPoint,(MethodInfo *)0x0);
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
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
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
        value.z = fVar6 + (this->fields).lookAtOffset.z;
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
    func_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    func_?(&TypeInfo__MVSpawnPointBlue);
    func_?(&
                    MethodInfo__JetPackCamera____c___ResetDistanceAndDirectionToAvatar_b__35_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__JetPackCamera____c);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((TypeInfo__JetPackCamera____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__JetPackCamera____c);
  }
  this_01 = TypeInfo__JetPackCamera____c->static_fields->__9__35_0;
  if (this_01 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if ((TypeInfo__JetPackCamera____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__JetPackCamera____c);
    }
    unaff_ESI = (MVWorldObjectClient *)TypeInfo__JetPackCamera____c->static_fields->__9;
    this_01 = (Func_2_MVWorldObjectClient_Boolean_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_01,(Object *)unaff_ESI,
               MethodInfo__JetPackCamera____c___ResetDistanceAndDirectionToAvatar_b__35_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__JetPackCamera____c->static_fields->__9__35_0 = this_01;
    func_?(&TypeInfo__JetPackCamera____c->static_fields->__9__35_0,this_01);
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                          (this_00,this_01,(MethodInfo *)0x0);
    if (unaff_ESI != (MVWorldObjectClient *)0x0) {
      apMStack_1[0] = TypeInfo__MVSpawnPointBlue;
      if (((unaff_ESI->klass->_1).naturalAligment < (TypeInfo__MVSpawnPointBlue->_1).naturalAligment
          ) || ((MVSpawnPointBlue__Class *)
                (unaff_ESI->klass->_1).typeHierarchy
                [(TypeInfo__MVSpawnPointBlue->_1).naturalAligment - 1] != TypeInfo__MVSpawnPointBlue
               )) goto code_?;
      apMStack_1[0] =
           (MVSpawnPointBlue__Class *)(unaff_ESI->klass->vtable).set_WorldPosition.methodPtr;
      puVar2 = (ulonglong *)
               (*(code *)(unaff_ESI->klass->vtable).get_WorldPosition_1.method)
                         (&uStack_3,unaff_ESI);
      uVar4 = *puVar2;
      VStack_5.x = (float)uVar4;
      VStack_5.y = (float)(uVar4 >> 0x20);
      fStack_6 = *(float *)(puVar2 + 1) - lookAtPosition.z;
      uStack_3 = CONCAT44(VStack_5.y - lookAtPosition.y,VStack_5.x - lookAtPosition.x);
      VStack_5._0_8_ = uVar4;
      VStack_5.z = fStack_6;
      fVar7 = (float10)func_?(&uStack_3,0);
      fStack_8 = (float)fVar7;
      pMVar9 = (this->fields).avatarLocal;
      unaff_ESI = (MVWorldObjectClient *)this;
      if (pMVar9 != (MVBuildModeAvatarLocal *)0x0) {
        puVar10 = (undefined8 *)
                 (*(code *)(pMVar9->klass->vtable).get_WorldPosition_1.method)
                           (&uStack_3,pMVar9,(pMVar9->klass->vtable).set_WorldPosition.methodPtr);
        VStack_5.x = (float)*puVar10;
        fStack_6 = *(float *)(puVar10 + 1) - lookAtPosition.z;
        VStack_5.y = 0.0;
        VStack_5.x = VStack_5.x - lookAtPosition.x;
        VStack_5.z = fStack_6;
        fVar7 = (float10)func_?(&VStack_5,0);
        fStack_11 = (float)fVar7;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&VStack_5,(MethodInfo *)0x0);
        pMVar9 = (this->fields).avatarLocal;
        if (pMVar9 != (MVBuildModeAvatarLocal *)0x0) {
          puVar10 = (undefined8 *)
                   (*(code *)(pMVar9->klass->vtable).get_WorldPosition_1.method)
                             (apMStack_1,pMVar9,(pMVar9->klass->vtable).set_WorldPosition.methodPtr
                             );
          uVar12 = *puVar10;
          fVar13 = fStack_8 - fStack_11;
          uStack_3._0_4_ = (float)uVar12;
          fStack_6 = *(float *)(puVar10 + 1) + VStack_5.z * fVar13;
          fVar14 = (float)uStack_3 + VStack_5.x * fVar13;
          uStack_3._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
          fVar13 = uStack_3._4_4_ + fVar13 * VStack_5.y;
          uStack_3 = uVar12;
          (*(code *)(pMVar9->klass->vtable).set_WorldPosition.method)
                    (pMVar9,fVar14,fVar13,fStack_6,
                     (pMVar9->klass->vtable).get_WorldRotation_1.methodPtr);
          JetPackCamera_FocusOnPosition(this,lookAtPosition,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  apMStack_1[0] = extraout_EDX;
code_?:
  func_?(unaff_ESI);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
                     ((Quaternion *)&stack0xffffffe0,euler,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar2,*pQVar3,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar2 = (this->fields).lookAtTransform;
    if (pTVar2 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
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
                  ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
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

