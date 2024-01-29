
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
  pMStack_2 = (pMVar1->klass->vtable).__unknown_6.method;
  fVar3 = (float10)(*(code *)pMStack_2)
                              (pMVar1,3,0x421b3333,(pMVar1->klass->vtable).__unknown_7.methodPtr);
  pMStack_2 = (MethodInfo *)(float)fVar3;
  pIStack_4 = (IVehicleCamera *)(velocity.x - velocity.x * _UNK_?);
  fStack_5 = velocity.y - velocity.y * _UNK_?;
  pQStack_6 = (Quaternion *)(velocity.z - velocity.z * _UNK_?);
  fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
  fStack_7 = fStack_7 / _UNK_?;
  fStack_8 = velocity.x - (float)pIStack_4 * fStack_7;
  fStack_9 = velocity.y - fStack_5 * fStack_7;
  uStack_10 = CONCAT44(velocity.z - (float)pQStack_6 * fStack_7,(undefined4)uStack_10);
  if ((this->fields)._.HandleInput != 0) {
    pCVar11 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar11 == (Component *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar11,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar13->upVector).x;
    uVar15 = (pVVar13->upVector).y;
    pIStack_4 = (IVehicleCamera *)(pVVar13->upVector).z;
    VStack_16.y = (float)uVar14;
    VStack_16.z = (float)uVar15;
    pQStack_6 = (Quaternion *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fStack_7 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                          (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar12 == (Transform *)0x0) goto code_?;
    axis.y = VStack_16.z;
    axis.x = VStack_16.y;
    axis.z = (float)pIStack_4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar12,axis,(float)pQStack_6 * _UNK_? * fStack_7 * _UNK_?,
               Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    pIVar17 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar17 == (IVehicleCamera *)0x0) goto code_?;
    fVar3 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar17);
    pQStack_6 = (Quaternion *)(float)fVar3;
    VStack_18.z = 0.0;
    auVar19._4_8_ = 0;
    auVar19._0_4_ = (float)pQStack_6 * _UNK_?;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_21,(Vector3)(auVar19 << 0x20),(MethodInfo *)0x0);
    fStack_22 = pQVar20->x;
    VStack_18.x = pQVar20->y;
    VStack_18.y = pQVar20->z;
    VStack_18.z = pQVar20->w;
    pCVar11 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar11 == (Component *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar11,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_23,pTVar12,(MethodInfo *)0x0);
    fStack_24 = pQVar20->x;
    VStack_16.x = pQVar20->y;
    VStack_16.y = pQVar20->z;
    VStack_16.z = pQVar20->w;
    QStack_21.x = pQVar20->x;
    QStack_21.y = pQVar20->y;
    QStack_21.z = pQVar20->z;
    QStack_21.w = pQVar20->w;
    fStack_25 = pQVar20->x;
    fStack_26 = pQVar20->y;
    fStack_27 = pQVar20->z;
    fStack_28 = pQVar20->w;
    pIStack_4 = (IVehicleCamera *)
                ((VStack_18.z * fStack_24 + fStack_22 * VStack_16.z + VStack_18.y * VStack_16.x) -
                VStack_18.x * VStack_16.y);
    fVar29 = VStack_18.y * pQVar20->x;
    fVar30 = VStack_18.y * VStack_16.y;
    fVar31 = VStack_18.x * VStack_16.x;
    pQStack_6 = (Quaternion *)(VStack_18.z * VStack_16.z);
    VStack_18.y = (VStack_18.z * VStack_16.y + VStack_18.y * VStack_16.z + VStack_18.x * pQVar20->x)
                  - fStack_22 * VStack_16.x;
    VStack_18.x = (VStack_18.z * VStack_16.x + VStack_18.x * VStack_16.z + fStack_22 * VStack_16.y)
                  - fVar29;
    VStack_18.z = (((float)pQStack_6 - fStack_22 * fStack_24) - fVar31) - fVar30;
    fStack_22 = (float)pIStack_4;
    pQStack_6 = (Quaternion *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
    a.y = fStack_26;
    a.x = fStack_25;
    a.z = fStack_27;
    a.w = fStack_28;
    b.y = VStack_18.x;
    b.x = fStack_22;
    b.z = VStack_18.y;
    b.w = VStack_18.z;
    pQStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                           (&QStack_23,a,b,(float)pQStack_6 * _UNK_?,(MethodInfo *)0x0);
    fVar29 = (float)((uint)(QStack_21.y * pQStack_6->y + QStack_21.x * pQStack_6->x +
                            QStack_21.z * pQStack_6->z + QStack_21.w * pQStack_6->w) &
                    _UNK_?);
    if (_UNK_? <= fVar29) {
      fVar29 = _UNK_?;
    }
    fVar31 = 0.0;
    if (fVar29 <= _UNK_?) {
      auVar32._0_8_ = (double)fVar29;
      auVar32._8_8_ = 0;
      func_?();
      fVar31 = ((float)auVar32._0_8_ + (float)auVar32._0_8_) * _UNK_?;
    }
    fStack_5 = fVar31;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar12,*pQStack_6,(MethodInfo *)0x0);
    pIStack_4 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIStack_4 == (IVehicleCamera *)0x0) goto code_?;
    fVar3 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIStack_4);
    fStack_7 = (float)fVar3;
    fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar29 = fVar29 * _UNK_?;
    fStack_5 = fStack_5 - fStack_7;
    if (fVar29 < 0.0) {
      fStack_5 = fStack_5 * 0.0;
    }
    else if (fVar29 <= _UNK_?) {
      fStack_5 = fStack_5 * fVar29;
    }
    fStack_5 = fStack_5 + fStack_7;
    fStack_7 = 0.0;
    pQStack_6 = (Quaternion *)0x0;
    uVar33._0_1_ = (pIStack_4->klass->_1).rank;
    uVar33._1_1_ = (pIStack_4->klass->_1).minimumAlignment;
    VStack_16.z = (float)(uint)uVar33;
    if (uVar33 != 0) {
      do {
        if (pIStack_4->klass->interfaceOffsets[(uint)fStack_7 & 0xffff].interfaceType ==
            (Il2CppClass *)TypeInfo__IVehicleCamera) {
          ppMVar34 = &(&(pIStack_4->klass->vtable).set_RotationAroundY)
                      [pIStack_4->klass->interfaceOffsets[(uint)fStack_7 & 0xffff].offset].method;
          goto code_?;
        }
        fStack_7 = (float)((int)fStack_7 + 1);
      } while (SUB42(fStack_7,0) < uVar33);
    }
    ppMVar34 = (MethodInfo **)func_?(pIStack_4,TypeInfo__IVehicleCamera,1);
