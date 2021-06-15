
/* Vector3 ApplyWaterGravity(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_ApplyWaterGravity
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    float waterProximity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).waterDownVelocity;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
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


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_DealImpactDamage
               (HoverCraftMotor *this,Vector3 curVelocity,Vector3 prevVelocity,MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 != (ImpactState *)0x0) {
    fVar1 = ImpactState::ImpactState_UpdateImpactState
                      (this_00,curVelocity,prevVelocity,(this->fields)._.interactableLocal,
                       (MethodInfo *)0x0);
    if (fVar1 != _UNK_?) {
      pMVar2 = (this->fields)._.interactableLocal;
      if (pMVar2 == (MVInteractableBase *)0x0) goto code_?;
      (*(code *)(pMVar2->klass->vtable).__unknown.method)();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single DragCoefficientXZHullRotationFactor(Vector3, Single) */

float Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_DragCoefficientXZHullRotationFactor
                (HoverCraftMotor *this,Vector3 velocity,float hullRotationFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&velocity,0);
  this_00 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (this_00 != (MvCharacterController *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->x;
      fVar3 = pQVar1->y;
      fVar4 = pQVar1->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      puVar5 = &UNK_?;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                         ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar6->x;
      uStack_7._4_4_ = pVVar6->y;
      fVar8 = pVVar6->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        uStack_7 = CONCAT44(uStack_7._4_4_,TypeInfo__UnityEngine__Quaternion);
        func_?();
      }
      rotation.y = fVar3;
      rotation.x = fVar2;
      rotation.z = fVar4;
      rotation.w = (float)puVar5;
      point.z = fVar8;
      point.x = (float)(int)uStack_7;
      point.y = (float)(int)((ulonglong)uStack_7 >> 0x20);
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffe8,rotation,point,(MethodInfo *)0x0);
      fVar2 = velocity.z;
      velocity.z = velocity.y;
      velocity.y = velocity.x;
      rhs.y = velocity.z;
      rhs.x = velocity.x;
      rhs.z = fVar2;
      velocity.x = pVVar6->z;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                        (*pVVar6,rhs,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        pMStack9 = TypeInfo__UnityEngine__Mathf;
        func_?();
      }
      return (float)(double)CONCAT44((uint)((ulonglong)(double)fVar3 >> 0x20) & _UNK_?,
                                     SUB84((double)fVar3,0) & _UNK_?) * fVar2;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  fVar11 = (float10)(*pcVar10)();
  return (float)fVar11;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = velocity.z;
  uVar2 = velocity._0_8_;
  fVar3 = velocity.x;
  fVar4 = velocity.y;
  fVar5 = velocity.z;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar6 = 0.0;
  fVar7 = (float10)func_?(&stack0xffffffc8,0);
  if ((float)fVar7 < _UNK_?) {
    velocity._0_8_ = (ulonglong)(uint)fVar4 << 0x20;
    velocity.z = 0.0;
  }
  else {
    fVar8 = (float)fVar7 / (this->fields).magnitudeDivider;
    puVar9 = (undefined8 *)func_?(&puStack_10,&stack0xffffffc8,0);
    fVar11 = (float)*puVar9;
    fVar12 = (float)((ulonglong)*puVar9 >> 0x20);
    fVar4 = *(float *)(puVar9 + 1);
    fVar8 = _UNK_? / (fVar8 + _UNK_?);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_05.y = fVar12;
    a_05.x = fVar11;
    a_05.z = fVar4;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffa4,a_05,fVar8,(MethodInfo *)0x0);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffff94,*pVVar13,(this->fields).frictionFactor,
                         (MethodInfo *)0x0);
    fVar4 = pVVar13->x;
    fVar11 = pVVar13->y;
    fVar8 = pVVar13->z;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a_07.y = fVar11;
    a_07.x = fVar4;
    a_07.z = fVar8;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffff84,a_07,fVar12,(MethodInfo *)0x0);
    fVar8 = pVVar13->x;
    fVar12 = pVVar13->y;
    fVar11 = pVVar13->z;
    fVar7 = (float10)func_?();
    fVar4 = (float)fVar7;
    fVar7 = (float10)func_?();
    if ((float)fVar7 < fVar4) {
      fVar11 = fVar1;
      fVar8 = fVar3;
      fVar12 = fVar6;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    uVar14 = velocity._0_8_;
    a_04.z = fVar5;
    velocity.x = (float)uVar2;
    velocity.y = SUB84(uVar2,4);
    a_04.x = velocity.x;
    a_04.y = velocity.y;
    b_01.y = fVar12;
    b_01.x = fVar8;
    b_01.z = fVar11;
    velocity._0_8_ = uVar14;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffd4,a_04,b_01,(MethodInfo *)0x0);
    velocity.x = pVVar13->x;
    velocity.y = pVVar13->y;
    velocity.z = pVVar13->z;
  }
  if ((this->fields)._.HandleInput != 0) {
    pMVar15 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if (pMVar15 == (MvCharacterController *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar15,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
    fVar3 = pVVar13->x;
    fVar6 = pVVar13->y;
    fVar4 = pVVar13->z;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar1 = (this->fields).angularSpeed;
    fVar5 = (this->fields)._.DirectInputMoveMap.x;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar11 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                       (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    if (pTVar16 == (Transform *)0x0) goto code_?;
    axis.y = fVar6;
    axis.x = fVar3;
    axis.z = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar16,axis,
               (float)(double)CONCAT44((uint)((ulonglong)(double)fVar11 >> 0x20) & _UNK_?,
                                       SUB84((double)fVar11,0) & _UNK_?) *
               fVar8 * _UNK_? * fVar1 * fVar5,Space__Enum_World,(MethodInfo *)0x0);
  }
  fVar1 = (this->fields)._.DirectInputMoveMap.z;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar17 = (double)fVar1;
  if (0.0 < (float)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_?,
                                    SUB84(dVar17,0) & _UNK_?)) {
code_?:
    pIVar18 = (this->fields)._VehicleCamera_k__BackingField;
    if (pIVar18 == (IVehicleCamera *)0x0) goto code_?;
    fVar7 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar18);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                        ((Quaternion *)&stack0xffffff80,0.0,(float)fVar7,0.0,(MethodInfo *)0x0);
    fVar1 = pQVar19->x;
    fVar5 = pQVar19->y;
    fVar3 = pQVar19->z;
    fVar4 = pQVar19->w;
    pMVar15 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if ((pMVar15 == (MvCharacterController *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pMVar15,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)
       ) goto code_?;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&puStack_20,pTVar16,(MethodInfo *)0x0);
    puStack_20 = (undefined *)pQVar19->x;
    fVar6 = pQVar19->y;
    fVar8 = pQVar19->z;
    fVar11 = pQVar19->w;
    pMVar15 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if ((pMVar15 == (MvCharacterController *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pMVar15,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)
       ) goto code_?;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa0,pTVar16,(MethodInfo *)0x0);
    rhs.y = fVar5;
    rhs.x = fVar1;
    rhs.z = fVar3;
    rhs.w = fVar4;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                        ((Quaternion *)&stack0xffffff80,*pQVar19,rhs,(MethodInfo *)0x0);
    fVar1 = pQVar19->x;
    fVar5 = pQVar19->y;
    fVar3 = pQVar19->z;
    fVar4 = pQVar19->w;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a_00.y = fVar6;
    a_00.x = (float)puStack_20;
    a_00.z = fVar8;
    a_00.w = fVar11;
    b.y = fVar5;
    b.x = fVar1;
    b.z = fVar3;
    b.w = fVar4;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                        ((Quaternion *)&stack0xffffff80,a_00,b,
                         (this->fields).recalibrateCameraFactor * fVar12,(MethodInfo *)0x0);
    puStack_20 = (undefined *)pQVar19->x;
    fVar1 = pQVar19->y;
    fVar5 = pQVar19->z;
    fVar3 = pQVar19->w;
    fVar4 = pQVar19->x;
    fVar6 = pQVar19->y;
    fVar8 = pQVar19->z;
    fVar11 = pQVar19->w;
    pMVar15 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if ((pMVar15 == (MvCharacterController *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pMVar15,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)
       ) goto code_?;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa0,pTVar16,(MethodInfo *)0x0);
    a_02.y = fVar6;
    a_02.x = fVar4;
    a_02.z = fVar8;
    a_02.w = fVar11;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Angle
                      (a_02,*pQVar19,(MethodInfo *)0x0);
    pMVar15 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
    if ((pMVar15 == (MvCharacterController *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pMVar15,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)
       ) goto code_?;
    value.y = fVar1;
    value.x = (float)puStack_20;
    value.z = fVar5;
    value.w = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar16,value,(MethodInfo *)0x0);
    pIVar18 = (this->fields)._VehicleCamera_k__BackingField;
    if (pIVar18 == (IVehicleCamera *)0x0) goto code_?;
    fVar7 = (float10)func_?(0,TypeInfo__IVehicleCamera,pIVar18);
    fVar5 = (float)fVar7;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar1 = (this->fields).recalibrateCameraFactor;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                      (fVar5,fVar4,fVar1 * fVar3,(MethodInfo *)0x0);
    if (pIVar18 == (IVehicleCamera *)0x0) goto code_?;
    func_?(1,TypeInfo__IVehicleCamera,pIVar18,fVar1);
  }
  else {
    fVar1 = (this->fields)._.DirectInputMoveMap.x;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    dVar17 = (double)fVar1;
    if (0.0 < (float)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_?,
                                      SUB84(dVar17,0) & _UNK_?)) goto code_?;
  }
  uVar21 = (this->fields)._.DirectInputMoveMap.y;
  fVar1 = (this->fields)._.DirectInputMoveMap.z;
  uVar22 = 0;
  pMVar15 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if ((pMVar15 != (MvCharacterController *)0x0) &&
     (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pMVar15,(MethodInfo *)0x0), pTVar16 != (Transform *)0x0))
  {
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffff80,pTVar16,(MethodInfo *)0x0);
    fVar5 = pQVar19->x;
    fVar3 = pQVar19->y;
    fVar4 = pQVar19->z;
    fVar6 = pQVar19->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    rotation.y = fVar3;
    rotation.x = fVar5;
    rotation.z = fVar4;
    rotation.w = fVar6;
    point.y = (float)uVar21;
    point.x = (float)uVar22;
    point.z = fVar1;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff84,rotation,point,(MethodInfo *)0x0);
    fVar1 = pVVar13->x;
    fVar5 = pVVar13->y;
    fVar3 = pVVar13->z;
    pMVar23 = (this->fields)._._.groundState;
    if (pMVar23 != (MVGroundState *)0x0) {
      fVar4 = fVar3;
      bVar24 = MVGroundState::MVGroundState_get_Grounded(pMVar23,(MethodInfo *)0x0);
      if (bVar24 != 0) {
        pMVar23 = (this->fields)._._.groundState;
        if (pMVar23 == (MVGroundState *)0x0) goto code_?;
        pVVar13 = SentryGunBeam::SentryGunBeam_get_StartPosition
                            ((Vector3 *)&stack0xffffff84,(SentryGunBeam *)pMVar23,(MethodInfo *)0x0)
        ;
        hVelocity.y = fVar5;
        hVelocity.x = fVar1;
        hVelocity.z = fVar3;
        pVVar13 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                            ((Vector3 *)&stack0xffffff84,hVelocity,*pVVar13,(MethodInfo *)0x0);
        uVar25 = pVVar13->x;
        uVar26 = pVVar13->y;
        fVar4 = pVVar13->z;
        fVar1 = (float)uVar25;
        fVar5 = (float)uVar26;
      }
      puVar9 = (undefined8 *)func_?(&stack0xffffff84,&velocity,0);
      uVar2 = *puVar9;
      fVar6 = *(float *)(puVar9 + 1);
      fVar7 = (float10)func_?(&velocity,0);
      fVar3 = (float)fVar7;
      fVar8 = (float)((ulonglong)uVar2 >> 0x20);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      uVar21 = 0;
      fVar11 = 0.0;
      if ((0.0 < fVar8) && ((this->fields).isVerticalThrusting == 0)) {
        fVar8 = fVar8 * (this->fields).dragCoefficentUp;
      }
      if ((fVar8 <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
        fVar8 = (this->fields).dragCoefficentDown * fVar8;
      }
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.y = fVar8;
      a.x = (float)uVar21;
      a.z = fVar11;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffff84,a,fVar3,(MethodInfo *)0x0);
      uVar22 = pVVar13->x;
      uVar27 = pVVar13->y;
      fVar8 = pVVar13->z;
      uVar21 = (undefined4)uVar2;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      fVar11 = (this->fields).dragCoefficientXZ;
      uVar28 = 0;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_01.y = (float)uVar28;
      a_01.x = (float)uVar21;
      a_01.z = fVar6;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffff84,a_01,fVar11,(MethodInfo *)0x0);
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffff94,*pVVar13,fVar3,(MethodInfo *)0x0);
      uVar28 = pVVar13->x;
      uVar29 = pVVar13->y;
      fVar11 = pVVar13->z;
      velocityNormal.z = fVar6;
      velocityNormal.x = (float)(int)uVar2;
      velocityNormal.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar13 = HoverCraftMotor_HullRotationDrag
                          ((Vector3 *)&stack0xffffff84,this,velocityNormal,fVar3,
                           (this->fields).hullRotationFactorClassic,(MethodInfo *)0x0);
      uVar2._0_4_ = pVVar13->x;
      uVar2._4_4_ = pVVar13->y;
      fVar3 = pVVar13->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_03.y = (float)uVar27;
      a_03.x = (float)uVar22;
      a_03.z = fVar8;
      b_00.y = (float)uVar29;
      b_00.x = (float)uVar28;
      b_00.z = fVar11;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffff84,a_03,b_00,(MethodInfo *)0x0);
      b_02.z = fVar3;
      b_02.x = (float)(int)uVar2;
      b_02.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffff84,*pVVar13,b_02,(MethodInfo *)0x0);
      pMVar30 = (this->fields)._.interactableLocal;
      uVar31 = pVVar13->x;
      uVar32 = pVVar13->y;
      fVar3 = pVVar13->z;
      if (pMVar30 != (MVInteractableBase *)0x0) {
        fVar7 = (float10)(*(code *)(pMVar30->klass->vtable).__unknown_5.method)
                                    (pMVar30,3,(this->fields).thrustFactor,
                                     (pMVar30->klass->vtable).__unknown_6.methodPtr);
        a_06.y = fVar5;
        a_06.x = fVar1;
        a_06.z = fVar4;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffff84,a_06,(float)fVar7,(MethodInfo *)0x0);
        b_03.y = (float)uVar32;
        b_03.x = (float)uVar31;
        b_03.z = fVar3;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffff84,*pVVar13,b_03,(MethodInfo *)0x0);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                            ((Vector3 *)&stack0xffffff84,*pVVar13,(this->fields).mass,
                             (MethodInfo *)0x0);
        fVar5 = velocity.z;
        fVar4 = velocity.x;
        fVar6 = velocity.y;
        uVar33 = pVVar13->x;
        fVar1 = pVVar13->z;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
        a_08.y = fVar3;
        a_08.x = (float)uVar33;
        a_08.z = fVar1;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffff84,a_08,fVar3,(MethodInfo *)0x0);
        a_09.y = fVar6;
        a_09.x = fVar4;
        a_09.z = fVar5;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffff84,a_09,*pVVar13,(MethodInfo *)0x0);
        velocity.x = pVVar13->x;
        velocity.y = pVVar13->y;
        velocity.z = pVVar13->z;
        pVVar13 = HoverCraftMotor_HandleVerticalThrust
                            ((Vector3 *)&stack0xffffff84,this,*pVVar13,(MethodInfo *)0x0);
        fVar5 = pVVar13->y;
        fVar1 = pVVar13->z;
        __return_storage_ptr__->x = pVVar13->x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar1;
        return __return_storage_ptr__;
      }
    }
  }
