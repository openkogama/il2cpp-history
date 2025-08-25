
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
      (this->fields).ignoreAvatarId = this_01;
      func_?(&(this->fields).ignoreAvatarId,this_01);
      (*(code *)(this->klass->vtable).Reset.method)
                (this,(this->klass->vtable).FocusOnObject.methodPtr);
      return;
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
    uVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    uVar7 = (this->fields).lookAtHeightOffset.x;
    uVar8 = (this->fields).lookAtHeightOffset.y;
    fStack_9 = (this->fields).lookAtHeightOffset.z + pVVar3->z;
    fStack_10 = (this->fields)._.cameraRadius;
    this_00 = (this->fields).cameraCollision;
    baseDistance = (this->fields).currentDistanceToAvatar;
    VStack_4.y = (float)uVar6 + (float)uVar8;
    VStack_4.x = (float)uVar5 + (float)uVar7;
    uStack_11 = CONCAT44((float)uVar6 + (float)uVar8,(float)uVar5 + (float)uVar7);
    VStack_4.z = fStack_9;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_12,pTVar2,(MethodInfo *)0x0);
      if (this_00 != (CameraCollisionWithSliding *)0x0) {
        func_?();
        targetPosition.z = fStack_9;
        targetPosition.x = (float)(undefined4)uStack_11;
        targetPosition.y = (float)uStack_11._4_4_;
        bVar13 = CameraCollision::CameraCollision_Collide_1
                          ((CameraCollision *)this_00,(VoxelHit *)&stack0xffffff80,&VStack_1,
                           fStack_10,baseDistance,targetPosition,*pVVar3,
                           (this->fields).ignoreAvatarId,(MethodInfo *)0x0);
        if (bVar13 != 0) {
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
                             (&VStack_12,this_02,(MethodInfo *)0x0);
          if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
            targetPosition_00.z = VStack_4.z;
            targetPosition_00.x = VStack_4.x;
            targetPosition_00.y = VStack_4.y;
            pVVar3 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               (&VStack_12,this_01,targetPosition_00,*pVVar3,(MethodInfo *)0x0);
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,2.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  func_?(&(this->fields).avatarCameraDistTransparency,this_00);
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
                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field) +
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
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar2 = fVar4 * _UNK_?;
      if ((float)((uint)fVar1 & _UNK_?) <= fVar4 * _UNK_?) {
        fVar2 = (float)((uint)fVar1 & _UNK_?);
      }
      fVar2 = (float)((uint)fVar2 ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    }
  }
  (this->fields).currentDistanceToAvatar = fVar2 + (this->fields).currentDistanceToAvatar;
  AndroidThirdPersonCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_HandleCollision(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cameraShake;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar5 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
    pMVar6 = (this->fields).avatarLocal;
    if (pMVar6 != (MVAvatarLocal *)0x0) {
      pIVar7 = (pMVar6->klass->vtable).get_VelocityAbsolute.methodPtr;
      puVar8 = &stack0xffffffd4;
      (*(code *)(pMVar6->klass->vtable).get_VelocityRelative.method)();
      fVar9 = (float10)func_?();
      if (this_00 != (CameraShake *)0x0) {
        pVVar10 = CameraShake::CameraShake_Shake_1
                           ((Vector3 *)&stack0xffffffd4,this_00,(float)fVar9,(MethodInfo *)0x0);
        uVar11 = pVVar10->x;
        uVar12 = pVVar10->y;
        if (targetTransform != (ProtectedTransform *)0x0) {
          value.y = (float)pMVar6 + (float)uVar12;
          value.x = (float)puVar8 + (float)uVar11;
          value.z = (float)pIVar7 + pVVar10->z;
          ProtectedTransform::ProtectedTransform_set_position
                    (targetTransform,value,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
            ProtectedTransform::ProtectedTransform_set_rotation
                      (targetTransform,*pQVar13,(MethodInfo *)0x0);
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
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  uStack_1._0_4_ = 0.0;
  uStack_1._4_4_ = 0.0;
  uStack_2 = 0;
  pTVar3 = (this->fields).targetRotation;
  if (pTVar3 == (TargetRotation *)0x0) goto code_?;
  uStack_4._0_4_ = (pTVar3->fields).eulerAngles.x;
  uStack_4._4_4_ = (pTVar3->fields).eulerAngles.y;
  fStack_5 = (float)uStack_4;
  fStack_6 = uStack_4._4_4_;
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
  pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  pIStack_8 = pIVar7;
  if (pIVar7 == (IPlayModeUI *)0x0) goto code_?;
  pIStack_9 = pIVar7->klass;
  uVar10 = 0;
  uStack_11 = 0;
  uVar12._0_1_ = (pIStack_9->_1).rank;
  uVar12._1_1_ = (pIStack_9->_1).minimumAlignment;
  if (uVar12 != 0) {
    do {
      if (pIStack_9->interfaceOffsets[uVar10].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI
         ) {
        ppMVar13 = &(&(pIVar7->klass->vtable).get_IsInPauseMenu)
                   [pIVar7->klass->interfaceOffsets[uVar10].offset].method;
        goto code_?;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar12);
  }
  ppMVar13 = (MethodInfo **)func_?(pIVar7,TypeInfo__IPlayModeUI,5);
code_?:
  cVar14 = (*(code *)*ppMVar13)(pIVar7,ppMVar13[1]);
  if ((cVar14 == '\0') && (((this->fields)._.ignoreInputTypes & 1) == 0)) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar15 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    uStack_1 = CONCAT44(uStack_1._4_4_,fVar15);
    fVar15 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    pIVar16 = (this->fields).inputMovementPrecisionModifier;
    uStack_2 = 0;
    uStack_1._4_4_ = fVar15;
    if (pIVar16 == (InputMovementPrecisionModifier *)0x0) goto code_?;
    fVar17 = 0.0;
    auStack_18._4_4_ = (float)uStack_1;
    auStack_18._8_4_ = fVar15;
    fStack_19 = 0.0;
    fVar20 = (float10)func_?(auStack_18 + 4,0);
    uVar21 = uStack_1;
    if (_UNK_? <= (float)fVar20) {
      fVar15 = (float)fVar20 / (pIVar16->fields).maxMagnitude;
      if (fVar15 < 0.0) {
        fVar17 = 0.0;
code_?:
        fVar15 = fVar17;
      }
      else {
        fVar17 = _UNK_?;
        if (_UNK_? < fVar15) goto code_?;
      }
      this_00 = (pIVar16->fields).inputMovementModificationCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      fVar22 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_00,fVar15,(MethodInfo *)0x0);
      fVar22 = fVar22 * (_UNK_? / fVar15);
      fVar17 = fVar22 * 0.0;
      uVar21._0_4_ = fVar22 * (float)uStack_1;
      uVar21._4_4_ = uStack_1._4_4_ * fVar22;
      fStack_19 = fVar17;
    }
    this_01 = (this->fields).axisBias;
    if (this_01 == (AxisBias *)0x0) goto code_?;
    inputVector.z = fVar17;
    inputVector.x = (float)uVar21;
    inputVector.y = SUB84(uVar21,4);
    pVVar23 = AxisBias::AxisBias_GetBiasedVector
                       ((Vector3 *)(auStack_18 + 4),this_01,inputVector,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar23->x;
    uStack_1._4_4_ = pVVar23->y;
    fStack_5 = (float)uStack_1 * _UNK_? + (float)uStack_4;
    fStack_6 = uStack_1._4_4_ * _UNK_? + uStack_4._4_4_;
  }
  fVar15 = MathFunctions::MathFunctions_NormalizeAngle(fStack_5,(MethodInfo *)0x0);
  if (_UNK_? < fVar15) {
    fVar15 = fVar15 - _UNK_?;
  }
  fVar17 = (this->fields).minimumY;
  if ((fVar15 < fVar17) || (fVar17 = (this->fields).maximumY, fVar17 < fVar15)) {
    fVar15 = fVar17;
  }
  pTVar3 = (this->fields).targetRotation;
  if (pTVar3 != (TargetRotation *)0x0) {
    (pTVar3->fields).eulerAngles.x = fVar15;
    (pTVar3->fields).eulerAngles.y = fStack_6;
    (pTVar3->fields).eulerAngles.z = 0.0;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar3 = (this->fields).targetRotation;
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (((this_03 != (Transform *)0x0) &&
        (pQVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)auStack_18,this_03,(MethodInfo *)0x0),
        pTVar3 != (TargetRotation *)0x0)) &&
       (pQVar24 = TargetRotation::TargetRotation_GetLerpRotation
                           ((Quaternion *)auStack_18,pTVar3,*pQVar24,(MethodInfo *)0x0),
       this_02 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar24,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
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
  (this->fields).cameraCollision = value;
  func_?(&(this->fields).cameraCollision,value);
  method_00 = TypeInfo__CameraLerpToDesiredDistance;
  value_00 = (CameraLerpToDesiredDistance *)func_?();
  (value_00->fields).newDistance = INFINITY;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).cameraLerpToDesiredDistance = value_00;
  func_?(&(this->fields).cameraLerpToDesiredDistance,value_00);
  (this->fields).distanceToAvatarBase = 5.0;
  TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera__ctor
            ((TimeAttackFlagCountdownCamera *)this,(MethodInfo *)0x0);
  return;
}

