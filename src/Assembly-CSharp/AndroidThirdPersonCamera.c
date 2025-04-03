
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
  fVar1 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).lookAtHeightOffset.x = (this->fields).lookAtHeightOffsetBase.x;
  (this->fields).lookAtHeightOffset.y = fVar1;
  fVar1 = (this->fields).distanceToAvatarBase;
  (this->fields).lookAtOffset.z = fVar2;
  (this->fields).lookAtHeightOffset.z = (this->fields).lookAtHeightOffsetBase.z;
  (this->fields).currentDistanceToAvatar = fVar1;
  (this->fields).desiredDistanceToAvatar = fVar1;
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
    ppTVar3 = &(this->fields).lookAtTransform;
    *ppTVar3 = pTVar2;
    func_?(ppTVar3,pTVar2);
    this_01 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields).avatarLocal;
    if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_01,(pMVar1->fields)._._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      ppHVar4 = &(this->fields).ignoreAvatarId;
      *ppHVar4 = this_01;
      func_?(ppHVar4,this_01);
      (*(code *)(this->klass->vtable).Reset.method)
                (this,(this->klass->vtable).FocusOnObject.methodPtr);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  ppMVar1 = &(this->fields).avatarLocal;
  *ppMVar1 = al;
  func_?(ppMVar1,al);
  camMoveTowardsOffset = (this->fields).lookAtOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,2.0,1.0,(MethodInfo *)0x0);
  ppAVar2 = &(this->fields).avatarCameraDistTransparency;
  *ppAVar2 = this_00;
  func_?(ppAVar2,this_00);
  return;
}


