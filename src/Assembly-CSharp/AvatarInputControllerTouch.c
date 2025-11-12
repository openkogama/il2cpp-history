
/* Vector3 GetBiasedDirection(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerTouch::
          AvatarInputControllerTouch_GetBiasedDirection
                    (Vector3 *__return_storage_ptr__,AvatarInputControllerTouch *this,
                    Vector3 *absoluteDirection,Vector3 *testDirection,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (absoluteDirection,(MethodInfo *)this);
  uVar1 = absoluteDirection->x;
  uVar2 = absoluteDirection->y;
  uStack_3._0_4_ = testDirection->x;
  uStack_3._4_4_ = testDirection->y;
  fVar4 = (float)uVar2 * uStack_3._4_4_ + (float)uVar1 * (float)uStack_3 +
           absoluteDirection->z * testDirection->z;
  if (fVar4 <= 0.0) {
    uVar5._0_4_ = absoluteDirection->x;
    uVar5._4_4_ = absoluteDirection->y;
    fVar4 = absoluteDirection->z;
  }
  else {
    pAVar6 = (this->fields).settings;
    if ((pAVar6 == (AvatarInputControllerTouchSettings *)0x0) ||
       (obj = (pAVar6->fields).dotEvaluator, obj == (AnimationCurve *)0x0)) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pvVar9 = (obj->fields).m_Ptr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcRam_? = pcVar7;
    uVar10 = testDirection->x;
    uVar11 = testDirection->y;
    uVar5 = CONCAT44(uVar2,fVar4);
    uStack_3._0_4_ = absoluteDirection->x;
    uStack_3._4_4_ = absoluteDirection->y;
    fVar4 = (float)(*pcRam_?)(pvVar9,uVar5);
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    fVar12 = ((float)uVar10 - (float)uStack_3) * fVar4 + (float)uStack_3;
    fVar13 = ((float)uVar11 - uStack_3._4_4_) * fVar4 + uStack_3._4_4_;
    fVar4 = (testDirection->z - absoluteDirection->z) * fVar4 + absoluteDirection->z;
    uStack_3 = CONCAT44(fVar13,fVar12);
    fStack_14 = fVar4;
    fVar15 = (float)FUN_?(&uStack_3);
    if (_UNK_? < fVar15) {
      fVar4 = fVar4 / fVar15;
      uVar5 = CONCAT44(fVar13 / fVar15,fVar12 / fVar15);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5._0_4_ = (pVVar16->zeroVector).x;
      uVar5._4_4_ = (pVVar16->zeroVector).y;
      fVar4 = (pVVar16->zeroVector).z;
    }
  }
  __return_storage_ptr__->x = (float)(int)uVar5;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion GetCameraYRotation() */

