
/* Vector3 ApplyInputVelocityChange() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = &(this->fields).velocity;
  fVar2 = (float10)func_?(pVVar1,0);
  fVar3 = (float10)func_?(&stack0xffffffdc,0);
  fVar4 = (this->fields).speedSmoothing;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 * fVar4;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                     ((float)fVar2,(float)fVar3,fVar5,(MethodInfo *)0x0);
  pVVar6 = (Vector3 *)func_?(&puStack_7,&stack0xffffffd0,0);
  VVar8 = *pVVar6;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffc4,VVar8,fVar4,(MethodInfo *)0x0);
  uVar9._0_4_ = pVVar1->x;
  uVar9._4_4_ = pVVar1->y;
  VVar8 = *pVVar6;
  fVar4 = (this->fields).velocity.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  b.z = fVar4;
  b.x = (float)(int)uVar9;
  b.y = (float)(int)((ulonglong)uVar9 >> 0x20);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffc4,VVar8,b,(MethodInfo *)0x0);
  pMVar10 = (this->fields).interactable;
  VVar8 = *pVVar6;
  if (pMVar10 != (MVInteractableBase *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar10->klass->vtable).__unknown_5.method)();
    fVar4 = MathFunctions::MathFunctions_Pow2((float)fVar2,(MethodInfo *)0x0);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffc4,VVar8,fVar4,(MethodInfo *)0x0);
    fStack11 = (this->fields).velocity.z;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffc4,*pVVar1,*pVVar6,(MethodInfo *)0x0);
    fVar5 = pVVar6->y;
    fVar4 = pVVar6->z;
    pVVar1->x = pVVar6->x;
    pVVar1->y = fVar5;
    (this->fields).velocity.z = fVar4;
    return (Vector3 *)&stack0xffffffc4;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar12)();
  return pVVar1;
}


/* Void FixedUpdateFunction() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).velocity.x;
  uVar2 = (this->fields).velocity.y;
  pMVar3 = (this->fields).interactable;
  fVar4 = (this->fields).velocity.z;
  if (pMVar3 != (MVInteractableBase *)0x0) {
    uVar5 = uVar1;
    uVar6 = uVar2;
    fVar7 = (float10)(*(code *)(pMVar3->klass->vtable).__unknown_5.method)
                                (pMVar3,0xc,(this->fields).ghostFriction,
                                 (pMVar3->klass->vtable).__unknown_6.methodPtr);
    fVar8 = MathFunctions::MathFunctions_Pow2((float)fVar7,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    VVar9.y = (float)uVar6;
    VVar9.x = (float)uVar5;
    VVar9.z = fVar4;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_11,VVar9,fVar8,(MethodInfo *)0x0);
    uVar5 = pVVar10->x;
    uVar12 = pVVar10->y;
    fVar8 = pVVar10->z;
    d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    a.y = (float)uVar12;
    a.x = (float)uVar5;
    a.z = fVar8;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_11,a,d,(MethodInfo *)0x0);
    a_00.y = (float)uVar2;
    a_00.x = (float)uVar1;
    a_00.z = fVar4;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_11,a_00,*pVVar10,(MethodInfo *)0x0);
    fVar8 = pVVar10->y;
    fVar4 = pVVar10->z;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = fVar8;
    (this->fields).velocity.z = fVar4;
    pVVar10 = AdvancedGhostMotor_ApplyInputVelocityChange(&VStack_11,this,(MethodInfo *)0x0);
    fVar8 = pVVar10->y;
    fVar4 = pVVar10->z;
    VVar9 = *pVVar10;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = fVar8;
    (this->fields).velocity.z = fVar4;
    pVVar10 = MVRigidBody::MVRigidBody_GetImpulse
                        (&VStack_11,(MVRigidBody *)this,VVar9,pMVar3,(MethodInfo *)0x0);
    fVar8 = pVVar10->y;
    fVar4 = pVVar10->z;
    VVar9 = *pVVar10;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = fVar8;
    (this->fields).velocity.z = fVar4;
    MVRigidBody::MVRigidBody_VelocityDamping(&VStack_11,VVar9,1.0,pMVar3,(MethodInfo *)0x0);
    uVar6 = (this->fields).velocity.x;
    uVar13 = (this->fields).velocity.y;
    fVar4 = (this->fields).velocity.z;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_01.y = (float)uVar13;
    a_01.x = (float)uVar6;
    a_01.z = fVar4;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_11,a_01,fVar8,(MethodInfo *)0x0);
    this_00 = (this->fields).targetTransform;
    uVar14 = pVVar10->x;
    uVar15 = pVVar10->y;
    fVar4 = pVVar10->z;
    if (this_00 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_11,this_00,(MethodInfo *)0x0);
      b.y = (float)uVar15;
      b.x = (float)uVar14;
      b.z = fVar4;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_11,*pVVar10,b,(MethodInfo *)0x0);
      VStack_11.z = (float)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,*pVVar10,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void FixedUpdateRotation() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    VStack_3.y = (this->fields).prevLocalPosition.x;
    VStack_3.z = (this->fields).prevLocalPosition.y;
    uVar4._0_4_ = pVVar2->x;
    uVar4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    fVar6 = (this->fields).prevLocalPosition.z;
    fStack_7 = (float)(undefined4)uVar4;
    fStack_8 = (float)uVar4._4_4_;
    uStack_9 = uVar4;
    fStack_10 = fVar5;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      uVar4 = CONCAT44(fStack_8,fStack_7);
    }
    a_00.z = fVar5;
    a_00.x = (float)(int)uVar4;
    a_00.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    b_00.z = fVar6;
    b_00.x = VStack_3.y;
    b_00.y = VStack_3.z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              (&VStack_3,a_00,b_00,(MethodInfo *)0x0);
    fVar11 = (float10)func_?(&stack0xffffffc8);
    fVar5 = (this->fields).minDeltaPos;
    if (fVar5 * fVar5 < (float)fVar11) {
      VStack_3.y = (this->fields).prevLocalPosition.x;
      VStack_3.z = (this->fields).prevLocalPosition.y;
      fVar5 = (this->fields).prevLocalPosition.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      fVar6 = fStack_10;
      a_01.z = fStack_10;
      a_01.x = (float)(undefined4)uStack_9;
      a_01.y = (float)uStack_9._4_4_;
      b_01.z = fVar5;
      b_01.x = VStack_3.y;
      b_01.y = VStack_3.z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                (&VStack_3,a_01,b_01,(MethodInfo *)0x0);
      puVar12 = (undefined8 *)func_?();
      VStack_3._4_8_ = *puVar12;
      fVar5 = *(float *)(puVar12 + 1);
      fStack_13 = VStack_3.y;
      fStack_7 = VStack_3.z;
      (this->fields).prevLocalPosition.x = (float)(undefined4)uStack_9;
      (this->fields).prevLocalPosition.y = (float)uStack_9._4_4_;
      (this->fields).prevLocalPosition.z = fVar6;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      if ((float)(double)CONCAT44((uint)((ulonglong)(double)fStack_7 >> 0x20) & _UNK_?,
                                  SUB84((double)fStack_7,0) & _UNK_?) < _UNK_?) {
        pTVar1 = (this->fields).targetTransform;
        if (pTVar1 != (Transform *)0x0) {
          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                             ((Quaternion *)&stack0xffffffac,pTVar1,(MethodInfo *)0x0);
          fStack_15 = pQVar14->x;
          fStack_13 = pQVar14->y;
          fStack_7 = pQVar14->z;
          fStack_8 = pQVar14->w;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          forward.z = fVar5;
          forward.x = VStack_3.y;
          forward.y = VStack_3.z;
          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                             ((Quaternion *)&stack0xffffffac,forward,(MethodInfo *)0x0);
          fVar5 = pQVar14->x;
          fVar6 = pQVar14->y;
          fVar16 = pQVar14->z;
          fVar17 = pQVar14->w;
          fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
          a.y = fStack_13;
          a.x = fStack_15;
          a.z = fStack_7;
          a.w = fStack_8;
          b.y = fVar6;
          b.x = fVar5;
          b.z = fVar16;
          b.w = fVar17;
          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                             ((Quaternion *)&stack0xffffffac,a,b,
                              (fVar18 / _UNK_?) * _UNK_?,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar1,*pQVar14,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void FrameUpdate() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FrameUpdate
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  this_01 = (this->fields).smoothPhysicsMovement;
  if (this_01 == (SmoothPhysicsMovement *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar4 = (this_01->fields).packages;
      if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_01->fields).current = pSVar6;
    }
    if ((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this_01->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar4 = (this_01->fields).packages;
      if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_01->fields).next = pSVar6;
    }
  }
  if (((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     (pSVar6 = (this_01->fields).next, pSVar6 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar2 - fVar3 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (this_01->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar7 = (pSVar6->fields).time;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar8 = ((fVar2 - fVar3) - fVar7) / fVar8;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      pSVar6 = (this_01->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      pSVar10 = (this_01->fields).next;
      VVar11 = (pSVar6->fields).position;
      if (pSVar10 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar12._0_4_ = (pSVar10->fields).position.x;
      uVar12._4_4_ = (pSVar10->fields).position.y;
      fVar2 = (pSVar10->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_01.z = fVar2;
      b_01.x = (float)uVar12;
      b_01.y = SUB84(uVar12,4);
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          ((Vector3 *)&stack0xffffffdc,VVar11,b_01,fVar8,(MethodInfo *)0x0);
      if (pTVar9 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar9,*pVVar13,(MethodInfo *)0x0);
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      pSVar6 = (this_01->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar2 = (pSVar6->fields).rotation.x;
      fVar3 = (pSVar6->fields).rotation.y;
      fVar7 = (pSVar6->fields).rotation.z;
      fVar14 = (pSVar6->fields).rotation.w;
      pSVar6 = (this_01->fields).next;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar15 = (pSVar6->fields).rotation.x;
      puVar16 = (undefined *)(pSVar6->fields).rotation.y;
      pQVar17 = (Quaternion__Class *)(pSVar6->fields).rotation.z;
      fVar18 = (pSVar6->fields).rotation.w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar16 = &UNK_?;
        pQVar17 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a_00.y = fVar3;
      a_00.x = fVar2;
      a_00.z = fVar7;
      a_00.w = fVar14;
      b_00.y = (float)puVar16;
      b_00.x = fVar15;
      b_00.z = (float)pQVar17;
      b_00.w = fVar18;
      pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffd8,a_00,b_00,fVar8,(MethodInfo *)0x0);
      if (pTVar9 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar9,*pQVar19,(MethodInfo *)0x0);
      pMVar20 = (this_01->fields).worldObjectOwner;
      if (pMVar20 != (MVWorldObjectClient *)0x0) {
        pSVar6 = (this_01->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        VVar11 = (pSVar6->fields).position;
        pSVar6 = (this_01->fields).next;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar21._0_4_ = (pSVar6->fields).position.x;
        uVar21._4_4_ = (pSVar6->fields).position.y;
        fVar2 = (pSVar6->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uVar21._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        b_02.z = fVar2;
        b_02.x = (float)uVar21;
        b_02.y = SUB84(uVar21,4);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffdc,VVar11,b_02,fVar8,(MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClient *)0x0) break;
        uVar22 = pVVar13->x;
        (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)(pMVar20,uVar22);
        pSVar6 = (this_01->fields).current;
        pMVar20 = (this_01->fields).worldObjectOwner;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar6->fields).rotation.x;
        fVar3 = (pSVar6->fields).rotation.y;
        fVar7 = (pSVar6->fields).rotation.z;
        fVar14 = (pSVar6->fields).rotation.w;
        pSVar6 = (this_01->fields).next;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar15 = (pSVar6->fields).rotation.x;
        puVar16 = (undefined *)(pSVar6->fields).rotation.y;
        pQVar17 = (Quaternion__Class *)(pSVar6->fields).rotation.z;
        fVar18 = (pSVar6->fields).rotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar16 = &UNK_?;
          pQVar17 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        a.y = fVar3;
        a.x = fVar2;
        a.z = fVar7;
        a.w = fVar14;
        b.y = (float)puVar16;
        b.x = fVar15;
        b.z = (float)pQVar17;
        b.w = fVar18;
        pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd8,a,b,fVar8,(MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar20,*pQVar19,(MethodInfo *)0x0);
      }
      this_00 = (this_01->fields).cullingSubscriberBase;
      if (this_00 == (CullingSubscriberBase *)0x0) {
        return;
      }
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      if ((pTVar9 != (Transform *)0x0) &&
         (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0),
         this_00 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_00,*pVVar13,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if ((int)pIVar5 < 1) goto code_?;
    (this_01->fields).current = (this_01->fields).next;
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar4,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    (this_01->fields).next = pSVar6;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  fVar3 = (float10)func_?(&(this->fields).velocity,0);
  fStack_2 = (this->fields)._MoveDirection_k__BackingField.z;
  uStack_1._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_1._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fVar4 = (float10)func_?(&uStack_1,0);
  fStack_5 = (this->fields).speedSmoothing;
  uStack_6 = CONCAT44((float)fVar4,(undefined4)uStack_6);
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fStack_5 = fVar7 * fStack_5;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    ((float)fVar3,uStack_6._4_4_,fStack_5,(MethodInfo *)0x0);
  puVar9 = (undefined8 *)func_?(&stack0xffffffcc,&stack0xffffffd8,0);
  uStack_6 = *puVar9;
  fVar7 = *(float *)(puVar9 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar7;
  a.x = (float)(undefined4)uStack_6;
  a.y = uStack_6._4_4_;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffcc,a,fVar8,(MethodInfo *)0x0);
  fVar8 = pVVar10->y;
  fVar7 = pVVar10->z;
  __return_storage_ptr__->x = pVVar10->x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar7;
  return __return_storage_ptr__;
}


/* Void Init(GameObject, MVInteractableBase, CullingSubscriberBase) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Init
               (AdvancedGhostMotor *this,GameObject *ghostBehaviour,MVInteractableBase *interactable
               ,CullingSubscriberBase *cullingSubscriberBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.weight = 0.7;
  (this->fields).interactable = interactable;
  if (ghostBehaviour != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (ghostBehaviour,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
      uVar3 = pVVar2->y;
      (this->fields).baseHeight = (float)uVar3;
      pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)ghostBehaviour,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar4,StringLiteral__physics,(MethodInfo *)0x0);
      this_00 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,pSVar4,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (ghostBehaviour,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar5,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar1,pTVar5,(MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (ghostBehaviour,(MethodInfo *)0x0);
            if (pTVar5 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffe4,pTVar5,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,*pVVar2,(MethodInfo *)0x0);
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(this_00,(MethodInfo *)0x0);
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(ghostBehaviour,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation
                                     ((Quaternion *)&puStack_7,pTVar5,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar1,*pQVar6,(MethodInfo *)0x0);
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(this_00,(MethodInfo *)0x0);
                    (this->fields).targetTransform = pTVar1;
                    this_01 = (SmoothPhysicsMovement *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_85
                                        (ghostBehaviour,
                                         SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                        );
                    (this->fields).smoothPhysicsMovement = this_01;
                    if (this_01 != (SmoothPhysicsMovement *)0x0) {
                      SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                                (this_01,(this->fields).targetTransform,cullingSubscriberBase,
                                 (MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
                      return;
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
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Move
               (AdvancedGhostMotor *this,Vector3 velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar2.y = velocity.y;
  VVar2.x = velocity.x;
  VVar2.z = velocity.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffec,VVar2,fVar1,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  fVar1 = pVVar3->z;
  this_00 = (this->fields).targetTransform;
  velocity.y = (float)uVar4;
  velocity.z = (float)uVar5;
  if (this_00 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    velocity.x = 0.0;
    this = (AdvancedGhostMotor *)fVar1;
    fVar6 = velocity.z;
    VVar2.x = velocity.y;
    VVar2 = (Vector3)CONCAT84(uVar7,VVar2.x);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&velocity,*pVVar3,VVar2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Reset
               (AdvancedGhostMotor *this,Vector3 velocity,MethodInfo *method)

{
  MVRigidBody::MVRigidBody_Reset((MVRigidBody *)this,(MethodInfo *)0x0);
  (this->fields).velocity.x = velocity.x;
  (this->fields).velocity.y = velocity.y;
  (this->fields).velocity.z = velocity.z;
  this_00 = (this->fields).smoothPhysicsMovement;
  if (this_00 != (SmoothPhysicsMovement *)0x0) {
    SmoothPhysicsMovement::SmoothPhysicsMovement_Reset(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateVelocity() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_UpdateVelocity
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).velocity.x;
  uVar2 = (this->fields).velocity.y;
  pMVar3 = (this->fields).interactable;
  fVar4 = (this->fields).velocity.z;
  if (pMVar3 != (MVInteractableBase *)0x0) {
    fVar5 = (float10)(*(code *)(pMVar3->klass->vtable).__unknown_5.method)
                                (pMVar3,0xc,(this->fields).ghostFriction,
                                 (pMVar3->klass->vtable).__unknown_6.methodPtr);
    fVar6 = MathFunctions::MathFunctions_Pow2((float)fVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    VVar7.y = (float)uVar2;
    VVar7.x = (float)uVar1;
    VVar7.z = fVar4;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe0,VVar7,fVar6,(MethodInfo *)0x0);
    uVar9 = pVVar8->y;
    fVar6 = pVVar8->z;
    d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    auVar10._4_4_ = fVar6;
    auVar10._0_4_ = uVar9;
    auVar10._8_4_ = 0;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe0,(Vector3)(auVar10 << 0x20),d,(MethodInfo *)0x0);
    a.y = d;
    a.x = fVar6;
    a.z = fVar4;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe0,a,*pVVar8,(MethodInfo *)0x0);
    fVar6 = pVVar8->y;
    fVar4 = pVVar8->z;
    (this->fields).velocity.x = pVVar8->x;
    (this->fields).velocity.y = fVar6;
    (this->fields).velocity.z = fVar4;
    pVVar8 = AdvancedGhostMotor_ApplyInputVelocityChange
                       ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
    fVar6 = pVVar8->y;
    fVar4 = pVVar8->z;
    VVar7 = *pVVar8;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar8->x;
    (this->fields).velocity.y = fVar6;
    (this->fields).velocity.z = fVar4;
    pVVar8 = MVRigidBody::MVRigidBody_GetImpulse
                       ((Vector3 *)&stack0xffffffe0,(MVRigidBody *)this,VVar7,pMVar3,
                        (MethodInfo *)0x0);
    fVar6 = pVVar8->y;
    fVar4 = pVVar8->z;
    VVar7 = *pVVar8;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar8->x;
    (this->fields).velocity.y = fVar6;
    (this->fields).velocity.z = fVar4;
    MVRigidBody::MVRigidBody_VelocityDamping
              ((Vector3 *)&stack0xffffffe0,VVar7,1.0,pMVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* AdvancedGhostMotor() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor__ctor
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  (this->fields).ghostFriction = 0.2;
  (this->fields).minDeltaPos = 0.01;
  (this->fields).speedSmoothing = 5.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVGroundState *)func_?(TypeInfo__MVGroundState);
  MVGroundState::MVGroundState__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.groundState = this_00;
  (this->fields)._.weight = 1.0;
  (this->fields)._.density = 1.0;
  (this->fields)._.isPlayerControlled = 1;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._.impulseVectors = (List_1_UnityEngine_Vector3_ *)this_01;
  MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_Grounded
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  this_00 = (this->fields).targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->y;
    return (float)uVar3 <= (this->fields).baseHeight;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_IsMovementLocked
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields).velocity.y;
  fVar2 = (this->fields).velocity.z;
  __return_storage_ptr__->x = (this->fields).velocity.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_set_IsMovementLocked
               (AdvancedGhostMotor *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_MoveDirection(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_set_MoveDirection
               (AdvancedGhostMotor *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._MoveDirection_k__BackingField.x = value.x;
  (this->fields)._MoveDirection_k__BackingField.y = value.y;
  (this->fields)._MoveDirection_k__BackingField.z = value.z;
  return;
}

