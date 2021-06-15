
/* Vector3 GetBiasedDirection(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerAndroid::
          AvatarInputControllerAndroid_GetBiasedDirection
                    (Vector3 *__return_storage_ptr__,AvatarInputControllerAndroid *this,
                    Vector3 absoluteDirection,Vector3 testDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&absoluteDirection,0);
  fVar1 = absoluteDirection.z;
  fVar2 = absoluteDirection.x;
  fVar3 = absoluteDirection.y;
  uVar4 = absoluteDirection._0_8_;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
    uVar4._4_4_ = fVar3;
    uVar4._0_4_ = fVar2;
  }
  fVar2 = testDirection.z;
  lhs.z = testDirection.z;
  lhs.x = testDirection.x;
  lhs.y = testDirection.y;
  rhs.z = fVar1;
  rhs.x = (float)uVar4;
  rhs.y = SUB84(uVar4,4);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,rhs,(MethodInfo *)0x0);
  if (0.0 < fVar1) {
    pAVar5 = (this->fields).settings;
    if ((pAVar5 != (AvatarInputControllerAndroidSettings *)0x0) &&
       (this_00 = (pAVar5->fields).dotEvaluator, this_00 != (AnimationCurve *)0x0)) {
      t = (undefined *)
          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                    (this_00,fVar1,(MethodInfo *)0x0);
      fVar1 = absoluteDirection.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        t = &UNK_?;
        func_?();
      }
      a.z = fVar1;
      a.x = testDirection.x;
      a.y = testDirection.y;
      b.z = fVar2;
      b.x = testDirection.x;
      b.y = testDirection.y;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                (&testDirection,a,b,(float)t,(MethodInfo *)0x0);
      puVar6 = (undefined8 *)func_?();
      uVar4 = *puVar6;
      fVar1 = *(float *)(puVar6 + 1);
      __return_storage_ptr__->x = (float)(int)uVar4;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
      __return_storage_ptr__->z = fVar1;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  __return_storage_ptr__->x = absoluteDirection.x;
  __return_storage_ptr__->y = absoluteDirection.y;
  __return_storage_ptr__->z = absoluteDirection.z;
  return __return_storage_ptr__;
}


/* Quaternion GetCameraYRotation() */

Quaternion *
Assembly-CSharp.dll::AvatarInputControllerAndroid::AvatarInputControllerAndroid_GetCameraYRotation
          (Quaternion *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__AvatarInputControllerAndroid->static_fields->mainCamera;
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


/* Vector3 GetDirectionBias(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerAndroid::
          AvatarInputControllerAndroid_GetDirectionBias
                    (Vector3 *__return_storage_ptr__,AvatarInputControllerAndroid *this,
                    Vector3 absolutDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  absoluteDirection_02.y = absolutDirection.y;
  absoluteDirection_02.x = absolutDirection.x;
  absoluteDirection_02.z = absolutDirection.z;
  pVVar1 = AvatarInputControllerAndroid_GetBiasedDirection
                     ((Vector3 *)&stack0xfffffff0,this,absoluteDirection_02,*pVVar1,
                      (MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  absolutDirection.y = (float)uVar2;
  absolutDirection.z = (float)uVar3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar5 = absolutDirection.z;
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  absoluteDirection.y = absolutDirection.z;
  absoluteDirection.x = (float)uVar7;
  absoluteDirection.z = fVar4;
  absolutDirection.x = (float)uVar6;
  absolutDirection.y = (float)uVar7;
  absolutDirection.z = pVVar1->z;
  pVVar1 = AvatarInputControllerAndroid_GetBiasedDirection
                     ((Vector3 *)&stack0xfffffff0,this,absoluteDirection,*pVVar1,(MethodInfo *)0x0);
  __return_storage_ptr___00 = pVVar1->y;
  fVar4 = pVVar1->z;
  absolutDirection.y = (float)&UNK_?;
  absolutDirection.z = (float)__return_storage_ptr___00;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)__return_storage_ptr___00,(MethodInfo *)0x0);
  absoluteDirection_00.y = absolutDirection.z;
  absoluteDirection_00.x = absolutDirection.y;
  absoluteDirection_00.z = fVar4;
  pVVar1 = AvatarInputControllerAndroid_GetBiasedDirection
                     ((Vector3 *)&stack0xfffffff0,this,absoluteDirection_00,*pVVar1,
                      (MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  fVar4 = pVVar1->z;
  absolutDirection.y = (float)uVar8;
  absolutDirection.z = (float)uVar9;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  absoluteDirection_01.y = absolutDirection.z;
  absoluteDirection_01.x = absolutDirection.y;
  absoluteDirection_01.z = fVar4;
  pVVar1 = AvatarInputControllerAndroid_GetBiasedDirection
                     (&absolutDirection,this,absoluteDirection_01,*pVVar1,(MethodInfo *)0x0);
  fVar4 = pVVar1->z;
  *(undefined8 *)fVar5 = *(undefined8 *)pVVar1;
  *(float *)((int)fVar5 + 8) = fVar4;
  return (Vector3 *)fVar5;
}


/* Quaternion GetRotationMoveDirection(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarInputControllerAndroid::
AvatarInputControllerAndroid_GetRotationMoveDirection
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


/* Void HandleDead() */

void Assembly-CSharp.dll::AvatarInputControllerAndroid::AvatarInputControllerAndroid_HandleDead
               (AvatarInputControllerAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).jump = 0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).direction.x = pVVar1->x;
  (this->fields).direction.y = fVar3;
  (this->fields).direction.z = fVar4;
  return;
}