code_?:
    (*(code *)*ppMVar34)(pIStack_4,fStack_5,ppMVar34[1]);
  }
  pVVar35 = (this->fields)._.vehicleEnergyContainer;
  if (pVVar35 == (VehicleEnergyContainer *)0x0) goto code_?;
  bVar36 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
           VehicleEnergyContainer_get_OutOfEnergy(pVVar35,(MethodInfo *)0x0);
  if (0.0 < (this->fields)._.DirectInputMoveMap.z) {
    pfVar37 = &(this->fields).speed;
    if (*pfVar37 <= (float)pMStack_2 && (float)pMStack_2 != *pfVar37) {
      VStack_16.z = (this->fields).speed;
      fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = fVar29 * _UNK_? + VStack_16.z;
    }
    if ((float)pMStack_2 < (this->fields).speed) {
      (this->fields).speed = (float)pMStack_2;
    }
  }
  pfVar37 = &(this->fields)._.DirectInputMoveMap.z;
  if (*pfVar37 <= 0.0 && *pfVar37 != 0.0) {
    fVar29 = (this->fields).speed;
    if (_UNK_? < fVar29) {
      VStack_16.z = fVar29;
      fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = VStack_16.z - fVar29 * _UNK_?;
    }
    pfVar37 = &(this->fields).speed;
    if (*pfVar37 <= _UNK_? && _UNK_? != *pfVar37) {
      (this->fields).speed = -10.0;
    }
  }
  if ((this->fields)._.DirectInputMoveMap.z == 0.0) {
    (this->fields).speed = 0.0;
  }
  else if (bVar36 == 0) {
    pVVar35 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar35 == (VehicleEnergyContainer *)0x0) goto code_?;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
              (pVVar35,(MethodInfo *)0x0);
  }
  else {
    fVar29 = (this->fields).speed;
    if (fVar29 < 0.0) {
      fVar29 = 0.0;
    }
    else if (_UNK_? < fVar29) {
      (this->fields).speed = _UNK_?;
      goto code_?;
    }
    (this->fields).speed = fVar29;
  }
