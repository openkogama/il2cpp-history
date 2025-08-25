
/* Single DragCoefficientXZHullRotationFactor(Vector3, Single) */

float Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_DragCoefficientXZHullRotationFactor
                (HoverCraftMotor *this,Vector3 velocity,float hullRotationFactor,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&velocity,(MethodInfo *)0x0)
  ;
  this_00 = (Component *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if (this_00 != (Component *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffdc,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->x;
      fVar3 = pQVar1->y;
      fVar4 = pQVar1->z;
      fVar5 = pQVar1->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = fVar3;
      rotation.x = fVar2;
      rotation.z = fVar4;
      rotation.w = fVar5;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffe0,rotation,
                          TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                          (MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      return (float)((uint)(velocity.y * (float)uVar8 + velocity.x * (float)uVar7 +
                           velocity.z * pVVar6->z) & _UNK_?) * hullRotationFactor;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* Vector3 GetVehicleInputVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleInputVelocity
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    MethodInfo *method)

{
  pVVar1 = HoverCraftMotor_GetVehicleInputVelocityClassicCam
                     (&velocity,this,velocity,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetVehicleInputVelocityClassicCam(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleInputVelocityClassicCam
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftMotor);
    func_?(&TypeInfo__IVehicleCamera);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftMotor);
  }
  pVVar1 = HoverCraftMotor_HoverCraftFrictionXZ
                      ((Vector3 *)&stack0xffffff80,velocity,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if ((this->fields)._.HandleInput != 0) {
    pCVar5 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar5 == (Component *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    VVar7 = TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar9 = (this->fields).angularSpeed;
    fVar10 = (this->fields)._.DirectInputMoveMap.x;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar11 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                       (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar6,VVar7,
               fVar8 * _UNK_? * fVar9 * fVar10 * (float)((uint)fVar11 & _UNK_?),
               Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    if ((this->fields)._._VehicleCamera_k__BackingField == (IVehicleCamera *)0x0)
    goto code_?;
    fVar12 = (float10)func_?();
    auVar13._4_8_ = 0;
    auVar13._0_4_ = (float)fVar12 * _UNK_?;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffff70,(Vector3)(auVar13 << 0x20),(MethodInfo *)0x0
                        );
    fVar9 = pQVar14->x;
    fVar10 = pQVar14->y;
    fVar8 = pQVar14->z;
    fVar11 = pQVar14->w;
    pCVar5 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar5 == (Component *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar5,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff80,pTVar6,(MethodInfo *)0x0);
    fVar15 = pQVar14->x;
    fVar16 = pQVar14->y;
    fVar17 = pQVar14->z;
    fVar18 = pQVar14->w;
    fVar19 = (fVar11 * fVar15 + fVar9 * fVar18 + fVar8 * fVar16) - fVar10 * fVar17;
    fVar20 = (fVar11 * fVar16 + fVar10 * fVar18 + fVar9 * fVar17) - fVar8 * fVar15;
    fVar21 = (fVar11 * fVar17 + fVar8 * fVar18 + fVar10 * fVar15) - fVar9 * fVar16;
    fVar9 = ((fVar11 * fVar18 - fVar9 * fVar15) - fVar10 * fVar16) - fVar8 * fVar17;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a.y = fVar16;
    a.x = fVar15;
    a.z = fVar17;
    a.w = fVar18;
    b.y = fVar20;
    b.x = fVar19;
    b.z = fVar21;
    b.w = fVar9;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                        ((Quaternion *)&stack0xffffff70,a,b,fVar10 * _UNK_?,(MethodInfo *)0x0
                        );
    fVar9 = pQVar14->w;
    fVar10 = pQVar14->z;
    fVar8 = pQVar14->w;
    pCVar5 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar5 == (Component *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar5,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    fVar11 = 0.0;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff90,pTVar6,(MethodInfo *)0x0);
    fVar10 = (float)((uint)(fVar11 * pQVar14->y + (float)pTVar6 * pQVar14->x + fVar10 * pQVar14->z
                           + fVar8 * pQVar14->w) & _UNK_?);
    if (_UNK_? <= fVar10) {
      fVar10 = _UNK_?;
    }
    if (fVar10 <= _UNK_?) {
      func_?();
    }
    pCVar5 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar5 == (Component *)0x0) goto code_?;
    fVar10 = 0.0;
    puVar22 = &UNK_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar5,(MethodInfo *)0x0);
    if ((pTVar6 == (Transform *)0x0) ||
       (value.y = (float)pCVar5, value.x = (float)puVar22, value.z = fVar10, value.w = fVar9,
       UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                 (pTVar6,value,(MethodInfo *)0x0),
       (this->fields)._._VehicleCamera_k__BackingField == (IVehicleCamera *)0x0))
    goto code_?;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime((MethodInfo *)0x0);
    func_?();
  }
  uVar23 = (this->fields)._.DirectInputMoveMap.y;
  fVar9 = (this->fields)._.DirectInputMoveMap.z;
  if (fVar9 != 0.0) {
    pVVar24 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar24 == (VehicleEnergyContainer *)0x0) goto code_?;
    bVar25 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
             VehicleEnergyContainer_get_OutOfEnergy(pVVar24,(MethodInfo *)0x0);
    if (bVar25 == 0) {
      pVVar24 = (this->fields)._.vehicleEnergyContainer;
      if (pVVar24 == (VehicleEnergyContainer *)0x0) goto code_?;
      WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
                (pVVar24,(MethodInfo *)0x0);
    }
  }
  pCVar5 = (Component *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if ((pCVar5 != (Component *)0x0) &&
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff70,pTVar6,(MethodInfo *)0x0);
    auVar26._4_4_ = fVar9;
    auVar26._0_4_ = uVar23;
    auVar26._8_4_ = 0;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff80,*pQVar14,(Vector3)(auVar26 << 0x20),
                         (MethodInfo *)0x0);
    uStack_27._0_4_ = pVVar1->x;
    uStack_27._4_4_ = pVVar1->y;
    fStack_28 = pVVar1->z;
    VVar7 = *pVVar1;
    pMVar29 = (this->fields)._._.groundState;
    if (pMVar29 != (MVGroundState *)0x0) {
      bVar25 = MVGroundState::MVGroundState_get_Grounded(pMVar29,(MethodInfo *)0x0);
      if (bVar25 != 0) {
        pMVar29 = (this->fields)._._.groundState;
        if (pMVar29 == (MVGroundState *)0x0) goto code_?;
        pVVar1 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                            ((Vector3 *)&stack0xffffff80,VVar7,(pMVar29->fields).groundNormal,
                             (MethodInfo *)0x0);
        uStack_27._0_4_ = pVVar1->x;
        uStack_27._4_4_ = pVVar1->y;
        fStack_28 = pVVar1->z;
      }
      puVar30 = (undefined8 *)func_?();
      fVar11 = (float)uVar3 * (float)uVar3 + 0.0 + 0.0;
      fVar9 = *(float *)(puVar30 + 1);
      fVar8 = (float)uVar2 * (float)uVar2 + 0.0 + fVar4 * fVar4;
      fVar10 = (float)((ulonglong)*puVar30 >> 0x20);
      if ((0.0 < fVar10) && ((this->fields).isVerticalThrusting == 0)) {
        fVar10 = fVar10 * (this->fields).dragCoefficentUp;
      }
      if ((fVar10 <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
        fVar10 = fVar10 * (this->fields).dragCoefficentDown;
      }
      uVar31 = *puVar30;
      fVar15 = (this->fields).dragCoefficientXZ;
      fVar18 = fVar15 * fVar9;
      fVar21 = (float)*puVar30;
      fVar19 = 0.0;
      fVar16 = fVar21;
      fVar17 = fVar9;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
      pCVar5 = (Component *)
                System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                          ((DataTable *)this,(MethodInfo *)0x0);
      if ((pCVar5 != (Component *)0x0) &&
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0xffffff70,pTVar6,(MethodInfo *)0x0);
        fVar20 = pQVar14->x;
        fVar32 = pQVar14->y;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
        uVar33 = pVVar1->x;
        uVar34 = pVVar1->y;
        rotation.y = fVar32;
        rotation.x = fVar20;
        rotation.z = (float)uVar33;
        rotation.w = (float)uVar34;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffff70,rotation,*pVVar1,(MethodInfo *)0x0);
        uVar35 = pVVar1->x;
        uVar36 = pVVar1->y;
        fVar17 = (float)((uint)((float)((uint)(fVar19 * (float)uVar36 + fVar16 * (float)uVar35 +
                                              fVar17 * pVVar1->z) & _UNK_?) * _UNK_?)
                        ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        fVar16 = fVar17 * _UNK_?;
        pMVar37 = (this->fields)._.interactableLocal;
        if (pMVar37 != (MVInteractableBase *)0x0) {
          fVar12 = (float10)(*(code *)(pMVar37->klass->vtable).__unknown_8.method)();
          fVar20 = (float)fVar12;
          fVar19 = (this->fields).mass;
          pVVar24 = (this->fields)._.vehicleEnergyContainer;
          if (pVVar24 != (VehicleEnergyContainer *)0x0) {
            if ((((pVVar24->fields)._UsingEnergy_k__BackingField != 0) &&
                (bVar25 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                          VehicleEnergyContainer_get_OutOfEnergy(pVVar24,(MethodInfo *)0x0),
                bVar25 != 0)) && (_UNK_? < fVar8)) {
              __return_storage_ptr__->x = (float)uVar2;
              __return_storage_ptr__->y = (float)uVar3;
              __return_storage_ptr__->z = fVar4;
              return __return_storage_ptr__;
            }
            fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            VVar7.y = fVar32 * ((fVar20 * uStack_27._4_4_ +
                                 fVar15 * 0.0 * fVar8 + fVar10 * fVar11 + fVar16 * fVar8) / fVar19
                                ) + (float)uVar3;
            VVar7.x = fVar32 * ((fVar20 * (float)uStack_27 +
                                 fVar15 * (float)uVar31 * fVar8 + fVar11 * 0.0 +
                                 fVar17 * fVar21 * fVar8) / fVar19) + (float)uVar2;
            VVar7.z = fVar32 * ((fVar20 * fStack_28 +
                                 fVar18 * fVar8 + fVar11 * 0.0 + fVar17 * fVar9 * fVar8) / fVar19
                                ) + fVar4;
            pVVar1 = HoverCraftMotor_HandleVerticalThrust
                                ((Vector3 *)&stack0xffffff70,this,VVar7,(MethodInfo *)0x0);
            fVar9 = pVVar1->y;
            fVar4 = pVVar1->z;
            __return_storage_ptr__->x = pVVar1->x;
            __return_storage_ptr__->y = fVar9;
            __return_storage_ptr__->z = fVar4;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar38)();
  return pVVar1;
}


/* Vector3 GetVehicleVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleVelocity
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  pVVar1 = HoverCraftMotor_GetVehicleInputVelocityClassicCam
                     (&velocity,this,velocity,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  velocity.z = SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                         ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (_UNK_? < velocity.z) {
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    uVar6 = CONCAT44(fVar5,velocity.z);
    velocity_02.y = (float)uVar3;
    velocity_02.x = (float)uVar2;
    velocity_02.z = fVar4;
    pVVar1 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                       (&velocity,velocity_02,velocity.z,fVar5,(MethodInfo *)0x0);
    uVar7._0_4_ = pVVar1->x;
    uVar7._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
  }
  else {
    this_00 = (this->fields)._._.groundState;
    if (this_00 == (MVGroundState *)0x0) goto code_?;
    uVar6 = 0;
    bVar8 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      if ((this->fields).isVerticalThrusting != 0) {
        (this->fields)._._.density = 0.2;
      }
      uVar9 = (this->fields).velocityPrevFrame.x;
      uVar10 = (this->fields).velocityPrevFrame.y;
      __return_storage_ptr__ = (Vector3 *)(this->fields).velocityPrevFrame.z;
      velocity.x = 0.0;
      velocity_01.y = (float)uVar3;
      velocity_01.x = (float)uVar2;
      velocity_01.z = fVar4;
      fVar11 = (float)uVar10;
      pVVar1 = MVRigidBody::MVRigidBody_ApplyGravity
                         (&velocity,(MVRigidBody *)this,velocity_01,
                          (Vector3)CONCAT84(uVar6,(float)uVar9),(this->fields)._.interactableLocal,
                          (MethodInfo *)0x0);
      uVar7._0_4_ = pVVar1->x;
      uVar7._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      (this->fields)._._.density = 1.3;
      uVar6 = CONCAT44(__return_storage_ptr__,uVar10);
    }
    else {
      uVar7 = CONCAT44(uVar3,uVar2);
    }
  }
  this_01 = (this->fields).bounceState;
  if (this_01 != (BounceState *)0x0) {
    velocity.y = (float)&velocity;
    velocity.x = (float)&UNK_?;
    velocity_00.z = fVar4;
    velocity_00.x = (float)(int)uVar7;
    velocity_00.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    velocity.z = (float)this_01;
    pVVar1 = BounceState::BounceState_ApplyBounceVelocity
                       ((Vector3 *)velocity.y,this_01,velocity_00,(MethodInfo *)0x0);
    pVVar1 = MVRigidBody::MVRigidBody_GetImpulse
                       (&velocity,(MVRigidBody *)this,*pVVar1,(this->fields)._.interactableLocal,
                        (MethodInfo *)0x0);
    pVVar1 = MVRigidBody::MVRigidBody_VelocityDamping
                       (&velocity,*pVVar1,1.0,(this->fields)._.interactableLocal,(MethodInfo *)0x0);
    __return_storage_ptr__ = (Vector3 *)((ulonglong)uVar6 >> 0x20);
    fVar5 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar12)();
  return pVVar1;
}


/* Vector3 HandleVerticalThrust(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HandleVerticalThrust
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    MethodInfo *method)

{
  bVar1 = (this->fields)._.Jump;
  (this->fields).isVerticalThrusting = 0;
  uVar2 = velocity._0_8_;
  if (bVar1 == 0) {
    if ((this->fields).wasJumping != 0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stoppedJumpingTime = fVar3;
      (this->fields).wasJumping = 0;
    }
    pfVar4 = &(this->fields).availableVerticalThrustTime;
    if (*pfVar4 <= _UNK_? && _UNK_? != *pfVar4) {
      fVar3 = (this->fields).availableVerticalThrustTime;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      fVar3 = fVar5 * _UNK_? + fVar3;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      (this->fields).availableVerticalThrustTime = fVar3;
    }
  }
  else {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (_UNK_? <= fVar3 - (this->fields).stoppedJumpingTime) {
      fVar3 = (this->fields).availableVerticalThrustTime;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      fVar3 = fVar3 - fVar5;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      (this->fields).availableVerticalThrustTime = fVar3;
      if (fVar3 == 0.0) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).stoppedJumpingTime = fVar3;
        (this->fields).wasJumping = 0;
      }
      else {
        this_00 = (this->fields)._.vehicleEnergyContainer;
        if (this_00 == (VehicleEnergyContainer *)0x0) {
          func_?();
          pcVar6 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar6)();
          return pVVar7;
        }
        bVar1 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                VehicleEnergyContainer_get_OutOfEnergy(this_00,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          (this->fields).isVerticalThrusting = 1;
          if ((this->fields).wasJumping == 0) {
            pVVar7 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
            uVar8 = pVVar7->x;
            uVar9 = pVVar7->y;
            fVar5 = pVVar7->z;
            fVar3 = (this->fields).jumpForce;
            (this->fields).wasJumping = 1;
            __return_storage_ptr__->x = velocity.x + (float)uVar8 * fVar3;
            __return_storage_ptr__->y = velocity.y + (float)uVar9 * fVar3;
            __return_storage_ptr__->z = velocity.z + fVar5 * fVar3;
            return __return_storage_ptr__;
          }
          (this->fields).wasJumping = 1;
          __return_storage_ptr__->x = (float)(int)uVar2;
          __return_storage_ptr__->y = (float)(int)((ulonglong)uVar2 >> 0x20);
          __return_storage_ptr__->z = velocity.z;
          return __return_storage_ptr__;
        }
      }
    }
  }
  __return_storage_ptr__->x = (float)(int)uVar2;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Vector3 HoverCraftFrictionXZ(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HoverCraftFrictionXZ
                    (Vector3 *__return_storage_ptr__,Vector3 velocity,MethodInfo *method)

{
  fStack_1 = velocity.z;
  uStack_2 = velocity._0_8_ & 0xffffffff;
  fVar3 = (float10)func_?(&uStack_2,0);
  fStack_4 = (float)fVar3;
  if (_UNK_? <= fStack_4) {
    puVar5 = (undefined8 *)func_?(auStack_6,&uStack_2,0);
    uStack_7 = *puVar5;
    fStack_8 = *(float *)(puVar5 + 1);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar9 = fVar9 * (_UNK_? / (fStack_4 * _UNK_? + _UNK_?)) * _UNK_?;
    uStack_7._0_4_ = (float)uStack_7 * fVar9;
    uStack_7._4_4_ = uStack_7._4_4_ * fVar9;
    fStack_8 = fStack_8 * fVar9;
    if ((float)uStack_2 * (float)uStack_2 + 0.0 + fStack_1 * fStack_1 <
        uStack_7._4_4_ * uStack_7._4_4_ + (float)uStack_7 * (float)uStack_7 +
        fStack_8 * fStack_8) {
      uStack_7._4_4_ = (float)(uStack_2 >> 0x20);
      uStack_7._0_4_ = (float)uStack_2;
      fStack_8 = velocity.z;
    }
    __return_storage_ptr__->x = velocity.x - (float)uStack_7;
    __return_storage_ptr__->y = velocity.y - uStack_7._4_4_;
    __return_storage_ptr__->z = velocity.z - fStack_8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = (float)(int)((ulonglong)(uint)velocity.y << 0x20);
  __return_storage_ptr__->y = (float)(int)(((ulonglong)(uint)velocity.y << 0x20) >> 0x20);
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 HullRotationDrag(Vector3, Single, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HullRotationDrag
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocityNormal,
                    float velocitySquareMagnitude,float hullRotationFactor,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  this_00 = (Component *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if (this_00 != (Component *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd4,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->x;
      fVar3 = pQVar1->y;
      fVar4 = pQVar1->z;
      fVar5 = pQVar1->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar6 = 0.0;
      fVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z;
      rotation.y = fVar3;
      rotation.x = fVar2;
      rotation.z = fVar4;
      rotation.w = fVar5;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffd8,rotation,
                          TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                          (MethodInfo *)0x0);
      uVar9 = pVVar8->x;
      uVar10 = pVVar8->y;
      fVar3 = (float)((uint)((float)((uint)(fVar6 * (float)uVar10 + fVar7 * (float)uVar9 +
                                           velocityNormal.z * pVVar8->z) & _UNK_?) *
                            hullRotationFactor) ^
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fVar2 = fVar3 * _UNK_?;
      __return_storage_ptr__->x = velocityNormal.x * fVar3 * velocitySquareMagnitude;
      __return_storage_ptr__->y = fVar2 * velocitySquareMagnitude;
      __return_storage_ptr__->z = velocityNormal.z * fVar3 * velocitySquareMagnitude;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar11)();
  return pVVar8;
}


/* Void Init(SmoothCharacterController, VehicleInteractable, VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Init
               (HoverCraftMotor *this,SmoothCharacterController *characterController,
               VehicleInteractable *interactableLocalParam,
               VehicleEnergyContainerConfig vehicleEnergyContainerConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    func_?(&MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&TypeInfo__BounceState);
    cRam_? = '\x01';
  }
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
            ((SimpleVehicleMotorBase *)this,characterController,interactableLocalParam,
             vehicleEnergyContainerConfig,(MethodInfo *)0x0);
  a = (Action_1_MVControllerColliderHit___Class *)func_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor
            ((BounceState *)a,(MVInteractable *)interactableLocalParam,(MethodInfo *)0x0);
  (this->fields).bounceState = (BounceState *)a;
  func_?(&(this->fields).bounceState,a);
  if (characterController == (SmoothCharacterController *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar1 = (characterController->fields).controller;
    if (pMVar1 == (MvCharacterController *)0x0) goto code_?;
    a = (Action_1_MVControllerColliderHit___Class *)(pMVar1->fields).OnControllerColliderHit;
    object = (this->fields).bounceState;
    this_00 = (Action_1_MVControllerColliderHit_ *)func_?();
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (this_00,(Object *)object,
               MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
    interactableLocalParam =
         (VehicleInteractable *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MVControllerColliderHit>;
    if ((Delegate *)interactableLocalParam == (Delegate *)0x0) {
      (a->_1).typeHierarchy = (Il2CppClass **)0x0;
      pAStack3 = (Action_1_MVControllerColliderHit___Class *)0x0;
code_?:
      pDStack4 = (Delegate *)&a->_1;
      func_?();
      _UNK_? = 0x3fa66666;
      return;
    }
    pAStack3 = TypeInfo__System__Action<MVControllerColliderHit>;
    pDStack4 = (Delegate *)interactableLocalParam;
    ppIVar5 = (Il2CppClass **)func_?();
    pAStack3 = pAVar2;
    if (ppIVar5 == (Il2CppClass **)0x0) goto code_?;
    (a->_1).typeHierarchy = ppIVar5;
    this = (HoverCraftMotor *)TypeInfo__System__Action<MVControllerColliderHit>;
    pAStack3 = TypeInfo__System__Action<MVControllerColliderHit>;
    pDStack4 = (Delegate *)interactableLocalParam;
    pAStack3 = (Action_1_MVControllerColliderHit___Class *)func_?();
    if (pAStack3 != (Action_1_MVControllerColliderHit___Class *)0x0) goto code_?;
  }
  pDStack4 = (Delegate *)interactableLocalParam;
  pAStack3 = (Action_1_MVControllerColliderHit___Class *)this;
  func_?();
  pAStack3 = a;
code_?:
  pDStack4 = (Delegate *)interactableLocalParam;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnLocalVehicleEnter() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_OnLocalVehicleEnter
               (HoverCraftMotor *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).dragCoefficientXZ = (this->fields).dragCoefficientXZFromInit;
  return;
}


/* Void OnLocalVehicleLeave() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_OnLocalVehicleLeave
               (HoverCraftMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftMotor);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    cRam_? = '\x01';
  }
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_OnLocalVehicleLeave
            ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftMotor);
  }
  this_00 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
  if (this_00 != (List_1_System_Single_ *)0x0) {
    fVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__get_Item
                      (this_00,8,
                       MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    (this->fields).dragCoefficientXZ = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 PlatformerDriftCorrection(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_PlatformerDriftCorrection
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    Vector3 targetDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftMotor);
    cRam_? = '\x01';
  }
  QStack_1.x = 0.0;
  QStack_1.y = 0.0;
  QStack_1.z = 0.0;
  QStack_1.w = 0.0;
  fVar2 = 0.0;
  func_?(&stack0xffffffd4,0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftMotor);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  v1.y = fVar2;
  v1.x = velocity.x;
  v1.z = velocity.z;
  fVar3 = MathFunctions::MathFunctions_SignedAngle_1
                    (v1,targetDir,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                     (MethodInfo *)0x0);
  fVar4 = (float)((uint)(fVar3 * _UNK_?) & _UNK_?);
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  fVar2 = fVar5 * _UNK_?;
  if (fVar4 < fVar5 * _UNK_?) {
    fVar2 = fVar4;
  }
  fVar4 = _UNK_?;
  if (fVar3 * _UNK_? < QStack_1.x) {
    fVar4 = _UNK_?;
  }
  QStack_1.z = 0.0;
  fVar3 = fVar4 * fVar2 * _UNK_?;
  QStack_1.w = (float)&UNK_?;
  euler.y = fVar3;
  euler.x = QStack_1.x;
  euler.z = 0.0;
  fVar2 = QStack_1.x;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_1,euler,(MethodInfo *)0x0);
  fVar4 = pQVar6->z;
  point.y = fVar3;
  point.x = fVar2;
  point.z = velocity.z;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&QStack_1,*pQVar6,point,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  fVar2 = pVVar7->z;
  __return_storage_ptr__->x = (float)uVar8 * fVar4;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = fVar2 * fVar4;
  return __return_storage_ptr__;
}


/* Void Reset() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Reset
               (HoverCraftMotor *this,MethodInfo *method)

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
  (this->fields).velocityPrevFrame.x = (pVVar1->zeroVector).x;
  (this->fields).velocityPrevFrame.y = fVar2;
  (this->fields).velocityPrevFrame.z = fVar3;
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


/* Vector3 RotateTowardsAroundY(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_RotateTowardsAroundY
                    (Vector3 *__return_storage_ptr__,Vector3 vec,Vector3 target,float speedInDegrees
                    ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = vec.z;
  v1.y = vec.y;
  v1.x = vec.x;
  v1.z = vec.z;
  fVar2 = MathFunctions::MathFunctions_SignedAngle_1
                    (v1,target,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                     (MethodInfo *)0x0);
  puStack_3 = (undefined *)((uint)(fVar2 * _UNK_?) & _UNK_?);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  puVar5 = (undefined *)(fVar4 * speedInDegrees);
  if ((float)puStack_3 < fVar4 * speedInDegrees) {
    puVar5 = puStack_3;
  }
  fVar4 = _UNK_?;
  if (fVar2 * _UNK_? < 0.0) {
    fVar4 = _UNK_?;
  }
  vec.y = 0.0;
  vec.x = 0.0;
  auVar6._4_8_ = 0;
  auVar6._0_4_ = fVar4 * (float)puVar5 * _UNK_?;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_8,(Vector3)(auVar6 << 0x20),(MethodInfo *)0x0);
  point.y = vec.y;
  point.x = vec.x;
  pVVar9 = (Vector3 *)pQVar7->x;
  vec.x = pQVar7->y;
  vec.y = pQVar7->z;
  vec.z = pQVar7->w;
  point.z = fVar1;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&vec,*pQVar7,point,(MethodInfo *)0x0);
  fVar2 = pVVar10->y;
  fVar1 = pVVar10->z;
  pVVar9->x = pVVar10->x;
  pVVar9->y = fVar2;
  pVVar9->z = fVar1;
  return pVVar9;
}


/* Void UpdateConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_UpdateConfiguration
               (HoverCraftMotor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__HoverCraftMotor);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    func_?(&StringLiteral_speed);
    func_?(&StringLiteral_jumpHeight);
    func_?(&StringLiteral_turningSpeed);
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    return;
  }
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftMotor);
  }
  pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
  if (pLVar1 != (List_1_System_Single_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    iVar2 = Extensions::Extensions_GetClampedInt
                      (data,StringLiteral_speed,1,iVar2,8,(MethodInfo *)0x0);
    pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
    if (pLVar1 != (List_1_System_Single_ *)0x0) {
      fVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
              List_1_System_Single__get_Item
                        (pLVar1,iVar2 + -1,
                         MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
      if (pLVar1 != (List_1_System_Single_ *)0x0) {
        fVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                List_1_System_Single__get_Item
                          (pLVar1,0,
                           MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
        pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
        if (pLVar1 != (List_1_System_Single_ *)0x0) {
          fVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                  List_1_System_Single__get_Item
                            (pLVar1,(pLVar1->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
          if ((fVar3 < fVar4) || (fVar4 = fVar5, fVar5 < fVar3)) {
            fVar3 = fVar4;
          }
          (this->fields).dragCoefficientXZ = fVar3;
          (this->fields).dragCoefficientXZFromInit = fVar3;
          fVar3 = Extensions::Extensions_GetClampedFloat
                            (data,StringLiteral_jumpHeight,0.0,20.0,(this->fields).jumpForce,
                             (MethodInfo *)0x0);
          (this->fields).jumpForce = fVar3;
          fVar3 = Extensions::Extensions_GetClampedFloat
                            (data,StringLiteral_turningSpeed,0.5,6.0,(this->fields).angularSpeed,
                             (MethodInfo *)0x0);
          (this->fields).angularSpeed = fVar3;
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void VehicleUpdateFunction() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_VehicleUpdateFunction
               (HoverCraftMotor *this,MethodInfo *method)

{
  this_02 = this;
  fVar1 = (this->fields).velocityPrevFrame.x;
  fVar2 = (this->fields).velocityPrevFrame.y;
  prevVelocity.y = fVar2;
  prevVelocity.x = fVar1;
  fVar3 = (this->fields).velocityPrevFrame.z;
  this_00 = (this->fields)._.movableMotorState;
  uVar4 = (this->fields).velocityPrevFrame.x;
  uVar5 = (this->fields).velocityPrevFrame.y;
  controller = (MvCharacterController *)
               System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                         ((DataTable *)this,(MethodInfo *)0x0);
  this_03 = (TypedUxmlAttributeDescription_1_System_Single_ *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if ((this_03 != (TypedUxmlAttributeDescription_1_System_Single_ *)0x0) &&
     (fVar6 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              TypedUxmlAttributeDescription`1[System::Single]::
              TypedUxmlAttributeDescription_1_System_Single__get_defaultValue
                        (this_03,(MethodInfo *)0x0), this_00 != (MVMovableMotorState *)0x0)) {
    fVar7 = 0.0;
    pMVar8 = (this->fields)._._.groundState;
    uVar9._4_4_ = (float)&stack0xffffffc4;
    uVar9._0_4_ = (float)pMVar8;
    VVar10.y = (float)uVar5;
    VVar10.x = (float)uVar4;
    VVar10.z = fVar3;
    bVar11 = MVMovableMotorState::MVMovableMotorState_Move
                       (this_00,VVar10,controller,fVar6,pMVar8,(Vector3 *)&stack0xffffffc4,
                        (MethodInfo *)0x0);
    this = (HoverCraftMotor *)((uint)bVar11 << 0x18);
    velocity_01.y = fVar2;
    velocity_01.x = fVar1;
    velocity_01.z = fVar3;
    pVVar12 = HoverCraftMotor_GetVehicleInputVelocityClassicCam
                        ((Vector3 *)&puStack_13,this_02,velocity_01,(MethodInfo *)0x0);
    fVar3 = pVVar12->x;
    pHVar14 = (HoverCraftMotor *)pVVar12->z;
    pHVar15 = (HoverCraftMotor *)&UNK_?;
    fVar1 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                      ((SimpleVehicleMotorBase *)this_02,(MethodInfo *)0x0);
    if (_UNK_? < fVar1) {
      this = pHVar15;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      velocity.y = (float)this;
      velocity.x = fVar3;
      velocity.z = (float)pHVar14;
      pVVar12 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                          ((Vector3 *)&puStack_13,velocity,fVar1,fVar2,(MethodInfo *)0x0);
      uVar16._0_4_ = pVVar12->x;
      uVar16._4_4_ = pVVar12->y;
      pHVar15 = (HoverCraftMotor *)pVVar12->z;
    }
    else {
      pMVar8 = (this_02->fields)._._.groundState;
      if (pMVar8 == (MVGroundState *)0x0) goto code_?;
      bVar11 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        if ((this_02->fields).isVerticalThrusting != 0) {
          (this_02->fields)._._.density = 0.2;
        }
        this = pHVar14;
        fVar17 = (float)pHVar15;
        VVar10.x = fVar3;
        VVar10 = (Vector3)CONCAT84(VVar10._0_8_,VVar10.x);
        pVVar12 = MVRigidBody::MVRigidBody_ApplyGravity
                            ((Vector3 *)&puStack_13,(MVRigidBody *)this_02,VVar10,
                             (this_02->fields).velocityPrevFrame,
                             (this_02->fields)._.interactableLocal,(MethodInfo *)0x0);
        uVar16._0_4_ = pVVar12->x;
        uVar16._4_4_ = pVVar12->y;
        pHVar15 = (HoverCraftMotor *)pVVar12->z;
        (this_02->fields)._._.density = 1.3;
      }
      else {
        uVar16 = CONCAT44(pHVar15,fVar3);
        pHVar15 = pHVar14;
      }
    }
    this_01 = (this_02->fields).bounceState;
    if (this_01 != (BounceState *)0x0) {
      velocity_00.z = (float)pHVar15;
      velocity_00.x = (float)(int)uVar16;
      velocity_00.y = (float)(int)((ulonglong)uVar16 >> 0x20);
      pVVar12 = BounceState::BounceState_ApplyBounceVelocity
                          ((Vector3 *)&puStack_13,this_01,velocity_00,(MethodInfo *)0x0);
      pVVar12 = MVRigidBody::MVRigidBody_GetImpulse
                          ((Vector3 *)&puStack_13,(MVRigidBody *)this_02,*pVVar12,
                           (this_02->fields)._.interactableLocal,(MethodInfo *)0x0);
      pVVar12 = MVRigidBody::MVRigidBody_VelocityDamping
                          ((Vector3 *)&puStack_13,*pVVar12,1.0,(this_02->fields)._.interactableLocal
                           ,(MethodInfo *)0x0);
      fVar1 = pVVar12->z;
      fVar2 = fVar7;
      if (this._3_1_ == '\0') {
        fVar6 = (float)uVar9;
        fVar18 = SUB84(uVar9,4);
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          fVar2 = fVar7;
        }
        pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar6 = (pVVar19->zeroVector).x;
        fVar18 = (pVVar19->zeroVector).y;
        fVar7 = (pVVar19->zeroVector).z;
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      velocity_02.y = fVar18;
      velocity_02.x = fVar6;
      velocity_02.z = fVar1;
      baseVelocity.y = fVar18;
      baseVelocity.x = fVar6;
      baseVelocity.z = fVar7;
      SimpleVehicleMotorBase::SimpleVehicleMotorBase_Move
                ((SimpleVehicleMotorBase *)this_02,velocity_02,baseVelocity,fVar3,(MethodInfo *)0x0)
      ;
      iVar20 = System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                         ((DataTable *)this_02,(MethodInfo *)0x0);
      if (iVar20 != 0) {
        fVar1 = *(float *)(iVar20 + 0x5c);
        puStack_13 = (undefined *)*(undefined8 *)(iVar20 + 0x54);
        fVar6 = (float)((ulonglong)*(undefined8 *)(iVar20 + 0x54) >> 0x20);
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
        (this_02->fields).velocityPrevFrame.x = (float)puStack_13 / fVar3;
        (this_02->fields).velocityPrevFrame.y = fVar6 / fVar3;
        (this_02->fields).velocityPrevFrame.z = fVar1 / fVar3;
        (this_02->fields).velocityPrevFrame.x = (float)puStack_13 / fVar3 - (float)uVar9;
        (this_02->fields).velocityPrevFrame.y = fVar6 / fVar3 - SUB84(uVar9,4);
        (this_02->fields).velocityPrevFrame.z = fVar1 / fVar3 - fVar2;
        prevVelocity.z = fVar18;
        SimpleVehicleMotorBase::SimpleVehicleMotorBase_DealImpactDamage
                  ((SimpleVehicleMotorBase *)this_02,(this_02->fields).velocityPrevFrame,
                   prevVelocity,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Vector3 VerticalDrag(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_VerticalDrag
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocityNormal,
                    float velocitySquareMagnitude,MethodInfo *method)

{
  if ((0.0 < velocityNormal.y) && ((this->fields).isVerticalThrusting == 0)) {
    velocityNormal.y = velocityNormal.y * (this->fields).dragCoefficentUp;
  }
  if ((velocityNormal.y <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
    velocityNormal.y = velocityNormal.y * (this->fields).dragCoefficentDown;
  }
  __return_storage_ptr__->x = velocitySquareMagnitude * 0.0;
  __return_storage_ptr__->y = velocityNormal.y * velocitySquareMagnitude;
  __return_storage_ptr__->z = velocitySquareMagnitude * 0.0;
  return __return_storage_ptr__;
}


/* Vector3 XZDrag(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_XZDrag
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocityNormal,
                    float velocitySquareMagnitude,MethodInfo *method)

{
  fVar1 = (this->fields).dragCoefficientXZ;
  __return_storage_ptr__->x = velocityNormal.x * fVar1 * velocitySquareMagnitude;
  __return_storage_ptr__->y = fVar1 * 0.0 * velocitySquareMagnitude;
  __return_storage_ptr__->z = velocityNormal.z * fVar1 * velocitySquareMagnitude;
  return __return_storage_ptr__;
}


/* HoverCraftMotor() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftMotor);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<float>);
    cRam_? = '\x01';
  }
  this = (List_1_System_Single_ *)
         func_?(TypeInfo__System__Collections__Generic__List<float>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<float>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
  if (this != (List_1_System_Single_ *)0x0) {
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 != (Single__Array *)0x0) {
      uVar4 = (this->fields)._size;
      if (uVar4 < pSVar3->max_length) {
        (this->fields)._size = uVar4 + 1;
        if (pSVar3->max_length <= uVar4) goto code_?;
        pSVar3->vector[uVar4] = -1000.0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
        List_1_System_Single__AddWithResize(this,-1000.0,pMVar1->klass->rgctx_data[0xe].method);
      }
      pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
      piVar2 = &(this->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar3 = (this->fields)._items;
      if (pSVar3 != (Single__Array *)0x0) {
        uVar4 = (this->fields)._size;
        if (uVar4 < pSVar3->max_length) {
          (this->fields)._size = uVar4 + 1;
          if (pSVar3->max_length <= uVar4) goto code_?;
          pSVar3->vector[uVar4] = -500.0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
          List_1_System_Single__AddWithResize(this,-500.0,pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
        piVar2 = &(this->fields)._version;
        *piVar2 = *piVar2 + 1;
        pSVar3 = (this->fields)._items;
        if (pSVar3 != (Single__Array *)0x0) {
          uVar4 = (this->fields)._size;
          if (uVar4 < pSVar3->max_length) {
            (this->fields)._size = uVar4 + 1;
            if (pSVar3->max_length <= uVar4) goto code_?;
            pSVar3->vector[uVar4] = -200.0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__AddWithResize(this,-200.0,pMVar1->klass->rgctx_data[0xe].method);
          }
          pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
          piVar2 = &(this->fields)._version;
          *piVar2 = *piVar2 + 1;
          pSVar3 = (this->fields)._items;
          if (pSVar3 != (Single__Array *)0x0) {
            uVar4 = (this->fields)._size;
            if (uVar4 < pSVar3->max_length) {
              (this->fields)._size = uVar4 + 1;
              if (pSVar3->max_length <= uVar4) goto code_?;
              pSVar3->vector[uVar4] = -65.0;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
              List_1_System_Single__AddWithResize(this,-65.0,pMVar1->klass->rgctx_data[0xe].method);
            }
            pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
            piVar2 = &(this->fields)._version;
            *piVar2 = *piVar2 + 1;
            pSVar3 = (this->fields)._items;
            if (pSVar3 != (Single__Array *)0x0) {
              uVar4 = (this->fields)._size;
              if (uVar4 < pSVar3->max_length) {
                (this->fields)._size = uVar4 + 1;
                if (pSVar3->max_length <= uVar4) goto code_?;
                pSVar3->vector[uVar4] = -30.0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                List_1_System_Single__AddWithResize
                          (this,-30.0,pMVar1->klass->rgctx_data[0xe].method);
              }
              pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
              piVar2 = &(this->fields)._version;
              *piVar2 = *piVar2 + 1;
              pSVar3 = (this->fields)._items;
              if (pSVar3 != (Single__Array *)0x0) {
                uVar4 = (this->fields)._size;
                if (uVar4 < pSVar3->max_length) {
                  (this->fields)._size = uVar4 + 1;
                  if (pSVar3->max_length <= uVar4) goto code_?;
                  pSVar3->vector[uVar4] = -15.0;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                  List_1_System_Single__AddWithResize
                            (this,-15.0,pMVar1->klass->rgctx_data[0xe].method);
                }
                pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
                piVar2 = &(this->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar3 = (this->fields)._items;
                if (pSVar3 != (Single__Array *)0x0) {
                  uVar4 = (this->fields)._size;
                  if (uVar4 < pSVar3->max_length) {
                    (this->fields)._size = uVar4 + 1;
                    if (pSVar3->max_length <= uVar4) goto code_?;
                    pSVar3->vector[uVar4] = -6.0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                    List_1_System_Single__AddWithResize
                              (this,-6.0,pMVar1->klass->rgctx_data[0xe].method);
                  }
                  pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
                  piVar2 = &(this->fields)._version;
                  *piVar2 = *piVar2 + 1;
                  pSVar3 = (this->fields)._items;
                  if (pSVar3 != (Single__Array *)0x0) {
                    uVar4 = (this->fields)._size;
                    if (uVar4 < pSVar3->max_length) {
                      (this->fields)._size = uVar4 + 1;
                      if (pSVar3->max_length <= uVar4) goto code_?;
                      pSVar3->vector[uVar4] = -2.0;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                      List_1_System_Single__AddWithResize
                                (this,-2.0,pMVar1->klass->rgctx_data[0xe].method);
                    }
                    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
                    piVar2 = &(this->fields)._version;
                    *piVar2 = *piVar2 + 1;
                    pSVar3 = (this->fields)._items;
                    if (pSVar3 != (Single__Array *)0x0) {
                      uVar4 = (this->fields)._size;
                      if (uVar4 < pSVar3->max_length) {
                        (this->fields)._size = uVar4 + 1;
                        if (pSVar3->max_length <= uVar4) goto code_?;
                        pSVar3->vector[uVar4] = -1.4;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                        List_1_System_Single__AddWithResize
                                  (this,-1.4,pMVar1->klass->rgctx_data[0xe].method);
                      }
                      pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
                      piVar2 = &(this->fields)._version;
                      *piVar2 = *piVar2 + 1;
                      pSVar3 = (this->fields)._items;
                      if (pSVar3 != (Single__Array *)0x0) {
                        uVar4 = (this->fields)._size;
                        if (pSVar3->max_length <= uVar4) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                          List_1_System_Single__AddWithResize
                                    (this,-1.0,pMVar1->klass->rgctx_data[0xe].method);
code_?:
                          TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap = this;
                          func_?();
                          return;
                        }
                        (this->fields)._size = uVar4 + 1;
                        if (uVar4 < pSVar3->max_length) {
                          pSVar3->vector[uVar4] = -1.0;
                          goto code_?;
                        }
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* HoverCraftMotor() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor__ctor
               (HoverCraftMotor *this,MethodInfo *method)

{
  (this->fields).thrustFactor = 15000.0;
  (this->fields).dragCoefficientXZFromInit = -2.0;
  (this->fields).dragCoefficientXZ = -2.0;
  (this->fields).dragCoefficentUp = 10.0;
  (this->fields).dragCoefficentDown = -50.0;
  (this->fields).mass = 330.0;
  (this->fields).angularSpeed = 3.4;
  (this->fields).availableVerticalThrustTime = 0.6;
  (this->fields).jumpForce = 4.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ImpactState);
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


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields).velocityPrevFrame.y;
  fVar2 = (this->fields).velocityPrevFrame.z;
  __return_storage_ptr__->x = (this->fields).velocityPrevFrame.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_set_IsMovementLocked
               (HoverCraftMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._IsMovementLocked_k__BackingField = value;
  return;
}

