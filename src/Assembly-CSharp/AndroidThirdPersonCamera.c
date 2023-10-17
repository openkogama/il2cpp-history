
/* Void Activate() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Activate
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager::MainCameraManager_RegisterCameraWithSettings
            (MVGameType__Enum_Classic,(ICameraSettings *)this,(MethodInfo *)0x0);
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Awake
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffsetBase.y;
  fVar2 = (this->fields).lookAtOffsetBase.z;
  (this->fields).lookAtOffset.x = (this->fields).lookAtOffsetBase.x;
  (this->fields).lookAtOffset.y = fVar1;
  fVar1 = (this->fields).lookAtHeightOffsetBase.x;
  fVar3 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).lookAtOffset.z = fVar2;
  fVar2 = (this->fields).lookAtHeightOffsetBase.z;
  (this->fields).lookAtHeightOffset.x = fVar1;
  (this->fields).lookAtHeightOffset.y = fVar3;
  (this->fields).lookAtHeightOffset.z = fVar2;
  fVar2 = (this->fields).distanceToAvatarBase;
  (this->fields).currentDistanceToAvatar = fVar2;
  (this->fields).desiredDistanceToAvatar = fVar2;
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Deactivate
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager::MainCameraManager_UnRegisterCameraWithSettings
            (MVGameType__Enum_Classic,(MethodInfo *)0x0);
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Enter
               (AndroidThirdPersonCamera *this,MVCameraController *cameraController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields).lookAtTransform = pTVar2;
    func_?(&(this->fields).lookAtTransform,pTVar2);
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar1 = (this->fields).avatarLocal;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Add
                  ((HashSet_1_System_Object_ *)this_01,(Object *)(pMVar1->fields)._._._._.id,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
        func_?(&(this->fields).ignoreAvatarId,this_01);
        (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleCollision() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_HandleCollision
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pTVar2 = (this->fields).lookAtTransform;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    VStack_5.x = pVVar3->x;
    VStack_5.y = pVVar3->y;
    VStack_5.z = pVVar3->z;
    VStack_4.x = (this->fields).lookAtHeightOffset.x;
    VStack_4.y = (this->fields).lookAtHeightOffset.y;
    fStack_6 = VStack_5.x + VStack_4.x;
    VStack_4.z = (this->fields).lookAtHeightOffset.z;
    fStack_7 = VStack_5.y + VStack_4.y;
    fStack_8 = VStack_4.z + VStack_5.z;
    fStack_9 = (this->fields)._.cameraRadius;
    this_00 = (this->fields).cameraCollision;
    baseDistance = (this->fields).currentDistanceToAvatar;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar2,(MethodInfo *)0x0);
      if (this_00 != (CameraCollisionWithSliding *)0x0) {
        func_?();
        targetPosition.y = fStack_7;
        targetPosition.x = fStack_6;
        targetPosition.z = fStack_8;
        bVar10 = CameraCollision::CameraCollision_Collide_1
                          ((CameraCollision *)this_00,(VoxelHit *)&stack0xffffff80,&VStack_1,
                           fStack_9,baseDistance,targetPosition,*pVVar3,
                           (this->fields).ignoreAvatarId,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar2 == (Transform *)0x0) goto code_?;
          value.z = VStack_1.z;
          value.x = VStack_1.x;
          value.y = VStack_1.y;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar2,value,(MethodInfo *)0x0);
        }
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        this_01 = (this->fields).cameraLerpToDesiredDistance;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_1,this_02,(MethodInfo *)0x0);
          if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
            targetPosition_00.y = fStack_7;
            targetPosition_00.x = fStack_6;
            targetPosition_00.z = fStack_8;
            pVVar3 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               (&VStack_1,this_01,targetPosition_00,*pVVar3,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,*pVVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Initialize
               (AndroidThirdPersonCamera *this,MVAvatarLocal *al,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCameraDistTransparency);
    cRam_? = '\x01';
  }
  (this->fields).avatarLocal = al;
  func_?(&(this->fields).avatarLocal,al);
  camMoveTowardsOffset = (this->fields).lookAtOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  if (this_00 != (AvatarCameraDistTransparency *)0x0) {
    AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
              (this_00,camMoveTowardsOffset,2.0,1.0,(MethodInfo *)0x0);
    (this->fields).avatarCameraDistTransparency = this_00;
    func_?(&(this->fields).avatarCameraDistTransparency,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LerpCurrentDistanceToDesiredDistance() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_LerpCurrentDistanceToDesiredDistance
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).desiredDistanceToAvatar - (this->fields).currentDistanceToAvatar;
  fVar2 = (this->fields).desiredDistanceToAvatar;
  pfVar3 = &(this->fields).currentDistanceToAvatar;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar4 * _UNK_?;
    if (fVar1 <= fVar4 * _UNK_?) {
      fVar2 = fVar1;
    }
  }
  else {
    fVar4 = (this->fields).currentDistanceToAvatar;
    pfVar3 = &(this->fields).desiredDistanceToAvatar;
    fVar2 = 0.0;
    if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar2 = fVar4 * _UNK_?;
      if ((float)((uint)fVar1 & _UNK_?) <= fVar4 * _UNK_?) {
        fVar2 = (float)((uint)fVar1 & _UNK_?);
      }
      (this->fields).currentDistanceToAvatar =
           (float)((uint)fVar2 ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) +
           (this->fields).currentDistanceToAvatar;
      return;
    }
  }
  (this->fields).currentDistanceToAvatar = fVar2 + (this->fields).currentDistanceToAvatar;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Reset
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&QStack_3,pTVar1,(MethodInfo *)0x0);
      QStack_3.x = pQVar2->x;
      QStack_3.y = pQVar2->y;
      QStack_3.z = pQVar2->z;
      QStack_3.w = pQVar2->w;
      iVar4 = func_?(auStack_5,&QStack_3,0);
      fVar6 = *(float *)(iVar4 + 4);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      uStack_7 = 0;
      euler.y = fVar6 * _UNK_?;
      euler.x = (float)_UNK_?;
      euler.z = 0.0;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         (&QStack_3,euler,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar1,*pQVar2,(MethodInfo *)0x0);
        pTVar8 = (this->fields).targetRotation;
        if (pTVar8 != (TargetRotation *)0x0) {
          (pTVar8->fields).eulerAngles.x = 20.0;
          (pTVar8->fields).eulerAngles.y = fVar6;
          (pTVar8->fields).eulerAngles.z = 0.0;
          AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
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


/* Void ResetScaledValues() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_ResetScaledValues
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffsetBase.x;
  fVar2 = (this->fields).lookAtOffsetBase.y;
  (this->fields).desiredDistanceToAvatar = (this->fields).distanceToAvatarBase;
  fVar3 = (this->fields).lookAtOffsetBase.z;
  (this->fields).lookAtOffset.x = fVar1;
  (this->fields).lookAtOffset.y = fVar2;
  fVar1 = (this->fields).lookAtHeightOffsetBase.x;
  fVar2 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).lookAtOffset.z = fVar3;
  fVar3 = (this->fields).lookAtHeightOffsetBase.z;
  (this->fields).lookAtHeightOffset.x = fVar1;
  (this->fields).lookAtHeightOffset.y = fVar2;
  (this->fields).lookAtHeightOffset.z = fVar3;
  return;
}


/* Void Resume(MVCameraController) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Resume
               (AndroidThirdPersonCamera *this,MVCameraController *camController,MethodInfo *method)

{
  (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
  return;
}


/* Void ScaleCameraValues(Single) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_ScaleCameraValues
               (AndroidThirdPersonCamera *this,float scale,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffsetBase.z;
  (this->fields).desiredDistanceToAvatar = scale * (this->fields).distanceToAvatarBase;
  uVar2 = (this->fields).lookAtOffsetBase.x;
  uVar3 = (this->fields).lookAtOffsetBase.y;
  uVar4 = (this->fields).lookAtHeightOffsetBase.x;
  uVar5 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).lookAtOffset.x = (float)uVar2 * scale;
  (this->fields).lookAtOffset.y = (float)uVar3 * scale;
  (this->fields).lookAtOffset.z = fVar1 * scale;
  fVar6 = (this->fields).lookAtHeightOffsetBase.z;
  fVar1 = (this->fields)._.cameraRadius;
  (this->fields).lookAtHeightOffset.x = (float)uVar4 * scale;
  (this->fields).lookAtHeightOffset.y = (float)uVar5 * scale;
  (this->fields).lookAtHeightOffset.z = fVar6 * scale;
  this_00 = (this->fields).avatarCameraDistTransparency;
  (this->fields)._.cameraRadius = scale * fVar1;
  if (this_00 != (AvatarCameraDistTransparency *)0x0) {
    AvatarCameraDistTransparency::AvatarCameraDistTransparency_SetScaleFadeDistance
              (this_00,scale,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetDefaultSettings() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_SetDefaultSettings
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  (this->fields).distanceToAvatarBase = 5.0;
  (this->fields).desiredDistanceToAvatar = 5.0;
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdateCamera
               (AndroidThirdPersonCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  fVar1 = (this->fields).desiredDistanceToAvatar - (this->fields).currentDistanceToAvatar;
  fVar2 = (this->fields).desiredDistanceToAvatar;
  pfVar3 = &(this->fields).currentDistanceToAvatar;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
    fStack_4 = fStack_4 * _UNK_?;
    fVar2 = fStack_4;
    if (fVar1 <= fStack_4) {
      fVar2 = fVar1;
    }
  }
  else {
    fVar5 = (this->fields).currentDistanceToAvatar;
    pfVar3 = &(this->fields).desiredDistanceToAvatar;
    fVar2 = 0.0;
    if (*pfVar3 <= fVar5 && fVar5 != *pfVar3) {
      fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
      fStack_4 = fStack_4 * _UNK_?;
      fVar2 = fStack_4;
      if ((float)((uint)fVar1 & _UNK_?) <= fStack_4) {
        fVar2 = (float)((uint)fVar1 & _UNK_?);
      }
      fVar2 = (float)((uint)fVar2 ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    }
  }
  (this->fields).currentDistanceToAvatar = fVar2 + (this->fields).currentDistanceToAvatar;
  AndroidThirdPersonCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
  pTVar6 = (this->fields).lookAtTransform;
  fStack_7 = 0.0;
  auStack_8._4_4_ = 0.0;
  fStack_9 = 0.0;
  if (pTVar6 != (Transform *)0x0) {
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_11,pTVar6,(MethodInfo *)0x0);
    VStack_12.x = pVVar10->x;
    VStack_12.y = pVVar10->y;
    VStack_12.z = pVVar10->z;
    VStack_11.x = (this->fields).lookAtHeightOffset.x;
    VStack_11.y = (this->fields).lookAtHeightOffset.y;
    fVar1 = VStack_11.x + VStack_12.x;
    VStack_11.z = (this->fields).lookAtHeightOffset.z;
    fVar5 = VStack_11.y + VStack_12.y;
    fVar13 = VStack_12.z + VStack_11.z;
    fVar2 = (this->fields)._.cameraRadius;
    this_00 = (this->fields).cameraCollision;
    fStack_4 = (this->fields).currentDistanceToAvatar;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pTVar6 != (Transform *)0x0) &&
       (pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_11,pTVar6,(MethodInfo *)0x0),
       this_00 != (CameraCollisionWithSliding *)0x0)) {
      func_?();
      targetPosition.y = fVar5;
      targetPosition.x = fVar1;
      targetPosition.z = fVar13;
      bVar14 = CameraCollision::CameraCollision_Collide_1
                        ((CameraCollision *)this_00,(VoxelHit *)&stack0xffffff78,
                         (Vector3 *)(auStack_8 + 4),fVar2,fStack_4,targetPosition,*pVVar10,
                         (this->fields).ignoreAvatarId,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar6 == (Transform *)0x0) goto code_?;
        value.z = fStack_7;
        value.x = (float)auStack_8._4_4_;
        value.y = fStack_9;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,value,(MethodInfo *)0x0);
      }
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (this->fields).cameraLerpToDesiredDistance;
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (((this_04 != (Transform *)0x0) &&
          (pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)(auStack_8 + 4),this_04,(MethodInfo *)0x0),
          this_01 != (CameraLerpToDesiredDistance *)0x0)) &&
         (targetPosition_00.y = fVar5, targetPosition_00.x = fVar1, targetPosition_00.z = fVar13,
         pVVar10 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                            ((Vector3 *)(auStack_8 + 4),this_01,targetPosition_00,*pVVar10,
                             (MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,*pVVar10,(MethodInfo *)0x0);
        this_02 = (this->fields).cameraShake;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_11,pTVar6,(MethodInfo *)0x0);
          pMVar15 = (this->fields).avatarLocal;
          auStack_8._4_4_ = pVVar10->x;
          fStack_9 = pVVar10->y;
          fStack_7 = pVVar10->z;
          if (pMVar15 != (MVAvatarLocal *)0x0) {
            puVar16 = (undefined8 *)(*(pMVar15->klass->vtable).get_VelocityRelative.methodPtr)();
            VStack_11._0_8_ = *puVar16;
            VStack_11.z = *(float *)(puVar16 + 1);
            fVar17 = (float10)func_?();
            if (this_02 != (CameraShake *)0x0) {
              pVVar10 = CameraShake::CameraShake_Shake_1
                                 (&VStack_12,this_02,(float)fVar17,(MethodInfo *)0x0);
              VStack_11.x = pVVar10->x;
              VStack_11.y = pVVar10->y;
              VStack_11.z = pVVar10->z;
              VStack_12.y = fStack_9 + VStack_11.y;
              VStack_12.x = (float)auStack_8._4_4_ + VStack_11.x;
              VStack_12.z = fStack_7 + VStack_11.z;
              if (targetTransform != (ProtectedTransform *)0x0) {
                value_00.y = fStack_9 + VStack_11.y;
                value_00.x = (float)auStack_8._4_4_ + VStack_11.x;
                value_00.z = VStack_12.z;
                ProtectedTransform::ProtectedTransform_set_position
                          (targetTransform,value_00,(MethodInfo *)0x0);
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation((Quaternion *)auStack_8,pTVar6,(MethodInfo *)0x0)
                  ;
                  ProtectedTransform::ProtectedTransform_set_rotation
                            (targetTransform,*pQVar18,(MethodInfo *)0x0);
                  this_03 = (this->fields).avatarCameraDistTransparency;
                  if (this_03 != (AvatarCameraDistTransparency *)0x0) {
                    AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                              (this_03,(this->fields).avatarLocal,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void UpdateFromCameraSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_UpdateFromCameraSettings
               (AndroidThirdPersonCamera *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)StringLiteral_distanceToAvatar,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar2 = (undefined4 *)func_?();
        pMVar3 = (MonitorData *)*puVar2;
        pOVar1[0xb].monitor = pMVar3;
        pOVar1[0xc].monitor = pMVar3;
        return;
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdatePosition
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffa0,this_01,(MethodInfo *)0x0);
    fStack_2 = pQVar1->x;
    puStack_3 = (undefined *)pQVar1->y;
    iVar4 = func_?(&stack0xffffffc8,&fStack_2,0);
    auVar5._4_8_ = 0;
    auVar5._0_4_ = *(float *)(iVar4 + 4) * _UNK_?;
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffa0,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
    fStack_2 = pQVar1->x;
    puStack_3 = (undefined *)pQVar1->y;
    fVar6 = pQVar1->z;
    fVar7 = pQVar1->w;
    this_00 = (this->fields).lookAtTransform;
    if (this_00 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_9,this_00,(MethodInfo *)0x0);
      fVar10 = pVVar8->y;
      fVar11 = pVVar8->z;
      rotation.y = (float)puStack_3;
      rotation.x = fStack_2;
      rotation.z = fVar6;
      rotation.w = fVar7;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&fStack_2,rotation,(this->fields).lookAtOffset,
                          (MethodInfo *)0x0);
      VStack_9.x = pVVar8->x;
      VStack_9.y = pVVar8->y;
      VStack_9.z = pVVar8->z;
      fStack_12 = VStack_9.y + fVar10;
      fStack_13 = VStack_9.z + fVar11;
      fVar7 = 0.0;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&fStack_2,this_01,(MethodInfo *)0x0);
      uVar14 = pVVar8->x;
      uVar15 = pVVar8->y;
      fVar6 = (this->fields).currentDistanceToAvatar;
      value.y = fStack_12 - (float)uVar15 * fVar6;
      value.x = fVar7 - (float)uVar14 * fVar6;
      value.z = fStack_13 - pVVar8->z * fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdateTargetRotation
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetRotation;
  if (pTVar1 != (TargetRotation *)0x0) {
    uStack_2._0_4_ = (pTVar1->fields).eulerAngles.x;
    uStack_2._4_4_ = (pTVar1->fields).eulerAngles.y;
    this = (AndroidThirdPersonCamera *)(float)uStack_2;
    fStack_3 = uStack_2._4_4_;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar4 != (IPlayModeUI *)0x0) {
      cVar5 = func_?(3,TypeInfo__IPlayModeUI,pIVar4);
      if ((cVar5 == '\0') && (((this_02->fields)._.ignoreInputTypes & 1) == 0)) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        fVar6 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                          (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        uStack_7 = CONCAT44(uStack_7._4_4_,fVar6);
        fVar6 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                          (StringLiteral_Mouse_X,(MethodInfo *)0x0);
        this_00 = (this_02->fields).inputMovementPrecisionModifier;
        uStack_8 = 0;
        uStack_7 = CONCAT44(fVar6,(undefined4)uStack_7);
        if (this_00 == (InputMovementPrecisionModifier *)0x0) goto code_?;
        input.z = 0.0;
        input.x = (float)(undefined4)uStack_7;
        input.y = fVar6;
        pVVar9 = InputMovementPrecisionModifier::InputMovementPrecisionModifier_GetPrecisionInput
                           ((Vector3 *)(auStack_10 + 4),this_00,input,(MethodInfo *)0x0);
        this_01 = (this_02->fields).axisBias;
        if (this_01 == (AxisBias *)0x0) goto code_?;
        pVVar9 = AxisBias::AxisBias_GetBiasedVector
                           ((Vector3 *)(auStack_10 + 4),this_01,*pVVar9,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar9->x;
        uStack_7._4_4_ = pVVar9->y;
        this = (AndroidThirdPersonCamera *)
               ((float)(undefined4)uStack_7 * _UNK_? + (float)uStack_2);
        fStack_3 = (float)uStack_7._4_4_ * _UNK_? + uStack_2._4_4_;
      }
      fVar6 = MathFunctions::MathFunctions_NormalizeAngle((float)this,(MethodInfo *)0x0);
      if (_UNK_? < fVar6) {
        fVar6 = fVar6 - _UNK_?;
      }
      fVar11 = (this_02->fields).minimumY;
      if ((fVar6 < fVar11) || (fVar11 = (this_02->fields).maximumY, fVar11 < fVar6)) {
        fVar6 = fVar11;
      }
      pTVar1 = (this_02->fields).targetRotation;
      if (pTVar1 != (TargetRotation *)0x0) {
        (pTVar1->fields).eulerAngles.x = fVar6;
        (pTVar1->fields).eulerAngles.y = fStack_3;
        (pTVar1->fields).eulerAngles.z = 0.0;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        pTVar1 = (this_02->fields).targetRotation;
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (((this_04 != (Transform *)0x0) &&
            (pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)auStack_10,this_04,(MethodInfo *)0x0),
            pTVar1 != (TargetRotation *)0x0)) &&
           (pQVar12 = TargetRotation::TargetRotation_GetLerpRotation
                               ((Quaternion *)auStack_10,pTVar1,*pQVar12,(MethodInfo *)0x0),
           this_03 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (this_03,*pQVar12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* AndroidThirdPersonCamera() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera__ctor
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CameraCollisionWithSliding);
    func_?(&TypeInfo__CameraLerpToDesiredDistance);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).lookAtOffsetBase.x = (float)(int)(uVar2 << 0x20);
  (this->fields).lookAtOffsetBase.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).lookAtOffsetBase.z = 0.0;
  (this->fields).lookAtHeightOffsetBase.x = (float)(int)((ulonglong)uVar1 << 0x20);
  (this->fields).lookAtHeightOffsetBase.y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  (this->fields).lookAtHeightOffsetBase.z = 0.0;
  value = (CameraCollisionWithSliding *)func_?(TypeInfo__CameraCollisionWithSliding);
  if (value != (CameraCollisionWithSliding *)0x0) {
    (value->fields).checkDistanceFactor = 0.5;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields).cameraCollision = value;
    func_?(&(this->fields).cameraCollision,value);
    value_00 = (CameraLerpToDesiredDistance *)func_?(TypeInfo__CameraLerpToDesiredDistance)
    ;
    if (value_00 != (CameraLerpToDesiredDistance *)0x0) {
      (value_00->fields).newDistance = INFINITY;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EDI);
      (this->fields).cameraLerpToDesiredDistance = value_00;
      func_?(&(this->fields).cameraLerpToDesiredDistance,value_00);
      (this->fields).distanceToAvatarBase = 5.0;
      TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera__ctor
                ((TimeAttackFlagCountdownCamera *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

