
/* Quaternion AddAndClampRotations(Quaternion, Quaternion) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_AddAndClampRotations
          (Quaternion *__return_storage_ptr__,LimbController *this,Quaternion rotation1,
          Quaternion rotation2,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  fVar1 = (rotation2.w * rotation1.x + rotation2.x * rotation1.w + rotation1.y * rotation2.z) -
          rotation1.z * rotation2.y;
  fVar2 = rotation1.z * rotation2.z;
  fVar3 = (rotation2.y * rotation1.w + rotation1.y * rotation2.w + rotation1.z * rotation2.x) -
          rotation2.z * rotation1.x;
  rotation2.z = (rotation1.z * rotation2.w + rotation2.z * rotation1.w + rotation2.y * rotation1.x)
                - rotation1.y * rotation2.x;
  rotation2.w = ((rotation2.w * rotation1.w - rotation1.x * rotation2.x) - rotation2.y * rotation1.y
                ) - fVar2;
  __return_storage_ptr__->x = fVar1;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = rotation2.z;
  __return_storage_ptr__->w = rotation2.w;
  rotation2.x = fVar1;
  rotation2.y = fVar3;
  puVar4 = (undefined8 *)func_?(&rotation1.y,__return_storage_ptr__,0);
  rotation2.y = (float)*puVar4;
  rotation2.z = (float)((ulonglong)*puVar4 >> 0x20);
  pfVar5 = &(this->fields).maxPitch;
  fVar1 = rotation2.y;
  if ((*pfVar5 <= rotation2.y && rotation2.y != *pfVar5) && (rotation2.y <= _UNK_?)) {
    fVar1 = (this->fields).maxPitch;
  }
  if ((fVar1 < _UNK_? - (this->fields).maxPitch) && (_UNK_? < fVar1)) {
    fVar1 = _UNK_? - (this->fields).maxPitch;
  }
  pfVar5 = &(this->fields).maxYaw;
  fVar3 = rotation2.z;
  if ((*pfVar5 <= rotation2.z && rotation2.z != *pfVar5) && (rotation2.z <= _UNK_?)) {
    fVar3 = (this->fields).maxYaw;
  }
  if ((fVar3 < _UNK_? - (this->fields).maxYaw) && (_UNK_? < fVar3)) {
    fVar3 = _UNK_? - (this->fields).maxYaw;
  }
  rotation2.w = *(float *)(puVar4 + 1) * _UNK_?;
  euler.y = fVar3 * _UNK_?;
  euler.x = fVar1 * _UNK_?;
  euler.z = rotation2.w;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&rotation2,euler,(MethodInfo *)0x0);
  fVar1 = pQVar6->y;
  fVar3 = pQVar6->z;
  fVar2 = pQVar6->w;
  __return_storage_ptr__->x = pQVar6->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar2;
  return __return_storage_ptr__;
}


/* Quaternion CalculateBlendedRotation() */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_CalculateBlendedRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,MethodInfo *method)

