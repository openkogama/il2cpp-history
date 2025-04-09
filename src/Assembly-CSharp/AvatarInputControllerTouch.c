
/* Vector3 GetBiasedDirection(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerTouch::
          AvatarInputControllerTouch_GetBiasedDirection
                    (Vector3 *__return_storage_ptr__,AvatarInputControllerTouch *this,
                    Vector3 absoluteDirection,Vector3 testDirection,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&absoluteDirection,(MethodInfo *)0x0);
  fVar1 = absoluteDirection.y * testDirection.y + absoluteDirection.x * testDirection.x +
          testDirection.z * absoluteDirection.z;
  if (fVar1 <= 0.0) {
    __return_storage_ptr__->x = absoluteDirection.x;
    __return_storage_ptr__->y = absoluteDirection.y;
    __return_storage_ptr__->z = absoluteDirection.z;
    return __return_storage_ptr__;
  }
  pAVar2 = (this->fields).settings;
  if ((pAVar2 != (AvatarInputControllerTouchSettings *)0x0) &&
     (this_00 = (pAVar2->fields).dotEvaluator, this_00 != (AnimationCurve *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,fVar1,(MethodInfo *)0x0);
    puVar3 = (undefined8 *)func_?();
    uVar4 = *puVar3;
    fVar1 = *(float *)(puVar3 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Quaternion GetCameraYRotation() */

Quaternion *
Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_GetCameraYRotation
          (Quaternion *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
    cRam_? = '\x01';
  }
  this = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
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


/* Vector3 GetDirectionBias(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerTouch::
          AvatarInputControllerTouch_GetDirectionBias
                    (Vector3 *__return_storage_ptr__,AvatarInputControllerTouch *this,
                    Vector3 absolutDirection,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  absoluteDirection_01.y = absolutDirection.y;
  absoluteDirection_01.x = absolutDirection.x;
  absoluteDirection_01.z = absolutDirection.z;
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xfffffff0,this,absoluteDirection_01,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  bVar1 = cRam_? == '\0';
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = (float)uVar3;
  __return_storage_ptr__->y = (float)uVar4;
  __return_storage_ptr__->z = fVar5;
  absolutDirection.y = (float)uVar3;
  absolutDirection.z = (float)uVar4;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  absoluteDirection_02.y = absolutDirection.z;
  absoluteDirection_02.x = absolutDirection.y;
  absoluteDirection_02.z = fVar5;
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xfffffff0,this,absoluteDirection_02,
                      TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  uVar6 = pVVar2->x;
  uVar7 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = (float)uVar6;
  __return_storage_ptr__->y = (float)uVar7;
  __return_storage_ptr__->z = fVar5;
  absolutDirection.y = (float)uVar6;
  absolutDirection.z = (float)uVar7;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  absolutDirection.x = (float)this;
  absoluteDirection.y = absolutDirection.z;
  absoluteDirection.x = absolutDirection.y;
  absoluteDirection.z = fVar5;
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xfffffff0,this,absoluteDirection,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  uVar8 = pVVar2->x;
  uVar9 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = (float)uVar8;
  __return_storage_ptr__->y = (float)uVar9;
  __return_storage_ptr__->z = fVar5;
  absolutDirection.y = (float)uVar8;
  absolutDirection.z = (float)uVar9;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  absoluteDirection_00.y = absolutDirection.z;
  absoluteDirection_00.x = absolutDirection.y;
  absoluteDirection_00.z = fVar5;
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     (&absolutDirection,this,absoluteDirection_00,
                      TypeInfo__UnityEngine__Vector3->static_fields->backVector,(MethodInfo *)0x0);
  fVar10 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar10;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Quaternion GetRotationMoveDirection(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_GetRotationMoveDirection
          (Quaternion *__return_storage_ptr__,Vector3 moveDirection,MethodInfo *method)

{
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


/* Void HandleDead() */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_HandleDead
               (AvatarInputControllerTouch *this,MethodInfo *method)

