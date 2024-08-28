
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
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HoverCraftMotor->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VStack_1.y = velocity.x;
  VStack_1.z = velocity.y;
  fStack_2 = velocity.z;
  pTStack_3 = (Transform__Class *)velocity.z;
  auStack_4._4_4_ = 0;
  auStack_4._0_4_ = velocity.x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIStack_5 = (IVehicleCamera *)
               ((float)auStack_4._0_4_ * (float)auStack_4._0_4_ + _UNK_? +
               (float)pTStack_3 * (float)pTStack_3);
  dVar6 = (double)(float)pIStack_5;
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  auStack_7._4_4_ = (undefined4)dVar6;
  if ((float)auStack_7._4_4_ < _UNK_?) {
    VStack_1.y = 0.0;
    fStack_8 = 0.0;
    fStack_2 = 0.0;
    pTVar9 = (Transform__Class *)0x0;
    pTStack_10 = (Transform__Class *)VStack_1.z;
  }
  else {
    puVar11 = (undefined8 *)func_?();
    auStack_12 = (undefined1  [8])*puVar11;
    fStack_13 = *(float *)(puVar11 + 1);
    in_stack_14 = &UNK_?;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar15 = fVar15 * (_UNK_? / ((float)auStack_7._4_4_ * _UNK_? + _UNK_?)) *
                      _UNK_?;
    fStack_2 = fVar15 * fStack_16;
    VStack_1.y = fVar15 * (float)auStack_12._4_4_;
    VStack_1.z = fVar15 * fStack_13;
    if ((float)pIStack_5 <
        VStack_1.z * VStack_1.z + VStack_1.y * VStack_1.y + fStack_2 * fStack_2) {
      VStack_1.y = auStack_4._0_4_;
      VStack_1.z = auStack_4._4_4_;
      fStack_2 = velocity.z;
    }
    pTVar9 = (Transform__Class *)(velocity.z - fStack_2);
    fStack_8 = velocity.x - VStack_1.y;
    pTStack_10 = (Transform__Class *)(velocity.y - VStack_1.z);
    VStack_17.z = (float)pTVar9;
  }
  auStack_4._4_4_ = pTStack_10;
  auStack_4._0_4_ = fStack_8;
  uStack_18 = 0;
  uStack_19 = 0;
  auStack_7._4_4_ = pTVar9;
  pTStack_3 = pTVar9;
  if ((this->fields)._.HandleInput != 0) {
    unaff_EDI = (VehicleEnergyContainer *)
                System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                          ((DataTable *)this,(MethodInfo *)0x0);
    if (unaff_EDI == (VehicleEnergyContainer *)0x0) goto code_?;
    unaff_ESI = 0.0;
    VStack_1.z = (float)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)unaff_EDI,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_20._0_4_ = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    uVar21 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
    uVar22 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
    fStack_23 = (float)uVar21;
    pTStack_24 = (Transform__Class *)uVar22;
    auStack_20._4_4_ =
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime((MethodInfo *)0x0)
    ;
    fStack_23 = (this->fields).angularSpeed;
    auStack_7._0_4_ = (this->fields)._.DirectInputMoveMap.x;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIStack_5 = (IVehicleCamera *)
                 MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                           (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if ((Transform *)auStack_7._0_4_ == (Transform *)0x0) goto code_?;
    in_stack_25 = &UNK_?;
    axis.y = fStack_26;
    axis.x = (float)puStack_27;
    axis.z = (float)pMStack_28;
    in_stack_29 = (Transform *)auStack_7._0_4_;
    in_stack_14 = puStack_27;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              ((Transform *)auStack_7._0_4_,axis,
               fStack_30 * _UNK_? * fStack_31 * VStack_1.x *
               (float)((uint)pIStack_5 & _UNK_?),Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    if ((this->fields)._._VehicleCamera_k__BackingField == (IVehicleCamera *)0x0)
    goto code_?;
    fVar32 = (float10)func_?();
    auVar33._4_8_ = 0;
    auVar33._0_4_ = (float)fVar32 * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
              ((Quaternion *)&stack0xffffff1c,(Vector3)(auVar33 << 0x20),(MethodInfo *)0x0);
    pCVar34 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar34 == (Component *)0x0) ||
       (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar34,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0))
    goto code_?;
    pQVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)(auStack_20 + 4),pTVar35,(MethodInfo *)0x0);
    fVar15 = pQVar36->x;
    fVar37 = pQVar36->y;
    fVar38 = pQVar36->z;
    fVar39 = pQVar36->w;
    fVar40 = ((float)in_stack_25 * fVar15 + in_stack_41 * fVar39 +
             in_stack_42 * fVar37) - in_stack_43 * fVar38;
    fVar44 = ((float)in_stack_25 * fVar37 + in_stack_43 * fVar39 +
             in_stack_41 * fVar38) - in_stack_42 * fVar15;
    fVar45 = ((float)in_stack_25 * fVar38 + in_stack_42 * fVar39 +
             in_stack_43 * fVar15) - in_stack_41 * fVar37;
    fVar15 = (((float)in_stack_25 * fVar39 - in_stack_41 * fVar15) -
             in_stack_43 * fVar37) - in_stack_42 * fVar38;
    auStack_20._0_4_ = fVar39;
    auStack_20._4_4_ = fVar39;
    pMStack_28 = (MethodInfo *)fVar39;
    fStack_30 = fVar39;
    fVar46 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a.y = fVar38;
    a.x = fVar37;
    a.z = fVar39;
    a.w = fVar40;
    b.y = fVar45;
    b.x = fVar44;
    b.z = fVar15;
    b.w = (float)in_stack_29;
    pQVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                        ((Quaternion *)auStack_7,a,b,fVar46 * _UNK_?,(MethodInfo *)0x0);
    unaff_ESI = pQVar36->x;
    auStack_20._0_4_ = pQVar36->z;
    auStack_20._4_4_ = pQVar36->w;
    pCVar34 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar34 == (Component *)0x0) ||
       (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar34,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0))
    goto code_?;
    pQVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)(auStack_4 + 4),pTVar35,(MethodInfo *)0x0);
    fVar15 = (float)((uint)((float)auStack_7._4_4_ * pQVar36->y +
                            (float)auStack_7._0_4_ * pQVar36->x + VStack_1.x * pQVar36->z +
                           VStack_1.y * pQVar36->w) & _UNK_?);
    if (_UNK_? <= fVar15) {
      fVar15 = _UNK_?;
    }
    if (fVar15 <= _UNK_?) {
      func_?();
    }
    pCVar34 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if ((pCVar34 == (Component *)0x0) ||
       (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar34,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0))
    goto code_?;
    value.y = (float)auStack_7._4_4_;
    value.x = (float)auStack_7._0_4_;
    value.z = VStack_1.x;
    value.w = VStack_1.y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar35,value,(MethodInfo *)0x0);
    pIStack_5 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIStack_5 == (IVehicleCamera *)0x0) goto code_?;
    fVar32 = (float10)func_?();
    auStack_7._0_4_ = (undefined4)fVar32;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar15 = fVar15 * _UNK_?;
    fVar37 = (float)pIStack_5 - (float)auStack_7._4_4_;
    if (fVar15 < 0.0) {
      fVar37 = fVar37 * 0.0;
    }
    else if (fVar15 <= _UNK_?) {
      fVar37 = fVar37 * fVar15;
    }
    pIStack_5 = (IVehicleCamera *)(fVar37 + (float)auStack_7._4_4_);
    uVar47 = 0;
    fStack_30 = 0.0;
    auStack_7._4_4_ = *(Transform__Class **)auStack_7._0_4_;
    uVar48._0_1_ = (((Transform__Class *)auStack_7._4_4_)->_1).rank;
    uVar48._1_1_ = (((Transform__Class *)auStack_7._4_4_)->_1).minimumAlignment;
    VStack_1.y = (float)(uint)uVar48;
    if (uVar48 != 0) {
      do {
        if (((Transform__Class *)auStack_7._4_4_)->interfaceOffsets[uVar47].interfaceType ==
            (Il2CppClass *)TypeInfo__IVehicleCamera) {
          ppMVar49 = &(&(((Transform__Class *)auStack_7._4_4_)->vtable).Finalize)
                      [((Transform__Class *)auStack_7._4_4_)->interfaceOffsets[uVar47].offset].
                      method;
          goto code_?;
        }
        uVar47 = uVar47 + 1;
      } while (uVar47 < uVar48);
    }
    ppMVar49 = (MethodInfo **)func_?();