Quaternion *
Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_GetCameraYRotation
          (Quaternion *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
  if ((this == (Camera *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&QStack_3);
  aQStack_6[0].x = QStack_3.x;
  aQStack_6[0].y = QStack_3.y;
  aQStack_6[0].z = QStack_3.z;
  aQStack_6[0].w = QStack_3.w;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     ((Vector3 *)&QStack_3,aQStack_6,in_R8);
  lStack_8 = (ulonglong)(uint)(pVVar7->y * _UNK_?) << 0x20;
  uStack_9 = 0;
  aQStack_6[0].x = 0.0;
  aQStack_6[0].y = 0.0;
  aQStack_6[0].z = 0.0;
  aQStack_6[0].w = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&lStack_8,aQStack_6);
  __return_storage_ptr__->x = aQStack_6[0].x;
  __return_storage_ptr__->y = aQStack_6[0].y;
  __return_storage_ptr__->z = aQStack_6[0].z;
  __return_storage_ptr__->w = aQStack_6[0].w;
  return __return_storage_ptr__;
}


/* Vector3 GetDirectionBias(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerTouch::
          AvatarInputControllerTouch_GetDirectionBias
                    (Vector3 *__return_storage_ptr__,AvatarInputControllerTouch *this,
                    Vector3 *absolutDirection,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar2->forwardVector).x;
  VStack_3.y = (pVVar2->forwardVector).y;
  VStack_3.z = (pVVar2->forwardVector).z;
  VStack_4.x = absolutDirection->x;
  VStack_4.y = absolutDirection->y;
  VStack_4.z = absolutDirection->z;
  pVVar5 = AvatarInputControllerTouch_GetBiasedDirection
                     (&VStack_6,this,&VStack_4,&VStack_3,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  uVar7._0_4_ = pVVar5->x;
  uVar7._4_4_ = pVVar5->y;
  fVar8 = pVVar5->z;
  __return_storage_ptr__->x = (float)uVar7;
  __return_storage_ptr__->y = uVar7._4_4_;
  __return_storage_ptr__->z = fVar8;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar2->leftVector).x;
  VStack_4.y = (pVVar2->leftVector).y;
  VStack_4.z = (pVVar2->leftVector).z;
  VStack_3._0_8_ = uVar7;
  VStack_3.z = fVar8;
  pVVar5 = AvatarInputControllerTouch_GetBiasedDirection
                     (&VStack_6,this,&VStack_3,&VStack_4,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  uVar9._0_4_ = pVVar5->x;
  uVar9._4_4_ = pVVar5->y;
  fVar8 = pVVar5->z;
  __return_storage_ptr__->x = (float)uVar9;
  __return_storage_ptr__->y = uVar9._4_4_;
  __return_storage_ptr__->z = fVar8;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar2->rightVector).x;
  VStack_4.y = (pVVar2->rightVector).y;
  VStack_4.z = (pVVar2->rightVector).z;
  VStack_3._0_8_ = uVar9;
  VStack_3.z = fVar8;
  pVVar5 = AvatarInputControllerTouch_GetBiasedDirection
                     (&VStack_6,this,&VStack_3,&VStack_4,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  uVar10._0_4_ = pVVar5->x;
  uVar10._4_4_ = pVVar5->y;
  fVar8 = pVVar5->z;
  __return_storage_ptr__->x = (float)uVar10;
  __return_storage_ptr__->y = uVar10._4_4_;
  __return_storage_ptr__->z = fVar8;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar2->backVector).x;
  VStack_4.y = (pVVar2->backVector).y;
  VStack_4.z = (pVVar2->backVector).z;
  VStack_3._0_8_ = uVar10;
  VStack_3.z = fVar8;
  pVVar5 = AvatarInputControllerTouch_GetBiasedDirection
                     (&VStack_6,this,&VStack_3,&VStack_4,(MethodInfo *)0x0);
  fVar11 = pVVar5->y;
  fVar8 = pVVar5->z;
  __return_storage_ptr__->x = pVVar5->x;
  __return_storage_ptr__->y = fVar11;
  __return_storage_ptr__->z = fVar8;
  return __return_storage_ptr__;
}


/* Quaternion GetRotationMoveDirection(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_GetRotationMoveDirection
          (Quaternion *__return_storage_ptr__,Vector3 *moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->upVector).x;
  uStack_2._4_4_ = (pVVar1->upVector).y;
  fStack_3 = (pVVar1->upVector).z;
  uStack_4._0_4_ = moveDirection->x;
  uStack_4._4_4_ = moveDirection->y;
  fStack_5 = moveDirection->z;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pQVar10 = (Quaternion *)(*pcVar8)();
    return pQVar10;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&uStack_4,&uStack_2,&uStack_6);
  __return_storage_ptr__->x = (float)(undefined4)uStack_6;
  __return_storage_ptr__->y = (float)uStack_6._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_7;
  __return_storage_ptr__->w = (float)uStack_7._4_4_;
  return __return_storage_ptr__;
}


/* Void HandleDead() */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_HandleDead
               (AvatarInputControllerTouch *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).jump = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).direction.x = (pVVar2->zeroVector).x;
  (this->fields).direction.y = fVar3;
  (this->fields).direction.z = fVar4;
  return;
}


