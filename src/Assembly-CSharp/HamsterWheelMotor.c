
/* Vector3 ApplyWaterGravity(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_ApplyWaterGravity
                    (Vector3 *__return_storage_ptr__,HamsterWheelMotor *this,Vector3 velocity,
                    float waterProximity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).waterDownVelocity;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  velocity.y = fVar2 * fVar1 * waterProximity + velocity.y;
  if (0.0 < velocity.y) {
    fVar1 = (this->fields).maxUnderWaterYMovement;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    velocity.y = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                           (velocity.y,0.0,fVar1,(MethodInfo *)0x0);
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


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
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactable;
  if (pMVar1 == (MVInteractableBase *)0x0) goto code_?;
  fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).__unknown_5.method)
                              (pMVar1,3,(this->fields).maxSpeed,
                               (pMVar1->klass->vtable).__unknown_6.methodPtr);
  fStack_3 = (float)fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                      (&VStack_5,0.98,velocity,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&VStack_5,velocity,*pVVar4,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  uVar8._0_4_ = pVVar4->z;
  fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
  a.y = (float)uVar7;
  a.x = (float)uVar6;
  a.z = (float)uVar8;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      (&VStack_5,a,fStack_9 / _UNK_?,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&puStack_10,velocity,*pVVar4,(MethodInfo *)0x0);
  uVar11 = pVVar4->x;
  uVar12 = pVVar4->y;
  uVar8._0_4_ = pVVar4->z;
  VStack_5.y = (float)uVar11;
  VStack_5.z = (float)uVar12;
  if ((this->fields)._.HandleInput != 0) {
    pMVar13 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar13 == (MvCharacterController *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar13,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    uVar15._0_4_ = pVVar4->x;
    uVar15._4_4_ = pVVar4->y;
    fVar16 = pVVar4->z;
    fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
    fVar17 = (this->fields).angularSpeed;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    QStack_18.w = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                            (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    axis.z = fVar16;
    axis.x = (float)uVar15;
    axis.y = SUB84(uVar15,4);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar14,axis,fVar17 * fStack_9 * QStack_18.w * _UNK_?,Space__Enum_World,
               (MethodInfo *)0x0);
  }
  fVar17 = (this->fields)._.DirectInputMoveMap.z;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar19 = (double)fVar17;
  if (0.0 < (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_?,
                                    SUB84(dVar19,0) & _UNK_?)) {
code_?:
    pIVar20 = (this->fields)._VehicleCamera_k__BackingField;
    if (pIVar20 == (IVehicleCamera *)0x0) goto code_?;
    fVar2 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar20);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                        ((Quaternion *)&fStack_22,0.0,(float)fVar2,0.0,(MethodInfo *)0x0);
    fStack_22 = pQVar21->x;
    puStack_10 = (undefined *)pQVar21->y;
    uVar23._0_4_ = pQVar21->z;
    uVar23._4_4_ = pQVar21->w;
    pMVar13 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar13 == (MvCharacterController *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffd4,pTVar14,(MethodInfo *)0x0);
    fVar17 = pQVar21->x;
    fVar16 = pQVar21->y;
    fVar24 = pQVar21->z;
    fVar25 = pQVar21->w;
    pMVar13 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar13 == (MvCharacterController *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_18,pTVar14,(MethodInfo *)0x0);
    rhs.y = (float)puStack_10;
    rhs.x = fStack_22;
    rhs.z = (float)uVar23;
    rhs.w = SUB84(uVar23,4);
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                        ((Quaternion *)&fStack_22,*pQVar21,rhs,(MethodInfo *)0x0);
    fStack_22 = pQVar21->x;
    puStack_10 = (undefined *)pQVar21->y;
    fVar26 = pQVar21->z;
    fVar27 = pQVar21->w;
    fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a_02.y = fVar16;
    a_02.x = fVar17;
    a_02.z = fVar24;
    a_02.w = fVar25;
    b.y = (float)puStack_10;
    b.x = fStack_22;
    b.z = fVar26;
    b.w = fVar27;
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                        ((Quaternion *)&fStack_22,a_02,b,
                         (this->fields).recalibrateCameraFactor * fVar28,(MethodInfo *)0x0);
    fVar17 = pQVar21->x;
    fVar16 = pQVar21->y;
    fVar24 = pQVar21->z;
    fVar25 = pQVar21->w;
    fStack_22 = pQVar21->x;
    puStack_10 = (undefined *)pQVar21->y;
    uVar29._0_4_ = pQVar21->z;
    uVar29._4_4_ = pQVar21->w;
    pMVar13 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar13 == (MvCharacterController *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (&QStack_18,pTVar14,(MethodInfo *)0x0);
    a_04.y = (float)puStack_10;
    a_04.x = fStack_22;
    a_04.z = (float)uVar29;
    a_04.w = SUB84(uVar29,4);
    fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Angle
                       (a_04,*pQVar21,(MethodInfo *)0x0);
    QStack_18.w = fVar26;
    pMVar13 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar13 == (MvCharacterController *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar13,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    value.y = fVar16;
    value.x = fVar17;
    value.z = fVar24;
    value.w = fVar25;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar14,value,(MethodInfo *)0x0);
    pIVar20 = (this->fields)._VehicleCamera_k__BackingField;
    if (pIVar20 == (IVehicleCamera *)0x0) goto code_?;
    fVar2 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar20);
    fStack_9 = (float)fVar2;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar17 = (this->fields).recalibrateCameraFactor;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       (fStack_9,QStack_18.w,fVar17 * fVar16,(MethodInfo *)0x0);
    if (pIVar20 == (IVehicleCamera *)0x0) goto code_?;
    func_?(1,TypeInfo__IVehicleCamera,pIVar20,fVar17);
  }
  else {
    fVar17 = (this->fields)._.DirectInputMoveMap.x;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    dVar19 = (double)fVar17;
    if (0.0 < (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_?,
                                      SUB84(dVar19,0) & _UNK_?)) goto code_?;
  }
  if (0.0 < (this->fields)._.DirectInputMoveMap.z) {
    fVar17 = (this->fields).speed;
    if (fVar17 < fStack_3) {
      fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar17 = fVar16 * _UNK_? + fVar17;
      (this->fields).speed = fVar17;
    }
    if (fStack_3 < fVar17) {
      (this->fields).speed = fStack_3;
    }
  }
  pfVar30 = &(this->fields)._.DirectInputMoveMap.z;
  if (*pfVar30 <= 0.0 && *pfVar30 != 0.0) {
    fVar17 = (this->fields).speed;
    fVar16 = (this->fields).minSpeed;
    if (fVar16 < fVar17) {
      fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar16 = (this->fields).minSpeed;
      fVar17 = fVar17 - fVar24 * _UNK_?;
      (this->fields).speed = fVar17;
    }
    if (fVar17 < fVar16) {
      (this->fields).speed = fVar16;
    }
  }
  if ((this->fields)._.DirectInputMoveMap.z == 0.0) {
    (this->fields).speed = 0.0;
  }
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar14 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        ((Vector3 *)&stack0xffffffd8,pTVar14,(MethodInfo *)0x0);
    fVar17 = (this->fields).speed;
    uVar31._0_4_ = pVVar4->x;
    uVar31._4_4_ = pVVar4->y;
    fVar16 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_00.z = fVar16;
    a_00.x = (float)uVar31;
    a_00.y = SUB84(uVar31,4);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffd8,a_00,fVar17,(MethodInfo *)0x0);
    uVar32._0_4_ = pVVar4->x;
    uVar32._4_4_ = pVVar4->y;
    fVar17 = pVVar4->z;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a_01.z = fVar17;
    a_01.x = (float)uVar32;
    a_01.y = SUB84(uVar32,4);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&puStack_10,a_01,fVar16,(MethodInfo *)0x0);
    a_03.y = VStack_5.z;
    a_03.x = VStack_5.y;
    a_03.z = (float)uVar8;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_5,a_03,*pVVar4,(MethodInfo *)0x0);
    uVar33._0_4_ = pVVar4->x;
    uVar33._4_4_ = pVVar4->y;
    pHVar34 = (HamsterWheelMotor *)pVVar4->z;
    QStack_18._8_8_ = uVar33;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_03 != (GameObject *)0x0) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_03,(MethodInfo *)0x0);
      if (pTVar14 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_10,pTVar14,(MethodInfo *)0x0);
        uVar35 = pVVar4->x;
        uVar36 = pVVar4->y;
        uVar8._0_4_ = pVVar4->z;
        VStack_5.y = (float)uVar35;
        VStack_5.z = (float)uVar36;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                            ((Vector3 *)&puStack_10,(MethodInfo *)0x0);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&puStack_10,*pVVar4,(this->fields).waterOffset,
                             (MethodInfo *)0x0);
        a_05.y = VStack_5.z;
        a_05.x = VStack_5.y;
        a_05.z = (float)uVar8;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_5,a_05,*pVVar4,(MethodInfo *)0x0);
        if (this_02 != (WaterPlaneManager *)0x0) {
          fStack_3 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                               (this_02,*pVVar4,(MethodInfo *)0x0);
          pfVar30 = &(this->fields).waterProximityThresshold;
          if (*pfVar30 <= fStack_3 && fStack_3 != *pfVar30) {
            VStack_5.x = QStack_18.z;
            VStack_5.y = QStack_18.w;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            uVar8._0_4_ = (this->fields).waterDownVelocity;
            fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            uVar8._0_4_ = fVar17 * (float)uVar8 * fStack_3 + uVar33._4_4_;
            VStack_5.y = (float)uVar8;
            if (_UNK_? < (float)uVar8) {
              fVar17 = (this->fields).maxUnderWaterYMovement;
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Mathf);
              }
              VStack_5.y = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                      ((float)uVar8,0.0,fVar17,(MethodInfo *)0x0);
            }
            fStack_37 = VStack_5.y;
            uVar8._0_4_ = VStack_5.x;
            this = pHVar34;
          }
          else {
            velocity_00.z = (float)pHVar34;
            velocity_00.x = QStack_18.z;
            velocity_00.y = QStack_18.w;
            pVVar4 = MVRigidBody::MVRigidBody_ApplyGravity
                                (&VStack_5,(MVRigidBody *)this,velocity_00,
                                 (this->fields).curVelocity,(this->fields)._.interactableLocal,
                                 (MethodInfo *)0x0);
            uVar8._0_4_ = pVVar4->x;
            fStack_37 = pVVar4->y;
            this = (HamsterWheelMotor *)pVVar4->z;
          }
          pHVar38 = (this_01->fields).bounceState;
          if (pHVar38 != (HamsterWheelBounceState *)0x0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            fVar17 = (pHVar38->fields).bounceVelocity.z;
            uVar39 = (pHVar38->fields).bounceVelocity.x;
            uVar40 = (pHVar38->fields).bounceVelocity.y;
            VStack_5.y = (float)uVar39;
            VStack_5.z = (float)uVar40;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                ((Vector3 *)&puStack_10,(MethodInfo *)0x0);
            lhs.y = VStack_5.z;
            lhs.x = VStack_5.y;
            lhs.z = fVar17;
            bVar41 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                               (lhs,*pVVar4,(MethodInfo *)0x0);
            if (bVar41 != 0) {
              uVar8._0_4_ = (pHVar38->fields).bounceVelocity.x;
              fStack_37 = (pHVar38->fields).bounceVelocity.y;
              this = (HamsterWheelMotor *)(pHVar38->fields).bounceVelocity.z;
            }
            (pHVar38->fields).bounced = 0;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                (&VStack_5,(MethodInfo *)0x0);
            fVar16 = pVVar4->y;
            fVar17 = pVVar4->z;
            (pHVar38->fields).bounceVelocity.x = pVVar4->x;
            (pHVar38->fields).bounceVelocity.y = fVar16;
            (pHVar38->fields).bounceVelocity.z = fVar17;
            this_00 = (this_01->fields).jumpState;
            if (this_00 != (JumpState *)0x0) {
              velocity_01.z = (float)this;
              velocity_01.x = (float)uVar8;
              velocity_01.y = fStack_37;
              pVVar4 = JumpState::JumpState_ApplyJumping
                                  (&VStack_5,this_00,(this_01->fields)._.interactableLocal,
                                   (this_01->fields)._._.groundState,(this_01->fields)._._.density,
                                   0.0,(this_01->fields)._.Jump,velocity_01,movableVelocity,
                                   (MethodInfo *)0x0);
              pVVar4 = MVRigidBody::MVRigidBody_GetImpulse
                                  (&VStack_5,(MVRigidBody *)this_01,*pVVar4,
                                   (this_01->fields)._.interactableLocal,(MethodInfo *)0x0);
              fVar17 = pVVar4->y;
              uVar8._0_4_ = pVVar4->z;
              __return_storage_ptr__->x = pVVar4->x;
              __return_storage_ptr__->y = fVar17;
              __return_storage_ptr__->z = (float)uVar8;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar42 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar42)();
  return pVVar4;
}


/* Void Init(SmoothCharacterController, VehicleInteractable) */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Init
               (HamsterWheelMotor *this,SmoothCharacterController *smoothCharacterController,
               VehicleInteractable *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._._.density = 1.5;
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
            ((SimpleVehicleMotorBase *)this,smoothCharacterController,interactableLocal,
             (MethodInfo *)0x0);
  this_01 = (ScaleAnimationBase *)func_?(TypeInfo__HamsterWheelBounceState);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this_01->fields).state = (int32_t)pVVar1->x;
  (this_01->fields).originalScale.x = fVar2;
  (this_01->fields).originalScale.y = fVar3;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_4);
  (this_01->fields)._._._._.m_CachedPtr = interactableLocal;
  (this->fields).bounceState = (HamsterWheelBounceState *)this_01;
  (this->fields).interactable = (MVInteractableBase *)interactableLocal;
  if (smoothCharacterController != (SmoothCharacterController *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                        smoothCharacterController,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__System__Action<MVControllerColliderHit>;
    if (pOVar5 != (Object *)0x0) {
      pOVar7 = pOVar5[0xc].klass;
      object = (this->fields).bounceState;
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar8,(Object *)object,
                 MethodInfo__HamsterWheelBounceState__HandleMoveHit_MVControllerColliderHit_,
                 MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__)
      ;
      pOVar9 = (Object__Class *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pOVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
      pOVar7 = (Object__Class *)0x0;
      if (pOVar9 != (Object__Class *)0x0) {
        if ((Action_1_MVControllerColliderHit___Class *)(pOVar9->_0).image ==
            TypeInfo__System__Action<MVControllerColliderHit>) {
          pOVar7 = pOVar9;
        }
        if (pOVar7 == (Object__Class *)0x0) goto code_?;
      }
      pOVar5[0xc].klass = pOVar7;
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pAVar6,
                           (MethodInfo *)0x0);
      pOVar5 = _UNK_?;
      if (pOVar10 != (Object *)0x0) {
        pOVar7 = pOVar10[0xc].klass;
        pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar8,pOVar5,MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,
                   MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                  );
        pOVar9 = (Object__Class *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pOVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
        pOVar7 = (Object__Class *)0x0;
        if (pOVar9 != (Object__Class *)0x0) {
          if ((Action_1_MVControllerColliderHit___Class *)(pOVar9->_0).image ==
              TypeInfo__System__Action<MVControllerColliderHit>) {
            pOVar7 = pOVar9;
          }
          if (pOVar7 == (Object__Class *)0x0) goto code_?;
        }
        pOVar10[0xc].klass = pOVar7;
        this_02 = (JumpState *)func_?();
        JumpState::JumpState__ctor_1(this_02,3.0,(MethodInfo *)0x0);
        this_00 = TypeInfo__System__Action<GroundChange>;
        iVar11 = _UNK_?;
        _UNK_? = this_02;
        if (_UNK_? != 0) {
          pDVar12 = *(Delegate **)(_UNK_? + 0x34);
          pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar8,(Object *)this_02,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                     MethodInfo__System__Action<GroundChange>__Action_System__Object__void__);
          pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar12,(Delegate *)pUVar8,(MethodInfo *)0x0);
          pDVar12 = (Delegate *)0x0;
          if (pDVar13 != (Delegate *)0x0) {
            if ((Action_1_GroundChange___Class *)pDVar13->klass ==
                TypeInfo__System__Action<GroundChange>) {
              pDVar12 = pDVar13;
            }
            if (pDVar12 == (Delegate *)0x0) goto code_?;
          }
          *(Delegate **)(iVar11 + 0x34) = pDVar12;
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                               (MethodInfo *)0x0);
          pAVar6 = TypeInfo__System__Action<MVControllerColliderHit>;
          pOVar5 = _UNK_?;
          if (pOVar10 != (Object *)0x0) {
            pOVar7 = pOVar10[0xc].klass;
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,pOVar5,MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,
                       MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                      );
            pIVar14 = (Il2CppRGCTXData *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pOVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
            pIVar15 = (Il2CppRGCTXData *)0x0;
            if (pIVar14 == (Il2CppRGCTXData *)0x0) {
code_?:
              pAVar6->rgctx_data = pIVar15;
              return;
            }
            if (pIVar14->rgctxDataDummy == TypeInfo__System__Action<MVControllerColliderHit>) {
              pIVar15 = pIVar14;
            }
            if (pIVar15 != (Il2CppRGCTXData *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Move(Vector3, Vector3) */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Move
               (HamsterWheelMotor *this,Vector3 velocity,Vector3 basevelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  b.y = basevelocity.y;
  b.x = basevelocity.x;
  b.z = basevelocity.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&basevelocity,velocity,b,(MethodInfo *)0x0);
  uVar2._0_4_ = pVVar1->x;
  uVar2._4_4_ = pVVar1->y;
  fVar3 = pVVar1->z;
  basevelocity.z =
       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  a.z = fVar3;
  a.x = (float)uVar2;
  a.y = SUB84(uVar2,4);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,a,basevelocity.z,(MethodInfo *)0x0);
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  basevelocity.y = (float)uVar4;
  basevelocity.z = (float)uVar5;
  pMVar6 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                     ((SimpleVehicleMotorBase *)0x0,(MethodInfo *)0x0);
  if (pMVar6 != (MvCharacterController *)0x0) {
    basevelocity.x = (float)pMVar6;
    (*(code *)(pMVar6->klass->vtable).__unknown_1.method)();
    this_00 = pMRam00000014;
    pMVar6 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                       ((SimpleVehicleMotorBase *)0x0,(MethodInfo *)0x0);
    if (this_00 != (MVGroundState *)0x0) {
      basevelocity.x = 0.0;
      basevelocity.y = velocity.y;
      basevelocity.z = velocity.z;
      auVar7._8_4_ = 0;
      auVar7._0_8_ = velocity._4_8_;
      MVGroundState::MVGroundState_Update
                (this_00,pMVar6,(Vector3)(auVar7 << 0x20),0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Reset
               (HamsterWheelMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset
            ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  pIVar1 = (this->fields).impactState;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  if (pIVar1 != (ImpactState *)0x0) {
    (pIVar1->fields).prevVelocityChangeVector.x = pVVar2->x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar3;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar4;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    (this->fields).curVelocity.x = pVVar2->x;
    (this->fields).curVelocity.y = fVar3;
    (this->fields).curVelocity.z = fVar4;
    this_00 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (this_00 != (MvCharacterController *)0x0) {
      MvCharacterController::MvCharacterController_set_Velocity(this_00,*pVVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void VehicleUpdateFunction() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_VehicleUpdateFunction
               (HamsterWheelMotor *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).curVelocity.x;
  fVar2 = (this->fields).curVelocity.z;
  this_00 = (this->fields)._.movableMotorState;
  fVar3 = (this->fields).curVelocity.x;
  fVar4 = (this->fields).curVelocity.y;
  pMVar5 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  this_03 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (this_03 != (MvCharacterController *)0x0) {
    fVar6 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
            Object,System::Single]::
            Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                        *)this_03,(MethodInfo *)0x0);
    if (this_00 != (MVMovableMotorState *)0x0) {
      fVar7 = 0.0;
      groundState = (this->fields)._._.groundState;
      uVar8._4_4_ = (float)&stack0xffffffc0;
      uVar8._0_4_ = (float)groundState;
      velocity.y = fVar4;
      velocity.x = fVar3;
      velocity.z = fVar2;
      bVar9 = MVMovableMotorState::MVMovableMotorState_Move
                         (this_00,velocity,pMVar5,fVar6,groundState,(Vector3 *)&stack0xffffffc0,
                          (MethodInfo *)0x0);
      velocity_00.y = (float)uVar8;
      velocity_00.x = fVar1;
      velocity_00.z = fVar2;
      movableVelocity.z = fVar7;
      movableVelocity.x = (float)uVar8;
      movableVelocity.y = SUB84(uVar8,4);
      pHVar10 = this;
      pVVar11 = HamsterWheelMotor_GetVehicleVelocityClassicCam
                          ((Vector3 *)&stack0xffffffe4,this,velocity_00,movableVelocity,
                           (MethodInfo *)0x0);
      puVar12 = puStack13;
      if (bVar9 == 0) {
        this = (HamsterWheelMotor *)uVar8;
        method = SUB84(uVar8,4);
        uVar14._0_4_ = pVVar11->x;
        uVar14._4_4_ = pVVar11->y;
        fVar3 = pVVar11->z;
      }
      else {
        fVar2 = pVVar11->x;
        fVar6 = pVVar11->y;
        fVar3 = pVVar11->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          puVar12 = puStack13;
        }
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                            ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
        uVar15 = pVVar11->x;
        uVar16 = pVVar11->y;
        puStack13 = (undefined *)pVVar11->z;
        uVar14 = CONCAT44(fVar6,fVar2);
        this = (HamsterWheelMotor *)uVar15;
        method = (MethodInfo *)uVar16;
      }
      velocity_01.z = fVar3;
      velocity_01.x = (float)(int)uVar14;
      velocity_01.y = (float)(int)((ulonglong)uVar14 >> 0x20);
      basevelocity.y = (float)method;
      basevelocity.x = (float)this;
      basevelocity.z = (float)puStack13;
      HamsterWheelMotor_Move(this_02,velocity_01,basevelocity,(MethodInfo *)0x0);
      pMVar5 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                          ((SimpleVehicleMotorBase *)this_02,(MethodInfo *)0x0);
      if (pMVar5 != (MvCharacterController *)0x0) {
        pVVar11 = MvCharacterController::MvCharacterController_get_Velocity
                            ((Vector3 *)&stack0xffffffe4,pMVar5,(MethodInfo *)0x0);
        fVar7 = pVVar11->x;
        fVar17 = pVVar11->y;
        fVar3 = pVVar11->z;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.y = fVar17;
        a.x = fVar7;
        a.z = fVar3;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                            ((Vector3 *)&stack0xffffffe4,a,fVar4,(MethodInfo *)0x0);
        uVar18._0_4_ = pVVar11->x;
        uVar18._4_4_ = pVVar11->y;
        fVar3 = pVVar11->z;
        (this_02->fields).curVelocity.x = (float)uVar18;
        (this_02->fields).curVelocity.y = uVar18._4_4_;
        (this_02->fields).curVelocity.z = fVar3;
        if (bVar9 == 0) {
          fVar4 = (float)uVar8;
          fVar2 = SUB84(uVar8,4);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar8._4_4_ = fVar2;
            uVar8._0_4_ = fVar4;
          }
          a_00.z = fVar3;
          a_00.x = (float)(int)uVar18;
          a_00.y = (float)(int)((ulonglong)uVar18 >> 0x20);
          b.z = (float)puVar12;
          b.x = (float)uVar8;
          b.y = SUB84(uVar8,4);
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffd8,a_00,b,(MethodInfo *)0x0);
          fVar4 = pVVar11->y;
          fVar3 = pVVar11->z;
          (this_02->fields).curVelocity.x = pVVar11->x;
          (this_02->fields).curVelocity.y = fVar4;
          (this_02->fields).curVelocity.z = fVar3;
        }
        fVar19 = (this_02->fields).curVelocity.x;
        fVar20 = (this_02->fields).curVelocity.y;
        fVar3 = (this_02->fields).curVelocity.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_01.y = fVar20;
        a_01.x = fVar19;
        a_01.z = fVar3;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffe4,a_01,0.5,(MethodInfo *)0x0);
        fVar21 = pVVar11->x;
        fVar22 = pVVar11->y;
        fVar3 = pVVar11->z;
        a_02.y = fVar1;
        a_02.x = (float)pHVar10;
        a_02.z = (float)&UNK_?;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffcc,a_02,0.5,(MethodInfo *)0x0);
        this_01 = (this_02->fields).impactState;
        if (this_01 != (ImpactState *)0x0) {
          curVelocity.y = fVar22;
          curVelocity.x = fVar21;
          curVelocity.z = fVar3;
          fStack23 =
               ImpactState::ImpactState_UpdateImpactState
                         (this_01,curVelocity,*pVVar11,(this_02->fields)._.interactableLocal,
                          (MethodInfo *)0x0);
          if (fStack23 != _UNK_?) {
            pMStack24 = (this_02->fields)._.interactableLocal;
            if (pMStack24 == (MVInteractableBase *)0x0) goto code_?;
            pIStack25 = (pMStack24->klass->vtable).__unknown_1.methodPtr;
            puStack26 = (undefined *)0x5;
            uStack27 = 0;
            (*(code *)(pMStack24->klass->vtable).__unknown.method)();
          }
          return;
        }
      }
    }
  }
code_?:
  pIStack25 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Single WaterProximity() */

float Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_WaterProximity
                (HamsterWheelMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,this_02,(MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
      uVar3 = pVVar1->y;
      fVar4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffe8,*pVVar1,(this->fields).waterOffset,
                          (MethodInfo *)0x0);
      a.y = fVar4;
      a.x = (float)uVar3;
      a.z = fVar2;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,*pVVar1,(MethodInfo *)0x0);
      if (this_00 != (WaterPlaneManager *)0x0) {
        fVar2 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                          (this_00,*pVVar1,(MethodInfo *)0x0);
        return fVar2;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* HamsterWheelMotor() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor__ctor
               (HamsterWheelMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  explosionEvents =
       (RuntimeEventType__Enum__Array *)func_?(TypeInfo__MV__Common__RuntimeEventType,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)explosionEvents,__field_9B79B32FB1257B488C71348417A65E0B10FFA1A5_Field,
             (MethodInfo *)0x0);
  this_00 = (ImpactState *)func_?(TypeInfo__ImpactState);
  ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
  (this->fields).impactState = this_00;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).curVelocity.x = pVVar1->x;
  (this->fields).curVelocity.y = fVar2;
  (this->fields).curVelocity.z = fVar3;
  (this->fields).maxSpeed = 38.8;
  (this->fields).minSpeed = -10.0;
  (this->fields).angularSpeed = 1.4;
  (this->fields).recalibrateCameraFactor = 1.05;
  (this->fields).waterProximityThresshold = 0.01;
  (this->fields).waterDownVelocity = 50.0;
  (this->fields).waterOffset = -0.6;
  (this->fields).maxUnderWaterYMovement = 40.0;
  SimpleVehicleMotorBase::SimpleVehicleMotorBase__ctor
            ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
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