{
  this_00 = this;
  pTVar1 = (this->fields).limbTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar6 = (this->fields).avatarWO;
    if ((pMVar6 != (MVWorldObjectClient *)0x0) &&
       (pTVar1 = (pMVar6->fields).transform, pTVar1 != (Transform *)0x0)) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
      uVar7 = pVVar2->x;
      uVar8 = pVVar2->y;
      position.y = fVar4 + (float)uVar8;
      position.x = fVar3 + (float)uVar7;
      position.z = fVar5 + pVVar2->z;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          ((Vector3 *)&stack0xffffffb0,pTVar1,position,(MethodInfo *)0x0);
      uVar9 = pVVar2->x;
      uVar10 = pVVar2->y;
      fVar3 = pVVar2->z;
      fVar4 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(*pVVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar11 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                          ((Quaternion *)&stack0xffffffa0,fVar4,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      fVar4 = pQVar11->x;
      fVar5 = pQVar11->y;
      fVar12 = pQVar11->z;
      fVar13 = pQVar11->w;
      gradientDirection.y = (float)uVar10;
      gradientDirection.x = (float)uVar9;
      gradientDirection.z = fVar3;
      MVGroundState::MVGroundState_GetGradientAngle(gradientDirection,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
      angle = pVVar2->y;
      pQVar11 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                          ((Quaternion *)&stack0xffffffa0,(float)angle,*pVVar2,(MethodInfo *)0x0);
      fVar3 = (this->fields).interpolateTowardsYawRotation.x;
      fVar14 = (this->fields).interpolateTowardsYawRotation.y;
      fVar15 = (this->fields).interpolateTowardsYawRotation.z;
      fVar16 = (this->fields).interpolateTowardsYawRotation.w;
      fVar17 = pQVar11->x;
      fVar18 = pQVar11->y;
      fVar19 = pQVar11->z;
      fVar20 = pQVar11->w;
      (this->fields).elapsedInterpolationTime = 0.0;
      pLVar21 = &this->fields;
      pLVar22 = &this->fields;
      fVar23 = (this->fields).interpolateTowardsPitchRotation.x;
      fVar24 = (this->fields).interpolateTowardsPitchRotation.y;
      fVar25 = (this->fields).interpolateTowardsPitchRotation.z;
      fVar26 = (this->fields).interpolateTowardsPitchRotation.w;
      __return_storage_ptr__ =
           (Quaternion *)
           ((fVar20 * fVar25 + fVar19 * fVar26 +
            fVar18 * (this->fields).interpolateTowardsPitchRotation.x) - fVar17 * fVar24);
      fVar27 = (fVar20 * fVar24 + fVar18 * fVar26 + fVar17 * fVar25) - fVar19 * fVar23;
      this = (LimbController *)
             (((fVar20 * fVar26 - fVar17 * (this->fields).interpolateTowardsPitchRotation.x) -
              fVar18 * fVar24) - fVar19 * fVar25);
      rotation1.y = (fVar13 * fVar14 + fVar5 * fVar16 + fVar4 * fVar15) -
                    fVar12 * (pLVar21->interpolateTowardsYawRotation).x;
      rotation1.x = (fVar13 * fVar3 + fVar4 * fVar16 + fVar12 * fVar14) - fVar5 * fVar15;
      rotation1.z = (fVar13 * fVar15 + fVar12 * fVar16 +
                    fVar5 * (pLVar22->interpolateTowardsYawRotation).x) - fVar4 * fVar14;
      rotation1.w = ((fVar13 * fVar16 - fVar4 * fVar3) - fVar5 * fVar14) - fVar12 * fVar15;
      rotation2.x = (fVar20 * fVar23 + fVar17 * fVar26 + fVar19 * fVar24) - fVar18 * fVar25;
      rotation2 = (Quaternion)CONCAT124(auVar28,rotation2.x);
      pQVar11 = LimbController_AddAndClampRotations
                          ((Quaternion *)&stack0xffffffa0,this_00,rotation1,rotation2,
                           (MethodInfo *)0x0);
      fVar3 = pQVar11->y;
      fVar4 = pQVar11->z;
      fVar5 = pQVar11->w;
      __return_storage_ptr__->x = pQVar11->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      __return_storage_ptr__->w = fVar5;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar29 = (code *)swi(3);
  pQVar11 = (Quaternion *)(*pcVar29)();
  return pQVar11;
}


/* Void FinishInterpolation() */

void Assembly-CSharp.dll::LimbController::LimbController_FinishInterpolation
               (LimbController *this,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 1.0;
  return;
}


/* Quaternion GetPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_GetPitchRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,Vector3 localDirection,
          MethodInfo *method)

{
  fVar1 = MVGroundState::MVGroundState_GetGradientAngle(localDirection,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion GetYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_GetYawRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,Vector3 localDirection,
          MethodInfo *method)

{
  fVar1 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Void Initialize(AvatarLimbManager, MVWorldObjectClient, MVBody, BodyData+PartIndex, Quaternion,
   Quaternion, List`1[System.String], List`1[System.String], Single, Single) */

void Assembly-CSharp.dll::LimbController::LimbController_Initialize
               (LimbController *this,AvatarLimbManager *limbManager,MVWorldObjectClient *avatarWO,
               MVBody *body,BodyData_PartIndex__Enum partIndex,Quaternion modelRotationOffset,
               Quaternion originalRotation,List_1_System_String_ *blendAnimations,
               List_1_System_String_ *cancelAnimations,float maxYaw,float maxPitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__LimbController__FinishInterpolation__);
    cRam_? = '\x01';
  }
  (this->fields).avatarWO = avatarWO;
  func_?(&this->fields,avatarWO);
  (this->fields).blendAnimations = blendAnimations;
  (this->fields).modelRotationOffset.x = modelRotationOffset.x;
  (this->fields).modelRotationOffset.y = modelRotationOffset.y;
  (this->fields).modelRotationOffset.z = modelRotationOffset.z;
  (this->fields).modelRotationOffset.w = modelRotationOffset.w;
  func_?(&(this->fields).blendAnimations,blendAnimations);
  (this->fields).cancelAnimations = cancelAnimations;
  func_?(&(this->fields).cancelAnimations,cancelAnimations);
  (this->fields).maxYaw = maxYaw;
  (this->fields).maxPitch = maxPitch;
  if (body == (MVBody *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pBVar1 = MVBody::MVBody_get_BodyData(body,(MethodInfo *)0x0);
    if ((pBVar1 == (BodyData *)0x0) ||
       (pTVar2 = (pBVar1->fields).PartBones, pTVar2 == (Transform__Array *)0x0))
    goto code_?;
    if (pTVar2->max_length <= partIndex) goto code_?;
    if (pTVar2->vector[partIndex] == (Transform *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar2->vector[partIndex],(MethodInfo *)0x0);
    (this->fields).limbTransform = pTVar3;
    func_?(&(this->fields).limbTransform,pTVar3);
    pTVar3 = (this->fields).limbTransform;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&modelRotationOffset,pTVar3,(MethodInfo *)0x0);
    fVar5 = pQVar4->y;
    fVar6 = pQVar4->z;
    fVar7 = pQVar4->w;
    (this->fields).previousLimbRotation.x = pQVar4->x;
    (this->fields).previousLimbRotation.y = fVar5;
    (this->fields).previousLimbRotation.z = fVar6;
    (this->fields).previousLimbRotation.w = fVar7;
    (this->fields).limbsOriginalRotation.x = originalRotation.x;
    (this->fields).limbsOriginalRotation.y = originalRotation.y;
    (this->fields).limbsOriginalRotation.z = originalRotation.z;
    (this->fields).limbsOriginalRotation.w = originalRotation.w;
    if (limbManager == (AvatarLimbManager *)0x0) goto code_?;
    pAVar8 = (limbManager->fields).OnAvatarRotate;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__LimbController__FinishInterpolation__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      (limbManager->fields).OnAvatarRotate = (Action *)0x0;
      func_?();
      return;
    }
    pAVar9 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar8;
    }
    if (pAVar9 == (Action *)0x0) goto code_?;
    (limbManager->fields).OnAvatarRotate = pAVar9;
    pAVar9 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar8;
    }
    if (pAVar9 != (Action *)0x0) {
      func_?();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InterpolateTowardsAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_InterpolateTowardsAnimation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolateAnimationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar2 * (this->fields).interpolationSpeed + fVar1;
  (this->fields).elapsedInterpolateAnimationTime = fVar1;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((fVar1 < fVar2 * (this->fields).interpolationSpeed + _UNK_?) &&
     (bVar3 = LimbController_IsCancelRotation(this,currentAnimation,(MethodInfo *)0x0), bVar3 == 0))
  {
    fVar1 = (this->fields).previousLimbRotation.w;
    pTVar4 = (this->fields).limbTransform;
    if (pTVar4 != (Transform *)0x0) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
      fVar2 = (this->fields).elapsedInterpolateAnimationTime;
      a.y = fVar2;
      a.x = pQVar5->w;
      a.z = 0.0;
      a.w = fVar1;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffd8,a,*pQVar5,fVar2,(MethodInfo *)0x0);
      pTVar4 = (this->fields).limbTransform;
      if (pTVar4 != (Transform *)0x0) {
        fStack6 = pQVar5->y;
        fStack7 = pQVar5->z;
        fStack8 = pQVar5->w;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,*pQVar5,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}


/* Boolean IsCancelRotation(String) */

bool Assembly-CSharp.dll::LimbController::LimbController_IsCancelRotation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).cancelAnimations;
  while (pLVar1 != (List_1_System_String_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return 0;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).cancelAnimations;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    b = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_00,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (currentAnimation,(String *)b,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    index = index + 1;
    pLVar1 = (this->fields).cancelAnimations;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void ResetInterpolation() */

void Assembly-CSharp.dll::LimbController::LimbController_ResetInterpolation
               (LimbController *this,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).elapsedInterpolateAnimationTime = 0.0;
  (this->fields).shouldRotate = 1;
  (this->fields).rotationDuration = 0.0;
  return;
}


/* Void SetNewRotation(Quaternion, Quaternion) */

void Assembly-CSharp.dll::LimbController::LimbController_SetNewRotation
               (LimbController *this,Quaternion yawRotation,Quaternion PitchRotation,
               MethodInfo *method)

{
  (this->fields).interpolateTowardsYawRotation.x = yawRotation.x;
  (this->fields).interpolateTowardsYawRotation.y = yawRotation.y;
  (this->fields).interpolateTowardsYawRotation.z = yawRotation.z;
  (this->fields).interpolateTowardsYawRotation.w = yawRotation.w;
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).elapsedInterpolateAnimationTime = 0.0;
  (this->fields).shouldRotate = 1;
  (this->fields).rotationDuration = 0.0;
  (this->fields).interpolateTowardsPitchRotation.x = PitchRotation.x;
  (this->fields).interpolateTowardsPitchRotation.y = PitchRotation.y;
  (this->fields).interpolateTowardsPitchRotation.z = PitchRotation.z;
  (this->fields).interpolateTowardsPitchRotation.w = PitchRotation.w;
  return;
}


/* Void SetNewRotation(Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::LimbController::LimbController_SetNewRotation_1
               (LimbController *this,Quaternion yawRotation,Quaternion PitchRotation,float duration,
               MethodInfo *method)

{
  (this->fields).interpolateTowardsYawRotation.x = yawRotation.x;
  (this->fields).interpolateTowardsYawRotation.y = yawRotation.y;
  (this->fields).interpolateTowardsYawRotation.z = yawRotation.z;
  (this->fields).interpolateTowardsYawRotation.w = yawRotation.w;
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).elapsedInterpolateAnimationTime = 0.0;
  (this->fields).shouldRotate = 1;
  (this->fields).interpolateTowardsPitchRotation.x = PitchRotation.x;
  (this->fields).interpolateTowardsPitchRotation.y = PitchRotation.y;
  (this->fields).interpolateTowardsPitchRotation.z = PitchRotation.z;
  (this->fields).interpolateTowardsPitchRotation.w = PitchRotation.w;
  (this->fields).rotationDuration = duration;
  return;
}


/* Boolean ShouldBlendWithAnimation(String) */

bool Assembly-CSharp.dll::LimbController::LimbController_ShouldBlendWithAnimation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  if ((this->fields).isEventControllingLimb != 0) {
    return 0;
  }
  index = 0;
  pLVar1 = (this->fields).blendAnimations;
  while (pLVar1 != (List_1_System_String_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return 0;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).blendAnimations;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    b = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_00,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (currentAnimation,(String *)b,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    index = index + 1;
    pLVar1 = (this->fields).blendAnimations;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void StartBlendingWithAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_StartBlendingWithAnimation
               (LimbController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).blendAnimations;
  do {
    if (pLVar1 == (List_1_System_String_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).blendAnimations;
    if ((pLVar1->fields)._size <= index) {
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        func_?(this_00,animation,
                        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                       );
        return;
      }
      goto code_?;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_00,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)a,animation,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pLVar1 = (this->fields).blendAnimations;
    index = index + 1;
  } while( true );
}


/* Void StopBlendingWithAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_StopBlendingWithAnimation
               (LimbController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (this->fields).blendAnimations;
  do {
    if (this_00 == (List_1_System_String_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->fields)._size <= index) {
      return;
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).blendAnimations;
    if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_01,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)a,animation,(MethodInfo *)0x0);
    this_00 = (this->fields).blendAnimations;
    if (bVar2 != 0) {
      if (this_00 != (List_1_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)this_00,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
        return;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void StopRotating() */

void Assembly-CSharp.dll::LimbController::LimbController_StopRotating
               (LimbController *this,MethodInfo *method)

{
  if ((this->fields).isEventControllingLimb == 0) {
    (this->fields).shouldRotate = 0;
  }
  return;
}


/* Void TrySetNewRotation(Quaternion, Quaternion) */

void Assembly-CSharp.dll::LimbController::LimbController_TrySetNewRotation
               (LimbController *this,Quaternion yawRotation,Quaternion PitchRotation,
               MethodInfo *method)

{
  if ((this->fields).isEventControllingLimb == 0) {
    (this->fields).elapsedInterpolationTime = 0.0;
    (this->fields).elapsedInterpolateAnimationTime = 0.0;
    (this->fields).interpolateTowardsYawRotation.x = yawRotation.x;
    (this->fields).interpolateTowardsYawRotation.y = yawRotation.y;
    (this->fields).interpolateTowardsYawRotation.z = yawRotation.z;
    (this->fields).interpolateTowardsYawRotation.w = yawRotation.w;
    (this->fields).shouldRotate = 1;
    (this->fields).rotationDuration = 0.0;
    (this->fields).interpolateTowardsPitchRotation.x = PitchRotation.x;
    (this->fields).interpolateTowardsPitchRotation.y = PitchRotation.y;
    (this->fields).interpolateTowardsPitchRotation.z = PitchRotation.z;
    (this->fields).interpolateTowardsPitchRotation.w = PitchRotation.w;
  }
  return;
}


/* Void TrySetNewRotation(Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::LimbController::LimbController_TrySetNewRotation_1
               (LimbController *this,Quaternion yawRotation,Quaternion PitchRotation,float duration,
               MethodInfo *method)

{
  if ((this->fields).isEventControllingLimb == 0) {
    (this->fields).elapsedInterpolationTime = 0.0;
    (this->fields).elapsedInterpolateAnimationTime = 0.0;
    (this->fields).interpolateTowardsYawRotation.x = yawRotation.x;
    (this->fields).interpolateTowardsYawRotation.y = yawRotation.y;
    (this->fields).interpolateTowardsYawRotation.z = yawRotation.z;
    (this->fields).interpolateTowardsYawRotation.w = yawRotation.w;
    (this->fields).shouldRotate = 1;
    (this->fields).interpolateTowardsPitchRotation.x = PitchRotation.x;
    (this->fields).interpolateTowardsPitchRotation.y = PitchRotation.y;
    (this->fields).interpolateTowardsPitchRotation.z = PitchRotation.z;
    (this->fields).interpolateTowardsPitchRotation.w = PitchRotation.w;
    (this->fields).rotationDuration = duration;
  }
  return;
}


/* Void UpdateInterpolation(Quaternion) */

void Assembly-CSharp.dll::LimbController::LimbController_UpdateInterpolation
               (LimbController *this,Quaternion interpolateTowardsRotation,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pMVar3 = (this->fields).avatarWO;
  (this->fields).elapsedInterpolationTime = fVar2 * (this->fields).interpolationSpeed + fVar1;
  if ((pMVar3 != (MVWorldObjectClient *)0x0) &&
     (pTVar4 = (pMVar3->fields).transform, pTVar4 != (Transform *)0x0)) {
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffb0,pTVar4,(MethodInfo *)0x0);
    fVar1 = pQVar5->x;
    fVar2 = pQVar5->y;
    fVar6 = pQVar5->z;
    fVar7 = pQVar5->w;
    fVar8 = (interpolateTowardsRotation.w * fVar1 + interpolateTowardsRotation.x * fVar7 +
            interpolateTowardsRotation.z * fVar2) - interpolateTowardsRotation.y * fVar6;
    fVar9 = (interpolateTowardsRotation.w * fVar2 + interpolateTowardsRotation.y * fVar7 +
             interpolateTowardsRotation.x * fVar6) - interpolateTowardsRotation.z * fVar1;
    fVar10 = (interpolateTowardsRotation.w * fVar6 + interpolateTowardsRotation.z * fVar7 +
            interpolateTowardsRotation.y * fVar1) - interpolateTowardsRotation.x * fVar2;
    fVar11 = ((interpolateTowardsRotation.w * fVar7 - interpolateTowardsRotation.x * fVar1) -
            interpolateTowardsRotation.y * fVar2) - interpolateTowardsRotation.z * fVar6;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffb0,(this->fields).limbsOriginalRotation,
                        (MethodInfo *)0x0);
    fVar1 = pQVar5->x;
    fVar2 = pQVar5->y;
    fVar6 = pQVar5->z;
    fVar7 = pQVar5->w;
    fVar12 = (fVar1 * fVar11 + fVar7 * fVar8 + fVar6 * fVar9) - fVar2 * fVar10;
    fVar13 = (fVar2 * fVar11 + fVar7 * fVar9 + fVar1 * fVar10) - fVar6 * fVar8;
    fVar14 = (fVar6 * fVar11 + fVar7 * fVar10 + fVar2 * fVar8) - fVar1 * fVar9;
    fVar9 = ((fVar7 * fVar11 - fVar1 * fVar8) - fVar2 * fVar9) - fVar6 * fVar10;
    fVar1 = (this->fields).modelRotationOffset.x;
    fVar2 = (this->fields).modelRotationOffset.y;
    fVar6 = (this->fields).modelRotationOffset.z;
    fVar7 = (this->fields).modelRotationOffset.w;
    fVar8 = (fVar7 * fVar12 + fVar1 * fVar9 + fVar6 * fVar13) - fVar2 * fVar14;
    fVar10 = (fVar7 * fVar13 + fVar2 * fVar9 + fVar1 * fVar14) - fVar6 * fVar12;
    fVar11 = (fVar7 * fVar14 + fVar6 * fVar9 + fVar2 * fVar12) - fVar1 * fVar13;
    fVar1 = ((fVar7 * fVar9 - fVar1 * fVar12) - fVar2 * fVar13) - fVar6 * fVar14;
    a.y = fVar10;
    a.x = fVar8;
    a.z = fVar11;
    a.w = fVar1;
    b.y = fVar10;
    b.x = fVar8;
    b.z = fVar11;
    b.w = fVar1;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                       ((Quaternion *)&stack0xffffffa0,a,b,(this->fields).elapsedInterpolationTime,
                        (MethodInfo *)0x0);
    pTVar4 = (this->fields).limbTransform;
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar4,*pQVar5,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::LimbController::LimbController_UpdateRotation
               (LimbController *this,MethodInfo *method)

{
  fVar1 = (this->fields).rotationDuration;
  if (_UNK_? < fVar1) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields).rotationDuration = fVar1;
    if (fVar1 <= 0.0) {
      (this->fields).shouldRotate = 0;
      (this->fields).elapsedInterpolateAnimationTime = 0.0;
    }
  }
  pSVar3 = (this->fields).currentAnimation;
  if ((this->fields).shouldRotate == 0) {
    fVar1 = (this->fields).elapsedInterpolateAnimationTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar2 * (this->fields).interpolationSpeed + fVar1;
    (this->fields).elapsedInterpolateAnimationTime = fVar1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((fVar1 < fVar2 * (this->fields).interpolationSpeed + _UNK_?) &&
       (bVar4 = LimbController_IsCancelRotation(this,pSVar3,(MethodInfo *)0x0), bVar4 == 0)) {
      fVar1 = (this->fields).previousLimbRotation.z;
      fVar2 = (this->fields).previousLimbRotation.w;
      pTVar5 = (this->fields).limbTransform;
      if (pTVar5 == (Transform *)0x0) goto code_?;
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
      fVar7 = (this->fields).elapsedInterpolateAnimationTime;
      a.y = 0.0;
      a.x = fVar7;
      a.z = fVar1;
      a.w = fVar2;
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffd8,a,*pQVar6,fVar7,(MethodInfo *)0x0);
      pTVar5 = (this->fields).limbTransform;
      if (pTVar5 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar5,*pQVar6,(MethodInfo *)0x0);
    }
  }
  else {
    bVar4 = LimbController_IsCancelRotation(this,pSVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    pSVar3 = (this->fields).currentAnimation;
    if (cRam_? == '\0') {
      func_?();
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    if ((this->fields).isEventControllingLimb == 0) {
      index = 0;
      pLVar8 = (this->fields).blendAnimations;
      while (pLVar8 != (List_1_System_String_ *)0x0) {
        if ((pLVar8->fields)._size <= index) goto code_?;
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).blendAnimations;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        b = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                      );
        bVar4 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar3,(String *)b,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pQVar6 = LimbController_CalculateBlendedRotation
                             ((Quaternion *)&stack0xffffffd8,this,(MethodInfo *)0x0);
          goto code_?;
        }
        index = index + 1;
        pLVar8 = (this->fields).blendAnimations;
      }
      goto code_?;
    }
