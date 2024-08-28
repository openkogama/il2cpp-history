
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
  pIStack_4 = (IVehicleCamera__Class *)(velocity.x - velocity.x * _UNK_?);
  fStack_5 = velocity.y - velocity.y * _UNK_?;
  pQStack_6 = (Quaternion *)(velocity.z - velocity.z * _UNK_?);
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  pIStack_8 = (IVehicleCamera *)(fVar7 / _UNK_?);
  fStack_9 = velocity.x - (float)pIStack_4 * (float)pIStack_8;
  uStack_10 = CONCAT44(velocity.y - fStack_5 * (float)pIStack_8,(undefined4)uStack_10);
  fStack_11 = velocity.z - (float)pQStack_6 * (float)pIStack_8;
  if ((this->fields)._.HandleInput != 0) {
    pCVar12 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar12 == (Component *)0x0) goto code_?;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar12,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar14->upVector).x;
    uVar16 = (pVVar14->upVector).y;
    pIStack_4 = (IVehicleCamera__Class *)(pVVar14->upVector).z;
    VStack_17.z = (float)uVar15;
    fStack_18 = (float)uVar16;
    pQStack_6 = (Quaternion *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pIStack_8 = (IVehicleCamera *)
                 MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                           (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar13 == (Transform *)0x0) goto code_?;
    axis.y = fStack_18;
    axis.x = VStack_17.z;
    axis.z = (float)pIStack_4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar13,axis,(float)pQStack_6 * _UNK_? * (float)pIStack_8 * _UNK_?,
               Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    pIVar19 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar19 == (IVehicleCamera *)0x0) goto code_?;
    fVar3 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar19);
    pQStack_6 = (Quaternion *)(float)fVar3;
    fStack_20 = 0.0;
    auVar21._4_8_ = 0;
    auVar21._0_4_ = (float)pQStack_6 * _UNK_?;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_23,(Vector3)(auVar21 << 0x20),(MethodInfo *)0x0);
    VStack_17.x = pQVar22->x;
    VStack_17.y = pQVar22->y;
    VStack_17.z = pQVar22->z;
    fStack_18 = pQVar22->w;
    pCVar12 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar12 == (Component *)0x0) ||
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
    goto code_?;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_23,pTVar13,(MethodInfo *)0x0);
    VStack_24.x = pQVar22->x;
    fStack_25 = pQVar22->y;
    fStack_26 = pQVar22->z;
    VStack_24.y = pQVar22->y;
    VStack_24.z = pQVar22->z;
    fStack_27 = pQVar22->w;
    QStack_23.x = pQVar22->x;
    QStack_23.y = pQVar22->y;
    QStack_23.z = pQVar22->z;
    QStack_23.w = pQVar22->w;
    fVar7 = fStack_18 * VStack_24.x;
    fVar28 = VStack_17.z * fStack_25;
    fVar29 = fStack_18 * fStack_25;
    fVar30 = VStack_17.x * fStack_26;
    fVar31 = VStack_17.z * VStack_24.x;
    fVar32 = VStack_17.z * fStack_26;
    VStack_17.z = (VStack_17.z * fStack_27 + fStack_18 * fStack_26 + VStack_17.y * VStack_24.x) -
                  VStack_17.x * fStack_25;
    fStack_18 = ((fStack_18 * fStack_27 - VStack_17.x * VStack_24.x) - VStack_17.y * fStack_25) -
                fVar32;
    fStack_33 = fStack_27;
    fStack_34 = fStack_27;
    fStack_35 = fStack_27;
    fStack_36 = fStack_26;
    fStack_37 = fStack_26;
    fStack_38 = fStack_26;
    fStack_39 = fStack_25;
    fStack_40 = fStack_25;
    fStack_41 = fStack_25;
    fStack_20 = fStack_27;
    VStack_17.x = (VStack_17.x * fStack_27 + fVar7 + fVar28) - VStack_17.y * fStack_26;
    VStack_17.y = (VStack_17.y * fStack_27 + fVar29 + fVar30) - fVar31;
    pQStack_6 = (Quaternion *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
    a.y = QStack_23.y;
    a.x = QStack_23.x;
    a.z = QStack_23.z;
    a.w = QStack_23.w;
    b.y = VStack_17.y;
    b.x = VStack_17.x;
    b.z = VStack_17.z;
    b.w = fStack_18;
    pQStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                           (&QStack_23,a,b,(float)pQStack_6 * _UNK_?,(MethodInfo *)0x0);
    fVar7 = (float)((uint)(pQStack_6->y * fStack_25 + pQStack_6->x * VStack_24.x +
                            pQStack_6->z * fStack_26 + pQStack_6->w * fStack_27) & _UNK_?);
    if (_UNK_? <= fVar7) {
      fVar7 = _UNK_?;
    }
    fVar28 = 0.0;
    if (fVar7 <= _UNK_?) {
      auVar42._0_8_ = (double)fVar7;
      auVar42._8_8_ = 0;
      func_?();
      fVar28 = ((float)auVar42._0_8_ + (float)auVar42._0_8_) * _UNK_?;
    }
    fStack_5 = fVar28;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar13,*pQStack_6,(MethodInfo *)0x0);
    pIStack_8 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIStack_8 == (IVehicleCamera *)0x0) goto code_?;
    fVar3 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIStack_8);
    pIStack_4 = (IVehicleCamera__Class *)(float)fVar3;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar7 = fVar7 * _UNK_?;
    fStack_5 = fStack_5 - (float)pIStack_4;
    if (fVar7 < 0.0) {
      fStack_5 = fStack_5 * 0.0;
    }
    else if (fVar7 <= _UNK_?) {
      fStack_5 = fStack_5 * fVar7;
    }
    fStack_5 = fStack_5 + (float)pIStack_4;
    uVar43 = 0;
    pQStack_6 = (Quaternion *)0x0;
    pIStack_4 = pIStack_8->klass;
    uVar44._0_1_ = (pIStack_4->_1).rank;
    uVar44._1_1_ = (pIStack_4->_1).minimumAlignment;
    fStack_18 = (float)(uint)uVar44;
    if (uVar44 != 0) {
      do {
        if (pIStack_4->interfaceOffsets[uVar43].interfaceType ==
            (Il2CppClass *)TypeInfo__IVehicleCamera) {
          ppMVar45 = &(&(pIStack_4->vtable).set_RotationAroundY)
                      [pIStack_4->interfaceOffsets[uVar43].offset].method;
          goto code_?;
        }
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar44);
    }
    ppMVar45 = (MethodInfo **)func_?(pIStack_8,TypeInfo__IVehicleCamera,1);
