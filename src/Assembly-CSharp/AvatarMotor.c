
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 inputDirection,MethodInfo *method)

{
  fStack_1 = AvatarMotor_GetSpeed(this,(this->fields).speed,inputDirection,(MethodInfo *)0x0);
  VStack_2.z = inputDirection.z * fStack_1;
  fStack_3 = inputDirection.y * fStack_1;
  (this->fields).speed = fStack_1;
  VStack_2.y = fStack_3;
  VStack_2.x = inputDirection.x * fStack_1;
  fStack_4 = VStack_2.z;
  fVar5 = (float10)func_?();
  fStack_1 = (float)fVar5;
  if (fStack_1 != 0.0) {
    VStack_2.z = velocity.z;
    VStack_2._0_8_ = ZEXT48((uint)velocity.x);
    fVar5 = (float10)func_?();
    fVar6 = (float)&VStack_2 * _UNK_?;
    fStack_1 = (float)fVar5;
    fStack_3 = fStack_3 * _UNK_?;
    fStack_4 = fStack_4 * _UNK_?;
    fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
    VStack_2.z = fStack_4 * fStack_7 + velocity.z;
    VStack_2._0_8_ = CONCAT44(fStack_3 * fStack_7 + _UNK_?,fVar6 * fStack_7 + velocity.x)
    ;
    fVar5 = (float10)func_?();
    fStack_7 = (float)fVar5;
    pfVar8 = &(this->fields).speed;
    if (fStack_1 < fStack_7 && (*pfVar8 <= fStack_7 && fStack_7 != *pfVar8)) {
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_2,(MethodInfo *)0x0);
      VStack_2.z = VStack_2.z * fStack_1;
      VStack_2._0_8_ = ZEXT48((uint)(VStack_2.x * fStack_1));
    }
    velocity.x = VStack_2.x;
    velocity.z = VStack_2.z;
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Vector3 ApplyInputVelocityChangeGrounded(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChangeGrounded
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 inputDirection,MethodInfo *method)

{
  method_00 = this;
  AvatarMotor_GetSpeed(this,(this->fields).speed,inputDirection,(MethodInfo *)0x0);
  auStack_1._0_4_ = (this->fields).velocityPrevFrame.x;
  auStack_1._4_4_ = (this->fields).velocityPrevFrame.y;
  fStack_2 = (this->fields).velocityPrevFrame.z;
  uStack_3 = auStack_1;
  fStack_4 = fStack_2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar5 = (double)((float)auStack_1._4_4_ * (float)auStack_1._4_4_ +
                    (float)auStack_1._0_4_ * (float)auStack_1._0_4_ + fStack_2 * fStack_2);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar6 = (float)dVar5;
  if (_UNK_? < fVar6) {
    fStack_4 = fStack_4 / fVar6;
    uStack_3 = CONCAT44(uStack_3._4_4_ / fVar6,(float)uStack_3 / fVar6);
    fStack_2 = fStack_4;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar7->zeroVector).x;
    uStack_3._4_4_ = (pVVar7->zeroVector).y;
    fStack_4 = (pVVar7->zeroVector).z;
  }
  this_00 = (this->fields).slopeSpeedMultiplier;
  if (this_00 != (AnimationCurve *)0x0) {
    dVar5 = (double)uStack_3._4_4_;
    func_?();
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (this_00,(float)dVar5 * _UNK_?,(MethodInfo *)method_00);
    fVar6 = fVar6 * fStack_8;
    (this->fields).speed = fVar6;
    pMVar9 = (this->fields)._.groundState;
    if (pMVar9 != (MVGroundState *)0x0) {
      hVelocity.y = inputDirection.y * fVar6;
      hVelocity.x = inputDirection.x * fVar6;
      hVelocity.z = inputDirection.z * fVar6;
      pVVar10 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                         ((Vector3 *)(auStack_1 + 4),hVelocity,(pMVar9->fields).groundNormal,
                          (MethodInfo *)0x0);
      auStack_1._0_4_ = pVVar10->x;
      auStack_1._4_4_ = pVVar10->y;
      fStack_2 = pVVar10->z;
      fVar6 = (float)auStack_1._0_4_ - velocity.x;
      fVar11 = (float)auStack_1._4_4_ - velocity.y;
      fVar12 = fStack_2 - velocity.z;
      pMVar9 = (this->fields)._.groundState;
      pAVar13 = (this->fields).interactableLocal;
      uStack_3 = auStack_1;
      fStack_4 = fStack_2;
      if ((pMVar9 != (MVGroundState *)0x0) &&
         (pMVar14 = (pMVar9->fields).groundMaterial, fStack_4 = fStack_2,
         pMVar14 != (MVMaterial *)0x0)) {
        fStack_15 = (pMVar14->fields)._PhysicalProperties_k__BackingField.friction;
        fStack_16 = (pMVar14->fields)._PhysicalProperties_k__BackingField.bouncyness;
        fStack_17 = (pMVar14->fields)._PhysicalProperties_k__BackingField.softness;
        fStack_18 = (pMVar14->fields)._PhysicalProperties_k__BackingField.staticFriction;
        fStack_4 = fStack_2;
        if (pAVar13 != (AvatarInteractable *)0x0) {
          pIVar19 = (pAVar13->klass->vtable).HandleModifierEffect.methodPtr;
          fStack_4 = fStack_2;
          fVar20 = (float10)(*pIVar19)();
          MathFunctions::MathFunctions_Pow2((float)fVar20,(MethodInfo *)0x0);
          fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          fVar21 = (fVar21 * (float)pIVar19) / _UNK_?;
          fStack_15 = velocity.x + fVar6 * fVar21;
          fStack_16 = velocity.y + fVar11 * fVar21;
          fVar6 = velocity.z + fVar12 * fVar21;
          pMVar9 = (this->fields)._.groundState;
          pAVar13 = (this->fields).interactableLocal;
          fStack_17 = 0.0;
          fStack_18 = 0.0;
          fStack_4 = fVar6;
          if ((pMVar9 != (MVGroundState *)0x0) &&
             (pMVar14 = (pMVar9->fields).groundMaterial, pMVar14 != (MVMaterial *)0x0)) {
            uStack_3._0_4_ = (pMVar14->fields)._PhysicalProperties_k__BackingField.friction;
            uStack_3._4_4_ = (pMVar14->fields)._PhysicalProperties_k__BackingField.bouncyness;
            fStack_4 = (pMVar14->fields)._PhysicalProperties_k__BackingField.softness;
            fStack_22 = (pMVar14->fields)._PhysicalProperties_k__BackingField.staticFriction;
            if (pAVar13 != (AvatarInteractable *)0x0) {
              fVar20 = (float10)(*(pAVar13->klass->vtable).HandleModifierEffect.methodPtr)();
              fVar11 = MathFunctions::MathFunctions_Pow2((float)fVar20,(MethodInfo *)0x0);
              if (fVar11 < _UNK_?) {
                fVar20 = (float10)func_?();
                if ((float)fVar20 != _UNK_?) {
                  fStack_17 = fStack_2 * _UNK_?;
                  fStack_18 = 0.0;
                  uStack_23 = 0;
                  fVar6 = (float)uStack_3 * _UNK_?;
                  fVar11 = uStack_3._4_4_ * _UNK_?;
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                     ((MethodInfo *)0x0);
                  __return_storage_ptr__->x = fStack_18 * fVar12 + fVar11;
                  __return_storage_ptr__->y = (float)fVar20 * fVar12 + (float)auStack_1._4_4_;
                  __return_storage_ptr__->z = fVar6 * fVar12 + fStack_2;
                  return __return_storage_ptr__;
                }
              }
              __return_storage_ptr__->x = fStack_17;
              __return_storage_ptr__->y = fStack_18;
              __return_storage_ptr__->z = fVar6;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar24)();
  return pVVar10;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_DealImpactDamage
               (AvatarMotor *this,Vector3 curVelocity,Vector3 prevVelocity,MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 != (ImpactState *)0x0) {
    fVar1 = ImpactState::ImpactState_UpdateImpactState
                      (this_00,curVelocity,prevVelocity,
                       (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
    if (fVar1 != _UNK_?) {
      pAVar2 = (this->fields).interactableLocal;
      if (pAVar2 == (AvatarInteractable *)0x0) goto code_?;
      (*(pAVar2->klass->vtable).TakeDamage.methodPtr)();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdateFunction(IMotorAPI) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_FixedUpdateFunction
               (AvatarMotor *this,IMotorAPI *motorApi,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IMotorAPI);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  cVar2 = (*(this->klass->vtable).get_IsMovementLocked.methodPtr)
                     (this,(this->klass->vtable).get_IsMovementLocked.method);
  if (cVar2 != '\0') {
    return;
  }
  pSVar3 = (this->fields).smoothCharacterController;
  if (((pSVar3 != (SmoothCharacterController *)0x0) &&
      (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) &&
     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar4,(MethodInfo *)0x0), motorApi != (IMotorAPI *)0x0)) {
    uVar6 = 0;
    uVar7 = (motorApi->klass->_1).interface_offsets_count;
    if (uVar7 != 0) {
      do {
        if (motorApi->klass->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__IMotorAPI) {
          pVVar8 = &(motorApi->klass->vtable).get_Rotation +
                    motorApi->klass->interfaceOffsets[uVar6].offset;
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    pVVar8 = (VirtualInvokeData *)func_?(motorApi,TypeInfo__IMotorAPI,2);
code_?:
    pQVar9 = (Quaternion *)(*pVVar8->methodPtr)(&stack0xffffffac,motorApi,pVVar8->method);
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar5,*pQVar9,(MethodInfo *)0x0);
      pVVar10 = &(this->fields).velocityPrevFrame;
      uVar11 = pVVar10->y;
      fVar12 = (this->fields).velocityPrevFrame.z;
      VVar13 = *pVVar10;
      this_00 = (this->fields).movableMotorState;
      VVar14 = (this->fields).velocityPrevFrame;
      pSVar3 = (this->fields).smoothCharacterController;
      if (pSVar3 != (SmoothCharacterController *)0x0) {
        pMVar4 = (pSVar3->fields).controller;
        this_01 = (((this->fields).smoothCharacterController)->fields).controller;
        if ((this_01 != (MvCharacterController *)0x0) &&
           (fVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_distance
                               ((RaycastHit *)this_01,(MethodInfo *)0x0),
           this_00 != (MVMovableMotorState *)0x0)) {
          bStack_16 = MVMovableMotorState::MVMovableMotorState_Move
                               (this_00,VVar14,pMVar4,fVar15,(this->fields)._.groundState,
                                (Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
          inputJump = func_?(4,TypeInfo__IMotorAPI,motorApi);
          uVar7 = 0;
          if ((motorApi->klass->_1).interface_offsets_count != 0) {
            do {
              if (motorApi->klass->interfaceOffsets[uVar7].interfaceType ==
                  (Il2CppClass *)TypeInfo__IMotorAPI) {
                pVVar8 = &(motorApi->klass->vtable).get_Direction +
                          motorApi->klass->interfaceOffsets[uVar7].offset;
                goto code_?;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < (motorApi->klass->_1).interface_offsets_count);
          }
          pVVar8 = (VirtualInvokeData *)func_?();
code_?:
          pMVar17 = pVVar8->method;
          uVar18._4_4_ = (float)&stack0xffffffb0;
          uVar18._0_4_ = (float)&UNK_?;
          pVVar10 = (Vector3 *)(*pVVar8->methodPtr)();
          VVar14.z = 0.0;
          VVar14.x = (float)(int)uVar1;
          VVar14.y = (float)(int)(uVar1 >> 0x20);
          pVVar10 = AvatarMotor_GetVelocity
                              ((Vector3 *)&stack0xffffffb0,this,VVar13,VVar14,inputJump,*pVVar10,
                               (MethodInfo *)0x0);
          if (bStack_16 == 0) {
            VVar13.z = (float)motorApi;
            VVar13.x = (float)uVar18;
            VVar13.y = SUB84(uVar18,4);
            AvatarMotor_Move(this,*pVVar10,VVar13,(MethodInfo *)0x0);
            bStack_16 = 0;
          }
          else {
            VVar14 = *pVVar10;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            AvatarMotor_Move(this,VVar14,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
          }
          pSVar3 = (this->fields).smoothCharacterController;
          if ((pSVar3 != (SmoothCharacterController *)0x0) &&
             (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
            uVar19 = (pMVar4->fields)._Velocity_k__BackingField.x;
            uVar20 = (pMVar4->fields)._Velocity_k__BackingField.y;
            fVar15 = (pMVar4->fields)._Velocity_k__BackingField.z;
            fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            fVar15 = fVar15 / fVar21;
            (this->fields).velocityPrevFrame.x = (float)uVar19 / fVar21;
            (this->fields).velocityPrevFrame.y = (float)uVar20 / fVar21;
            (this->fields).velocityPrevFrame.z = fVar15;
            if (bStack_16 == 0) {
              (this->fields).velocityPrevFrame.x = (float)uVar19 / fVar21 - (float)uVar18;
              (this->fields).velocityPrevFrame.y = (float)uVar20 / fVar21 - SUB84(uVar18,4);
              (this->fields).velocityPrevFrame.z = fVar15 - (float)motorApi;
            }
            this_02 = (this->fields).impactState;
            if (this_02 != (ImpactState *)0x0) {
              prevVelocity.y = (float)uVar11;
              prevVelocity.x = (float)pMVar17;
              prevVelocity.z = fVar12;
              fVar12 = ImpactState::ImpactState_UpdateImpactState
                                 (this_02,(this->fields).velocityPrevFrame,prevVelocity,
                                  (MVInteractableBase *)(this->fields).interactableLocal,
                                  (MethodInfo *)0x0);
              if (fVar12 != _UNK_?) {
                pAVar22 = (this->fields).interactableLocal;
                if (pAVar22 == (AvatarInteractable *)0x0) goto code_?;
                (*(pAVar22->klass->vtable).TakeDamage.methodPtr)
                          (pAVar22,fVar12,0,5,(pAVar22->klass->vtable).TakeDamage.method);
              }
              bVar23 = func_?(4,TypeInfo__IMotorAPI,motorApi);
              pBVar24 = (this->fields).bounceState;
              if (pBVar24 != (BounceState *)0x0) {
                if ((((pBVar24->fields).bounced & bVar23) != 0) &&
                   ((this->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
                  pAVar25 = (this->fields).OnActiveBounce;
                  (*(pAVar25->fields)._._.invoke_impl)
                            ((pAVar25->fields)._._.method_code,(pAVar25->fields)._._.method);
                }
                this_03 = (this->fields)._GetSizeState_k__BackingField;
                if (this_03 != (SizeState *)0x0) {
                  SizeState::SizeState_UpdateScale(this_03,(MethodInfo *)0x0);
                  pSVar3 = (this->fields).smoothCharacterController;
                  this_04 = (this->fields).waterState;
                  if ((((pSVar3 != (SmoothCharacterController *)0x0) &&
                       (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0
                       )) && (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pMVar4,(MethodInfo *)0x0),
                             pTVar5 != (Transform *)0x0)) &&
                     (pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffb0,pTVar5,(MethodInfo *)0x0),
                     this_04 != (WaterState *)0x0)) {
                    WaterState::WaterState_Update
                              (this_04,*pVVar10,
                               (MVInteractableBase *)(this->fields).interactableLocal,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Single GetSpeed(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeed
                (AvatarMotor *this,float currentSpeed,Vector3 inputDirection,MethodInfo *method)

{
  pAVar1 = (this->fields).interactableLocal;
  if (pAVar1 != (AvatarInteractable *)0x0) {
    fVar2 = (float10)(*(pAVar1->klass->vtable).HandleModifierEffect.methodPtr)
                               (pAVar1,3,(this->fields).walkSpeed,
                                (pAVar1->klass->vtable).HandleModifierEffect.method);
    fVar3 = (this->fields).speedBoostSetting;
    fVar4 = (this->fields).currentLerp;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar5 = fVar5 + fVar4;
    pfVar6 = &(this->fields).lerpTime;
    (this->fields).currentLerp = fVar5;
    if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
      (this->fields).currentLerp = (this->fields).lerpTime;
    }
    fVar7 = (float10)func_?(&inputDirection,0);
    if ((float)fVar7 == 0.0) {
      (this->fields).currentLerp = 0.0;
    }
    dVar8 = (double)(((this->fields).currentLerp / (this->fields).lerpTime) * _UNK_? *
                    _UNK_?);
    func_?();
    return (float)dVar8 * (float)fVar2 * fVar3;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  fVar2 = (float10)(*pcVar9)();
  return (float)fVar2;
}


/* Single GetSpeedGrounded(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeedGrounded
                (AvatarMotor *this,float currentSpeed,Vector3 inputDirection,MethodInfo *method)

{
  pAVar1 = this;
  AvatarMotor_GetSpeed(this,currentSpeed,inputDirection,(MethodInfo *)0x0);
  uVar2 = (this->fields).velocityPrevFrame.x;
  uVar3 = (this->fields).velocityPrevFrame.y;
  fVar4 = (this->fields).velocityPrevFrame.z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar5 = (double)((float)uVar3 * (float)uVar3 + (float)uVar2 * (float)uVar2 + fVar4 * fVar4);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if (_UNK_? < (float)dVar5) {
    this = (AvatarMotor *)((float)uVar3 / (float)dVar5);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    this = (AvatarMotor *)uVar6;
  }
  this_00 = (pAVar1->fields).slopeSpeedMultiplier;
  if (this_00 != (AnimationCurve *)0x0) {
    dVar5 = (double)(float)this;
    method_00 = (MethodInfo *)0x0;
    func_?();
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(float)dVar5 * _UNK_?,method_00);
    return fVar7 * fVar4;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Vector3 GetVelocity(Vector3, Vector3, Boolean, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetVelocity
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 movableVelocity,bool inputJump,Vector3 inputDirection,MethodInfo *method
                    )

{
  pMVar1 = (this->fields)._.groundState;
  if (pMVar1 != (MVGroundState *)0x0) {
    bVar2 = MVGroundState::MVGroundState_get_Grounded(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      fVar3 = AvatarMotor_GetSpeed(this,(this->fields).speed,inputDirection,(MethodInfo *)0x0);
      fVar4 = inputDirection.x * fVar3;
      (this->fields).speed = fVar3;
      fVar5 = (float10)func_?();
      if ((float)fVar5 == 0.0) {
        _fStack_44 = velocity._0_8_;
      }
      else {
        fVar5 = (float10)func_?();
        fVar4 = fVar4 * _UNK_?;
        fVar6 = (float)fVar5;
        fVar3 = inputDirection.z * fVar3 * _UNK_?;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        velocity.z = fVar3 * fVar7 + velocity.z;
        fVar3 = fVar4 * fVar7 + velocity.x;
        fVar5 = (float10)func_?();
        fVar4 = (float)fVar5;
        pfVar8 = &(this->fields).speed;
        if (fVar6 < fVar4 && (*pfVar8 <= fVar4 && fVar4 != *pfVar8)) {
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
          velocity.z = velocity.z * fVar6;
          fVar3 = fVar3 * fVar6;
        }
        _fStack_44 = CONCAT44(velocity.y,fVar3);
      }
      velocity_01.z = velocity.z;
      velocity_01.x = (float)(int)_fStack_44;
      velocity_01.y = (float)(int)((ulonglong)_fStack_44 >> 0x20);
      pVVar9 = MVRigidBody::MVRigidBody_ApplyGravity
                          ((Vector3 *)&stack0xffffffa8,(MVRigidBody *)this,velocity_01,
                           (this->fields).velocityPrevFrame,
                           (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0)
      ;
      uVar10._0_4_ = pVVar9->x;
      uVar10._4_4_ = pVVar9->y;
      fVar4 = pVVar9->z;
      if ((inputJump != 0) && ((float)uVar10._4_4_ < 0.0)) {
        uVar10 = CONCAT44((float)uVar10._4_4_ * (this->fields).slowFallVelocityMultiplier,
                          (undefined4)uVar10);
      }
    }
    else {
      pMVar1 = (this->fields)._.groundState;
      if (pMVar1 == (MVGroundState *)0x0) goto code_?;
      pVVar9 = MVGroundState::MVGroundState_ApplySlidingVelocity
                          ((Vector3 *)&stack0xffffffa8,pMVar1,velocity,(this->fields)._.density,
                           (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0)
      ;
      uVar11 = pVVar9->x;
      uVar12 = pVVar9->y;
      fVar4 = (float)uVar11;
      fVar3 = (float)uVar12;
      fVar6 = AvatarMotor_get_FrictionCoefficient(this,(MethodInfo *)0x0);
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      velocity_02.y = fVar3 - (float)uVar12 * fVar6 * fVar7;
      velocity_02.x = fVar4 - (float)uVar11 * fVar6 * fVar7;
      velocity_02.z = 0.0;
      pVVar9 = AvatarMotor_ApplyInputVelocityChangeGrounded
                          ((Vector3 *)&stack0xffffffa8,this,velocity_02,inputDirection,
                           (MethodInfo *)0x0);
      uVar10._0_4_ = pVVar9->x;
      uVar10._4_4_ = pVVar9->y;
      fVar4 = pVVar9->z;
    }
    this_00 = (this->fields).bounceState;
    if (this_00 != (BounceState *)0x0) {
      velocity_03.z = fVar4;
      velocity_03.x = (float)(int)uVar10;
      velocity_03.y = (float)(int)((ulonglong)uVar10 >> 0x20);
      pVVar9 = BounceState::BounceState_ApplyBounceVelocity
                          ((Vector3 *)&stack0xffffffa8,this_00,velocity_03,(MethodInfo *)0x0);
      fVar4 = pVVar9->x;
      fVar3 = pVVar9->y;
      fVar6 = pVVar9->z;
      this_01 = (this->fields).jumpState;
      interactableLocal = (this->fields).interactableLocal;
      pMVar1 = (this->fields)._.groundState;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      pSVar13 = (this->fields).smoothCharacterController;
      if ((pSVar13 != (SmoothCharacterController *)0x0) &&
         (this_05 = (pSVar13->fields).controller, this_05 != (MvCharacterController *)0x0)) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_05,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_03,(MethodInfo *)0x0);
          if (this_04 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffa8,this_04,(MethodInfo *)0x0);
            if (this_02 != (WaterPlaneManager *)0x0) {
              fVar7 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                                 (this_02,*pVVar9,(MethodInfo *)0x0);
              if (this_01 != (JumpState *)0x0) {
                velocity_00.y = fVar3;
                velocity_00.x = fVar4;
                velocity_00.z = fVar6;
                pVVar9 = JumpState::JumpState_ApplyJumping
                                    ((Vector3 *)&stack0xffffffa8,this_01,
                                     (MVInteractableBase *)interactableLocal,pMVar1,(float)this_05,
                                     fVar7,inputJump,velocity_00,movableVelocity,(MethodInfo *)0x0)
                ;
                pVVar9 = MVRigidBody::MVRigidBody_GetImpulse
                                    ((Vector3 *)&stack0xffffffa8,(MVRigidBody *)this,*pVVar9,
                                     (MVInteractableBase *)(this->fields).interactableLocal,
                                     (MethodInfo *)0x0);
                pVVar9 = MVRigidBody::MVRigidBody_VelocityDamping
                                    ((Vector3 *)&stack0xffffffa8,*pVVar9,1.0,
                                     (MVInteractableBase *)(this->fields).interactableLocal,
                                     (MethodInfo *)0x0);
                fVar3 = pVVar9->y;
                fVar4 = pVVar9->z;
                _inputJump->x = pVVar9->x;
                _inputJump->y = fVar3;
                _inputJump->z = fVar4;
                return _inputJump;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar14)();
  return pVVar9;
}


/* Void HandleMovementBoost() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_HandleMovementBoost
               (AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  (this->fields).walkSpeed = (this->fields).walkSpeedBase;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 != (MVNetworkGame *)0x0) &&
      (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
      pMVar1 != (MVLocalPlayer *)0x0)) &&
     (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
    this_02 = (Boost__Class *)&stack0xfffffff8;
    bVar2 = BoostController::BoostController_TryGetActiveBoost
                      (this_00,BoostType__Enum_MovementSpeedFloatMultiplier,(Boost **)this_02,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_02 != (Boost__Class *)0x0) {
      pOStack3 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Int32,pOStack3);
      if (pOStack3 != (Object *)0x0) {
        if ((pOStack3->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int *)func_?();
          (this->fields).walkSpeed =
               ((float)*piVar5 / _UNK_? + _UNK_?) * 3.2191606e-29;
          return;
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _puStack00000010 = uVar4;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleSoundEffects(Boolean) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_HandleSoundEffects
               (AvatarMotor *this,bool inputJump,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields).bounceState;
  if (pBVar2 != (BounceState *)0x0) {
    if ((((pBVar2->fields).bounced & inputJump) != 0) &&
       ((this->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
      pAVar3 = (this->fields).OnActiveBounce;
      puStack_1 = (pAVar3->fields)._._.method;
      pvStack_4 = (pAVar3->fields)._._.method_code;
      (*(pAVar3->fields)._._.invoke_impl)();
    }
    return;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Init(AvatarInteractable, Vector3, MVWorldObjectClient, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Init
               (AvatarMotor *this,AvatarInteractable *interactableLocal,Vector3 centerOffset,
               MVWorldObjectClient *worldObjectOwner,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GroundChange>);
    func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarMotor__HandleMovementBoost__);
    func_?(&MethodInfo__AvatarMotor___Init_b__43_0__);
    func_?(&MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&TypeInfo__BounceState);
    func_?(&TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>);
    func_?(&
                    SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                   );
    func_?(&MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&MethodInfo__JumpState__UpdateJumpState_GroundChange_);
    func_?(&TypeInfo__JumpState);
    func_?(&TypeInfo__MVMovableMotorState);
    func_?(&MethodInfo__MvCharacterController__GetOverlappingObjects__);
    func_?(&TypeInfo__JumpState__OnWallJumpDelegate);
    func_?(&MethodInfo__SizeState__OnScalingWhileColliding_MVControllerColliderHit_);
    func_?(&TypeInfo__SizeState);
    func_?(&TypeInfo__MVRigidBody__StuckEvaluator);
    func_?(&TypeInfo__WaterState);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_SlowFall);
    func_?(&StringLiteral_FrictionMultiplier);
    func_?(&StringLiteral_SuperSpeed);
    cRam_? = '\x01';
  }
  if (skillDataManager == (WorldObjectSkillDataManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    pJVar1 = (JumpState_OnWallJumpDelegate *)func_?();
  }
  else {
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar3 / _UNK_?;
    }
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (bVar2 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar4 = (float)(100 - iVar3) / _UNK_?;
    }
    if (this == (AvatarMotor *)0x0) goto code_?;
    (this->fields).slowFallVelocityMultiplier = fVar4;
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (bVar2 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      fVar4 = (float)(100 - iVar3) / _UNK_?;
    }
    (this->fields).frictionMultiplier = fVar4;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    pSVar6 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar5,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                        );
    (this->fields).smoothCharacterController = pSVar6;
    func_?(&(this->fields).smoothCharacterController,pSVar6);
    pSVar6 = (this->fields).smoothCharacterController;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pSVar6 == (SmoothCharacterController *)0x0) goto code_?;
    SmoothCharacterController::SmoothCharacterController_Init
              (pSVar6,pGVar5,(CullingSubscriberBase *)0x0,worldObjectOwner,(MethodInfo *)0x0);
    pSVar6 = (this->fields).smoothCharacterController;
    if ((pSVar6 == (SmoothCharacterController *)0x0) ||
       (pMVar7 = (pSVar6->fields).controller, pMVar7 == (MvCharacterController *)0x0))
    goto code_?;
    MvCharacterController::MvCharacterController_Init
              (pMVar7,0.45,1.9,centerOffset,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_02 == (MVNetworkGame *)0x0) ||
       (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
       pMVar8 == (MVLocalPlayer *)0x0)) goto code_?;
    this_00 = (pMVar8->fields).boostController;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if ((this_03 == (NavMesh_OnNavMeshPreUpdate *)0x0) ||
       (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
                   (MethodInfo *)0x0), this_00 == (BoostController *)0x0)) goto code_?;
    BoostController::BoostController_SubscribeToBoostChanged
              (this_00,BoostType__Enum_MovementSpeedFloatMultiplier,(Action *)this_03,
               (MethodInfo *)0x0);
    AvatarMotor_HandleMovementBoost(this,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.worldObjectParent;
    if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
    pHVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                        (this_01,(MethodInfo *)0x0);
    pSVar6 = (this->fields).smoothCharacterController;
    if ((pSVar6 == (SmoothCharacterController *)0x0) ||
       (pMVar7 = (pSVar6->fields).controller, pMVar7 == (MvCharacterController *)0x0))
    goto code_?;
    (pMVar7->fields).IgnoreWoIds = pHVar9;
    func_?(&(pMVar7->fields).IgnoreWoIds,pHVar9);
    pSVar6 = (this->fields).smoothCharacterController;
    if (pSVar6 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar7 = (pSVar6->fields).controller;
    this_04 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                             );
    if (this_04 == (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
    RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
              (this_04,(Object *)pMVar7,MethodInfo__MvCharacterController__GetOverlappingObjects__,
               (MethodInfo *)0x0);
    this_05 = (MVRigidBody_StuckEvaluator *)func_?(TypeInfo__MVRigidBody__StuckEvaluator);
    if (this_05 == (MVRigidBody_StuckEvaluator *)0x0) goto code_?;
    MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
              (this_05,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_04,
               (MethodInfo *)0x0);
    (this->fields).stuckEvaluator = this_05;
    func_?(&(this->fields).stuckEvaluator,this_05);
    this_06 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__MVMovableMotorState);
    if (this_06 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_06,(MethodInfo *)0x0);
    (this->fields).movableMotorState = (MVMovableMotorState *)this_06;
    func_?(&(this->fields).movableMotorState,this_06);
    (this->fields).interactableLocal = interactableLocal;
    func_?(&(this->fields).interactableLocal,interactableLocal);
    pBVar10 = (BounceState *)func_?(TypeInfo__BounceState);
    if (pBVar10 == (BounceState *)0x0) goto code_?;
    BounceState::BounceState__ctor(pBVar10,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
    (this->fields).bounceState = pBVar10;
    func_?(&(this->fields).bounceState,pBVar10);
    this_07 = (WaterState *)func_?(TypeInfo__WaterState);
    if (this_07 == (WaterState *)0x0) goto code_?;
    WaterState::WaterState__ctor(this_07,skillDataManager,(MethodInfo *)0x0);
    (this->fields).waterState = this_07;
    func_?(&(this->fields).waterState,this_07);
    pSVar6 = (this->fields).smoothCharacterController;
    if (pSVar6 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar7 = (pSVar6->fields).controller;
    pSVar11 = (SizeState *)func_?(TypeInfo__SizeState);
    if (pSVar11 == (SizeState *)0x0) goto code_?;
    SizeState::SizeState__ctor(pSVar11,(MVInteractable *)interactableLocal,pMVar7,(MethodInfo *)0x0)
    ;
    (this->fields)._GetSizeState_k__BackingField = pSVar11;
    func_?(&(this->fields)._GetSizeState_k__BackingField,pSVar11);
    pJVar12 = (JumpState *)func_?(TypeInfo__JumpState);
    if (pJVar12 == (JumpState *)0x0) goto code_?;
    JumpState::JumpState__ctor(pJVar12,0.2,skillDataManager,(MethodInfo *)0x0);
    (this->fields).jumpState = pJVar12;
    func_?(&(this->fields).jumpState,pJVar12);
    pJVar12 = (this->fields).jumpState;
    if (pJVar12 == (JumpState *)0x0) goto code_?;
    pJVar13 = (pJVar12->fields).OnWallJump;
    skillDataManager =
         (WorldObjectSkillDataManager *)func_?(TypeInfo__JumpState__OnWallJumpDelegate);
    pMVar14 = MethodInfo__AvatarMotor___Init_b__43_0__;
    if ((Il2CppClass *)skillDataManager == (Il2CppClass *)0x0) goto code_?;
    pcVar15 = (char *)func_?(MethodInfo__AvatarMotor___Init_b__43_0__);
    ((Il2CppClass *)skillDataManager)->name = pcVar15;
    *(MethodInfo **)&(((Il2CppClass *)skillDataManager)->byval_arg).attrs = pMVar14;
    (((Il2CppClass *)skillDataManager)->byval_arg).data.typeHandle = (Il2CppMetadataTypeHandle)this;
    func_?(&((Il2CppClass *)skillDataManager)->byval_arg,this);
    uVar16 = pMVar14->parameters_count;
    ((Il2CppClass *)skillDataManager)->element_class = (Il2CppClass *)skillDataManager;
    cVar17 = func_?(pMVar14);
    if (cVar17 == '\0') {
code_?:
      ((Il2CppClass *)skillDataManager)->element_class =
           (Il2CppClass *)(((Il2CppClass *)skillDataManager)->byval_arg).data;
      pcVar15 = ((Il2CppClass *)skillDataManager)->name;
    }
    else if (pMVar14->indirect_call_via_invokers == 0) {
      if (uVar16 != 0) goto code_?;
      pcVar15 = &UNK_?;
    }
    else {
      pcVar15 = &UNK_?;
      if (uVar16 != 0) {
        pcVar15 = &UNK_?;
      }
    }
    ((Il2CppClass *)skillDataManager)->namespaze = pcVar15;
    *(undefined **)&(((Il2CppClass *)skillDataManager)->this_arg).attrs = &UNK_?;
    pJVar1 = (JumpState_OnWallJumpDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pJVar13,(Delegate *)skillDataManager,(MethodInfo *)0x0);
    uVar18 = CONCAT44(TypeInfo__JumpState__OnWallJumpDelegate,pJVar1);
    pJVar13 = (JumpState_OnWallJumpDelegate *)0x0;
    if (pJVar1 == (JumpState_OnWallJumpDelegate *)0x0) {
      (pJVar12->fields).OnWallJump = (JumpState_OnWallJumpDelegate *)0x0;
code_?:
      func_?(&(pJVar12->fields).OnWallJump,pJVar13);
      pMVar19 = (this->fields)._.groundState;
      if (pMVar19 == (MVGroundState *)0x0) goto code_?;
      pAVar20 = (pMVar19->fields).OnGroundChange;
      pJVar12 = (this->fields).jumpState;
      this_08 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<GroundChange>);
      skillDataManager = (WorldObjectSkillDataManager *)0x0;
      if (this_08 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_08,(Object *)pJVar12,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                 (MethodInfo *)0x0);
      skillDataManager =
           (WorldObjectSkillDataManager *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar20,(Delegate *)this_08,(MethodInfo *)0x0);
      if ((Il2CppClass *)skillDataManager == (Il2CppClass *)0x0) {
        (pMVar19->fields).OnGroundChange = (Action_1_GroundChange_ *)0x0;
code_?:
        func_?();
        pSVar6 = (this->fields).smoothCharacterController;
        skillDataManager = (WorldObjectSkillDataManager *)0x0;
        if ((pSVar6 == (SmoothCharacterController *)0x0) ||
           (skillDataManager = (WorldObjectSkillDataManager *)(pSVar6->fields).controller,
           (Il2CppClass *)skillDataManager == (Il2CppClass *)0x0)) goto code_?;
        pIVar21 = ((Il2CppClass *)skillDataManager)->rgctx_data;
        pSVar11 = (this->fields)._GetSizeState_k__BackingField;
        pAVar22 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        if (pAVar22 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar22,(Object *)pSVar11,
                   MethodInfo__SizeState__OnScalingWhileColliding_MVControllerColliderHit_,
                   (MethodInfo *)0x0);
        pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pIVar21,(Delegate *)pAVar22,(MethodInfo *)0x0);
        if (pDVar23 != (Delegate *)0x0) {
          pIVar21 = (Il2CppRGCTXData *)func_?();
          if (pIVar21 != (Il2CppRGCTXData *)0x0) {
            ((Il2CppClass *)skillDataManager)->rgctx_data = pIVar21;
            iVar24 = func_?();
            if (iVar24 != 0) goto code_?;
          }
          goto code_?;
        }
        ((Il2CppClass *)skillDataManager)->rgctx_data = (Il2CppRGCTXData *)0x0;
code_?:
        func_?();
        pSVar6 = (this->fields).smoothCharacterController;
        skillDataManager = (WorldObjectSkillDataManager *)0x0;
        if ((pSVar6 == (SmoothCharacterController *)0x0) ||
           (skillDataManager = (WorldObjectSkillDataManager *)(pSVar6->fields).controller,
           (Il2CppClass *)skillDataManager == (Il2CppClass *)0x0)) goto code_?;
        pIVar21 = ((Il2CppClass *)skillDataManager)->rgctx_data;
        pAVar22 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        if ((pAVar22 == (Action_1_MVControllerColliderHit_ *)0x0) ||
           (interactableLocal == (AvatarInteractable *)0x0)) goto code_?;
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar22,(Object *)interactableLocal,
                   (interactableLocal->klass->vtable).HandleMoveHit.method,(MethodInfo *)0x0);
        pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pIVar21,(Delegate *)pAVar22,(MethodInfo *)0x0);
        if (pDVar23 != (Delegate *)0x0) {
          pIVar21 = (Il2CppRGCTXData *)func_?();
          if (pIVar21 != (Il2CppRGCTXData *)0x0) {
            ((Il2CppClass *)skillDataManager)->rgctx_data = pIVar21;
            iVar24 = func_?();
            if (iVar24 != 0) goto code_?;
          }
          goto code_?;
        }
        ((Il2CppClass *)skillDataManager)->rgctx_data = (Il2CppRGCTXData *)0x0;
code_?:
        func_?();
        pSVar6 = (this->fields).smoothCharacterController;
        skillDataManager = (WorldObjectSkillDataManager *)0x0;
        if ((pSVar6 == (SmoothCharacterController *)0x0) ||
           (skillDataManager = (WorldObjectSkillDataManager *)(pSVar6->fields).controller,
           (Il2CppClass *)skillDataManager == (Il2CppClass *)0x0)) goto code_?;
        pIVar21 = ((Il2CppClass *)skillDataManager)->rgctx_data;
        pJVar12 = (this->fields).jumpState;
        pAVar22 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        if (pAVar22 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar22,(Object *)pJVar12,
                   MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
        pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pIVar21,(Delegate *)pAVar22,(MethodInfo *)0x0);
        if (pDVar23 != (Delegate *)0x0) {
          pIVar21 = (Il2CppRGCTXData *)func_?();
          if (pIVar21 != (Il2CppRGCTXData *)0x0) {
            ((Il2CppClass *)skillDataManager)->rgctx_data = pIVar21;
            iVar24 = func_?();
            if (iVar24 != 0) goto code_?;
          }
          goto code_?;
        }
        ((Il2CppClass *)skillDataManager)->rgctx_data = (Il2CppRGCTXData *)0x0;
code_?:
        func_?();
        pSVar6 = (this->fields).smoothCharacterController;
        skillDataManager = (WorldObjectSkillDataManager *)0x0;
        if ((pSVar6 == (SmoothCharacterController *)0x0) ||
           (skillDataManager = (WorldObjectSkillDataManager *)(pSVar6->fields).controller,
           (Il2CppClass *)skillDataManager == (Il2CppClass *)0x0)) goto code_?;
        pIVar21 = ((Il2CppClass *)skillDataManager)->rgctx_data;
        pBVar10 = (this->fields).bounceState;
        pAVar22 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        if (pAVar22 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar22,(Object *)pBVar10,
                   MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0
                  );
        pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pIVar21,(Delegate *)pAVar22,(MethodInfo *)0x0);
        if (pDVar23 == (Delegate *)0x0) {
          ((Il2CppClass *)skillDataManager)->rgctx_data = (Il2CppRGCTXData *)0x0;
code_?:
          func_?();
          pSVar6 = (this->fields).smoothCharacterController;
          skillDataManager = (WorldObjectSkillDataManager *)0x0;
          if ((pSVar6 == (SmoothCharacterController *)0x0) ||
             (skillDataManager = (WorldObjectSkillDataManager *)(pSVar6->fields).controller,
             (Il2CppClass *)skillDataManager == (Il2CppClass *)0x0)) goto code_?;
          object = (this->fields).impactState;
          pIVar21 = ((Il2CppClass *)skillDataManager)->rgctx_data;
          pAVar22 = (Action_1_MVControllerColliderHit_ *)
                    func_?(TypeInfo__System__Action<MVControllerColliderHit>);
          if (pAVar22 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
          mscorlib.dll::System::Action`1[MVControllerColliderHit]::
          Action_1_MVControllerColliderHit___ctor
                    (pAVar22,(Object *)object,
                     MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,
                     (MethodInfo *)0x0);
          pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pIVar21,(Delegate *)pAVar22,(MethodInfo *)0x0);
          if (pDVar23 == (Delegate *)0x0) {
            ((Il2CppClass *)skillDataManager)->rgctx_data = (Il2CppRGCTXData *)0x0;
            func_?();
            return;
          }
          pIVar21 = (Il2CppRGCTXData *)func_?();
          if (pIVar21 != (Il2CppRGCTXData *)0x0) {
            ((Il2CppClass *)skillDataManager)->rgctx_data = pIVar21;
            iVar24 = func_?();
            if (iVar24 != 0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
        pIVar21 = (Il2CppRGCTXData *)func_?();
        if (pIVar21 != (Il2CppRGCTXData *)0x0) {
          ((Il2CppClass *)skillDataManager)->rgctx_data = pIVar21;
          iVar24 = func_?();
          if (iVar24 != 0) goto code_?;
        }
        goto code_?;
      }
      pAVar20 = (Action_1_GroundChange_ *)func_?();
      if (pAVar20 != (Action_1_GroundChange_ *)0x0) {
        (pMVar19->fields).OnGroundChange = pAVar20;
        iVar24 = func_?();
        if (iVar24 != 0) goto code_?;
      }
      goto code_?;
    }
    if (pJVar1->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
      pJVar13 = pJVar1;
    }
    if (pJVar13 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
    (pJVar12->fields).OnWallJump = pJVar13;
    pJVar13 = (JumpState_OnWallJumpDelegate *)0x0;
    if (pJVar1->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
      pJVar13 = pJVar1;
    }
    skillDataManager = (WorldObjectSkillDataManager *)TypeInfo__JumpState__OnWallJumpDelegate;
    if (pJVar13 != (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
  }
  uVar18 = func_?(pJVar1,skillDataManager);
code_?:
  func_?(uVar18);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void InitSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_InitSkills
               (AvatarMotor *this,WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_SlowFall);
    func_?(&StringLiteral_FrictionMultiplier);
    func_?(&StringLiteral_SuperSpeed);
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar2 / _UNK_?;
    }
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar3 = (float)(100 - iVar2) / _UNK_?;
    }
    if (this != (AvatarMotor *)0x0) {
      (this->fields).slowFallVelocityMultiplier = fVar3;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        (this->fields).frictionMultiplier = _UNK_?;
        return;
      }
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      (this->fields).frictionMultiplier = (float)(100 - iVar2) / _UNK_?;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsAirJumping() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsAirJumping
               (AvatarMotor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pJVar2 = (this->fields).jumpState;
  if (pJVar2 == (JumpState *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pJVar2->fields).airJumping == 0) {
    return 0;
  }
  (pJVar2->fields).airJumping = 0;
  return 1;
}


/* Boolean IsJumping() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsJumping(AvatarMotor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pJVar2 = (this->fields).jumpState;
  if (pJVar2 != (JumpState *)0x0) {
    return (pJVar2->fields).jumping;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsStuck(AvatarMotor *this,MethodInfo *method)

{
  this_02 = (this->fields).stuckEvaluator;
  if (this_02 != (MVRigidBody_StuckEvaluator *)0x0) {
    this_09 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
               *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<int>);
      func_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    pOStack_1 = (Object__Class *)0x0;
    pMVar2 = (MethodInfo *)0x0;
    OStack_3.klass = (Object__Class *)0x0;
    OStack_3.monitor = (MonitorData *)0x0;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar4 - (this_02->fields).updateTime < (this_02->fields).updateInterval) {
      pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this_02->fields).stuckObjects;
      if (pDVar5 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar6 == 0) goto code_?;
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_09 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
               *)0x0;
    (this_02->fields).updateTime = fVar4;
    this_03 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_02,(MethodInfo *)0x0);
    if (this_03 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this_02->fields).stuckObjects;
      if (pDVar5 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
code_?:
        *unaff_FS_OFFSET = this_09;
        return 0;
      }
    }
    else {
      this_04 = (MethodInfo *)func_?();
      if (this_04 != (MethodInfo *)0x0) {
        OStack_3.monitor = (MonitorData *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_04,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)(this_02->fields).stuckObjects;
        if ((pDVar5 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)0x0) &&
           (this_05 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                                (pDVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                                ),
           this_05 !=
           (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
            *)0x0)) {
          pDVar7 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffa4,
                              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)this_05,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          key_00 = (MethodInfo *)pDVar7->_currentValue;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                *)&pOStack_1,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                              );
            if (bVar8 == 0) break;
            in_stack_9 = key_00;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_03,
                               (Object *)key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                              );
            if (bVar8 == 0) {
              pMVar10 = this_04;
              func_?();
              in_stack_11 = this_04;
              this_04 = pMVar10;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&pOStack_1,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     ,in_stack_11);
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffa4,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_04,
                              MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
          key = pLVar12->_current;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&stack0xffffff78,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                   ), bVar8 != 0) {
            this_00 = (this_02->fields).stuckObjects;
            if (this_00 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                      );
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffff78,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,pMVar2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
          DefaultSerializationBinder+TypeNameKey,System::Object]::
          Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                      *)&stack0xffffff98,
                     (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                      *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                    );
          while( true ) {
            this_08 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                      &stack0xffffffb4;
            pOVar13 = (Object__Class *)
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
            ;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              (this_08,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar8 == 0) break;
            pSVar14 = (String *)&UNK_?;
            this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                      (this_02->fields).stuckObjects;
            if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
            goto code_?;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (this_01,(Object *)&UNK_?,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                              );
            pMVar2 = (MethodInfo *)(this_02->fields).stuckObjects;
            if (bVar8 == 0) {
              this_03 = TypeInfo__MVRigidBody_StuckEvaluator__StuckObject;
              pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
              if (pMVar15 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              pSVar14 = (String *)0x0;
              overlapResult.localCubePos = (IntVector__Array *)pOVar13;
              overlapResult.woId = (int32_t)this_08;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar15,overlapResult,(MethodInfo *)0x0);
              if (pMVar2 == (MethodInfo *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pMVar2,(Object *)pSVar14,
                         (Object *)pMVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                        );
            }
            else {
              if ((pMVar2 == (MethodInfo *)0x0) ||
                 (this_03 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 , pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pMVar2,
                                       (Int32Enum__Enum)pSVar14,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar16 == (Object *)0x0)) goto code_?;
              pOVar16[1].monitor = (MonitorData *)this_08;
              pOVar16[2].klass = pOVar13;
              func_?();
              in_stack_9 = pMVar2;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     ,in_stack_9);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                    ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                    );
          pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)(this_02->fields).stuckObjects;
          if ((pDVar5 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)0x0) &&
             (this_06 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                  (pDVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_06 !=
             (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)0x0)) {
            pDVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                     Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)&stack0xffffffa4,this_06,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            OStack_3.klass = (Object__Class *)pDVar7->_dictionary;
            OStack_3.monitor = (MonitorData *)pDVar7->_index;
            pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar7->_currentValue;
            while( true ) {
              this_07 = pMVar15;
              this_09 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                         *)&OStack_3;
              bVar8 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      Object,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                (this_09,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (this_07 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              pMVar15 = this_07;
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              if (_UNK_? <= fVar4 - (this_07->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar8 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (this_07,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (&OStack_3,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_17);
                  *unaff_FS_OFFSET = this_09;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (&OStack_3,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                       ,unaff_retaddr);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  bVar8 = (*pcVar18)();
  return bVar8;
}


/* Void Move(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Move
               (AvatarMotor *this,Vector3 velocity,Vector3 movableVelocity,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
    (pMVar2->fields)._Velocity_k__BackingField.x = (float)(int)velocity._0_8_;
    (pMVar2->fields)._Velocity_k__BackingField.y = (float)(int)((ulonglong)velocity._0_8_ >> 0x20);
    (pMVar2->fields)._Velocity_k__BackingField.z = velocity.z;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    pSVar1 = (this->fields).smoothCharacterController;
    if ((pSVar1 != (SmoothCharacterController *)0x0) &&
       (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
      (*(pMVar2->klass->vtable).__unknown_1.methodPtr)
                (pMVar2,(velocity.x + movableVelocity.x) * fVar3,
                 (velocity.y + movableVelocity.y) * fVar3,(velocity.z + movableVelocity.z) * fVar3,
                 (pMVar2->klass->vtable).__unknown_1.method);
      pSVar1 = (this->fields).smoothCharacterController;
      if ((pSVar1 != (SmoothCharacterController *)0x0) &&
         (this_00 = (this->fields)._.groundState, this_00 != (MVGroundState *)0x0)) {
        MVGroundState::MVGroundState_Update
                  (this_00,(pSVar1->fields).controller,velocity,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_OnDestroy(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarMotor__HandleMovementBoost__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waterState;
  if (this_00 != (WaterState *)0x0) {
    WaterState::WaterState_Destroy(this_00,(MethodInfo *)0x0);
    object = (this->fields).jumpState;
    if (object != (JumpState *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action);
        func_?(&MethodInfo__JumpState__HandleJumpBoost__);
        cRam_? = '\x01';
      }
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
      if (bVar1 != 0) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
        pBVar4 = (pMVar3->fields).boostController;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if ((pNVar5 == (NavMesh_OnNavMeshPreUpdate *)0x0) ||
           (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)object,MethodInfo__JumpState__HandleJumpBoost__,
                       (MethodInfo *)0x0), pBVar4 == (BoostController *)0x0)) goto code_?;
        BoostController::BoostController_UnSubscribeToBoostChanged
                  (pBVar4,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)pNVar5,
                   (MethodInfo *)0x0);
      }
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        pBVar4 = (pMVar3->fields).boostController;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if ((pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
           (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
                       (MethodInfo *)0x0), pBVar4 != (BoostController *)0x0)) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    (pBVar4,BoostType__Enum_MovementSpeedFloatMultiplier,(Action *)pNVar5,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Reset(AvatarMotor *this,MethodInfo *method)

{
  MVRigidBody::MVRigidBody_Reset((MVRigidBody *)this,(MethodInfo *)0x0);
  pIVar1 = (this->fields).impactState;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  if (pIVar1 != (ImpactState *)0x0) {
    (pIVar1->fields).prevVelocityChangeVector.x = (pVVar2->zeroVector).x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar3;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar4;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (this->fields).velocityPrevFrame.x = (pVVar2->zeroVector).x;
    (this->fields).velocityPrevFrame.y = fVar3;
    (this->fields).velocityPrevFrame.z = fVar4;
    if ((this->fields).smoothCharacterController != (SmoothCharacterController *)0x0) {
      iVar5 = *(int *)(in_stack_6 + 0xc);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      if (iVar5 != 0) {
        *(undefined8 *)(iVar5 + 0x50) =
             *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
        *(float *)(iVar5 + 0x58) = fVar4;
        this_00 = *(Component **)(in_stack_6 + 0x10);
        if (this_00 != (Component *)0x0) {
          uStack7 = 0;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                            ,unaff_EBP,unaff_retaddr);
            cRam_? = '\x01';
          }
          if (this_00[1].klass != (Component__Class *)0x0) {
            mscorlib.dll::System::Collections::Generic::
            Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
            Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                      ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                       this_00[1].klass,
                       MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                      );
            this_00[2].monitor = (MonitorData *)0x0;
            func_?(&this_00[2].monitor,0);
            this_00[2].klass = (Component__Class *)0x0;
            func_?(this_00 + 2,0);
            pTVar8 = this_00[2].fields._.m_CachedPtr;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_00,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xfffffff8,pTVar9,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar8,*pVVar10,(MethodInfo *)0x0);
                pTVar8 = this_00[2].fields._.m_CachedPtr;
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   (this_00,(MethodInfo *)0x0);
                if (pTVar9 != (Transform *)0x0) {
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_rotation
                                      ((Quaternion *)&stack0xfffffff4,pTVar9,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar8,*pQVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          func_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_SuspendImpactDamage
               (AvatarMotor *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if (cRam_? == '\0') {
      ppVStack_2 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (pIVar1->fields).prevVelocityChangeVector.x = (pVVar3->zeroVector).x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar4;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar5;
    (pIVar1->fields).collidedPrevFrame = 0;
    return;
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateFunction() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_UpdateFunction
               (AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (this_00 = (pSVar1->fields).smoothPhysicsMovement, this_00 != (SmoothPhysicsMovement *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                     );
      cRam_? = '\x01';
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar4 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar5->fields)._size) {
        pSVar6 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar5,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).current = pSVar6;
        ppSVar4 = &(this_00->fields).current;
        func_?();
      }
      if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar5->fields)._size) {
        pSVar6 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar5,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).next = pSVar6;
        ppSVar4 = &(this_00->fields).next;
        func_?();
      }
    }
    if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar6 = (this_00->fields).next;
    ppSVar7 = &(this_00->fields).next;
    do {
      if ((float)ppSVar4 < (pSVar6->fields).time) {
code_?:
        pSVar6 = (this_00->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar6->fields).time;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar3 = ((float)ppSVar4 - fVar2) / fVar3;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar6 = (this_00->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar9 = (pSVar6->fields).position.x;
        uVar10 = (pSVar6->fields).position.y;
        pSVar11 = (this_00->fields).next;
        fVar2 = (pSVar6->fields).position.z;
        if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar12 = (pSVar11->fields).position.x;
        uVar13 = (pSVar11->fields).position.y;
        fVar14 = 0.0;
        if ((0.0 <= fVar3) && (fVar14 = _UNK_?, fVar3 <= _UNK_?)) {
          fVar14 = fVar3;
        }
        if (pTVar8 == (Transform *)0x0) break;
        this = (AvatarMotor *)(((pSVar11->fields).position.z - fVar2) * fVar14 + fVar2);
        fVar15 = ((float)uVar13 - (float)uVar10) * fVar14 + (float)uVar10;
        fVar16 = ((float)uVar12 - (float)uVar9) * fVar14 + (float)uVar9;
        VVar17 = (Vector3)CONCAT84(VVar17._0_8_,fVar16);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar8,VVar17,(MethodInfo *)0x0);
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar6 = (this_00->fields).current;
        if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
           (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) break;
        fVar2 = (pSVar6->fields).rotation.y;
        pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd0,(pSVar6->fields).rotation,
                             (pSVar11->fields).rotation,(float)this_00,(MethodInfo *)0x0);
        if (pTVar8 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar8,*pQVar18,(MethodInfo *)0x0);
        if ((this_00->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
             ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) break;
          (*(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.methodPtr)();
          pSVar6 = (this_00->fields).current;
          this_01 = (this_00->fields).worldObjectOwner;
          if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
             ((pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0 ||
              (pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                   ((Quaternion *)&stack0xffffffd0,(pSVar6->fields).rotation,
                                    (pSVar11->fields).rotation,fVar2,(MethodInfo *)0x0),
              this_01 == (MVWorldObjectClient *)0x0)))) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_01,*pQVar18,(MethodInfo *)0x0);
        }
        if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_02 = (this_00->fields).cullingSubscriberBase;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
          uVar20 = pVVar19->x;
          uVar21 = pVVar19->y;
          this = (AvatarMotor *)pVVar19->z;
          fVar15 = (float)uVar21;
          fVar22 = (float)uVar20;
          VVar17 = (Vector3)CONCAT84(VVar17._0_8_,fVar22);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_02,VVar17,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar5->fields)._size < 1) goto code_?;
      (this_00->fields).current = *ppSVar7;
      func_?();
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar7 = pSVar6;
      ppSVar4 = ppSVar7;
      func_?();
      pSVar6 = *ppSVar7;
    } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UpdateVelocity() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_UpdateVelocity
               (AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
    uVar3 = (pMVar2->fields)._Velocity_k__BackingField.x;
    uVar4 = (pMVar2->fields)._Velocity_k__BackingField.y;
    fVar5 = (pMVar2->fields)._Velocity_k__BackingField.z;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    (this->fields).velocityPrevFrame.x = (float)uVar3 / fVar6;
    (this->fields).velocityPrevFrame.y = (float)uVar4 / fVar6;
    (this->fields).velocityPrevFrame.z = fVar5 / fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Init>b__43_0() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor__Init_b__43_0
               (AvatarMotor *this,MethodInfo *method)

{
  if ((this->fields).OnWallJump != (AvatarMotor_OnWallJumpDelegate *)0x0) {
    pAVar1 = (this->fields).OnWallJump;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* AvatarMotor() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor__ctor(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    func_?(&TypeInfo__ImpactState);
    func_?(&TypeInfo__UnityEngine__Keyframe);
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&DD5CE2C05B256C578ABF6E71A1ED1333F4485549E8BD792C67E31B6E82755C18_Field);
    cRam_? = '\x01';
  }
  (this->fields).walkSpeed = 8.0;
  (this->fields).walkSpeedBase = 8.0;
  keys = (Keyframe__Array *)func_?(TypeInfo__UnityEngine__Keyframe,3);
  KStack_1.m_OutWeight = 0.0;
  KStack_1.m_WeightedMode = 0;
  KStack_1.m_InWeight = 0.0;
  KStack_1.m_Time = 0.0;
  KStack_1.m_Value = 0.0;
  KStack_1.m_InTangent = 0.0;
  KStack_1.m_OutTangent = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
            (&KStack_1,-90.0,1.0,(MethodInfo *)0x0);
  if (keys != (Keyframe__Array *)0x0) {
    if (keys->max_length == 0) goto code_?;
    keys->vector[0].m_Time = KStack_1.m_Time;
    keys->vector[0].m_Value = KStack_1.m_Value;
    keys->vector[0].m_InTangent = KStack_1.m_InTangent;
    keys->vector[0].m_OutTangent = KStack_1.m_OutTangent;
    keys->vector[0].m_WeightedMode = KStack_1.m_WeightedMode;
    keys->vector[0].m_InWeight = KStack_1.m_InWeight;
    keys->vector[0].m_OutWeight = KStack_1.m_OutWeight;
    KStack_2.m_WeightedMode = 0;
    KStack_2.m_InWeight = 0.0;
    KStack_2.m_Time = 0.0;
    KStack_2.m_Value = 0.0;
    KStack_2.m_InTangent = 0.0;
    KStack_2.m_OutTangent = 0.0;
    KStack_2.m_OutWeight = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
              (&KStack_2,0.0,1.0,(MethodInfo *)0x0);
    if (keys->max_length < 2) goto code_?;
    keys->vector[1].m_Time = KStack_2.m_Time;
    keys->vector[1].m_Value = KStack_2.m_Value;
    keys->vector[1].m_InTangent = KStack_2.m_InTangent;
    keys->vector[1].m_OutTangent = KStack_2.m_OutTangent;
    keys->vector[1].m_WeightedMode = KStack_2.m_WeightedMode;
    keys->vector[1].m_InWeight = KStack_2.m_InWeight;
    keys->vector[1].m_OutWeight = KStack_2.m_OutWeight;
    this_02 = (Keyframe *)&stack0xffffffa8;
    uVar3._0_4_ = 0;
    uVar3._4_4_ = 0.0;
    fVar4 = 1.0;
    fVar5 = 90.0;
    puVar6 = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
              (this_02,90.0,1.0,(MethodInfo *)0x0);
    if (keys->max_length < 3) goto code_?;
    keys->vector[2].m_Time = (float)puVar6;
    keys->vector[2].m_Value = (float)this_02;
    keys->vector[2].m_InTangent = fVar5;
    keys->vector[2].m_OutTangent = fVar4;
    keys->vector[2].m_WeightedMode = (int32_t)uVar3;
    keys->vector[2].m_InWeight = uVar3._4_4_;
    keys->vector[2].m_OutWeight = 0.0;
    KStack_2.m_Value = (float)TypeInfo__UnityEngine__AnimationCurve;
    KStack_2.m_Time = (float)&UNK_?;
    this_00 = (AnimationCurve *)func_?();
    if (this_00 != (AnimationCurve *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor
                (this_00,keys,(MethodInfo *)0x0);
      (this->fields).slopeSpeedMultiplier = this_00;
      func_?(&(this->fields).slopeSpeedMultiplier);
      explosionEvents =
           (RuntimeEventType__Enum__Array *)
           func_?(TypeInfo__MV__Common__RuntimeEventType,3);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                ((Array *)explosionEvents,
                 _DD5CE2C05B256C578ABF6E71A1ED1333F4485549E8BD792C67E31B6E82755C18_Field,
                 (MethodInfo *)0x0);
      this_01 = (ImpactState *)func_?(TypeInfo__ImpactState);
      if (this_01 != (ImpactState *)0x0) {
        ImpactState::ImpactState__ctor(this_01,explosionEvents,(MethodInfo *)0x0);
        (this->fields).impactState = this_01;
        func_?(&(this->fields).impactState);
        (this->fields).speedBoostSetting = 1.0;
        (this->fields).slowFallVelocityMultiplier = 1.0;
        (this->fields).frictionMultiplier = 1.0;
        (this->fields).lerpTime = 0.4;
        MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  KStack_2.m_Value = (float)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MvCharacterController get_Controller() */

MvCharacterController *
Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_Controller(AvatarMotor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).smoothCharacterController;
  if (pSVar2 != (SmoothCharacterController *)0x0) {
    return (pSVar2->fields).controller;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar6 = (MvCharacterController *)(*pcVar5)();
  return pMVar6;
}


/* Single get_FrictionCoefficient() */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_FrictionCoefficient
                (AvatarMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.groundState;
  pAVar2 = (this->fields).interactableLocal;
  if ((pMVar1 != (MVGroundState *)0x0) &&
     (pMVar3 = (pMVar1->fields).groundMaterial, pMVar3 != (MVMaterial *)0x0)) {
    if (pAVar2 != (AvatarInteractable *)0x0) {
      fVar4 = (float10)(*(pAVar2->klass->vtable).HandleModifierEffect.methodPtr)
                                 (pAVar2,0xc,
                                  (pMVar3->fields)._PhysicalProperties_k__BackingField.friction *
                                  (this->fields).frictionMultiplier,
                                  (pAVar2->klass->vtable).HandleModifierEffect.method);
      fVar5 = MathFunctions::MathFunctions_Pow2((float)fVar4,(MethodInfo *)0x0);
      return fVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar4 = (float10)(*pcVar6)();
  return (float)fVar4;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
    uVar3 = (pMVar2->fields)._Velocity_k__BackingField.x;
    uVar4 = (pMVar2->fields)._Velocity_k__BackingField.y;
    fVar5 = (pMVar2->fields)._Velocity_k__BackingField.z;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    __return_storage_ptr__->x = (float)uVar3 / fVar6;
    __return_storage_ptr__->y = (float)uVar4 / fVar6;
    __return_storage_ptr__->z = fVar5 / fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Void set_WalkSpeedBase(Single) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_set_WalkSpeedBase
               (AvatarMotor *this,float value,MethodInfo *method)

{
  (this->fields).walkSpeedBase = value;
  AvatarMotor_HandleMovementBoost(this,(MethodInfo *)0x0);
  return;
}

