
/* Void Activate() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Activate
               (AndroidThirdPersonCamera *this,MethodInfo *method)

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


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Enter
               (AndroidThirdPersonCamera *this,MVCameraController *cameraController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (CelestialParam *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_00,(MethodInfo *)0x0);
      (this->fields).lookAtTransform = pTVar2;
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar1 = (this->fields).avatarLocal;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        item = (UnityWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0);
        if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pAVar3 = this->klass;
          (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
          (*(code *)(pAVar3->vtable).Reset.method)(this,(pAVar3->vtable).FocusOnObject.methodPtr);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleCollision() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_HandleCollision
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pTVar2 = (this->fields).lookAtTransform;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uStack_5._0_4_ = (this->fields).lookAtHeightOffset.x;
    uStack_5._4_4_ = (this->fields).lookAtHeightOffset.y;
    fVar6 = (this->fields).lookAtHeightOffset.z;
    uStack_7._0_4_ = pVVar3->x;
    uStack_7._4_4_ = pVVar3->y;
    fVar8 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar8;
    a.x = (float)(undefined4)uStack_7;
    a.y = uStack_7._4_4_;
    b.z = fVar6;
    b.x = (float)(undefined4)uStack_5;
    b.y = uStack_5._4_4_;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_9,a,b,(MethodInfo *)0x0);
    this_00 = (this->fields).cameraCollision;
    VStack_4.y = pVVar3->x;
    VStack_4.z = pVVar3->y;
    fVar8 = pVVar3->z;
    uStack_5 = CONCAT44((this->fields)._.cameraRadius,(undefined4)uStack_5);
    fVar6 = (this->fields).currentDistanceToAvatar;
    uStack_10._0_4_ = pVVar3->x;
    uStack_10._4_4_ = pVVar3->y;
    uStack_7 = CONCAT44(fVar8,(undefined4)uStack_7);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_9,pTVar2,(MethodInfo *)0x0);
      if (this_00 != (CameraCollisionWithSliding *)0x0) {
        targetPosition.z = fVar8;
        targetPosition.x = (float)(undefined4)uStack_10;
        targetPosition.y = (float)uStack_10._4_4_;
        bVar11 = CameraCollision::CameraCollision_Collide
                          ((CameraCollision *)this_00,&VStack_1,uStack_5._4_4_,fVar6,targetPosition
                           ,*pVVar3,(this->fields).ignoreAvatarId,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar2 == (Transform *)0x0) goto code_?;
          value.z = VStack_1.z;
          value.x = VStack_1.x;
          value.y = VStack_1.y;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar2,value,(MethodInfo *)0x0);
        }
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (this->fields).cameraLerpToDesiredDistance;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_9,this_02,(MethodInfo *)0x0);
          if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
            targetPosition_00.z = uStack_7._4_4_;
            targetPosition_00.x = VStack_4.y;
            targetPosition_00.y = VStack_4.z;
            pVVar3 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               (&VStack_9,this_01,targetPosition_00,*pVVar3,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Initialize
               (AndroidThirdPersonCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  camMoveTowardsOffset = (this->fields).lookAtOffset;
  (this->fields).avatarLocal = avatarLocal;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,2.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  return;
}


/* Void LerpCurrentDistanceToDesiredDistance() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_LerpCurrentDistanceToDesiredDistance
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).desiredDistanceToAvatar;
  fVar2 = (this->fields).currentDistanceToAvatar;
  fVar3 = 0.0;
  if (fVar2 < fVar1) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                      (fVar3 * _UNK_?,fVar1 - fVar2,(MethodInfo *)0x0);
  }
  else if (fVar1 < fVar2) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    dVar4 = (double)(fVar1 - fVar2);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                      (fVar3 * _UNK_?,
                       (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_?,
                                               SUB84(dVar4,0) & _UNK_?),(MethodInfo *)0x0);
    fVar3 = (float)((uint)fVar3 ^ _UNK_?);
  }
  (this->fields).currentDistanceToAvatar = (this->fields).currentDistanceToAvatar + fVar3;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Reset
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  pTVar7 = (this->fields).lookAtTransform;
  if (pTVar7 != (Transform *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar7,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&QStack_9,pTVar7,(MethodInfo *)0x0);
      fStack_3 = pQVar8->x;
      fStack_4 = pQVar8->y;
      fStack_5 = pQVar8->z;
      fStack_6 = pQVar8->w;
      puVar10 = (undefined8 *)func_?(&QStack_9.y,&fStack_3,0);
      uStack_11 = *(undefined4 *)(puVar10 + 1);
      fStack_4 = 0.0;
      uStack_12 = (undefined4)*puVar10;
      uStack_13 = (undefined4)((ulonglong)*puVar10 >> 0x20);
      fStack_3 = 0.0;
      func_?(&uStack_1,0x41a00000,uStack_13);
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      fVar14 = fStack_2;
      uStack_13 = (undefined4)uStack_1;
      uStack_11 = (undefined4)((ulonglong)uStack_1 >> 0x20);
      uVar15 = uStack_1;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
        uVar15 = CONCAT44(uStack_11,uStack_13);
      }
      euler.z = fVar14;
      euler.x = (float)(int)uVar15;
      euler.y = (float)(int)((ulonglong)uVar15 >> 0x20);
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                         (&QStack_9,euler,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar7,*pQVar8,(MethodInfo *)0x0);
        this_00 = (this->fields).targetRotation;
        if (this_00 != (TargetRotation *)0x0) {
          TargetRotation::TargetRotation_SetTargetRotation_1
                    (this_00,(float)uStack_1,uStack_1._4_4_,(MethodInfo *)0x0);
          AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).lookAtOffsetBase.y;
  fVar2 = (this->fields).lookAtOffsetBase.z;
  fVar3 = (this->fields).lookAtOffsetBase.z;
  (this->fields).lookAtOffset.x = (this->fields).lookAtOffsetBase.x;
  (this->fields).lookAtOffset.y = fVar1;
  fVar1 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).lookAtHeightOffset.x = (this->fields).lookAtHeightOffsetBase.x;
  (this->fields).lookAtHeightOffset.y = fVar1;
  fVar1 = (this->fields).distanceToAvatarBase;
  (this->fields).lookAtOffset.z = fVar2;
  (this->fields).lookAtHeightOffset.z = (this->fields).lookAtHeightOffsetBase.z;
  (this->fields).desiredDistanceToAvatar = fVar1 * scale;
  fVar1 = (this->fields).lookAtOffsetBase.x;
  fVar2 = (this->fields).lookAtOffsetBase.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = fVar2;
  a.x = fVar1;
  a.z = fVar3;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,a,scale,(MethodInfo *)0x0);
  fVar2 = pVVar4->y;
  fVar1 = pVVar4->z;
  (this->fields).lookAtOffset.x = pVVar4->x;
  (this->fields).lookAtOffset.y = fVar2;
  (this->fields).lookAtOffset.z = fVar1;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,(this->fields).lookAtHeightOffset,scale,
                      (MethodInfo *)0x0);
  fVar1 = pVVar4->y;
  fVar2 = pVVar4->z;
  (this->fields).lookAtHeightOffset.x = pVVar4->x;
  (this->fields).lookAtHeightOffset.y = fVar1;
  fVar1 = (this->fields)._.cameraRadius;
  (this->fields).lookAtHeightOffset.z = fVar2;
  this_00 = (this->fields).avatarCameraDistTransparency;
  (this->fields)._.cameraRadius = scale * fVar1;
  if (this_00 != (AvatarCameraDistTransparency *)0x0) {
    AvatarCameraDistTransparency::AvatarCameraDistTransparency_SetScaleFadeDistance
              (this_00,scale,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).desiredDistanceToAvatar;
  fVar2 = (this->fields).currentDistanceToAvatar;
  fVar3 = 0.0;
  if (fVar2 < fVar1) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                       (fVar3 * _UNK_?,fVar1 - fVar2,(MethodInfo *)0x0);
  }
  else if (fVar1 < fVar2) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    dVar4 = (double)(fVar1 - fVar2);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                       (fVar3 * _UNK_?,
                        (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_?,
                                                SUB84(dVar4,0) & _UNK_?),(MethodInfo *)0x0);
    fVar3 = (float)((uint)fVar3 ^ _UNK_?);
  }
  (this->fields).currentDistanceToAvatar = (this->fields).currentDistanceToAvatar + fVar3;
  AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_HandleCollision(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cameraShake;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
    pMVar7 = (this->fields).avatarLocal;
    position = *pVVar6;
    if (pMVar7 != (MVAvatarLocal *)0x0) {
      (*(code *)(pMVar7->klass->vtable).get_VelocityRelative.method)();
      fVar8 = (float10)func_?();
      if ((this_00 != (CameraShake *)0x0) &&
         (pVVar6 = CameraShake::CameraShake_Shake
                             ((Vector3 *)&stack0xffffffd8,this_00,position,(float)fVar8,
                              (MethodInfo *)0x0), targetTransform != (ProtectedTransform *)0x0)) {
        ProtectedTransform::ProtectedTransform_set_position
                  (targetTransform,*pVVar6,(MethodInfo *)0x0);
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
          ProtectedTransform::ProtectedTransform_set_rotation
                    (targetTransform,*pQVar9,(MethodInfo *)0x0);
          this_01 = (this->fields).avatarCameraDistTransparency;
          if (this_01 != (AvatarCameraDistTransparency *)0x0) {
            AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                      (this_01,(this->fields).avatarLocal,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateFromCameraSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_UpdateFromCameraSettings
               (AndroidThirdPersonCamera *this,Dictionary_2_System_Object_System_Object_ *data,
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
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar2 = (undefined4 *)func_?();
        pMVar3 = (MonoBehaviour__Array *)*puVar2;
        pPVar1[2].fields.pool = pMVar3;
        pPVar1[3].monitor = (MonitorData *)pMVar3;
        return;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdatePosition
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
            ((Quaternion *)auStack_5,(MethodInfo *)0x0);
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar6 != (Transform *)0x0) {
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)auStack_5,pTVar6,(MethodInfo *)0x0);
    fStack_1 = pQVar7->x;
    fStack_2 = pQVar7->y;
    fStack_3 = pQVar7->z;
    fStack_4 = pQVar7->w;
    puVar8 = (undefined8 *)func_?(&VStack_9,&fStack_1);
    uStack_10 = *(undefined4 *)(puVar8 + 1);
    uStack_11 = (undefined4)*puVar8;
    uStack_12 = (undefined4)((ulonglong)*puVar8 >> 0x20);
    uStack_13 = 0;
    uStack_14 = 0;
    func_?(&uStack_13);
    uVar15 = uStack_14;
    uVar16 = uStack_13;
    func_?(&stack0xffffffa8);
    pTVar6 = (this->fields).lookAtTransform;
    if (pTVar6 != (Transform *)0x0) {
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_9,pTVar6,(MethodInfo *)0x0);
      uVar18 = uStack_13;
      uVar19 = pVVar17->x;
      uVar20 = pVVar17->y;
      fVar21 = pVVar17->z;
      rotation.z = (float)uVar15;
      uStack_13._0_4_ = (undefined4)uVar16;
      uStack_13._4_4_ = SUB84(uVar16,4);
      rotation.x = (float)(undefined4)uStack_13;
      rotation.y = (float)uStack_13._4_4_;
      rotation.w = 0.0;
      uStack_13 = uVar18;
      uStack_12 = uVar19;
      uStack_10 = uVar20;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)(auStack_5 + 4),rotation,(this->fields).lookAtOffset,
                           (MethodInfo *)0x0);
      VStack_9.y = pVVar17->x;
      VStack_9.z = pVVar17->y;
      fVar22 = pVVar17->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.y = (float)uStack_10;
      a.x = (float)uStack_12;
      a.z = fVar21;
      b.z = fVar22;
      b.x = VStack_9.y;
      b.y = VStack_9.z;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)(auStack_5 + 4),a,b,(MethodInfo *)0x0);
      uVar23 = pVVar17->x;
      uVar24 = pVVar17->y;
      fVar21 = pVVar17->z;
      uStack_12 = uVar23;
      uStack_10 = uVar24;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)(auStack_5 + 4),this_00,(MethodInfo *)0x0);
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)(auStack_5 + 4),*pVVar17,
                             (this->fields).currentDistanceToAvatar,(MethodInfo *)0x0);
        a_00.y = (float)uStack_10;
        a_00.x = (float)uStack_12;
        a_00.z = fVar21;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)(auStack_5 + 4),a_00,*pVVar17,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar6,*pVVar17,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* AndroidThirdPersonCamera() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera__ctor
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x40200000,0,0);
  (this->fields).lookAtOffsetBase.x = (float)(undefined4)uStack_2;
  (this->fields).lookAtOffsetBase.y = (float)uStack_2._4_4_;
  (this->fields).lookAtOffsetBase.z = fStack_1;
  uStack_3 = 0;
  fStack_4 = 0.0;
  func_?(&uStack_3,0,0x40200000,0,0);
  (this->fields).lookAtHeightOffsetBase.x = (float)(undefined4)uStack_3;
  (this->fields).lookAtHeightOffsetBase.y = (float)uStack_3._4_4_;
  (this->fields).lookAtHeightOffsetBase.z = fStack_4;
  this_00 = (CameraCollisionWithSliding *)func_?(TypeInfo__CameraCollisionWithSliding);
  CameraCollisionWithSliding::CameraCollisionWithSliding__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).cameraCollision = this_00;
  this_01 = (CameraLerpToDesiredDistance *)func_?(TypeInfo__CameraLerpToDesiredDistance);
  CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).cameraLerpToDesiredDistance = this_01;
  (this->fields).distanceToAvatarBase = 5.0;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}

