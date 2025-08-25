
/* Quaternion GetCameraYRotation() */

Quaternion *
Assembly-CSharp.dll::AvatarInputController::AvatarInputController_GetCameraYRotation
          (Quaternion *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  this = TypeInfo__AvatarInputController->static_fields->mainCamera;
  if (this != (Camera *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
      iVar1 = func_?(&stack0xfffffff0);
      auVar2._4_8_ = 0;
      auVar2._0_4_ = *(float *)(iVar1 + 4) * _UNK_?;
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffe0,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0
                         );
      fVar4 = pQVar3->y;
      fVar5 = pQVar3->z;
      fVar6 = pQVar3->w;
      __return_storage_ptr__->x = pQVar3->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      __return_storage_ptr__->w = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar7)();
  return pQVar3;
}


/* Void HandleInput(Vector3, Boolean, Boolean, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarInputController::AvatarInputController_HandleInput
               (AvatarInputController *this,Vector3 moveDirection,bool jump,bool didShoot,
               Vector3 velocity,bool inGunMode,bool forceRotateToCamDirection,MethodInfo *method)

{
  VVar1 = moveDirection;
  VStack_2.x = moveDirection.x;
  VStack_2.y = moveDirection.y;
  VStack_2.z = moveDirection.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  fVar3 = (float10)func_?(&VStack_2,0);
  fStack_4 = (float)fVar3;
  fVar5 = 0.0;
  if (0.0 < fStack_4) {
    pCVar6 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if ((pCVar6 == (Camera *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_9,pTVar7,(MethodInfo *)0x0);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&QStack_9,*pQVar8,VVar1,(MethodInfo *)0x0);
    fVar5 = 0.0;
    uVar11._0_4_ = pVVar10->x;
    uVar11._4_4_ = pVVar10->y;
    fStack_12 = pVVar10->z;
    uStack_13 = uVar11 & 0xffffffff;
    puVar14 = (undefined8 *)func_?(&QStack_9,&uStack_13);
    moveDirection._0_8_ = *puVar14;
    moveDirection.z = *(float *)(puVar14 + 1);
    VStack_2._0_8_ = moveDirection._0_8_;
    VStack_2.z = moveDirection.z;
  }
  (this->fields).direction.x = moveDirection.x;
  (this->fields).direction.y = moveDirection.y;
  (this->fields).direction.z = moveDirection.z;
  if (((didShoot != 0) &&
      (velocity.y * velocity.y + velocity.x * velocity.x + velocity.z * velocity.z < _UNK_?))
     || ((inGunMode != 0 || forceRotateToCamDirection != 0 &&
         (_UNK_? <
          velocity.y * velocity.y + velocity.x * velocity.x + velocity.z * velocity.z)))) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarInputController);
      cRam_? = '\x01';
    }
    pCVar6 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if ((pCVar6 == (Camera *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0)) {
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_9,pTVar7,(MethodInfo *)0x0);
    fStack_16 = pQVar8->x;
    uStack_13._0_4_ = pQVar8->y;
    uStack_13._4_4_ = pQVar8->z;
    fStack_12 = pQVar8->w;
    iVar17 = func_?(&QStack_9,&fStack_16,0);
    uStack_13 = uStack_13 & 0xffffffff;
    VVar1.y = *(float *)(iVar17 + 4) * _UNK_?;
    VVar1.x = fVar5;
    VVar1.z = 0.0;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffb0,VVar1,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_13._0_4_ = (pVVar18->zeroVector).x;
    uStack_13._4_4_ = (pVVar18->zeroVector).y;
    fStack_12 = (pVVar18->zeroVector).z;
    if ((VStack_2.y - (float)uStack_13._4_4_) * (VStack_2.y - (float)uStack_13._4_4_) +
        (VStack_2.x - (float)(undefined4)uStack_13) * (VStack_2.x - (float)(undefined4)uStack_13)
        + (VStack_2.z - fStack_12) * (VStack_2.z - fStack_12) < _UNK_?)
    goto code_?;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffb0,(this->fields).direction,(MethodInfo *)0x0);
  }
  fVar5 = pQVar8->y;
  fVar19 = pQVar8->z;
  fVar20 = pQVar8->w;
  (this->fields).rotation.x = pQVar8->x;
  (this->fields).rotation.y = fVar5;
  (this->fields).rotation.z = fVar19;
  (this->fields).rotation.w = fVar20;
code_?:
  (this->fields).jump = jump;
  return;
}


/* Boolean RotateToCameraDirection(Boolean, Boolean, Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::AvatarInputController_RotateToCameraDirection
               (bool didShoot,bool inGunOrForce,Vector3 velocity,MethodInfo *method)

{
  if (((didShoot == 0) ||
      (_UNK_? <= velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z)
      ) && ((inGunOrForce == 0 ||
            (velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z <=
             _UNK_?)))) {
    return 0;
  }
  return 1;
}


/* Boolean RotateToCameraDirectionBecauseOfShooting(Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::
     AvatarInputController_RotateToCameraDirectionBecauseOfShooting
               (Vector3 velocity,MethodInfo *method)

{
  return velocity.y * velocity.y + velocity.x * velocity.x + velocity.z * velocity.z < _UNK_?
  ;
}


/* Boolean RotateToCameraDirection(Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::AvatarInputController_RotateToCameraDirection_1
               (Vector3 velocity,MethodInfo *method)

{
  return _UNK_? < velocity.y * velocity.y + velocity.x * velocity.x + velocity.z * velocity.z
  ;
}


/* Vector3 ToCameraDirection(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputController::AvatarInputController_ToCameraDirection
                    (Vector3 *__return_storage_ptr__,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&moveDirection,0);
  if (0.0 < (float)fVar1) {
    this = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if (this != (Camera *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
        point.z = moveDirection.z;
        point.x = moveDirection.x;
        point.y = moveDirection.y;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                  ((Vector3 *)&stack0xffffffe0,*pQVar2,point,(MethodInfo *)0x0);
        puVar3 = (undefined8 *)func_?();
        uVar4 = *puVar3;
        fVar5 = *(float *)(puVar3 + 1);
        __return_storage_ptr__->x = (float)(int)uVar4;
        __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar6 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar6)();
    return pVVar7;
  }
  __return_storage_ptr__->x = moveDirection.x;
  __return_storage_ptr__->y = moveDirection.y;
  __return_storage_ptr__->z = moveDirection.z;
  return __return_storage_ptr__;
}


/* AvatarInputController() */

void Assembly-CSharp.dll::AvatarInputController::AvatarInputController__ctor
               (AvatarInputController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).direction.x = (pVVar1->zeroVector).x;
  (this->fields).direction.y = fVar2;
  (this->fields).direction.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).y;
  fVar2 = (pQVar4->identityQuaternion).z;
  fVar5 = (pQVar4->identityQuaternion).w;
  (this->fields).rotation.x = (pQVar4->identityQuaternion).x;
  (this->fields).rotation.y = fVar3;
  (this->fields).rotation.z = fVar2;
  (this->fields).rotation.w = fVar5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  TypeInfo__AvatarInputController->static_fields->mainCamera = pCVar6;
  func_?(TypeInfo__AvatarInputController->static_fields,pCVar6);
  return;
}

