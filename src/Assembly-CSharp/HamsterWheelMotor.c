
/* Vector3 GetVehicleVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_GetVehicleVelocity
                    (Vector3 *__return_storage_ptr__,HamsterWheelMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  pVVar1 = HamsterWheelMotor_GetVehicleVelocityClassicCam
                     (&baseVelocity,this,velocity,baseVelocity,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetVehicleVelocityClassicCam(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_GetVehicleVelocityClassicCam
                    (Vector3 *__return_storage_ptr__,HamsterWheelMotor *this,Vector3 velocity,
                    Vector3 movableVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IVehicleCamera);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactable;
  if (pMVar1 == (MVInteractableBase *)0x0) goto code_?;
  fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).__unknown_8.method)
                              (pMVar1,3,0x421b3333,(pMVar1->klass->vtable).__unknown_9.methodPtr);
  fStack_3 = (float)fVar2;
  fStack_4 = velocity.x - velocity.x * _UNK_?;
  fStack_5 = velocity.y - velocity.y * _UNK_?;
  pQStack_6 = (Quaternion *)(velocity.z - velocity.z * _UNK_?);
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  fVar7 = fVar7 / _UNK_?;
  fStack_4 = velocity.x - fStack_4 * fVar7;
  fStack_8 = velocity.y - fVar7 * fStack_5;
  uStack_9 = CONCAT44(velocity.z - fVar7 * (float)pQStack_6,(undefined4)uStack_9);
  if ((this->fields)._.HandleInput != 0) {
    pCVar10 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar10 == (Component *)0x0) goto code_?;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar10,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar12->upVector).x;
    uVar14 = (pVVar12->upVector).y;
    fStack_5 = (pVVar12->upVector).z;
    fStack_15 = (float)uVar13;
    fStack_16 = (float)uVar14;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pQStack_6 = (Quaternion *)
                 MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                           (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    axis.y = fStack_16;
    axis.x = fStack_15;
    axis.z = fStack_5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar11,axis,fVar7 * _UNK_? * (float)pQStack_6 * _UNK_?,
               Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    pIVar17 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar17 == (IVehicleCamera *)0x0) goto code_?;
    fVar2 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar17);
    VStack_18.z = 0.0;
    auVar19._4_8_ = 0;
    auVar19._0_4_ = (float)fVar2 * _UNK_?;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_21,(Vector3)(auVar19 << 0x20),(MethodInfo *)0x0);
    fStack_22 = pQVar20->x;
    VStack_18.x = pQVar20->y;
    VStack_18.y = pQVar20->z;
    VStack_18.z = pQVar20->w;
    pCVar10 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar10 == (Component *)0x0) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar10,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_23,pTVar11,(MethodInfo *)0x0);
    fStack_24 = pQVar20->x;
    fStack_25 = pQVar20->y;
    fStack_15 = pQVar20->z;
    fStack_16 = pQVar20->w;
    QStack_21.x = pQVar20->x;
    QStack_21.y = pQVar20->y;
    QStack_21.z = pQVar20->z;
    QStack_21.w = pQVar20->w;
    fStack_26 = pQVar20->x;
    fStack_27 = pQVar20->y;
    fStack_28 = pQVar20->z;
    fStack_29 = pQVar20->w;
    pQStack_6 = (Quaternion *)
                 ((VStack_18.z * fStack_24 + fStack_22 * fStack_16 + fStack_25 * VStack_18.y) -
                 fStack_15 * VStack_18.x);
    fVar30 = fStack_15 * VStack_18.y;
    fVar7 = pQVar20->x * VStack_18.y;
    fVar31 = fStack_25 * VStack_18.x;
    VStack_18.y = (VStack_18.z * fStack_15 + fStack_16 * VStack_18.y + pQVar20->x * VStack_18.x) -
                  fStack_22 * fStack_25;
    VStack_18.x = (VStack_18.z * fStack_25 + fStack_16 * VStack_18.x + fStack_22 * fStack_15) -
                  fVar7;
    VStack_18.z = ((VStack_18.z * fStack_16 - fStack_22 * fStack_24) - fVar31) - fVar30;
    fStack_22 = (float)pQStack_6;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a.y = fStack_27;
    a.x = fStack_26;
    a.z = fStack_28;
    a.w = fStack_29;
    b.y = VStack_18.x;
    b.x = fStack_22;
    b.z = VStack_18.y;
    b.w = VStack_18.z;
    pQStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                           (&QStack_23,a,b,fVar7 * _UNK_?,(MethodInfo *)0x0);
    pQVar20 = (Quaternion *)
              ((uint)(QStack_21.y * pQStack_6->y + QStack_21.x * pQStack_6->x +
                      QStack_21.z * pQStack_6->z + QStack_21.w * pQStack_6->w) & _UNK_?);
    if ((float)_UNK_? <= (float)pQVar20) {
      pQVar20 = _UNK_?;
    }
    fVar7 = 0.0;
    if ((float)pQVar20 <= _UNK_?) {
      auVar32._0_8_ = (double)(float)pQVar20;
      auVar32._8_8_ = 0;
      func_?();
      fVar7 = ((float)auVar32._0_8_ + (float)auVar32._0_8_) * _UNK_?;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar11,*pQStack_6,(MethodInfo *)0x0);
    pIVar17 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar17 == (IVehicleCamera *)0x0) goto code_?;
    fVar2 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar17);
    fStack_5 = (float)fVar2;
    fVar30 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    pQStack_6 = (Quaternion *)(fVar30 * _UNK_?);
    if ((float)pQStack_6 < 0.0) {
      pQVar20 = (Quaternion *)0x0;
    }
    else {
      pQVar20 = pQStack_6;
      if ((float)_UNK_? < (float)pQStack_6) {
        pQVar20 = _UNK_?;
      }
    }
    func_?(1,TypeInfo__IVehicleCamera,pIVar17,
                    (fVar7 - fStack_5) * (float)pQVar20 + fStack_5);
  }
  pVVar33 = (this->fields)._.vehicleEnergyContainer;
  if (pVVar33 == (VehicleEnergyContainer *)0x0) goto code_?;
  bVar34 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
           VehicleEnergyContainer_get_OutOfEnergy(pVVar33,(MethodInfo *)0x0);
  if (0.0 < (this->fields)._.DirectInputMoveMap.z) {
    pfVar35 = &(this->fields).speed;
    if (*pfVar35 <= fStack_3 && fStack_3 != *pfVar35) {
      pQStack_6 = (Quaternion *)(this->fields).speed;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = fVar7 * _UNK_? + (float)pQStack_6;
    }
    if (fStack_3 < (this->fields).speed) {
      (this->fields).speed = fStack_3;
    }
  }
  pfVar35 = &(this->fields)._.DirectInputMoveMap.z;
  if (*pfVar35 <= 0.0 && *pfVar35 != 0.0) {
    pQVar20 = (Quaternion *)(this->fields).speed;
    if (_UNK_? < (float)pQVar20) {
      pQStack_6 = pQVar20;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = (float)pQStack_6 - fVar7 * _UNK_?;
    }
    pfVar35 = &(this->fields).speed;
    if (*pfVar35 <= _UNK_? && _UNK_? != *pfVar35) {
      (this->fields).speed = -10.0;
    }
  }
  if ((this->fields)._.DirectInputMoveMap.z == 0.0) {
    (this->fields).speed = 0.0;
  }
  else if (bVar34 == 0) {
    pVVar33 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar33 == (VehicleEnergyContainer *)0x0) goto code_?;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
              (pVVar33,(MethodInfo *)0x0);
  }
  else {
    fVar7 = (this->fields).speed;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      (this->fields).speed = _UNK_?;
      goto code_?;
    }
    (this->fields).speed = fVar7;
  }
code_?:
  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar11 != (Transform *)0x0) {
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (&VStack_18,pTVar11,(MethodInfo *)0x0);
    uVar37 = pVVar36->x;
    uVar38 = pVVar36->y;
    fStack_16 = pVVar36->z;
    pQStack_6 = (Quaternion *)(this->fields).speed;
    fStack_25 = (float)uVar37;
    fStack_15 = (float)uVar38;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    pQStack_6 = (Quaternion *)(fVar7 * (float)pQStack_6);
    fStack_25 = fStack_25 * (float)pQStack_6 + fStack_4;
    fStack_15 = fStack_15 * (float)pQStack_6 + fStack_8;
    fStack_16 = fStack_16 * (float)pQStack_6 + uStack_9._4_4_;
    fStack_3 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                         ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (_UNK_? < fStack_3) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      uStack_9 = CONCAT44(fVar7,(undefined4)uStack_9);
      velocity_01.y = fStack_15;
      velocity_01.x = fStack_25;
      velocity_01.z = fStack_16;
      pVVar36 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                          (&VStack_18,velocity_01,fStack_3,fVar7,(MethodInfo *)0x0);
    }
    else {
      velocity_00.y = fStack_15;
      velocity_00.x = fStack_25;
      velocity_00.z = fStack_16;
      pVVar36 = MVRigidBody::MVRigidBody_ApplyGravity
                          (&VStack_18,(MVRigidBody *)this,velocity_00,(this->fields).curVelocity,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
    }
    uStack_9._0_4_ = pVVar36->x;
    uStack_9._4_4_ = pVVar36->y;
    fStack_3 = pVVar36->z;
    pHVar39 = (this->fields).bounceState;
    if (pHVar39 != (HamsterWheelBounceState *)0x0) {
      uVar40 = (pHVar39->fields).bounceVelocity.x;
      uVar41 = (pHVar39->fields).bounceVelocity.y;
      fStack_16 = (pHVar39->fields).bounceVelocity.z;
      fStack_25 = (float)uVar40;
      fStack_15 = (float)uVar41;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_18.x = (pVVar12->zeroVector).x;
      VStack_18.y = (pVVar12->zeroVector).y;
      VStack_18.z = (pVVar12->zeroVector).z;
      if (_UNK_? <=
          (fStack_15 - VStack_18.y) * (fStack_15 - VStack_18.y) +
          (fStack_25 - VStack_18.x) * (fStack_25 - VStack_18.x) +
          (fStack_16 - VStack_18.z) * (fStack_16 - VStack_18.z)) {
        uStack_9._0_4_ = (pHVar39->fields).bounceVelocity.x;
        uStack_9._4_4_ = (pHVar39->fields).bounceVelocity.y;
        fStack_3 = (pHVar39->fields).bounceVelocity.z;
      }
      (pHVar39->fields).bounced = 0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar30 = (pVVar12->zeroVector).y;
      fVar7 = (pVVar12->zeroVector).z;
      (pHVar39->fields).bounceVelocity.x = (pVVar12->zeroVector).x;
      (pHVar39->fields).bounceVelocity.y = fVar30;
      (pHVar39->fields).bounceVelocity.z = fVar7;
      uVar42 = uStack_9;
      if (bVar34 == 0) {
        this_00 = (this->fields).jumpState;
        if (this_00 == (JumpState *)0x0) goto code_?;
        velocity_02.z = fStack_3;
        velocity_02.x = (float)(undefined4)uStack_9;
        velocity_02.y = uStack_9._4_4_;
        pVVar36 = JumpState::JumpState_ApplyJumping
                            (&VStack_18,this_00,(this->fields)._.interactableLocal,
                             (this->fields)._._.groundState,(this->fields)._._.density,0.0,
                             (this->fields)._.Jump,velocity_02,movableVelocity,(MethodInfo *)0x0);
        uVar42._0_4_ = pVVar36->x;
        uVar42._4_4_ = pVVar36->y;
        fStack_3 = pVVar36->z;
      }
      velocity_03.z = fStack_3;
      velocity_03.x = (float)(int)uVar42;
      velocity_03.y = (float)(int)((ulonglong)uVar42 >> 0x20);
      pVVar36 = MVRigidBody::MVRigidBody_GetImpulse
                          (&VStack_18,(MVRigidBody *)this,velocity_03,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
      fVar30 = pVVar36->y;
      fVar7 = pVVar36->z;
      __return_storage_ptr__->x = pVVar36->x;
      __return_storage_ptr__->y = fVar30;
      __return_storage_ptr__->z = fVar7;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  pVVar36 = (Vector3 *)(*pcVar43)();
  return pVVar36;
}


/* Void Init(SmoothCharacterController, VehicleInteractable, VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Init
               (HamsterWheelMotor *this,SmoothCharacterController *smoothCharacterController,
               VehicleInteractable *interactableLocalParam,
               VehicleEnergyContainerConfig vehicleEnergyContainerConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GroundChange>);
    func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    func_?(&MethodInfo__HamsterWheelBounceState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&TypeInfo__HamsterWheelBounceState);
    func_?(&MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&MethodInfo__JumpState__UpdateJumpState_GroundChange_);
    func_?(&TypeInfo__JumpState);
    cRam_? = '\x01';
  }
  (this->fields)._._.density = 1.5;
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
            ((SimpleVehicleMotorBase *)this,smoothCharacterController,interactableLocalParam,
             vehicleEnergyContainerConfig,(MethodInfo *)0x0);
  pHVar1 = (HamsterWheelBounceState *)func_?(TypeInfo__HamsterWheelBounceState);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (pHVar1->fields).bounceVelocity.x = (pVVar2->zeroVector).x;
  (pHVar1->fields).bounceVelocity.y = fVar3;
  (pHVar1->fields).bounceVelocity.z = fVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pHVar1,ExceptionArgument__Enum_obj,(MethodInfo *)interactableLocalParam);
  (pHVar1->fields).interactable = (MVInteractableBase *)interactableLocalParam;
  func_?();
  (this->fields).bounceState = pHVar1;
  func_?(&(this->fields).bounceState);
  (this->fields).interactable = (MVInteractableBase *)interactableLocalParam;
  func_?(&(this->fields).interactable,interactableLocalParam);
  if (smoothCharacterController == (SmoothCharacterController *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar5 = (smoothCharacterController->fields).controller;
    if (pMVar5 == (MvCharacterController *)0x0) goto code_?;
    pAVar6 = (pMVar5->fields).OnControllerColliderHit;
    pHVar1 = (this->fields).bounceState;
    this_00 = (Action_1_MVControllerColliderHit_ *)func_?();
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (this_00,(Object *)pHVar1,
               MethodInfo__HamsterWheelBounceState__HandleMoveHit_MVControllerColliderHit_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      iRam_? = 0;
code_?:
      func_?();
      this_01 = (JumpState *)func_?();
      JumpState::JumpState__ctor_1(this_01,3.0,(MethodInfo *)0x0);
      pAVar6[1].fields._._.extra_arg = this_01;
      func_?();
      pvVar8 = (pAVar6->fields)._._.delegate_trampoline;
      if (pvVar8 == (void *)0x0) goto code_?;
      pDVar7 = *(Delegate **)((int)pvVar8 + 0x34);
      pOVar9 = pAVar6[1].fields._._.extra_arg;
      this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_02,pOVar9,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                 (MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar7,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar10 == (Delegate *)0x0) {
        iRam_? = 0;
      }
      else {
        iVar11 = func_?();
        if (iVar11 == 0) goto code_?;
        iRam_? = iVar11;
        iVar11 = func_?();
        if (iVar11 == 0) goto code_?;
      }
      func_?();
      pOVar9 = (this_02->fields)._._.m_target;
      if (pOVar9 == (Object *)0x0) goto code_?;
      pDVar10 = (Delegate *)pOVar9[0xc].monitor;
      pOVar9 = pDVar7[1].fields.method_code;
      pAVar6 = (Action_1_MVControllerColliderHit_ *)func_?();
      mscorlib.dll::System::Action`1[MVControllerColliderHit]::
      Action_1_MVControllerColliderHit___ctor
                (pAVar6,pOVar9,MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar10,(Delegate *)pAVar6,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        iRam_? = 0;
        func_?();
        return;
      }
      iVar11 = func_?();
      if (iVar11 != 0) {
        iRam_? = iVar11;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    iVar11 = func_?();
    if (iVar11 == 0) goto code_?;
    iRam_? = iVar11;
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Reset
               (HamsterWheelMotor *this,MethodInfo *method)

{
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset
            ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).curVelocity.x = (pVVar1->zeroVector).x;
  (this->fields).curVelocity.y = fVar2;
  (this->fields).curVelocity.z = fVar3;
  iVar4 = System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                    ((DataTable *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
  if (iVar4 != 0) {
    *(undefined8 *)(iVar4 + 0x54) =
         *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    *(float *)(iVar4 + 0x5c) = fVar3;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

/* decompilation failed: Low-level Error: Implied varnode has been merged */


/* HamsterWheelMotor() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor__ctor
               (HamsterWheelMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).curVelocity.x = (pVVar1->zeroVector).x;
  (this->fields).curVelocity.y = fVar2;
  (this->fields).curVelocity.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ImpactState,unaff_EBP);
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&_831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field);
    cRam_? = '\x01';
  }
  explosionEvents =
       (RuntimeEventType__Enum__Array *)func_?(TypeInfo__MV__Common__RuntimeEventType,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)explosionEvents,
             __831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field,
             (MethodInfo *)0x0);
  this_00 = (ImpactState *)func_?(TypeInfo__ImpactState);
  ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
  (this->fields)._.impactState = this_00;
  func_?(&(this->fields)._.impactState,this_00);
  MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
  return;
}

