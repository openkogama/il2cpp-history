
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
  fVar1 = velocity.z;
  QStack_2.y = velocity.x;
  QStack_2.z = velocity.y;
  fStack_3 = velocity.z;
  uStack_4 = (ulonglong)(uint)velocity.x;
  fVar5 = (float10)func_?(&uStack_4,0);
  fStack_6 = QStack_2.z;
  pTStack_7 = (Transform *)(float)fVar5;
  if ((float)pTStack_7 < _UNK_?) {
    QStack_2._4_8_ = (ulonglong)(uint)QStack_2.z << 0x20;
    uVar8 = QStack_2._4_8_;
    QStack_2.y = 0.0;
    QStack_2.w = 0.0;
    fVar9 = 0.0;
    velocity.x = QStack_2.y;
    QStack_2._4_8_ = uVar8;
  }
  else {
    puVar10 = (ulonglong *)func_?(&QStack_11,&uStack_4,0);
    QStack_2._4_8_ = *puVar10;
    QStack_2.w = *(float *)(puVar10 + 1);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    pIStack_12 = (IVehicleCamera *)
                 (fVar9 * (_UNK_? / ((float)pTStack_7 * _UNK_? + _UNK_?)) *
                           _UNK_?);
    fVar13 = (float)pIStack_12 * QStack_2.y;
    fStack_6 = (float)pIStack_12 * QStack_2.z;
    fVar9 = (float)pIStack_12 * QStack_2.w;
    fVar14 = (float)uStack_4;
    if ((float)uStack_4 * (float)uStack_4 + _UNK_? + fStack_3 * fStack_3 <
        fVar13 * fVar13 + fStack_6 * fStack_6 + fVar9 * fVar9) {
      QStack_2.y = (float)uStack_4;
      QStack_2.z = uStack_4._4_4_;
      uVar8 = QStack_2._4_8_;
      QStack_2.z = (float)(uStack_4 >> 0x20);
      QStack_2.w = fVar1;
      fVar9 = fVar1;
      fVar13 = fVar14;
      fStack_6 = QStack_2.z;
      QStack_2._4_8_ = uVar8;
    }
    fVar9 = velocity.z - fVar9;
    fStack_6 = velocity.y - fStack_6;
    QStack_11.z = fVar9;
    velocity.x = velocity.x - fVar13;
  }
  uStack_4 = CONCAT44(fStack_6,velocity.x);
  uStack_15 = 0;
  uStack_16 = 0;
  velocity.y = fStack_6;
  velocity.z = fVar9;
  fStack_17 = velocity.x;
  fStack_3 = fVar9;
  if ((this->fields)._.HandleInput != 0) {
    pCVar18 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar18 == (Component *)0x0) goto code_?;
    pTStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (pCVar18,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_20._0_4_ = (pVVar19->upVector).x;
    uStack_20._4_4_ = (pVVar19->upVector).y;
    fStack_21 = (pVVar19->upVector).z;
    fStack_22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
    fStack_23 = (this->fields).angularSpeed;
    fStack_24 = (this->fields)._.DirectInputMoveMap.x;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pIStack_12 = (IVehicleCamera *)
                 MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                           (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTStack_7 == (Transform *)0x0) goto code_?;
    axis.z = fStack_21;
    axis.x = (float)(undefined4)uStack_20;
    axis.y = uStack_20._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTStack_7,axis,
               fStack_22 * _UNK_? * fStack_23 * fStack_24 *
               (float)((uint)pIStack_12 & _UNK_?),Space__Enum_World,(MethodInfo *)0x0);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    pIVar25 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar25 == (IVehicleCamera *)0x0) goto code_?;
    fVar5 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar25);
    fStack_21 = (float)fVar5;
    QStack_11._4_8_ = QStack_11._4_8_ & 0xffffffff;
    auVar26._4_8_ = 0;
    auVar26._0_4_ = fStack_21 * _UNK_?;
    pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_28,(Vector3)(auVar26 << 0x20),(MethodInfo *)0x0);
    QStack_28.x = pQVar27->x;
    QStack_28.y = pQVar27->y;
    QStack_28.z = pQVar27->z;
    QStack_28.w = pQVar27->w;
    pCVar18 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar18 == (Component *)0x0) goto code_?;
    pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar18,(MethodInfo *)0x0);
    if (pTVar29 == (Transform *)0x0) goto code_?;
    pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_11,pTVar29,(MethodInfo *)0x0);
    QStack_11.x = pQVar27->x;
    QStack_11.y = pQVar27->y;
    QStack_11.z = pQVar27->z;
    QStack_2.x = pQVar27->w;
    QStack_2.z = QStack_2.x;
    QStack_2.y = QStack_2.x;
    fStack_24 = (QStack_28.w * QStack_11.x + QStack_28.x * QStack_2.x + QStack_28.z * QStack_11.y)
                - QStack_28.y * QStack_11.z;
    fVar13 = QStack_28.w * QStack_11.y;
    fVar1 = QStack_28.x * QStack_11.z;
    fVar14 = QStack_28.z * QStack_11.x;
    fVar30 = QStack_28.z * QStack_11.z;
    QStack_28.z = (QStack_28.w * QStack_11.z + QStack_28.z * QStack_2.x + QStack_28.y * QStack_11.x
                  ) - QStack_28.x * QStack_11.y;
    fStack_21 = QStack_28.w * QStack_2.x;
    QStack_28.w = ((fStack_21 - QStack_28.x * QStack_11.x) - QStack_28.y * QStack_11.y) - fVar30;
    QStack_2.w = QStack_2.x;
    QStack_28.x = fStack_24;
    QStack_28.y = (fVar13 + QStack_28.y * QStack_2.x + fVar1) - fVar14;
    QStack_11.w = QStack_2.x;
    fStack_21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
    a.y = QStack_11.y;
    a.x = QStack_11.x;
    a.z = QStack_11.z;
    a.w = QStack_11.w;
    b.y = QStack_28.y;
    b.x = QStack_28.x;
    b.z = QStack_28.z;
    b.w = QStack_28.w;
    pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                        (&QStack_28,a,b,fStack_21 * _UNK_?,(MethodInfo *)0x0);
    QStack_11.x = pQVar27->x;
    QStack_11.y = pQVar27->y;
    QStack_11.z = pQVar27->z;
    QStack_11.w = pQVar27->w;
    QStack_28.x = pQVar27->x;
    QStack_28.y = pQVar27->y;
    QStack_28.z = pQVar27->z;
    QStack_28.w = pQVar27->w;
    pCVar18 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar18 == (Component *)0x0) goto code_?;
    pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar18,(MethodInfo *)0x0);
    if (pTVar29 == (Transform *)0x0) goto code_?;
    pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_2,pTVar29,(MethodInfo *)0x0);
    fVar1 = (float)((uint)(QStack_28.y * pQVar27->y + QStack_28.x * pQVar27->x +
                            QStack_28.z * pQVar27->z + QStack_28.w * pQVar27->w) & _UNK_?);
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_?;
    }
    if (fVar1 <= _UNK_?) {
      auVar31._0_8_ = (double)fVar1;
      auVar31._8_8_ = 0;
      func_?();
      pTStack_7 = (Transform *)(((float)auVar31._0_8_ + (float)auVar31._0_8_) * _UNK_?);
    }
    else {
      pTStack_7 = (Transform *)0x0;
    }
    pCVar18 = (Component *)
              System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                        ((DataTable *)this,(MethodInfo *)0x0);
    if (pCVar18 == (Component *)0x0) goto code_?;
    pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar18,(MethodInfo *)0x0);
    if (pTVar29 == (Transform *)0x0) goto code_?;
    value.y = QStack_11.y;
    value.x = QStack_11.x;
    value.z = QStack_11.z;
    value.w = QStack_11.w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar29,value,(MethodInfo *)0x0);
    pIStack_12 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIStack_12 == (IVehicleCamera *)0x0) goto code_?;
    fVar5 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIStack_12);
    fStack_24 = (float)fVar5;
    fStack_21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
    fStack_21 = fStack_21 * _UNK_?;
    if (fStack_21 < 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = fStack_21;
      if (_UNK_? < fStack_21) {
        fVar1 = _UNK_?;
      }
    }
    func_?(1,TypeInfo__IVehicleCamera,pIStack_12,
                    ((float)pTStack_7 - fStack_24) * fVar1 + fStack_24);
  }
  uStack_32._0_4_ = (this->fields)._.DirectInputMoveMap.x;
  uStack_32._4_4_ = (this->fields)._.DirectInputMoveMap.y;
  fStack_33 = (this->fields)._.DirectInputMoveMap.z;
  fStack_21 = fStack_33;
  if (fStack_33 != 0.0) {
    pVVar34 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar34 == (VehicleEnergyContainer *)0x0) goto code_?;
    bVar35 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
             VehicleEnergyContainer_get_OutOfEnergy(pVVar34,(MethodInfo *)0x0);
    if (bVar35 == 0) {
      pVVar34 = (this->fields)._.vehicleEnergyContainer;
      if (pVVar34 == (VehicleEnergyContainer *)0x0) goto code_?;
      WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Consume
                (pVVar34,(MethodInfo *)0x0);
    }
  }
  uStack_32 = uStack_32 & 0xffffffff00000000;
  pCVar18 = (Component *)
            System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                      ((DataTable *)this,(MethodInfo *)0x0);
  if (pCVar18 != (Component *)0x0) {
    pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar18,(MethodInfo *)0x0);
    if (pTVar29 != (Transform *)0x0) {
      pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          (&QStack_28,pTVar29,(MethodInfo *)0x0);
      point.z = fStack_21;
      point.x = (float)uStack_32;
      point.y = uStack_32._4_4_;
      pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&QStack_11,*pQVar27,point,(MethodInfo *)0x0);
      uStack_32._0_4_ = pVVar36->x;
      uStack_32._4_4_ = pVVar36->y;
      fStack_33 = pVVar36->z;
      pMVar37 = (this->fields)._._.groundState;
      uStack_20 = uStack_32;
      fStack_21 = fStack_33;
      if (pMVar37 != (MVGroundState *)0x0) {
        bVar35 = MVGroundState::MVGroundState_get_Grounded(pMVar37,(MethodInfo *)0x0);
        if (bVar35 != 0) {
          pMVar37 = (this->fields)._._.groundState;
          if (pMVar37 == (MVGroundState *)0x0) goto code_?;
          hVelocity.z = fStack_21;
          hVelocity.x = (float)(undefined4)uStack_20;
          hVelocity.y = uStack_20._4_4_;
          pVVar36 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                              ((Vector3 *)&QStack_11,hVelocity,(pMVar37->fields).groundNormal,
                               (MethodInfo *)0x0);
          uStack_32._0_4_ = pVVar36->x;
          uStack_32._4_4_ = pVVar36->y;
          fStack_33 = pVVar36->z;
        }
        puVar10 = (ulonglong *)func_?(&VStack_38,&velocity,0);
        fStack_23 = uStack_4._4_4_ * uStack_4._4_4_ + 0.0 + 0.0;
        VStack_38.z = *(float *)(puVar10 + 1);
        pIStack_12 = (IVehicleCamera *)
                     ((float)uStack_4 * (float)uStack_4 + 0.0 + fStack_3 * fStack_3);
        QStack_11.z = (float)(*puVar10 >> 0x20);
        if ((0.0 < QStack_11.z) && ((this->fields).isVerticalThrusting == 0)) {
          QStack_11.z = QStack_11.z * (this->fields).dragCoefficentUp;
        }
        if ((QStack_11.z <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
          QStack_11.z = QStack_11.z * (this->fields).dragCoefficentDown;
        }
        pTStack_7 = (Transform *)(QStack_11.z * fStack_23);
        fStack_21 = fStack_23 * 0.0;
        fStack_23 = fStack_23 * 0.0;
        QStack_11._4_8_ = *puVar10;
        fVar1 = (this->fields).dragCoefficientXZ;
        fStack_24 = fVar1 * QStack_11.y * (float)pIStack_12;
        fStack_22 = fVar1 * 0.0 * (float)pIStack_12;
        uStack_20 = CONCAT44(fVar1 * VStack_38.z * (float)pIStack_12,(undefined4)uStack_20);
        QStack_2._4_8_ = *puVar10 & 0xffffffff;
        VStack_38.x = QStack_2.y;
        VStack_38.y = QStack_2.z;
        QStack_2.w = VStack_38.z;
        QStack_11.w = VStack_38.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&VStack_38,(MethodInfo *)0x0);
        pCVar18 = (Component *)
                  System.Data.dll::System::Data::DataTable::DataTable_get_MinimumCapacity
                            ((DataTable *)this,(MethodInfo *)0x0);
        if (pCVar18 != (Component *)0x0) {
          pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar18,(MethodInfo *)0x0);
          if (pTVar29 != (Transform *)0x0) {
            pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                (&QStack_39,pTVar29,(MethodInfo *)0x0);
            QStack_28.x = pQVar27->x;
            QStack_28.y = pQVar27->y;
            QStack_28.z = pQVar27->z;
            QStack_28.w = pQVar27->w;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            rotation.y = QStack_28.y;
            rotation.x = QStack_28.x;
            rotation.z = QStack_28.z;
            rotation.w = QStack_28.w;
            pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&QStack_28,rotation,
                                 TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                                 (MethodInfo *)0x0);
            QStack_11.y = pVVar36->x;
            QStack_11.z = pVVar36->y;
            QStack_11.w = pVVar36->z;
            fVar1 = (float)((uint)((float)((uint)(VStack_38.y * QStack_11.z +
                                                   VStack_38.x * QStack_11.y +
                                                  VStack_38.z * QStack_11.w) & _UNK_?) *
                                   _UNK_?) ^
                            __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                            );
            fVar14 = fStack_23 + uStack_20._4_4_;
            fStack_23 = fVar1 * QStack_2.y * (float)pIStack_12 + fStack_21 + fStack_24;
            fStack_22 = fVar1 * _UNK_? * (float)pIStack_12 + (float)pTStack_7 + fStack_22;
            pTStack_7 = (Transform *)(fVar1 * QStack_2.w * (float)pIStack_12 + fVar14);
            pMVar40 = (this->fields)._.interactableLocal;
            if (pMVar40 != (MVInteractableBase *)0x0) {
              pMVar41 = (pMVar40->klass->vtable).__unknown_8.method;
              uStack_20 = CONCAT44(pMVar41,(undefined4)uStack_20);
              fVar5 = (float10)(*(code *)pMVar41)(pMVar40,3,(this->fields).thrustFactor,
                                                  (pMVar40->klass->vtable).__unknown_9.methodPtr);
              fVar14 = (float)fVar5;
              uStack_20 = CONCAT44(fVar14,(undefined4)uStack_20);
              fVar1 = (this->fields).mass;
              fStack_23 = (fStack_23 + fVar14 * (float)uStack_32) / fVar1;
              fStack_22 = (fStack_22 + fVar14 * uStack_32._4_4_) / fVar1;
              pTStack_7 = (Transform *)(((float)pTStack_7 + fVar14 * fStack_33) / fVar1);
              pVVar34 = (this->fields)._.vehicleEnergyContainer;
              if (pVVar34 != (VehicleEnergyContainer *)0x0) {
                if ((pVVar34->fields)._UsingEnergy_k__BackingField != 0) {
                  bVar35 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                           VehicleEnergyContainer_get_OutOfEnergy(pVVar34,(MethodInfo *)0x0);
                  if ((bVar35 != 0) && (_UNK_? < (float)pIStack_12)) {
                    __return_storage_ptr__->x = fStack_17;
                    __return_storage_ptr__->y = fStack_6;
                    __return_storage_ptr__->z = fVar9;
                    return __return_storage_ptr__;
                  }
                }
                fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                   ((MethodInfo *)0x0);
                uStack_20 = CONCAT44(fVar9,(undefined4)uStack_20);
                fVar1 = fVar9 * (float)pTStack_7 + fStack_3;
                QStack_11.z = fVar1;
                velocity_00.y = fStack_22 * fVar9 + uStack_4._4_4_;
                velocity_00.x = fVar9 * fStack_23 + (float)uStack_4;
                velocity_00.z = fVar1;
                pVVar36 = HoverCraftMotor_HandleVerticalThrust
                                    ((Vector3 *)&QStack_28,this,velocity_00,(MethodInfo *)0x0);
                fVar9 = pVVar36->y;
                fVar1 = pVVar36->z;
                __return_storage_ptr__->x = pVVar36->x;
                __return_storage_ptr__->y = fVar9;
                __return_storage_ptr__->z = fVar1;
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
  pcVar42 = (code *)swi(3);
  pVVar36 = (Vector3 *)(*pcVar42)();
  return pVVar36;
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
        (float)uStack_7 * (float)uStack_7 + uStack_7._4_4_ * uStack_7._4_4_ +
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
  fVar1 = 0.0;
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
  fVar6 = fVar5 * _UNK_?;
  if (fVar4 < fVar5 * _UNK_?) {
    fVar6 = fVar4;
  }
  fVar4 = _UNK_?;
  if (fVar3 * _UNK_? < fVar1) {
    fVar4 = _UNK_?;
  }
  QStack_7.w = (float)&UNK_?;
  euler.y = fVar4 * fVar6 * _UNK_?;
  euler.x = fVar1;
  euler.z = 0.0;
  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_7,euler,(MethodInfo *)0x0);
  point.y = fVar2;
  point.x = velocity.x;
  point.z = velocity.z;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffc0,*pQVar8,point,(MethodInfo *)0x0);
  uVar10 = pVVar9->x;
  fVar1 = pVVar9->z;
  __return_storage_ptr__->x = (float)uVar10 * velocity.z;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = fVar1 * velocity.z;
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

