
/* Quaternion GetCameraYRotation() */

Quaternion *
Assembly-CSharp.dll::AvatarInputController::AvatarInputController_GetCameraYRotation
          (Quaternion *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__AvatarInputController->static_fields->mainCamera;
  if (this != (Camera *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
      puVar1 = (undefined8 *)func_?(auStack_2);
      uStack_3 = *puVar1;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                         ((Quaternion *)&stack0xffffffe0,0.0,uStack_3._4_4_,0.0,(MethodInfo *)0x0);
      fVar5 = pQVar4->y;
      fVar6 = pQVar4->z;
      fVar7 = pQVar4->w;
      __return_storage_ptr__->x = pQVar4->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      __return_storage_ptr__->w = fVar7;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pQVar4 = (Quaternion *)(*pcVar8)();
  return pQVar4;
}


/* Quaternion GetRotationMoveDirection(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarInputController::AvatarInputController_GetRotationMoveDirection
          (Quaternion *__return_storage_ptr__,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     (&QStack_2,moveDirection,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void HandleInput(Vector3, Boolean, Boolean, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarInputController::AvatarInputController_HandleInput
               (AvatarInputController *this,Vector3 moveDirection,bool jump,bool didShoot,
               Vector3 velocity,bool inGunMode,bool forceRotateToCamDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  QStack_1.z = moveDirection.y;
  QStack_1.y = moveDirection.x;
  QStack_1.w = moveDirection.z;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_2 = 0.0;
  uStack_3 = 0;
  fVar4 = (float10)func_?(&QStack_1.y,0);
  moveDirection.z = (float)fVar4;
  fVar5 = QStack_1.w;
  if (0.0 < moveDirection.z) {
    pCVar6 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if ((pCVar6 == (Camera *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffbc,pTVar7,(MethodInfo *)0x0);
    fVar9 = QStack_1.w;
    moveDirection.y = QStack_1.y;
    moveDirection.z = QStack_1.z;
    fVar5 = pQVar8->x;
    fVar10 = pQVar8->y;
    fVar11 = pQVar8->z;
    fVar12 = pQVar8->w;
    uVar13 = QStack_1._4_8_;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
      uVar13._4_4_ = moveDirection.z;
      uVar13._0_4_ = moveDirection.y;
    }
    rotation.y = fVar10;
    rotation.x = fVar5;
    rotation.z = fVar11;
    rotation.w = fVar12;
    point.z = fVar9;
    point.x = (float)uVar13;
    point.y = SUB84(uVar13,4);
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&moveDirection,rotation,point,(MethodInfo *)0x0);
    uVar15._0_4_ = pVVar14->x;
    uVar15._4_4_ = pVVar14->y;
    fStack_2 = pVVar14->z;
    uStack_3 = uVar15 & 0xffffffff;
    puVar16 = (undefined8 *)func_?(&stack0xffffffd0);
    QStack_1._4_8_ = *puVar16;
    fVar5 = *(float *)(puVar16 + 1);
  }
  fVar10 = moveDirection.x;
  (this->fields).direction.x = QStack_1.y;
  (this->fields).direction.y = QStack_1.z;
  (this->fields).direction.z = fVar5;
  bVar17 = 1;
  if (inGunMode == 0) {
    bVar17 = forceRotateToCamDirection;
  }
  moveDirection.x = velocity.x;
  fVar5 = moveDirection.x;
  moveDirection.y = velocity.y;
  fVar11 = moveDirection.y;
  if (didShoot == 0) {
code_?:
    moveDirection.x = fVar10;
    if (bVar17 != 0) {
      moveDirection.z = velocity.z;
      moveDirection.x = fVar5;
      moveDirection.y = fVar11;
      fVar4 = (float10)func_?(&moveDirection,0);
      moveDirection.z = (float)fVar4;
      if (_UNK_? < moveDirection.z) goto code_?;
    }
    uVar18 = (this->fields).direction.x;
    uVar19 = (this->fields).direction.y;
    fVar5 = (this->fields).direction.z;
    moveDirection.y = (float)uVar18;
    moveDirection.z = (float)uVar19;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
    lhs.y = moveDirection.z;
    lhs.x = moveDirection.y;
    lhs.z = fVar5;
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                      (lhs,*pVVar14,(MethodInfo *)0x0);
    if (bVar17 == 0) goto code_?;
    uVar20 = (this->fields).direction.x;
    uVar21 = (this->fields).direction.y;
    fVar5 = (this->fields).direction.z;
    moveDirection.y = (float)uVar20;
    moveDirection.z = (float)uVar21;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    forward.y = moveDirection.z;
    forward.x = moveDirection.y;
    forward.z = fVar5;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffbc,forward,(MethodInfo *)0x0);
  }
  else {
    moveDirection.z = velocity.z;
    fVar4 = (float10)func_?(&moveDirection,0);
    moveDirection.z = (float)fVar4;
    fVar10 = moveDirection.x;
    if (_UNK_? <= moveDirection.z) goto code_?;
code_?:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fStack_22 = 0.0;
    uStack_3 = 0;
    fStack_2 = 0.0;
    pCVar6 = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if ((pCVar6 == (Camera *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    {
code_?:
      func_?(0);
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffbc,pTVar7,(MethodInfo *)0x0);
    fStack_22 = pQVar8->x;
    uStack_3._0_4_ = pQVar8->y;
    uStack_3._4_4_ = pQVar8->z;
    fStack_2 = pQVar8->w;
    puVar16 = (undefined8 *)func_?(&stack0xffffffd0,&fStack_22);
    moveDirection.x = (float)*puVar16;
    moveDirection.y = (float)((ulonglong)*puVar16 >> 0x20);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                        (&QStack_1,0.0,moveDirection.y,0.0,(MethodInfo *)0x0);
  }
  fVar5 = pQVar8->y;
  fVar10 = pQVar8->z;
  fVar11 = pQVar8->w;
  (this->fields).rotation.x = pQVar8->x;
  (this->fields).rotation.y = fVar5;
  (this->fields).rotation.z = fVar10;
  (this->fields).rotation.w = fVar11;
code_?:
  (this->fields).jump = jump;
  return;
}


/* Boolean RotateToCameraDirection(Boolean, Boolean, Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::AvatarInputController_RotateToCameraDirection
               (bool didShoot,bool inGunOrForce,Vector3 velocity,MethodInfo *method)

{
  if (didShoot != 0) {
    VStack_1.x = velocity.x;
    VStack_1.y = velocity.y;
    VStack_1.z = velocity.z;
    fVar2 = (float10)func_?(&VStack_1,0);
    if ((float)fVar2 < _UNK_?) {
      return 1;
    }
  }
  if (inGunOrForce != 0) {
    VStack_1.x = velocity.x;
    VStack_1.y = velocity.y;
    VStack_1.z = velocity.z;
    fVar2 = (float10)func_?(&VStack_1,0);
    if (_UNK_? < (float)fVar2) {
      return 1;
    }
  }
  return 0;
}


/* Boolean RotateToCameraDirectionBecauseOfShooting(Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::
     AvatarInputController_RotateToCameraDirectionBecauseOfShooting
               (Vector3 velocity,MethodInfo *method)

{
  fVar1 = (float10)func_?(&velocity,0);
  return (float)fVar1 < _UNK_?;
}


/* Boolean RotateToCameraDirection(Vector3) */

bool Assembly-CSharp.dll::AvatarInputController::AvatarInputController_RotateToCameraDirection_1
               (Vector3 velocity,MethodInfo *method)

{
  fVar1 = (float10)func_?(&velocity,0);
  return _UNK_? < (float)fVar1;
}


/* Vector3 ToCameraDirection(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputController::AvatarInputController_ToCameraDirection
                    (Vector3 *__return_storage_ptr__,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&moveDirection,0);
  VStack_2.z = (float)fVar1;
  if (0.0 < (float)fVar1) {
    this = TypeInfo__AvatarInputController->static_fields->mainCamera;
    if (this != (Camera *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
        fVar4 = moveDirection.z;
        VStack_2.y = moveDirection.x;
        VStack_2.z = moveDirection.y;
        fVar5 = pQVar3->x;
        fVar6 = pQVar3->y;
        puVar7 = (undefined *)pQVar3->z;
        pQVar8 = (Quaternion__Class *)pQVar3->w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar7 = &UNK_?;
          pQVar8 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        rotation.y = fVar6;
        rotation.x = fVar5;
        rotation.z = (float)puVar7;
        rotation.w = (float)pQVar8;
        point.z = fVar4;
        point.x = VStack_2.y;
        point.y = VStack_2.z;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                  (&VStack_2,rotation,point,(MethodInfo *)0x0);
        puVar9 = (undefined8 *)func_?();
        uVar10 = *puVar9;
        fVar5 = *(float *)(puVar9 + 1);
        __return_storage_ptr__->x = (float)(int)uVar10;
        __return_storage_ptr__->y = (float)(int)((ulonglong)uVar10 >> 0x20);
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar11 = (code *)swi(3);
    pVVar12 = (Vector3 *)(*pcVar11)();
    return pVVar12;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).direction.x = pVVar1->x;
  (this->fields).direction.y = fVar2;
  (this->fields).direction.z = fVar3;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar3 = pQVar4->y;
  fVar2 = pQVar4->z;
  fVar5 = pQVar4->w;
  (this->fields).rotation.x = pQVar4->x;
  (this->fields).rotation.y = fVar3;
  (this->fields).rotation.z = fVar2;
  (this->fields).rotation.w = fVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_6);
  pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  TypeInfo__AvatarInputController->static_fields->mainCamera = pCVar7;
  return;
}