code_?:
    unaff_EDI = (VehicleEnergyContainer *)ppMVar49[1];
    (*(code *)*ppMVar49)();
    pTVar9 = (Transform__Class *)auStack_7._4_4_;
  }
  uVar50 = (this->fields)._.DirectInputMoveMap.x;
  uVar51 = (this->fields)._.DirectInputMoveMap.y;
  pMStack_28 = (MethodInfo *)(this->fields)._.DirectInputMoveMap.z;
  VStack_1.y = (float)uVar50;
  VStack_1.z = (float)uVar51;
  fStack_2 = (float)pMStack_28;
  if ((float)pMStack_28 != 0.0) {
    pVVar52 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar52 == (VehicleEnergyContainer *)0x0) goto code_?;
    bVar53 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
             VehicleEnergyContainer_get_OutOfEnergy(pVVar52,(MethodInfo *)0x0);
    if (bVar53 == 0) {
      unaff_EDI = (this->fields)._.vehicleEnergyContainer;
      if (unaff_EDI == (VehicleEnergyContainer *)0x0) goto code_?;
      unaff_ESI = 0.0;
      WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
                (unaff_EDI,(MethodInfo *)0x0);
    }
  }
  pCVar34 = (Component *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if ((pCVar34 != (Component *)0x0) &&
     (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar34,(MethodInfo *)0x0), pTVar35 != (Transform *)0x0)) {
    pQVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)auStack_4,pTVar35,(MethodInfo *)0x0);
    point.y = unaff_ESI;
    point.x = (float)unaff_EDI;
    point.z = (float)in_stack_14;
    pVVar54 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)auStack_20,*pQVar36,point,(MethodInfo *)0x0);
    uVar55 = pVVar54->x;
    uVar56 = pVVar54->y;
    auStack_20._0_4_ = pVVar54->z;
    pMVar57 = (this->fields)._._.groundState;
    auStack_7._4_4_ = uVar55;
    VStack_1.x = (float)uVar56;
    VStack_1.y = (float)auStack_20._0_4_;
    pTStack_24 = (Transform__Class *)uVar55;
    fStack_31 = (float)uVar56;
    if (pMVar57 != (MVGroundState *)0x0) {
      bVar53 = MVGroundState::MVGroundState_get_Grounded(pMVar57,(MethodInfo *)0x0);
      if (bVar53 != 0) {
        pMVar57 = (this->fields)._._.groundState;
        if (pMVar57 == (MVGroundState *)0x0) goto code_?;
        hVelocity.y = fStack_26;
        hVelocity.x = (float)puStack_27;
        hVelocity.z = (float)pMStack_28;
        pVVar54 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                            (&VStack_17,hVelocity,(pMVar57->fields).groundNormal,(MethodInfo *)0x0);
        VStack_58.x = pVVar54->x;
        VStack_58.y = pVVar54->y;
        VStack_58.z = pVVar54->z;
      }
      puVar59 = (ulonglong *)func_?();
      VStack_1.z = *(float *)(puVar59 + 1);
      fStack_60 = (float)auStack_20._4_4_;
      VStack_58.x = 0.0;
      VStack_58.y = 0.0;
      VStack_58.z = 0.0;
      fVar15 = (float)auStack_20._4_4_ * (float)auStack_20._4_4_ + 0.0 + fStack_30 * fStack_30;
      fVar37 = (float)(*puVar59 >> 0x20);
      if ((0.0 < fVar37) && ((this->fields).isVerticalThrusting == 0)) {
        fVar37 = fVar37 * (this->fields).dragCoefficentUp;
      }
      if ((fVar37 <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
        fVar37 = fVar37 * (this->fields).dragCoefficentDown;
      }
      fVar37 = fVar37 * ((float)pMStack_28 * (float)pMStack_28 + 0.0 + 0.0);
      VStack_17._0_8_ = *puVar59 & 0xffffffff;
      VStack_1.x = (float)*puVar59;
      VStack_1.y = 0.0;
      VStack_17.z = VStack_1.z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_1,(MethodInfo *)0x0);
      pCVar34 = (Component *)
                System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                          ((DataTable *)this,(MethodInfo *)0x0);
      if ((pCVar34 != (Component *)0x0) &&
         (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar34,(MethodInfo *)0x0), pTVar35 != (Transform *)0x0)) {
        pQVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)(auStack_12 + 4),pTVar35,(MethodInfo *)0x0);
        auStack_7._4_4_ = pQVar36->x;
        VStack_1.x = pQVar36->y;
        VStack_1.y = pQVar36->z;
        VStack_1.z = pQVar36->w;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3,fVar15,fVar37);
          cRam_? = '\x01';
        }
        rotation.y = VStack_1.x;
        rotation.x = (float)auStack_7._4_4_;
        rotation.z = VStack_1.y;
        rotation.w = VStack_1.z;
        pVVar54 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)(auStack_7 + 4),rotation,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        VStack_17.x = pVVar54->x;
        VStack_17.y = pVVar54->y;
        VStack_17.z = pVVar54->z;
        fVar15 = (float)((uint)((float)((uint)(fStack_26 * (float)VStack_17.y +
                                               (float)puStack_27 * (float)VStack_17.x +
                                              fStack_61 * VStack_17.z) & _UNK_?) *
                               _UNK_?) ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        pIStack_5 = (IVehicleCamera *)
                     ((float)pIStack_5 + (float)pMStack_28 +
                     (float)auStack_12._4_4_ * fVar15 * (float)auStack_7._4_4_);
        auStack_7._0_4_ =
             (float)auStack_7._0_4_ + VStack_1.x +
             fVar15 * _UNK_? * (float)auStack_7._4_4_;
        fStack_30 = fStack_30 + (float)pMStack_28 + fStack_16 * fVar15 * (float)auStack_7._4_4_;
        pMVar62 = (this->fields)._.interactableLocal;
        if (pMVar62 != (MVInteractableBase *)0x0) {
          pMStack_28 = (pMVar62->klass->vtable).__unknown_6.method;
          fVar32 = (float10)(*(code *)pMStack_28)();
          pMStack_28 = (MethodInfo *)(float)fVar32;
          fVar15 = (this->fields).mass;
          VStack_1.x = ((float)pMStack_28 * VStack_1.y + (float)pIStack_5) / fVar15;
          fStack_31 = (VStack_1.z * (float)pMStack_28 + (float)auStack_7._0_4_) / fVar15;
          pIStack_5 = (IVehicleCamera *)(((float)pMStack_28 * fStack_2 + fStack_30) / fVar15);
          pVVar52 = (this->fields)._.vehicleEnergyContainer;
          if (pVVar52 != (VehicleEnergyContainer *)0x0) {
            if ((((pVVar52->fields)._UsingEnergy_k__BackingField != 0) &&
                (bVar53 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                          VehicleEnergyContainer_get_OutOfEnergy(pVVar52,(MethodInfo *)0x0),
                bVar53 != 0)) && (_UNK_? < VStack_1.y)) {
              __return_storage_ptr__->x = (float)uStack_18;
              __return_storage_ptr__->y = (float)uStack_19;
              __return_storage_ptr__->z = (float)pTVar9;
              return __return_storage_ptr__;
            }
            fStack_30 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                  ((MethodInfo *)0x0);
            fStack_63 = fStack_23 + fStack_30 * (float)auStack_7._0_4_;
            velocity_00.y = (float)pTStack_3 + fStack_30 * (float)puStack_27;
            velocity_00.x = fStack_64 + fStack_30 * VStack_1.y;
            velocity_00.z = fStack_63;
            pVVar54 = HoverCraftMotor_HandleVerticalThrust
                                (&VStack_58,this,velocity_00,(MethodInfo *)0x0);
            fVar37 = pVVar54->y;
            fVar15 = pVVar54->z;
            __return_storage_ptr__->x = pVVar54->x;
            __return_storage_ptr__->y = fVar37;
            __return_storage_ptr__->z = fVar15;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar65 = (code *)swi(3);
  pVVar54 = (Vector3 *)(*pcVar65)();
  return pVVar54;
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
            puVar7 = (undefined8 *)func_?();
            fVar4 = *(float *)(puVar7 + 1);
            fVar3 = (this->fields).jumpForce;
            fStack_8 = (float)*puVar7;
            fStack_9 = (float)((ulonglong)*puVar7 >> 0x20);
            (this->fields).wasJumping = 1;
            __return_storage_ptr__->x = velocity.x + fStack_8 * fVar3;
            __return_storage_ptr__->y = velocity.y + fStack_9 * fVar3;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

