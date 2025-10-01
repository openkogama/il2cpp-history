
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
  VStack_1.x = (this->fields).velocityPrevFrame.x;
  VStack_1.y = (this->fields).velocityPrevFrame.y;
  VStack_1.z = (this->fields).velocityPrevFrame.z;
  VStack_2._0_8_ = VStack_1._0_8_;
  VStack_2.z = VStack_1.z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar3 = (double)(VStack_1.y * VStack_1.y + VStack_1.x * VStack_1.x +
                   VStack_1.z * VStack_1.z);
  if (dVar3 < 0.0) {
    func_?();
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  fVar4 = (float)dVar3;
  if (_UNK_? < fVar4) {
    VStack_2.z = VStack_2.z / fVar4;
    VStack_2.y = VStack_2.y / fVar4;
    VStack_2.x = VStack_2.x / fVar4;
    VStack_1.z = VStack_2.z;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_2.x = (pVVar5->zeroVector).x;
    VStack_2.y = (pVVar5->zeroVector).y;
    VStack_2.z = (pVVar5->zeroVector).z;
  }
  this_00 = (this->fields).slopeSpeedMultiplier;
  if (this_00 != (AnimationCurve *)0x0) {
    dVar3 = (double)VStack_2.y;
    func_?();
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (this_00,(float)dVar3 * _UNK_?,(MethodInfo *)method_00);
    fVar4 = fVar4 * unaff_ESI;
    (this->fields).speed = fVar4;
    pMVar6 = (this->fields)._.groundState;
    if (pMVar6 != (MVGroundState *)0x0) {
      hVelocity.y = inputDirection.y * fVar4;
      hVelocity.x = inputDirection.x * fVar4;
      hVelocity.z = inputDirection.z * fVar4;
      pVVar7 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                         (&VStack_1,hVelocity,(pMVar6->fields).groundNormal,(MethodInfo *)0x0);
      VStack_1.x = pVVar7->x;
      VStack_1.y = pVVar7->y;
      VStack_1.z = pVVar7->z;
      fVar8 = VStack_1.x - velocity.x;
      fStack_9 = velocity.x;
      fStack_10 = 0.0;
      uStack_11 = 0;
      fStack_12 = 0.0;
      fVar4 = VStack_1.y - velocity.y;
      fVar13 = VStack_1.z - velocity.z;
      pMVar6 = (this->fields)._.groundState;
      pAVar14 = (this->fields).interactableLocal;
      VStack_2._0_8_ = VStack_1._0_8_;
      VStack_2.z = VStack_1.z;
      if ((pMVar6 != (MVGroundState *)0x0) &&
         (pMVar15 = (pMVar6->fields).groundMaterial, VStack_2.z = VStack_1.z,
         pMVar15 != (MVMaterial *)0x0)) {
        fStack_16 = (pMVar15->fields)._PhysicalProperties_k__BackingField.friction;
        fStack_17 = (pMVar15->fields)._PhysicalProperties_k__BackingField.bouncyness;
        fStack_18 = (pMVar15->fields)._PhysicalProperties_k__BackingField.softness;
        fStack_19 = (pMVar15->fields)._PhysicalProperties_k__BackingField.staticFriction;
        VStack_2.z = VStack_1.z;
        if (pAVar14 != (AvatarInteractable *)0x0) {
          pMVar20 = (pAVar14->klass->vtable).HandleModifierEffect.method;
          VStack_2.z = VStack_1.z;
          fVar21 = (float10)(*(code *)pMVar20)();
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
          Easing_InQuad((float)fVar21,(MethodInfo *)0x0);
          fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          fVar22 = (fVar22 * (float)pMVar20) / _UNK_?;
          fStack_9 = fStack_9 + fVar22 * fVar8;
          fStack_17 = velocity.y + fVar22 * fVar4;
          fVar4 = velocity.z + fVar22 * fVar13;
          pMVar6 = (this->fields)._.groundState;
          pAVar14 = (this->fields).interactableLocal;
          fStack_18 = fStack_10;
          fStack_19 = 0.0;
          VStack_2.z = fVar4;
          fStack_16 = fStack_9;
          if ((pMVar6 != (MVGroundState *)0x0) &&
             (pMVar15 = (pMVar6->fields).groundMaterial, pMVar15 != (MVMaterial *)0x0)) {
            fStack_23 = (pMVar15->fields)._PhysicalProperties_k__BackingField.friction;
            fStack_24 = (pMVar15->fields)._PhysicalProperties_k__BackingField.bouncyness;
            if (pAVar14 != (AvatarInteractable *)0x0) {
              fVar21 = (float10)(*(code *)(pAVar14->klass->vtable).HandleModifierEffect.method)();
              fVar13 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
                      Easing::Easing_InQuad((float)fVar21,(MethodInfo *)0x0);
              if (fVar13 < _UNK_?) {
                VStack_1.x = fVar13;
                fVar21 = (float10)func_?();
                VStack_1.x = (float)fVar21;
                if ((float)fVar21 != _UNK_?) {
                  fVar4 = VStack_1.z * _UNK_?;
                  fVar13 = fStack_25 * _UNK_?;
                  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                     ((MethodInfo *)0x0);
                  __return_storage_ptr__->x = fStack_12 + VStack_1.x * fVar8;
                  __return_storage_ptr__->y = VStack_1.z + fVar4 * fVar8;
                  __return_storage_ptr__->z = fStack_10 + fVar13 * fVar8;
                  return __return_storage_ptr__;
                }
              }
              __return_storage_ptr__->x = fStack_18;
              __return_storage_ptr__->y = fStack_19;
              __return_storage_ptr__->z = fVar4;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar26)();
  return pVVar7;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IMotorAPI);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  cVar2 = (*(code *)(this->klass->vtable).get_IsMovementLocked.method)
                     (this,(this->klass->vtable).set_IsMovementLocked.methodPtr);
  if (cVar2 != '\0') {
    return;
  }
  pSVar3 = (this->fields).smoothCharacterController;
  if (((pSVar3 != (SmoothCharacterController *)0x0) &&
      (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) &&
     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar4,(MethodInfo *)0x0), motorApi != (IMotorAPI *)0x0)) {
    pIVar6 = motorApi->klass;
    uVar7 = 0;
    uVar8._0_1_ = (pIVar6->_1).rank;
    uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
    if (uVar8 != 0) {
      do {
        if (pIVar6->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)TypeInfo__IMotorAPI) {
          ppMVar9 = &(&(motorApi->klass->vtable).get_Rotation)
                      [motorApi->klass->interfaceOffsets[uVar7].offset].method;
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    ppMVar9 = (MethodInfo **)func_?(motorApi,TypeInfo__IMotorAPI,2);
code_?:
    pQVar10 = (Quaternion *)(*(code *)*ppMVar9)(&stack0xffffffac,motorApi,ppMVar9[1]);
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar5,*pQVar10,(MethodInfo *)0x0);
      pVVar11 = &(this->fields).velocityPrevFrame;
      uVar12 = pVVar11->y;
      fVar13 = (this->fields).velocityPrevFrame.z;
      VVar14 = *pVVar11;
      this_00 = (this->fields).movableMotorState;
      VVar15 = (this->fields).velocityPrevFrame;
      pSVar3 = (this->fields).smoothCharacterController;
      if (pSVar3 != (SmoothCharacterController *)0x0) {
        pMVar4 = (pSVar3->fields).controller;
        this_01 = (((this->fields).smoothCharacterController)->fields).controller;
        if ((this_01 != (MvCharacterController *)0x0) &&
           (fVar16 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                     TypedUxmlAttributeDescription`1[System::Single]::
                     TypedUxmlAttributeDescription_1_System_Single__get_defaultValue
                               ((TypedUxmlAttributeDescription_1_System_Single_ *)this_01,
                                (MethodInfo *)0x0), this_00 != (MVMovableMotorState *)0x0)) {
          bStack_17 = MVMovableMotorState::MVMovableMotorState_Move
                               (this_00,VVar15,pMVar4,fVar16,(this->fields)._.groundState,
                                (Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
          inputJump = func_?(4,TypeInfo__IMotorAPI,motorApi);
          pIVar6 = motorApi->klass;
          uVar8 = 0;
          sVar18._0_1_ = (pIVar6->_1).rank;
          sVar18._1_1_ = (pIVar6->_1).minimumAlignment;
          if (sVar18 != 0) {
            do {
              if (pIVar6->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)TypeInfo__IMotorAPI) {
                ppMVar9 = &(&(motorApi->klass->vtable).get_Direction)
                            [motorApi->klass->interfaceOffsets[uVar8].offset].method;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
              uVar7._0_1_ = (motorApi->klass->_1).rank;
              uVar7._1_1_ = (motorApi->klass->_1).minimumAlignment;
            } while (uVar8 < uVar7);
          }
          ppMVar9 = (MethodInfo **)func_?();
code_?:
          uVar19 = ppMVar9[1];
          uVar20._4_4_ = (float)&stack0xffffffb0;
          uVar20._0_4_ = (float)&UNK_?;
          pVVar11 = (Vector3 *)(*(code *)*ppMVar9)();
          VVar15.z = 0.0;
          VVar15.x = (float)(int)uVar1;
          VVar15.y = (float)(int)(uVar1 >> 0x20);
          pVVar11 = AvatarMotor_GetVelocity
                              ((Vector3 *)&stack0xffffffb0,this,VVar14,VVar15,inputJump,*pVVar11,
                               (MethodInfo *)0x0);
          if (bStack_17 == 0) {
            VVar14.z = (float)motorApi;
            VVar14.x = (float)uVar20;
            VVar14.y = SUB84(uVar20,4);
            AvatarMotor_Move(this,*pVVar11,VVar14,(MethodInfo *)0x0);
            bStack_17 = 0;
          }
          else {
            VVar15 = *pVVar11;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            AvatarMotor_Move(this,VVar15,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
          }
          pSVar3 = (this->fields).smoothCharacterController;
          if ((pSVar3 != (SmoothCharacterController *)0x0) &&
             (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
            uVar21 = (pMVar4->fields)._Velocity_k__BackingField.x;
            uVar22 = (pMVar4->fields)._Velocity_k__BackingField.y;
            fVar16 = (pMVar4->fields)._Velocity_k__BackingField.z;
            fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            fVar16 = fVar16 / fVar23;
            (this->fields).velocityPrevFrame.x = (float)uVar21 / fVar23;
            (this->fields).velocityPrevFrame.y = (float)uVar22 / fVar23;
            (this->fields).velocityPrevFrame.z = fVar16;
            if (bStack_17 == 0) {
              (this->fields).velocityPrevFrame.x = (float)uVar21 / fVar23 - (float)uVar20;
              (this->fields).velocityPrevFrame.y = (float)uVar22 / fVar23 - SUB84(uVar20,4);
              (this->fields).velocityPrevFrame.z = fVar16 - (float)motorApi;
            }
            this_02 = (this->fields).impactState;
            if (this_02 != (ImpactState *)0x0) {
              prevVelocity.y = (float)uVar12;
              prevVelocity.x = (float)uVar19;
              prevVelocity.z = fVar13;
              fVar13 = ImpactState::ImpactState_UpdateImpactState
                                 (this_02,(this->fields).velocityPrevFrame,prevVelocity,
                                  (MVInteractableBase *)(this->fields).interactableLocal,
                                  (MethodInfo *)0x0);
              if (fVar13 != _UNK_?) {
                pAVar24 = (this->fields).interactableLocal;
                if (pAVar24 == (AvatarInteractable *)0x0) goto code_?;
                (*(code *)(pAVar24->klass->vtable).TakeDamage.method)
                          (pAVar24,fVar13,0,5,(pAVar24->klass->vtable).TakeDamageOverTime.methodPtr);
              }
              bVar25 = func_?(4,TypeInfo__IMotorAPI,motorApi);
              pBVar26 = (this->fields).bounceState;
              if (pBVar26 != (BounceState *)0x0) {
                if ((((pBVar26->fields).bounced & bVar25) != 0) &&
                   ((this->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
                  pAVar27 = (this->fields).OnActiveBounce;
                  (*(pAVar27->fields)._._.invoke_impl)
                            ((pAVar27->fields)._._.method_code,(pAVar27->fields)._._.method);
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
                     (pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffb0,pTVar5,(MethodInfo *)0x0),
                     this_04 != (WaterState *)0x0)) {
                    WaterState::WaterState_Update
                              (this_04,*pVVar11,
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
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
                                    (MVInteractableBase *)interactableLocal,pMVar1,fVar5,fVar7,0x25
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
          (this->fields).walkSpeed = ((float)*piVar5 / _UNK_? + _UNK_?) * 3.419207e-29
          ;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_SlowFall);
    func_?(&StringLiteral_FrictionMultiplier);
    func_?(&StringLiteral_SuperSpeed);
    cRam_? = '\x01';
  }
  this_09 = (JumpState_OnWallJumpDelegate__Class *)skillDataManager;
  if (skillDataManager == (WorldObjectSkillDataManager *)0x0) {
code_?:
    func_?();
    pJVar1 = this_09;
code_?:
    func_?();
    this_09 = pJVar1;
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    pJVar2 = (JumpState_OnWallJumpDelegate *)func_?();
  }
  else {
    bVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      iVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar4 / _UNK_?;
    }
    bVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar5 = _UNK_?;
    if (bVar3 != 0) {
      iVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar5 = (float)(100 - iVar4) / _UNK_?;
    }
    if (this == (AvatarMotor *)0x0) goto code_?;
    (this->fields).slowFallVelocityMultiplier = fVar5;
    bVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
    fVar5 = _UNK_?;
    if (bVar3 != 0) {
      iVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      fVar5 = (float)(100 - iVar4) / _UNK_?;
    }
    (this->fields).frictionMultiplier = fVar5;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    pSVar7 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar6,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                        );
    (this->fields).smoothCharacterController = pSVar7;
    func_?(&(this->fields).smoothCharacterController,pSVar7);
    this_09 = (JumpState_OnWallJumpDelegate__Class *)(this->fields).smoothCharacterController;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_09 == (JumpState_OnWallJumpDelegate__Class *)0x0) goto code_?;
    SmoothCharacterController::SmoothCharacterController_Init
              ((SmoothCharacterController *)this_09,pGVar6,(CullingSubscriberBase *)0x0,
               worldObjectOwner,(MethodInfo *)0x0);
    pSVar7 = (this->fields).smoothCharacterController;
    if ((pSVar7 == (SmoothCharacterController *)0x0) ||
       (pMVar8 = (pSVar7->fields).controller, pMVar8 == (MvCharacterController *)0x0))
    goto code_?;
    MvCharacterController::MvCharacterController_Init
              (pMVar8,0.45,1.9,centerOffset,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 == (MVNetworkGame *)0x0) ||
       (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar9 == (MVLocalPlayer *)0x0)) goto code_?;
    this_09 = (JumpState_OnWallJumpDelegate__Class *)(pMVar9->fields).boostController;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
               (MethodInfo *)0x0);
    if (this_09 == (JumpState_OnWallJumpDelegate__Class *)0x0) goto code_?;
    BoostController::BoostController_SubscribeToBoostChanged
              ((BoostController *)this_09,BoostType__Enum_MovementSpeedFloatMultiplier,
               (Action *)this_02,(MethodInfo *)0x0);
    AvatarMotor_HandleMovementBoost(this,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.worldObjectParent;
    if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
    pHVar10 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                        (this_00,(MethodInfo *)0x0);
    pSVar7 = (this->fields).smoothCharacterController;
    if ((pSVar7 == (SmoothCharacterController *)0x0) ||
       (pMVar8 = (pSVar7->fields).controller, pMVar8 == (MvCharacterController *)0x0))
    goto code_?;
    (pMVar8->fields).IgnoreWoIds = pHVar10;
    func_?(&(pMVar8->fields).IgnoreWoIds,pHVar10);
    pSVar7 = (this->fields).smoothCharacterController;
    this_09 = (JumpState_OnWallJumpDelegate__Class *)0x0;
    if (pSVar7 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar8 = (pSVar7->fields).controller;
    this_03 = (Func_1_Object_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                             );
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (this_03,(Object *)pMVar8,MethodInfo__MvCharacterController__GetOverlappingObjects__,
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
    interactable = TypeInfo__BounceState;
    this_06 = (BounceState *)func_?();
    BounceState::BounceState__ctor(this_06,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
    (this->fields).bounceState = this_06;
    func_?();
    this_07 = (WaterState *)func_?(TypeInfo__WaterState);
    WaterState::WaterState__ctor(this_07,skillDataManager,(MethodInfo *)0x0);
    (this->fields).waterState = this_07;
    func_?(&(this->fields).waterState,this_07);
    pSVar7 = (this->fields).smoothCharacterController;
    this_09 = (JumpState_OnWallJumpDelegate__Class *)0x0;
    if (pSVar7 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar8 = (pSVar7->fields).controller;
    this_08 = (SizeState *)func_?(TypeInfo__SizeState);
    SizeState::SizeState__ctor(this_08,(MVInteractable *)interactable,pMVar8,(MethodInfo *)0x0);
    (this->fields)._GetSizeState_k__BackingField = this_08;
    func_?(&(this->fields)._GetSizeState_k__BackingField,this_08);
    this_09 = (JumpState_OnWallJumpDelegate__Class *)func_?(TypeInfo__JumpState);
    JumpState::JumpState__ctor((JumpState *)this_09,0.2,skillDataManager,(MethodInfo *)0x0);
    (this->fields).jumpState = (JumpState *)this_09;
    func_?(&(this->fields).jumpState,this_09);
    pJVar11 = (this->fields).jumpState;
    if (pJVar11 == (JumpState *)0x0) goto code_?;
    pJVar12 = (pJVar11->fields).OnWallJump;
    pDVar13 = (Delegate *)func_?(TypeInfo__JumpState__OnWallJumpDelegate);
    this_09 = (JumpState_OnWallJumpDelegate__Class *)MethodInfo__AvatarMotor___Init_b__43_0__;
    (pDVar13->fields).method_ptr = MethodInfo__AvatarMotor___Init_b__43_0__->virtualMethodPointer;
    (pDVar13->fields).method = this_09;
    (pDVar13->fields).m_target = (Object *)this;
    func_?(&(pDVar13->fields).m_target,this);
    uVar14 = ((MethodInfo *)this_09)->parameters_count;
    (pDVar13->fields).method_code = pDVar13;
    cVar15 = func_?(this_09);
    if ((cVar15 == '\0') || (uVar14 != 0)) {
      (pDVar13->fields).method_code = (pDVar13->fields).m_target;
      puVar16 = (pDVar13->fields).method_ptr;
    }
    else {
      puVar16 = &UNK_?;
    }
    (pDVar13->fields).invoke_impl = puVar16;
    (pDVar13->fields).extra_arg = &UNK_?;
    pJVar2 = (JumpState_OnWallJumpDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pJVar12,pDVar13,(MethodInfo *)0x0);
    uVar17 = CONCAT44(TypeInfo__JumpState__OnWallJumpDelegate,pJVar2);
    pJVar12 = (JumpState_OnWallJumpDelegate *)0x0;
    if (pJVar2 == (JumpState_OnWallJumpDelegate *)0x0) {
      (pJVar11->fields).OnWallJump = (JumpState_OnWallJumpDelegate *)0x0;
code_?:
      func_?(&(pJVar11->fields).OnWallJump,pJVar12);
      pMVar18 = (this->fields)._.groundState;
      if (pMVar18 == (MVGroundState *)0x0) goto code_?;
      pAVar19 = (pMVar18->fields).OnGroundChange;
      pOVar20 = (Object *)this_06[2].fields.bounceVelocity.z;
      this_10 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<GroundChange>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_10,pOVar20,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                 (MethodInfo *)0x0);
      this_09 = (JumpState_OnWallJumpDelegate__Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar19,(Delegate *)this_10,(MethodInfo *)0x0);
      if (this_09 == (JumpState_OnWallJumpDelegate__Class *)0x0) {
        (pMVar18->fields).OnGroundChange = (Action_1_GroundChange_ *)0x0;
code_?:
        func_?();
        fVar5 = pMVar18[2].fields.groundNormal.x;
        if ((fVar5 == 0.0) ||
           (pJVar1 = *(JumpState_OnWallJumpDelegate__Class **)((int)fVar5 + 0x10),
           pJVar1 == (JumpState_OnWallJumpDelegate__Class *)0x0)) goto code_?;
        pDVar13 = (Delegate *)(pJVar1->_1).typeHierarchy;
        object = pMVar18[3].klass;
        pAVar21 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar21,(Object *)object,
                   MethodInfo__SizeState__OnScalingWhileColliding_MVControllerColliderHit_,
                   (MethodInfo *)0x0);
        pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar13,(Delegate *)pAVar21,(MethodInfo *)0x0);
        this_09 = (JumpState_OnWallJumpDelegate__Class *)
                  TypeInfo__System__Action<MVControllerColliderHit>;
        if (pDVar13 != (Delegate *)0x0) {
          ppIVar22 = (Il2CppClass **)func_?();
          if (ppIVar22 != (Il2CppClass **)0x0) {
            (pJVar1->_1).typeHierarchy = ppIVar22;
            pOVar20 = (Object *)func_?();
            if (pOVar20 != (Object *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        (pJVar1->_1).typeHierarchy = (Il2CppClass **)0x0;
        pOVar20 = (Object *)0x0;
code_?:
        this_09 = (JumpState_OnWallJumpDelegate__Class *)&pJVar1->_1;
        func_?();
        iVar23 = *(int *)&(pJVar1->_1).naturalAligment;
        if ((iVar23 == 0) || (iVar23 = *(int *)(iVar23 + 0x10), iVar23 == 0)) goto code_?;
        pDVar13 = *(Delegate **)(iVar23 + 100);
        pAVar21 = (Action_1_MVControllerColliderHit_ *)
                  func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        if (pOVar20 == (Object *)0x0) goto code_?;
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar21,pOVar20,(void *)pOVar20->klass[1]._1.cctor_thread,(MethodInfo *)0x0);
        pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar13,(Delegate *)pAVar21,(MethodInfo *)0x0);
        if (pDVar13 == (Delegate *)0x0) {
          *(undefined4 *)(iVar23 + 100) = 0;
code_?:
          func_?();
          iVar23 = *(int *)&(pJVar1->_1).naturalAligment;
          if ((iVar23 != 0) &&
             (pJVar24 = *(JumpState_OnWallJumpDelegate__Class **)(iVar23 + 0x10),
             pJVar24 != (JumpState_OnWallJumpDelegate__Class *)0x0)) {
            pDVar13 = (Delegate *)(pJVar24->_1).typeHierarchy;
            pOVar20 = *(Object **)&(pJVar1->_1).nested_type_count;
            pAVar21 = (Action_1_MVControllerColliderHit_ *)
                      func_?(TypeInfo__System__Action<MVControllerColliderHit>);
            mscorlib.dll::System::Action`1[MVControllerColliderHit]::
            Action_1_MVControllerColliderHit___ctor
                      (pAVar21,pOVar20,MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_
                       ,(MethodInfo *)0x0);
            pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar13,(Delegate *)pAVar21,(MethodInfo *)0x0);
            this_09 = (JumpState_OnWallJumpDelegate__Class *)
                      TypeInfo__System__Action<MVControllerColliderHit>;
            if (pDVar13 == (Delegate *)0x0) {
              (pJVar24->_1).typeHierarchy = (Il2CppClass **)0x0;
            }
            else {
              ppIVar22 = (Il2CppClass **)func_?();
              if (ppIVar22 == (Il2CppClass **)0x0) goto code_?;
              (pJVar24->_1).typeHierarchy = ppIVar22;
              iVar23 = func_?();
              pJVar1 = pJVar24;
              if (iVar23 == 0) goto code_?;
            }
            func_?();
            iVar23 = *(int *)&(pJVar24->_1).naturalAligment;
            this_09 = pJVar24;
            if ((iVar23 != 0) &&
               (pJVar1 = *(JumpState_OnWallJumpDelegate__Class **)(iVar23 + 0x10),
               pJVar1 != (JumpState_OnWallJumpDelegate__Class *)0x0)) {
              pDVar13 = (Delegate *)(pJVar1->_1).typeHierarchy;
              pOVar20 = *(Object **)&(pJVar24->_1).interfaces_count;
              pAVar21 = (Action_1_MVControllerColliderHit_ *)
                        func_?(TypeInfo__System__Action<MVControllerColliderHit>);
              mscorlib.dll::System::Action`1[MVControllerColliderHit]::
              Action_1_MVControllerColliderHit___ctor
                        (pAVar21,pOVar20,
                         MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,
                         (MethodInfo *)0x0);
              pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  (pDVar13,(Delegate *)pAVar21,(MethodInfo *)0x0);
              this_09 = (JumpState_OnWallJumpDelegate__Class *)
                        TypeInfo__System__Action<MVControllerColliderHit>;
              if (pDVar13 == (Delegate *)0x0) {
                (pJVar1->_1).typeHierarchy = (Il2CppClass **)0x0;
              }
              else {
                ppIVar22 = (Il2CppClass **)func_?();
                if (ppIVar22 == (Il2CppClass **)0x0) goto code_?;
                (pJVar1->_1).typeHierarchy = ppIVar22;
                iVar23 = func_?();
                if (iVar23 == 0) goto code_?;
              }
              func_?();
              iVar23 = *(int *)&(pJVar1->_1).naturalAligment;
              this_09 = pJVar1;
              if ((iVar23 != 0) &&
                 (pJVar24 = *(JumpState_OnWallJumpDelegate__Class **)(iVar23 + 0x10),
                 pJVar24 != (JumpState_OnWallJumpDelegate__Class *)0x0)) {
                pDVar13 = (Delegate *)(pJVar24->_1).typeHierarchy;
                pOVar20 = (Object *)(pJVar1->vtable).Equals.methodPtr;
                pAVar21 = (Action_1_MVControllerColliderHit_ *)
                          func_?(TypeInfo__System__Action<MVControllerColliderHit>);
                mscorlib.dll::System::Action`1[MVControllerColliderHit]::
                Action_1_MVControllerColliderHit___ctor
                          (pAVar21,pOVar20,
                           MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,
                           (MethodInfo *)0x0);
                pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    (pDVar13,(Delegate *)pAVar21,(MethodInfo *)0x0);
                this_09 = (JumpState_OnWallJumpDelegate__Class *)
                          TypeInfo__System__Action<MVControllerColliderHit>;
                if (pDVar13 == (Delegate *)0x0) {
                  (pJVar24->_1).typeHierarchy = (Il2CppClass **)0x0;
                  func_?();
                  return;
                }
                ppIVar22 = (Il2CppClass **)func_?();
                if (ppIVar22 != (Il2CppClass **)0x0) {
                  (pJVar24->_1).typeHierarchy = ppIVar22;
                  iVar23 = func_?();
                  pJVar1 = pJVar24;
                  if (iVar23 != 0) {
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
        iVar25 = func_?();
        if (iVar25 != 0) {
          *(int *)(iVar23 + 100) = iVar25;
          iVar23 = func_?();
          if (iVar23 != 0) goto code_?;
        }
        goto code_?;
      }
      pAVar19 = (Action_1_GroundChange_ *)func_?();
      if (pAVar19 != (Action_1_GroundChange_ *)0x0) {
        (pMVar18->fields).OnGroundChange = pAVar19;
        iVar23 = func_?();
        if (iVar23 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    if (pJVar2->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
      pJVar12 = pJVar2;
    }
    if (pJVar12 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
    (pJVar11->fields).OnWallJump = pJVar12;
    pJVar12 = (JumpState_OnWallJumpDelegate *)0x0;
    if (pJVar2->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
      pJVar12 = pJVar2;
    }
    this_09 = TypeInfo__JumpState__OnWallJumpDelegate;
    if (pJVar12 != (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
  }
  uVar17 = func_?(pJVar2,this_09);
code_?:
  func_?(uVar17);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
    method_00 = (MethodInfo *)0x0;
    pOStack_2 = (Object__Class *)0x0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar3 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar4 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) goto code_?;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (pDVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar5 == 0) goto code_?;
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)0x0;
    (this_00->fields).updateTime = fVar3;
    this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_00,(MethodInfo *)0x0);
    if (this_01 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar4,
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
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (pDVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                              ),
         this_03 !=
         (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        pDVar6 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)&pDStack_7,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                           );
        pOVar8 = (Object__Class *)pDVar6->_currentValue;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_1,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                            );
          if (bVar9 == 0) break;
          in_stack_10 = pOVar8;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32,PendingPrototypeData]::
                  Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                            ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                             (int32_t)pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                            );
          if (bVar9 == 0) {
            if (this_02 == (MethodInfo *)0x0) goto code_?;
            pMVar11 = this_02;
            func_?();
            method_00 = this_02;
            this_02 = pMVar11;
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_1,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   ,method_00);
        if (this_02 != (MethodInfo *)0x0) {
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&pDStack_7,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_02,
                              MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
          key = pLVar12->_current;
          while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&stack0xffffff78,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                   ), bVar9 != 0) {
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar13,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                      );
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff78,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,in_stack_14);
          pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffb4,
                              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                             );
          pOVar8 = (Object__Class *)(pDVar15->_current).key.sheetInstanceID;
          pOVar16 = (Object__Class *)
                    ((ulonglong)*(undefined8 *)&(pDVar15->_current).key.index >> 0x20);
          while( true ) {
            pDStack_7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)&UNK_?;
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_
                                *)&stack0xffffff98,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar9 == 0) break;
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            key_00 = &UNK_?;
            pOVar17 = pOVar16;
            bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar13,(int32_t)pOVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                              );
            this_05 = (Object__Class *)(this_00->fields).stuckObjects;
            if (bVar9 == 0) {
              this_01 = TypeInfo__MVRigidBody_StuckEvaluator__StuckObject;
              pOVar8 = pOVar17;
              pMVar18 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
              overlapResult.localCubePos = (IntVector__Array *)pOVar8;
              overlapResult.woId = (int32_t)pDVar13;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar18,overlapResult,(MethodInfo *)0x0);
              if (this_05 == (Object__Class *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)this_05,(int32_t)key_00,
                         (Object *)pMVar18,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                        );
              pOVar16 = this_05;
            }
            else {
              if ((this_05 == (Object__Class *)0x0) ||
                 (this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 , pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)this_05,
                                       (int32_t)key_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar19 == (Object *)0x0)) goto code_?;
              pOVar19[1].monitor = (MonitorData *)pDVar13;
              pOVar19[2].klass = pOVar17;
              func_?();
              in_stack_10 = this_05;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff98,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     ,(MethodInfo *)in_stack_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                    );
          pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this_00->fields).stuckObjects;
          if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (pDVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_04 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            pDVar6 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 *)&pDStack_7,this_04,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            pOStack_2 = (Object__Class *)pDVar6->_dictionary;
            pMVar18 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar6->_currentValue;
            while( true ) {
              this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                         *)&pOStack_2;
              bVar9 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                (this_06,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar9 == 0) break;
              if (pMVar18 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              if (_UNK_? <= fVar3 - (pMVar18->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar9 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (pMVar18,(MethodInfo *)0x0);
                if (bVar9 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&pOStack_2,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_20);
                  *unaff_FS_OFFSET = this_06;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&pOStack_2,
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
  pcVar21 = (code *)swi(3);
  bVar9 = (*pcVar21)();
  return bVar9;
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
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)object,MethodInfo__JumpState__HandleJumpBoost__,
                   (MethodInfo *)0x0);
        if (pBVar4 == (BoostController *)0x0) goto code_?;
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
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
                   (MethodInfo *)0x0);
        if (pBVar4 != (BoostController *)0x0) {
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
    _puStack_14 = CONCAT44(&UNK_?,puStack_2);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    _puStack_14 = CONCAT44(&UNK_?,puStack_2);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar5 = (SmoothPhysicsMovement_Package **)(fVar3 - fVar4);
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar6->fields)._size) {
        pSVar7 = (SmoothPhysicsMovement_Package *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar6,
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                           );
        (this_00->fields).current = pSVar7;
        ppSVar5 = &(this_00->fields).current;
        func_?();
      }
      if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar6->fields)._size) {
        pSVar7 = (SmoothPhysicsMovement_Package *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar6,
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                           );
        (this_00->fields).next = pSVar7;
        ppSVar5 = &(this_00->fields).next;
        func_?();
      }
    }
    if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar7 = (this_00->fields).next;
    ppSVar8 = &(this_00->fields).next;
    do {
      if ((float)ppSVar5 < (pSVar7->fields).time) {
code_?:
        pSVar7 = (this_00->fields).current;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar3 = (pSVar7->fields).time;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar4 = ((float)ppSVar5 - fVar3) / fVar4;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar7 = (this_00->fields).current;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        VStack_10.x = (pSVar7->fields).position.x;
        VStack_10.y = (pSVar7->fields).position.y;
        pSVar11 = (this_00->fields).next;
        VStack_10.z = (pSVar7->fields).position.z;
        if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
        puStack_2 = (undefined1 *)(pSVar11->fields).position.x;
        unique0x0000a404 = (pSVar11->fields).position.y;
        fVar3 = 0.0;
        if ((0.0 <= fVar4) && (fVar3 = _UNK_?, fVar4 <= _UNK_?)) {
          fVar3 = fVar4;
        }
        VStack_10.x = ((float)puStack_2 - VStack_10.x) * fVar3 + VStack_10.x;
        VStack_10.y = ((float)unique0x0000a404 - VStack_10.y) * fVar3 + VStack_10.y;
        VStack_10.z = ((pSVar11->fields).position.z - VStack_10.z) * fVar3 + VStack_10.z;
        if (pTVar9 == (Transform *)0x0) break;
        this = (AvatarMotor *)VStack_10.z;
        fVar12 = VStack_10.y;
        fVar13 = VStack_10.x;
        VVar14 = (Vector3)CONCAT84(VVar14._0_8_,fVar13);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar9,VVar14,(MethodInfo *)0x0);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar7 = (this_00->fields).current;
        if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
           (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) break;
        fVar3 = (pSVar7->fields).rotation.y;
        pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffdc,(pSVar7->fields).rotation,
                             (pSVar11->fields).rotation,(float)this_00,(MethodInfo *)0x0);
        if (pTVar9 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar9,*pQVar15,(MethodInfo *)0x0);
        if ((this_00->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          pSVar7 = (this_00->fields).current;
          if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
          puStack_2 = (undefined1 *)(pSVar7->fields).position.x;
          unique0x0000a404 = (pSVar7->fields).position.y;
          VStack_10.z = (pSVar7->fields).position.z;
          pSVar7 = (this_00->fields).next;
          if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
          VStack_10.x = (pSVar7->fields).position.x;
          VStack_10.y = (pSVar7->fields).position.y;
          if (fVar3 < 0.0) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = _UNK_?;
            if (fVar3 <= _UNK_?) {
              fVar4 = fVar3;
            }
          }
          VStack_10.z = ((pSVar7->fields).position.z - VStack_10.z) * fVar4 + VStack_10.z;
          (*(code *)(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.method)
                    ();
          pSVar7 = (this_00->fields).current;
          this_01 = (this_00->fields).worldObjectOwner;
          if (((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
              (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) ||
             (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                  ((Quaternion *)&stack0xffffffdc,(pSVar7->fields).rotation,
                                   (pSVar11->fields).rotation,fVar3,(MethodInfo *)0x0),
             this_01 == (MVWorldObjectClient *)0x0)) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_01,*pQVar15,(MethodInfo *)0x0);
        }
        if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_02 = (this_00->fields).cullingSubscriberBase;
        _puStack_14 = CONCAT44(this_00,&UNK_?);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          _puStack_14 = CONCAT44(&UNK_?,puStack_2);
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_10,pTVar9,(MethodInfo *)0x0);
          uVar17 = pVVar16->x;
          uVar18 = pVVar16->y;
          this = (AvatarMotor *)pVVar16->z;
          fVar12 = (float)uVar18;
          fVar19 = (float)uVar17;
          VVar14 = (Vector3)CONCAT84(VVar14._0_8_,fVar19);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_02,VVar14,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar6->fields)._size < 1) goto code_?;
      (this_00->fields).current = *ppSVar8;
      func_?();
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar7 = (SmoothPhysicsMovement_Package *)
               mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue
                         ((Queue_1_System_Object_ *)pQVar6,
                          MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                         );
      *ppSVar8 = pSVar7;
      ppSVar5 = ppSVar8;
      func_?();
      pSVar7 = *ppSVar8;
    } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  stack0xfffffff0 = (undefined4)((ulonglong)_puStack_14 >> 0x20);
  VStack_10.z = (float)&UNK_?;
  puStack_2 = &stack0xfffffff0;
  uVar20 = func_?();
  _puStack_14 = CONCAT44(stack0xfffffff0,uVar20);
  VStack_10.z = (float)&UNK_?;
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    fVar4 = (pMVar3->fields)._PhysicalProperties_k__BackingField.friction;
    if (pAVar2 != (AvatarInteractable *)0x0) {
      fVar5 = (float10)(*(code *)(pAVar2->klass->vtable).HandleModifierEffect.method)
                                 (pAVar2,0xc,fVar4 * (this->fields).frictionMultiplier,
                                  (pAVar2->klass->vtable).ClearModifiers.methodPtr,fVar4,
                                  (pMVar3->fields)._PhysicalProperties_k__BackingField.bouncyness,
                                  (pMVar3->fields)._PhysicalProperties_k__BackingField.softness,
                                  (pMVar3->fields)._PhysicalProperties_k__BackingField.
                                  staticFriction);
      fVar4 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
              Easing_InQuad((float)fVar5,(MethodInfo *)0x0);
      return fVar4;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar5 = (float10)(*pcVar6)();
  return (float)fVar5;
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