/* Void LerpCurrentDistanceToDesiredDistance() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_LerpCurrentDistanceToDesiredDistance
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).desiredDistanceToAvatar;
  fVar2 = (this->fields).currentDistanceToAvatar;
  fVar3 = fVar1 - fVar2;
  if (fVar2 < fVar1) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar1 * _UNK_?;
    if (fVar3 <= fVar1 * _UNK_?) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = 0.0;
    if (fVar1 < fVar2) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar1 = fVar2 * _UNK_?;
      if ((float)((uint)fVar3 & _UNK_?) <= fVar2 * _UNK_?) {
        fVar1 = (float)((uint)fVar3 & _UNK_?);
      }
      (this->fields).currentDistanceToAvatar =
           (float)((uint)fVar1 ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
           (this->fields).currentDistanceToAvatar;
      return;
    }
  }
  (this->fields).currentDistanceToAvatar = fVar4 + (this->fields).currentDistanceToAvatar;
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
  (*(code *)(this->klass->vtable).Reset.method)(this,(this->klass->vtable).FocusOnObject.methodPtr);
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
  fVar1 = (this->fields).desiredDistanceToAvatar;
  fVar2 = (this->fields).currentDistanceToAvatar;
  if (fVar2 < fVar1) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar1 * _UNK_?;
    if (in_stack_4 <= fVar1 * _UNK_?) {
      fVar3 = in_stack_4;
    }
  }
  else {
    fVar3 = 0.0;
    if (fVar1 < fVar2) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar1 = fVar2 * _UNK_?;
      if ((float)((uint)in_stack_4 & _UNK_?) <= fVar2 * _UNK_?) {
        fVar1 = (float)((uint)in_stack_4 & _UNK_?);
      }
      fVar3 = (float)((uint)fVar1 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    }
  }
  (this->fields).currentDistanceToAvatar = fVar3 + (this->fields).currentDistanceToAvatar;
  AndroidThirdPersonCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
  pTVar5 = (this->fields).lookAtTransform;
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)auStack_7,pTVar5,(MethodInfo *)0x0);
    uStack_8._0_4_ = pVVar6->x;
    uStack_8._4_4_ = pVVar6->y;
    VStack_9.x = pVVar6->z;
    uVar10 = (this->fields).lookAtHeightOffset.x;
    uVar11 = (this->fields).lookAtHeightOffset.y;
    fStack_12 = (this->fields).lookAtHeightOffset.z;
    uStack_13 = CONCAT44((float)uStack_8._4_4_ + (float)uVar11,
                         (float)(undefined4)uStack_8 + (float)uVar10);
    fStack_14 = fStack_12 + VStack_9.x;
    fStack_15 = (this->fields)._.cameraRadius;
    this_00 = (this->fields).cameraCollision;
    pTStack_16 = (Transform *)uVar10;
    fStack_17 = (float)uVar11;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pTVar5 != (Transform *)0x0) &&
       (pVStack_18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_9,pTVar5,(MethodInfo *)0x0),
       this_00 != (CameraCollisionWithSliding *)0x0)) {
      func_?();
      targetPosition.y = (float)in_stack_19;
      targetPosition.x = (float)in_stack_20;
      targetPosition.z = in_stack_21;
      bVar22 = CameraCollision::CameraCollision_Collide_1
                        ((CameraCollision *)this_00,(VoxelHit *)&stack0xffffff2c,&VStack_23,
                         in_stack_24,fStack_25,targetPosition,*pVStack_26,
                         (this->fields).ignoreAvatarId,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        value.y = (float)in_stack_19;
        value.x = (float)in_stack_20;
        value.z = in_stack_21;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar5,value,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                ((Component *)this,(MethodInfo *)0x0);
      this_01 = (this->fields).cameraLerpToDesiredDistance;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (((pTVar5 != (Transform *)0x0) &&
          (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff44,pTVar5,(MethodInfo *)0x0),
          this_01 != (CameraLerpToDesiredDistance *)0x0)) &&
         (targetPosition_00.y = (float)auStack_7._4_4_,
         targetPosition_00.x = (float)auStack_7._0_4_, targetPosition_00.z = (float)pVStack_18,
         pVVar6 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                            ((Vector3 *)&stack0xffffff50,this_01,targetPosition_00,*pVVar6,
                             (MethodInfo *)0x0), pTStack_16 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTStack_16,*pVVar6,(MethodInfo *)0x0);
        this_02 = (this->fields).cameraShake;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)(auStack_7 + 4),pTVar5,(MethodInfo *)0x0);
          pMVar27 = (this->fields).avatarLocal;
          uStack_13._0_4_ = pVVar6->x;
          uStack_13._4_4_ = pVVar6->y;
          fStack_14 = pVVar6->z;
          if (pMVar27 != (MVAvatarLocal *)0x0) {
            ppMVar28 = (Math__Class **)(pMVar27->klass->vtable).get_VelocityAbsolute.methodPtr;
            puVar29 = (undefined8 *)(*(code *)(pMVar27->klass->vtable).get_VelocityRelative.method)()
            ;
            fStack_30 = *(float *)(puVar29 + 1);
            fStack_17 = (float)*puVar29;
            fStack_12 = (float)((ulonglong)*puVar29 >> 0x20);
            if (cRam_? == '\0') {
              ppMVar28 = &TypeInfo__System__Math;
              pMVar27 = (MVAvatarLocal *)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              pMVar27 = (MVAvatarLocal *)&UNK_?;
              ppMVar28 = (Math__Class **)TypeInfo__System__Math;
              func_?();
            }
            if (this_02 != (CameraShake *)0x0) {
              method_00 = (MethodInfo *)0x0;
              dVar31 = (double)(fStack_12 * fStack_12 + fStack_17 * fStack_17 +
                               fStack_30 * fStack_30);
              if (dVar31 < 0.0) {
                pMVar27 = (MVAvatarLocal *)&UNK_?;
                func_?();
              }
              else {
                dVar31 = SQRT(dVar31);
              }
              pVVar6 = CameraShake::CameraShake_Shake_1
                                 ((Vector3 *)&stack0xffffff5c,this_02,(float)dVar31,method_00);
              uVar32 = pVVar6->x;
              uVar33 = pVVar6->y;
              if (targetTransform != (ProtectedTransform *)0x0) {
                value_00.y = (float)ppMVar28 + (float)uVar33;
                value_00.x = (float)pMVar27 + (float)uVar32;
                value_00.z = (float)auStack_7._0_4_ + pVVar6->z;
                ProtectedTransform::ProtectedTransform_set_position
                          (targetTransform,value_00,(MethodInfo *)0x0);
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  pQVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_rotation
                                      ((Quaternion *)&stack0xffffff78,pTVar5,(MethodInfo *)0x0);
                  ProtectedTransform::ProtectedTransform_set_rotation
                            (targetTransform,*pQVar34,(MethodInfo *)0x0);
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
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_distanceToAvatar,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        puVar2 = (undefined4 *)func_?();
        uVar3 = *puVar2;
        *(undefined4 *)(TVar1.m_Index + 0x60) = uVar3;
        *(undefined4 *)(TVar1.m_Index + 0x68) = uVar3;
        return;
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  pTVar3 = (this->fields).targetRotation;
  if (pTVar3 == (TargetRotation *)0x0) goto code_?;
  uStack_4._0_4_ = (pTVar3->fields).eulerAngles.x;
  uStack_4._4_4_ = (pTVar3->fields).eulerAngles.y;
  auStack_5._0_4_ = (float)uStack_4;
  auStack_5._4_4_ = uStack_4._4_4_;
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
  pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar6 == (IPlayModeUI *)0x0) goto code_?;
  auStack_5._12_4_ = pIVar6->klass;
  uVar7 = 0;
  auStack_5._8_4_ = 0.0;
  uVar8._0_1_ = (((IPlayModeUI__Class *)auStack_5._12_4_)->_1).rank;
  uVar8._1_1_ = (((IPlayModeUI__Class *)auStack_5._12_4_)->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (((IPlayModeUI__Class *)auStack_5._12_4_)->interfaceOffsets[uVar7].interfaceType ==
          (Il2CppClass *)TypeInfo__IPlayModeUI) {
        ppMVar9 = &(&(((IPlayModeUI__Class *)auStack_5._12_4_)->vtable).get_IsInPauseMenu)
                   [((IPlayModeUI__Class *)auStack_5._12_4_)->interfaceOffsets[uVar7].offset].
                   method;
        goto code_?;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  ppMVar9 = (MethodInfo **)func_?(pIVar6,TypeInfo__IPlayModeUI,3);
code_?:
  cVar10 = (*(code *)*ppMVar9)(pIVar6,ppMVar9[1]);
  if ((cVar10 == '\0') && (((this->fields)._.ignoreInputTypes & 1) == 0)) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
              (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
              (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    pIVar11 = (this->fields).inputMovementPrecisionModifier;
    if (pIVar11 == (InputMovementPrecisionModifier *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar12 = (double)(fStack_1 * fStack_1 + fStack_2 * fStack_2 + _UNK_?);
    if (dVar12 < 0.0) {
      func_?();
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    fVar13 = fStack_14;
    fVar15 = fStack_1;
    fVar16 = fStack_2;
    if (_UNK_? <= (float)dVar12) {
      fVar13 = (float)dVar12 / (pIVar11->fields).maxMagnitude;
      if (fVar13 < 0.0) {
        fVar15 = 0.0;
code_?:
        fVar13 = fVar15;
      }
      else {
        fVar15 = _UNK_?;
        if (_UNK_? < fVar13) goto code_?;
      }
      this_00 = (pIVar11->fields).inputMovementModificationCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,fVar13,(MethodInfo *)0x0);
      fStack_14 = fStack_14 * (_UNK_? / (float)auStack_5._8_4_);
      fVar13 = fStack_14 * _UNK_?;
      fVar15 = fStack_14 * (float)uStack_4;
      fVar16 = fStack_14 * uStack_4._4_4_;
    }
    this_01 = (this->fields).axisBias;
    if (this_01 == (AxisBias *)0x0) goto code_?;
    inputVector.y = fVar16;
    inputVector.x = fVar15;
    inputVector.z = fVar13;
    pVVar17 = AxisBias::AxisBias_GetBiasedVector(&VStack_18,this_01,inputVector,(MethodInfo *)0x0);
    VStack_18.x = pVVar17->x;
    VStack_18.y = pVVar17->y;
    fStack_14 = VStack_18.x * _UNK_? + fStack_19;
    uStack_4 = CONCAT44(uStack_4._4_4_,VStack_18.y * _UNK_? + fStack_20);
  }
  fVar13 = MathFunctions::MathFunctions_NormalizeAngle(in_stack_21,(MethodInfo *)0x0);
  if (_UNK_? < fVar13) {
    fVar13 = fVar13 - _UNK_?;
  }
  fVar15 = (this->fields).minimumY;
  if ((fVar13 < fVar15) || (fVar15 = (this->fields).maximumY, fVar15 < fVar13)) {
    fVar13 = fVar15;
  }
  pTVar3 = (this->fields).targetRotation;
  if (pTVar3 != (TargetRotation *)0x0) {
    (pTVar3->fields).eulerAngles.x = fVar13;
    (pTVar3->fields).eulerAngles.y = in_stack_22;
    (pTVar3->fields).eulerAngles.z = 0.0;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar3 = (this->fields).targetRotation;
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (((this_03 != (Transform *)0x0) &&
        (pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)auStack_5,this_03,(MethodInfo *)0x0),
        pTVar3 != (TargetRotation *)0x0)) &&
       (pQVar23 = TargetRotation::TargetRotation_GetLerpRotation
                           ((Quaternion *)(auStack_5 + 0xc),pTVar3,*pQVar23,(MethodInfo *)0x0),
       this_02 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar23,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
  method_01 = TypeInfo__CameraCollisionWithSliding;
  value = (CameraCollisionWithSliding *)func_?();
  (value->fields).checkDistanceFactor = 0.5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  ppCVar3 = &(this->fields).cameraCollision;
  *ppCVar3 = value;
  func_?(ppCVar3,value);
  method_00 = TypeInfo__CameraLerpToDesiredDistance;
  value_00 = (CameraLerpToDesiredDistance *)func_?();
  (value_00->fields).newDistance = INFINITY;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  ppCVar4 = &(this->fields).cameraLerpToDesiredDistance;
  *ppCVar4 = value_00;
  func_?(ppCVar4,value_00);
  (this->fields).distanceToAvatarBase = 5.0;
  TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera__ctor
            ((TimeAttackFlagCountdownCamera *)this,(MethodInfo *)0x0);
  return;
}

