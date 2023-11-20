
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 inputDirection,MethodInfo *method)

{
  fVar1 = AvatarMotor_GetSpeed(this,(this->fields).speed,inputDirection,(MethodInfo *)0x0);
  (this->fields).speed = fVar1;
  fVar2 = (float10)func_?();
  if ((float)fVar2 != 0.0) {
    fVar2 = (float10)func_?();
    fVar1 = inputDirection.z * fVar1 * _UNK_?;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fStack_4 = (float)fVar2 * fVar3 + velocity.z;
    fStack_5 = fVar3 * 0.0 + velocity.x;
    fVar3 = fVar1 * fVar3 + _UNK_?;
    fVar2 = (float10)func_?();
    fVar1 = (float)fVar2;
    pfVar6 = &(this->fields).speed;
    if (fStack_7 < fVar1 && (*pfVar6 <= fVar1 && fVar1 != *pfVar6)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar8 = (double)(fVar3 * fVar3 + fStack_5 * fStack_5 + fStack_4 * fStack_4);
      if (dVar8 < 0.0) {
        func_?();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      fVar1 = (float)dVar8;
      if (_UNK_? < fVar1) {
        fStack_4 = fStack_4 / fVar1;
        fVar1 = fStack_5 / fVar1;
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
        fStack_4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      }
      fStack_4 = fStack_4 * fStack_7;
      fStack_5 = fVar1 * fStack_7;
    }
    velocity.x = fStack_5;
    velocity.z = fStack_4;
  }
  uRam_? = CONCAT44(velocity.y,velocity.x);
  fRam00000008 = velocity.z;
  return (Vector3 *)0x0;
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
          pMVar19 = (pAVar13->klass->vtable).HandleModifierEffect.method;
          fStack_4 = fStack_2;
          fVar20 = (float10)(*(code *)pMVar19)();
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
          Easing_InQuad((float)fVar20,(MethodInfo *)0x0);
          fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          fVar21 = (fVar21 * (float)pMVar19) / _UNK_?;
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
              fVar20 = (float10)(*(code *)(pAVar13->klass->vtable).HandleModifierEffect.method)();
              fVar11 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
                      Easing::Easing_InQuad((float)fVar20,(MethodInfo *)0x0);
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
      (*(code *)(pAVar2->klass->vtable).TakeDamage.method)();
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
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IMotorAPI);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  cVar3 = (*(code *)(this->klass->vtable).get_IsMovementLocked.method)
                     (this,(this->klass->vtable).set_IsMovementLocked.methodPtr);
  if (cVar3 != '\0') {
    return;
  }
  pSVar4 = (this->fields).smoothCharacterController;
  if (((pSVar4 != (SmoothCharacterController *)0x0) &&
      (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) &&
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar5,(MethodInfo *)0x0), motorApi != (IMotorAPI *)0x0)) {
    pIVar7 = motorApi->klass;
    uVar8 = 0;
    uVar9._0_1_ = (pIVar7->_1).rank;
    uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
    if (uVar9 != 0) {
      do {
        if (pIVar7->interfaceOffsets[uVar8].interfaceType == (Il2CppClass *)TypeInfo__IMotorAPI) {
          ppMVar10 = &(&(motorApi->klass->vtable).get_Rotation)
                      [motorApi->klass->interfaceOffsets[uVar8].offset].method;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    ppMVar10 = (MethodInfo **)func_?(motorApi,TypeInfo__IMotorAPI,2);
code_?:
    pQVar11 = (Quaternion *)(*(code *)*ppMVar10)(&stack0xffffffb4,motorApi,ppMVar10[1]);
    if (pTVar6 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar6,*pQVar11,(MethodInfo *)0x0);
      pVVar12 = &(this->fields).velocityPrevFrame;
      prevVelocity = *pVVar12;
      VVar13 = *pVVar12;
      this_00 = (this->fields).movableMotorState;
      VVar14 = (this->fields).velocityPrevFrame;
      pSVar4 = (this->fields).smoothCharacterController;
      if (pSVar4 != (SmoothCharacterController *)0x0) {
        pMVar5 = (pSVar4->fields).controller;
        this_01 = (((this->fields).smoothCharacterController)->fields).controller;
        if ((this_01 != (MvCharacterController *)0x0) &&
           (fVar15 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                     TypedUxmlAttributeDescription`1[System::Single]::
                     TypedUxmlAttributeDescription_1_System_Single__get_defaultValue
                               ((TypedUxmlAttributeDescription_1_System_Single_ *)this_01,
                                (MethodInfo *)0x0), this_00 != (MVMovableMotorState *)0x0)) {
          bVar16 = MVMovableMotorState::MVMovableMotorState_Move
                             (this_00,VVar14,pMVar5,fVar15,(this->fields)._.groundState,
                              (Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
          uVar17 = uVar2;
          inputJump = func_?(4,TypeInfo__IMotorAPI,motorApi);
          pVVar12 = (Vector3 *)func_?(&stack0xffffffb8,0,TypeInfo__IMotorAPI,motorApi);
          VVar14.z = 0.0;
          VVar14.x = (float)(int)uVar2;
          VVar14.y = (float)(int)(uVar2 >> 0x20);
          pVVar12 = AvatarMotor_GetVelocity
                              ((Vector3 *)&stack0xffffffb8,this,VVar13,VVar14,inputJump,*pVVar12,
                               (MethodInfo *)0x0);
          if (bVar16 == 0) {
            VVar13.z = 0.0;
            VVar13.x = (float)(int)uVar17;
            VVar13.y = (float)(int)(uVar17 >> 0x20);
            AvatarMotor_Move(this,*pVVar12,VVar13,(MethodInfo *)0x0);
            this._3_1_ = 0;
          }
          else {
            VVar14 = *pVVar12;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            AvatarMotor_Move(this,VVar14,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
            this._3_1_ = bVar16;
          }
          pSVar4 = (pAVar1->fields).smoothCharacterController;
          if ((pSVar4 != (SmoothCharacterController *)0x0) &&
             (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) {
            uVar18 = (pMVar5->fields)._Velocity_k__BackingField.x;
            uVar19 = (pMVar5->fields)._Velocity_k__BackingField.y;
            fVar15 = (pMVar5->fields)._Velocity_k__BackingField.z;
            fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            fVar15 = fVar15 / fVar20;
            (pAVar1->fields).velocityPrevFrame.x = (float)uVar18 / fVar20;
            (pAVar1->fields).velocityPrevFrame.y = (float)uVar19 / fVar20;
            (pAVar1->fields).velocityPrevFrame.z = fVar15;
            if (this._3_1_ == 0) {
              (pAVar1->fields).velocityPrevFrame.x = (float)uVar18 / fVar20 - (float)uVar17;
              (pAVar1->fields).velocityPrevFrame.y =
                   (float)uVar19 / fVar20 - (float)(uVar17 >> 0x20);
              (pAVar1->fields).velocityPrevFrame.z = fVar15 - 0.0;
            }
            this_02 = (pAVar1->fields).impactState;
            if (this_02 != (ImpactState *)0x0) {
              fVar15 = ImpactState::ImpactState_UpdateImpactState
                                 (this_02,(pAVar1->fields).velocityPrevFrame,prevVelocity,
                                  (MVInteractableBase *)(pAVar1->fields).interactableLocal,
                                  (MethodInfo *)0x0);
              if (fVar15 != _UNK_?) {
                pAVar21 = (pAVar1->fields).interactableLocal;
                if (pAVar21 == (AvatarInteractable *)0x0) goto code_?;
                (*(code *)(pAVar21->klass->vtable).TakeDamage.method)
                          (pAVar21,fVar15,0,5,(pAVar21->klass->vtable).TakeDamageOverTime.methodPtr);
              }
              bVar22 = func_?(4,TypeInfo__IMotorAPI,motorApi);
              pBVar23 = (pAVar1->fields).bounceState;
              if (pBVar23 != (BounceState *)0x0) {
                if ((((pBVar23->fields).bounced & bVar22) != 0) &&
                   ((pAVar1->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0))
                {
                  pAVar24 = (pAVar1->fields).OnActiveBounce;
                  (*(pAVar24->fields)._._.invoke_impl)
                            ((pAVar24->fields)._._.method_code,(pAVar24->fields)._._.method);
                }
                this_03 = (pAVar1->fields)._GetSizeState_k__BackingField;
                if (this_03 != (SizeState *)0x0) {
                  SizeState::SizeState_UpdateScale(this_03,(MethodInfo *)0x0);
                  pSVar4 = (pAVar1->fields).smoothCharacterController;
                  this_04 = (pAVar1->fields).waterState;
                  if ((((pSVar4 != (SmoothCharacterController *)0x0) &&
                       (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0
                       )) && (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pMVar5,(MethodInfo *)0x0),
                             pTVar6 != (Transform *)0x0)) &&
                     (pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffb8,pTVar6,(MethodInfo *)0x0),
                     this_04 != (WaterState *)0x0)) {
                    WaterState::WaterState_Update
                              (this_04,*pVVar12,
                               (MVInteractableBase *)(pAVar1->fields).interactableLocal,
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
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Single GetSpeed(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeed
                (AvatarMotor *this,float currentSpeed,Vector3 inputDirection,MethodInfo *method)

{
  pAVar1 = (this->fields).interactableLocal;
  if (pAVar1 != (AvatarInteractable *)0x0) {
    fVar2 = (float10)(*(code *)(pAVar1->klass->vtable).HandleModifierEffect.method)
                               (pAVar1,3,(this->fields).walkSpeed,
                                (pAVar1->klass->vtable).ClearModifiers.methodPtr);
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
      pVVar3 = AvatarMotor_ApplyInputVelocityChange
                         ((Vector3 *)&stack0xffffffd4,this,velocity,inputDirection,(MethodInfo *)0x0
                         );
      pVVar3 = MVRigidBody::MVRigidBody_ApplyGravity
                         ((Vector3 *)&stack0xffffffd4,(MVRigidBody *)this,*pVVar3,
                          (this->fields).velocityPrevFrame,
                          (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      if ((inputJump != 0) && ((float)uVar4._4_4_ < 0.0)) {
        uVar4 = CONCAT44((float)uVar4._4_4_ * (this->fields).slowFallVelocityMultiplier,
                          (undefined4)uVar4);
      }
    }
    else {
      pMVar1 = (this->fields)._.groundState;
      if (pMVar1 == (MVGroundState *)0x0) goto code_?;
      pVVar3 = MVGroundState::MVGroundState_ApplySlidingVelocity
                         ((Vector3 *)&stack0xffffffc8,pMVar1,velocity,(this->fields)._.density,
                          (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
      fVar5 = pVVar3->x;
      fVar6 = pVVar3->y;
      fVar7 = pVVar3->z;
      fVar8 = fVar5;
      fVar9 = fVar6;
      fVar10 = fVar7;
      fVar11 = AvatarMotor_get_FrictionCoefficient(this,(MethodInfo *)0x0);
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      velocity_02.y = fVar6 - fVar9 * fVar11 * fVar12;
      velocity_02.x = fVar5 - fVar8 * fVar11 * fVar12;
      velocity_02.z = fVar7 - fVar10 * fVar11 * fVar12;
      pVVar3 = AvatarMotor_ApplyInputVelocityChangeGrounded
                         ((Vector3 *)&stack0xffffffc8,this,velocity_02,inputDirection,
                          (MethodInfo *)0x0);
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
    }
    this_00 = (this->fields).bounceState;
    if (this_00 != (BounceState *)0x0) {
      __return_storage_ptr__ = (Vector3 *)uVar4;
      velocity_00.z = fVar5;
      velocity_00.x = (float)(int)uVar4;
      velocity_00.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      pVVar3 = BounceState::BounceState_ApplyBounceVelocity
                         ((Vector3 *)&stack0xffffffc8,this_00,velocity_00,(MethodInfo *)0x0);
      this_01 = (this->fields).jumpState;
      uVar13 = pVVar3->x;
      uVar14 = pVVar3->y;
      fVar6 = pVVar3->z;
      interactableLocal = (this->fields).interactableLocal;
      fVar5 = (this->fields)._.density;
      pMVar1 = (this->fields)._.groundState;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      pSVar15 = (this->fields).smoothCharacterController;
      if ((pSVar15 != (SmoothCharacterController *)0x0) &&
         (this_02 = (pSVar15->fields).controller, this_02 != (MvCharacterController *)0x0)) {
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (this_04 != (GameObject *)0x0) {
          this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_04,(MethodInfo *)0x0);
          if (this_05 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffc8,this_05,(MethodInfo *)0x0);
            if (this_03 != (WaterPlaneManager *)0x0) {
              fVar7 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                                 (this_03,*pVVar3,(MethodInfo *)0x0);
              if (this_01 != (JumpState *)0x0) {
                velocity_01.y = (float)uVar14;
                velocity_01.x = (float)uVar13;
                velocity_01.z = fVar6;
                pVVar3 = JumpState::JumpState_ApplyJumping
                                   ((Vector3 *)&stack0xffffffc8,this_01,
                                    (MVInteractableBase *)interactableLocal,pMVar1,fVar5,fVar7,0xe5
                                    ,velocity_01,movableVelocity,(MethodInfo *)0x0);
                pVVar3 = MVRigidBody::MVRigidBody_GetImpulse
                                   ((Vector3 *)&stack0xffffffc8,(MVRigidBody *)this,*pVVar3,
                                    (MVInteractableBase *)(this->fields).interactableLocal,
                                    (MethodInfo *)0x0);
                pVVar3 = MVRigidBody::MVRigidBody_VelocityDamping
                                   ((Vector3 *)&stack0xffffffc8,*pVVar3,1.0,
                                    (MVInteractableBase *)(this->fields).interactableLocal,
                                    (MethodInfo *)0x0);
                fVar6 = pVVar3->y;
                fVar5 = pVVar3->z;
                __return_storage_ptr__->x = pVVar3->x;
                __return_storage_ptr__->y = fVar6;
                __return_storage_ptr__->z = fVar5;
                return __return_storage_ptr__;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar16)();
  return pVVar3;
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pBVar2 = (pMVar1->fields).boostController, pBVar2 != (BoostController *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                       );
        cRam_? = '\x01';
      }
      pDVar3 = (pBVar2->fields).activeBoosts;
      if (pDVar3 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar3,1,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                          );
        if (bVar4 == 0) {
          func_?();
          return;
        }
        pDVar3 = (pBVar2->fields).activeBoosts;
        if (pDVar3 != (Dictionary_2_BoostType_Boost_ *)0x0) {
          this_01 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,1,
                                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                       );
          func_?();
          fVar5 = (this->fields).walkSpeedBase;
          if (this_01 != (Boost *)0x0) {
            pOVar6 = Boost::Boost_get_Value(this_01,(MethodInfo *)0x0);
            if (pOVar6 != (Object *)0x0) {
              if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar7 = (int *)func_?();
                (this->fields).walkSpeed = ((float)*piVar7 / _UNK_? + _UNK_?) * fVar5;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  pOVar6 = (Object *)func_?();
code_?:
  func_?(pOVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
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
    if (this == (AvatarMotor *)0x0) goto code_?;
    (this->fields).slowFallVelocityMultiplier = fVar3;
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      fVar3 = (float)(100 - iVar2) / _UNK_?;
    }
    (this->fields).frictionMultiplier = fVar3;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pSVar5 = (SmoothCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar4,
                        SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                       );
    (this->fields).smoothCharacterController = pSVar5;
    func_?(&(this->fields).smoothCharacterController,pSVar5);
    pSVar5 = (this->fields).smoothCharacterController;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pSVar5 == (SmoothCharacterController *)0x0) goto code_?;
    SmoothCharacterController::SmoothCharacterController_Init
              (pSVar5,pGVar4,(CullingSubscriberBase *)0x0,worldObjectOwner,(MethodInfo *)0x0);
    pSVar5 = (this->fields).smoothCharacterController;
    if ((pSVar5 == (SmoothCharacterController *)0x0) ||
       (pMVar6 = (pSVar5->fields).controller, pMVar6 == (MvCharacterController *)0x0))
    goto code_?;
    MvCharacterController::MvCharacterController_Init
              (pMVar6,0.45,1.9,centerOffset,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_02 == (MVNetworkGame *)0x0) ||
       (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
       pMVar7 == (MVLocalPlayer *)0x0)) goto code_?;
    this_00 = (pMVar7->fields).boostController;
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
               (MethodInfo *)0x0);
    if (this_00 == (BoostController *)0x0) goto code_?;
    BoostController::BoostController_SubscribeToBoostChanged
              (this_00,BoostType__Enum_MovementSpeedFloatMultiplier,(Action *)pNVar8,
               (MethodInfo *)0x0);
    AvatarMotor_HandleMovementBoost(this,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.worldObjectParent;
    if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
    pHVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                        (this_01,(MethodInfo *)0x0);
    pSVar5 = (this->fields).smoothCharacterController;
    if ((pSVar5 == (SmoothCharacterController *)0x0) ||
       (pMVar6 = (pSVar5->fields).controller, pMVar6 == (MvCharacterController *)0x0))
    goto code_?;
    (pMVar6->fields).IgnoreWoIds = pHVar9;
    func_?(&(pMVar6->fields).IgnoreWoIds,pHVar9);
    pSVar5 = (this->fields).smoothCharacterController;
    if (pSVar5 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar6 = (pSVar5->fields).controller;
    this_03 = (Func_1_Object_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                             );
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (this_03,(Object *)pMVar6,MethodInfo__MvCharacterController__GetOverlappingObjects__,
               (MethodInfo *)0x0);
    this_04 = (MVRigidBody_StuckEvaluator *)func_?(TypeInfo__MVRigidBody__StuckEvaluator);
    MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
              (this_04,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_03,
               (MethodInfo *)0x0);
    (this->fields).stuckEvaluator = this_04;
    func_?(&(this->fields).stuckEvaluator,this_04);
    this_05 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__MVMovableMotorState);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_05,(MethodInfo *)0x0);
    (this->fields).movableMotorState = (MVMovableMotorState *)this_05;
    func_?(&(this->fields).movableMotorState,this_05);
    (this->fields).interactableLocal = interactableLocal;
    func_?();
    this_06 = (BounceState *)func_?();
    BounceState::BounceState__ctor(this_06,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
    (this->fields).bounceState = this_06;
    func_?();
    this_07 = (WaterState *)func_?();
    WaterState::WaterState__ctor(this_07,skillDataManager,(MethodInfo *)0x0);
    (this->fields).waterState = this_07;
    func_?(&(this->fields).waterState);
    pSVar5 = (this->fields).smoothCharacterController;
    if (pSVar5 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar6 = (pSVar5->fields).controller;
    this_08 = (SizeState *)func_?(TypeInfo__SizeState);
    SizeState::SizeState__ctor
              (this_08,(MVInteractable *)&(this->fields).bounceState,pMVar6,(MethodInfo *)0x0);
    (this->fields)._GetSizeState_k__BackingField = this_08;
    func_?(&(this->fields)._GetSizeState_k__BackingField,this_08);
    this_09 = (JumpState *)func_?(TypeInfo__JumpState);
    JumpState::JumpState__ctor(this_09,0.2,skillDataManager,(MethodInfo *)0x0);
    (this->fields).jumpState = this_09;
    func_?();
    pJVar10 = (this->fields).jumpState;
    if (pJVar10 == (JumpState *)0x0) goto code_?;
    pJVar11 = (pJVar10->fields).OnWallJump;
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__JumpState__OnWallJumpDelegate)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,MethodInfo__AvatarMotor___Init_b__43_0__,(MethodInfo *)0x0);
    pJVar11 = (JumpState_OnWallJumpDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pJVar11,(Delegate *)pNVar8,(MethodInfo *)0x0);
    if (pJVar11 == (JumpState_OnWallJumpDelegate *)0x0) {
      (pJVar10->fields).OnWallJump = (JumpState_OnWallJumpDelegate *)0x0;
code_?:
      func_?();
      pMVar12 = (this->fields)._.groundState;
      if (pMVar12 == (MVGroundState *)0x0) goto code_?;
      pAVar13 = (pMVar12->fields).OnGroundChange;
      pOVar14 = (Object *)(this_09->fields).lastButtonDownTime;
      this_10 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<GroundChange>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_10,pOVar14,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                 (MethodInfo *)0x0);
      pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar13,(Delegate *)this_10,(MethodInfo *)0x0);
      if (pDVar15 == (Delegate *)0x0) {
        (pMVar12->fields).OnGroundChange = (Action_1_GroundChange_ *)0x0;
code_?:
        func_?();
        fVar3 = (this_09->fields).jumpDir.y;
        if ((fVar3 == 0.0) || (iVar16 = *(int *)((int)fVar3 + 0x10), iVar16 == 0))
        goto code_?;
        pDVar15 = *(Delegate **)(iVar16 + 100);
        object = (this_09->fields).wallJumpHits;
        pAVar17 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar17,(Object *)object,
                   MethodInfo__SizeState__OnScalingWhileColliding_MVControllerColliderHit_,
                   (MethodInfo *)0x0);
        pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar15,(Delegate *)pAVar17,(MethodInfo *)0x0);
        if (pDVar15 != (Delegate *)0x0) {
          iVar18 = func_?();
          if (iVar18 != 0) {
            *(int *)(iVar16 + 100) = iVar18;
            iVar16 = func_?();
            if (iVar16 != 0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        *(undefined4 *)(iVar16 + 100) = 0;
code_?:
        func_?();
        fVar3 = (this_09->fields).jumpDir.y;
        if ((fVar3 == 0.0) || (iVar16 = *(int *)((int)fVar3 + 0x10), iVar16 == 0))
        goto code_?;
        pDVar15 = *(Delegate **)(iVar16 + 100);
        pAVar17 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar17,(Object *)&UNK_?,*(void **)(_UNK_? + 0x144),
                   (MethodInfo *)0x0);
        pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar15,(Delegate *)pAVar17,(MethodInfo *)0x0);
        if (pDVar15 == (Delegate *)0x0) {
          *(undefined4 *)(iVar16 + 100) = 0;
code_?:
          func_?();
          fVar3 = (this_09->fields).jumpDir.y;
          if ((fVar3 != 0.0) && (iVar16 = *(int *)((int)fVar3 + 0x10), iVar16 != 0)) {
            pDVar15 = *(Delegate **)(iVar16 + 100);
            pOVar14 = (Object *)(this_09->fields).lastButtonDownTime;
            pAVar17 = (Action_1_MVControllerColliderHit_ *)
                      func_?(TypeInfo__System__Action<MVControllerColliderHit>);
            mscorlib.dll::System::Action`1[MVControllerColliderHit]::
            Action_1_MVControllerColliderHit___ctor
                      (pAVar17,pOVar14,MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,
                       (MethodInfo *)0x0);
            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar15,(Delegate *)pAVar17,(MethodInfo *)0x0);
            if (pDVar15 == (Delegate *)0x0) {
              *(undefined4 *)(iVar16 + 100) = 0;
            }
            else {
              iVar18 = func_?();
              if (iVar18 == 0) goto code_?;
              *(int *)(iVar16 + 100) = iVar18;
              iVar16 = func_?();
              if (iVar16 == 0) goto code_?;
            }
            func_?();
            fVar3 = (this_09->fields).jumpDir.y;
            if ((fVar3 != 0.0) && (iVar16 = *(int *)((int)fVar3 + 0x10), iVar16 != 0)) {
              pDVar15 = *(Delegate **)(iVar16 + 100);
              pOVar14 = (Object *)(this_09->fields).jumpTimeOut;
              pAVar17 = (Action_1_MVControllerColliderHit_ *)
                        func_?(TypeInfo__System__Action<MVControllerColliderHit>);
              mscorlib.dll::System::Action`1[MVControllerColliderHit]::
              Action_1_MVControllerColliderHit___ctor
                        (pAVar17,pOVar14,
                         MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,
                         (MethodInfo *)0x0);
              pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  (pDVar15,(Delegate *)pAVar17,(MethodInfo *)0x0);
              if (pDVar15 == (Delegate *)0x0) {
                *(undefined4 *)(iVar16 + 100) = 0;
              }
              else {
                iVar18 = func_?();
                if (iVar18 == 0) goto code_?;
                *(int *)(iVar16 + 100) = iVar18;
                iVar16 = func_?();
                if (iVar16 == 0) goto code_?;
              }
              func_?();
              fVar3 = (this_09->fields).jumpDir.y;
              if ((fVar3 != 0.0) && (iVar16 = *(int *)((int)fVar3 + 0x10), iVar16 != 0)) {
                pDVar15 = *(Delegate **)(iVar16 + 100);
                pOVar14 = (Object *)(this_09->fields).jumpDir.z;
                pAVar17 = (Action_1_MVControllerColliderHit_ *)
                          func_?(TypeInfo__System__Action<MVControllerColliderHit>);
                mscorlib.dll::System::Action`1[MVControllerColliderHit]::
                Action_1_MVControllerColliderHit___ctor
                          (pAVar17,pOVar14,
                           MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,
                           (MethodInfo *)0x0);
                pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    (pDVar15,(Delegate *)pAVar17,(MethodInfo *)0x0);
                if (pDVar15 == (Delegate *)0x0) {
                  *(undefined4 *)(iVar16 + 100) = 0;
                  func_?();
                  return;
                }
                iVar18 = func_?();
                if (iVar18 != 0) {
                  *(int *)(iVar16 + 100) = iVar18;
                  iVar16 = func_?();
                  if (iVar16 != 0) {
                    func_?();
                    return;
                  }
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        iVar18 = func_?();
        if (iVar18 != 0) {
          *(int *)(iVar16 + 100) = iVar18;
          iVar16 = func_?();
          if (iVar16 != 0) goto code_?;
        }
        goto code_?;
      }
      pAVar13 = (Action_1_GroundChange_ *)func_?();
      if (pAVar13 != (Action_1_GroundChange_ *)0x0) {
        (pMVar12->fields).OnGroundChange = pAVar13;
        iVar16 = func_?();
        if (iVar16 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pJVar19 = (JumpState_OnWallJumpDelegate *)0x0;
    if (pJVar11->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
      pJVar19 = pJVar11;
    }
    if (pJVar19 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
    (pJVar10->fields).OnWallJump = pJVar19;
    pJVar19 = (JumpState_OnWallJumpDelegate *)0x0;
    if (pJVar11->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
      pJVar19 = pJVar11;
    }
    if (pJVar19 != (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  this_00 = (this->fields).stuckEvaluator;
  if (this_00 != (MVRigidBody_StuckEvaluator *)0x0) {
    this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
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
    pOStack_3 = (Object__Class *)0x0;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar4 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
      pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar5 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar6 == 0) goto code_?;
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)0x0;
    (this_00->fields).updateTime = fVar4;
    this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_00,(MethodInfo *)0x0);
    if (this_01 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
code_?:
        *unaff_FS_OFFSET = this_06;
        return 0;
      }
    }
    else {
      this_02 = (MethodInfo *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if ((pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (pDVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                              ),
         this_03 !=
         (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        pDVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)&stack0xffffffa4,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                           );
        key_00 = (MethodInfo *)pDVar7->_currentValue;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_1,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                            );
          if (bVar8 == 0) break;
          in_stack_9 = key_00;
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32,PendingPrototypeData]::
                  Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                            ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                             (int32_t)key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                            );
          if (bVar8 == 0) {
            if (this_02 == (MethodInfo *)0x0) goto code_?;
            pMVar10 = this_02;
            func_?();
            in_stack_11 = this_02;
            this_02 = pMVar10;
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&pOStack_1,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   ,in_stack_11);
        if (this_02 != (MethodInfo *)0x0) {
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffa4,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_02,
                              MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
          key = pLVar12->_current;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&stack0xffffff78,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                   ), bVar8 != 0) {
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar13,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                      );
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffff78,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,pMVar2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffff98,
                     (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                    );
          while( true ) {
            this_05 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                      &stack0xffffffb4;
            pOVar14 = (Object__Class *)
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
            ;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              (this_05,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar8 == 0) break;
            key_01 = &UNK_?;
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar13,0xADDR,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                              );
            pMVar2 = (MethodInfo *)(this_00->fields).stuckObjects;
            if (bVar8 == 0) {
              this_01 = TypeInfo__MVRigidBody_StuckEvaluator__StuckObject;
              pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
              iVar6 = 0;
              overlapResult.localCubePos = (IntVector__Array *)pOVar14;
              overlapResult.woId = (int32_t)this_05;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar15,overlapResult,(MethodInfo *)0x0);
              if (pMVar2 == (MethodInfo *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,iVar6,(Object *)pMVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                        );
            }
            else {
              if ((pMVar2 == (MethodInfo *)0x0) ||
                 (this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 , pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,
                                       (int32_t)key_01,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar16 == (Object *)0x0)) goto code_?;
              pOVar16[1].monitor = (MonitorData *)this_05;
              pOVar16[2].klass = pOVar14;
              func_?();
              in_stack_9 = pMVar2;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffb4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     ,in_stack_9);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                    );
          pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this_00->fields).stuckObjects;
          if ((pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (pDVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_04 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            pDVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 *)&stack0xffffffa4,this_04,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            pOStack_3 = (Object__Class *)pDVar7->_dictionary;
            pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar7->_currentValue;
            while( true ) {
              this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                         *)&pOStack_3;
              bVar8 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                (this_06,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (pMVar15 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              if (_UNK_? <= fVar4 - (pMVar15->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar8 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (pMVar15,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&pOStack_3,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_17);
                  *unaff_FS_OFFSET = this_06;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&pOStack_3,
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
      (*(code *)(pMVar2->klass->vtable).__unknown_1.method)
                (pMVar2,(velocity.x + movableVelocity.x) * fVar3,
                 (velocity.y + movableVelocity.y) * fVar3,(velocity.z + movableVelocity.z) * fVar3,
                 (pMVar2->klass->vtable).__unknown_2.methodPtr);
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
    this_01 = (this->fields).jumpState;
    if (this_01 != (JumpState *)0x0) {
      JumpState::JumpState_Destroy(this_01,(MethodInfo *)0x0);
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_03 != (MVNetworkGame *)0x0) &&
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
         pMVar2 != (MVLocalPlayer *)0x0)) {
        this_02 = (pMVar2->fields).boostController;
        this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_04,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
                   (MethodInfo *)0x0);
        if (this_02 != (BoostController *)0x0) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    (this_02,BoostType__Enum_MovementSpeedFloatMultiplier,(Action *)this_04,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      iVar5 = *(int *)(in_stack_6 + 0x10);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3,unaff_EBP,unaff_retaddr);
        cRam_? = '\x01';
      }
      fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      if (iVar5 != 0) {
        *(undefined8 *)(iVar5 + 0x54) =
             *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
        *(float *)(iVar5 + 0x5c) = fVar4;
        this_00 = *(Component **)(in_stack_6 + 0x14);
        if (this_00 != (Component *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                            ,unaff_EBP,unaff_retaddr);
            cRam_? = '\x01';
          }
          if ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
              this_00[1].monitor !=
              (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::
            Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
            Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                      ((Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                       this_00[1].monitor,
                       MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                      );
            this_00[2].fields._.m_CachedPtr = (void *)0x0;
            func_?(&this_00[2].fields,0);
            this_00[2].monitor = (MonitorData *)0x0;
            func_?(&this_00[2].monitor,0);
            pCVar7 = this_00[3].klass;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_00,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xfffffff8,pTVar8,(MethodInfo *)0x0);
              if (pCVar7 != (Component__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          ((Transform *)pCVar7,*pVVar9,(MethodInfo *)0x0);
                pCVar7 = this_00[3].klass;
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   (this_00,(MethodInfo *)0x0);
                if (pTVar8 != (Transform *)0x0) {
                  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_rotation
                                      ((Quaternion *)&stack0xfffffff4,pTVar8,(MethodInfo *)0x0);
                  if (pCVar7 != (Component__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              ((Transform *)pCVar7,*pQVar10,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
          (*(code *)(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.method)
                    ();
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
  fStack_1 = 0.0;
  puStack_2 = (undefined *)0x0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
            ((Keyframe *)&fStack_1,-90.0,1.0,(MethodInfo *)0x0);
  if (keys == (Keyframe__Array *)0x0) {
    func_?();
  }
  else if (keys->max_length != 0) {
    keys->vector[0].m_Time = fStack_1;
    keys->vector[0].m_Value = (float)puStack_2;
    keys->vector[0].m_InTangent = fVar3;
    keys->vector[0].m_OutTangent = fVar4;
    keys->vector[0].m_WeightedMode = 0;
    keys->vector[0].m_InWeight = 0.0;
    keys->vector[0].m_OutWeight = 0.0;
    fVar3 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
              ((Keyframe *)&stack0xffffffc4,0.0,1.0,(MethodInfo *)0x0);
    if (1 < keys->max_length) {
      keys->vector[1].m_Time = fVar3;
      keys->vector[1].m_Value = 0.0;
      keys->vector[1].m_InTangent = 0.0;
      keys->vector[1].m_OutTangent = 0.0;
      keys->vector[1].m_WeightedMode = 0;
      keys->vector[1].m_InWeight = 0.0;
      keys->vector[1].m_OutWeight = 0.0;
      this_02 = (Keyframe *)&stack0xffffffa8;
      uVar5._0_4_ = 0;
      uVar5._4_4_ = 0.0;
      fVar4 = 1.0;
      fVar3 = 90.0;
      fVar6 = 0.0;
      puVar7 = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
                (this_02,90.0,1.0,(MethodInfo *)0x0);
      if (2 < keys->max_length) {
        keys->vector[2].m_Time = (float)puVar7;
        keys->vector[2].m_Value = (float)this_02;
        keys->vector[2].m_InTangent = fVar3;
        keys->vector[2].m_OutTangent = fVar4;
        keys->vector[2].m_WeightedMode = (int32_t)uVar5;
        keys->vector[2].m_InWeight = SUB84(uVar5,4);
        keys->vector[2].m_OutWeight = fVar6;
        this_00 = (AnimationCurve *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor
                  (this_00,keys,(MethodInfo *)0x0);
        (this->fields).slopeSpeedMultiplier = this_00;
        func_?();
        explosionEvents = (RuntimeEventType__Enum__Array *)func_?();
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)explosionEvents,
                   _DD5CE2C05B256C578ABF6E71A1ED1333F4485549E8BD792C67E31B6E82755C18_Field,
                   (MethodInfo *)0x0);
        this_01 = (ImpactState *)func_?();
        ImpactState::ImpactState__ctor(this_01,explosionEvents,(MethodInfo *)0x0);
        (this->fields).impactState = this_01;
        func_?();
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
      fVar4 = (float10)(*(code *)(pAVar2->klass->vtable).HandleModifierEffect.method)
                                 (pAVar2,0xc,
                                  (pMVar3->fields)._PhysicalProperties_k__BackingField.friction *
                                  (this->fields).frictionMultiplier,
                                  (pAVar2->klass->vtable).ClearModifiers.methodPtr);
      fVar5 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
              Easing_InQuad((float)fVar4,(MethodInfo *)0x0);
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