{
  (this->fields).jump = 0;
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
  return;
}


/* Void HandleInput(Vector3, Boolean, Boolean, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_HandleInput
               (AvatarInputControllerTouch *this,Vector3 moveDirection,bool jump,bool didShoot,
               Vector3 velocity,bool inGunMode,bool forceRotateToCamDirection,MethodInfo *method)

{
  func_?(&stack0xffffffa0,&moveDirection,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  absoluteDirection.y = moveDirection.y;
  absoluteDirection.x = moveDirection.x;
  absoluteDirection.z = moveDirection.z;
  pVVar1 = AvatarInputControllerTouch_GetBiasedDirection
                      ((Vector3 *)&stack0xffffffa0,this,absoluteDirection,
                       TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                       (MethodInfo *)0x0);
  fVar2 = pVVar1->x;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  absoluteDirection_00.y = fVar3;
  absoluteDirection_00.x = fVar2;
  absoluteDirection_00.z = fVar4;
  pVVar1 = AvatarInputControllerTouch_GetBiasedDirection
                      ((Vector3 *)&stack0xffffffd4,this,absoluteDirection_00,
                       TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fVar2 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  absoluteDirection_01.y = (float)uVar6;
  absoluteDirection_01.x = (float)uVar5;
  absoluteDirection_01.z = fVar2;
  pVVar1 = AvatarInputControllerTouch_GetBiasedDirection
                      (&moveDirection,this,absoluteDirection_01,
                       TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0)
  ;
  uVar7 = pVVar1->x;
  uVar8 = pVVar1->y;
  fVar2 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  absoluteDirection_02.y = (float)uVar8;
  absoluteDirection_02.x = (float)uVar7;
  absoluteDirection_02.z = fVar2;
  pVVar1 = AvatarInputControllerTouch_GetBiasedDirection
                      ((Vector3 *)&stack0x0000003c,this,absoluteDirection_02,
                       TypeInfo__UnityEngine__Vector3->static_fields->backVector,(MethodInfo *)0x0);
  uVar9 = pVVar1->x;
  uVar10 = pVVar1->y;
  fVar2 = pVVar1->z;
  moveDirection.z = (float)uVar9;
  velocity.z = (float)uVar9;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fStack11 = velocity.z;
  fStack12 = 0.0;
  fStack13 = 0.0;
  fStack14 = 0.0;
  dVar15 = (double)((float)uVar10 * (float)uVar10 + velocity.z * velocity.z + fVar2 * fVar2);
  if (dVar15 < 0.0) {
    func_?();
  }
  else {
    dVar15 = SQRT(dVar15);
  }
  fStack16 = 0.0;
  fStack17 = 0.0;
  fStack18 = 0.0;
  fStack19 = 0.0;
  _inGunMode = (float)uVar10;
  if (0.0 < (float)dVar15) {
    pCVar20 = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
    if (pCVar20 == (Camera *)0x0) goto code_?;
    pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar20,(MethodInfo *)0x0);
    if (pTVar21 == (Transform *)0x0) goto code_?;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0x00000048,pTVar21,(MethodInfo *)0x0);
    moveDirection.z = 0.0;
    moveDirection.x = (float)uVar10;
    point.y = (float)uVar10;
    point.x = velocity.z;
    point.z = fVar2;
    moveDirection.y = fVar2;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0x00000074,*pQVar22,point,(MethodInfo *)0x0);
    moveDirection.z = 0.0;
    uStack23._0_4_ = pVVar1->x;
    uStack23._4_4_ = pVVar1->y;
    fStack16 = pVVar1->z;
    moveDirection.y = (float)&uStack23;
    moveDirection.x = (float)&stack0x00000088;
    uStack23 = uStack23 & 0xffffffff;
    puVar24 = (undefined8 *)func_?();
    fVar2 = *(float *)(puVar24 + 1);
    moveDirection.z = (float)*puVar24;
    _jump = (float)((ulonglong)*puVar24 >> 0x20);
    fStack11 = moveDirection.z;
    fStack12 = 0.0;
    fStack13 = 0.0;
    fStack14 = 0.0;
    velocity.z = moveDirection.z;
    _inGunMode = _jump;
  }
  forceRotateToCamDirection = SUB41(fVar2,0);
  if (inGunMode == 0 && forceRotateToCamDirection == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26 = (pVVar25->zeroVector).x;
    uVar27 = (pVVar25->zeroVector).y;
    fStack28 = (pVVar25->zeroVector).z;
    if ((_inGunMode - (float)uVar27) * (_inGunMode - (float)uVar27) +
        (fStack11 - (float)uVar26) * (fStack11 - (float)uVar26) +
        (fVar2 - fStack28) * (fVar2 - fStack28) < _UNK_?) goto code_?;
    forward.y = _inGunMode;
    forward.x = moveDirection.z;
    forward.z = fVar2;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0x00000070,forward,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pCVar20 = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
    if (pCVar20 == (Camera *)0x0) {
code_?:
      func_?();
      pcVar29 = (code *)swi(3);
      (*pcVar29)();
      return;
    }
    pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar20,(MethodInfo *)0x0);
    if (pTVar21 == (Transform *)0x0) goto code_?;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&didShoot,pTVar21,(MethodInfo *)0x0);
    fStack12 = pQVar22->x;
    fStack13 = pQVar22->y;
    fStack14 = pQVar22->z;
    in_stack_30 = pQVar22->w;
    iVar31 = func_?();
    fStack28 = 0.0;
    euler.y = *(float *)(iVar31 + 4) * _UNK_?;
    euler.x = fStack16;
    euler.z = 0.0;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0x00000070,euler,(MethodInfo *)0x0);
  }
  fVar3 = pQVar22->y;
  fVar4 = pQVar22->z;
  fVar32 = pQVar22->w;
  (this->fields).rotation.x = pQVar22->x;
  (this->fields).rotation.y = fVar3;
  (this->fields).rotation.z = fVar4;
  (this->fields).rotation.w = fVar32;
code_?:
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar15 = (double)(moveDirection.y * moveDirection.y + moveDirection.x * moveDirection.x +
                   moveDirection.z * moveDirection.z);
  if (dVar15 < 0.0) {
    func_?();
  }
  else {
    dVar15 = SQRT(dVar15);
  }
  fVar3 = (float)dVar15;
  fStack28 = fVar2 * fVar3;
  this_00 = &this->fields;
  (this_00->direction).x = fStack11 * fVar3;
  (this_00->direction).y = _inGunMode * fVar3;
  (this->fields).direction.z = fStack28;
  fVar33 = (float10)func_?();
  moveDirection.z = (float)fVar33;
  if (_UNK_? < moveDirection.z) {
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (&this_00->direction,(MethodInfo *)0x0);
  }
  (this->fields).jump = inGunMode;
  return;
}


/* Vector3 ToCameraDirection(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerTouch::
          AvatarInputControllerTouch_ToCameraDirection
                    (Vector3 *__return_storage_ptr__,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
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
    this = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
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


/* AvatarInputControllerTouch() */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch__ctor
               (AvatarInputControllerTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerTouch);
    func_?(&
                    AvatarInputControllerTouchSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerTouchSettings>_AvatarInputControllerTouchSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
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
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar6 != (PrefabPool *)0x0) {
    pAVar7 = (pPVar6->fields).avatarInputControllerTouchSettings;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pAVar7 = (AvatarInputControllerTouchSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pAVar7,
                        AvatarInputControllerTouchSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerTouchSettings>_AvatarInputControllerTouchSettings_
                       );
    ppAVar8 = &(this->fields).settings;
    *ppAVar8 = pAVar7;
    func_?(ppAVar8,pAVar7);
    pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera = pCVar9;
    func_?(TypeInfo__AvatarInputControllerTouch->static_fields,pCVar9);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

