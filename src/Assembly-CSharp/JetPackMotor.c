
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = JetPackMotor_GetDesiredHorizontalVelocity
                     ((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
  uVar2 = (uint)pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  pMVar5 = (this->fields)._.groundState;
  if (pMVar5 != (MVGroundState *)0x0) {
    bVar6 = MVGroundState::MVGroundState_get_Grounded(pMVar5,(MethodInfo *)0x0);
    if ((bVar6 != 0) && ((this->fields)._Thrust_k__BackingField == 0)) {
      pMVar5 = (this->fields)._.groundState;
      if (pMVar5 == (MVGroundState *)0x0) goto code_?;
      pVVar1 = SentryGunBeam::SentryGunBeam_get_StartPosition
                         ((Vector3 *)&stack0xffffffe8,(SentryGunBeam *)pMVar5,(MethodInfo *)0x0);
      hVelocity.y = 0.0;
      hVelocity.x = (float)uVar2;
      hVelocity.z = fVar4;
      pVVar7 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                          ((Vector3 *)&stack0xffffffe8,hVelocity,*pVVar1,(MethodInfo *)0x0);
      uVar8 = pVVar7->x;
      pVVar1 = (Vector3 *)pVVar7->y;
      fVar4 = pVVar7->z;
      __return_storage_ptr__ = pVVar1;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        baseVelocity.x = (float)TypeInfo__UnityEngine__Vector3;
        func_?();
        __return_storage_ptr__ = pVVar1;
      }
      velocity.y = baseVelocity.y;
      velocity.x = baseVelocity.x;
      velocity.z = baseVelocity.z;
      a.y = (float)__return_storage_ptr__;
      a.x = (float)uVar8;
      a.z = fVar4;
      b.z = baseVelocity.z;
      b.x = baseVelocity.x;
      b.y = baseVelocity.y;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
      uVar9 = pVVar1->x;
      uVar10 = pVVar1->y;
      fVar4 = pVVar1->z;
      uVar2 = uVar9;
      uVar3 = uVar10;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_00.y = (float)uVar3;
    a_00.x = (float)uVar2;
    a_00.z = fVar4;
    b_00.z = velocity.z;
    b_00.x = velocity.x;
    b_00.y = velocity.y;
    fStack11 = fVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe8,a_00,b_00,(MethodInfo *)0x0);
    uVar12 = pVVar1->x;
    uVar13 = pVVar1->y;
    fVar4 = pVVar1->z;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a_01.y = (float)uVar13;
    a_01.x = (float)uVar12;
    a_01.z = fVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe8,a_01,fVar14 / _UNK_?,(MethodInfo *)0x0);
    uVar15 = pVVar1->x;
    uVar16 = pVVar1->y;
    fVar4 = pVVar1->z;
    fVar14 = MathFunctions::MathFunctions_Pow2
                       ((this->fields).HARDCODEDJETPACKAIRFRICTION,(MethodInfo *)0x0);
    a_02.y = (float)uVar16;
    a_02.x = (float)uVar15;
    a_02.z = fVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe8,a_02,fVar14,(MethodInfo *)0x0);
    a_03.z = velocity.z;
    a_03.x = velocity.x;
    a_03.y = velocity.y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,a_03,*pVVar1,(MethodInfo *)0x0);
    fVar14 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar14;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar17)();
  return pVVar1;
}