/* Void HandleInput(Vector3, Boolean, Boolean, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarInputControllerAndroid::AvatarInputControllerAndroid_HandleInput
               (AvatarInputControllerAndroid *this,Vector3 moveDirection,bool jump,bool didShoot,
               Vector3 velocity,bool inGunMode,bool forceRotateToCamDirection,MethodInfo *method)

{
  _jump = (Vector3 *)(uint)jump;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&uStack_1,&moveDirection,0);
  fVar2 = moveDirection.z;
  uVar3 = moveDirection._0_8_;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                      ((Vector3 *)&uStack_1,(MethodInfo *)0x0);
  absoluteDirection.z = fVar2;
  absoluteDirection.x = (float)uVar3;
  absoluteDirection.y = SUB84(uVar3,4);
  pVVar4 = AvatarInputControllerAndroid_GetBiasedDirection
                      ((Vector3 *)&stack0xffffffc8,this,absoluteDirection,*pVVar4,(MethodInfo *)0x0
                      );
  uVar3._0_4_ = pVVar4->x;
  uVar3._4_4_ = pVVar4->y;
  fVar2 = pVVar4->z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                      ((Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
  absoluteDirection_00.z = fVar2;
  absoluteDirection_00.x = (float)uVar3;
  absoluteDirection_00.y = SUB84(uVar3,4);
  pVVar4 = AvatarInputControllerAndroid_GetBiasedDirection
                      ((Vector3 *)&stack0xffffffb0,this,absoluteDirection_00,*pVVar4,
                       (MethodInfo *)0x0);
  uVar5._0_4_ = pVVar4->x;
  uVar5._4_4_ = pVVar4->y;
  fVar2 = pVVar4->z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                      ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
  absoluteDirection_01.z = fVar2;
  absoluteDirection_01.x = (float)uVar5;
  absoluteDirection_01.y = SUB84(uVar5,4);
  pVVar4 = AvatarInputControllerAndroid_GetBiasedDirection
                      ((Vector3 *)&stack0xffffff90,this,absoluteDirection_01,*pVVar4,
                       (MethodInfo *)0x0);
  fVar2 = pVVar4->z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                      ((Vector3 *)&puStack_6,(MethodInfo *)0x0);
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  absoluteDirection_02.y = (float)uVar8;
  absoluteDirection_02.x = (float)uVar7;
  uStack_1._4_4_ = (float)&UNK_?;
  absoluteDirection_02.z = fVar2;
  pVVar4 = AvatarInputControllerAndroid_GetBiasedDirection
                      ((Vector3 *)&stack0xffffffec,this,absoluteDirection_02,*pVVar4,
                       (MethodInfo *)0x0);
  fVar2 = pVVar4->x;
  fVar9 = pVVar4->y;
  fVar10 = pVVar4->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fVar11 = (float10)func_?();
  if ((float)fVar11 <= 0.0) {
    uVar12._4_4_ = fVar9;
    uVar12._0_4_ = fVar2;
  }
  else {
    pCVar13 = TypeInfo__AvatarInputControllerAndroid->static_fields->mainCamera;
    if (pCVar13 == (Camera *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff9c,pTVar14,(MethodInfo *)0x0);
    fStack_16 = pQVar15->x;
    puStack_6 = (undefined *)pQVar15->y;
    fVar17 = pQVar15->z;
    fVar18 = pQVar15->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    _jump = (Vector3 *)&puStack_6;
    moveDirection.z = (float)&UNK_?;
    rotation.y = (float)puStack_6;
    rotation.x = fStack_16;
    rotation.z = fVar17;
    rotation.w = fVar18;
    point.y = fVar9;
    point.x = fVar2;
    point.z = fVar10;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (_jump,rotation,point,(MethodInfo *)0x0);
    uVar19._0_4_ = pVVar4->x;
    uVar19._4_4_ = pVVar4->y;
    forceRotateToCamDirection = (bool)&stack0xffffff90;
    uStack_1 = uVar19 & 0xffffffff;
    inGunMode = 0x55;
    puVar20 = (undefined8 *)func_?();
    uVar12 = *puVar20;
    fVar10 = *(float *)(puVar20 + 1);
  }
  if ((inGunMode == 0) && (forceRotateToCamDirection == 0)) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        ((Vector3 *)&puStack_6,(MethodInfo *)0x0);
    jump = 0xdd;
    bVar21 = jump;
    jump = 0xdd;
    lhs.z = fVar10;
    lhs.x = (float)uVar12;
    lhs.y = SUB84(uVar12,4);
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                       (lhs,*pVVar4,(MethodInfo *)0x0);
    if (bVar22 == 0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    forward.z = fVar10;
    forward.x = (float)uVar12;
    forward.y = SUB84(uVar12,4);
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&fStack_16,forward,(MethodInfo *)0x0);
    jump = bVar21;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pCVar13 = TypeInfo__AvatarInputControllerAndroid->static_fields->mainCamera;
    if (pCVar13 == (Camera *)0x0) {
code_?:
      func_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffff9c,pTVar14,(MethodInfo *)0x0);
    puVar24 = (ulonglong *)func_?();
    uStack_1 = *puVar24;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                        ((Quaternion *)&puStack_25,0.0,uStack_1._4_4_,0.0,(MethodInfo *)0x0);
  }
  fVar2 = pQVar15->y;
  fVar9 = pQVar15->z;
  fVar17 = pQVar15->w;
  (this->fields).rotation.x = pQVar15->x;
  (this->fields).rotation.y = fVar2;
  (this->fields).rotation.z = fVar9;
  (this->fields).rotation.w = fVar17;
code_?:
  fVar11 = (float10)func_?();
  fVar2 = (float)fVar11;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar10;
  a.x = (float)uVar12;
  a.y = SUB84(uVar12,4);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&puStack_6,a,fVar2,(MethodInfo *)0x0);
  pAVar26 = &this->fields;
  fVar9 = pVVar4->y;
  fVar2 = pVVar4->z;
  (pAVar26->direction).x = pVVar4->x;
  (pAVar26->direction).y = fVar9;
  (this->fields).direction.z = fVar2;
  fVar11 = (float10)func_?();
  if (_UNK_? < (float)fVar11) {
    uStack27 = 0;
    pAStack28 = pAVar26;
    func_?();
  }
  (this->fields).jump = jump;
  return;
}


/* Vector3 ToCameraDirection(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerAndroid::
          AvatarInputControllerAndroid_ToCameraDirection
                    (Vector3 *__return_storage_ptr__,Vector3 moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&moveDirection,0);
  VStack_2.z = (float)fVar1;
  if (0.0 < (float)fVar1) {
    this = TypeInfo__AvatarInputControllerAndroid->static_fields->mainCamera;
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


/* AvatarInputControllerAndroid() */

void Assembly-CSharp.dll::AvatarInputControllerAndroid::AvatarInputControllerAndroid__ctor
               (AvatarInputControllerAndroid *this,MethodInfo *method)

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
    func_?(TypeInfo__UnityEngine__Quaternion);
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
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pXVar7 = (XpBoostParticlePreviewer *)
             PrefabPool::PrefabPool_get_AvatarInputControllerAndroidSettings
                       (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar7,
                        AvatarInputControllerAndroidSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerAndroidSettings>_AvatarInputControllerAndroidSettings_
                       );
    (this->fields).settings = (AvatarInputControllerAndroidSettings *)pXVar7;
    pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    TypeInfo__AvatarInputControllerAndroid->static_fields->mainCamera = pCVar8;
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::AvatarInputControllerAndroid::AvatarInputControllerAndroid_set_Rotation
               (AvatarInputControllerAndroid *this,Quaternion value,MethodInfo *method)

{
  (this->fields).rotation.x = value.x;
  (this->fields).rotation.y = value.y;
  (this->fields).rotation.z = value.z;
  (this->fields).rotation.w = value.w;
  return;
}

