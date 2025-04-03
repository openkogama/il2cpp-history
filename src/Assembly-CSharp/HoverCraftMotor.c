
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
    func_?();
    func_?();
    func_?();
    in_stack_1 = &StringLiteral_Horizontal;
    in_stack_2 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  unique0x100010f6 = velocity._0_8_;
  QStack_3.y = velocity.x;
  VStack_4.y = velocity.z;
  QStack_3.w = velocity.z;
  QStack_3.z = 0.0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTStack_5 = (Transform *)(QStack_3.y * QStack_3.y + _UNK_? + QStack_3.w * QStack_3.w);
  dVar6 = (double)(float)pTStack_5;
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  auStack_7._0_4_ = (float)dVar6;
  if ((float)dVar6 < _UNK_?) {
    QStack_3.z = (float)(stack0xffffff58 >> 0x20);
    stack0xffffff58 = stack0xffffff58 & 0xffffffff00000000;
    uVar8 = stack0xffffff58;
    auStack_7._8_4_ = 0.0;
    VStack_4.y = 0.0;
    fVar9 = 0.0;
    QStack_3.y = (float)auStack_7._8_4_;
    unique0x10001687 = uVar8;
  }
  else {
    in_stack_1 = (String **)&UNK_?;
    puVar10 = (undefined8 *)func_?();
    in_stack_2 = (undefined *)0x0;
    auStack_11 = (undefined1  [8])*puVar10;
    fStack_12 = *(float *)(puVar10 + 1);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    auStack_7._0_4_ =
         fVar9 * (_UNK_? / ((float)auStack_7._0_4_ * _UNK_? + _UNK_?)) *
                  _UNK_?;
    VStack_4.y = (float)auStack_7._0_4_ * fStack_13;
    fVar9 = (float)auStack_7._0_4_ * (float)auStack_11._4_4_;
    fVar14 = (float)auStack_7._0_4_ * fStack_12;
    register0x00001200 = CONCAT44(fVar14,fVar9);
    if ((float)pTStack_5 < fVar14 * fVar14 + fVar9 * fVar9 + VStack_4.y * VStack_4.y) {
      unique0x1000128e = CONCAT44(QStack_3.z,QStack_3.y);
      VStack_4.y = velocity.z;
    }
    fVar9 = velocity.z - VStack_4.y;
    QStack_3.z = velocity.y - VStack_4.x;
    QStack_3.y = velocity.x - (float)auStack_7._8_4_;
    VStack_15.z = fVar9;
  }
  uStack_16 = 0;
  uStack_17 = 0;
  QStack_3.w = fVar9;
  fStack_18 = QStack_3.y;
  fStack_19 = QStack_3.z;
  if ((this->fields)._.HandleInput != 0) {
    pCVar20 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar20 == (Component *)0x0) goto code_?;
    pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar20,(MethodInfo *)0x0);
    VStack_4.x = (float)pTVar21;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar22 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
    uVar23 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
    QStack_3.z = (float)uVar22;
    QStack_3.w = (float)uVar23;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fStack_24 = (this->fields).angularSpeed;
    pTStack_5 = (Transform *)(this->fields)._.DirectInputMoveMap.x;
    stack0xffffff58 = CONCAT44(fVar14,auStack_7._8_4_);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar14 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                       (StringLiteral_Horizontal,(MethodInfo *)0x0);
    auStack_7._0_4_ = fVar14;
    if (pTStack_5 == (Transform *)0x0) goto code_?;
    axis.y = (float)puStack_25;
    axis.x = fStack_26;
    axis.z = (float)ppSStack_27;
    in_stack_2 = puStack_25;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTStack_5,axis,
               VStack_4.z * _UNK_? * uStack_28._4_4_ * (float)auStack_7._4_4_ *
               (float)((uint)fVar14 & _UNK_?),Space__Enum_World,(MethodInfo *)0x0);
    in_stack_1 = ppSStack_27;
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    if ((this->fields)._._VehicleCamera_k__BackingField == (IVehicleCamera *)0x0)
    goto code_?;
    fVar29 = (float10)func_?();
    auVar30._4_8_ = 0;
    auVar30._0_4_ = (float)fVar29 * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
              ((Quaternion *)&stack0xffffff1c,(Vector3)(auVar30 << 0x20),(MethodInfo *)0x0);
    pCVar20 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar20 == (Component *)0x0) ||
       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar20,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
    goto code_?;
    pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff40,pTVar21,(MethodInfo *)0x0);
    fVar14 = pQVar31->x;
    fVar32 = pQVar31->y;
    fVar33 = pQVar31->z;
    fVar34 = pQVar31->w;
    fVar35 = (in_stack_36 * fVar32 + in_stack_37 * fVar34 + in_stack_38 * fVar33)
             - in_stack_39 * fVar14;
    fVar40 = (in_stack_36 * fVar33 + in_stack_39 * fVar34 + in_stack_37 * fVar14)
             - in_stack_38 * fVar32;
    fVar14 = ((in_stack_36 * fVar34 - in_stack_38 * fVar14) - in_stack_37 * fVar32
             ) - in_stack_39 * fVar33;
    fVar41 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a.y = fVar33;
    a.x = fVar32;
    a.z = fVar34;
    a.w = in_stack_42;
    b.y = fVar40;
    b.x = fVar35;
    b.z = fVar14;
    b.w = in_stack_43;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
              ((Quaternion *)auStack_7,a,b,fVar41 * _UNK_?,(MethodInfo *)0x0);
    pCVar20 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar20 == (Component *)0x0) ||
       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar20,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
    goto code_?;
    pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_3,pTVar21,(MethodInfo *)0x0);
    fVar14 = (float)((uint)(VStack_4.x * pQVar31->y + (float)auStack_7._8_4_ * pQVar31->x +
                            VStack_4.y * pQVar31->z + VStack_4.z * pQVar31->w) & _UNK_?);
    if (_UNK_? <= fVar14) {
      fVar14 = _UNK_?;
    }
    if (fVar14 <= _UNK_?) {
      func_?();
    }
    pCVar20 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar20 == (Component *)0x0) ||
       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar20,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
    goto code_?;
    value.z = (float)auStack_7._8_4_;
    value.x = (float)auStack_7._0_4_;
    value.y = (float)auStack_7._4_4_;
    value.w = VStack_4.x;
    in_stack_43 = (float)auStack_7._8_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar21,value,(MethodInfo *)0x0);
    pIVar44 = (this->fields)._._VehicleCamera_k__BackingField;
    auStack_7._0_4_ = pIVar44;
    if (pIVar44 == (IVehicleCamera *)0x0) goto code_?;
    fVar29 = (float10)func_?();
    auStack_7._4_4_ = (float)fVar29;
    in_stack_2 = &UNK_?;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    pTStack_5 = (Transform *)(fVar14 * _UNK_?);
    in_stack_1 = (String **)&UNK_?;
    func_?();
  }
  auStack_7._8_4_ = (this->fields)._.DirectInputMoveMap.x;
  VStack_4.x = (this->fields)._.DirectInputMoveMap.y;
  fVar14 = (this->fields)._.DirectInputMoveMap.z;
  VStack_4.y = fVar14;
  if (fVar14 != 0.0) {
    pVVar45 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar45 == (VehicleEnergyContainer *)0x0) goto code_?;
    bVar46 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
             VehicleEnergyContainer_get_OutOfEnergy(pVVar45,(MethodInfo *)0x0);
    if (bVar46 == 0) {
      pVVar45 = (this->fields)._.vehicleEnergyContainer;
      if (pVVar45 == (VehicleEnergyContainer *)0x0) goto code_?;
      WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
                (pVVar45,(MethodInfo *)0x0);
    }
  }
  pCVar20 = (Component *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if ((pCVar20 != (Component *)0x0) &&
     (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar20,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
    pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)(auStack_47 + 4),pTVar21,(MethodInfo *)0x0);
    point.y = (float)in_stack_1;
    point.x = (float)in_stack_2;
    point.z = in_stack_43;
    pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff3c,*pQVar31,point,(MethodInfo *)0x0);
    auStack_7._0_4_ = pVVar48->x;
    auStack_7._4_4_ = pVVar48->y;
    stack0xffffff58 = CONCAT44(VStack_4.x,pVVar48->z);
    pMVar49 = (this->fields)._._.groundState;
    QStack_3.w = (float)auStack_7._0_4_;
    fStack_50 = (float)auStack_7._4_4_;
    if (pMVar49 != (MVGroundState *)0x0) {
      bVar46 = MVGroundState::MVGroundState_get_Grounded(pMVar49,(MethodInfo *)0x0);
      if (bVar46 != 0) {
        pMVar49 = (this->fields)._._.groundState;
        if (pMVar49 == (MVGroundState *)0x0) goto code_?;
        hVelocity.y = (float)puStack_25;
        hVelocity.x = fStack_26;
        hVelocity.z = fVar14;
        pVVar48 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                            (&VStack_15,hVelocity,(pMVar49->fields).groundNormal,(MethodInfo *)0x0);
        uStack_28._0_4_ = pVVar48->x;
        uStack_28._4_4_ = pVVar48->y;
        fStack_51 = pVVar48->z;
      }
      puVar52 = (ulonglong *)func_?();
      VStack_4.y = *(float *)(puVar52 + 1);
      uStack_28 = (ulonglong)(uint)fVar14;
      fStack_51 = 0.0;
      auStack_47._0_4_ = 0.0;
      VStack_15._0_8_ = *puVar52 & 0xffffffff;
      auStack_7._8_4_ = VStack_15.x;
      VStack_4.x = VStack_15.y;
      VStack_15.z = VStack_4.y;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)(auStack_7 + 8),(MethodInfo *)0x0);
      pCVar20 = (Component *)
                System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                          ((DataTable *)this,(MethodInfo *)0x0);
      if ((pCVar20 != (Component *)0x0) &&
         (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar20,(MethodInfo *)0x0), pTVar21 != (Transform *)0x0)) {
        pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)(auStack_11 + 4),pTVar21,(MethodInfo *)0x0);
        VStack_4.y = pQVar31->y;
        VStack_4.z = pQVar31->z;
        stack0xffffff58 = CONCAT44(pQVar31->x,auStack_7._8_4_);
        VStack_15.x = pQVar31->w;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        rotation.y = VStack_4.y;
        rotation.x = VStack_4.x;
        rotation.z = VStack_4.z;
        rotation.w = VStack_15.x;
        pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            (&VStack_4,rotation,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        VStack_15.x = pVVar48->x;
        VStack_15.y = pVVar48->y;
        VStack_15.z = pVVar48->z;
        fVar32 = (float)((uint)((float)((uint)((float)puStack_25 * VStack_15.y +
                                               fStack_26 * VStack_15.x + fStack_53 * VStack_15.z) &
                                       _UNK_?) * _UNK_?) ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar33 = fVar32 * fStack_13 * (float)auStack_7._0_4_;
        VStack_4.z = VStack_4.z + (float)auStack_7._4_4_ +
                      fVar32 * _UNK_? * (float)auStack_7._0_4_;
        uStack_28 = CONCAT44(uStack_28._4_4_ + fVar14 +
                             fVar32 * (float)auStack_11._4_4_ * (float)auStack_7._0_4_,
                             (undefined4)uStack_28);
        pMVar54 = (this->fields)._.interactableLocal;
        if (pMVar54 != (MVInteractableBase *)0x0) {
          fVar29 = (float10)(*(code *)(pMVar54->klass->vtable).__unknown_8.method)();
          fVar32 = (this->fields).mass;
          VStack_4.z = ((float)fVar29 * VStack_4.y + (float)pTStack_5 + fVar14 + fVar33) / fVar32
          ;
          auStack_7._4_4_ = ((float)fVar29 * (float)auStack_7._8_4_ + uStack_28._4_4_) / fVar32;
          pVVar45 = (this->fields)._.vehicleEnergyContainer;
          if (pVVar45 != (VehicleEnergyContainer *)0x0) {
            if ((((pVVar45->fields)._UsingEnergy_k__BackingField != 0) &&
                (bVar46 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                          VehicleEnergyContainer_get_OutOfEnergy(pVVar45,(MethodInfo *)0x0),
                bVar46 != 0)) && (_UNK_? < (float)auStack_7._8_4_)) {
              __return_storage_ptr__->x = (float)uStack_16;
              __return_storage_ptr__->y = (float)uStack_17;
              __return_storage_ptr__->z = fVar9;
              return __return_storage_ptr__;
            }
            fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            fStack_24 = fStack_50 + fVar9 * VStack_15.x;
            velocity_00.y = QStack_3.w + fVar9 * (float)auStack_7._0_4_;
            velocity_00.x = fStack_55 + fVar9 * (float)auStack_7._8_4_;
            velocity_00.z = fStack_24;
            pVVar48 = HoverCraftMotor_HandleVerticalThrust
                                ((Vector3 *)auStack_47,this,velocity_00,(MethodInfo *)0x0);
            fVar14 = pVVar48->y;
            fVar9 = pVVar48->z;
            __return_storage_ptr__->x = pVVar48->x;
            __return_storage_ptr__->y = fVar14;
            __return_storage_ptr__->z = fVar9;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar56 = (code *)swi(3);
  pVVar48 = (Vector3 *)(*pcVar56)();
  return pVVar48;
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
    fVar3 = (this->fields).availableVerticalThrustTime;
    if (fVar3 < _UNK_?) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      fVar3 = fVar4 * _UNK_? + fVar3;
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
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      fVar3 = fVar3 - fVar4;
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
          pcVar5 = (code *)swi(3);
          pVVar6 = (Vector3 *)(*pcVar5)();
          return pVVar6;
        }
        bVar1 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                VehicleEnergyContainer_get_OutOfEnergy(this_00,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          (this->fields).isVerticalThrusting = 1;
          if ((this->fields).wasJumping == 0) {
            pVVar6 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
            uVar7 = pVVar6->x;
            uVar8 = pVVar6->y;
            fVar4 = pVVar6->z;
            fVar3 = (this->fields).jumpForce;
            (this->fields).wasJumping = 1;
            __return_storage_ptr__->x = velocity.x + (float)uVar7 * fVar3;
            __return_storage_ptr__->y = velocity.y + (float)uVar8 * fVar3;
            __return_storage_ptr__->z = velocity.z + fVar4 * fVar3;
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
  fStack_2 = 0.0;
  fStack_3 = velocity.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar4 = fStack_3 * fStack_3 + 0.0 + fStack_1 * fStack_1;
  dVar5 = (double)fVar4;
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if (_UNK_? <= (float)dVar5) {
    puVar6 = (undefined8 *)func_?(afStack_7,&fStack_3,0);
    fStack_8 = *(float *)(puVar6 + 1);
    uStack_9 = (undefined4)*puVar6;
    fStack_10 = (float)((ulonglong)*puVar6 >> 0x20);
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar11 = fVar11 * (_UNK_? / (fVar4 * _UNK_? + _UNK_?)) * _UNK_?;
    afStack_7[0] = afStack_7[0] * fVar11;
    fStack_10 = fStack_10 * fVar11;
    fStack_8 = fStack_8 * fVar11;
    if (fStack_3 < fStack_10 * fStack_10 + fStack_8 * fStack_8 + afStack_7[0] * afStack_7[0]) {
      fStack_10 = fStack_2;
      fStack_8 = fStack_1;
      afStack_7[0] = velocity.z;
    }
    __return_storage_ptr__->x = velocity.x - fStack_10;
    __return_storage_ptr__->y = velocity.y - fStack_8;
    __return_storage_ptr__->z = velocity.z - afStack_7[0];
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
      fVar2 = (float)((uint)((float)((uint)(fVar6 * (float)uVar10 + fVar7 * (float)uVar9 +
                                           velocityNormal.z * pVVar8->z) & _UNK_?) *
                            hullRotationFactor) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      __return_storage_ptr__->x = velocityNormal.x * fVar2 * velocitySquareMagnitude;
      __return_storage_ptr__->y = fVar2 * 0.0 * velocitySquareMagnitude;
      __return_storage_ptr__->z = velocityNormal.z * fVar2 * velocitySquareMagnitude;
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
  this_00 = (Delegate *)func_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor
            ((BounceState *)this_00,(MVInteractable *)interactableLocalParam,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MVControllerColliderHit___Class *)&(this->fields).bounceState;
  *(Delegate **)pAVar1 = this_00;
  func_?(pAVar1,this_00);
  if (characterController == (SmoothCharacterController *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (characterController->fields).controller;
    if (pMVar2 == (MvCharacterController *)0x0) goto code_?;
    a = (pMVar2->fields).OnControllerColliderHit;
    object = *(BounceState **)pAVar1;
    this_01 = (Action_1_MVControllerColliderHit_ *)func_?();
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (this_01,(Object *)object,
               MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
    this_00 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__System__Action<MVControllerColliderHit>;
    if (this_00 == (Delegate *)0x0) {
      this_01[1].fields._._.interp_method = (void *)0x0;
      pAStack3 = (Action_1_MVControllerColliderHit___Class *)0x0;
code_?:
      pDStack4 = (Delegate *)&this_01[1].fields._._.interp_method;
      func_?();
      _UNK_? = 0x3fa66666;
      return;
    }
    pAStack3 = TypeInfo__System__Action<MVControllerColliderHit>;
    pDStack4 = this_00;
    pvVar5 = (void *)func_?();
    if (pvVar5 == (void *)0x0) goto code_?;
    pAVar1 = (Action_1_MVControllerColliderHit___Class *)&this_01[1].fields._._.interp_method;
    *(void **)pAVar1 = pvVar5;
    characterController =
         (SmoothCharacterController *)TypeInfo__System__Action<MVControllerColliderHit>;
    pAStack3 = TypeInfo__System__Action<MVControllerColliderHit>;
    pDStack4 = this_00;
    pAStack3 = (Action_1_MVControllerColliderHit___Class *)func_?();
    if (pAStack3 != (Action_1_MVControllerColliderHit___Class *)0x0) goto code_?;
  }
  pDStack4 = this_00;
  pAStack3 = (Action_1_MVControllerColliderHit___Class *)characterController;
  func_?();
code_?:
  pDStack4 = this_00;
  pAStack3 = pAVar1;
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
  VStack_1.z = velocity.z;
  fVar2 = 0.0;
  fVar3 = 0.0;
  VStack_1.y = 0.0;
  VStack_1.x = velocity.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (VStack_1.x * VStack_1.x + fVar2 + VStack_1.z * VStack_1.z < 0.0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&VStack_1,(MethodInfo *)0x0);
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftMotor);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  v1.y = fVar2;
  v1.x = VStack_1.z;
  v1.z = fVar3;
  v2.z = targetDir.z;
  v2.x = targetDir.x;
  v2.y = targetDir.y;
  MathFunctions::MathFunctions_SignedAngle_1
            (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  fVar2 = fVar4 * _UNK_?;
  if (in_stack_5 < fVar4 * _UNK_?) {
    fVar2 = in_stack_5;
  }
  fVar4 = _UNK_?;
  if (in_stack_6 < (float)__return_storage_ptr__) {
    fVar4 = _UNK_?;
  }
  velocity.x = 0.0;
  VStack_1.z = (float)&UNK_?;
  euler.y = fVar4 * fVar2 * _UNK_?;
  euler.x = __return_storage_ptr__;
  euler.z = 0.0;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&velocity.z,euler,(MethodInfo *)0x0);
  point.y = velocity.y;
  point.x = velocity.x;
  point.z = fVar3;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&targetDir,*pQVar7,point,(MethodInfo *)0x0);
  uVar9 = pVVar8->x;
  fVar2 = pVVar8->z;
  (euler.x)->x = (float)uVar9 * in_stack_10;
  (euler.x)->y = velocity.y;
  __return_storage_ptr__->z = fVar2 * in_stack_10;
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
  fVar2 = fVar2 * _UNK_?;
  puStack_3 = (undefined *)((uint)fVar2 & _UNK_?);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  puVar5 = (undefined *)(fVar4 * speedInDegrees);
  if ((float)puStack_3 < fVar4 * speedInDegrees) {
    puVar5 = puStack_3;
  }
  fVar4 = _UNK_?;
  if (fVar2 < 0.0) {
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
  fVar1 = pVVar10->y;
  fVar2 = pVVar10->z;
  pVVar9->x = pVVar10->x;
  pVVar9->y = fVar1;
  pVVar9->z = fVar2;
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
  this_03 = this;
  puVar1 = (undefined *)0x0;
  puVar2 = (undefined *)0x0;
  fVar3 = (this->fields).velocityPrevFrame.x;
  fVar4 = (this->fields).velocityPrevFrame.y;
  fVar5 = (this->fields).velocityPrevFrame.z;
  this_01 = (this->fields)._.movableMotorState;
  uVar6 = (this->fields).velocityPrevFrame.x;
  uVar7 = (this->fields).velocityPrevFrame.y;
  controller = (MvCharacterController *)
               System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                         ((DataTable *)this,(MethodInfo *)0x0);
  this_04 = (TypedUxmlAttributeDescription_1_System_Single_ *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if (this_04 != (TypedUxmlAttributeDescription_1_System_Single_ *)0x0) {
    fVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
             TypedUxmlAttributeDescription`1[System::Single]::
             TypedUxmlAttributeDescription_1_System_Single__get_defaultValue
                       (this_04,(MethodInfo *)0x0);
    if (this_01 != (MVMovableMotorState *)0x0) {
      VVar9.y = (float)uVar7;
      VVar9.x = (float)uVar6;
      VVar9.z = fVar5;
      MVMovableMotorState::MVMovableMotorState_Move
                (this_01,VVar9,controller,fVar8,(this->fields)._._.groundState,
                 (Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
      VStack_10.z = (float)&UNK_?;
      velocity.y = fVar4;
      velocity.x = fVar3;
      velocity.z = fVar5;
      pVVar11 = HoverCraftMotor_GetVehicleInputVelocityClassicCam
                          ((Vector3 *)&stack0xffffffd8,this,velocity,(MethodInfo *)0x0);
      puVar12 = (undefined *)pVVar11->x;
      puVar13 = (undefined *)pVVar11->y;
      puVar14 = (undefined *)pVVar11->z;
      this_00 = (MVGroundState *)
                SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                          ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
      if (_UNK_? < (float)this_00) {
        puVar1 = puVar12;
        puVar2 = puVar13;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
        velocity_02.y = (float)puVar2;
        velocity_02.x = (float)puVar1;
        velocity_02.z = (float)puVar14;
        puVar15 = puVar14;
        pVVar11 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                            ((Vector3 *)&stack0xffffffac,velocity_02,(float)this_00,fVar3,
                             (MethodInfo *)0x0);
        uVar16._0_4_ = pVVar11->x;
        uVar16._4_4_ = pVVar11->y;
        puVar14 = (undefined *)pVVar11->z;
      }
      else {
        this_00 = (this->fields)._._.groundState;
        if (this_00 == (MVGroundState *)0x0) goto code_?;
        fVar3 = 0.0;
        puVar15 = &UNK_?;
        bVar17 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
        if (bVar17 == 0) {
          if ((this->fields).isVerticalThrusting != 0) {
            (this->fields)._._.density = 0.2;
          }
          pVVar11 = &(this->fields).velocityPrevFrame;
          puVar15 = (undefined *)pVVar11->x;
          this_00 = (MVGroundState *)pVVar11->y;
          fVar3 = (this->fields).velocityPrevFrame.z;
          velocity_01.y = (float)puVar13;
          velocity_01.x = (float)puVar12;
          velocity_01.z = (float)puVar14;
          puVar2 = puVar14;
          pVVar11 = MVRigidBody::MVRigidBody_ApplyGravity
                              ((Vector3 *)&stack0xffffffb8,(MVRigidBody *)this,velocity_01,*pVVar11,
                               (this->fields)._.interactableLocal,(MethodInfo *)0x0);
          uVar16._0_4_ = pVVar11->x;
          uVar16._4_4_ = pVVar11->y;
          puVar14 = (undefined *)pVVar11->z;
          (this->fields)._._.density = 1.3;
          puVar1 = puVar13;
        }
        else {
          uVar16 = CONCAT44(puVar13,puVar12);
        }
      }
      this_02 = (this->fields).bounceState;
      if (this_02 != (BounceState *)0x0) {
        fVar5 = (float)((ulonglong)uVar16 >> 0x20);
        velocity_03.z = (float)puVar14;
        velocity_03.x = (float)(int)uVar16;
        velocity_03.y = (float)(int)((ulonglong)uVar16 >> 0x20);
        pVVar11 = BounceState::BounceState_ApplyBounceVelocity
                            ((Vector3 *)&stack0xffffffa0,this_02,velocity_03,(MethodInfo *)0x0);
        uVar18 = pVVar11->x;
        uVar19 = pVVar11->y;
        fVar4 = pVVar11->z;
        pHVar20 = &this->fields;
        this = (HoverCraftMotor *)fVar4;
        fVar21 = (float)uVar19;
        VVar9.x = (float)uVar18;
        VVar9 = (Vector3)CONCAT84(uVar22,VVar9.x);
        pVVar11 = MVRigidBody::MVRigidBody_GetImpulse
                            (&VStack_10,(MVRigidBody *)this_03,VVar9,(pHVar20->_).interactableLocal
                             ,(MethodInfo *)0x0);
        pVVar11 = MVRigidBody::MVRigidBody_VelocityDamping
                            ((Vector3 *)&stack0xffffff88,*pVVar11,1.0,
                             (this_03->fields)._.interactableLocal,(MethodInfo *)0x0);
        this._3_1_ = (char)((uint)fVar4 >> 0x18);
        fVar4 = pVVar11->z;
        puVar12 = puVar15;
        if (this._3_1_ == '\0') {
          uVar23 = pVVar11->x;
          uVar24 = pVVar11->y;
          uVar25 = uVar23;
          uVar26 = uVar24;
        }
        else {
          uVar25 = pVVar11->x;
          uVar26 = pVVar11->y;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            puVar12 = puVar15;
          }
          pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
          puVar1 = (undefined *)(pVVar27->zeroVector).x;
          puVar2 = (undefined *)(pVVar27->zeroVector).y;
          puVar15 = (undefined *)(pVVar27->zeroVector).z;
        }
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        velocity_00.y = (float)uVar26;
        velocity_00.x = (float)uVar25;
        velocity_00.z = fVar4;
        baseVelocity.y = (float)puVar2;
        baseVelocity.x = (float)puVar1;
        baseVelocity.z = (float)puVar15;
        SimpleVehicleMotorBase::SimpleVehicleMotorBase_Move
                  ((SimpleVehicleMotorBase *)this_03,velocity_00,baseVelocity,fVar8,
                   (MethodInfo *)0x0);
        fVar4 = 0.0;
        pHVar28 = this_03;
        iVar29 = System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                           ((DataTable *)this_03,(MethodInfo *)0x0);
        if (iVar29 != 0) {
          fVar8 = *(float *)(iVar29 + 0x5c);
          fVar30 = (float)*(undefined8 *)(iVar29 + 0x54);
          fVar31 = (float)((ulonglong)*(undefined8 *)(iVar29 + 0x54) >> 0x20);
          fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          (this_03->fields).velocityPrevFrame.x = fVar30 / fVar32;
          (this_03->fields).velocityPrevFrame.y = fVar31 / fVar32;
          (this_03->fields).velocityPrevFrame.z = fVar8 / fVar32;
          if (this._3_1_ == '\0') {
            (this_03->fields).velocityPrevFrame.x = fVar30 / fVar32 - (float)pHVar28;
            (this_03->fields).velocityPrevFrame.y = fVar31 / fVar32 - fVar4;
            (this_03->fields).velocityPrevFrame.z = fVar8 / fVar32 - (float)puVar12;
          }
          prevVelocity.y = fVar3;
          prevVelocity.x = (float)this_00;
          prevVelocity.z = fVar5;
          SimpleVehicleMotorBase::SimpleVehicleMotorBase_DealImpactDamage
                    ((SimpleVehicleMotorBase *)this_03,(this_03->fields).velocityPrevFrame,
                     prevVelocity,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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
  fVar2 = fVar1 * _UNK_?;
  __return_storage_ptr__->x = velocityNormal.x * fVar1 * velocitySquareMagnitude;
  __return_storage_ptr__->y = fVar2 * velocitySquareMagnitude;
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
  ppIVar1 = &(this->fields)._.impactState;
  *ppIVar1 = this_00;
  func_?(ppIVar1,this_00);
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