/* Void ApplyJetImpulse(Single) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_ApplyJetImpulse
               (JetPackMotor *this,float jetpackThrust,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_Velocity.method)
                     (&stack0xffffffe4,this,(this->klass->vtable).get_IsMovementLocked.methodPtr);
  fVar2 = (float)((ulonglong)*puVar1 >> 0x20);
  fVar3 = (this->fields).velocityConstant;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar2,0.0,fVar3,(MethodInfo *)0x0);
  fVar3 = (this->fields).velocityConstant;
  fVar2 = (this->fields).velocityConstant;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar5,jetpackThrust,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar5,(fVar3 - fVar4) / fVar2,(MethodInfo *)0x0)
  ;
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  fVar3 = pVVar5->z;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  a.y = (float)uVar7;
  a.x = (float)uVar6;
  a.z = fVar3;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,a,fVar2,(MethodInfo *)0x0);
  MVRigidBody::MVRigidBody_AddImpulse_1((MVRigidBody *)this,*pVVar5,0,(MethodInfo *)0x0);
  return;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_DealImpactDamage
               (JetPackMotor *this,Vector3 curVelocity,Vector3 prevVelocity,MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 != (ImpactState *)0x0) {
    fVar1 = ImpactState::ImpactState_UpdateImpactState
                      (this_00,curVelocity,prevVelocity,(this->fields).interactable,
                       (MethodInfo *)0x0);
    if (fVar1 != _UNK_?) {
      pMVar2 = (this->fields).interactable;
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


/* Void FixedUpdateFunction(Quaternion, Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_FixedUpdateFunction
               (JetPackMotor *this,Quaternion setQuaternion,bool shouldSetRotation,
               MethodInfo *method)

{
  this_01 = this;
  uVar1 = in_stack_2;
  uVar3 = in_stack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    uVar1 = in_stack_2;
    uVar3 = in_stack_4;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  pSVar5 = (this->fields).smoothController;
  if ((((pSVar5 != (SmoothCharacterController *)0x0) &&
       (pCVar6 = (Component_1 *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar5,
                             (MethodInfo *)0x0), pCVar6 != (Component_1 *)0x0)) &&
      (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar6,(MethodInfo *)0x0), this_03 != (GameObject *)0x0)) &&
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_03,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
    puVar8 = &UNK_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
    if (this_02 != (WaterPlaneManager *)0x0) {
      puVar10 = &UNK_?;
      fVar11 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                        (this_02,*pVVar9,(MethodInfo *)0x0);
      pJVar12 = this->klass;
      (this->fields).waterProximity = fVar11;
      cVar13 = (*(code *)(pJVar12->vtable).get_IsMovementLocked.method)();
      if (cVar13 != '\0') {
        return;
      }
      if (shouldSetRotation != 0) {
        pSVar5 = (this->fields).smoothController;
        if (((pSVar5 == (SmoothCharacterController *)0x0) ||
            (pCVar6 = (Component_1 *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar5
                                  ,(MethodInfo *)0x0), pCVar6 == (Component_1 *)0x0)) ||
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                (pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
        goto code_?;
        puVar8 = (undefined *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar7,setQuaternion,(MethodInfo *)0x0);
      }
      fVar11 = (this->fields).velocityPrevFrame.z;
      this_05 = (this->fields).movableMotorState;
      pSVar5 = (this->fields).smoothController;
      if (pSVar5 != (SmoothCharacterController *)0x0) {
        fVar14 = fVar11;
        pMVar15 = (MvCharacterController *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar5,
                             (MethodInfo *)0x0);
        pSVar5 = (this->fields).smoothController;
        if (((pSVar5 != (SmoothCharacterController *)0x0) &&
            (this_04 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                        *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pSVar5,(MethodInfo *)0x0),
            this_04 !=
            (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)0x0)) &&
           (fVar16 = System.Core.dll::System::Linq::
                    Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]
                    ::
                    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                              (this_04,(MethodInfo *)0x0), this_05 != (MVMovableMotorState *)0x0)) {
          groundState = (this->fields)._.groundState;
          VVar17.y = (float)&stack0xffffffc0;
          VVar17.x = (float)groundState;
          VVar17.z = fVar14;
          bVar18 = MVMovableMotorState::MVMovableMotorState_Move
                             (this_05,VVar17,pMVar15,fVar16,groundState,(Vector3 *)&stack0xffffffc0,
                              (MethodInfo *)0x0);
          this = (JetPackMotor *)fVar11;
          fVar19 = (float)pMVar15;
          puVar20 = &UNK_?;
          VVar17.x = fVar14;
          VVar17 = (Vector3)CONCAT84(uVar21,VVar17.x);
          baseVelocity.y = (float)puVar10;
          baseVelocity.x = (float)puVar8;
          baseVelocity.z = (float)this_02;
          pVVar9 = JetPackMotor_GetVelocity
                              ((Vector3 *)&stack0xffffffe4,this_01,VVar17,baseVelocity,
                               (MethodInfo *)0x0);
          if (bVar18 == 0) {
            uVar22._0_4_ = pVVar9->x;
            uVar22._4_4_ = pVVar9->y;
          }
          else {
            fVar11 = pVVar9->x;
            fVar14 = pVVar9->y;
            in_stack_23 = pVVar9->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
            uVar1 = pVVar9->x;
            uVar3 = pVVar9->y;
            in_stack_24 = pVVar9->z;
            in_stack_25 = (MethodInfo *)0x0;
            uVar22 = CONCAT44(fVar14,fVar11);
          }
          velocity.z = in_stack_23;
          velocity.x = (float)(int)uVar22;
          velocity.y = (float)(int)((ulonglong)uVar22 >> 0x20);
          basevelocity.y = (float)uVar3;
          basevelocity.x = (float)uVar1;
          basevelocity.z = in_stack_24;
          JetPackMotor_Move(this_01,velocity,basevelocity,in_stack_25);
          pSVar5 = (this_01->fields).smoothController;
          if ((pSVar5 != (SmoothCharacterController *)0x0) &&
             (pMVar15 = (MvCharacterController *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pSVar5,(MethodInfo *)0x0),
             pMVar15 != (MvCharacterController *)0x0)) {
            pVVar9 = MvCharacterController::MvCharacterController_get_Velocity
                                ((Vector3 *)&stack0xffffffe4,pMVar15,(MethodInfo *)0x0);
            fVar16 = pVVar9->x;
            fVar26 = pVVar9->y;
            fVar11 = pVVar9->z;
            fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                              ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            fVar27 = 0.0;
            a_00.y = fVar26;
            a_00.x = fVar16;
            a_00.z = fVar11;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                ((Vector3 *)&stack0xffffffe4,a_00,fVar14,(MethodInfo *)0x0);
            uVar28._0_4_ = pVVar9->x;
            uVar28._4_4_ = pVVar9->y;
            fVar11 = pVVar9->z;
            (this_01->fields).velocityPrevFrame.x = (float)uVar28;
            (this_01->fields).velocityPrevFrame.y = uVar28._4_4_;
            (this_01->fields).velocityPrevFrame.z = fVar11;
            if (bVar18 == 0) {
              uVar29._4_4_ = (float)puVar10;
              uVar29._0_4_ = fVar27;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                groundState = (MVGroundState *)&UNK_?;
                func_?();
              }
              a.z = fVar11;
              a.x = (float)(int)uVar28;
              a.y = (float)(int)((ulonglong)uVar28 >> 0x20);
              b.z = (float)this_02;
              b.x = (float)uVar29;
              b.y = SUB84(uVar29,4);
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
              fVar14 = pVVar9->y;
              fVar11 = pVVar9->z;
              (this_01->fields).velocityPrevFrame.x = pVVar9->x;
              (this_01->fields).velocityPrevFrame.y = fVar14;
              (this_01->fields).velocityPrevFrame.z = fVar11;
            }
            this_00 = (this_01->fields).impactState;
            if (this_00 != (ImpactState *)0x0) {
              prevVelocity.y = (float)groundState;
              prevVelocity.x = (float)this_05;
              prevVelocity.z = (float)puVar20;
              fVar11 = ImpactState::ImpactState_UpdateImpactState
                                (this_00,(this_01->fields).velocityPrevFrame,prevVelocity,
                                 (this_01->fields).interactable,(MethodInfo *)0x0);
              if (fVar11 != _UNK_?) {
                pMVar30 = (this_01->fields).interactable;
                if (pMVar30 == (MVInteractableBase *)0x0) goto code_?;
                (*(code *)(pMVar30->klass->vtable).__unknown.method)();
              }
              return;
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


/* Void FrameUpdate() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_FrameUpdate
               (JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
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


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  pMVar4 = (this->fields).interactable;
  fStack_5 = 0.0;
  if (pMVar4 != (MVInteractableBase *)0x0) {
    fVar6 = (float10)(*(code *)(pMVar4->klass->vtable).__unknown_5.method)
                               (pMVar4,3,(this->fields).runSpeed,
                                (pMVar4->klass->vtable).__unknown_6.methodPtr);
    fStack_2 = (this->fields)._InputMoveDirection_k__BackingField.z;
    uStack_1._0_4_ = (this->fields)._InputMoveDirection_k__BackingField.x;
    uStack_1._4_4_ = (this->fields)._InputMoveDirection_k__BackingField.y;
    fStack_7 = (float)fVar6;
    fVar6 = (float10)func_?(&uStack_1,0);
    fStack_8 = (this->fields).speedSmoothing;
    fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
    fStack_10 = (this->fields).speed;
    fStack_8 = fStack_9 * fStack_8;
    fVar11 = (float)fVar6 * fStack_7;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                      (fStack_10,fVar11,fStack_8,(MethodInfo *)0x0);
    fStack_5 = (this->fields)._InputMoveDirection_k__BackingField.z;
    uStack_3._0_4_ = (this->fields)._InputMoveDirection_k__BackingField.x;
    uStack_3._4_4_ = (this->fields)._InputMoveDirection_k__BackingField.y;
    (this->fields).speed = fVar11;
    fVar6 = (float10)func_?(&uStack_3,0);
    if ((float)fVar6 == 0.0) {
      (this->fields).speed = 0.0;
    }
    this_00 = (this->fields)._.groundState;
    if (this_00 != (MVGroundState *)0x0) {
      bVar12 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
      if (bVar12 != 0) {
        puVar13 = (undefined8 *)func_?(&VStack_14,&(this->fields).velocityPrevFrame,0);
        fStack_10 = *(float *)(puVar13 + 1);
        uStack_15 = (undefined4)*puVar13;
        fStack_16 = (float)((ulonglong)*puVar13 >> 0x20);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar11 = (this->fields).speed;
        this_01 = (this->fields).slopeSpeedMultiplier;
        if (this_01 == (AnimationCurve *)0x0) goto code_?;
        dVar17 = (double)fStack_16;
        method_00 = (MethodInfo *)&UNK_?;
        func_?(0);
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,(float)dVar17 * _UNK_?,method_00);
        (this->fields).speed = fVar18 * fVar11;
      }
      uVar19._0_4_ = (this->fields)._InputMoveDirection_k__BackingField.x;
      uVar19._4_4_ = (this->fields)._InputMoveDirection_k__BackingField.y;
      fVar11 = (this->fields).speed;
      fVar18 = (this->fields)._InputMoveDirection_k__BackingField.z;
      fStack_16 = (float)(undefined4)uVar19;
      fStack_10 = (float)uVar19._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
        uVar19 = CONCAT44(fStack_10,fStack_16);
      }
      a.z = fVar18;
      a.x = (float)(int)uVar19;
      a.y = (float)(int)((ulonglong)uVar19 >> 0x20);
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_14,a,fVar11,(MethodInfo *)0x0);
      fVar18 = pVVar20->y;
      fVar11 = pVVar20->z;
      __return_storage_ptr__->x = pVVar20->x;
      __return_storage_ptr__->y = fVar18;
      __return_storage_ptr__->z = fVar11;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?(0);
  pcVar21 = (code *)swi(3);
  pVVar20 = (Vector3 *)(*pcVar21)();
  return pVVar20;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetOverlappingObjects
          (JetPackMotor *this,MethodInfo *method)

{
  this_00 = (this->fields).smoothController;
  if (this_00 != (SmoothCharacterController *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          (in_stack_2,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
        uVar4._0_4_ = in_stack_2[1].monitor;
        uVar4._4_4_ = in_stack_2[1].fields;
        pCVar5 = in_stack_2[2].klass;
        uVar6._0_4_ = pVVar3->x;
        uVar6._4_4_ = pVVar3->y;
        fVar7 = pVVar3->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar7;
        a.x = (float)(int)uVar6;
        a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
        b.z = (float)pCVar5;
        b.x = (float)(int)uVar4;
        b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar3->x;
        uVar8._4_4_ = pVVar3->y;
        fVar7 = pVVar3->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pCVar5 = in_stack_2[3].klass;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                           ((Quaternion *)&stack0xffffffc8,(MethodInfo *)0x0);
        fVar10 = pQVar9->x;
        fVar11 = pQVar9->y;
        fVar12 = pQVar9->z;
        fVar13 = pQVar9->w;
        if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
          uVar8 = CONCAT44((int)(uVar8 >> 0x20),TypeInfo__MvCharacterController);
          func_?();
        }
        ignoreWoIds = in_stack_2[7].fields._.m_CachedPtr;
        layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
        if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
          uVar8 = CONCAT44((int)(uVar8 >> 0x20),TypeInfo__MVElipsoidOverlapCheck);
          func_?();
        }
        radius.y = (float)ignoreWoIds;
        radius.x = (float)layerMask;
        radius.z = (float)pCVar5;
        position.z = fVar7;
        position.x = (float)(int)(uVar8 & 0xffffffff00000000);
        position.y = (float)(int)((uVar8 & 0xffffffff00000000) >> 0x20);
        rotation.y = fVar11;
        rotation.x = fVar10;
        rotation.z = fVar12;
        rotation.w = fVar13;
        pLVar14 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                           (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
        return pLVar14;
      }
      func_?();
      pcVar15 = (code *)swi(3);
      pLVar14 = (List_1_MVOverlapResult_ *)(*pcVar15)();
      return pLVar14;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pLVar14 = (List_1_MVOverlapResult_ *)(*pcVar15)();
  return pLVar14;
}


/* Vector3 GetVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_Pow2
                     ((this->fields).HARDCODEDJETPACKAIRFRICTION,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  uVar2._0_4_ = velocity.z;
  a_07.y = velocity.y;
  a_07.x = velocity.x;
  a_07.z = velocity.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffc8,a_07,fVar1,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar3->x;
  uVar4._4_4_ = pVVar3->y;
  fVar1 = pVVar3->z;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  a_08.z = fVar1;
  a_08.x = (float)uVar4;
  a_08.y = SUB84(uVar4,4);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffc8,a_08,fVar5,(MethodInfo *)0x0);
  a_09.y = velocity.y;
  a_09.x = velocity.x;
  a_09.z = (float)uVar2;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&velocity,a_09,*pVVar3,(MethodInfo *)0x0);
  fVar1 = pVVar3->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = JetPackMotor_GetDesiredHorizontalVelocity
                      ((Vector3 *)&stack0xffffffc8,this,(MethodInfo *)0x0);
  uVar6 = pVVar3->x;
  uVar7 = pVVar3->y;
  uVar2._0_4_ = pVVar3->z;
  pMVar8 = (this->fields)._.groundState;
  velocity.y = (float)uVar6;
  velocity.z = (float)uVar7;
  if (pMVar8 != (MVGroundState *)0x0) {
    pVVar3 = (Vector3 *)&UNK_?;
    bVar9 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
    if ((bVar9 != 0) && ((this->fields)._Thrust_k__BackingField == 0)) {
      pMVar8 = (this->fields)._.groundState;
      if (pMVar8 == (MVGroundState *)0x0) goto code_?;
      pVVar10 = SentryGunBeam::SentryGunBeam_get_StartPosition
                          (&VStack_11,(SentryGunBeam *)pMVar8,(MethodInfo *)0x0);
      uVar12 = pVVar10->y;
      velocity.x = 0.0;
      pVVar3 = (Vector3 *)&puStack_13;
      hVelocity.y = velocity.z;
      hVelocity.x = velocity.y;
      hVelocity.z = (float)uVar2;
      pMVar8 = (MVGroundState *)velocity.y;
      pVVar10 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                          (pVVar3,hVelocity,*pVVar10,(MethodInfo *)0x0);
      uVar14 = pVVar10->x;
      uVar15 = pVVar10->y;
      uVar2._0_4_ = pVVar10->z;
      velocity.y = (float)uVar14;
      velocity.z = (float)uVar15;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      fVar16 = baseVelocity.z;
      fVar17 = baseVelocity.x;
      fVar5 = velocity.z;
      baseVelocity.z = baseVelocity.x;
      velocity.z = velocity.y;
      baseVelocity.x = fVar5;
      velocity.x = (float)&UNK_?;
      a.y = fVar5;
      a.x = velocity.y;
      a.z = (float)uVar2;
      b.y = baseVelocity.y;
      b.x = fVar17;
      b.z = fVar16;
      velocity.y = (float)&baseVelocity;
      baseVelocity.y = (float)uVar2;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&baseVelocity,a,b,(MethodInfo *)0x0);
      uVar18 = pVVar10->x;
      uVar19 = pVVar10->y;
      uVar2._0_4_ = pVVar10->z;
      __return_storage_ptr__ = (Vector3 *)uVar12;
      velocity.y = (float)uVar18;
      velocity.z = (float)uVar19;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    b_00.y = (float)pMVar8;
    b_00.x = (float)pVVar3;
    a_00.y = velocity.z;
    a_00.x = velocity.y;
    a_00.z = (float)uVar2;
    b_00.z = fVar1;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffbc,a_00,b_00,(MethodInfo *)0x0);
    uVar20 = pVVar10->x;
    uVar21 = pVVar10->y;
    uVar2._0_4_ = pVVar10->z;
    velocity.y = (float)uVar20;
    velocity.z = (float)uVar21;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    a_01.y = velocity.z;
    a_01.x = velocity.y;
    a_01.z = (float)uVar2;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffb0,a_01,fVar5 / _UNK_?,(MethodInfo *)0x0);
    uVar22 = pVVar10->x;
    uVar23 = pVVar10->y;
    uVar2._0_4_ = pVVar10->z;
    velocity.y = (float)uVar22;
    velocity.z = (float)uVar23;
    fVar5 = MathFunctions::MathFunctions_Pow2
                       ((this->fields).HARDCODEDJETPACKAIRFRICTION,(MethodInfo *)0x0);
    a_02.y = velocity.z;
    a_02.x = velocity.y;
    a_02.z = (float)uVar2;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffa4,a_02,fVar5,(MethodInfo *)0x0);
    a_03.y = (float)pMVar8;
    a_03.x = (float)pVVar3;
    a_03.z = fVar1;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffec,a_03,*pVVar10,(MethodInfo *)0x0);
    uVar24 = pVVar3->x;
    uVar25 = pVVar3->y;
    fVar1 = pVVar3->z;
    pMVar8 = (this->fields)._.groundState;
    velocity.y = (float)uVar24;
    velocity.z = (float)uVar25;
    if (pMVar8 != (MVGroundState *)0x0) {
      bVar9 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        velocity_00.y = velocity.z;
        velocity_00.x = velocity.y;
        velocity_00.z = fVar1;
        pVVar3 = MVRigidBody::MVRigidBody_ApplyGravity
                            (&velocity,(MVRigidBody *)this,velocity_00,
                             (this->fields).velocityPrevFrame,(this->fields).interactable,
                             (MethodInfo *)0x0);
        uVar26._0_4_ = pVVar3->x;
        uVar26._4_4_ = pVVar3->y;
        fVar1 = pVVar3->z;
      }
      else {
        uVar26 = CONCAT44(velocity.z,velocity.y);
      }
      this_00 = (this->fields).bounceState;
      if (this_00 != (BounceState *)0x0) {
        velocity_01.z = fVar1;
        velocity_01.x = (float)(int)uVar26;
        velocity_01.y = (float)(int)((ulonglong)uVar26 >> 0x20);
        pVVar3 = BounceState::BounceState_ApplyBounceVelocity
                            (&velocity,this_00,velocity_01,(MethodInfo *)0x0);
        uVar27._0_4_ = pVVar3->x;
        uVar27._4_4_ = pVVar3->y;
        fVar1 = pVVar3->z;
        if ((this->fields)._Thrust_k__BackingField != 0) {
          JetPackMotor_ApplyJetImpulse(this,(this->fields).thrust,(MethodInfo *)0x0);
          if (((this->fields)._Thrust_k__BackingField != 0) && ((this->fields).leaveMode != 0)) {
            JetPackMotor_ApplyJetImpulse(this,(this->fields).thrustLeaveMode,(MethodInfo *)0x0);
            pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this,(MethodInfo *)0x0);
            this_01 = (this->fields).smoothController;
            if (this_01 != (SmoothCharacterController *)0x0) {
              this_02 = (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument_
                         *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                      this_01,(MethodInfo *)0x0);
              if (this_02 !=
                  (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument_
                   *)0x0) {
                pCVar29 = mscorlib.dll::System::
                          Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
                          Reflection::CustomAttributeNamedArgument]::
                          Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                                    ((CustomAttributeNamedArgument *)&velocity,this_02,
                                     (MethodInfo *)0x0);
                velocity.z = (float)pCVar29->memberInfo;
                pTVar30 = (pCVar29->typedArgument).argumentType;
                pOVar31 = (pCVar29->typedArgument).value;
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (this_03 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffa4,this_03,(MethodInfo *)0x0);
                  uVar32._0_4_ = pVVar3->x;
                  uVar32._4_4_ = pVVar3->y;
                  uVar2._0_4_ = pVVar3->z;
                  baseVelocity.y = (float)(undefined4)uVar32;
                  baseVelocity.z = (float)uVar32._4_4_;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                    uVar32 = CONCAT44(baseVelocity.z,baseVelocity.y);
                  }
                  a_06.y = (float)pOVar31;
                  a_06.x = (float)pTVar30;
                  a_06.z = velocity.z;
                  b_01.z = (float)uVar2;
                  b_01.x = (float)(int)uVar32;
                  b_01.y = (float)(int)((ulonglong)uVar32 >> 0x20);
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&velocity,a_06,b_01,(MethodInfo *)0x0);
                  uVar2._0_4_ = pVVar3->x;
                  fStack_33 = pVVar3->y;
                  fVar5 = pVVar3->z;
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                      (&velocity,(MethodInfo *)0x0);
                  VStack_11.y = pVVar3->x;
                  VStack_11.z = pVVar3->y;
                  fVar17 = pVVar3->z;
                  fVar34 = (float10)func_?();
                  baseVelocity.z = (float)fVar34;
                  fVar34 = (float10)func_?();
                  velocity.z = (float)fVar34;
                  baseVelocity.z =
                       UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                 (baseVelocity.z,velocity.z,(MethodInfo *)0x0);
                  velocity.z = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                         ((MethodInfo *)0x0);
                  if (pTVar28 != (Transform *)0x0) {
                    point.z = fVar5;
                    point.x = (float)uVar2;
                    point.y = fStack_33;
                    axis.z = fVar17;
                    axis.x = VStack_11.y;
                    axis.y = VStack_11.z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                              (pTVar28,point,axis,velocity.z * baseVelocity.z,(MethodInfo *)0x0);
                    pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                    if (pTVar28 != (Transform *)0x0) {
                      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_rotation
                                          ((Quaternion *)&stack0xffffffa0,pTVar28,(MethodInfo *)0x0)
                      ;
                      fVar5 = pQVar35->x;
                      fVar17 = pQVar35->y;
                      fVar16 = pQVar35->z;
                      fVar36 = pQVar35->w;
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                Vector3_get_forward(&baseVelocity,(MethodInfo *)0x0);
                      uVar37._0_4_ = pVVar3->x;
                      uVar37._4_4_ = pVVar3->y;
                      uVar2._0_4_ = pVVar3->z;
                      velocity.y = (float)(undefined4)uVar37;
                      velocity.z = (float)uVar37._4_4_;
                      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                        func_?();
                        uVar37 = CONCAT44(velocity.z,velocity.y);
                      }
                      rotation.y = fVar17;
                      rotation.x = fVar5;
                      rotation.z = fVar16;
                      rotation.w = fVar36;
                      point_00.z = (float)uVar2;
                      point_00.x = (float)(int)uVar37;
                      point_00.y = (float)(int)((ulonglong)uVar37 >> 0x20);
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_op_Multiply_1
                                          (&velocity,rotation,point_00,(MethodInfo *)0x0);
                      uVar38 = pVVar3->x;
                      uVar39 = pVVar3->y;
                      uVar2._0_4_ = pVVar3->z;
                      baseVelocity.y = (float)uVar38;
                      baseVelocity.z = (float)uVar39;
                      velocity.z = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                             (0.0,(this->fields).leaveModeForward,(MethodInfo *)0x0)
                      ;
                      a_04.y = baseVelocity.z;
                      a_04.x = baseVelocity.y;
                      a_04.z = (float)uVar2;
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                Vector3_op_Multiply(&velocity,a_04,velocity.z,(MethodInfo *)0x0);
                      a_05.z = fVar1;
                      a_05.x = (float)uVar27;
                      a_05.y = SUB84(uVar27,4);
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                Vector3_op_Addition(&velocity,a_05,*pVVar3,(MethodInfo *)0x0);
                      uVar27._0_4_ = pVVar3->x;
                      uVar27._4_4_ = pVVar3->y;
                      fVar1 = pVVar3->z;
                      goto code_?;
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        velocity_02.z = fVar1;
        velocity_02.x = (float)uVar27;
        velocity_02.y = SUB84(uVar27,4);
        pVVar3 = MVRigidBody::MVRigidBody_GetImpulse
                            (&velocity,(MVRigidBody *)this,velocity_02,(this->fields).interactable,
                             (MethodInfo *)0x0);
        pVVar3 = MVRigidBody::MVRigidBody_VelocityDamping
                            (&velocity,*pVVar3,1.0,(this->fields).interactable,(MethodInfo *)0x0);
        uVar2._0_4_ = pVVar3->y;
        fVar1 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = (float)uVar2;
        __return_storage_ptr__->z = fVar1;
        return __return_storage_ptr__;
      }
    }
  }
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar40)();
  return pVVar3;
}


/* Void Init(AvatarInteractable, VehicleInteractable, SmoothCharacterController, Single, Single) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_Init
               (JetPackMotor *this,AvatarInteractable *interactableLocal,
               VehicleInteractable *vehicleInteractable,SmoothCharacterController *avatarController,
               float thrustStrength,float density,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_03 = (BounceState *)func_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor(this_03,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
  (this->fields).thrust = thrustStrength;
  (this->fields).smoothController = avatarController;
  this_00 = (this->fields)._._.worldObjectParent;
  (this->fields).bounceState = this_03;
  (this->fields)._.density = density;
  if (this_00 != (MVWorldObjectClient *)0x0) {
    pHVar1 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                       (this_00,(MethodInfo *)0x0);
    pSVar2 = (this->fields).smoothController;
    if (pSVar2 != (SmoothCharacterController *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar2,
                          (MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        pOVar3[0xb].monitor = (MonitorData *)pHVar1;
        pSVar2 = (this->fields).smoothController;
        if (pSVar2 != (SmoothCharacterController *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar2,
                              (MethodInfo *)0x0);
          this_01 = TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,pOVar3,MethodInfo__MvCharacterController__GetOverlappingObjects__,
                     MethodInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>__Func_System__Object__void__
                    );
          this_04 = (MVRigidBody_StuckEvaluator *)func_?();
          MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                    (this_04,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)pUVar4,
                     (MethodInfo *)0x0);
          (this->fields).stuckEvaluator = this_04;
          pMVar5 = TypeInfo__MVMovableMotorState;
          this_05 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
          WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
          WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_05,(MethodInfo *)0x0);
          (this->fields).movableMotorState = (MVMovableMotorState *)this_05;
          (this->fields).interactable = (MVInteractableBase *)pMVar5;
          if (this_01 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult___Class *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                                (MethodInfo *)0x0);
            if (pOVar3 != (Object *)0x0) {
              pOVar6 = pOVar3[0xc].klass;
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)0x0,
                         MethodInfo__AvatarInteractable__HandleMoveHit_MVControllerColliderHit_,
                         MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                        );
              pOVar7 = (Object__Class *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pOVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
              pOVar6 = (Object__Class *)0x0;
              if (pOVar7 != (Object__Class *)0x0) {
                if ((Action_1_MVControllerColliderHit___Class *)(pOVar7->_0).image ==
                    TypeInfo__System__Action<MVControllerColliderHit>) {
                  pOVar6 = pOVar7;
                }
                if (pOVar6 == (Object__Class *)0x0) goto code_?;
              }
              pOVar3[0xc].klass = pOVar6;
              pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_01,(MethodInfo *)0x0);
              this_02 = TypeInfo__System__Action<MVControllerColliderHit>;
              if (pOVar3 != (Object *)0x0) {
                pOVar6 = pOVar3[0xc].klass;
                pOVar8 = (Object *)this_01->static_fields;
                pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar4,pOVar8,
                           MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,
                           MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                          );
                pOVar7 = (Object__Class *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pOVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
                pOVar6 = (Object__Class *)0x0;
                if (pOVar7 != (Object__Class *)0x0) {
                  if ((Action_1_MVControllerColliderHit___Class *)(pOVar7->_0).image ==
                      TypeInfo__System__Action<MVControllerColliderHit>) {
                    pOVar6 = pOVar7;
                  }
                  if (pOVar6 == (Object__Class *)0x0) goto code_?;
                }
                pOVar3[0xc].klass = pOVar6;
                pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    this_02,(MethodInfo *)0x0);
                if (pOVar3 != (Object *)0x0) {
                  pOVar6 = pOVar3[0xc].klass;
                  pOVar8 = (Object *)(this_02->_1).typeHierarchy;
                  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar4,pOVar8,
                             MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,
                             MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__
                            );
                  pOVar7 = (Object__Class *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pOVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
                  pOVar6 = (Object__Class *)0x0;
                  if (pOVar7 == (Object__Class *)0x0) {
code_?:
                    pOVar3[0xc].klass = pOVar6;
                    (this_02->_1).initializationExceptionGCHandle = (uint32_t)&UNK_?;
                    return;
                  }
                  if ((Action_1_MVControllerColliderHit___Class *)(pOVar7->_0).image ==
                      TypeInfo__System__Action<MVControllerColliderHit>) {
                    pOVar6 = pOVar7;
                  }
                  if (pOVar6 != (Object__Class *)0x0) goto code_?;
                  goto code_?;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_IsStuck(JetPackMotor *this,MethodInfo *method)

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


/* GroundChange Move(Vector3, Vector3) */

