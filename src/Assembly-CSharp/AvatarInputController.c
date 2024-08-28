
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
  fVar1 = moveDirection.x;
  fVar2 = moveDirection.y;
  fVar3 = moveDirection.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar4 = (double)(moveDirection.y * moveDirection.y + moveDirection.x * moveDirection.x +
                   moveDirection.z * moveDirection.z);
  if (dVar4 < 0.0) {
    func_?();
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  fStack_5 = 0.0;
  uStack_6 = 0;
  uStack_7 = 0;
  auStack_8 = (undefined1  [8])((ulonglong)(uint)auStack_8._4_4_ << 0x20);
  if ((float)dVar4 <= 0.0) {
    uVar9 = moveDirection._0_8_;
  }
  else {
    pCVar10 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if (pCVar10 == (Camera *)0x0) goto code_?;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar10,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)(auStack_13 + 4),pTVar11,(MethodInfo *)0x0);
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_15,*pQVar12,moveDirection,(MethodInfo *)0x0);
    uVar16._0_4_ = pVVar14->x;
    uVar16._4_4_ = pVVar14->y;
    auStack_13._0_4_ = pVVar14->z;
    auStack_8 = (undefined1  [8])(uVar16 & 0xffffffff);
    puVar17 = (undefined8 *)func_?(auStack_18,auStack_8,0);
    uVar9 = *puVar17;
    moveDirection.z = *(float *)(puVar17 + 1);
    fVar1 = (float)uVar9;
    fVar2 = (float)((ulonglong)uVar9 >> 0x20);
    fVar3 = moveDirection.z;
  }
  (this->fields).direction.x = (float)(int)uVar9;
  (this->fields).direction.y = (float)(int)((ulonglong)uVar9 >> 0x20);
  (this->fields).direction.z = moveDirection.z;
  if (((didShoot != 0) &&
      (velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z < _UNK_?))
     || ((inGunMode != 0 || forceRotateToCamDirection != 0 &&
         (_UNK_? <
          velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z)))) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarInputController);
      cRam_? = '\x01';
    }
    pCVar10 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if (pCVar10 == (Camera *)0x0) {
code_?:
      func_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar10,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)(auStack_13 + 4),pTVar11,(MethodInfo *)0x0);
    VStack_15.x = pQVar12->x;
    VStack_15.y = pQVar12->y;
    VStack_15.z = pQVar12->z;
    fStack_5 = pQVar12->w;
    iVar20 = func_?(&uStack_6,&VStack_15,0);
    euler.y = *(float *)(iVar20 + 4) * _UNK_?;
    euler.x = (float)auStack_13._0_4_;
    euler.z = 0.0;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)auStack_13,euler,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar21->zeroVector).x;
    uVar23 = (pVVar21->zeroVector).y;
    fVar3 = fVar3 - (pVVar21->zeroVector).z;
    if ((fVar2 - (float)uVar23) * (fVar2 - (float)uVar23) +
        (fVar1 - (float)uVar22) * (fVar1 - (float)uVar22) + fVar3 * fVar3 < _UNK_?)
    goto code_?;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)(auStack_8 + 4),(this->fields).direction,(MethodInfo *)0x0);
  }
  fVar1 = pQVar12->y;
  fVar2 = pQVar12->z;
  fVar3 = pQVar12->w;
  (this->fields).rotation.x = pQVar12->x;
  (this->fields).rotation.y = fVar1;
  (this->fields).rotation.z = fVar2;
  (this->fields).rotation.w = fVar3;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)(moveDirection.y * moveDirection.y + moveDirection.x * moveDirection.x +
                  moveDirection.z * moveDirection.z);
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if (0.0 < (float)dVar1) {
    this = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if (this != (Camera *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&stack0xfffffffc,*pQVar2,moveDirection,(MethodInfo *)0x0);
        uVar4._0_4_ = pVVar3->x;
        uVar4._4_4_ = pVVar3->y;
        fStack5 = pVVar3->z;
        _method = uVar4 & 0xffffffff;
        puVar6 = (undefined8 *)func_?(&stack0x00000020,&method,0);
        uVar7 = *puVar6;
        fVar8 = *(float *)(puVar6 + 1);
        __return_storage_ptr__->x = (float)(int)uVar7;
        __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
        __return_storage_ptr__->z = fVar8;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar9)();
    return pVVar3;
  }
  __return_storage_ptr__->x = (float)(int)moveDirection._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)moveDirection._0_8_ >> 0x20);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  TypeInfo__AvatarInputController->static_fields->mainCamera = pCVar6;
  func_?(TypeInfo__AvatarInputController->static_fields,pCVar6);
  return;
}

