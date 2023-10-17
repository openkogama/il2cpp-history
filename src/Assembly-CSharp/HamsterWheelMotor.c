
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
  pIStack_2 = (pMVar1->klass->vtable).__unknown_6.methodPtr;
  fVar3 = (float10)(*pIStack_2)(pMVar1,3,0x421b3333,(pMVar1->klass->vtable).__unknown_6.method);
  pIStack_2 = (Il2CppMethodPointer)(float)fVar3;
  fStack_4 = velocity.x - velocity.x * _UNK_?;
  fStack_5 = velocity.y - velocity.y * _UNK_?;
  pQStack_6 = (Quaternion *)(velocity.z - velocity.z * _UNK_?);
  fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
  fStack_7 = fStack_7 / _UNK_?;
  fStack_8 = velocity.x - fStack_4 * fStack_7;
  uStack_9 = CONCAT44(velocity.y - fStack_5 * fStack_7,(undefined4)uStack_9);
  fStack_10 = velocity.z - (float)pQStack_6 * fStack_7;
  if ((this->fields)._.HandleInput != 0) {
    pMVar11 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar11 == (MvCharacterController *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar11,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar13->upVector).x;
    uVar15 = (pVVar13->upVector).y;
    fStack_4 = (pVVar13->upVector).z;
    fStack_16 = (float)uVar14;
    fStack_7 = (float)uVar15;
    pQStack_6 = (Quaternion *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fStack_5 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                          (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar12 == (Transform *)0x0) goto code_?;
    axis.y = fStack_7;
    axis.x = fStack_16;
    axis.z = fStack_4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar12,axis,(float)pQStack_6 * _UNK_? * fStack_5 * _UNK_?,
               Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    pIVar17 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar17 == (IVehicleCamera *)0x0) goto code_?;
    fVar3 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar17);
    pQStack_6 = (Quaternion *)(float)fVar3;
    fStack_18 = 0.0;
    auVar19._4_8_ = 0;
    auVar19._0_4_ = (float)pQStack_6 * _UNK_?;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_21,(Vector3)(auVar19 << 0x20),(MethodInfo *)0x0);
    fStack_22 = pQVar20->x;
    uStack_23._0_4_ = pQVar20->y;
    uStack_23._4_4_ = pQVar20->z;
    fStack_24 = pQVar20->w;
    pMVar11 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if ((pMVar11 == (MvCharacterController *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar11,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_21,pTVar12,(MethodInfo *)0x0);
    VStack_25.x = pQVar20->x;
    fStack_26 = pQVar20->y;
    fStack_27 = pQVar20->z;
    VStack_25.y = pQVar20->y;
    VStack_25.z = pQVar20->z;
    fStack_28 = pQVar20->w;
    QStack_21.x = pQVar20->x;
    QStack_21.y = pQVar20->y;
    QStack_21.z = pQVar20->z;
    QStack_21.w = pQVar20->w;
    fVar29 = fStack_24 * VStack_25.x;
    fVar30 = uStack_23._4_4_ * fStack_26;
    fVar31 = (float)uStack_23 * fStack_27;
    fVar32 = uStack_23._4_4_ * fStack_27;
    fVar33 = (float)uStack_23 * fStack_26;
    uStack_23 = CONCAT44((uStack_23._4_4_ * fStack_28 + fStack_24 * fStack_27 +
                         (float)uStack_23 * VStack_25.x) - fStack_22 * fStack_26,
                         ((float)uStack_23 * fStack_28 + fStack_24 * fStack_26 +
                         fStack_22 * fStack_27) - uStack_23._4_4_ * VStack_25.x);
    fStack_24 = ((fStack_24 * fStack_28 - fStack_22 * VStack_25.x) - fVar33) - fVar32;
    fStack_34 = fStack_28;
    fStack_35 = fStack_28;
    fStack_36 = fStack_28;
    fStack_37 = fStack_27;
    fStack_38 = fStack_27;
    fStack_39 = fStack_27;
    fStack_22 = (fStack_22 * fStack_28 + fVar29 + fVar30) - fVar31;
    fStack_18 = fStack_28;
    fStack_40 = fStack_26;
    fStack_16 = fStack_26;
    fStack_7 = fStack_26;
    pQStack_6 = (Quaternion *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
    a.y = QStack_21.y;
    a.x = QStack_21.x;
    a.z = QStack_21.z;
    a.w = QStack_21.w;
    b.y = (float)uStack_23;
    b.x = fStack_22;
    b.z = uStack_23._4_4_;
    b.w = fStack_24;
    pQStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                           (&QStack_21,a,b,(float)pQStack_6 * _UNK_?,(MethodInfo *)0x0);
    pQVar20 = (Quaternion *)
              ((uint)(pQStack_6->y * fStack_26 + pQStack_6->x * VStack_25.x +
                      pQStack_6->z * fStack_27 + pQStack_6->w * fStack_28) & _UNK_?);
    if ((float)_UNK_? <= (float)pQVar20) {
      pQVar20 = _UNK_?;
    }
    fVar29 = 0.0;
    if ((float)pQVar20 <= _UNK_?) {
      auVar41._0_8_ = (double)(float)pQVar20;
      auVar41._8_8_ = 0;
      func_?();
      fVar29 = ((float)auVar41._0_8_ + (float)auVar41._0_8_) * _UNK_?;
    }
    fStack_7 = fVar29;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar12,*pQStack_6,(MethodInfo *)0x0);
    pIVar17 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar17 == (IVehicleCamera *)0x0) goto code_?;
    fVar3 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar17);
    fStack_5 = (float)fVar3;
    fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    pQStack_6 = (Quaternion *)(fVar29 * _UNK_?);
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
                    (fStack_7 - fStack_5) * (float)pQVar20 + fStack_5);
  }
  pVVar42 = (this->fields)._.vehicleEnergyContainer;
  if (pVVar42 == (VehicleEnergyContainer *)0x0) goto code_?;
  bStack_43 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
              VehicleEnergyContainer_get_OutOfEnergy(pVVar42,(MethodInfo *)0x0);
  if (0.0 < (this->fields)._.DirectInputMoveMap.z) {
    pfVar44 = &(this->fields).speed;
    if (*pfVar44 <= (float)pIStack_2 && (float)pIStack_2 != *pfVar44) {
      pQStack_6 = (Quaternion *)(this->fields).speed;
      fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = fVar29 * _UNK_? + (float)pQStack_6;
    }
    if ((float)pIStack_2 < (this->fields).speed) {
      (this->fields).speed = (float)pIStack_2;
    }
  }
  pfVar44 = &(this->fields)._.DirectInputMoveMap.z;
  if (*pfVar44 <= 0.0 && *pfVar44 != 0.0) {
    pQVar20 = (Quaternion *)(this->fields).speed;
    if (_UNK_? < (float)pQVar20) {
      pQStack_6 = pQVar20;
      fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = (float)pQStack_6 - fVar29 * _UNK_?;
    }
    pfVar44 = &(this->fields).speed;
    if (*pfVar44 <= _UNK_? && _UNK_? != *pfVar44) {
      (this->fields).speed = -10.0;
    }
  }
  if ((this->fields)._.DirectInputMoveMap.z == 0.0) {
    (this->fields).speed = 0.0;
  }
  else if (bStack_43 == 0) {
    pVVar42 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar42 == (VehicleEnergyContainer *)0x0) goto code_?;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
              (pVVar42,(MethodInfo *)0x0);
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
    pVVar45 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (&VStack_25,pTVar12,(MethodInfo *)0x0);
    uVar46 = pVVar45->x;
    uVar47 = pVVar45->y;
    fStack_7 = pVVar45->z;
    pQStack_6 = (Quaternion *)(this->fields).speed;
    fStack_40 = (float)uVar46;
    fStack_16 = (float)uVar47;
    fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    pQStack_6 = (Quaternion *)(fVar29 * (float)pQStack_6);
    fStack_40 = fStack_40 * (float)pQStack_6 + fStack_8;
    fStack_16 = fStack_16 * (float)pQStack_6 + uStack_9._4_4_;
    fStack_7 = fStack_7 * (float)pQStack_6 + fStack_10;
    pIStack_2 = (Il2CppMethodPointer)
                 SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                           ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (_UNK_? < (float)pIStack_2) {
      fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      velocity_01.y = fStack_16;
      velocity_01.x = fStack_40;
      velocity_01.z = fStack_7;
      pVVar45 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                          (&VStack_25,velocity_01,(float)pIStack_2,fStack_10,(MethodInfo *)0x0);
    }
    else {
      velocity_00.y = fStack_16;
      velocity_00.x = fStack_40;
      velocity_00.z = fStack_7;
      pVVar45 = MVRigidBody::MVRigidBody_ApplyGravity
                          (&VStack_25,(MVRigidBody *)this,velocity_00,(this->fields).curVelocity,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
    }
    uStack_9._0_4_ = pVVar45->x;
    uStack_9._4_4_ = pVVar45->y;
    fStack_7 = pVVar45->z;
    pHVar48 = (this->fields).bounceState;
    if (pHVar48 != (HamsterWheelBounceState *)0x0) {
      uStack_23._0_4_ = (pHVar48->fields).bounceVelocity.x;
      uStack_23._4_4_ = (pHVar48->fields).bounceVelocity.y;
      fStack_24 = (pHVar48->fields).bounceVelocity.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_25.y = (pVVar13->zeroVector).x;
      VStack_25.z = (pVVar13->zeroVector).y;
      fStack_18 = (pVVar13->zeroVector).z;
      if (_UNK_? <=
          (uStack_23._4_4_ - VStack_25.z) * (uStack_23._4_4_ - VStack_25.z) +
          ((float)uStack_23 - VStack_25.y) * ((float)uStack_23 - VStack_25.y) +
          (fStack_24 - fStack_18) * (fStack_24 - fStack_18)) {
        uStack_9._0_4_ = (pHVar48->fields).bounceVelocity.x;
        uStack_9._4_4_ = (pHVar48->fields).bounceVelocity.y;
        fStack_7 = (pHVar48->fields).bounceVelocity.z;
      }
      (pHVar48->fields).bounced = 0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar30 = (pVVar13->zeroVector).y;
      fVar29 = (pVVar13->zeroVector).z;
      (pHVar48->fields).bounceVelocity.x = (pVVar13->zeroVector).x;
      (pHVar48->fields).bounceVelocity.y = fVar30;
      (pHVar48->fields).bounceVelocity.z = fVar29;
      uVar49 = uStack_9;
      if (bStack_43 == 0) {
        this_00 = (this->fields).jumpState;
        inputJump = (this->fields)._.Jump;
        fStack_10 = (float)CONCAT31(fStack_10._1_3_,inputJump);
        if (this_00 == (JumpState *)0x0) goto code_?;
        velocity_02.z = fStack_7;
        velocity_02.x = (float)(undefined4)uStack_9;
        velocity_02.y = uStack_9._4_4_;
        pVVar45 = JumpState::JumpState_ApplyJumping
                            (&VStack_25,this_00,(this->fields)._.interactableLocal,
                             (this->fields)._._.groundState,(this->fields)._._.density,0.0,inputJump
                             ,velocity_02,movableVelocity,(MethodInfo *)0x0);
        uVar49._0_4_ = pVVar45->x;
        uVar49._4_4_ = pVVar45->y;
        fStack_7 = pVVar45->z;
      }
      velocity_03.z = fStack_7;
      velocity_03.x = (float)(int)uVar49;
      velocity_03.y = (float)(int)((ulonglong)uVar49 >> 0x20);
      pVVar45 = MVRigidBody::MVRigidBody_GetImpulse
                          (&VStack_25,(MVRigidBody *)this,velocity_03,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
      fVar30 = pVVar45->y;
      fVar29 = pVVar45->z;
      __return_storage_ptr__->x = pVVar45->x;
      __return_storage_ptr__->y = fVar30;
      __return_storage_ptr__->z = fVar29;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?();
  pcVar50 = (code *)swi(3);
  pVVar45 = (Vector3 *)(*pcVar50)();
  return pVVar45;
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
  if (pHVar1 == (HamsterWheelBounceState *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pHVar1,ExceptionArgument__Enum_obj,(MethodInfo *)interactableLocalParam);
    (pHVar1->fields).interactable = (MVInteractableBase *)interactableLocalParam;
    func_?();
    (this->fields).bounceState = pHVar1;
    func_?(&(this->fields).bounceState);
    (this->fields).interactable = (MVInteractableBase *)interactableLocalParam;
    func_?(&(this->fields).interactable,interactableLocalParam);
    if ((smoothCharacterController == (SmoothCharacterController *)0x0) ||
       (pMVar5 = (smoothCharacterController->fields).controller,
       pMVar5 == (MvCharacterController *)0x0)) goto code_?;
    pHVar1 = (this->fields).bounceState;
    pAVar6 = (Action_1_MVControllerColliderHit_ *)func_?();
    if (pAVar6 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar6,(Object *)pHVar1,
               MethodInfo__HamsterWheelBounceState__HandleMoveHit_MVControllerColliderHit_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pAVar6,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pMVar5->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
    }
    else {
      pAVar6 = (Action_1_MVControllerColliderHit_ *)func_?();
      if (pAVar6 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      (pMVar5->fields).OnControllerColliderHit = pAVar6;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
    }
    func_?();
    pJVar9 = (JumpState *)func_?();
    if (pJVar9 == (JumpState *)0x0) goto code_?;
    JumpState::JumpState__ctor_1(pJVar9,3.0,(MethodInfo *)0x0);
    (this->fields).jumpState = pJVar9;
    func_?();
    pMVar10 = (this->fields)._._.groundState;
    if (pMVar10 == (MVGroundState *)0x0) goto code_?;
    pJVar9 = (this->fields).jumpState;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    if (this_00 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)pJVar9,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)this_00,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pMVar10->fields).OnGroundChange = (Action_1_GroundChange_ *)0x0;
code_?:
      func_?();
      iVar8 = iRam_?;
      if (iRam_? == 0) goto code_?;
      pJVar9 = (this->fields).jumpState;
      pDVar7 = *(Delegate **)(iRam_? + 0x60);
      pAVar6 = (Action_1_MVControllerColliderHit_ *)func_?();
      if (pAVar6 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[MVControllerColliderHit]::
      Action_1_MVControllerColliderHit___ctor
                (pAVar6,(Object *)pJVar9,
                 MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar7,(Delegate *)pAVar6,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        *(undefined4 *)(iVar8 + 0x60) = 0;
        func_?();
        return;
      }
      iVar11 = func_?();
      if (iVar11 != 0) {
        *(int *)(iVar8 + 0x60) = iVar11;
        iVar8 = func_?();
        if (iVar8 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pAVar12 = (Action_1_GroundChange_ *)func_?();
    if (pAVar12 != (Action_1_GroundChange_ *)0x0) {
      (pMVar10->fields).OnGroundChange = pAVar12;
      iVar8 = func_?();
      if (iVar8 != 0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  pMVar4 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                     ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  if (pMVar4 != (MvCharacterController *)0x0) {
    (pMVar4->fields)._Velocity_k__BackingField.x = (pVVar1->zeroVector).x;
    (pMVar4->fields)._Velocity_k__BackingField.y = fVar2;
    (pMVar4->fields)._Velocity_k__BackingField.z = fVar3;
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
  if (this_00 != (ImpactState *)0x0) {
    ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
    (this->fields)._.impactState = this_00;
    func_?(&(this->fields)._.impactState,this_00);
    MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,HamsterWheelMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields).curVelocity.y;
  fVar2 = (this->fields).curVelocity.z;
  __return_storage_ptr__->x = (this->fields).curVelocity.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