code_?:
    pQVar6 = LimbController_AddAndClampRotations
                       ((Quaternion *)&stack0xffffffd8,this,
                        (this->fields).interpolateTowardsYawRotation,
                        (this->fields).interpolateTowardsPitchRotation,(MethodInfo *)0x0);
code_?:
    LimbController_UpdateInterpolation(this,*pQVar6,(MethodInfo *)0x0);
  }
  pTVar5 = (this->fields).limbTransform;
  if (pTVar5 != (Transform *)0x0) {
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
    fVar1 = pQVar6->y;
    fVar2 = pQVar6->z;
    fVar7 = pQVar6->w;
    (this->fields).previousLimbRotation.x = pQVar6->x;
    (this->fields).previousLimbRotation.y = fVar1;
    (this->fields).previousLimbRotation.z = fVar2;
    (this->fields).previousLimbRotation.w = fVar7;
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateRotationDuration() */

void Assembly-CSharp.dll::LimbController::LimbController_UpdateRotationDuration
               (LimbController *this,MethodInfo *method)

{
  fVar1 = (this->fields).rotationDuration;
  if (_UNK_? < fVar1) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields).rotationDuration = fVar1;
    if (fVar1 <= 0.0) {
      (this->fields).shouldRotate = 0;
      (this->fields).elapsedInterpolateAnimationTime = 0.0;
    }
  }
  return;
}


/* LimbController() */

void Assembly-CSharp.dll::LimbController::LimbController__ctor
               (LimbController *this,MethodInfo *method)

{
  (this->fields).interpolationSpeed = 5.0;
  return;
}

