
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Enter
               (VehicleCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).originalTransformParent = pTVar1;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      PlaymodeCamera::PlaymodeCamera_Enter
                ((PlaymodeCamera *)this,(MVCameraController *)0x0,(MethodInfo *)0x0);
      (this->fields)._.lookAtTransform = (this->fields).LookAtTransform;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Exit
               (VehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)camController,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_VehicleCamera_exit,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_00,(this->fields).originalTransformParent,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Reset(VehicleCamera *this,MethodInfo *method)

{
  PlaymodeCamera::PlaymodeCamera_Reset((PlaymodeCamera *)this,(MethodInfo *)0x0);
  (this->fields).rotationAroundY = 0.0;
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_UpdateCamera
               (VehicleCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  VehicleCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (ProtectedTransform__Class *)0x0;
  func_?(&stack0xffffffdc,0,targetTransform[5].monitor,0,0);
  targetTransform[7].monitor = (MonitorData *)0x0;
  targetTransform[7].fields = (Transform *)0x0;
  targetTransform[8].klass = pPVar1;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)targetTransform,(MethodInfo *)0x0);
  this_00 = (TargetRotation *)targetTransform[0xe].fields.transform;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)targetTransform,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffcc,pTVar3,(MethodInfo *)0x0);
    if (this_00 != (TargetRotation *)0x0) {
      pQVar4 = TargetRotation::TargetRotation_GetLerpRotation
                         ((Quaternion *)&stack0xffffffcc,this_00,*pQVar4,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar2,*pQVar4,(MethodInfo *)0x0);
        pTVar2 = targetTransform[0xd].fields.transform;
        pTVar3 = targetTransform[8].fields.transform;
        uVar5._0_4_ = 0.0;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar2 = (Transform *)
                 UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           ((float)pTVar2,(float)uVar5,fVar6 * (float)pTVar3,(MethodInfo *)0x0);
        targetTransform[0xd].fields.transform = pTVar2;
        PlaymodeCamera::PlaymodeCamera_UpdatePosition
                  ((PlaymodeCamera *)targetTransform,(MethodInfo *)0x0);
        this_01 = (ProtectedTransform *)targetTransform->klass[1]._1.cctor_started;
        (*(code *)targetTransform->klass[1]._1.initializationExceptionGCHandle)();
        pMVar7 = targetTransform[0xc].monitor;
        dVar8 = (double)((float)targetTransform[0xd].klass - (float)targetTransform[0xf].monitor);
        fVar6 = (float)(double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_?,
                                         SUB84(dVar8,0) & _UNK_?);
        fVar6 = fVar6 * fVar6;
        uVar9 = *(undefined8 *)&targetTransform[0xb].fields;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)targetTransform,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
          uVar5._0_4_ = pVVar10->x;
          uVar5._4_4_ = pVVar10->y;
          fVar11 = pVVar10->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = (float)pMVar7;
          a.x = (float)(int)uVar9;
          a.y = (float)(int)((ulonglong)uVar9 >> 0x20);
          b.z = fVar11;
          b.x = (float)(int)uVar5;
          b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffffd0,a,b,(MethodInfo *)0x0);
          pTVar2 = targetTransform[0xf].fields.transform;
          uVar9._0_4_ = pVVar10->x;
          uVar9._4_4_ = pVVar10->y;
          uVar5._0_4_ = pVVar10->z;
          fVar11 = (float)targetTransform[0xf].klass;
          fVar12 = (float)targetTransform[0xf].monitor;
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)targetTransform,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd0,pTVar3,(MethodInfo *)0x0);
            a_00.y = fVar12;
            a_00.x = fVar11;
            a_00.z = (float)pTVar2;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffd0,a_00,*pVVar10,(MethodInfo *)0x0);
            uVar13._0_4_ = pVVar10->x;
            uVar13._4_4_ = pVVar10->y;
            uVar5._4_4_ = pVVar10->z;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
            }
            fromDirection.z = (float)uVar5;
            fromDirection.x = (float)(int)uVar9;
            fromDirection.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            toDirection.z = uVar5._4_4_;
            toDirection.x = (float)(int)uVar13;
            toDirection.y = (float)(int)((ulonglong)uVar13 >> 0x20);
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                               ((Quaternion *)&stack0xffffffcc,fromDirection,toDirection,
                                (MethodInfo *)0x0);
            uVar5._0_4_ = pQVar4->x;
            uVar5._4_4_ = pQVar4->y;
            fVar11 = pQVar4->z;
            fVar12 = pQVar4->w;
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
            uVar13._0_4_ = pQVar4->x;
            uVar13._4_4_ = pQVar4->y;
            fVar14 = pQVar4->z;
            fVar15 = pQVar4->w;
            fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            a_01.y = uVar13._4_4_;
            a_01.x = (float)uVar13;
            a_01.z = fVar14;
            a_01.w = fVar15;
            b_00.y = uVar5._4_4_;
            b_00.x = (float)uVar5;
            b_00.z = fVar11;
            b_00.w = fVar12;
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                               ((Quaternion *)&stack0xffffffcc,a_01,b_00,
                                (float)targetTransform[9].klass * fVar16 * fVar6,(MethodInfo *)0x0)
            ;
            fVar6 = pQVar4->x;
            uVar5._0_4_ = pQVar4->y;
            uVar5._4_4_ = pQVar4->z;
            fVar11 = pQVar4->w;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)targetTransform,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffd0,*pVVar10,
                                  *(Vector3 *)&targetTransform[2].fields,(MethodInfo *)0x0);
              if (this_01 != (ProtectedTransform *)0x0) {
                ProtectedTransform::ProtectedTransform_set_position
                          (this_01,*pVVar10,(MethodInfo *)0x0);
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)targetTransform,(MethodInfo *)0x0)
                ;
                if (pTVar2 != (Transform *)0x0) {
                  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation
                                     ((Quaternion *)&stack0xffffffcc,pTVar2,(MethodInfo *)0x0);
                  lhs.y = (float)uVar5;
                  lhs.x = fVar6;
                  lhs.z = uVar5._4_4_;
                  lhs.w = fVar11;
                  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                           Quaternion_op_Multiply
                                     ((Quaternion *)&stack0xffffffcc,lhs,*pQVar4,(MethodInfo *)0x0);
                  ProtectedTransform::ProtectedTransform_set_rotation
                            (this_01,*pQVar4,(MethodInfo *)0x0);
                  ScaleAnimationBase::ScaleAnimationBase_Play
                            ((ScaleAnimationBase *)targetTransform,(float)this_01,(MethodInfo *)0x0)
                  ;
                  if ((AvatarCameraDistTransparency *)targetTransform[8].monitor !=
                      (AvatarCameraDistTransparency *)0x0) {
                    AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                              ((AvatarCameraDistTransparency *)targetTransform[8].monitor,
                               (MVAvatarLocal *)targetTransform[0x11].klass,(MethodInfo *)0x0);
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
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_UpdateTargetRotation
               (VehicleCamera *this,MethodInfo *method)

{
  pVVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pTVar4 = (this->fields)._.targetRot;
  if (pTVar4 != (TargetRotation *)0x0) {
    pVVar5 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                       ((Vector3 *)&stack0xffffffd8,(InputToPlayerMovementAndroid *)pTVar4,
                        (MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar5->x;
    uStack_2._4_4_ = pVVar5->y;
    fStack_3 = pVVar5->z;
    pVVar6 = (VehicleCamera *)((uint)(float)uStack_2 ^ _UNK_?);
    fStack_7 = uStack_2._4_4_;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar8 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar8 != (IPlayModeUI *)0x0) {
      cVar9 = func_?(3,TypeInfo__IPlayModeUI,pIVar8);
      (this->fields)._.autoRotate = cVar9 == '\0';
      if ((cVar9 == '\0') && (((this->fields)._._._.ignoreInputTypes & 1) == 0)) {
        fStack_10 = (this->fields).rotationAroundY;
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        fStack_7 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
        fStack_10 = (this->fields)._.mouseSensitivity * fStack_7 + fStack_10;
        (this->fields).rotationAroundY = fStack_10;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                           (fStack_10,-90.0,90.0,(MethodInfo *)0x0);
        this_00 = (this->fields)._.lookAtTransform;
        (this->fields).rotationAroundY = fVar11;
        if (this_00 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                  ((Quaternion *)&stack0xffffffc4,this_00,(MethodInfo *)0x0);
        puVar12 = (undefined8 *)func_?(&stack0xffffffc8,&stack0xffffffb4,0);
        fVar11 = (float)((ulonglong)*puVar12 >> 0x20);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                           ((Quaternion *)&stack0xffffffc4,0.0,fVar11,0.0,(MethodInfo *)0x0);
        fVar11 = pQVar13->x;
        fVar14 = pQVar13->y;
        fVar15 = pQVar13->z;
        fVar16 = pQVar13->w;
        fStack_10 = (this->fields).rotationAroundY;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                           ((Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                           ((Quaternion *)&stack0xffffffc4,fStack_10,*pVVar5,(MethodInfo *)0x0);
        rhs.y = fVar14;
        rhs.x = fVar11;
        rhs.z = fVar15;
        rhs.w = fVar16;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                  ((Quaternion *)&stack0xffffffc4,*pQVar13,rhs,(MethodInfo *)0x0);
        puVar12 = (undefined8 *)func_?();
        fStack_7 = (float)((ulonglong)*puVar12 >> 0x20);
        fVar11 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        pVVar6 = (VehicleCamera *)((this->fields)._.mouseSensitivity * fVar11 + (float)pVVar6);
      }
      this = pVVar6;
      if (_UNK_? < (float)pVVar6) {
        this = (VehicleCamera *)((float)pVVar6 - _UNK_?);
      }
      fStack_10 = (pVVar1->fields)._.minimumY;
      fStack_17 = (pVVar1->fields)._.maximumY;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                         ((float)this,fStack_10,fStack_17,(MethodInfo *)0x0);
      func_?(&uStack_2,(uint)fVar11 ^ _UNK_?,fStack_7,0,0);
      pTVar4 = (pVVar1->fields)._.targetRot;
      if (pTVar4 != (TargetRotation *)0x0) {
        TargetRotation::TargetRotation_SetTargetRotation_1
                  (pTVar4,(float)uStack_2,uStack_2._4_4_,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* VehicleCamera() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera__ctor(VehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields)._.distanceToAvatar = 5.0;
  (this->fields)._.height = 1.5;
  (this->fields)._.minimumY = -60.0;
  (this->fields)._.maximumY = 60.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x3fc00000,0,0xbe4ccccd,0);
  (this->fields)._.shoulderOffset.x = (float)(undefined4)uStack_2;
  (this->fields)._.shoulderOffset.y = (float)uStack_2._4_4_;
  (this->fields)._.shoulderOffset.z = fStack_1;
  uStack_3 = 0;
  fStack_4 = 0.0;
  func_?(&uStack_3,0,0x3fc00000,0,0);
  (this->fields)._.avatarHeadOffset.x = (float)(undefined4)uStack_3;
  (this->fields)._.avatarHeadOffset.y = (float)uStack_3._4_4_;
  (this->fields)._.avatarHeadOffset.z = fStack_4;
  (this->fields)._.targetDistanceStrength = 2.0;
  (this->fields)._.followRotationSpeed = 2.0;
  uStack_5 = 0;
  fStack_6 = 0.0;
  func_?(&uStack_5,0,0x40200000,0,0);
  (this->fields)._.lookAtOffset.x = (float)(undefined4)uStack_5;
  (this->fields)._.lookAtOffset.y = (float)uStack_5._4_4_;
  (this->fields)._.lookAtOffset.z = fStack_6;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields)._.currentLookAt.x = pVVar7->x;
  (this->fields)._.currentLookAt.y = fVar8;
  (this->fields)._.currentLookAt.z = fVar9;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields)._.actualLookAt.x = pVVar7->x;
  (this->fields)._.actualLookAt.y = fVar8;
  (this->fields)._.actualLookAt.z = fVar9;
  (this->fields)._.distance = 2.0;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields)._.lookAtPos.x = pVVar7->x;
  (this->fields)._.lookAtPos.y = fVar8;
  (this->fields)._.lookAtPos.z = fVar9;
  (this->fields)._.mouseSensitivity = 0.25;
  (this->fields)._.lookAtScaleCorrection = 1.0;
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this_00->fields)._._._._.m_CachedPtr = (void *)0x5;
  method_00 = TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>;
  this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_01,MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
  ;
  (this_00->fields).state = (int32_t)this_01;
  (this_00->fields).originalScale.x = 30.0;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields)._.smoothLookAt = (PlaymodeCamera_SmoothLookAt *)this_00;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields)._.prevLookAtTransformPos.x = pVVar7->x;
  (this->fields)._.prevLookAtTransformPos.y = fVar8;
  (this->fields)._.prevLookAtTransformPos.z = fVar9;
  MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor((MVPlaymodeCameraBase *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_RotationAroundY() */

float Assembly-CSharp.dll::VehicleCamera::VehicleCamera_get_RotationAroundY
                (VehicleCamera *this,MethodInfo *method)

{
  return (this->fields).rotationAroundY;
}


/* Void set_RotationAroundY(Single) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_set_RotationAroundY
               (VehicleCamera *this,float value,MethodInfo *method)

{
  (this->fields).rotationAroundY = value;
  return;
}

