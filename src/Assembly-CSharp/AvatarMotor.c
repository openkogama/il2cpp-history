
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 inputDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = inputDirection.z;
  VVar2.y = inputDirection.y;
  VVar2.x = inputDirection.x;
  VVar2.z = inputDirection.z;
  fVar3 = AvatarMotor_GetSpeed(this,(this->fields).speed,VVar2,(MethodInfo *)0x0);
  (this->fields).speed = fVar3;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_01.y = inputDirection.y;
  a_01.x = inputDirection.x;
  a_01.z = fVar1;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&inputDirection,a_01,fVar3,(MethodInfo *)0x0);
  fVar1 = pVVar4->z;
  puVar5 = &stack0xffffffd4;
  puVar6 = &UNK_?;
  fVar7 = (float10)func_?();
  if ((float)fVar7 != 0.0) {
    inputDirection.z = velocity.z;
    func_?();
    inputDirection.z = (float)puVar5;
    inputDirection.y = (float)puVar6;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_02.y = inputDirection.z;
    a_02.x = inputDirection.y;
    a_02.z = fVar1;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&inputDirection,a_02,3.0,(MethodInfo *)0x0);
    method_00 = pVVar4->x;
    uVar8 = pVVar4->y;
    VVar2 = *pVVar4;
    puVar6 = &UNK_?;
    inputDirection.z =
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                   ((MethodInfo *)method_00);
    velocity.y = fVar1;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&inputDirection,VVar2,inputDirection.z,(MethodInfo *)0x0);
    uVar9 = pVVar4->x;
    uVar10 = pVVar4->y;
    a.y = (float)puVar6;
    a.x = velocity.y;
    a.z = velocity.z;
    inputDirection.x = velocity.z;
    inputDirection.y = (float)uVar9;
    inputDirection.z = (float)uVar10;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&inputDirection,a,*pVVar4,(MethodInfo *)0x0);
    uVar11 = pVVar4->x;
    fVar1 = pVVar4->y;
    velocity.z = pVVar4->z;
    inputDirection.z = (float)&UNK_?;
    velocity.x = (float)uVar11;
    fVar7 = (float10)func_?();
    inputDirection.z = (float)fVar7;
    __return_storage_ptr__ = (Vector3 *)uVar8;
    if ((3.1087025e-29 < inputDirection.z) &&
       (pfVar12 = &(this->fields).speed, *pfVar12 <= inputDirection.z && inputDirection.z != *pfVar12))
    {
      fVar3 = velocity.x;
      fVar1 = fVar1;
      func_?();
      inputDirection.z = fVar1;
      inputDirection.y = fVar3;
      uVar13 = CONCAT44(inputDirection.z,inputDirection.y);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
        uVar13 = CONCAT44(inputDirection.z,inputDirection.y);
      }
      a_00.z = velocity.z;
      a_00.x = (float)(int)uVar13;
      a_00.y = (float)(int)((ulonglong)uVar13 >> 0x20);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&inputDirection,a_00,3.1087025e-29,(MethodInfo *)0x0);
      uVar14 = pVVar4->x;
      velocity.z = pVVar4->z;
      velocity.x = (float)uVar14;
    }
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Vector3 ApplyInputVelocityChangeGrounded(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChangeGrounded
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 inputDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).speed;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = inputDirection.z;
  inputDirection_00.y = inputDirection.y;
  inputDirection_00.x = inputDirection.x;
  inputDirection_00.z = inputDirection.z;
  fVar1 = AvatarMotor_GetSpeed(this,fVar1,inputDirection_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&UNK_?;
  puVar3 = (undefined8 *)func_?(&stack0xffffffd8,&(this->fields).velocityPrevFrame,0);
  fVar4 = (float)((ulonglong)*puVar3 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (this->fields).slopeSpeedMultiplier;
  if (this_00 != (AnimationCurve *)0x0) {
    dVar5 = (double)fVar4;
    func_?();
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (this_00,(float)dVar5 * _UNK_?,method_00);
    (this->fields).speed = fVar4 * fVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_03.y = inputDirection.y;
    a_03.x = inputDirection.x;
    a_03.z = fVar2;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffd8,a_03,fVar4 * fVar1,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    uVar8 = pVVar6->y;
    fVar1 = pVVar6->z;
    this_01 = (this->fields)._.groundState;
    inputDirection.y = (float)uVar7;
    inputDirection.z = (float)uVar8;
    if (this_01 != (MVGroundState *)0x0) {
      pVVar6 = SentryGunBeam::SentryGunBeam_get_StartPosition
                          ((Vector3 *)&stack0xffffffd8,(SentryGunBeam *)this_01,(MethodInfo *)0x0);
      hVelocity.y = inputDirection.z;
      hVelocity.x = inputDirection.y;
      hVelocity.z = fVar1;
      pVVar6 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                          (&inputDirection,hVelocity,*pVVar6,(MethodInfo *)0x0);
      uVar9 = pVVar6->x;
      uVar10 = pVVar6->y;
      puVar11 = &UNK_?;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          (&inputDirection,*pVVar6,velocity,(MethodInfo *)0x0);
      uVar12 = pVVar6->x;
      uVar13 = pVVar6->y;
      fVar1 = pVVar6->z;
      inputDirection.z = AvatarMotor_get_FrictionCoefficient(this,(MethodInfo *)0x0);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar2 = fVar2 * inputDirection.z;
      a.y = (float)uVar13;
      a.x = (float)uVar12;
      inputDirection.z = (float)&UNK_?;
      a.z = fVar1;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          (&inputDirection,a,fVar2 / _UNK_?,(MethodInfo *)0x0);
      auVar14._8_4_ = 0;
      auVar14._0_8_ = velocity._4_8_;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffd8,(Vector3)(auVar14 << 0x20),*pVVar6,
                           (MethodInfo *)0x0);
      uVar15 = pVVar6->x;
      uVar16 = pVVar6->y;
      fVar1 = pVVar6->z;
      inputDirection.y = (float)uVar15;
      inputDirection.z = (float)uVar16;
      fVar2 = AvatarMotor_get_FrictionCoefficient(this,(MethodInfo *)0x0);
      if (fVar2 < _UNK_?) {
        fVar17 = (float10)func_?();
        if ((float)fVar17 != _UNK_?) {
          uVar18 = CONCAT44(uVar10,uVar9);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar18 = CONCAT44(uVar10,uVar9);
          }
          a_00.z = (float)puVar11;
          a_00.x = (float)(int)uVar18;
          a_00.y = (float)(int)((ulonglong)uVar18 >> 0x20);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffffd8,a_00,0.5,(MethodInfo *)0x0);
          uVar19 = pVVar6->x;
          uVar20 = pVVar6->y;
          fVar2 = pVVar6->z;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          a_01.y = (float)uVar20;
          a_01.x = (float)uVar19;
          a_01.z = fVar2;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffffd8,a_01,fVar4,(MethodInfo *)0x0);
          a_02.y = inputDirection.z;
          a_02.x = inputDirection.y;
          a_02.z = fVar1;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              (&inputDirection,a_02,*pVVar6,(MethodInfo *)0x0);
          _UNK_? = pVVar6->x;
          _UNK_? = pVVar6->y;
          _UNK_? = pVVar6->z;
          return (Vector3 *)&UNK_?;
        }
      }
      _UNK_? = CONCAT44(inputDirection.z,inputDirection.y);
      _UNK_? = fVar1;
      return (Vector3 *)&UNK_?;
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar21)();
  return pVVar6;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_DealImpactDamage
               (AvatarMotor *this,Vector3 curVelocity,Vector3 prevVelocity,MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 != (ImpactState *)0x0) {
    fVar1 = ImpactState::ImpactState_UpdateImpactState
                      (this_00,curVelocity,prevVelocity,
                       (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
    if (fVar1 != _UNK_?) {
      pAVar2 = (this->fields).interactableLocal;
      if (pAVar2 == (AvatarInteractable *)0x0) goto code_?;
      (*(code *)(pAVar2->klass->vtable).TakeDamage.method)();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdateFunction(IMotorAPI) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_FixedUpdateFunction
               (AvatarMotor *this,IMotorAPI *motorApi,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  puVar2 = (undefined *)0x0;
  fVar3 = 0.0;
  cVar4 = (*(code *)(this->klass->vtable).get_IsMovementLocked.method)
                     (this,(this->klass->vtable).set_IsMovementLocked.methodPtr);
  if (cVar4 != '\0') {
    return;
  }
  pSVar5 = (this->fields).smoothCharacterController;
  if (((pSVar5 != (SmoothCharacterController *)0x0) &&
      (pCVar6 = (Component_1 *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar5,
                            (MethodInfo *)0x0), pCVar6 != (Component_1 *)0x0)) &&
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          (pCVar6,(MethodInfo *)0x0), motorApi != (IMotorAPI *)0x0)) {
    pIVar8 = motorApi->klass;
    uVar9 = 0;
    uVar10._0_1_ = (pIVar8->_1).rank;
    uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
    if (uVar10 != 0) {
      do {
        if (pIVar8->interfaceOffsets[uVar9].interfaceType == (Il2CppClass *)TypeInfo__IMotorAPI) {
          ppMVar11 = &(&(pIVar8->vtable).get_Rotation)[pIVar8->interfaceOffsets[uVar9].offset].
                      method;
          goto code_?;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    ppMVar11 = (MethodInfo **)func_?(motorApi,TypeInfo__IMotorAPI);
code_?:
    pQVar12 = (Quaternion *)(*(code *)*ppMVar11)(&stack0xffffffb0,motorApi);
    if (pTVar7 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar7,*pQVar12,(MethodInfo *)0x0);
      uVar13 = (this->fields).velocityPrevFrame.y;
      fVar14 = (this->fields).velocityPrevFrame.z;
      method_00 = (MethodInfo *)(this->fields).movableMotorState;
      VVar15 = (this->fields).velocityPrevFrame;
      pSVar5 = (this->fields).smoothCharacterController;
      if (pSVar5 != (SmoothCharacterController *)0x0) {
        pMVar16 = (MvCharacterController *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar5,
                             (MethodInfo *)0x0);
        pSVar5 = (this->fields).smoothCharacterController;
        if (((pSVar5 != (SmoothCharacterController *)0x0) &&
            (this_05 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                        *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pSVar5,(MethodInfo *)0x0),
            this_05 !=
            (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)0x0)) &&
           (fVar17 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]
                     ::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                               (this_05,(MethodInfo *)0x0), method_00 != (MethodInfo *)0x0)) {
          puVar18 = &UNK_?;
          bVar19 = MVMovableMotorState::MVMovableMotorState_Move
                             ((MVMovableMotorState *)method_00,VVar15,pMVar16,fVar17,
                              (this->fields)._.groundState,(Vector3 *)&stack0xffffffc0,
                              (MethodInfo *)0x0);
          VVar15.y = (float)puVar2;
          VVar15.x = fVar1;
          inputJump = func_?(4,TypeInfo__IMotorAPI);
          pIVar8 = motorApi->klass;
          uVar10 = 0;
          sVar20._0_1_ = (pIVar8->_1).rank;
          sVar20._1_1_ = (pIVar8->_1).minimumAlignment;
          if (sVar20 != 0) {
            do {
              if (pIVar8->interfaceOffsets[uVar10].interfaceType ==
                  (Il2CppClass *)TypeInfo__IMotorAPI) {
                ppMVar11 = &(&(motorApi->klass->vtable).get_Direction)
                            [pIVar8->interfaceOffsets[uVar10].offset].method;
                goto code_?;
              }
              uVar10 = uVar10 + 1;
              uVar9._0_1_ = (motorApi->klass->_1).rank;
              uVar9._1_1_ = (motorApi->klass->_1).minimumAlignment;
            } while (uVar10 < uVar9);
          }
          ppMVar11 = (MethodInfo **)func_?();
code_?:
          velocity.y = (float)uVar13;
          velocity.x = (float)ppMVar11[1];
          puVar21 = &stack0xffffffb4;
          pVVar22 = (Vector3__Class *)&UNK_?;
          pVVar23 = (Vector3 *)(*(code *)*ppMVar11)();
          velocity.z = fVar14;
          VVar15.z = fVar3;
          pVVar23 = AvatarMotor_GetVelocity
                              ((Vector3 *)&stack0xffffffb4,this,velocity,VVar15,inputJump,*pVVar23,
                               (MethodInfo *)0x0);
          pVVar24 = pVVar22;
          if (bVar19 == 0) {
            uVar25 = 0;
            uVar26 = pVVar23->y;
            fVar3 = pVVar23->z;
            puVar27 = puVar2;
          }
          else {
            fVar3 = pVVar23->x;
            uVar28 = pVVar23->y;
            puVar27 = (undefined *)pVVar23->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
              pVVar24 = pVVar22;
            }
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
            pVVar22 = (Vector3__Class *)pVVar23->x;
            uVar25 = pVVar23->y;
            puVar18 = (undefined *)pVVar23->z;
            method_00 = (MethodInfo *)0x0;
            uVar26 = uVar28;
          }
          velocity_00.y = (float)uVar26;
          velocity_00.x = fVar3;
          velocity_00.z = (float)puVar27;
          movableVelocity.y = (float)uVar25;
          movableVelocity.x = (float)pVVar22;
          movableVelocity.z = (float)puVar18;
          AvatarMotor_Move(this,velocity_00,movableVelocity,method_00);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar5 = (this->fields).smoothCharacterController;
          if ((pSVar5 != (SmoothCharacterController *)0x0) &&
             (pMVar16 = (MvCharacterController *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pSVar5,(MethodInfo *)0x0),
             pMVar16 != (MvCharacterController *)0x0)) {
            pVVar23 = MvCharacterController::MvCharacterController_get_Velocity
                                ((Vector3 *)&stack0xffffffb4,pMVar16,(MethodInfo *)0x0);
            VVar15 = *pVVar23;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                              ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              puVar2 = &UNK_?;
              pVVar24 = TypeInfo__UnityEngine__Vector3;
              func_?();
            }
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                ((Vector3 *)&stack0xffffffb4,VVar15,fVar3,(MethodInfo *)0x0);
            fVar17 = pVVar23->y;
            fVar3 = pVVar23->z;
            VVar15 = *pVVar23;
            (this->fields).velocityPrevFrame.x = pVVar23->x;
            (this->fields).velocityPrevFrame.y = fVar17;
            (this->fields).velocityPrevFrame.z = fVar3;
            if (bVar19 == 0) {
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              b.y = (float)puVar2;
              b.x = fVar1;
              b.z = (float)pVVar24;
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xffffffb4,VVar15,b,(MethodInfo *)0x0);
              fVar3 = pVVar23->y;
              fVar1 = pVVar23->z;
              (this->fields).velocityPrevFrame.x = pVVar23->x;
              (this->fields).velocityPrevFrame.y = fVar3;
              (this->fields).velocityPrevFrame.z = fVar1;
            }
            this_00 = (this->fields).impactState;
            if (this_00 != (ImpactState *)0x0) {
              prevVelocity.y = (float)motorApi;
              prevVelocity.x = (float)puVar21;
              prevVelocity.z = fVar14;
              fVar1 = ImpactState::ImpactState_UpdateImpactState
                                 (this_00,(this->fields).velocityPrevFrame,prevVelocity,
                                  (MVInteractableBase *)(this->fields).interactableLocal,
                                  (MethodInfo *)0x0);
              if (fVar1 != _UNK_?) {
                pAVar29 = (this->fields).interactableLocal;
                if (pAVar29 == (AvatarInteractable *)0x0) goto code_?;
                (*(code *)(pAVar29->klass->vtable).TakeDamage.method)();
              }
              cVar4 = func_?(4,TypeInfo__IMotorAPI);
              this_01 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)
                        (this->fields).bounceState;
              if (this_01 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)0x0) {
                uVar30 = System.Core.dll::System::Linq::
                         Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::
                         Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                                   (this_01,(MethodInfo *)0x0);
                if (((uVar30 != 0) && (cVar4 != '\0')) &&
                   (this_02 = (this->fields).OnActiveBounce,
                   this_02 != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
                  AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                            (this_02,(MethodInfo *)0x0);
                }
                this_03 = (this->fields)._GetSizeState_k__BackingField;
                if (this_03 != (SizeState *)0x0) {
                  SizeState::SizeState_UpdateScale(this_03,(MethodInfo *)0x0);
                  pSVar5 = (this->fields).smoothCharacterController;
                  this_04 = (this->fields).waterState;
                  if (((pSVar5 != (SmoothCharacterController *)0x0) &&
                      (pCVar6 = (Component_1 *)
                                 mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                             *)pSVar5,(MethodInfo *)0x0),
                      pCVar6 != (Component_1 *)0x0)) &&
                     ((pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_transform(pCVar6,(MethodInfo *)0x0),
                      pTVar7 != (Transform *)0x0 &&
                      (pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_position
                                           ((Vector3 *)&stack0xffffffb4,pTVar7,(MethodInfo *)0x0),
                      this_04 != (WaterState *)0x0)))) {
                    WaterState::WaterState_Update
                              (this_04,*pVVar23,
                               (MVInteractableBase *)(this->fields).interactableLocal,
                               (MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Single GetSpeed(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeed
                (AvatarMotor *this,float currentSpeed,Vector3 inputDirection,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).interactableLocal;
  if (pAVar2 != (AvatarInteractable *)0x0) {
    fVar3 = (float10)(*(code *)(pAVar2->klass->vtable).HandleModifierEffect.method)
                               (pAVar2,3,(this->fields).walkSpeed,
                                (pAVar2->klass->vtable).ClearModifiers.methodPtr);
    fVar4 = (this->fields).speedBoostSetting * (float)fVar3;
    fVar5 = (this->fields).currentLerp;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar6 = fVar6 + fVar5;
    fVar5 = (this->fields).lerpTime;
    (this->fields).currentLerp = fVar6;
    if (fVar5 < fVar6) {
      (this->fields).currentLerp = fVar5;
    }
    fVar3 = (float10)func_?(&inputDirection,0,fVar4);
    this = (AvatarMotor *)0x0;
    if ((float)fVar3 == 0.0) {
      (pAVar1->fields).currentLerp = 0.0;
    }
    else {
      this = (AvatarMotor *)(pAVar1->fields).currentLerp;
    }
    fVar5 = (pAVar1->fields).lerpTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    dVar7 = (double)(((float)this / fVar5) * _UNK_? * _UNK_?);
    puVar8 = &UNK_?;
    func_?();
    return (float)dVar7 * (float)puVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  fVar3 = (float10)(*pcVar9)();
  return (float)fVar3;
}


/* Single GetSpeedGrounded(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeedGrounded
                (AvatarMotor *this,float currentSpeed,Vector3 inputDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = AvatarMotor_GetSpeed(this,currentSpeed,inputDirection,(MethodInfo *)0x0);
  puVar2 = (undefined8 *)func_?();
  inputDirection.y = (float)((ulonglong)*puVar2 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (this->fields).slopeSpeedMultiplier;
  method_00 = (MethodInfo *)0x0;
  if (this_00 != (AnimationCurve *)0x0) {
    dVar3 = (double)inputDirection.y;
    func_?();
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(float)dVar3 * _UNK_?,method_00);
    return fVar4 * fVar1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector3 GetVelocity(Vector3, Vector3, Boolean, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetVelocity
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 velocity,
                    Vector3 movableVelocity,bool inputJump,Vector3 inputDirection,MethodInfo *method
                    )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.groundState;
  if (pMVar1 != (MVGroundState *)0x0) {
    bVar2 = MVGroundState::MVGroundState_get_Grounded(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pVVar3 = AvatarMotor_ApplyInputVelocityChange
                         ((Vector3 *)&stack0xffffffd4,this,velocity,inputDirection,(MethodInfo *)0x0
                         );
      pVVar3 = MVRigidBody::MVRigidBody_ApplyGravity
                         ((Vector3 *)&stack0xffffffd4,(MVRigidBody *)this,*pVVar3,
                          (this->fields).velocityPrevFrame,
                          (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      if ((inputJump != 0) && ((float)uVar4._4_4_ < 0.0)) {
        uVar4 = CONCAT44((this->fields).slowFallVelocityMultiplier * (float)uVar4._4_4_,
                          (undefined4)uVar4);
      }
    }
    else {
      pMVar1 = (this->fields)._.groundState;
      if (pMVar1 == (MVGroundState *)0x0) goto code_?;
      pVVar3 = MVGroundState::MVGroundState_ApplySlidingVelocity
                         ((Vector3 *)&stack0xffffffd4,pMVar1,velocity,(this->fields)._.density,
                          (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
      uVar6._0_4_ = (undefined *)pVVar3->x;
      uVar6._4_4_ = (Vector3__Class *)pVVar3->y;
      fVar5 = pVVar3->z;
      uVar4 = uVar6;
      fVar7 = AvatarMotor_get_FrictionCoefficient(this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        uVar6._0_4_ = &UNK_?;
        uVar6._4_4_ = TypeInfo__UnityEngine__Vector3;
        func_?();
      }
      a.y = (float)uVar6._4_4_;
      a.x = (float)(undefined *)uVar6;
      a.z = fVar5;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffd4,a,fVar7,(MethodInfo *)0x0);
      fVar7 = pVVar3->x;
      fVar8 = pVVar3->y;
      fVar9 = pVVar3->z;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      a_00.y = fVar8;
      a_00.x = fVar7;
      a_00.z = fVar9;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffd4,a_00,fVar10,(MethodInfo *)0x0);
      a_01.z = fVar5;
      a_01.x = (float)(int)uVar4;
      a_01.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0xffffffd4,a_01,*pVVar3,(MethodInfo *)0x0);
      pVVar3 = AvatarMotor_ApplyInputVelocityChangeGrounded
                         ((Vector3 *)&stack0xffffffd4,this,*pVVar3,inputDirection,(MethodInfo *)0x0)
      ;
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
    }
    this_00 = (this->fields).bounceState;
    if (this_00 != (BounceState *)0x0) {
      velocity_01.z = fVar5;
      velocity_01.x = (float)(int)uVar4;
      velocity_01.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      pVVar3 = BounceState::BounceState_ApplyBounceVelocity
                         ((Vector3 *)&stack0xffffffe0,this_00,velocity_01,(MethodInfo *)0x0);
      this_01 = (this->fields).jumpState;
      fVar9 = pVVar3->x;
      fVar10 = pVVar3->y;
      fVar7 = pVVar3->z;
      interactableLocal = (this->fields).interactableLocal;
      pMVar1 = (this->fields)._.groundState;
      fVar5 = (this->fields)._.density;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      this_02 = (this->fields).smoothCharacterController;
      if (this_02 != (SmoothCharacterController *)0x0) {
        this_04 = (Component_1 *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                             (MethodInfo *)0x0);
        if (this_04 != (Component_1 *)0x0) {
          this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_04,(MethodInfo *)0x0);
          if (this_05 != (GameObject *)0x0) {
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_05,(MethodInfo *)0x0);
            if (this_06 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffc8,this_06,(MethodInfo *)0x0);
              if (this_03 != (WaterPlaneManager *)0x0) {
                fVar8 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                                  (this_03,*pVVar3,(MethodInfo *)0x0);
                if (this_01 != (JumpState *)0x0) {
                  velocity_00.y = fVar10;
                  velocity_00.x = fVar9;
                  velocity_00.z = fVar7;
                  pVVar3 = JumpState::JumpState_ApplyJumping
                                     ((Vector3 *)&stack0xffffffc8,this_01,
                                      (MVInteractableBase *)interactableLocal,pMVar1,fVar5,fVar8,
                                      inputJump,velocity_00,movableVelocity,(MethodInfo *)0x0);
                  pVVar3 = MVRigidBody::MVRigidBody_GetImpulse
                                     ((Vector3 *)&stack0xffffffc8,(MVRigidBody *)this,*pVVar3,
                                      (MVInteractableBase *)(this->fields).interactableLocal,
                                      (MethodInfo *)0x0);
                  pVVar3 = MVRigidBody::MVRigidBody_VelocityDamping
                                     ((Vector3 *)&stack0xffffffc8,*pVVar3,1.0,
                                      (MVInteractableBase *)(this->fields).interactableLocal,
                                      (MethodInfo *)0x0);
                  uRam_?._0_4_ = pVVar3->x;
                  uRam_?._4_4_ = pVVar3->y;
                  fRam3f800008 = pVVar3->z;
                  return (Vector3 *)0x3f800000;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar11)();
  return pVVar3;
}


/* Void HandleMovementBoost() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_HandleMovementBoost
               (AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).walkSpeed = (this->fields).walkSpeedDefault;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (pOVar1 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                         (this_01,(MethodInfo *)0x0), pOVar1 != (ObjectiveArrow *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_BoostType_System_Object_ *)(pOVar1->fields).arrowOffset.y;
    if (pDVar2 != (Dictionary_2_BoostType_System_Object_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
              Dictionary_2_BoostType_System_Object__ContainsKey
                        (pDVar2,BoostType__Enum_MovementSpeedFloatMultiplier,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                        );
      if (bVar3 == 0) {
        return;
      }
      pDVar2 = (Dictionary_2_BoostType_System_Object_ *)(pOVar1->fields).arrowOffset.y;
      if (pDVar2 != (Dictionary_2_BoostType_System_Object_ *)0x0) {
        this_02 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System
                           ::Object]::Dictionary_2_BoostType_System_Object__get_Item
                                     (pDVar2,BoostType__Enum_MovementSpeedFloatMultiplier,
                                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                     );
        fVar4 = (this->fields).walkSpeedDefault;
        if ((this_02 != (Boost *)0x0) &&
           (pOStack5 = Boost::Boost_get_Value(this_02,(MethodInfo *)0x0),
           pOStack5 != (Object *)0x0)) {
          if ((pOStack5->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar6 = (int *)func_?();
            (this->fields).walkSpeed = ((float)*piVar6 / _UNK_? + _UNK_?) * fVar4;
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleSoundEffects(Boolean) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_HandleSoundEffects
               (AvatarMotor *this,bool inputJump,MethodInfo *method)

{
  this_00 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)(this->fields).bounceState;
  if (this_00 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)0x0) {
    uVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Byte]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                      (this_00,(MethodInfo *)0x0);
    if (((uVar1 != 0) && (inputJump != 0)) &&
       (this_01 = (this->fields).OnActiveBounce,
       this_01 != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
      AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                (this_01,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Init(AvatarInteractable, Vector3, MVWorldObjectClient, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Init
               (AvatarMotor *this,AvatarInteractable *interactableLocal,Vector3 centerOffset,
               MVWorldObjectClient *worldObjectOwner,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  object_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillDataManager == (WorldObjectSkillDataManager *)0x0) {
code_?:
    uVar1 = func_?(0);
  }
  else {
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar3 / _UNK_?;
    }
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (bVar2 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar4 = (float)(100 - iVar3) / _UNK_?;
    }
    if (this == (AvatarMotor *)0x0) goto code_?;
    (this->fields).slowFallVelocityMultiplier = fVar4;
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (bVar2 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      fVar4 = (float)(100 - iVar3) / _UNK_?;
    }
    (this->fields).frictionMultiplier = fVar4;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    pSVar6 = (SmoothCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar5,
                        SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                       );
    (this->fields).smoothCharacterController = pSVar6;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pSVar6 == (SmoothCharacterController *)0x0) goto code_?;
    SmoothCharacterController::SmoothCharacterController_Init
              (pSVar6,pGVar5,(CullingSubscriberBase *)0x0,worldObjectOwner,(MethodInfo *)0x0);
    pSVar6 = (this->fields).smoothCharacterController;
    if ((pSVar6 == (SmoothCharacterController *)0x0) ||
       (pMVar7 = (MvCharacterController *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6,
                            (MethodInfo *)0x0), pMVar7 == (MvCharacterController *)0x0))
    goto code_?;
    MvCharacterController::MvCharacterController_Init
              (pMVar7,0.45,1.9,centerOffset,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar8 == (MVNetworkGame *)0x0) ||
       (pPVar9 = (PrefabPool *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
       pPVar9 == (PrefabPool *)0x0)) goto code_?;
    pOVar10 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar9,(MethodInfo *)0x0)
    ;
    pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar11,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
               (MethodInfo *)0x0);
    if (pOVar10 == (ObjectiveArrow *)0x0) goto code_?;
    BoostController::BoostController_SubscribeToBoostChanged
              ((BoostController *)pOVar10,BoostType__Enum_MovementSpeedFloatMultiplier,
               (Action *)pUVar11,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this->fields).walkSpeed = (this->fields).walkSpeedDefault;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar8 == (MVNetworkGame *)0x0) ||
        (pPVar9 = (PrefabPool *)
                   MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
        pPVar9 == (PrefabPool *)0x0)) ||
       (pOVar10 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (pPVar9,(MethodInfo *)0x0), pOVar10 == (ObjectiveArrow *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar12 = (Dictionary_2_BoostType_System_Object_ *)(pOVar10->fields).arrowOffset.y;
    if (pDVar12 == (Dictionary_2_BoostType_System_Object_ *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
            Dictionary_2_BoostType_System_Object__ContainsKey
                      (pDVar12,BoostType__Enum_MovementSpeedFloatMultiplier,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 == 0) {
code_?:
      this_00 = (object_00->fields)._._.worldObjectParent;
      if (this_00 != (MVWorldObjectClient *)0x0) {
        pHVar13 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                            (this_00,(MethodInfo *)0x0);
        pSVar6 = (object_00->fields).smoothCharacterController;
        if ((pSVar6 != (SmoothCharacterController *)0x0) &&
           (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6,
                                 (MethodInfo *)0x0), pOVar14 != (Object *)0x0)) {
          pOVar14[0xb].monitor = (MonitorData *)pHVar13;
          pSVar6 = (object_00->fields).smoothCharacterController;
          if (pSVar6 != (SmoothCharacterController *)0x0) {
            pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6,
                                 (MethodInfo *)0x0);
            pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar11,pOVar14,MethodInfo__MvCharacterController__GetOverlappingObjects__,
                       MethodInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>__Func_System__Object__void__
                      );
            this_02 = (MVRigidBody_StuckEvaluator *)
                      func_?(TypeInfo__MVRigidBody__StuckEvaluator);
            MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                      (this_02,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)pUVar11,
                       (MethodInfo *)0x0);
            (object_00->fields).stuckEvaluator = this_02;
            this_03 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                      func_?(TypeInfo__MVMovableMotorState);
            WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
            WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_03,(MethodInfo *)0x0);
            (object_00->fields).movableMotorState = (MVMovableMotorState *)this_03;
            (object_00->fields).interactableLocal = interactableLocal;
            pBVar15 = (BounceState *)func_?(TypeInfo__BounceState);
            BounceState::BounceState__ctor
                      (pBVar15,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
            (object_00->fields).bounceState = pBVar15;
            this_04 = (WaterState *)func_?();
            WaterState::WaterState__ctor(this_04,skillDataManager,(MethodInfo *)0x0);
            pSVar6 = (object_00->fields).smoothCharacterController;
            (object_00->fields).waterState = this_04;
            if (pSVar6 != (SmoothCharacterController *)0x0) {
              pMVar7 = (MvCharacterController *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6
                                  ,(MethodInfo *)0x0);
              pSVar16 = (SizeState *)func_?(TypeInfo__SizeState);
              SizeState::SizeState__ctor
                        (pSVar16,(MVInteractable *)interactableLocal,pMVar7,(MethodInfo *)0x0);
              (object_00->fields)._GetSizeState_k__BackingField = pSVar16;
              this_05 = (JumpState *)func_?(TypeInfo__JumpState);
              pJVar17 = this_05;
              JumpState::JumpState__ctor(this_05,0.2,skillDataManager,(MethodInfo *)0x0);
              (object_00->fields).jumpState = this_05;
              if (this_05 != (JumpState *)0x0) {
                a = (this_05->fields).OnWallJump;
                pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(TypeInfo__JumpState__OnWallJumpDelegate);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar11,(Object *)object_00,MethodInfo__AvatarMotor___Init_m__0__,
                           (MethodInfo *)0x0);
                pOVar18 = (Object__Class *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)a,(Delegate *)pUVar11,(MethodInfo *)0x0);
                pOVar19 = (Object__Class *)0x0;
                if (pOVar18 != (Object__Class *)0x0) {
                  if ((JumpState_OnWallJumpDelegate__Class *)(pOVar18->_0).image ==
                      TypeInfo__JumpState__OnWallJumpDelegate) {
                    pOVar19 = pOVar18;
                  }
                  pAVar20 = (Action_1_GroundChange___Class *)TypeInfo__JumpState__OnWallJumpDelegate
                  ;
                  if (pOVar19 == (Object__Class *)0x0) goto code_?;
                }
                (pJVar17->fields).OnWallJump = (JumpState_OnWallJumpDelegate *)pOVar19;
                pMVar21 = (object_00->fields)._.groundState;
                if (pMVar21 != (MVGroundState *)0x0) {
                  a_00 = (pMVar21->fields).OnGroundChange;
                  pJVar17 = (this->fields).jumpState;
                  pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?(TypeInfo__System__Action<GroundChange>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar11,(Object *)pJVar17,
                             MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                             MethodInfo__System__Action<GroundChange>__Action_System__Object__void__
                            );
                  pOVar18 = (Object__Class *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a_00,(Delegate *)pUVar11,(MethodInfo *)0x0);
                  pOVar19 = (Object__Class *)0x0;
                  if (pOVar18 != (Object__Class *)0x0) {
                    if ((Action_1_GroundChange___Class *)(pOVar18->_0).image ==
                        TypeInfo__System__Action<GroundChange>) {
                      pOVar19 = pOVar18;
                    }
                    pAVar20 = TypeInfo__System__Action<GroundChange>;
                    if (pOVar19 == (Object__Class *)0x0) goto code_?;
                  }
                  (pMVar21->fields).OnGroundChange = (Action_1_GroundChange_ *)pOVar19;
                  pSVar6 = (this->fields).smoothCharacterController;
                  if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                     (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)pSVar6,(MethodInfo *)0x0), pOVar14 != (Object *)0x0))
                  {
                    pOVar19 = pOVar14[0xc].klass;
                    pSVar16 = (this->fields)._GetSizeState_k__BackingField;
                    pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?(TypeInfo__System__Action<MVControllerColliderHit>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar11,(Object *)pSVar16,
                               MethodInfo__SizeState__OnScalingWhileColliding_MVControllerColliderHit_
                               ,
                               MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                              );
                    pOVar18 = (Object__Class *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pOVar19,(Delegate *)pUVar11,(MethodInfo *)0x0);
                    pOVar19 = (Object__Class *)0x0;
                    if (pOVar18 != (Object__Class *)0x0) {
                      if ((Action_1_MVControllerColliderHit___Class *)(pOVar18->_0).image ==
                          TypeInfo__System__Action<MVControllerColliderHit>) {
                        pOVar19 = pOVar18;
                      }
                      pAVar20 = (Action_1_GroundChange___Class *)
                                TypeInfo__System__Action<MVControllerColliderHit>;
                      if (pOVar19 == (Object__Class *)0x0) goto code_?;
                    }
                    pOVar14[0xc].klass = pOVar19;
                    pSVar6 = (this->fields).smoothCharacterController;
                    if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                       (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                              *)pSVar6,(MethodInfo *)0x0), pOVar14 != (Object *)0x0)
                       ) {
                      pOVar19 = pOVar14[0xc].klass;
                      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?(TypeInfo__System__Action<MVControllerColliderHit>
                                                  );
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar11,(Object *)interactableLocal,
                                 MethodInfo__AvatarInteractable__HandleMoveHit_MVControllerColliderHit_
                                 ,
                                 MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                                );
                      pOVar18 = (Object__Class *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pOVar19,(Delegate *)pUVar11,(MethodInfo *)0x0
                                          );
                      pOVar19 = (Object__Class *)0x0;
                      if (pOVar18 != (Object__Class *)0x0) {
                        if ((Action_1_MVControllerColliderHit___Class *)(pOVar18->_0).image ==
                            TypeInfo__System__Action<MVControllerColliderHit>) {
                          pOVar19 = pOVar18;
                        }
                        pAVar20 = (Action_1_GroundChange___Class *)
                                  TypeInfo__System__Action<MVControllerColliderHit>;
                        if (pOVar19 == (Object__Class *)0x0) goto code_?;
                      }
                      pOVar14[0xc].klass = pOVar19;
                      pSVar6 = (this->fields).smoothCharacterController;
                      if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                         (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::
                                    Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                *)pSVar6,(MethodInfo *)0x0),
                         pOVar14 != (Object *)0x0)) {
                        pOVar19 = pOVar14[0xc].klass;
                        pJVar17 = (this->fields).jumpState;
                        pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                        ;
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar11,(Object *)pJVar17,
                                   MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_,
                                   MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                                  );
                        pOVar18 = (Object__Class *)
                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pOVar19,(Delegate *)pUVar11,
                                             (MethodInfo *)0x0);
                        pOVar19 = (Object__Class *)0x0;
                        if (pOVar18 != (Object__Class *)0x0) {
                          if ((Action_1_MVControllerColliderHit___Class *)(pOVar18->_0).image ==
                              TypeInfo__System__Action<MVControllerColliderHit>) {
                            pOVar19 = pOVar18;
                          }
                          pAVar20 = (Action_1_GroundChange___Class *)
                                    TypeInfo__System__Action<MVControllerColliderHit>;
                          if (pOVar19 == (Object__Class *)0x0) goto code_?;
                        }
                        pOVar14[0xc].klass = pOVar19;
                        pSVar6 = (this->fields).smoothCharacterController;
                        if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                           (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::
                                      Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  *)pSVar6,(MethodInfo *)0x0),
                           pOVar14 != (Object *)0x0)) {
                          pOVar19 = pOVar14[0xc].klass;
                          pBVar15 = (this->fields).bounceState;
                          pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                     *)func_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                          ;
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (pUVar11,(Object *)pBVar15,
                                     MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_
                                     ,
                                     MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                                    );
                          pOVar18 = (Object__Class *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pOVar19,(Delegate *)pUVar11,
                                               (MethodInfo *)0x0);
                          pOVar19 = (Object__Class *)0x0;
                          if (pOVar18 != (Object__Class *)0x0) {
                            if ((Action_1_MVControllerColliderHit___Class *)(pOVar18->_0).image ==
                                TypeInfo__System__Action<MVControllerColliderHit>) {
                              pOVar19 = pOVar18;
                            }
                            pAVar20 = (Action_1_GroundChange___Class *)
                                      TypeInfo__System__Action<MVControllerColliderHit>;
                            if (pOVar19 == (Object__Class *)0x0) goto code_?;
                          }
                          pOVar14[0xc].klass = pOVar19;
                          pSVar6 = (this->fields).smoothCharacterController;
                          if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                             (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::
                                        Collection`1[Newtonsoft::Json::Serialization::JsonProperty]
                                        ::
                                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                                  ((
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  *)pSVar6,(MethodInfo *)0x0),
                             pOVar14 != (Object *)0x0)) {
                            pOVar19 = pOVar14[0xc].klass;
                            object = (this->fields).impactState;
                            pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                       *)func_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                            ;
                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                            UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                            SceneManagement::Scene]::
                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                      (pUVar11,(Object *)object,
                                       MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_
                                       ,
                                       MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                                      );
                            pOVar18 = (Object__Class *)
                                      mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pOVar19,(Delegate *)pUVar11,
                                                 (MethodInfo *)0x0);
                            pOVar19 = (Object__Class *)0x0;
                            if (pOVar18 == (Object__Class *)0x0) {
code_?:
                              pOVar14[0xc].klass = pOVar19;
                              return;
                            }
                            if ((Action_1_MVControllerColliderHit___Class *)(pOVar18->_0).image ==
                                TypeInfo__System__Action<MVControllerColliderHit>) {
                              pOVar19 = pOVar18;
                            }
                            pAVar20 = (Action_1_GroundChange___Class *)
                                      TypeInfo__System__Action<MVControllerColliderHit>;
                            if (pOVar19 != (Object__Class *)0x0) goto code_?;
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
      goto code_?;
    }
    pDVar12 = (Dictionary_2_BoostType_System_Object_ *)(pOVar10->fields).arrowOffset.y;
    if (pDVar12 == (Dictionary_2_BoostType_System_Object_ *)0x0) goto code_?;
    this_01 = (AvatarMotor *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
              Dictionary_2_BoostType_System_Object__get_Item
                        (pDVar12,BoostType__Enum_MovementSpeedFloatMultiplier,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                        );
    fVar4 = (this->fields).walkSpeedDefault;
    if (this_01 == (AvatarMotor *)0x0) goto code_?;
    interactableLocal = (AvatarInteractable *)0x0;
    pOVar14 = Boost::Boost_get_Value((Boost *)this_01,(MethodInfo *)0x0);
    uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar14);
    if (pOVar14 == (Object *)0x0) goto code_?;
    if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar22 = (int *)func_?();
      (this->fields).walkSpeed = ((float)*piVar22 / _UNK_? + _UNK_?) * fVar4;
      this = this_01;
      goto code_?;
    }
  }
  func_?(uVar1);
  pOVar18 = extraout_ECX;
  pAVar20 = (Action_1_GroundChange___Class *)extraout_EDX;
code_?:
  func_?(pOVar18,pAVar20);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void InitSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_InitSkills
               (AvatarMotor *this,WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar2 / _UNK_?;
    }
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar3 = (float)(100 - iVar2) / _UNK_?;
    }
    if (this != (AvatarMotor *)0x0) {
      (this->fields).slowFallVelocityMultiplier = fVar3;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                          (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
        (this->fields).frictionMultiplier = (float)(100 - iVar2) / _UNK_?;
        return;
      }
      (this->fields).frictionMultiplier = _UNK_?;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsAirJumping() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsAirJumping
               (AvatarMotor *this,MethodInfo *method)

{
  pJVar1 = (this->fields).jumpState;
  if (pJVar1 == (JumpState *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pJVar1->fields).airJumping == 0) {
    return 0;
  }
  (pJVar1->fields).airJumping = 0;
  return 1;
}


/* Boolean IsJumping() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsJumping(AvatarMotor *this,MethodInfo *method)

{
  pJVar1 = (this->fields).jumpState;
  if (pJVar1 != (JumpState *)0x0) {
    return (pJVar1->fields).jumping;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsStuck(AvatarMotor *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckEvaluator;
  if (this_00 == (MVRigidBody_StuckEvaluator *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uStack_1 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff38;
  puVar7 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  pOStack_8 = (Object *)0x0;
  uStack_9 = 0;
  iStack_10 = 0;
  pDStack_11 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_12 = 0;
  iStack_13 = 0;
  iStack_14 = 0;
  fStack_15 = 0.0;
  CStack_16.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_16.monitor = (MonitorData *)0x0;
  CStack_16.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_16.fields.syncRoot = (Object *)0x0;
  pOStack_17 = (Object *)0x0;
  IStack_18.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_18.monitor = (MonitorData *)0x0;
  IStack_18.fields.jump = 0;
  IStack_18.fields.jumpFrameUpdate = 0;
  IStack_18.fields.jumpFixedUpdate = 0;
  IStack_18.fields._3_1_ = 0;
  IStack_18.fields.direction.x = 0.0;
  bStack_19 = 0;
  IStack_18.fields.direction.y = 0.0;
  IStack_18.fields.direction.z = 0.0;
  pDStack_20 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_21 = 0;
  iStack_22 = 0;
  iStack_23 = 0;
  func_?();
  pDStack_24 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
  piStack_25 = (int *)&stack0xffffff38;
  puStack_6 = &stack0xffffff38;
  pDStack_26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((float)pDStack_26 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
    pDVar27 = (this_00->fields).stuckObjects;
    if (pDVar27 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) {
      pOVar28 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)pDVar27,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                         );
      if (pOVar28 != (Object *)0x0) goto code_?;
code_?:
      bStack_19 = 0;
code_?:
      *unaff_FS_OFFSET = uStack_5;
      return bStack_19;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
code_?:
    fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this_00->fields).updateTime = fVar29;
    pDStack_26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                              (this_00,(MethodInfo *)0x0);
    if (pDStack_26 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pDVar30 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this_00->fields).stuckObjects;
      if (pDVar30 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDVar30,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
        goto code_?;
      }
      goto code_?;
    }
    pDVar31 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)func_?();
    pDStack_32 = pDVar31;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)pDVar31,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pDVar27 = (this_00->fields).stuckObjects;
    pDStack_33 = pDVar31;
    if ((pDVar27 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) ||
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                            ),
       this_01 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) goto code_?;
    pDVar34 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                         *)&stack0xffffff48,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                       );
    pDStack_11 = (pDVar34->host_enumerator).dictionary;
    iStack_12 = (pDVar34->host_enumerator).next;
    iStack_13 = (pDVar34->host_enumerator).stamp;
    iStack_14 = (pDVar34->host_enumerator).current.key;
    pOStack_8 = (pDVar34->host_enumerator).current.value;
    uStack_1 = 0;
    while (cVar35 = func_?(), cVar35 != '\0') {
      pMStack_36 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,MVOverlapResult]::Dictionary_2_System_Int32_MVOverlapResult__ContainsKey
                        ((Dictionary_2_System_Int32_MVOverlapResult_ *)pDStack_26,
                         (int32_t)pMStack_36,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        if (pDVar31 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pDVar31,(UIPushOption__Enum)pMStack_36,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    pDVar27 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0;
    pDStack_24 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0;
    *piStack_25 = 0xa4;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_10 != 0) goto code_?;
    if (*piStack_25 == 0xa4) {
      pDVar27 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
      pDStack_24 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
    }
    if (pDStack_32 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    pLVar37 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff4c,
                        (List_1_UnityEngine_Color32_ *)pDStack_32,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_16.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar37->l;
    CStack_16.monitor = (MonitorData *)pLVar37->next;
    CStack_16.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar37->ver;
    CStack_16.fields.syncRoot = (Object *)(pLVar37->current).rgba;
    uStack_1 = 2;
    while (cVar35 = func_?(), piVar38 = piStack_25, cVar35 != '\0') {
      pOVar28 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_16,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                         );
      pDVar30 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this_00->fields).stuckObjects;
      if (pDVar30 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (pDVar30,(int32_t)pOVar28,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                );
    }
    pDVar31 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
             ((int)&pDVar27->klass + 1);
    piStack_25[(int)pDVar31] = 0xe7;
    uStack_1 = 0xffffffff;
    pDStack_32 = pDVar31;
    pDStack_24 = pDVar31;
    func_?();
    if (iStack_10 != 0) goto code_?;
    if (((pDVar31 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff)
        && (piVar38[(int)pDVar31] == 0xe7)) && (-1 < (int)pDVar31)) {
      pDStack_32 = pDVar27;
      pDStack_24 = pDVar27;
    }
    if (pDStack_26 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) goto code_?;
    pDVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
              TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
              Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                          *)&stack0xffffff44,
                         (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                          *)pDStack_26,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                        );
    IStack_18.klass = (InputToPlayerMovementAndroid__Class *)pDVar39->dictionary;
    IStack_18.monitor = (MonitorData *)pDVar39->next;
    IStack_18.fields._0_4_ = pDVar39->stamp;
    IStack_18.fields.direction.x = (float)(pDVar39->current).key.tileX;
    IStack_18.fields.direction._4_8_ = *(undefined8 *)&(pDVar39->current).key.tileZ;
    uStack_1 = 4;
    while (cVar35 = func_?(), piVar38 = piStack_25, pDVar27 = pDStack_32, cVar35 != '\0') {
      pVVar40 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xffffff50,&IStack_18,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                          );
      pDVar27 = (this_00->fields).stuckObjects;
      uStack_9._0_4_ = pVVar40->x;
      uStack_9._4_4_ = pVVar40->y;
      fStack_15 = pVVar40->z;
      iVar41 = func_?();
      if (pDVar27 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
      goto code_?;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar27,iVar41,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        pDStack_33 = (this_00->fields).stuckObjects;
        iStack_42 = func_?();
        overlapResult = (MVOverlapResult)func_?();
        pMStack_36 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
        MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                  (pMStack_36,overlapResult,(MethodInfo *)0x0);
        if (pDStack_33 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDStack_33,iStack_42,
                   (Object *)pMStack_36,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                  );
      }
      else {
        pDVar30 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).stuckObjects;
        iVar41 = func_?();
        if (pDVar30 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        pTVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar30,iVar41,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                            );
        uVar44 = func_?();
        if (pTVar43 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
        (pTVar43->fields).m_patchSize.y = (float)(int)uVar44;
        (pTVar43->fields).m_patchSize.z = (float)(int)((ulonglong)uVar44 >> 0x20);
      }
    }
    pDVar31 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
             ((int)&pDStack_32->klass + 1);
    piStack_25[(int)pDVar31] = 0x174;
    uStack_1 = 0xffffffff;
    pDStack_24 = pDVar31;
    func_?();
    if (iStack_10 == 0) {
      if (((pDVar31 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                      0xffffffff) && (piVar38[(int)pDVar31] == 0x174)) && (-1 < (int)pDVar31)) {
        pDStack_24 = pDVar27;
        pDVar31 = pDVar27;
      }
      if (pDStack_26 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDStack_26,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                  );
        pDVar27 = (this_00->fields).stuckObjects;
        if ((pDVar27 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) &&
           (this_02 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar27,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                ),
           this_02 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          pDVar34 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                               *)&stack0xffffff48,this_02,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          pDStack_20 = (pDVar34->host_enumerator).dictionary;
          iStack_21 = (pDVar34->host_enumerator).next;
          iStack_22 = (pDVar34->host_enumerator).stamp;
          iStack_23 = (pDVar34->host_enumerator).current.key;
          pOStack_17 = (pDVar34->host_enumerator).current.value;
          uStack_1 = 6;
          do {
            cVar35 = func_?();
            if (cVar35 == '\0') {
              piStack_25[(int)((int)&pDVar31->klass + 1)] = 0x1cd;
              goto code_?;
            }
            this_03 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
            if (this_03 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
            fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
          } while ((fVar29 - (this_03->fields).stuckTime < _UNK_?) ||
                  (bVar3 = MVRigidBody+StuckEvaluator+StuckObject::
                           MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                     (this_03,(MethodInfo *)0x0), bVar3 != 0));
          bStack_19 = 1;
          piStack_25[(int)((int)&pDVar31->klass + 1)] = 0x1cf;
code_?:
          piVar38 = piStack_25;
          puVar7 = (undefined1 *)((int)&pDVar31->klass + 1);
          uStack_1 = 0xffffffff;
          func_?();
          if (iStack_10 != 0) goto code_?;
          if ((puVar7 != (undefined1 *)0xffffffff) && (piVar38[(int)puVar7] == 0x1cf))
          goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Move(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Move
               (AvatarMotor *this,Vector3 velocity,Vector3 movableVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).smoothCharacterController;
  if (pSVar1 != (SmoothCharacterController *)0x0) {
    pMVar2 = (MvCharacterController *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                        (MethodInfo *)0x0);
    if (pMVar2 != (MvCharacterController *)0x0) {
      MvCharacterController::MvCharacterController_set_Velocity(pMVar2,velocity,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        uStack_3 = CONCAT44(uStack_3._4_4_,TypeInfo__UnityEngine__Vector3);
        VStack_4.z = (float)&UNK_?;
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         (&VStack_4,velocity,movableVelocity,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar5->x;
      uStack_3._4_4_ = pVVar5->y;
      fVar6 = pVVar5->z;
      d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
      a.z = fVar6;
      a.x = (float)(undefined4)uStack_3;
      a.y = (float)uStack_3._4_4_;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_4,a,d,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar5->x;
      uStack_3._4_4_ = pVVar5->y;
      fVar6 = pVVar5->z;
      pSVar1 = (this->fields).smoothCharacterController;
      if (pSVar1 != (SmoothCharacterController *)0x0) {
        pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                            (MethodInfo *)0x0);
        if (pOVar7 != (Object *)0x0) {
          (*(code *)pOVar7->klass[1]._0.namespaze)
                    (pOVar7,(int)uStack_3,(int)((ulonglong)uStack_3 >> 0x20),fVar6,
                     pOVar7->klass[1]._0.byval_arg.data.dummy);
          pSVar1 = (this->fields).smoothCharacterController;
          this_00 = (this->fields)._.groundState;
          if (pSVar1 != (SmoothCharacterController *)0x0) {
            pMVar2 = (MvCharacterController *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                                (MethodInfo *)0x0);
            if (this_00 != (MVGroundState *)0x0) {
              MVGroundState::MVGroundState_Update(this_00,pMVar2,velocity,0.0,(MethodInfo *)0x0);
              return;
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_OnDestroy(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waterState;
  if (this_00 != (WaterState *)0x0) {
    WaterState::WaterState_Destroy(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).jumpState;
    if (this_01 != (JumpState *)0x0) {
      JumpState::JumpState_Destroy(this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_02 != (MVNetworkGame *)0x0) &&
         (this_03 = (PrefabPool *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
         this_03 != (PrefabPool *)0x0)) {
        this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (this_03,(MethodInfo *)0x0);
        this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_05,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
                   (MethodInfo *)0x0);
        if (this_04 != (ObjectiveArrow *)0x0) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    ((BoostController *)this_04,BoostType__Enum_MovementSpeedFloatMultiplier,
                     (Action *)this_05,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OverrideCharacterController(SmoothCharacterController) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_OverrideCharacterController
               (AvatarMotor *this,SmoothCharacterController *controller,MethodInfo *method)

{
  (this->fields).smoothCharacterController = controller;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Reset(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVRigidBody::MVRigidBody_Reset((MVRigidBody *)this,(MethodInfo *)0x0);
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
    this_00 = (this->fields).smoothCharacterController;
    if (this_00 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController::SmoothCharacterController_Reset(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_SuspendImpactDamage
               (AvatarMotor *this,MethodInfo *method)

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


/* Void UpdateFunction() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_UpdateFunction
               (AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if (pSVar1 == (SmoothCharacterController *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar1->fields).smoothPhysicsMovement;
  if (this_00 == (SmoothPhysicsMovement *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                        ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                        );
    if (0 < (int)pIVar6) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).current = pSVar7;
    }
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                        ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                        );
    if (0 < (int)pIVar6) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).next = pSVar7;
    }
  }
  if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     (pSVar7 = (this_00->fields).next, pSVar7 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar3 - fVar4 < (pSVar7->fields).time) {
code_?:
      pSVar7 = (this_00->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar8 = (pSVar7->fields).time;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar9 = ((fVar3 - fVar4) - fVar8) / fVar9;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pSVar7 = (this_00->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      pSVar11 = (this_00->fields).next;
      VVar12 = (pSVar7->fields).position;
      if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar13._0_4_ = (pSVar11->fields).position.x;
      uVar13._4_4_ = (pSVar11->fields).position.y;
      fVar3 = (pSVar11->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_01.z = fVar3;
      b_01.x = (float)uVar13;
      b_01.y = SUB84(uVar13,4);
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          ((Vector3 *)&stack0xffffffdc,VVar12,b_01,fVar9,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar10,*pVVar14,(MethodInfo *)0x0);
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pSVar7 = (this_00->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar3 = (pSVar7->fields).rotation.x;
      fVar4 = (pSVar7->fields).rotation.y;
      fVar8 = (pSVar7->fields).rotation.z;
      fVar15 = (pSVar7->fields).rotation.w;
      pSVar7 = (this_00->fields).next;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar16 = (pSVar7->fields).rotation.x;
      puVar17 = (undefined *)(pSVar7->fields).rotation.y;
      pQVar18 = (Quaternion__Class *)(pSVar7->fields).rotation.z;
      fVar19 = (pSVar7->fields).rotation.w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar17 = &UNK_?;
        pQVar18 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a_00.y = fVar4;
      a_00.x = fVar3;
      a_00.z = fVar8;
      a_00.w = fVar15;
      b_00.y = (float)puVar17;
      b_00.x = fVar16;
      b_00.z = (float)pQVar18;
      b_00.w = fVar19;
      pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffd8,a_00,b_00,fVar9,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar10,*pQVar20,(MethodInfo *)0x0);
      pMVar21 = (this_00->fields).worldObjectOwner;
      if (pMVar21 != (MVWorldObjectClient *)0x0) {
        pSVar7 = (this_00->fields).current;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        VVar12 = (pSVar7->fields).position;
        pSVar7 = (this_00->fields).next;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar22._0_4_ = (pSVar7->fields).position.x;
        uVar22._4_4_ = (pSVar7->fields).position.y;
        fVar3 = (pSVar7->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uVar22._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        b_02.z = fVar3;
        b_02.x = (float)uVar22;
        b_02.y = SUB84(uVar22,4);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffdc,VVar12,b_02,fVar9,(MethodInfo *)0x0);
        if (pMVar21 == (MVWorldObjectClient *)0x0) break;
        uVar23 = pVVar14->x;
        (*(code *)(pMVar21->klass->vtable).set_WorldPosition.method)(pMVar21,uVar23);
        pSVar7 = (this_00->fields).current;
        pMVar21 = (this_00->fields).worldObjectOwner;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar3 = (pSVar7->fields).rotation.x;
        fVar4 = (pSVar7->fields).rotation.y;
        fVar8 = (pSVar7->fields).rotation.z;
        fVar15 = (pSVar7->fields).rotation.w;
        pSVar7 = (this_00->fields).next;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar16 = (pSVar7->fields).rotation.x;
        puVar17 = (undefined *)(pSVar7->fields).rotation.y;
        pQVar18 = (Quaternion__Class *)(pSVar7->fields).rotation.z;
        fVar19 = (pSVar7->fields).rotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar17 = &UNK_?;
          pQVar18 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        a.y = fVar4;
        a.x = fVar3;
        a.z = fVar8;
        a.w = fVar15;
        b.y = (float)puVar17;
        b.x = fVar16;
        b.z = (float)pQVar18;
        b.w = fVar19;
        pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd8,a,b,fVar9,(MethodInfo *)0x0);
        if (pMVar21 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar21,*pQVar20,(MethodInfo *)0x0);
      }
      this_01 = (this_00->fields).cullingSubscriberBase;
      if (this_01 == (CullingSubscriberBase *)0x0) {
        return;
      }
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((pTVar10 != (Transform *)0x0) &&
         (pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar10,(MethodInfo *)0x0),
         this_01 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_01,*pVVar14,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                        ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                        );
    if ((int)pIVar6 < 1) goto code_?;
    (this_00->fields).current = (this_00->fields).next;
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    (this_00->fields).next = pSVar7;
  } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateVelocity() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_UpdateVelocity
               (AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).smoothCharacterController;
  if (this_00 != (SmoothCharacterController *)0x0) {
    this_01 = (MvCharacterController *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (MvCharacterController *)0x0) {
      pVVar1 = MvCharacterController::MvCharacterController_get_Velocity
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      uVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      auVar5._4_4_ = fVar3;
      auVar5._0_4_ = uVar2;
      auVar5._8_4_ = 0;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                         ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar5 << 0x20),fVar4,
                          (MethodInfo *)0x0);
      fVar4 = pVVar1->y;
      fVar3 = pVVar1->z;
      (this->fields).velocityPrevFrame.x = pVVar1->x;
      (this->fields).velocityPrevFrame.y = fVar4;
      (this->fields).velocityPrevFrame.z = fVar3;
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Init>m__0() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor__Init_m__0(AvatarMotor *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnWallJump;
  if (pAVar1 == (AvatarMotor_OnWallJumpDelegate *)0x0) {
    return;
  }
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(pAVar1->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pcVar2 = (pAVar1->fields)._._.method_ptr;
  this_01 = (pAVar1->fields)._._.method;
  pOVar3 = (pAVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pAVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar6 = func_?(pOVar5);
    if (cVar4 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3);
      return;
    }
    if (cVar6 != '\0') {
      pOVar3 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar3);
      return;
    }
    func_?(this_01->flags,pOVar3);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* AvatarMotor() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor__ctor(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).walkSpeedDefault = 8.0;
  (this->fields).walkSpeed = 8.0;
  keys = (Keyframe__Array *)func_?(TypeInfo__UnityEngine__Keyframe,3);
  uVar1 = 0;
  if (keys == (Keyframe__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,uVar1);
    func_?(uVar2);
  }
  else {
    fStack_3 = 0.0;
    fStack_4 = 0.0;
    fStack_5 = 0.0;
    fStack_6 = 0.0;
    fStack_7 = 0.0;
    uStack_8 = 0;
    func_?(&fStack_4,0xc2b40000,0x3f800000);
    uVar1 = 0;
    if (keys->max_length == 0) goto code_?;
    keys->vector[0].m_Time = fStack_4;
    keys->vector[0].m_Value = fStack_5;
    keys->vector[0].m_InTangent = fStack_6;
    keys->vector[0].m_OutTangent = fStack_7;
    keys->vector[0].m_WeightedMode = (undefined4)uStack_8;
    keys->vector[0].m_InWeight = (float)uStack_8._4_4_;
    keys->vector[0].m_OutWeight = fStack_3;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    fStack_11 = 0.0;
    fStack_12 = 0.0;
    fStack_13 = 0.0;
    uStack_14 = 0;
    func_?(&fStack_9,0,0x3f800000);
    uVar1 = 0;
    if (1 < keys->max_length) {
      keys->vector[1].m_Time = fStack_9;
      keys->vector[1].m_Value = fStack_10;
      keys->vector[1].m_InTangent = fStack_11;
      keys->vector[1].m_OutTangent = fStack_12;
      keys->vector[1].m_WeightedMode = (undefined4)uStack_14;
      keys->vector[1].m_InWeight = (float)uStack_14._4_4_;
      keys->vector[1].m_OutWeight = fStack_13;
      fStack_15 = 0.0;
      fStack_16 = 0.0;
      fStack_17 = 0.0;
      fStack_18 = 0.0;
      fStack_19 = 0.0;
      uStack_20 = 0;
      func_?(&fStack_15,0x42b40000,0x3f800000);
      if (2 < keys->max_length) {
        keys->vector[2].m_Time = fStack_15;
        keys->vector[2].m_Value = fStack_16;
        keys->vector[2].m_InTangent = fStack_17;
        keys->vector[2].m_OutTangent = fStack_18;
        keys->vector[2].m_WeightedMode = (undefined4)uStack_20;
        keys->vector[2].m_InWeight = (float)uStack_20._4_4_;
        keys->vector[2].m_OutWeight = fStack_19;
        this_00 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve);
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor
                  (this_00,keys,(MethodInfo *)0x0);
        (this->fields).slopeSpeedMultiplier = this_00;
        explosionEvents =
             (RuntimeEventType__Enum__Array *)
             func_?(TypeInfo__MV__Common__RuntimeEventType,3);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)explosionEvents,__field_4FBCF37E911813BC544C7C89CE9F8121C8740F1D_Field,
                   (MethodInfo *)0x0);
        this_01 = (ImpactState *)func_?(TypeInfo__ImpactState);
        ImpactState::ImpactState__ctor(this_01,explosionEvents,(MethodInfo *)0x0);
        (this->fields).impactState = this_01;
        (this->fields).speedBoostSetting = 1.0;
        (this->fields).slowFallVelocityMultiplier = 1.0;
        (this->fields).frictionMultiplier = 1.0;
        (this->fields).lerpTime = 0.4;
        MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,uVar1);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* MvCharacterController get_Controller() */

MvCharacterController *
Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_Controller(AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if (pSVar1 != (SmoothCharacterController *)0x0) {
    return (pSVar1->fields).controller;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MvCharacterController *)(*pcVar2)();
  return pMVar3;
}


/* Single get_FrictionCoefficient() */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_FrictionCoefficient
                (AvatarMotor *this,MethodInfo *method)

{
  this_00 = (this->fields)._.groundState;
  pAVar1 = (this->fields).interactableLocal;
  if (this_00 != (MVGroundState *)0x0) {
    this_01 = (MVMaterial *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MVMaterial *)0x0) {
      MVMaterial::MVMaterial_get_PhysicalProperties
                ((PhysicalProperties *)&puStack_2,this_01,(MethodInfo *)0x0);
      if (pAVar1 != (AvatarInteractable *)0x0) {
        puStack_2 = (undefined *)0xc;
        fVar3 = (float10)(*(code *)(pAVar1->klass->vtable).HandleModifierEffect.method)(pAVar1);
        fVar4 = MathFunctions::MathFunctions_Pow2((float)fVar3,(MethodInfo *)0x0);
        return fVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar3 = (float10)(*pcVar5)();
  return (float)fVar3;
}


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_IsMovementLocked
               (AvatarMotor *this,MethodInfo *method)

{
  return (this->fields)._IsMovementLocked_k__BackingField;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).smoothCharacterController;
  if (this_00 != (SmoothCharacterController *)0x0) {
    this_01 = (MvCharacterController *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (MvCharacterController *)0x0) {
      pVVar1 = MvCharacterController::MvCharacterController_get_Velocity
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = 0.0;
      a.x = fVar3;
      a.z = fVar2;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                         ((Vector3 *)&stack0xffffffe8,a,fVar3,(MethodInfo *)0x0);
      fVar3 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_set_IsMovementLocked
               (AvatarMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._IsMovementLocked_k__BackingField = value;
  return;
}

