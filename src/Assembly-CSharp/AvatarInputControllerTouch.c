
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
  func_?(&stack0xffffffb8,&moveDirection,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  VVar1.y = moveDirection.y;
  VVar1.x = moveDirection.x;
  VVar1.z = moveDirection.z;
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xffffffb8,this,VVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  VVar1 = *pVVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xffffffb8,this,VVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  VVar1 = *pVVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xffffffb8,this,VVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  uVar3 = pVVar2->y;
  uVar4._0_4_ = pVVar2->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  auVar5._4_4_ = (float)uVar4;
  auVar5._0_4_ = uVar3;
  auVar5._8_4_ = 0;
  pVVar2 = AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&stack0xffffffb8,this,(Vector3)(auVar5 << 0x20),
                      TypeInfo__UnityEngine__Vector3->static_fields->backVector,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar2->x;
  fStack_6 = pVVar2->y;
  fVar7 = pVVar2->z;
  VVar1 = *pVVar2;
  fVar8 = (float)uVar4;
  fVar9 = fStack_6;
  fVar10 = fVar7;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar11 = (float10)func_?();
  fVar12 = 0.0;
  if (0.0 < (float)fVar11) {
    pCVar13 = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
    if (pCVar13 == (Camera *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff90,pTVar14,(MethodInfo *)0x0);
    moveDirection.z = 0.0;
    moveDirection.x = fStack_6;
    moveDirection.y = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffd8,*pQVar15,VVar1,(MethodInfo *)0x0);
    moveDirection.z = 0.0;
    moveDirection.y = (float)&stack0xffffffbc;
    moveDirection.x = (float)&stack0xffffffa8;
    puVar16 = (undefined8 *)func_?();
    uVar4 = *puVar16;
    fVar7 = *(float *)(puVar16 + 1);
    fVar8 = (float)uVar4;
    fVar9 = SUB84(uVar4,4);
    fVar10 = fVar7;
  }
  if (inGunMode == 0 && forceRotateToCamDirection == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar18 = (pVVar17->zeroVector).x;
    uVar19 = (pVVar17->zeroVector).y;
    fVar12 = fVar10 - (pVVar17->zeroVector).z;
    if ((fVar9 - (float)uVar19) * (fVar9 - (float)uVar19) +
        (fVar8 - (float)uVar18) * (fVar8 - (float)uVar18) + fVar12 * fVar12 < _UNK_?)
    goto code_?;
    forward.z = fVar7;
    forward.x = (float)uVar4;
    forward.y = fStack_6;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffff80,forward,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pCVar13 = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
    if (pCVar13 == (Camera *)0x0) {
code_?:
      func_?();
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    moveDirection.y = 0.0;
    moveDirection.x = (float)pTVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffa8,pTVar14,(MethodInfo *)0x0);
    moveDirection.y = 0.0;
    moveDirection.x = (float)&stack0xffffffb8;
    iVar21 = func_?();
    euler.y = *(float *)(iVar21 + 4) * _UNK_?;
    euler.x = fVar12;
    euler.z = 0.0;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffff80,euler,(MethodInfo *)0x0);
  }
  uVar4._0_4_ = pQVar15->y;
  fVar7 = pQVar15->z;
  fVar12 = pQVar15->w;
  (this->fields).rotation.x = pQVar15->x;
  (this->fields).rotation.y = (float)uVar4;
  (this->fields).rotation.z = fVar7;
  (this->fields).rotation.w = fVar12;
code_?:
  fVar11 = (float10)func_?();
  uVar4._0_4_ = (float)fVar11;
  (this->fields).direction.x = fVar8 * (float)uVar4;
  (this->fields).direction.y = fVar9 * (float)uVar4;
  (this->fields).direction.z = fVar10 * (float)uVar4;
  fVar11 = (float10)func_?();
  if (_UNK_? < (float)fVar11) {
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (&(this->fields).direction,(MethodInfo *)0x0);
  }
  (this->fields).jump = jump;
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
  fVar1 = (float10)func_?(&moveDirection,0);
  if (0.0 < (float)fVar1) {
    this = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
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
    (this->fields).settings = pAVar7;
    func_?(&(this->fields).settings,pAVar7);
    pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera = pCVar8;
    func_?(TypeInfo__AvatarInputControllerTouch->static_fields,pCVar8);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