GroundChange__Enum
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_Move
          (JetPackMotor *this,Vector3 velocity,Vector3 basevelocity,MethodInfo *method)

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
  basevelocity.y = (float)pCRam00000078;
  fVar3 = (float)uVar4;
  basevelocity.z = (float)uVar5;
  if (pCRam00000078 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
    basevelocity.z = 0.0;
    basevelocity.x = (float)&UNK_?;
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       (pCRam00000078,(MethodInfo *)0x0);
    fVar3 = basevelocity.y;
    if (pOVar6 != (Object *)0x0) {
      basevelocity.x = (float)pOVar6;
      (*(code *)pOVar6->klass[1]._0.namespaze)();
      this_00 = pMRam00000014;
      fVar3 = basevelocity.y;
      if (pCRam00000078 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
        basevelocity.z = 0.0;
        basevelocity.x = (float)&UNK_?;
        basevelocity.y = (float)pCRam00000078;
        controller = (MvCharacterController *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (pCRam00000078,(MethodInfo *)0x0);
        fVar3 = basevelocity.y;
        if (this_00 != (MVGroundState *)0x0) {
          basevelocity.x = velocity.x;
          basevelocity.y = velocity.y;
          basevelocity.z = velocity.z;
          MVGroundState::MVGroundState_Update(this_00,controller,velocity,0.0,(MethodInfo *)0x0);
          return GroundChange__Enum_UnChanged;
        }
      }
    }
  }
  basevelocity.y = fVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  GVar8 = (*pcVar7)();
  return GVar8;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_SuspendImpactDamage
               (JetPackMotor *this,MethodInfo *method)

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


/* JetPackMotor() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor__ctor(JetPackMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).velocityConstant = 40.0;
  (this->fields).thrust = 1500.0;
  (this->fields).thrustLeaveMode = 1000.0;
  (this->fields).leaveModeForward = 4.5;
  uStack_1 = 0;
  func_?(&uStack_1,0x42c80000,0x43c80000,
                  MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__KeyValuePair_float__float_
                 );
  (this->fields).leaveModeRotationRange.key = (float)uStack_1;
  (this->fields).leaveModeRotationRange.value = uStack_1._4_4_;
  (this->fields).runSpeed = 12.0;
  (this->fields).speedSmoothing = 10.0;
  keys = (Keyframe__Array *)func_?(TypeInfo__UnityEngine__Keyframe,3);
  uVar2 = 0;
  if (keys == (Keyframe__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,uVar2);
    func_?(uVar3);
  }
  else {
    fStack_4 = 0.0;
    fStack_5 = 0.0;
    fStack_6 = 0.0;
    fStack_7 = 0.0;
    fStack_8 = 0.0;
    uStack_9 = 0;
    func_?(&fStack_5,0xc2b40000,0x3f800000);
    uVar2 = 0;
    if (keys->max_length == 0) goto code_?;
    keys->vector[0].m_Time = fStack_5;
    keys->vector[0].m_Value = fStack_6;
    keys->vector[0].m_InTangent = fStack_7;
    keys->vector[0].m_OutTangent = fStack_8;
    keys->vector[0].m_WeightedMode = (undefined4)uStack_9;
    keys->vector[0].m_InWeight = (float)uStack_9._4_4_;
    keys->vector[0].m_OutWeight = fStack_4;
    fStack_10 = 0.0;
    fStack_11 = 0.0;
    fStack_12 = 0.0;
    fStack_13 = 0.0;
    fStack_14 = 0.0;
    uStack_15 = 0;
    func_?(&fStack_10,0,0x3f800000);
    uVar2 = 0;
    if (1 < keys->max_length) {
      keys->vector[1].m_Time = fStack_10;
      keys->vector[1].m_Value = fStack_11;
      keys->vector[1].m_InTangent = fStack_12;
      keys->vector[1].m_OutTangent = fStack_13;
      keys->vector[1].m_WeightedMode = (undefined4)uStack_15;
      keys->vector[1].m_InWeight = (float)uStack_15._4_4_;
      keys->vector[1].m_OutWeight = fStack_14;
      fStack_16 = 0.0;
      fStack_17 = 0.0;
      fStack_18 = 0.0;
      fStack_19 = 0.0;
      fStack_20 = 0.0;
      uStack_21 = 0;
      func_?(&fStack_16,0x42b40000,0x3f800000);
      if (2 < keys->max_length) {
        keys->vector[2].m_Time = fStack_16;
        keys->vector[2].m_Value = fStack_17;
        keys->vector[2].m_InTangent = fStack_18;
        keys->vector[2].m_OutTangent = fStack_19;
        keys->vector[2].m_WeightedMode = (undefined4)uStack_21;
        keys->vector[2].m_InWeight = (float)uStack_21._4_4_;
        keys->vector[2].m_OutWeight = fStack_20;
        this_00 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve);
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor
                  (this_00,keys,(MethodInfo *)0x0);
        (this->fields).slopeSpeedMultiplier = this_00;
        explosionEvents =
             (RuntimeEventType__Enum__Array *)
             func_?(TypeInfo__MV__Common__RuntimeEventType,3);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)explosionEvents,__field_02B580D51090F954F512D923E9B8123F50D1A3CE_Field,
                   (MethodInfo *)0x0);
        this_01 = (ImpactState *)func_?(TypeInfo__ImpactState);
        ImpactState::ImpactState__ctor(this_01,explosionEvents,(MethodInfo *)0x0);
        (this->fields).impactState = this_01;
        (this->fields).HARDCODEDJETPACKAIRFRICTION = 0.43;
        MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,uVar2);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Grounded
               (JetPackMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.groundState;
  if (pMVar1 != (MVGroundState *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    value = (pMVar1->fields).grounded;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Vector3 get_Impulses() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Impulses
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_6 = (undefined4 *)&stack0xffffff7c, puStack_4 = &stack0xffffff7c,
     (TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    puStack_6 = (undefined4 *)&stack0xffffff7c;
    puStack_4 = &stack0xffffff7c;
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_8,(MethodInfo *)0x0);
  uStack_9._0_4_ = pVVar7->x;
  uStack_9._4_4_ = pVVar7->y;
  fVar10 = pVVar7->z;
  pLVar11 = (this->fields)._.impulseVectors;
  fStack_12 = fVar10;
  uStack_13 = uStack_9;
  if (pLVar11 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                       );
    if (pOVar14 == (Object *)0x0) {
code_?:
      __return_storage_ptr__->x = (float)(undefined4)uStack_13;
      __return_storage_ptr__->y = (float)uStack_13._4_4_;
      __return_storage_ptr__->z = fVar10;
      *unaff_FS_OFFSET = uStack_3;
      return __return_storage_ptr__;
    }
    pLVar11 = (this->fields)._.impulseVectors;
    if (pLVar11 != (List_1_UnityEngine_Vector3_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UICharInfo]::
      List_1_UnityEngine_UICharInfo__GetEnumerator
                (&LStack_15,(List_1_UnityEngine_UICharInfo_ *)pLVar11,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar16 = func_?(), cVar16 != '\0') {
        pVVar7 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           (&VStack_17,(InputToPlayerMovementAndroid *)&stack0xffffff88,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                           );
        VStack_8.y = pVVar7->x;
        VStack_8.z = pVVar7->y;
        fVar18 = pVVar7->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar10;
        a.x = (float)(undefined4)uStack_13;
        a.y = (float)uStack_13._4_4_;
        b.z = fVar18;
        b.x = VStack_8.y;
        b.y = VStack_8.z;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&LStack_15.current,a,b,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar7->x;
        uStack_9._4_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        fStack_12 = fVar10;
        uStack_13 = uStack_9;
      }
      *puStack_6 = 0x58;
      uStack_1 = 0xffffffff;
      func_?(&stack0xffffff88,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     );
      this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields)._.impulseVectors;
      if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
        goto code_?;
      }
    }
  }
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar19)();
  return pVVar7;
}


/* Vector3 get_InputMoveDirection() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_InputMoveDirection
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields)._InputMoveDirection_k__BackingField.y;
  fVar2 = (this->fields)._InputMoveDirection_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._InputMoveDirection_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_InputRun() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_InputRun
               (JetPackMotor *this,MethodInfo *method)

{
  return (this->fields)._InputRun_k__BackingField;
}


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_IsMovementLocked
               (JetPackMotor *this,MethodInfo *method)

{
  return (this->fields)._IsMovementLocked_k__BackingField;
}


/* Boolean get_IsUnderWater() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_IsUnderWater
               (JetPackMotor *this,MethodInfo *method)

{
  return _UNK_? < (this->fields).waterProximity;
}


/* Boolean get_LeaveMode() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_LeaveMode
               (JetPackMotor *this,MethodInfo *method)

{
  return (this->fields).leaveMode;
}


/* Boolean get_Thrust() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Thrust
               (JetPackMotor *this,MethodInfo *method)

{
  return (this->fields)._Thrust_k__BackingField;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).smoothController;
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


/* Void set_InputMoveDirection(Vector3) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_InputMoveDirection
               (JetPackMotor *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._InputMoveDirection_k__BackingField.x = value.x;
  (this->fields)._InputMoveDirection_k__BackingField.y = value.y;
  (this->fields)._InputMoveDirection_k__BackingField.z = value.z;
  return;
}


/* Void set_InputRun(Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_InputRun
               (JetPackMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._InputRun_k__BackingField = value;
  return;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_IsMovementLocked
               (JetPackMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._IsMovementLocked_k__BackingField = value;
  return;
}


/* Void set_LeaveMode(Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_LeaveMode
               (JetPackMotor *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).leaveMode = value;
  if (value == 0) {
    return;
  }
  iVar1 = func_?((this->fields).interactable,TypeInfo__IMoveHitHandler);
  pIVar2 = TypeInfo__IMoveHitHandler;
  if (iVar1 == 0) goto code_?;
  pMVar3 = (this->fields).interactable;
  if (pMVar3 == (MVInteractableBase *)0x0) {
    _value = (Object *)0x0;
code_?:
    this_00 = (this->fields).smoothController;
    if ((this_00 == (SmoothCharacterController *)0x0) ||
       (pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            (MethodInfo *)0x0), pOVar4 == (Object *)0x0)) goto code_?;
    pOVar5 = pOVar4[0xc].klass;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if (_value == (Object *)0x0) goto code_?;
    pOVar6 = _value->klass;
    uVar7 = 0;
    uVar8._0_1_ = (pOVar6->_1).rank;
    uVar8._1_1_ = (pOVar6->_1).minimumAlignment;
    if (uVar8 != 0) {
      do {
        if (pOVar6->interfaceOffsets[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo__IMoveHitHandler) {
          ppMVar9 = &(&(_value->klass->vtable).Equals)
                     [_value->klass->interfaceOffsets[uVar7].offset].method;
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    ppMVar9 = (MethodInfo **)func_?(_value,TypeInfo__IMoveHitHandler,0);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,_value,ppMVar9[1],
               MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__);
    pOVar5 = (Object__Class *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pOVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    pOVar6 = (Object__Class *)0x0;
    if (pOVar5 != (Object__Class *)0x0) {
      if ((Action_1_MVControllerColliderHit___Class *)(pOVar5->_0).image ==
          TypeInfo__System__Action<MVControllerColliderHit>) {
        pOVar6 = pOVar5;
      }
      pAVar10 = TypeInfo__System__Action<MVControllerColliderHit>;
      if (pOVar6 == (Object__Class *)0x0) goto code_?;
    }
    pOVar4[0xc].klass = pOVar6;
code_?:
    (this->fields).interactable = (this->fields).vehicleInteractable;
    return;
  }
  _value = (Object *)func_?(pMVar3,TypeInfo__IMoveHitHandler);
  if (_value != (Object *)0x0) goto code_?;
  func_?(pMVar3,pIVar2);
  pOVar5 = extraout_ECX;
  pAVar10 = extraout_EDX;
code_?:
  func_?(pOVar5,pAVar10);
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void set_Thrust(Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_Thrust
               (JetPackMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._Thrust_k__BackingField = value;
  return;
}

