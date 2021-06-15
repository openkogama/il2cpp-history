
/* Quaternion AddAndClampRotations(Quaternion, Quaternion) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_AddAndClampRotations
          (Quaternion *__return_storage_ptr__,LimbController *this,Quaternion rotation1,
          Quaternion rotation2,MethodInfo *method)

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
  lhs.y = rotation1.y;
  lhs.x = rotation1.x;
  lhs.z = rotation1.z;
  lhs.w = rotation1.w;
  rhs.y = rotation2.y;
  rhs.x = rotation2.x;
  rhs.z = rotation2.z;
  rhs.w = rotation2.w;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     (&rotation2,lhs,rhs,(MethodInfo *)0x0);
  fStack_1 = pQVar5->x;
  fStack_2 = pQVar5->y;
  fStack_3 = pQVar5->z;
  fStack_4 = pQVar5->w;
  puVar6 = (undefined8 *)func_?(&rotation1.y,&fStack_1,0);
  rotation1.x = *(float *)(puVar6 + 1);
  rotation2.y = (float)*puVar6;
  rotation2.z = (float)((ulonglong)*puVar6 >> 0x20);
  fVar7 = (this->fields).maxPitch;
  if ((fVar7 < rotation2.y) && (rotation2.y <= _UNK_?)) {
    rotation2.y = fVar7;
  }
  if ((rotation2.y < _UNK_? - fVar7) && (_UNK_? < rotation2.y)) {
    rotation2.y = _UNK_? - fVar7;
  }
  fVar8 = rotation2.y;
  fVar7 = (this->fields).maxYaw;
  if ((fVar7 < rotation2.z) && (rotation2.z <= _UNK_?)) {
    rotation2.z = fVar7;
  }
  if ((rotation2.z < _UNK_? - fVar7) && (_UNK_? < rotation2.z)) {
    rotation2.z = _UNK_? - fVar7;
  }
  rotation1.y = 0.0;
  func_?();
  *(float *)fVar8 = fStack_1;
  *(float *)((int)fVar8 + 4) = fStack_2;
  *(float *)((int)fVar8 + 8) = fStack_3;
  *(float *)((int)fVar8 + 0xc) = fStack_4;
  return (Quaternion *)fVar8;
}


/* Quaternion CalculateBlendedRotation() */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_CalculateBlendedRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    pVVar3 = (Vector3__Class *)pVVar1->x;
    fVar4 = pVVar1->y;
    uVar5._0_4_ = pVVar1->z;
    pPVar6 = (PrefabPool *)(this->fields).avatarWO;
    if (pPVar6 != (PrefabPool *)0x0) {
      this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar6,(MethodInfo *)0x0);
      pPVar6 = (PrefabPool *)(this->fields).avatarWO;
      if (pPVar6 != (PrefabPool *)0x0) {
        this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar6,(MethodInfo *)0x0);
        if (this_02 != (MVPointLightObject *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd0,(Transform *)this_02,(MethodInfo *)0x0);
          uVar7._0_4_ = pVVar1->x;
          uVar7._4_4_ = pVVar1->y;
          uVar5._4_4_ = pVVar1->z;
          VStack_2.y = (float)(undefined4)uVar7;
          VStack_2.z = (float)uVar7._4_4_;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            pVVar3 = TypeInfo__UnityEngine__Vector3;
            func_?();
            uVar7 = CONCAT44(VStack_2.z,VStack_2.y);
          }
          b.y = fVar4;
          b.x = (float)pVVar3;
          VVar8.z = uVar5._4_4_;
          VVar8.x = (float)(int)uVar7;
          VVar8.y = (float)(int)((ulonglong)uVar7 >> 0x20);
          b.z = (float)uVar5;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffd0,VVar8,b,(MethodInfo *)0x0);
          if (this_01 != (MVPointLightObject *)0x0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                     Transform_InverseTransformPoint
                               ((Vector3 *)&stack0xffffffd0,(Transform *)this_01,*pVVar1,
                                (MethodInfo *)0x0);
            uVar5._0_4_ = pVVar1->x;
            uVar5._4_4_ = pVVar1->y;
            fVar4 = pVVar1->z;
            VStack_2.y = (float)uVar5;
            VStack_2.z = uVar5._4_4_;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            localDirection.z = fVar4;
            localDirection.x = (float)(int)uVar5;
            localDirection.y = (float)(int)((ulonglong)uVar5 >> 0x20);
            uVar5._0_4_ = MathFunctions::MathFunctions_SignedYawFromLocalDirection
                                    (localDirection,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                               ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
            pQVar9 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                               ((Quaternion *)&stack0xffffffdc,(float)uVar5,*pVVar1,
                                (MethodInfo *)0x0);
            uVar5._0_4_ = pQVar9->x;
            uVar5._4_4_ = pQVar9->y;
            fVar10 = pQVar9->z;
            fVar11 = pQVar9->w;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            fVar12 = VStack_2.y;
            VStack_2.y = (float)&UNK_?;
            stack0xfffffffc = VStack_2.z;
            VStack_2.z = fVar12;
            VVar8.z = fVar4;
            VVar8 = (Vector3)CONCAT48(VVar8.z,VVar8._0_8_);
            fVar4 = MathFunctions::MathFunctions_PitchFromLocalDirection(VVar8,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                               ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
            pQVar9 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                               ((Quaternion *)&stack0xffffffec,fVar4,*pVVar1,(MethodInfo *)0x0);
            fVar4 = pQVar9->x;
            VStack_2.x = pQVar9->y;
            VStack_2.y = pQVar9->z;
            VStack_2.z = pQVar9->w;
            (this->fields).elapsedInterpolationTime = 0.0;
            fVar12 = (this->fields).interpolateTowardsYawRotation.x;
            fVar13 = (this->fields).interpolateTowardsYawRotation.y;
            fVar14 = (this->fields).interpolateTowardsYawRotation.z;
            fVar15 = (this->fields).interpolateTowardsYawRotation.w;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            lhs.y = fVar13;
            lhs.x = fVar12;
            lhs.z = fVar14;
            lhs.w = fVar15;
            rhs.y = uVar5._4_4_;
            rhs.x = (float)uVar5;
            rhs.z = fVar10;
            rhs.w = fVar11;
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                               ((Quaternion *)&stack0xffffffcc,lhs,rhs,(MethodInfo *)0x0);
            uVar5._0_4_ = pQVar9->x;
            uVar5._4_4_ = pQVar9->y;
            fVar10 = pQVar9->z;
            fVar11 = pQVar9->w;
            rhs_00.y = VStack_2.x;
            rhs_00.x = fVar4;
            rhs_00.z = VStack_2.y;
            rhs_00.w = VStack_2.z;
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                               ((Quaternion *)&stack0xffffffdc,
                                (this->fields).interpolateTowardsPitchRotation,rhs_00,
                                (MethodInfo *)0x0);
            rotation1.y = uVar5._4_4_;
            rotation1.x = (float)uVar5;
            rotation1.z = fVar10;
            rotation1.w = fVar11;
            pQVar9 = LimbController_AddAndClampRotations
                               ((Quaternion *)&stack0xffffffcc,this,rotation1,*pQVar9,
                                (MethodInfo *)0x0);
            _UNK_? = pQVar9->x;
            _UNK_? = pQVar9->y;
            _UNK_? = pQVar9->z;
            _UNK_? = pQVar9->w;
            return (Quaternion *)&UNK_?;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar16)();
  return pQVar9;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_PitchFromLocalDirection(localDirection,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pQVar3 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,*pVVar2,(MethodInfo *)0x0);
  fVar1 = pQVar3->y;
  fVar4 = pQVar3->z;
  fVar5 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Quaternion GetYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_GetYawRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,Vector3 localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pQVar3 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,*pVVar2,(MethodInfo *)0x0);
  fVar1 = pQVar3->y;
  fVar4 = pQVar3->z;
  fVar5 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).avatarWO = avatarWO;
  (this->fields).modelRotationOffset.x = modelRotationOffset.x;
  (this->fields).modelRotationOffset.y = modelRotationOffset.y;
  (this->fields).modelRotationOffset.z = modelRotationOffset.z;
  (this->fields).modelRotationOffset.w = modelRotationOffset.w;
  (this->fields).blendAnimations = blendAnimations;
  (this->fields).cancelAnimations = cancelAnimations;
  (this->fields).maxYaw = maxYaw;
  (this->fields).maxPitch = maxPitch;
  if (((body != (MVBody *)0x0) &&
      (this_00 = MVBody::MVBody_get_BodyData(body,(MethodInfo *)0x0), this_00 != (BodyData *)0x0))
     && (pTVar1 = BodyData::BodyData_GetPartBone(this_00,partIndex,(MethodInfo *)0x0),
        pTVar1 != (Transform *)0x0)) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    (this->fields).limbTransform = pTVar1;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&modelRotationOffset,pTVar1,(MethodInfo *)0x0);
      fVar3 = pQVar2->y;
      fVar4 = pQVar2->z;
      fVar5 = pQVar2->w;
      (this->fields).previousLimbRotation.x = pQVar2->x;
      (this->fields).previousLimbRotation.y = fVar3;
      (this->fields).previousLimbRotation.z = fVar4;
      (this->fields).previousLimbRotation.w = fVar5;
      (this->fields).limbsOriginalRotation.x = originalRotation.x;
      (this->fields).limbsOriginalRotation.y = originalRotation.y;
      (this->fields).limbsOriginalRotation.z = originalRotation.z;
      (this->fields).limbsOriginalRotation.w = originalRotation.w;
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InterpolateTowardsAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_InterpolateTowardsAnimation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolateAnimationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar2 * (this->fields).interpolationSpeed + fVar1;
  (this->fields).elapsedInterpolateAnimationTime = fVar1;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((fVar2 * (this->fields).interpolationSpeed + _UNK_? <= fVar1) ||
     (bVar3 = LimbController_IsCancelRotation(this,currentAnimation,(MethodInfo *)0x0), bVar3 != 0))
  {
    return;
  }
  pTVar4 = (this->fields).limbTransform;
  if (pTVar4 != (Transform *)0x0) {
    puVar5 = &UNK_?;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0);
    fVar1 = (this->fields).elapsedInterpolateAnimationTime;
    fVar2 = pQVar6->x;
    puVar7 = (undefined *)pQVar6->y;
    pQVar8 = (Quaternion__Class *)pQVar6->z;
    fVar9 = pQVar6->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar7 = &UNK_?;
      pQVar8 = TypeInfo__UnityEngine__Quaternion;
      func_?();
    }
    a.y = fVar2;
    a.x = (float)puVar5;
    a.z = (float)puVar7;
    a.w = (float)pQVar8;
    b.y = (float)puVar7;
    b.x = fVar2;
    b.z = (float)pQVar8;
    b.w = fVar9;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                       ((Quaternion *)&stack0xffffffd8,a,b,fVar1,(MethodInfo *)0x0);
    pTVar4 = (this->fields).limbTransform;
    if (pTVar4 != (Transform *)0x0) {
      fStack10 = pQVar6->y;
      fStack11 = pQVar6->z;
      puStack12 = (undefined *)pQVar6->w;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar4,*pQVar6,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean IsCancelRotation(String) */

bool Assembly-CSharp.dll::LimbController::LimbController_IsCancelRotation
               (LimbController *this,String *currentAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).cancelAnimations;
  while (pLVar1 != (List_1_System_String_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if ((int)pOVar2 <= index) {
      return 0;
    }
    pLVar1 = (this->fields).cancelAnimations;
    if (pLVar1 == (List_1_System_String_ *)0x0) break;
    b = (String *)
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
        IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality(currentAnimation,b,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    index = index + 1;
    pLVar1 = (this->fields).cancelAnimations;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isEventControllingLimb != 0) {
    return 0;
  }
  index = 0;
  pLVar1 = (this->fields).blendAnimations;
  while (pLVar1 != (List_1_System_String_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if ((int)pOVar2 <= index) {
      return 0;
    }
    pLVar1 = (this->fields).blendAnimations;
    if (pLVar1 == (List_1_System_String_ *)0x0) break;
    b = (String *)
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
        IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality(currentAnimation,b,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    index = index + 1;
    pLVar1 = (this->fields).blendAnimations;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void StartBlendingWithAnimation(String) */

void Assembly-CSharp.dll::LimbController::LimbController_StartBlendingWithAnimation
               (LimbController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).blendAnimations;
  do {
    if (pLVar1 == (List_1_System_String_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    pLVar1 = (this->fields).blendAnimations;
    if ((int)pOVar3 <= index) {
      if (pLVar1 != (List_1_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)animation,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
        return;
      }
      goto code_?;
    }
    if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
    a = (String *)
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
        IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = mscorlib.dll::System::String::String_op_Equality(a,animation,(MethodInfo *)0x0);
    if (bVar4 != 0) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (List_1_MVPlayer_ *)(this->fields).blendAnimations;
  do {
    if (this_00 == (List_1_MVPlayer_ *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if ((int)pOVar2 <= index) {
      return;
    }
    this_01 = (this->fields).blendAnimations;
    if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
    a = (String *)
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
        IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                   MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality(a,animation,(MethodInfo *)0x0);
    this_00 = (List_1_MVPlayer_ *)(this->fields).blendAnimations;
    if (bVar3 != 0) {
      if (this_00 != (List_1_MVPlayer_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,index,
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
  pLVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = (this->fields).elapsedInterpolationTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  this_00 = (PrefabPool *)(this->fields).avatarWO;
  (this->fields).elapsedInterpolationTime = (this->fields).interpolationSpeed * fVar3 + fVar2;
  fVar2 = (this->fields).previousLimbRotation.y;
  fVar3 = (this->fields).previousLimbRotation.z;
  fVar4 = (this->fields).previousLimbRotation.w;
  if (this_00 != (PrefabPool *)0x0) {
    this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_02 != (MVPointLightObject *)0x0) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&puStack_6,(Transform *)this_02,(MethodInfo *)0x0);
      puStack_6 = (undefined *)pQVar5->x;
      fVar7 = pQVar5->y;
      fVar8 = pQVar5->z;
      fVar9 = pQVar5->w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      uVar10 = 0;
      lhs.y = fVar7;
      lhs.x = (float)puStack_6;
      lhs.z = fVar8;
      lhs.w = fVar9;
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                ((Quaternion *)&puStack_6,lhs,interpolateTowardsRotation,(MethodInfo *)0x0);
      pQVar5 = &(this->fields).limbsOriginalRotation;
      fVar7 = pQVar5->x;
      this = (LimbController *)(this->fields).limbsOriginalRotation.y;
      __return_storage_ptr__ = (Quaternion *)&stack0xffffffc8;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                         (__return_storage_ptr__,*pQVar5,(MethodInfo *)0x0);
      fVar11 = fVar7;
      fVar12 = (float)__return_storage_ptr__;
      fVar13 = (float)puStack_6;
      QVar14._0_8_ = CONCAT44(fVar12,fVar13);
      QVar14 = (Quaternion)CONCAT88(uVar15,QVar14._0_8_);
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                         ((Quaternion *)&stack0xffffffc8,QVar14,*pQVar5,(MethodInfo *)0x0);
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                         ((Quaternion *)&stack0xffffffc8,*pQVar5,
                          (pLVar1->fields).modelRotationOffset,(MethodInfo *)0x0);
      QVar14.y = fVar2;
      QVar14.x = (float)uVar10;
      QVar14.z = fVar3;
      QVar14.w = fVar4;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                         ((Quaternion *)&stack0xffffffc8,QVar14,*pQVar5,
                          (pLVar1->fields).elapsedInterpolationTime,(MethodInfo *)0x0);
      this_01 = (pLVar1->fields).limbTransform;
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (this_01,*pQVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar1 = (this->fields).elapsedInterpolateAnimationTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar2 * (this->fields).interpolationSpeed + fVar1;
    (this->fields).elapsedInterpolateAnimationTime = fVar1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((fVar1 < fVar2 * (this->fields).interpolationSpeed + _UNK_?) &&
       (bVar4 = LimbController_IsCancelRotation(this,pSVar3,(MethodInfo *)0x0), bVar4 == 0)) {
      QStack_5.x = (this->fields).previousLimbRotation.x;
      QStack_5.y = (this->fields).previousLimbRotation.y;
      QStack_5.z = (this->fields).previousLimbRotation.z;
      QStack_5.w = (this->fields).previousLimbRotation.w;
      pTVar6 = (this->fields).limbTransform;
      if (pTVar6 == (Transform *)0x0) goto code_?;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffc8,pTVar6,(MethodInfo *)0x0);
      fVar1 = (this->fields).elapsedInterpolateAnimationTime;
      fVar2 = pQVar7->x;
      fVar8 = pQVar7->y;
      fVar9 = pQVar7->z;
      fVar10 = pQVar7->w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        QStack_5.y = (float)TypeInfo__UnityEngine__Quaternion;
        QStack_5.x = (float)&UNK_?;
        func_?();
      }
      a.y = QStack_5.y;
      a.x = QStack_5.x;
      a.z = QStack_5.z;
      a.w = QStack_5.w;
      b.y = fVar8;
      b.x = fVar2;
      b.z = fVar9;
      b.w = fVar10;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffc8,a,b,fVar1,(MethodInfo *)0x0);
      goto code_?;
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
      cRam_? = '\x01';
    }
    if ((this->fields).isEventControllingLimb == 0) {
      index = 0;
      pLVar11 = (this->fields).blendAnimations;
      while (pLVar11 != (List_1_System_String_ *)0x0) {
        pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11,
                            MethodInfo__System__Collections__Generic__List<System::String>__get_Count__
                           );
        if ((int)pOVar12 <= index) goto code_?;
        pLVar11 = (this->fields).blendAnimations;
        if (pLVar11 == (List_1_System_String_ *)0x0) break;
        b_00 = (String *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,index,
                          MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                         );
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          QStack_5.y = (float)TypeInfo__System__String;
          QStack_5.x = (float)&UNK_?;
          func_?();
        }
        bVar4 = mscorlib.dll::System::String::String_op_Equality(pSVar3,b_00,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pQVar7 = LimbController_CalculateBlendedRotation
                             ((Quaternion *)&stack0xffffffc8,this,(MethodInfo *)0x0);
          goto code_?;
        }
        index = index + 1;
        pLVar11 = (this->fields).blendAnimations;
      }
      goto code_?;
    }
code_?:
    pQVar7 = LimbController_AddAndClampRotations
                       ((Quaternion *)&stack0xffffffc8,this,
                        (this->fields).interpolateTowardsYawRotation,
                        (this->fields).interpolateTowardsPitchRotation,(MethodInfo *)0x0);
code_?:
    fVar1 = pQVar7->x;
    fVar2 = pQVar7->y;
    fVar8 = pQVar7->z;
    fVar9 = pQVar7->w;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar10 = (this->fields).elapsedInterpolationTime;
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    this_00 = (PrefabPool *)(this->fields).avatarWO;
    (this->fields).elapsedInterpolationTime = (this->fields).interpolationSpeed * fVar13 + fVar10;
    if ((this_00 == (PrefabPool *)0x0) ||
       (this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0),
       this_01 == (MVPointLightObject *)0x0)) goto code_?;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_5,(Transform *)this_01,(MethodInfo *)0x0);
    QStack_5.x = pQVar7->x;
    QStack_5.y = pQVar7->y;
    QStack_5.z = pQVar7->z;
    QStack_5.w = pQVar7->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    fVar10 = 0.0;
    lhs.y = QStack_5.y;
    lhs.x = QStack_5.x;
    lhs.z = QStack_5.z;
    lhs.w = QStack_5.w;
    rhs.y = fVar2;
    rhs.x = fVar1;
    rhs.z = fVar8;
    rhs.w = fVar9;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       (&QStack_5,lhs,rhs,(MethodInfo *)0x0);
    QStack_5.x = pQVar7->x;
    QStack_5.y = pQVar7->y;
    QStack_5.z = pQVar7->z;
    QStack_5.w = (float)&UNK_?;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffe8,(this->fields).limbsOriginalRotation,
                        (MethodInfo *)0x0);
    lhs_00.y = QStack_5.y;
    lhs_00.x = QStack_5.x;
    lhs_00.z = QStack_5.z;
    lhs_00.w = QStack_5.w;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       (&QStack_5,lhs_00,*pQVar7,(MethodInfo *)0x0);
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       (&QStack_5,*pQVar7,(this->fields).modelRotationOffset,(MethodInfo *)0x0);
    a_00.y = fVar8;
    a_00.x = fVar2;
    a_00.z = fVar9;
    a_00.w = fVar10;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                       ((Quaternion *)&stack0xffffffc8,a_00,*pQVar7,
                        (this->fields).elapsedInterpolationTime,(MethodInfo *)0x0);
code_?:
    pTVar6 = (this->fields).limbTransform;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar6,*pQVar7,(MethodInfo *)0x0);
  }
  pTVar6 = (this->fields).limbTransform;
  if (pTVar6 != (Transform *)0x0) {
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc8,pTVar6,(MethodInfo *)0x0);
    fVar1 = pQVar7->y;
    fVar2 = pQVar7->z;
    fVar8 = pQVar7->w;
    (this->fields).previousLimbRotation.x = pQVar7->x;
    (this->fields).previousLimbRotation.y = fVar1;
    (this->fields).previousLimbRotation.z = fVar2;
    (this->fields).previousLimbRotation.w = fVar8;
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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


/* Quaternion get_InterpolateTowardsPitchRotation() */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_get_InterpolateTowardsPitchRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,MethodInfo *method)

{
  fVar1 = (this->fields).interpolateTowardsPitchRotation.y;
  fVar2 = (this->fields).interpolateTowardsPitchRotation.z;
  fVar3 = (this->fields).interpolateTowardsPitchRotation.w;
  __return_storage_ptr__->x = (this->fields).interpolateTowardsPitchRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Quaternion get_InterpolateTowardsYawRotation() */

Quaternion *
Assembly-CSharp.dll::LimbController::LimbController_get_InterpolateTowardsYawRotation
          (Quaternion *__return_storage_ptr__,LimbController *this,MethodInfo *method)

{
  fVar1 = (this->fields).interpolateTowardsYawRotation.y;
  fVar2 = (this->fields).interpolateTowardsYawRotation.z;
  fVar3 = (this->fields).interpolateTowardsYawRotation.w;
  __return_storage_ptr__->x = (this->fields).interpolateTowardsYawRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Single get_InterpolationSpeed() */

float Assembly-CSharp.dll::LimbController::LimbController_get_InterpolationSpeed
                (LimbController *this,MethodInfo *method)

{
  return (this->fields).interpolationSpeed;
}


/* Void set_InterpolationSpeed(Single) */

void Assembly-CSharp.dll::LimbController::LimbController_set_InterpolationSpeed
               (LimbController *this,float value,MethodInfo *method)

{
  (this->fields).interpolationSpeed = value;
  return;
}


/* Void set_IsEventControllingLimb(Boolean) */

void Assembly-CSharp.dll::LimbController::LimbController_set_IsEventControllingLimb
               (LimbController *this,bool value,MethodInfo *method)

{
  (this->fields).isEventControllingLimb = value;
  return;
}

