
/* Void Activate() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_Activate
               (ThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
            TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              (this_00,1,(Object *)this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
              );
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_Deactivate
               (ThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
            TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Remove
              (this_00,1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetScaleValues() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_ResetScaleValues
               (ThirdPersonCamera *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  (this->fields)._.distanceToAvatar = (this->fields).baseDistanceSettings;
  pMVar2 = (this->fields)._.avatarLocal;
  (this->fields)._.height = 1.5;
  (this->fields)._._._.cameraRadius = 0.3;
  if ((pMVar2 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields)._.lookAtTransform = pTVar3;
    func_?(&(this->fields)._.lookAtTransform,pTVar3);
    fVar4 = (this->fields)._.lookAtOffset.y;
    fVar5 = (this->fields)._.lookAtOffset.z;
    (this->fields)._.currentLookAtOffset.x = (this->fields)._.lookAtOffset.x;
    (this->fields)._.currentLookAtOffset.y = fVar4;
    (this->fields)._.currentLookAtOffset.z = fVar5;
    (this->fields)._.shoulderOffset.x = (float)(int)(ulonglong)uVar1;
    (this->fields)._.shoulderOffset.y = (float)(int)((ulonglong)uVar1 >> 0x20);
    (this->fields)._.lookAtScaleCorrection = 1.0;
    (this->fields)._.shoulderOffset.z = -0.2;
    (this->fields)._.targetDistanceStrength = 2.0;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ScaleCameraValues(Single) */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_ScaleCameraValues
               (ThirdPersonCamera *this,float scale,MethodInfo *method)

