
/* Void Activate() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_Activate
               (ThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager::MainCameraManager_RegisterCameraWithSettings
            (MVGameType__Enum_Classic,(ICameraSettings *)this,(MethodInfo *)0x0);
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_Deactivate
               (ThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager::MainCameraManager_UnRegisterCameraWithSettings
            (MVGameType__Enum_Classic,(MethodInfo *)0x0);
  return;
}


/* Void ResetScaleValues() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_ResetScaleValues
               (ThirdPersonCamera *this,MethodInfo *method)

{
  (this->fields)._.distanceToAvatar = (this->fields).baseDistanceSettings;
  this_00 = (this->fields)._.avatarLocal;
  (this->fields)._.height = 1.5;
  (this->fields)._._._.cameraRadius = 0.3;
  if (this_00 != (MVAvatarLocal *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_01,(MethodInfo *)0x0);
      fVar2 = (this->fields)._.lookAtOffset.x;
      fVar3 = (this->fields)._.lookAtOffset.y;
      (this->fields)._.lookAtTransform = pTVar1;
      fVar4 = (this->fields)._.lookAtOffset.z;
      (this->fields)._.currentLookAtOffset.x = fVar2;
      (this->fields)._.currentLookAtOffset.y = fVar3;
      (this->fields)._.currentLookAtOffset.z = fVar4;
      (this->fields)._.lookAtScaleCorrection = 1.0;
      func_?(&stack0xfffffff0,0x3fc00000);
      (this->fields)._.shoulderOffset.x = 0.0;
      (this->fields)._.shoulderOffset.y = -0.2;
      (this->fields)._.shoulderOffset.z = 0.0;
      (this->fields)._.targetDistanceStrength = 2.0;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ScaleCameraValues(Single) */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_ScaleCameraValues
               (ThirdPersonCamera *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.distanceToAvatar = (this->fields).baseDistanceSettings;
  this_00 = (this->fields)._.avatarLocal;
  (this->fields)._.height = 1.5;
  (this->fields)._._._.cameraRadius = 0.3;
  if (this_00 != (MVAvatarLocal *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_02,(MethodInfo *)0x0);
      fVar2 = (this->fields)._.lookAtOffset.x;
      fVar3 = (this->fields)._.lookAtOffset.y;
      (this->fields)._.lookAtTransform = pTVar1;
      fVar4 = (this->fields)._.lookAtOffset.z;
      (this->fields)._.currentLookAtOffset.x = fVar2;
      (this->fields)._.currentLookAtOffset.y = fVar3;
      (this->fields)._.currentLookAtOffset.z = fVar4;
      (this->fields)._.lookAtScaleCorrection = 1.0;
      VStack_5.y = 0.0;
      VStack_5.z = 0.0;
      VStack_5.x = -0.2;
      func_?(&VStack_5,0x3fc00000,0);
      (this->fields)._.shoulderOffset.x = VStack_5.x;
      (this->fields)._.shoulderOffset.y = VStack_5.y;
      fVar4 = (this->fields)._.height;
      fVar2 = (this->fields)._.currentLookAtOffset.z;
      (this->fields)._.shoulderOffset.z = VStack_5.z;
      (this->fields)._.targetDistanceStrength = 2.0;
      (this->fields)._.height = fVar4 * scale;
      (this->fields)._.distanceToAvatar = (this->fields)._.distanceToAvatar * scale;
      (this->fields)._._._.cameraRadius = scale * (this->fields)._._._.cameraRadius;
      uVar6._0_4_ = (this->fields)._.currentLookAtOffset.x;
      uVar6._4_4_ = (this->fields)._.currentLookAtOffset.y;
      VStack_5.y = (float)(undefined4)uVar6;
      VStack_5.z = (float)uVar6._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
        uVar6 = CONCAT44(VStack_5.z,VStack_5.y);
      }
      a.z = fVar2;
      a.x = (float)(int)uVar6;
      a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_5,a,scale,(MethodInfo *)0x0);
      pTVar1 = (this->fields)._.lookAtTransform;
      fVar2 = pVVar7->y;
      fVar4 = pVVar7->z;
      (this->fields)._.currentLookAtOffset.x = pVVar7->x;
      (this->fields)._.currentLookAtOffset.y = fVar2;
      (this->fields)._.currentLookAtOffset.z = fVar4;
      if (pTVar1 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_5,pTVar1,(MethodInfo *)0x0);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_5,*pVVar7,scale,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,*pVVar7,(MethodInfo *)0x0);
        if (scale < _UNK_?) {
          (this->fields)._.lookAtScaleCorrection = (this->fields)._.lookAtScaleCorrection * scale;
        }
        uVar8._0_4_ = (this->fields)._.shoulderOffset.x;
        uVar8._4_4_ = (this->fields)._.shoulderOffset.y;
        fVar4 = (this->fields)._.shoulderOffset.z;
        VStack_5.y = (float)(undefined4)uVar8;
        VStack_5.z = (float)uVar8._4_4_;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
          uVar8 = CONCAT44(VStack_5.z,VStack_5.y);
        }
        a_00.z = fVar4;
        a_00.x = (float)(int)uVar8;
        a_00.y = (float)(int)((ulonglong)uVar8 >> 0x20);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_5,a_00,scale,(MethodInfo *)0x0);
        fVar4 = pVVar7->y;
        fVar2 = pVVar7->z;
        (this->fields)._.shoulderOffset.x = pVVar7->x;
        (this->fields)._.shoulderOffset.y = fVar4;
        fVar4 = (this->fields)._.targetDistanceStrength;
        (this->fields)._.shoulderOffset.z = fVar2;
        this_01 = (this->fields)._.avatarCameraDistTransparency;
        (this->fields)._.targetDistanceStrength = fVar4 * scale;
        if (this_01 != (AvatarCameraDistTransparency *)0x0) {
          AvatarCameraDistTransparency::AvatarCameraDistTransparency_SetScaleFadeDistance
                    (this_01,scale,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetDefaultSettings() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_SetDefaultSettings
               (ThirdPersonCamera *this,MethodInfo *method)

{
  (this->fields).baseDistanceSettings = 5.0;
  (this->fields)._.distanceToAvatar = 5.0;
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_UpdateCamera
               (ThirdPersonCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  ThirdPersonCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
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


/* Void UpdateFromCameraSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_UpdateFromCameraSettings
               (ThirdPersonCamera *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,
                        (Type *)StringLiteral_distanceToAvatar,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pPVar1);
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pPVar1);
      (this->fields)._.distanceToAvatar = *pfVar3;
      pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,
                          (Type *)StringLiteral_distanceToAvatar,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pPVar1);
      if (pPVar1 != (Pool *)0x0) {
        if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar3 = (float *)func_?(pPVar1);
          (this->fields).baseDistanceSettings = *pfVar3;
          return;
        }
        goto code_?;
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_UpdateTargetRotation
               (ThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    cVar2 = func_?(2,TypeInfo__ILockCursorManager);
    if (cVar2 == '\0') {
      return;
    }
    pTVar3 = (this->fields)._.targetRot;
    if (pTVar3 != (TargetRotation *)0x0) {
      pVVar4 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&stack0xffffffd4,(InputToPlayerMovementAndroid *)pTVar3,
                          (MethodInfo *)0x0);
      uVar5 = pVVar4->x;
      uVar6 = pVVar4->y;
      fVar7 = (float)(uVar5 ^ _UNK_?);
      fStack_8 = (float)uVar6;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar9 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar9 != (IPlayModeUI *)0x0) {
        cVar2 = func_?(3,TypeInfo__IPlayModeUI);
        (this->fields)._.autoRotate = cVar2 == '\0';
        if ((cVar2 == '\0') && (((this->fields)._._._.ignoreInputTypes & 1) == 0)) {
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          fVar10 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
          fStack_8 = (this->fields)._.mouseSensitivity * fVar10 + (float)uVar6;
          fVar10 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          fVar7 = fVar7 + (this->fields)._.mouseSensitivity * fVar10;
        }
        fVar7 = MathFunctions::MathFunctions_NormalizeAngle(fVar7,(MethodInfo *)0x0);
        if (_UNK_? < fVar7) {
          fVar7 = fVar7 - _UNK_?;
        }
        fVar10 = (this->fields)._.minimumY;
        max = (this->fields)._.maximumY;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                          (fVar7,fVar10,max,(MethodInfo *)0x0);
        fVar7 = (float)((uint)fVar7 ^ _UNK_?);
        func_?();
        pTVar3 = (this->fields)._.targetRot;
        if (pTVar3 != (TargetRotation *)0x0) {
          TargetRotation::TargetRotation_SetTargetRotation_1
                    (pTVar3,fVar7,fStack_8,(MethodInfo *)0x0);
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


/* ThirdPersonCamera() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera__ctor
               (ThirdPersonCamera *this,MethodInfo *method)

{
  (this->fields).baseDistanceSettings = 5.0;
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

