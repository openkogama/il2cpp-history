
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Enter
               (VehicleCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).originalTransformParent = pTVar1;
    func_?(&(this->fields).originalTransformParent,pTVar1);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      PlaymodeCamera::PlaymodeCamera_Enter
                ((PlaymodeCamera *)this,cameraController,(MethodInfo *)0x0);
      pTVar1 = (this->fields).LookAtTransform;
      (this->fields)._.lookAtTransform = pTVar1;
      func_?(&(this->fields)._.lookAtTransform,pTVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Exit
               (VehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_VehicleCamera_exit);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_VehicleCamera_exit,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Initialize
               (VehicleCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCameraDistTransparency);
    cRam_? = '\x01';
  }
  (this->fields)._.avatarLocal = avatarLocal;
  func_?(&(this->fields)._.avatarLocal,avatarLocal);
  camMoveTowardsOffset = (this->fields)._.avatarHeadOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  (this->fields)._.avatarCameraDistTransparency = this_00;
  func_?(&(this->fields)._.avatarCameraDistTransparency,this_00);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  (this->fields)._.distanceToAvatar =
       TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_Reset(VehicleCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._.lookAtTransform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      fVar7 = 0.0;
      value.y = fVar4;
      value.x = fVar3;
      value.z = fVar5;
      value.w = fVar6;
      fVar3 = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar1,value,(MethodInfo *)0x0);
      this_00 = (this->fields)._.targetRot;
      if (this_00 != (TargetRotation *)0x0) {
        q.y = fVar6;
        q.x = fVar5;
        q.z = fVar7;
        q.w = fVar3;
        TargetRotation::TargetRotation_SetTargetRotation_2(this_00,q,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._.lookAtTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          fVar3 = pVVar8->z;
          uVar11 = (this->fields)._.avatarHeadOffset.x;
          uVar12 = (this->fields)._.avatarHeadOffset.y;
          fVar4 = (this->fields)._.avatarHeadOffset.z;
          pPVar13 = (this->fields)._.smoothLookAt;
          (this->fields)._.currentLookAt.x = (float)uVar11 + (float)uVar9;
          (this->fields)._.currentLookAt.y = (float)uVar10 + (float)uVar12;
          (this->fields)._.currentLookAt.z = fVar4 + fVar3;
          if (pPVar13 != (PlaymodeCamera_SmoothLookAt *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_01 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)
                      (pPVar13->fields).prevVelocities;
            if (this_01 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              Queue`1[GameCoinStringRenderer+PriceTagString]::
              Queue_1_GameCoinStringRenderer_PriceTagString__Clear
                        (this_01,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__
                        );
              (this->fields).rotationAroundY = 0.0;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_UpdateCamera
               (VehicleCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  VehicleCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  *(ulonglong *)&targetTransform[7].fields = ZEXT48(targetTransform[5].fields.transform) << 0x20;
  targetTransform[8].monitor = (MonitorData *)0x0;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)targetTransform,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa8,this_01,(MethodInfo *)0x0);
    if (targetTransform[0xf].klass != (ProtectedTransform__Class *)0x0) {
      pQVar1 = TargetRotation::TargetRotation_GetLerpRotation
                          ((Quaternion *)&stack0xffffffb8,
                           (TargetRotation *)targetTransform[0xf].klass,*pQVar1,(MethodInfo *)0x0);
      fVar2 = pQVar1->x;
      fVar3 = pQVar1->y;
      fVar4 = pQVar1->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_01,*pQVar1,(MethodInfo *)0x0);
      pPVar5 = targetTransform[0xe].klass;
      pPVar6 = targetTransform[9].klass;
      pMVar7 = targetTransform[5].monitor;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar8 = fVar8 * (float)pPVar6;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (_UNK_? < fVar8) {
        fVar8 = _UNK_?;
      }
      targetTransform[0xe].klass =
           (ProtectedTransform__Class *)(((float)pMVar7 - (float)pPVar5) * fVar8 + (float)pPVar5);
      PlaymodeCamera::PlaymodeCamera_UpdatePosition
                ((PlaymodeCamera *)targetTransform,(MethodInfo *)0x0);
      (*(code *)targetTransform->klass[1]._1.initializationExceptionGCHandle)();
      fVar9 = (float)((uint)((float)targetTransform[0xd].monitor -
                             (float)targetTransform[0xf].fields.transform) & _UNK_?);
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffbc,this_01,(MethodInfo *)0x0);
      uVar11 = pVVar10->x;
      uVar12 = pVVar10->y;
      fVar8 = pVVar10->z;
      uVar13 = targetTransform[0xc].klass;
      uVar14 = targetTransform[0xc].monitor;
      uVar15 = pVVar10->x;
      uVar16 = pVVar10->y;
      uVar17 = targetTransform[0xf].monitor;
      uVar18 = targetTransform[0xf].fields;
      uVar19 = pVVar10->x;
      uVar20 = pVVar10->y;
      fromDirection.y = (float)uVar14 - (float)uVar16;
      fromDirection.x = (float)uVar13 - (float)uVar15;
      fromDirection.z = (float)targetTransform[0xc].fields.transform - pVVar10->z;
      toDirection.y = (float)uVar18 - (float)uVar20;
      toDirection.x = (float)uVar17 - (float)uVar19;
      toDirection.z = (float)targetTransform[0x10].klass - pVVar10->z;
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                          ((Quaternion *)&stack0xffffffb8,fromDirection,toDirection,
                           (MethodInfo *)0x0);
      fVar21 = pQVar1->x;
      fVar22 = pQVar1->y;
      fVar23 = pQVar1->z;
      fVar24 = pQVar1->w;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar25 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar26 = (pQVar25->identityQuaternion).x;
      fVar27 = (pQVar25->identityQuaternion).y;
      fVar28 = (pQVar25->identityQuaternion).z;
      fVar29 = (pQVar25->identityQuaternion).w;
      fVar30 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      a.y = fVar27;
      a.x = fVar26;
      a.z = fVar28;
      a.w = fVar29;
      b.y = fVar22;
      b.x = fVar21;
      b.z = fVar23;
      b.w = fVar24;
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffb8,a,b,
                           (float)targetTransform[9].monitor * fVar30 * fVar9 * fVar9,
                           (MethodInfo *)0x0);
      fVar21 = pQVar1->x;
      fVar22 = pQVar1->y;
      fVar23 = pQVar1->z;
      fVar24 = pQVar1->w;
      uVar31 = targetTransform[3].klass;
      uVar32 = targetTransform[3].monitor;
      if (in_stack_33 != (ProtectedTransform *)0x0) {
        value.z = fVar8 + (float)targetTransform[3].fields.transform;
        value.x = (float)uVar11 + (float)uVar31;
        value.y = (float)uVar12 + (float)uVar32;
        ProtectedTransform::ProtectedTransform_set_position
                  (in_stack_33,value,(MethodInfo *)0x0);
        value_00.y = (fVar3 * fVar24 + fVar22 * 3.229264e-29 + fVar23 * fVar2) - fVar4 * fVar21;
        value_00.x = (fVar24 * fVar2 + fVar21 * 3.229264e-29 + fVar22 * fVar4) - fVar23 * fVar3;
        value_00.z = (fVar4 * fVar24 + fVar23 * 3.229264e-29 + fVar3 * fVar21) - fVar22 * fVar2;
        value_00.w = ((fVar24 * 3.229264e-29 - fVar2 * fVar21) - fVar3 * fVar22) - fVar23 * fVar4
        ;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (in_stack_33,value_00,(MethodInfo *)0x0);
        this_00 = (AvatarCameraDistTransparency *)targetTransform[8].fields.transform;
        if (this_00 != (AvatarCameraDistTransparency *)0x0) {
          AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                    (this_00,(MVAvatarLocal *)targetTransform[0x11].monitor,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera_UpdateTargetRotation
               (VehicleCamera *this,MethodInfo *method)

{
  pVVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields)._.targetRot;
  if (pTVar2 != (TargetRotation *)0x0) {
    uStack_3._0_4_ = (pTVar2->fields).eulerAngles.x;
    uStack_3._4_4_ = (pTVar2->fields).eulerAngles.y;
    fStack_4 = (pTVar2->fields).eulerAngles.z;
    fStack_5 = (float)((uint)(float)uStack_3 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    this = (VehicleCamera *)uStack_3._4_4_;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar6 != (IPlayModeUI *)0x0) {
      bVar7 = func_?(3,TypeInfo__IPlayModeUI,pIVar6);
      (pVVar1->fields)._.autoRotate = bVar7 ^ 1;
      fVar8 = fStack_5;
      if (((bVar7 ^ 1) != 0) && (((pVVar1->fields)._._._.ignoreInputTypes & 1) == 0)) {
        fStack_9 = (pVVar1->fields).rotationAroundY;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        fVar8 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
        fVar8 = fVar8 * (pVVar1->fields)._.mouseSensitivity + fStack_9;
        fVar10 = _UNK_?;
        if ((fVar8 < _UNK_?) || (fVar10 = _UNK_?, _UNK_? < fVar8)) {
          fVar8 = fVar10;
        }
        this_00 = (pVVar1->fields)._.lookAtTransform;
        (pVVar1->fields).rotationAroundY = fVar8;
        if (this_00 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                  ((Quaternion *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
        iVar11 = func_?(&uStack_3,&stack0xffffffd4);
        fStack_4 = 0.0;
        auVar12._4_8_ = 0;
        auVar12._0_4_ = *(float *)(iVar11 + 4) * _UNK_?;
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                 Quaternion_Internal_FromEulerRad
                           ((Quaternion *)&stack0xffffffd4,(Vector3)(auVar12 << 0x20),
                            (MethodInfo *)0x0);
        uStack_3._0_4_ = pQVar13->y;
        uStack_3._4_4_ = pQVar13->z;
        fStack_4 = pQVar13->w;
        fVar8 = (pVVar1->fields).rotationAroundY;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar14 = 0.0;
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                           ((Quaternion *)&stack0xffffffc4,fVar8,
                            TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                            (MethodInfo *)0x0);
        fVar8 = pQVar13->y;
        fVar10 = pQVar13->z;
        fVar15 = pQVar13->w;
        fVar16 = uStack_3._4_4_ * fVar10;
        fVar17 = (float)uStack_3 * fVar8;
        fStack_9 = fStack_4 * fVar15;
        uStack_3 = CONCAT44((fStack_4 * fVar10 + uStack_3._4_4_ * fVar15 +
                             (float)uStack_3 * pQVar13->x) - fVar14 * fVar8,
                             (fStack_4 * fVar8 + (float)uStack_3 * fVar15 + fVar14 * fVar10) -
                             uStack_3._4_4_ * pQVar13->x);
        fStack_4 = ((fStack_9 - fVar14 * pQVar13->x) - fVar17) - fVar16;
        iVar11 = func_?();
        this = *(VehicleCamera **)(iVar11 + 4);
        fStack_9 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        fVar8 = fStack_9 * (pVVar1->fields)._.mouseSensitivity + fStack_5;
      }
      if (_UNK_? < fVar8) {
        fVar8 = fVar8 - _UNK_?;
      }
      fVar10 = (pVVar1->fields)._.minimumY;
      if ((fVar8 < fVar10) || (fVar10 = (pVVar1->fields)._.maximumY, fVar10 < fVar8)) {
        fVar8 = fVar10;
      }
      pTVar2 = (pVVar1->fields)._.targetRot;
      if (pTVar2 != (TargetRotation *)0x0) {
        TargetRotation::TargetRotation_SetTargetRotation_1
                  (pTVar2,(float)((uint)fVar8 ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 ),(float)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* VehicleCamera() */

void Assembly-CSharp.dll::VehicleCamera::VehicleCamera__ctor(VehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlaymodeCamera__SmoothLookAt);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields)._.shoulderOffset.x = (float)(int)uVar2;
  (this->fields)._.shoulderOffset.y = (float)(int)(uVar2 >> 0x20);
  (this->fields)._.avatarHeadOffset.x = (float)(int)((ulonglong)uVar1 << 0x20);
  uVar3 = _UNK_?;
  (this->fields)._.avatarHeadOffset.y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields)._.shoulderOffset.z = -0.2;
  (this->fields)._.avatarHeadOffset.z = 0.0;
  (this->fields)._.lookAtOffset.x = (float)(int)((ulonglong)uVar3 << 0x20);
  (this->fields)._.lookAtOffset.y = (float)(int)(((ulonglong)uVar3 << 0x20) >> 0x20);
  (this->fields)._.distanceToAvatar = 5.0;
  (this->fields)._.height = 1.5;
  (this->fields)._.minimumY = -60.0;
  (this->fields)._.maximumY = 60.0;
  (this->fields)._.targetDistanceStrength = 2.0;
  (this->fields)._.followRotationSpeed = 2.0;
  (this->fields)._.lookAtOffset.z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._.currentLookAt.x = (pVVar4->zeroVector).x;
  (this->fields)._.currentLookAt.y = fVar5;
  (this->fields)._.currentLookAt.z = fVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._.actualLookAt.x = (pVVar4->zeroVector).x;
  (this->fields)._.actualLookAt.y = fVar5;
  (this->fields)._.actualLookAt.z = fVar6;
  (this->fields)._.distance = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._.lookAtPos.x = (pVVar4->zeroVector).x;
  (this->fields)._.lookAtPos.y = fVar5;
  (this->fields)._.lookAtPos.z = fVar6;
  (this->fields)._.mouseSensitivity = 0.25;
  (this->fields)._.lookAtScaleCorrection = 1.0;
  value = (PlaymodeCamera_SmoothLookAt *)func_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  (value->fields).samleLength = 5;
  this_00 = (Queue_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  method_00 = (MethodInfo *)&(value->fields).prevVelocities;
  (value->fields).prevVelocities = this_00;
  func_?(method_00,this_00);
  (value->fields).maxMag = 30.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.smoothLookAt = value;
  func_?(&(this->fields)._.smoothLookAt,value);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._.prevLookAtTransformPos.x = (pVVar4->zeroVector).x;
  (this->fields)._.prevLookAtTransformPos.y = fVar5;
  (this->fields)._.prevLookAtTransformPos.z = fVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._._.shakeOffset.x = (pVVar4->zeroVector).x;
  (this->fields)._._.shakeOffset.y = fVar5;
  (this->fields)._._.shakeOffset.z = fVar6;
  (this->fields)._._.shakeMaxFactor = 1.0;
  (this->fields)._._.shakeTimeFactor = 6.3;
  (this->fields)._._.shakeStrengthFadeSpeed = 1.0;
  (this->fields)._._._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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