/* Void HandleInput(Vector3, Boolean, Boolean, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_HandleInput
               (AvatarInputControllerTouch *this,Vector3 *moveDirection,bool jump,bool didShoot,
               Vector3 *velocity,bool inGunMode,bool forceRotateToCamDirection,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
            ((Vector3 *)&uStack_1,moveDirection,(MethodInfo *)CONCAT71(in_register_00000081,jump));
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  _Stack_78 = *(_union_86 *)&TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  fStack_2 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
  _Stack_68 = *(_union_86 *)moveDirection;
  fStack_3 = moveDirection->z;
  p_Var4 = (_union_86 *)
           AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&uStack_1,this,(Vector3 *)&_Stack_68,(Vector3 *)&_Stack_78,
                      (MethodInfo *)0x0);
  _Var1 = *p_Var4;
  fVar4 = (float)p_Var4[1].__klassIndex;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  _Stack_68 = *(_union_86 *)&TypeInfo__UnityEngine__Vector3->static_fields->leftVector;
  fStack_3 = (TypeInfo__UnityEngine__Vector3->static_fields->leftVector).z;
  _Stack_78 = _Var1;
  fStack_2 = fVar4;
  p_Var4 = (_union_86 *)
           AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&uStack_1,this,(Vector3 *)&_Stack_78,(Vector3 *)&_Stack_68,
                      (MethodInfo *)0x0);
  _Var1 = *p_Var4;
  fVar4 = (float)p_Var4[1].__klassIndex;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  _Stack_68 = *(_union_86 *)&TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  fStack_3 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z;
  _Stack_78 = _Var1;
  fStack_2 = fVar4;
  p_Var4 = (_union_86 *)
           AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&uStack_1,this,(Vector3 *)&_Stack_78,(Vector3 *)&_Stack_68,
                      (MethodInfo *)0x0);
  _Var1 = *p_Var4;
  fVar4 = (float)p_Var4[1].__klassIndex;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  _Stack_68 = *(_union_86 *)&TypeInfo__UnityEngine__Vector3->static_fields->backVector;
  fStack_3 = (TypeInfo__UnityEngine__Vector3->static_fields->backVector).z;
  _Stack_78 = _Var1;
  fStack_2 = fVar4;
  p_Var4 = (_union_86 *)
           AvatarInputControllerTouch_GetBiasedDirection
                     ((Vector3 *)&uStack_1,this,(Vector3 *)&_Stack_78,(Vector3 *)&_Stack_68,
                      (MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  _Stack_68 = *p_Var4;
  fStack_3 = (float)p_Var4[1].__klassIndex;
  p_Var4 = (_union_86 *)
           AvatarInputControllerTouch_ToCameraDirection
                     (&VStack_5,(Vector3 *)&_Stack_68,(MethodInfo *)0x0);
  _Var1 = *p_Var4;
  fVar4 = *(float *)(p_Var4 + 1);
  uStack_1 = _Var1;
  if (inGunMode == 0 && forceRotateToCamDirection == 0) {
    _Stack_68 = _Var1;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    _Var2 = *(_union_86 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    fVar6 = (float)_Stack_68.__klassIndex - _Var2._0_4_;
    fVar7 = (float)_Stack_68._4_4_ - _Var2._4_4_;
    fVar8 = fVar4 - (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    p_Var4 = (_union_86 *)TypeInfo__UnityEngine__Vector3;
    _Stack_68 = _Var2;
    if (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 < _UNK_?)
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    _Stack_68 = *(_union_86 *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    fStack_3 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    _Stack_38.dummy = (void *)0x0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    _Stack_78 = _Var1;
    fStack_2 = fVar4;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    p_Var4 = &_Stack_68;
    (*pcRam_?)(&_Stack_78,p_Var4,&_Stack_38);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AvatarInputControllerTouch);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
    if ((this_00 == (Camera *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    _Stack_38.dummy = (void *)0x0;
    uStack_9 = 0;
    pvVar12 = (obj->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar12,&_Stack_38);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_5,(Quaternion *)&_Stack_38,method_00);
    _Stack_68.dummy = (void *)((ulonglong)(uint)(pVVar13->y * _UNK_?) << 0x20);
    fStack_3 = 0.0;
    _Stack_38.dummy = (void *)0x0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    p_Var4 = &_Stack_38;
    (*pcRam_?)(&_Stack_68);
  }
  (this->fields).rotation.x = (float)_Stack_38.__klassIndex;
  (this->fields).rotation.y = (float)_Stack_38._4_4_;
  (this->fields).rotation.z = (float)uStack_9;
  (this->fields).rotation.w = uStack_9._4_4_;
code_?:
  fVar8 = (float)FUN_?(moveDirection);
  (this->fields).direction.x = (float)uStack_1 * fVar8;
  (this->fields).direction.y = uStack_1._4_4_ * fVar8;
  (this->fields).direction.z = fVar4 * fVar8;
  fVar4 = (float)FUN_?(&this->fields);
  if (_UNK_? < fVar4) {
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (&(this->fields).direction,(MethodInfo *)p_Var4);
  }
  (this->fields).jump = jump;
  return;
}


/* Vector3 ToCameraDirection(Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarInputControllerTouch::
          AvatarInputControllerTouch_ToCameraDirection
                    (Vector3 *__return_storage_ptr__,Vector3 *moveDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (float)FUN_?(moveDirection);
  if (0.0 < fVar1) {
    this = TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera;
    if ((this == (Camera *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    uStack_5 = 0;
    pvVar6 = (obj->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar6,&uStack_4);
    uVar8 = moveDirection->x;
    uVar9 = moveDirection->y;
    fVar10 = (float)uStack_5 + (float)uStack_5;
    fVar11 = uStack_4._4_4_ + uStack_4._4_4_;
    fVar1 = (_UNK_? - ((float)uStack_5 * fVar10 + uStack_4._4_4_ * fVar11)) * (float)uVar8
            + ((float)uStack_4 * fVar11 - uStack_5._4_4_ * fVar10) * (float)uVar9 +
            (uStack_5._4_4_ * fVar11 + (float)uStack_4 * fVar10) * moveDirection->z;
    fVar11 = (uStack_4._4_4_ * fVar10 + uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4)) *
             (float)uVar9 + ((float)uStack_4 * fVar10 - uStack_5._4_4_ * fVar11) * (float)uVar8 +
             (_UNK_? -
             ((float)uStack_4 * ((float)uStack_4 + (float)uStack_4) + uStack_4._4_4_ * fVar11))
             * moveDirection->z;
    uStack_5 = CONCAT44(uStack_5._4_4_,fVar11);
    uStack_4 = (ulonglong)(uint)fVar1;
    fVar10 = (float)FUN_?(&uStack_4);
    if (_UNK_? < fVar10) {
      fVar1 = fVar1 / fVar10;
      fVar12 = 0.0 / fVar10;
      fVar11 = fVar11 / fVar10;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar1 = (pVVar13->zeroVector).x;
      fVar12 = (pVVar13->zeroVector).y;
      fVar11 = (pVVar13->zeroVector).z;
    }
    moveDirection->x = fVar1;
    moveDirection->y = fVar12;
    moveDirection->z = fVar11;
  }
  fVar1 = moveDirection->z;
  fVar11 = moveDirection->y;
  __return_storage_ptr__->x = moveDirection->x;
  __return_storage_ptr__->y = fVar11;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* AvatarInputControllerTouch() */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch__ctor
               (AvatarInputControllerTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarInputControllerTouchSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerTouchSettings>_AvatarInputControllerTouchSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).direction.x = (pVVar2->zeroVector).x;
  (this->fields).direction.y = fVar3;
  (this->fields).direction.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields).rotation.x = (pQVar5->identityQuaternion).x;
  (this->fields).rotation.y = fVar4;
  (this->fields).rotation.z = fVar3;
  (this->fields).rotation.w = fVar6;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar9 = (pPVar7->fields).avatarInputControllerTouchSettings;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar9 = (AvatarInputControllerTouchSettings *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar9,
                       AvatarInputControllerTouchSettings_MethodInfo__UnityEngine__Object__Instantiate<AvatarInputControllerTouchSettings>_AvatarInputControllerTouchSettings_
                      );
  bVar1 = iRam_? != 0;
  (this->fields).settings = pAVar9;
  if (bVar1) {
    uVar10 = (uint)((ulonglong)&(this->fields).settings >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar1 = uVar12 == *puVar13;
      if (bVar1) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  TypeInfo__AvatarInputControllerTouch->static_fields->mainCamera = pCVar14;
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)TypeInfo__AvatarInputControllerTouch->static_fields >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar1 = uVar12 == *puVar13;
      if (bVar1) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::AvatarInputControllerTouch::AvatarInputControllerTouch_set_Rotation
               (AvatarInputControllerTouch *this,Quaternion *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  fVar3 = value->w;
  (this->fields).rotation.x = value->x;
  (this->fields).rotation.y = fVar1;
  (this->fields).rotation.z = fVar2;
  (this->fields).rotation.w = fVar3;
  return;
}