code_?:
    (*(code *)*ppMVar45)(pIStack_8,fStack_5,ppMVar45[1]);
  }
  pVVar46 = (this->fields)._.vehicleEnergyContainer;
  if (pVVar46 == (VehicleEnergyContainer *)0x0) goto code_?;
  bStack_47 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
              VehicleEnergyContainer_get_OutOfEnergy(pVVar46,(MethodInfo *)0x0);
  if (0.0 < (this->fields)._.DirectInputMoveMap.z) {
    fVar7 = (this->fields).speed;
    if (fVar7 < (float)pMStack_2) {
      fStack_18 = fVar7;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      (this->fields).speed = fVar7 * _UNK_? + fStack_18;
    }
    if ((float)pMStack_2 < (this->fields).speed) {
      (this->fields).speed = (float)pMStack_2;
    }
  }
  pfVar48 = &(this->fields)._.DirectInputMoveMap.z;
  if (*pfVar48 <= 0.0 && *pfVar48 != 0.0) {
    fVar7 = (this->fields).speed;
    fVar28 = _UNK_?;
    if (_UNK_? < fVar7) {
      fStack_18 = fVar7;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar28 = _UNK_?;
      (this->fields).speed = fStack_18 - fVar7 * _UNK_?;
    }
    pfVar48 = &(this->fields).speed;
    if (*pfVar48 <= fVar28 && fVar28 != *pfVar48) {
      (this->fields).speed = -10.0;
    }
  }
  if ((this->fields)._.DirectInputMoveMap.z == 0.0) {
    (this->fields).speed = 0.0;
  }
  else if (bStack_47 == 0) {
    pVVar46 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar46 == (VehicleEnergyContainer *)0x0) goto code_?;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
              (pVVar46,(MethodInfo *)0x0);
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
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar13 != (Transform *)0x0) {
    pVVar49 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (&VStack_17,pTVar13,(MethodInfo *)0x0);
    VStack_24.y = pVVar49->x;
    VStack_24.z = pVVar49->y;
    fStack_20 = pVVar49->z;
    fStack_18 = (this->fields).speed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar7 = fVar7 * fStack_18;
    VStack_17.y = VStack_24.y * fVar7 + fStack_9;
    VStack_17.z = VStack_24.z * fVar7 + uStack_10._4_4_;
    fStack_18 = fStack_20 * fVar7 + fStack_11;
    pMStack_2 = (MethodInfo *)
                 SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                           ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (_UNK_? < (float)pMStack_2) {
      fStack_11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      velocity_01.y = VStack_17.z;
      velocity_01.x = VStack_17.y;
      velocity_01.z = fStack_18;
      pVVar49 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                          (&VStack_24,velocity_01,(float)pMStack_2,fStack_11,(MethodInfo *)0x0);
    }
    else {
      velocity_00.y = VStack_17.z;
      velocity_00.x = VStack_17.y;
      velocity_00.z = fStack_18;
      pVVar49 = MVRigidBody::MVRigidBody_ApplyGravity
                          (&VStack_24,(MVRigidBody *)this,velocity_00,(this->fields).curVelocity,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
    }
    uStack_10._0_4_ = pVVar49->x;
    uStack_10._4_4_ = pVVar49->y;
    fStack_5 = pVVar49->z;
    pHVar50 = (this->fields).bounceState;
    if (pHVar50 != (HamsterWheelBounceState *)0x0) {
      VStack_24.y = (pHVar50->fields).bounceVelocity.x;
      VStack_24.z = (pHVar50->fields).bounceVelocity.y;
      fStack_20 = (pHVar50->fields).bounceVelocity.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar51 = (pVVar14->zeroVector).x;
      uVar52 = (pVVar14->zeroVector).y;
      fStack_18 = (pVVar14->zeroVector).z;
      if (_UNK_? <=
          (VStack_24.z - (float)uVar52) * (VStack_24.z - (float)uVar52) +
          (VStack_24.y - (float)uVar51) * (VStack_24.y - (float)uVar51) +
          (fStack_20 - fStack_18) * (fStack_20 - fStack_18)) {
        uStack_10._0_4_ = (pHVar50->fields).bounceVelocity.x;
        uStack_10._4_4_ = (pHVar50->fields).bounceVelocity.y;
        fStack_5 = (pHVar50->fields).bounceVelocity.z;
      }
      (pHVar50->fields).bounced = 0;
      VStack_17.y = (float)uVar51;
      VStack_17.z = (float)uVar52;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar28 = (pVVar14->zeroVector).y;
      fVar7 = (pVVar14->zeroVector).z;
      (pHVar50->fields).bounceVelocity.x = (pVVar14->zeroVector).x;
      (pHVar50->fields).bounceVelocity.y = fVar28;
      (pHVar50->fields).bounceVelocity.z = fVar7;
      uVar53 = uStack_10;
      if (bStack_47 == 0) {
        this_00 = (this->fields).jumpState;
        inputJump = (this->fields)._.Jump;
        fStack_11 = (float)CONCAT31(fStack_11._1_3_,inputJump);
        if (this_00 == (JumpState *)0x0) goto code_?;
        velocity_02.z = fStack_5;
        velocity_02.x = (float)(undefined4)uStack_10;
        velocity_02.y = uStack_10._4_4_;
        pVVar49 = JumpState::JumpState_ApplyJumping
                            (&VStack_24,this_00,(this->fields)._.interactableLocal,
                             (this->fields)._._.groundState,(this->fields)._._.density,0.0,inputJump
                             ,velocity_02,movableVelocity,(MethodInfo *)0x0);
        uVar53._0_4_ = pVVar49->x;
        uVar53._4_4_ = pVVar49->y;
        fStack_5 = pVVar49->z;
      }
      velocity_03.z = fStack_5;
      velocity_03.x = (float)(int)uVar53;
      velocity_03.y = (float)(int)((ulonglong)uVar53 >> 0x20);
      pVVar49 = MVRigidBody::MVRigidBody_GetImpulse
                          (&VStack_24,(MVRigidBody *)this,velocity_03,
                           (this->fields)._.interactableLocal,(MethodInfo *)0x0);
      fVar28 = pVVar49->y;
      fVar7 = pVVar49->z;
      __return_storage_ptr__->x = pVVar49->x;
      __return_storage_ptr__->y = fVar28;
      __return_storage_ptr__->z = fVar7;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?();
  pcVar54 = (code *)swi(3);
  pVVar49 = (Vector3 *)(*pcVar54)();
  return pVVar49;
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
            ((Object *)pHVar1,ExceptionArgument__Enum_obj,(MethodInfo *)pHVar1);
  (pHVar1->fields).interactable = (MVInteractableBase *)interactableLocalParam;
  func_?();
  ppHVar5 = &(this->fields).bounceState;
  *ppHVar5 = pHVar1;
  func_?(ppHVar5);
  ppMVar6 = &(this->fields).interactable;
  *ppMVar6 = (MVInteractableBase *)interactableLocalParam;
  func_?(ppMVar6,interactableLocalParam);
  if (smoothCharacterController == (SmoothCharacterController *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar7 = (smoothCharacterController->fields).controller;
    if (pMVar7 == (MvCharacterController *)0x0) goto code_?;
    pAVar8 = (pMVar7->fields).OnControllerColliderHit;
    pHVar1 = *ppHVar5;
    this_00 = (Action_1_MVControllerColliderHit_ *)func_?();
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (this_00,(Object *)pHVar1,
               MethodInfo__HamsterWheelBounceState__HandleMoveHit_MVControllerColliderHit_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar9 == (Delegate *)0x0) {
      iRam_? = 0;
code_?:
      func_?();
      this_01 = (JumpState *)func_?();
      JumpState::JumpState__ctor_1(this_01,3.0,(MethodInfo *)0x0);
      pAVar8[1].fields._._.extra_arg = this_01;
      func_?();
      pvVar10 = (pAVar8->fields)._._.delegate_trampoline;
      if (pvVar10 != (void *)0x0) {
        pDVar9 = *(Delegate **)((int)pvVar10 + 0x34);
        pOVar11 = pAVar8[1].fields._._.extra_arg;
        this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,pOVar11,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                   (MethodInfo *)0x0);
        pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar9,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pDVar12 == (Delegate *)0x0) {
          (pDVar9->fields).data = (DelegateData *)0x0;
        }
        else {
          pDVar13 = (DelegateData *)func_?();
          if (pDVar13 == (DelegateData *)0x0) goto code_?;
          (pDVar9->fields).data = pDVar13;
          iVar14 = func_?();
          if (iVar14 == 0) goto code_?;
        }
        func_?();
        pOVar11 = (this_02->fields)._._.m_target;
        if (pOVar11 != (Object *)0x0) {
          pDVar9 = (Delegate *)pOVar11[0xc].monitor;
          pAVar8 = (Action_1_MVControllerColliderHit_ *)func_?();
          mscorlib.dll::System::Action`1[MVControllerColliderHit]::
          Action_1_MVControllerColliderHit___ctor
                    (pAVar8,pORam00000000,
                     MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0
                    );
          pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar9,(Delegate *)pAVar8,(MethodInfo *)0x0);
          if (pDVar12 == (Delegate *)0x0) {
            pDVar9[1].fields.interp_invoke_impl = (void *)0x0;
            func_?();
            return;
          }
          pvVar10 = (void *)func_?();
          if (pvVar10 == (void *)0x0) goto code_?;
          pDVar9[1].fields.interp_invoke_impl = pvVar10;
          iVar14 = func_?();
          if (iVar14 != 0) {
            func_?();
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    iVar14 = func_?();
    if (iVar14 == 0) goto code_?;
    iRam_? = iVar14;
    iVar14 = func_?();
    if (iVar14 != 0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  ppIVar4 = &(this->fields)._.impactState;
  *ppIVar4 = this_00;
  func_?(ppIVar4,this_00);
  MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
  return;
}