code_?:
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar12 != (Transform *)0x0) {
    pVVar38 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (&VStack_16,pTVar12,(MethodInfo *)0x0);
    VStack_18.x = pVVar38->x;
    VStack_18.y = pVVar38->y;
    VStack_18.z = pVVar38->z;
    VStack_16.z = (this->fields).speed;
    fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar29 = fVar29 * VStack_16.z;
    VStack_16.x = VStack_18.x * fVar29 + fStack_8;
    VStack_16.y = VStack_18.y * fVar29 + fStack_9;
    VStack_16.z = VStack_18.z * fVar29 + uStack_10._4_4_;
    pMStack_2 = (MethodInfo *)
                 SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                           ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (_UNK_? < (float)pMStack_2) {
      fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      uStack_10 = CONCAT44(fVar29,(undefined4)uStack_10);
      velocity_01.y = VStack_16.y;
      velocity_01.x = VStack_16.x;
      velocity_01.z = VStack_16.z;
      pVVar38 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                          (&VStack_18,velocity_01,(float)pMStack_2,fVar29,(MethodInfo *)0x0);
    }
    else {
      velocity_00.y = VStack_16.y;
      velocity_00.x = VStack_16.x;
      velocity_00.z = VStack_16.z;
      pVVar38 = MVRigidBody::MVRigidBody_ApplyGravity
                          (&VStack_18,(MVRigidBody *)this,velocity_00,(this->fields).curVelocity,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
    }
    uStack_10._0_4_ = pVVar38->x;
    uStack_10._4_4_ = pVVar38->y;
    pIStack_4 = (IVehicleCamera *)pVVar38->z;
    pHVar39 = (this->fields).bounceState;
    if (pHVar39 != (HamsterWheelBounceState *)0x0) {
      VStack_18.x = (pHVar39->fields).bounceVelocity.x;
      VStack_18.y = (pHVar39->fields).bounceVelocity.y;
      VStack_18.z = (pHVar39->fields).bounceVelocity.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar40 = (pVVar13->zeroVector).x;
      uVar41 = (pVVar13->zeroVector).y;
      VStack_16.z = (pVVar13->zeroVector).z;
      if (_UNK_? <=
          (VStack_18.y - (float)uVar41) * (VStack_18.y - (float)uVar41) +
          (VStack_18.x - (float)uVar40) * (VStack_18.x - (float)uVar40) +
          (VStack_18.z - VStack_16.z) * (VStack_18.z - VStack_16.z)) {
        uStack_10._0_4_ = (pHVar39->fields).bounceVelocity.x;
        uStack_10._4_4_ = (pHVar39->fields).bounceVelocity.y;
        pIStack_4 = (IVehicleCamera *)(pHVar39->fields).bounceVelocity.z;
      }
      (pHVar39->fields).bounced = 0;
      VStack_16.x = (float)uVar40;
      VStack_16.y = (float)uVar41;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar31 = (pVVar13->zeroVector).y;
      fVar29 = (pVVar13->zeroVector).z;
      (pHVar39->fields).bounceVelocity.x = (pVVar13->zeroVector).x;
      (pHVar39->fields).bounceVelocity.y = fVar31;
      (pHVar39->fields).bounceVelocity.z = fVar29;
      uVar42 = uStack_10;
      if (bVar36 == 0) {
        this_00 = (this->fields).jumpState;
        if (this_00 == (JumpState *)0x0) goto code_?;
        velocity_02.z = (float)pIStack_4;
        velocity_02.x = (float)(undefined4)uStack_10;
        velocity_02.y = uStack_10._4_4_;
        pVVar38 = JumpState::JumpState_ApplyJumping
                            (&VStack_18,this_00,(this->fields)._.interactableLocal,
                             (this->fields)._._.groundState,(this->fields)._._.density,0.0,
                             (this->fields)._.Jump,velocity_02,movableVelocity,(MethodInfo *)0x0);
        uVar42._0_4_ = pVVar38->x;
        uVar42._4_4_ = pVVar38->y;
        pIStack_4 = (IVehicleCamera *)pVVar38->z;
      }
      velocity_03.z = (float)pIStack_4;
      velocity_03.x = (float)(int)uVar42;
      velocity_03.y = (float)(int)((ulonglong)uVar42 >> 0x20);
      pVVar38 = MVRigidBody::MVRigidBody_GetImpulse
                          (&VStack_18,(MVRigidBody *)this,velocity_03,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
      fVar31 = pVVar38->y;
      fVar29 = pVVar38->z;
      __return_storage_ptr__->x = pVVar38->x;
      __return_storage_ptr__->y = fVar31;
      __return_storage_ptr__->z = fVar29;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  pVVar38 = (Vector3 *)(*pcVar43)();
  return pVVar38;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