{
  VStack_1.x = _UNK_?;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  uStack_2 = 0;
  (this->fields)._.distanceToAvatar = (this->fields).baseDistanceSettings;
  pMVar3 = (this->fields)._.avatarLocal;
  (this->fields)._.height = 1.5;
  (this->fields)._._._.cameraRadius = 0.3;
  if ((pMVar3 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar3->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields)._.lookAtTransform = pTVar4;
    func_?(&(this->fields)._.lookAtTransform,pTVar4);
    fVar5 = (this->fields)._.height;
    (this->fields)._.shoulderOffset.x = (float)(int)(ulonglong)(uint)VStack_1.x;
    (this->fields)._.shoulderOffset.y = (float)(int)((ulonglong)(uint)VStack_1.x >> 0x20);
    (this->fields)._.height = scale * fVar5;
    fVar5 = (this->fields)._.distanceToAvatar;
    (this->fields)._.shoulderOffset.z = -0.2;
    fStack_6 = (this->fields)._.lookAtOffset.z;
    (this->fields)._.distanceToAvatar = scale * fVar5;
    fVar5 = (this->fields)._._._.cameraRadius;
    (this->fields)._.lookAtScaleCorrection = 1.0;
    (this->fields)._.targetDistanceStrength = 2.0;
    (this->fields)._._._.cameraRadius = scale * fVar5;
    uStack_7._0_4_ = (this->fields)._.lookAtOffset.x;
    uStack_7._4_4_ = (this->fields)._.lookAtOffset.y;
    fStack_6 = fStack_6 * scale;
    pTVar4 = (this->fields)._.lookAtTransform;
    (this->fields)._.currentLookAtOffset.x = (float)(undefined4)uStack_7 * scale;
    (this->fields)._.currentLookAtOffset.y = (float)uStack_7._4_4_ * scale;
    (this->fields)._.currentLookAtOffset.z = fStack_6;
    if (pTVar4 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_1,pTVar4,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar8->x;
      uStack_7._4_4_ = pVVar8->y;
      fStack_6 = pVVar8->z * scale;
      value.y = (float)uStack_7._4_4_ * scale;
      value.x = (float)(undefined4)uStack_7 * scale;
      value.z = fStack_6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,value,(MethodInfo *)0x0);
      if (scale < _UNK_?) {
        (this->fields)._.lookAtScaleCorrection = scale * (this->fields)._.lookAtScaleCorrection;
      }
      uStack_7._0_4_ = (this->fields)._.shoulderOffset.x;
      uStack_7._4_4_ = (this->fields)._.shoulderOffset.y;
      fStack_6 = (this->fields)._.shoulderOffset.z * scale;
      fVar5 = (this->fields)._.targetDistanceStrength;
      (this->fields)._.shoulderOffset.x = (float)(undefined4)uStack_7 * scale;
      (this->fields)._.shoulderOffset.y = (float)uStack_7._4_4_ * scale;
      (this->fields)._.shoulderOffset.z = fStack_6;
      this_01 = (this->fields)._.avatarCameraDistTransparency;
      (this->fields)._.targetDistanceStrength = scale * fVar5;
      if (this_01 != (AvatarCameraDistTransparency *)0x0) {
        AvatarCameraDistTransparency::AvatarCameraDistTransparency_SetScaleFadeDistance
                  (this_01,scale,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
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
        value_00.y = (fVar3 * fVar24 + fVar22 * 3.242028e-29 + fVar23 * fVar2) - fVar4 * fVar21;
        value_00.x = (fVar24 * fVar2 + fVar21 * 3.242028e-29 + fVar22 * fVar4) - fVar23 * fVar3;
        value_00.z = (fVar4 * fVar24 + fVar23 * 3.242028e-29 + fVar3 * fVar21) - fVar22 * fVar2;
        value_00.w = ((fVar24 * 3.242028e-29 - fVar2 * fVar21) - fVar3 * fVar22) - fVar23 * fVar4
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


/* Void UpdateFromCameraSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera_UpdateFromCameraSettings
               (ThirdPersonCamera *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_distanceToAvatar);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_distanceToAvatar,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Single,TVar1.m_Index);
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar3 = (float *)func_?(TVar1.m_Index);
      (this->fields)._.distanceToAvatar = *pfVar3;
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                         (Object *)StringLiteral_distanceToAvatar,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Single,TVar1.m_Index);
      if (TVar1.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar3 = (float *)func_?(TVar1.m_Index);
          (this->fields).baseDistanceSettings = *pfVar3;
          return;
        }
        goto code_?;
      }
    }
  }
  uVar2 = func_?();
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
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) &&
     (bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0),
     bVar1 == 0)) {
    return;
  }
  pTVar2 = (this->fields)._.targetRot;
  if (pTVar2 != (TargetRotation *)0x0) {
    uVar3 = (pTVar2->fields).eulerAngles.x;
    uVar4 = (pTVar2->fields).eulerAngles.y;
    fVar5 = (float)(uVar3 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                   );
    fStack_6 = (float)uVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar7 != (IPlayModeUI *)0x0) {
      bVar8 = func_?(3,TypeInfo__IPlayModeUI,pIVar7);
      (this->fields)._.autoRotate = bVar8 ^ 1;
      if (((bVar8 ^ 1) != 0) && (((this->fields)._._._.ignoreInputTypes & 1) == 0)) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        fVar9 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
        fStack_6 = fVar9 * (this->fields)._.mouseSensitivity + (float)uVar4;
        fVar9 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        fVar5 = fVar5 + fVar9 * (this->fields)._.mouseSensitivity;
      }
      fVar5 = MathFunctions::MathFunctions_NormalizeAngle(fVar5,(MethodInfo *)0x0);
      if (_UNK_? < fVar5) {
        fVar5 = fVar5 - _UNK_?;
      }
      fVar9 = (this->fields)._.minimumY;
      if ((fVar5 < fVar9) || (fVar9 = (this->fields)._.maximumY, fVar9 < fVar5)) {
        fVar5 = fVar9;
      }
      pTVar2 = (this->fields)._.targetRot;
      if (pTVar2 != (TargetRotation *)0x0) {
        TargetRotation::TargetRotation_SetTargetRotation_1
                  (pTVar2,(float)((uint)fVar5 ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 ),fStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* ThirdPersonCamera() */

void Assembly-CSharp.dll::ThirdPersonCamera::ThirdPersonCamera__ctor
               (ThirdPersonCamera *this,MethodInfo *method)

{
  (this->fields).baseDistanceSettings = 5.0;
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
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  method_00 = (MethodInfo *)&(value->fields).prevVelocities;
  (value->fields).prevVelocities = this_00;
  func_?(method_00,this_00);
  (value->fields).maxMag = 30.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