code_?:
  func_?(0);
  pcVar34 = (code *)swi(3);
  pVVar13 = (Vector3 *)(*pcVar34)();
  return pVVar13;
}


/* Vector3 GetVehicleVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleVelocity
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  pVVar1 = HoverCraftMotor_GetVehicleInputVelocityClassicCam
                      ((Vector3 *)&puStack_2,this,velocity,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  velocity.x = (float)uVar3;
  velocity.y = (float)uVar4;
  if (cRam_? == '\0') {
    stack0xffffffe0 = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    stack0xffffffe0 = (float)&UNK_?;
    func_?();
  }
  stack0xffffffe0 = (float)&UNK_?;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  stack0xffffffe0 = (float)this;
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((this_03 != (GameObject *)0x0) &&
     (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_03,(MethodInfo *)0x0), this_04 != (Transform *)0x0)) {
    uVar6._0_4_ = 3.4844018e-29;
    uVar6._4_4_ = 3.4844087e-29;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&puStack_2,this_04,(MethodInfo *)0x0);
    uVar7 = pVVar1->x;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)&puStack_2,(MethodInfo *)0x0);
    velocity.x = 0.0;
    uVar8 = pVVar1->x;
    uVar9 = pVVar1->y;
    __return_storage_ptr__ = (Vector3 *)pVVar1->z;
    fVar10 = (float)uVar9;
    uVar11 = CONCAT44(&UNK_?,uVar7);
    VVar12.x = (float)uVar8;
    VVar12 = (Vector3)CONCAT84(uVar13,VVar12.x);
    pVVar1 = (Vector3 *)&puStack_2;
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&puStack_2,VVar12,(this->fields).waterOffset,(MethodInfo *)0x0)
    ;
    velocity.z = (float)pVVar1;
    velocity.x = (float)uVar11;
    velocity.y = (float)((ulonglong)uVar11 >> 0x20);
    VVar12.z = velocity.z;
    VVar12.x = (float)(int)uVar11;
    VVar12.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&puStack_2,VVar12,*pVVar14,(MethodInfo *)0x0);
    if (this_02 != (WaterPlaneManager *)0x0) {
      fVar15 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                         (this_02,*pVVar1,(MethodInfo *)0x0);
      pfVar16 = &(this->fields).waterProximityThresshold;
      if (*pfVar16 <= fVar15 && fVar15 != *pfVar16) {
        puStack_2 = (undefined *)0xADDR;
        stack0xffffffe0 = 3.4844087e-29;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar17 = (this->fields).waterDownVelocity;
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        velocity.z = fVar18 * fVar17 * fVar15 + velocity.y;
        stack0xffffffe0 = velocity.z;
        uVar6 = _puStack_24;
        if (0.0 < velocity.z) {
          fVar15 = (this->fields).maxUnderWaterYMovement;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                             (velocity.z,0.0,fVar15,(MethodInfo *)0x0);
          stack0xffffffe0 = fVar15;
          uVar6 = _puStack_24;
        }
      }
      else {
        this_00 = (this->fields)._._.groundState;
        if (this_00 == (MVGroundState *)0x0) goto code_?;
        bVar19 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
        if (bVar19 == 0) {
          if ((this->fields).isVerticalThrusting != 0) {
            (this->fields)._._.density = 0.2;
          }
          velocity_00.z = fVar5;
          velocity_00.x = 3.4844018e-29;
          velocity_00.y = 3.4844087e-29;
          pVVar1 = MVRigidBody::MVRigidBody_ApplyGravity
                              (&velocity,(MVRigidBody *)this,velocity_00,
                               (this->fields).velocityPrevFrame,(this->fields)._.interactableLocal,
                               (MethodInfo *)0x0);
          uVar6._0_4_ = pVVar1->x;
          uVar6._4_4_ = pVVar1->y;
          fVar5 = pVVar1->z;
          (this->fields)._._.density = 1.3;
        }
      }
      this_01 = (this->fields).bounceState;
      if (this_01 != (BounceState *)0x0) {
        velocity_01.z = fVar5;
        velocity_01.x = (float)uVar6;
        velocity_01.y = SUB84(uVar6,4);
        pVVar1 = BounceState::BounceState_ApplyBounceVelocity
                            (&velocity,this_01,velocity_01,(MethodInfo *)0x0);
        pVVar1 = MVRigidBody::MVRigidBody_GetImpulse
                            (&velocity,(MVRigidBody *)this,*pVVar1,
                             (this->fields)._.interactableLocal,(MethodInfo *)0x0);
        pVVar1 = MVRigidBody::MVRigidBody_VelocityDamping
                            (&velocity,*pVVar1,1.0,(this->fields)._.interactableLocal,
                             (MethodInfo *)0x0);
        _UNK_? = pVVar1->x;
        _UNK_? = pVVar1->y;
        _UNK_? = pVVar1->z;
        return (Vector3 *)&UNK_?;
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar20)();
  return pVVar1;
}


/* Vector3 HandleVerticalThrust(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HandleVerticalThrust
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._.Jump;
  (this->fields).isVerticalThrusting = 0;
  if (bVar1 == 0) {
    if ((this->fields).wasJumping != 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stoppedJumpingTime = fVar2;
      (this->fields).wasJumping = 0;
    }
    fVar2 = (this->fields).availableVerticalThrustTime;
    if (fVar2 < _UNK_?) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      fVar4 = (this->fields).regenerationFactor;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                        (fVar4 * fVar3 + fVar2,0.0,0.6,(MethodInfo *)0x0);
      (this->fields).availableVerticalThrustTime = fVar2;
    }
  }
  else {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (_UNK_? <= fVar2 - (this->fields).stoppedJumpingTime) {
      fVar2 = (this->fields).availableVerticalThrustTime;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                        (fVar2 - fVar4,0.0,0.6,(MethodInfo *)0x0);
      (this->fields).availableVerticalThrustTime = fVar2;
      if (fVar2 != 0.0) {
        (this->fields).isVerticalThrusting = 1;
        if ((this->fields).wasJumping == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                             ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffe8,*pVVar5,(this->fields).jumpForce,
                              (MethodInfo *)0x0);
          uVar6 = pVVar5->y;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffe8,*pVVar5,*pVVar5,(MethodInfo *)0x0);
          uVar7 = *(undefined8 *)pVVar5;
          fVar2 = pVVar5->z;
          (this->fields).wasJumping = 1;
          *(undefined8 *)uVar6 = uVar7;
          *(float *)(uVar6 + 8) = fVar2;
          return (Vector3 *)uVar6;
        }
        (this->fields).wasJumping = 1;
        __return_storage_ptr__->x = velocity.x;
        __return_storage_ptr__->y = velocity.y;
        __return_storage_ptr__->z = velocity.z;
        return __return_storage_ptr__;
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stoppedJumpingTime = fVar2;
      (this->fields).wasJumping = 0;
    }
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Vector3 HoverCraftFrictionXZ(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HoverCraftFrictionXZ
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = velocity.z;
  _ppppuStack_28 = (ulonglong)(uint)velocity.x;
  fVar2 = (float10)func_?(&ppppuStack_28,0);
  if ((float)fVar2 < _UNK_?) {
    __return_storage_ptr__->x = (float)(int)((ulonglong)(uint)velocity.y << 0x20);
    __return_storage_ptr__->y = (float)(int)(((ulonglong)(uint)velocity.y << 0x20) >> 0x20);
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  fVar3 = (float)fVar2 / (this->fields).magnitudeDivider;
  puVar4 = (undefined8 *)func_?(&stack0xffffffcc,&ppppuStack_28,0);
  uVar5 = (undefined4)*puVar4;
  uVar6 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  fVar7 = *(float *)(puVar4 + 1);
  fVar3 = _UNK_? / (fVar3 + _UNK_?);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar8.y = (float)uVar6;
  VVar8.x = (float)uVar5;
  VVar8.z = fVar7;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffcc,VVar8,fVar3,(MethodInfo *)0x0);
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffcc,*pVVar9,(this->fields).frictionFactor,
                      (MethodInfo *)0x0);
  uVar5 = pVVar9->y;
  fVar7 = pVVar9->z;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  pVVar10 = (Vector3 *)&stack0xffffffcc;
  ppppuStack_28 = (undefined4 ****)&UNK_?;
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = uVar5;
  auVar11._8_4_ = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
            (pVVar10,(Vector3)(auVar11 << 0x20),fVar3,(MethodInfo *)0x0);
  __return_storage_ptr__ = (Vector3 *)&stack0xffffffe4;
  fVar2 = (float10)func_?();
  pppppuVar11 = &ppppuStack_28;
  pVVar9 = (Vector3 *)0x0;
  fVar7 = (float)fVar2;
  pVVar12 = (Vector3 *)&UNK_?;
  fVar2 = (float10)func_?();
  if ((float)fVar2 < fVar7) {
    __return_storage_ptr__ = pVVar12;
    pppppuVar11 = (undefined4 *****)ppppuStack_28;
    pVVar9 = pVVar10;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  fVar13 = (float)pVVar9;
  a.y = velocity.y;
  a.x = velocity.x;
  a.z = fVar1;
  VVar8.x = (float)pppppuVar11;
  VVar8 = (Vector3)CONCAT84(uVar14,VVar8.x);
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&velocity,a,VVar8,(MethodInfo *)0x0);
  fVar7 = pVVar10->y;
  fVar1 = pVVar10->z;
  __return_storage_ptr__->x = pVVar10->x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 HullRotationDrag(Vector3, Single, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HullRotationDrag
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocityNormal,
                    float velocitySquareMagnitude,float hullRotationFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = velocityNormal.z;
  velocityNormal.y = 0.0;
  uStack_2 = (ulonglong)(uint)velocityNormal.x;
  __return_storage_ptr__ = (Vector3 *)velocityNormal.z;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&uStack_2,0);
  this_00 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (this_00 != (MvCharacterController *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
      fVar4 = pQVar3->x;
      fVar5 = pQVar3->y;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      puVar6 = &UNK_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                         ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
      uVar8._0_4_ = pVVar7->x;
      uVar8._4_4_ = pVVar7->y;
      fVar9 = pVVar7->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      rotation.y = fVar5;
      rotation.x = fVar4;
      rotation.z = (float)puVar6;
      rotation.w = (float)uVar8;
      VVar10.z = fVar9;
      VVar10.x = (float)(int)uVar8;
      VVar10.y = (float)(int)((ulonglong)uVar8 >> 0x20);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffdc,rotation,VVar10,(MethodInfo *)0x0);
      fVar11 = (float)uStack_2;
      fVar12 = (float)(int)(uStack_2 >> 0x20);
      uStack_2 = CONCAT44(&UNK_?,fVar11);
      VVar10 = (Vector3)CONCAT84(uVar13,fVar11);
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                        (*pVVar7,VVar10,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      uVar14 = SUB84((double)fVar4,0) & _UNK_?;
      uVar15 = (uint)((ulonglong)(double)fVar4 >> 0x20) & _UNK_?;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      fVar5 = velocityNormal.y;
      fVar4 = velocityNormal.x;
      velocityNormal.z = velocityNormal.x;
      velocityNormal.x = (float)&UNK_?;
      a.y = velocityNormal.y;
      a.x = fVar4;
      a.z = fVar1;
      velocityNormal.y = (float)&velocityNormal;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&velocityNormal,a,
                          (float)((uint)((float)(double)CONCAT44(uVar15,uVar14) * hullRotationFactor)
                                 ^ _UNK_?),(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&velocityNormal,*pVVar7,fVar5,(MethodInfo *)0x0);
      fVar4 = pVVar7->y;
      fVar1 = pVVar7->z;
      __return_storage_ptr__->x = pVVar7->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar1;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar16)();
  return pVVar7;
}


/* Void Init(SmoothCharacterController, VehicleInteractable) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Init
               (HoverCraftMotor *this,SmoothCharacterController *characterController,
               VehicleInteractable *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
            ((SimpleVehicleMotorBase *)this,characterController,interactableLocal,(MethodInfo *)0x0)
  ;
  pBVar1 = (BounceState *)func_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor(pBVar1,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
  (this->fields).bounceState = pBVar1;
  if (characterController != (SmoothCharacterController *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                        characterController,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      pOVar3 = pOVar2[0xc].klass;
      pBVar1 = (this->fields).bounceState;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)pBVar1,
                 MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,
                 MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__)
      ;
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pOVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((Action_1_MVControllerColliderHit___Class *)pDVar5->klass ==
            TypeInfo__System__Action<MVControllerColliderHit>) {
          pDVar6 = pDVar5;
        }
        if (pDVar6 == (Delegate *)0x0) goto code_?;
      }
      _UNK_? = pDVar6;
      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0,
                          (MethodInfo *)0x0);
      pOVar2 = pORam00000048;
      if (pOVar7 != (Object *)0x0) {
        pOVar3 = pOVar7[0xc].klass;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,pOVar2,MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,
                   MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                  );
        pOVar8 = (Object__Class *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pOVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pOVar3 = (Object__Class *)0x0;
        if (pOVar8 == (Object__Class *)0x0) {
code_?:
          pOVar7[0xc].klass = pOVar3;
          uRam_? = 0x3fa66666;
          return;
        }
        if ((Action_1_MVControllerColliderHit___Class *)(pOVar8->_0).image ==
            TypeInfo__System__Action<MVControllerColliderHit>) {
          pOVar3 = pOVar8;
        }
        if (pOVar3 != (Object__Class *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Move(Vector3, Vector3) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Move
               (HoverCraftMotor *this,Vector3 velocity,Vector3 basevelocity,MethodInfo *method)

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
       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime((MethodInfo *)0x0);
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


/* Vector3 PlatformerDriftCorrection(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_PlatformerDriftCorrection
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocity,
                    Vector3 targetDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = velocity._0_8_ & 0xffffffff;
  func_?(&stack0xffffffdc,0);
  func_?(&stack0xffffffdc,0);
  fVar2 = (float)uVar1;
  fVar3 = (float)(uVar1 >> 0x20);
  fVar4 = (this->fields).driftCorrectionRotation;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (&VStack_6,(MethodInfo *)0x0);
  v1.y = fVar3;
  v1.x = fVar2;
  v1.z = velocity.z;
  v2.y = targetDir.y;
  v2.x = targetDir.x;
  v2.z = targetDir.z;
  fVar2 = MathFunctions::MathFunctions_SignedAngle_1(v1,v2,*pVVar5,(MethodInfo *)0x0);
  targetDir.z = fVar2 * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar2 = (float)(double)CONCAT44((uint)((ulonglong)(double)targetDir.z >> 0x20) & _UNK_?,
                                  SUB84((double)targetDir.z,0) & _UNK_?);
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  if (fVar7 * fVar4 <= fVar2) {
    fVar2 = fVar7 * fVar4;
  }
  fVar4 = _UNK_?;
  if (targetDir.z < 0.0) {
    fVar4 = _UNK_?;
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  fVar7 = 0.0;
  VStack_6.z = (float)&UNK_?;
  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffffc0,0.0,fVar4 * fVar2,0.0,(MethodInfo *)0x0);
  point.y = fVar3;
  point.x = fVar7;
  point.z = velocity.z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe8,*pQVar8,point,(MethodInfo *)0x0);
  uVar9 = pVVar5->x;
  fVar4 = pVVar5->z;
  targetDir.y = (float)uVar9;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    targetDir.z = (float)&UNK_?;
    func_?();
  }
  targetDir.x = fVar7;
  a.y = targetDir.x;
  a.x = targetDir.y;
  a.z = fVar4;
  targetDir.z = targetDir.x;
  targetDir.y = fVar4;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&targetDir,a,targetDir.z,(MethodInfo *)0x0);
  uVar10 = pVVar5->x;
  fVar4 = pVVar5->z;
  __return_storage_ptr__->x = (float)uVar10;
  __return_storage_ptr__->y = (float)&targetDir;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void Reset() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Reset
               (HoverCraftMotor *this,MethodInfo *method)

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
    (this->fields).velocityPrevFrame.x = pVVar2->x;
    (this->fields).velocityPrevFrame.y = fVar3;
    (this->fields).velocityPrevFrame.z = fVar4;
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


/* Vector3 RotateTowardsAroundY(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_RotateTowardsAroundY
                    (Vector3 *__return_storage_ptr__,Vector3 vec,Vector3 target,float speedInDegrees
                    ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = vec.z;
  v1.y = vec.y;
  v1.x = vec.x;
  v1.z = vec.z;
  fStack_4 = MathFunctions::MathFunctions_SignedAngle_1(v1,target,*pVVar1,(MethodInfo *)0x0);
  fStack_4 = fStack_4 * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    vec.z = (float)TypeInfo__UnityEngine__Mathf;
    vec.y = (float)&UNK_?;
    func_?();
  }
  vec.z = 0.0;
  fVar5 = (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_4 >> 0x20) & _UNK_?,
                                  SUB84((double)fStack_4,0) & _UNK_?);
  vec.y = (float)&UNK_?;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  if (fVar6 * speedInDegrees <= fVar5) {
    fVar5 = fVar6 * speedInDegrees;
  }
  speedInDegrees = _UNK_?;
  if (fStack_4 < 0.0) {
    speedInDegrees = _UNK_?;
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    vec.z = (float)&UNK_?;
    func_?();
  }
  vec.y = speedInDegrees * fVar5;
  vec.z = 0.0;
  vec.x = 0.0;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffffe8,0.0,vec.y,0.0,(MethodInfo *)0x0);
  vec.z = pQVar7->y;
  point.y = vec.y;
  point.x = vec.x;
  point.z = fVar3;
  vec.x = (float)&vec;
  vec.y = pQVar7->x;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&vec,*pQVar7,point,(MethodInfo *)0x0);
  _UNK_? = pVVar1->x;
  _UNK_? = pVVar1->y;
  _UNK_? = pVVar1->z;
  return (Vector3 *)&UNK_?;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_SuspendImpactDamage
               (HoverCraftMotor *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_3,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (pIVar1->fields).prevVelocityChangeVector.x = pVVar2->x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar4;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar5;
    (pIVar1->fields).collidedPrevFrame = 0;
    return;
  }
  VStack_3.z = 0.0;
  VStack_3.y = (float)&UNK_?;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).velocityPrevFrame.x;
  fVar2 = (this->fields).velocityPrevFrame.y;
  fVar3 = (this->fields).velocityPrevFrame.z;
  this_00 = (this->fields)._.movableMotorState;
  fVar4 = (this->fields).velocityPrevFrame.x;
  fVar5 = (this->fields).velocityPrevFrame.y;
  pMVar6 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  this_03 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                      ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (this_03 != (MvCharacterController *)0x0) {
    fVar7 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
            Object,System::Single]::
            Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                        *)this_03,(MethodInfo *)0x0);
    if (this_00 != (MVMovableMotorState *)0x0) {
      fVar8 = 0.0;
      groundState = (this->fields)._._.groundState;
      uVar9._4_4_ = (float)&stack0xffffffc4;
      uVar9._0_4_ = (float)groundState;
      velocity.y = fVar5;
      velocity.x = fVar4;
      velocity.z = fVar3;
      bVar10 = MVMovableMotorState::MVMovableMotorState_Move
                         (this_00,velocity,pMVar6,fVar7,groundState,(Vector3 *)&stack0xffffffc4,
                          (MethodInfo *)0x0);
      fVar4 = 0.0;
      uVar11 = CONCAT44(this,(Vector3 *)&stack0xffffffe4);
      velocity_00.y = fVar2;
      velocity_00.x = fVar1;
      velocity_00.z = fVar3;
      baseVelocity.z = fVar8;
      baseVelocity.x = (float)uVar9;
      baseVelocity.y = SUB84(uVar9,4);
      pVVar12 = HoverCraftMotor_GetVehicleVelocity
                          ((Vector3 *)&stack0xffffffe4,this,velocity_00,baseVelocity,
                           (MethodInfo *)0x0);
      puVar13 = puStack14;
      if (bVar10 == 0) {
        method = (MethodInfo *)uVar9;
        fVar15 = SUB84(uVar9,4);
        fVar8 = pVVar12->x;
        uVar16 = pVVar12->y;
        uVar17 = CONCAT44(pVVar12->z,uVar16);
      }
      else {
        fVar3 = pVVar12->x;
        fVar7 = pVVar12->y;
        fVar1 = pVVar12->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          puVar13 = puStack14;
        }
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                            ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
        uVar18 = pVVar12->x;
        fVar15 = pVVar12->y;
        puStack14 = (undefined *)pVVar12->z;
        uVar17 = CONCAT44(fVar1,fVar7);
        method = (MethodInfo *)uVar18;
        fVar8 = fVar3;
      }
      this = (HoverCraftMotor *)((ulonglong)uVar17 >> 0x20);
      basevelocity.y = fVar15;
      basevelocity.x = (float)method;
      basevelocity.z = (float)puStack14;
      HoverCraftMotor_Move(this_02,(Vector3)CONCAT84(uVar17,fVar8),basevelocity,(MethodInfo *)0x0);
      pMVar6 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
                          ((SimpleVehicleMotorBase *)this_02,(MethodInfo *)0x0);
      if (pMVar6 != (MvCharacterController *)0x0) {
        pVVar12 = MvCharacterController::MvCharacterController_get_Velocity
                            ((Vector3 *)&stack0xffffffe4,pMVar6,(MethodInfo *)0x0);
        fVar19 = pVVar12->x;
        fVar20 = pVVar12->y;
        fVar1 = pVVar12->z;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                          ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.y = fVar20;
        a.x = fVar19;
        a.z = fVar1;
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                            ((Vector3 *)&stack0xffffffe4,a,fVar2,(MethodInfo *)0x0);
        uVar21._0_4_ = pVVar12->x;
        uVar21._4_4_ = pVVar12->y;
        fVar1 = pVVar12->z;
        (this_02->fields).velocityPrevFrame.x = (float)uVar21;
        (this_02->fields).velocityPrevFrame.y = uVar21._4_4_;
        (this_02->fields).velocityPrevFrame.z = fVar1;
        if (bVar10 == 0) {
          fVar2 = (float)uVar9;
          fVar5 = SUB84(uVar9,4);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar9._4_4_ = fVar5;
            uVar9._0_4_ = fVar2;
          }
          a_00.z = fVar1;
          a_00.x = (float)(int)uVar21;
          a_00.y = (float)(int)((ulonglong)uVar21 >> 0x20);
          b.z = (float)puVar13;
          b.x = (float)uVar9;
          b.y = SUB84(uVar9,4);
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffd8,a_00,b,(MethodInfo *)0x0);
          fVar2 = pVVar12->y;
          fVar1 = pVVar12->z;
          (this_02->fields).velocityPrevFrame.x = pVVar12->x;
          (this_02->fields).velocityPrevFrame.y = fVar2;
          (this_02->fields).velocityPrevFrame.z = fVar1;
        }
        this_01 = (this_02->fields).impactState;
        if (this_01 != (ImpactState *)0x0) {
          prevVelocity.z = fVar4;
          prevVelocity.x = (float)(int)uVar11;
          prevVelocity.y = (float)(int)((ulonglong)uVar11 >> 0x20);
          fStack22 =
               ImpactState::ImpactState_UpdateImpactState
                         (this_01,(this_02->fields).velocityPrevFrame,prevVelocity,
                          (this_02->fields)._.interactableLocal,(MethodInfo *)0x0);
          if (fStack22 != _UNK_?) {
            pMStack23 = (this_02->fields)._.interactableLocal;
            if (pMStack23 == (MVInteractableBase *)0x0) goto code_?;
            pIStack24 = (pMStack23->klass->vtable).__unknown_1.methodPtr;
            uStack25 = 5;
            uStack26 = 0;
            (*(code *)(pMStack23->klass->vtable).__unknown.method)();
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Vector3 VerticalDrag(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_VerticalDrag
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocityNormal,
                    float velocitySquareMagnitude,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  velocityNormal.x = 0.0;
  velocityNormal.z = 0.0;
  if ((0.0 < velocityNormal.y) && ((this->fields).isVerticalThrusting == 0)) {
    velocityNormal.y = velocityNormal.y * (this->fields).dragCoefficentUp;
  }
  if ((velocityNormal.y <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
    velocityNormal.y = (this->fields).dragCoefficentDown * velocityNormal.y;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = velocityNormal.y;
  a.x = velocityNormal.x;
  a.z = velocityNormal.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&velocityNormal,a,velocitySquareMagnitude,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Single WaterProximity() */

float Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_WaterProximity
                (HoverCraftMotor *this,MethodInfo *method)

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


/* Vector3 XZDrag(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_XZDrag
                    (Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 velocityNormal,
                    float velocitySquareMagnitude,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  velocityNormal.y = 0.0;
  fVar1 = (this->fields).dragCoefficientXZ;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = velocityNormal.y;
  a.x = velocityNormal.x;
  a.z = velocityNormal.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&velocityNormal,a,fVar1,(MethodInfo *)0x0);
  velocityNormal.y = 0.0;
  velocityNormal.x = velocitySquareMagnitude;
  uVar3 = pVVar2->y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&velocityNormal,*pVVar2,velocitySquareMagnitude,(MethodInfo *)0x0);
  fVar1 = pVVar2->z;
  *(undefined8 *)uVar3 = *(undefined8 *)pVVar2;
  *(float *)(uVar3 + 8) = fVar1;
  return (Vector3 *)uVar3;
}


/* HoverCraftMotor() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor__ctor
               (HoverCraftMotor *this,MethodInfo *method)

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
  (this->fields).thrustFactor = 15000.0;
  (this->fields).dragCoefficientXZ = -2.0;
  (this->fields).dragCoefficentUp = 10.0;
  (this->fields).dragCoefficentDown = -50.0;
  (this->fields).mass = 330.0;
  (this->fields).angularSpeed = 3.4;
  (this->fields).waterProximityThresshold = 0.01;
  (this->fields).waterDownVelocity = 50.0;
  (this->fields).waterOffset = -0.6;
  (this->fields).magnitudeDivider = 8.0;
  (this->fields).frictionFactor = 10.0;
  (this->fields).hullRotationFactorClassic = 20.0;
  (this->fields).maxUnderWaterYMovement = 40.0;
  (this->fields).recalibrateCameraFactor = 1.25;
  (this->fields).driftCorrectionRotation = 10.0;
  (this->fields).availableVerticalThrustTime = 0.6;
  (this->fields).regenerationFactor = 0.6;
  (this->fields).jumpForce = 4.0;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (MVComponent__Class *)func_?();
  MVGroundState::MVGroundState__ctor((MVGroundState *)this_01,(MethodInfo *)0x0);
  in_stack_2[1].klass = this_01;
  in_stack_2[1].monitor = (MonitorData *)0x3f800000;
  in_stack_2[1].fields._._._._.m_CachedPtr = (void *)0x3f800000;
  in_stack_2[1].fields.findWorldObjectParent = 1;
  this_02 = (MVWorldObjectClient *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_02,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  in_stack_2[1].fields.worldObjectParent = this_02;
  MVComponent::MVComponent__ctor(in_stack_2,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_get_IsMovementLocked
               (HoverCraftMotor *this,MethodInfo *method)

{
  return (this->fields)._IsMovementLocked_k__BackingField;
}


/* IVehicleCamera get_VehicleCamera() */

IVehicleCamera *
Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
          (HoverCraftMotor *this,MethodInfo *method)

{
  return (this->fields)._VehicleCamera_k__BackingField;
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


/* Void set_VehicleCamera(IVehicleCamera) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_set_VehicleCamera
               (HoverCraftMotor *this,IVehicleCamera *value,MethodInfo *method)

{
  (this->fields)._VehicleCamera_k__BackingField = value;
  return;
}

