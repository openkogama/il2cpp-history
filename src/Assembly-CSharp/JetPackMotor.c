
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  pVVar1 = JetPackMotor_GetDesiredHorizontalVelocity
                     ((Vector3 *)&stack0xffffffb0,this,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar1->x;
  uStack_2._4_4_ = pVVar1->y;
  fStack_3 = pVVar1->z;
  pMVar4 = (this->fields)._.groundState;
  if (pMVar4 != (MVGroundState *)0x0) {
    uVar5 = uStack_2;
    bVar6 = MVGroundState::MVGroundState_get_Grounded(pMVar4,(MethodInfo *)0x0);
    if ((bVar6 != 0) && ((this->fields)._Thrust_k__BackingField == 0)) {
      pMVar4 = (this->fields)._.groundState;
      if (pMVar4 == (MVGroundState *)0x0) goto code_?;
      hVelocity.z = fStack_3;
      hVelocity.x = (float)(int)uVar5;
      hVelocity.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      pVVar1 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                         ((Vector3 *)&stack0xffffffb0,hVelocity,(pMVar4->fields).groundNormal,
                          (MethodInfo *)0x0);
      uVar7 = pVVar1->x;
      uVar8 = pVVar1->y;
      fStack_3 = baseVelocity.z + pVVar1->z;
      uStack_2 = CONCAT44(baseVelocity.y + (float)uVar8,baseVelocity.x + (float)uVar7);
    }
    fVar9 = (float)uStack_2 - velocity.x;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar10 = fVar10 / _UNK_?;
    fVar11 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
            Easing_InQuad(0.43,(MethodInfo *)0x0);
    __return_storage_ptr__->x = velocity.x + fVar9 * fVar10 * fVar11;
    __return_storage_ptr__->y = velocity.y + (uStack_2._4_4_ - velocity.y) * fVar10 * fVar11;
    __return_storage_ptr__->z = velocity.z + (fStack_3 - velocity.z) * fVar10 * fVar11;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar12)();
  return pVVar1;
}


/* Void ApplyJetImpulse(Single) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_ApplyJetImpulse
               (JetPackMotor *this,float jetpackThrust,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_Velocity.method)
                     (auStack_2,this,(this->klass->vtable).get_IsMovementLocked.methodPtr);
  fStack_3 = *(float *)(puVar1 + 1);
  uStack_4._4_4_ = (float)((ulonglong)*puVar1 >> 0x20);
  if (uStack_4._4_4_ < 0.0) {
    uStack_4._4_4_ = 0.0;
  }
  else if (_UNK_? < uStack_4._4_4_) {
    uStack_4._4_4_ = _UNK_?;
  }
  fVar5 = (_UNK_? - uStack_4._4_4_) / _UNK_?;
  if (cRam_? == '\0') {
    uStack_4 = *puVar1;
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar6->upVector).x;
  uStack_4._4_4_ = (pVVar6->upVector).y;
  fStack_3 = (pVVar6->upVector).z;
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  fVar7 = fVar7 * fVar5 * jetpackThrust;
  fStack_3 = fStack_3 * fVar7;
  impulse.y = uStack_4._4_4_ * fVar7;
  impulse.x = (float)uStack_4 * fVar7;
  impulse.z = fStack_3;
  MVRigidBody::MVRigidBody_AddImpulse_1((MVRigidBody *)this,impulse,0,(MethodInfo *)0x0);
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
  fVar1 = 0.0;
  fVar2 = 0.0;
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  pSVar3 = (this->fields).smoothController;
  if ((((pSVar3 != (SmoothCharacterController *)0x0) &&
       (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) &&
      (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pMVar4,(MethodInfo *)0x0), this_05 != (GameObject *)0x0))
     && ((pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_05,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0 &&
         (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb8,pTVar5,(MethodInfo *)0x0),
         this_04 != (WaterPlaneManager *)0x0)))) {
    fVar7 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                       (this_04,*pVVar6,(MethodInfo *)0x0);
    pJVar8 = this->klass;
    (this->fields).waterProximity = fVar7;
    cVar9 = (*(code *)(pJVar8->vtable).get_IsMovementLocked.method)();
    if (cVar9 != '\0') {
      return;
    }
    if (shouldSetRotation != 0) {
      pSVar3 = (this->fields).smoothController;
      if (((pSVar3 == (SmoothCharacterController *)0x0) ||
          (pMVar4 = (pSVar3->fields).controller, pMVar4 == (MvCharacterController *)0x0)) ||
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar4,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar5,setQuaternion,(MethodInfo *)0x0);
    }
    uVar10 = (this->fields).velocityPrevFrame.y;
    fVar7 = (this->fields).velocityPrevFrame.z;
    this_00 = (this->fields).movableMotorState;
    uVar11 = (this->fields).velocityPrevFrame.x;
    uVar12 = (this->fields).velocityPrevFrame.y;
    pSVar3 = (this->fields).smoothController;
    if (((pSVar3 != (SmoothCharacterController *)0x0) &&
        (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) &&
       (fVar13 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 TypedUxmlAttributeDescription`1[System::Single]::
                 TypedUxmlAttributeDescription_1_System_Single__get_defaultValue
                           ((TypedUxmlAttributeDescription_1_System_Single_ *)pMVar4,
                            (MethodInfo *)0x0), this_00 != (MVMovableMotorState *)0x0)) {
      lVar14 = (ulonglong)(uint)fVar2 << 0x20;
      velocity_00.y = (float)uVar12;
      velocity_00.x = (float)uVar11;
      velocity_00.z = fVar7;
      bVar15 = MVMovableMotorState::MVMovableMotorState_Move
                         (this_00,velocity_00,pMVar4,fVar13,(this->fields)._.groundState,
                          (Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
      fVar2 = (float)((ulonglong)lVar14 >> 0x20);
      lVar16 = (ulonglong)(uint)uVar10 << 0x20;
      pVVar6 = (Vector3 *)&stack0xffffffac;
      puVar17 = &UNK_?;
      auVar18._4_4_ = fVar7;
      auVar18._0_4_ = uVar10;
      auVar18._8_4_ = 0;
      baseVelocity.z = fVar1;
      baseVelocity.x = (float)(int)lVar14;
      baseVelocity.y = (float)(int)((ulonglong)lVar14 >> 0x20);
      pJVar19 = this;
      pVVar20 = JetPackMotor_GetVelocity
                          (pVVar6,this,(Vector3)(auVar18 << 0x20),baseVelocity,(MethodInfo *)0x0);
      if (bVar15 == 0) {
        uVar21 = pVVar20->x;
        uVar22 = pVVar20->y;
        fVar1 = pVVar20->z;
      }
      else {
        uVar23 = pVVar20->x;
        uVar24 = pVVar20->y;
        fVar1 = pVVar20->z;
        uVar21 = uVar23;
        uVar22 = uVar24;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          uVar21 = uVar23;
          uVar22 = uVar24;
        }
      }
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pSVar3 = (this->fields).smoothController;
      if ((pSVar3 != (SmoothCharacterController *)0x0) &&
         (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
        (*(code *)(pMVar4->klass->vtable).__unknown_1.method)();
        pSVar3 = (this->fields).smoothController;
        if ((pSVar3 != (SmoothCharacterController *)0x0) &&
           (this_01 = (this->fields)._.groundState, this_01 != (MVGroundState *)0x0)) {
          velocity.y = (float)uVar22;
          velocity.x = (float)uVar21;
          velocity.z = fVar1;
          MVGroundState::MVGroundState_Update
                    (this_01,(pSVar3->fields).controller,velocity,0.0,(MethodInfo *)0x0);
          pSVar3 = (this->fields).smoothController;
          if ((pSVar3 != (SmoothCharacterController *)0x0) &&
             (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
            fVar1 = (pMVar4->fields)._Velocity_k__BackingField.x;
            fVar7 = (pMVar4->fields)._Velocity_k__BackingField.y;
            fVar13 = (pMVar4->fields)._Velocity_k__BackingField.z;
            fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            (this->fields).velocityPrevFrame.x = fVar1 / fVar25;
            (this->fields).velocityPrevFrame.y = fVar7 / fVar25;
            (this->fields).velocityPrevFrame.z = fVar13 / fVar25;
            this_02 = (this->fields).vehicleEnergyContainer;
            if (this_02 != (VehicleEnergyContainer *)0x0) {
              WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
              VehicleEnergyContainer_Consume(this_02,(MethodInfo *)0x0);
              if (bVar15 == 0) {
                uVar26 = (this->fields).velocityPrevFrame.x;
                uVar27 = (this->fields).velocityPrevFrame.y;
                fVar1 = (this->fields).velocityPrevFrame.z;
                (this->fields).velocityPrevFrame.x = (float)uVar26 - (float)puVar17;
                (this->fields).velocityPrevFrame.y = (float)uVar27 - (float)pVVar6;
                (this->fields).velocityPrevFrame.z = fVar1 - (float)pJVar19;
              }
              this_03 = (this->fields).impactState;
              if (this_03 != (ImpactState *)0x0) {
                prevVelocity.z = fVar2;
                prevVelocity.x = (float)(int)lVar16;
                prevVelocity.y = (float)(int)((ulonglong)lVar16 >> 0x20);
                fVar2 = ImpactState::ImpactState_UpdateImpactState
                                   (this_03,(this->fields).velocityPrevFrame,prevVelocity,
                                    (this->fields).interactable,(MethodInfo *)0x0);
                if (fVar2 != 0.0) {
                  pMVar28 = (this->fields).interactable;
                  if (pMVar28 == (MVInteractableBase *)0x0) goto code_?;
                  (*(code *)(pMVar28->klass->vtable).__unknown.method)();
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void FrameUpdate() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_FrameUpdate
               (JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (this_00 = (pSVar1->fields).smoothPhysicsMovement, this_00 != (SmoothPhysicsMovement *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                     );
      cRam_? = '\x01';
    }
    _puStack_14 = CONCAT44(&UNK_?,puStack_2);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    _puStack_14 = CONCAT44(&UNK_?,puStack_2);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar5 = (SmoothPhysicsMovement_Package **)(fVar3 - fVar4);
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar6->fields)._size) {
        pSVar7 = (SmoothPhysicsMovement_Package *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar6,
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                           );
        (this_00->fields).current = pSVar7;
        ppSVar5 = &(this_00->fields).current;
        func_?();
      }
      if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar6->fields)._size) {
        pSVar7 = (SmoothPhysicsMovement_Package *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar6,
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                           );
        (this_00->fields).next = pSVar7;
        ppSVar5 = &(this_00->fields).next;
        func_?();
      }
    }
    if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar7 = (this_00->fields).next;
    ppSVar8 = &(this_00->fields).next;
    do {
      if ((float)ppSVar5 < (pSVar7->fields).time) {
code_?:
        pSVar7 = (this_00->fields).current;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar3 = (pSVar7->fields).time;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar4 = ((float)ppSVar5 - fVar3) / fVar4;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar7 = (this_00->fields).current;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        VStack_10.x = (pSVar7->fields).position.x;
        VStack_10.y = (pSVar7->fields).position.y;
        pSVar11 = (this_00->fields).next;
        VStack_10.z = (pSVar7->fields).position.z;
        if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
        puStack_2 = (undefined1 *)(pSVar11->fields).position.x;
        unique0x0000a404 = (pSVar11->fields).position.y;
        fVar3 = 0.0;
        if ((0.0 <= fVar4) && (fVar3 = _UNK_?, fVar4 <= _UNK_?)) {
          fVar3 = fVar4;
        }
        VStack_10.x = ((float)puStack_2 - VStack_10.x) * fVar3 + VStack_10.x;
        VStack_10.y = ((float)unique0x0000a404 - VStack_10.y) * fVar3 + VStack_10.y;
        VStack_10.z = ((pSVar11->fields).position.z - VStack_10.z) * fVar3 + VStack_10.z;
        if (pTVar9 == (Transform *)0x0) break;
        this = (JetPackMotor *)VStack_10.z;
        fVar12 = VStack_10.y;
        fVar13 = VStack_10.x;
        VVar14 = (Vector3)CONCAT84(VVar14._0_8_,fVar13);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar9,VVar14,(MethodInfo *)0x0);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar7 = (this_00->fields).current;
        if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
           (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) break;
        fVar3 = (pSVar7->fields).rotation.y;
        pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffdc,(pSVar7->fields).rotation,
                             (pSVar11->fields).rotation,(float)this_00,(MethodInfo *)0x0);
        if (pTVar9 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar9,*pQVar15,(MethodInfo *)0x0);
        if ((this_00->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          pSVar7 = (this_00->fields).current;
          if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
          puStack_2 = (undefined1 *)(pSVar7->fields).position.x;
          unique0x0000a404 = (pSVar7->fields).position.y;
          VStack_10.z = (pSVar7->fields).position.z;
          pSVar7 = (this_00->fields).next;
          if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
          VStack_10.x = (pSVar7->fields).position.x;
          VStack_10.y = (pSVar7->fields).position.y;
          if (fVar3 < 0.0) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = _UNK_?;
            if (fVar3 <= _UNK_?) {
              fVar4 = fVar3;
            }
          }
          VStack_10.z = ((pSVar7->fields).position.z - VStack_10.z) * fVar4 + VStack_10.z;
          (*(code *)(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.method)
                    ();
          pSVar7 = (this_00->fields).current;
          this_01 = (this_00->fields).worldObjectOwner;
          if (((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
              (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) ||
             (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                  ((Quaternion *)&stack0xffffffdc,(pSVar7->fields).rotation,
                                   (pSVar11->fields).rotation,fVar3,(MethodInfo *)0x0),
             this_01 == (MVWorldObjectClient *)0x0)) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_01,*pQVar15,(MethodInfo *)0x0);
        }
        if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_02 = (this_00->fields).cullingSubscriberBase;
        _puStack_14 = CONCAT44(this_00,&UNK_?);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          _puStack_14 = CONCAT44(&UNK_?,puStack_2);
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_10,pTVar9,(MethodInfo *)0x0);
          uVar17 = pVVar16->x;
          uVar18 = pVVar16->y;
          this = (JetPackMotor *)pVVar16->z;
          fVar12 = (float)uVar18;
          fVar19 = (float)uVar17;
          VVar14 = (Vector3)CONCAT84(VVar14._0_8_,fVar19);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_02,VVar14,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar6->fields)._size < 1) goto code_?;
      (this_00->fields).current = *ppSVar8;
      func_?();
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar7 = (SmoothPhysicsMovement_Package *)
               mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue
                         ((Queue_1_System_Object_ *)pQVar6,
                          MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                         );
      *ppSVar8 = pSVar7;
      ppSVar5 = ppSVar8;
      func_?();
      pSVar7 = *ppSVar8;
    } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  stack0xfffffff0 = (undefined4)((ulonglong)_puStack_14 >> 0x20);
  VStack_10.z = (float)&UNK_?;
  puStack_2 = &stack0xfffffff0;
  uVar20 = func_?();
  _puStack_14 = CONCAT44(stack0xfffffff0,uVar20);
  VStack_10.z = (float)&UNK_?;
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields).interactable;
  if (pMVar1 != (MVInteractableBase *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).__unknown_6.method)
                               (pMVar1,3,0x41400000,(pMVar1->klass->vtable).__unknown_7.methodPtr);
    fStack_3 = (this->fields)._InputMoveDirection_k__BackingField.z;
    uStack_4._0_4_ = (this->fields)._InputMoveDirection_k__BackingField.x;
    uStack_4._4_4_ = (this->fields)._InputMoveDirection_k__BackingField.y;
    fStack_5 = (float)fVar2;
    fVar2 = (float10)func_?(&uStack_4,0);
    fStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
    fVar7 = (this->fields).speed;
    fVar8 = fStack_6 * _UNK_?;
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (_UNK_? < fVar8) {
      fVar8 = _UNK_?;
    }
    fStack_3 = (this->fields)._InputMoveDirection_k__BackingField.z;
    (this->fields).speed = ((float)fVar2 * fStack_5 - fVar7) * fVar8 + fVar7;
    uStack_4._0_4_ = (this->fields)._InputMoveDirection_k__BackingField.x;
    uStack_4._4_4_ = (this->fields)._InputMoveDirection_k__BackingField.y;
    fVar2 = (float10)func_?(&uStack_4,0);
    if ((float)fVar2 == _UNK_?) {
      (this->fields).speed = 0.0;
    }
    this_00 = (this->fields)._.groundState;
    if (this_00 != (MVGroundState *)0x0) {
      bVar9 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        uStack_4 = uStack_4 & 0xffffffff00000000;
        iVar10 = func_?(&uStack_4,&(this->fields).velocityPrevFrame);
        dVar11 = (double)*(float *)(iVar10 + 4);
        uStack_4 = CONCAT44(uStack_4._4_4_,&UNK_?);
        func_?();
        this_01 = (this->fields).slopeSpeedMultiplier;
        fVar7 = (this->fields).speed;
        if (this_01 == (AnimationCurve *)0x0) goto code_?;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,(float)dVar11 * _UNK_?,(MethodInfo *)0x0);
        (this->fields).speed = fVar8 * fVar7;
      }
      uVar12 = (this->fields)._InputMoveDirection_k__BackingField.x;
      uVar13 = (this->fields)._InputMoveDirection_k__BackingField.y;
      fVar8 = (this->fields)._InputMoveDirection_k__BackingField.z;
      fVar7 = (this->fields).speed;
      __return_storage_ptr__->x = (float)uVar12 * fVar7;
      __return_storage_ptr__->y = (float)uVar13 * fVar7;
      __return_storage_ptr__->z = fVar8 * fVar7;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar15 = (Vector3 *)(*pcVar14)();
  return pVVar15;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetOverlappingObjects
          (JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if (((pSVar1 != (SmoothCharacterController *)0x0) &&
      (this_00 = (pSVar1->fields).controller, this_00 != (MvCharacterController *)0x0)) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_3,this_01,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    uVar6 = (this_00->fields).center.x;
    uVar7 = (this_00->fields).center.y;
    VStack_3.z = (this_00->fields).center.z;
    fVar8 = VStack_3.z + pVVar2->z;
    VStack_3.x = (float)uVar6;
    if (cRam_? == '\0') {
      VStack_3.y = (float)uVar7;
      func_?(&TypeInfo__MVElipsoidOverlapCheck);
      func_?(&TypeInfo__MvCharacterController);
      cRam_? = '\x01';
    }
    uVar9 = (this_00->fields).elipsoidRadius.x;
    uVar10 = (this_00->fields).elipsoidRadius.y;
    fVar11 = (this_00->fields).elipsoidRadius.z;
    VStack_3.y = (float)uVar9;
    VStack_3.z = (float)uVar10;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
    puVar13 = (undefined *)(pQVar12->identityQuaternion).x;
    pMVar14 = (MvCharacterController__Class *)(pQVar12->identityQuaternion).y;
    fVar15 = (pQVar12->identityQuaternion).z;
    fVar16 = (pQVar12->identityQuaternion).w;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      puVar13 = &UNK_?;
      pMVar14 = TypeInfo__MvCharacterController;
      func_?();
    }
    ignoreWoIds = (this_00->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      puVar13 = &UNK_?;
      pMVar14 = (MvCharacterController__Class *)TypeInfo__MVElipsoidOverlapCheck;
      func_?();
    }
    radius.y = VStack_3.z;
    radius.x = VStack_3.y;
    radius.z = fVar11;
    position.z = fVar8;
    position.x = (float)uVar6 + (float)uVar4;
    position.y = (float)uVar7 + (float)uVar5;
    rotation.y = (float)pMVar14;
    rotation.x = (float)puVar13;
    rotation.z = fVar15;
    rotation.w = fVar16;
    pLVar17 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                        (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    return pLVar17;
  }
  VStack_3.z = (float)&stack0xfffffffc;
  uVar18 = func_?(&VStack_3);
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  pLVar17 = (List_1_MVOverlapResult_ *)(*pcVar19)();
  return pLVar17;
}


/* Vector3 GetVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,Vector3 velocity,
                    Vector3 baseVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__get_Value__
                   );
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
          Easing_InQuad(0.43,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = velocity.y - velocity.y * fVar2 * fVar1;
  fVar4 = velocity.z - velocity.z * fVar2 * fVar1;
  pVVar5 = JetPackMotor_GetDesiredHorizontalVelocity
                      ((Vector3 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
  fVar1 = pVVar5->x;
  fVar2 = pVVar5->y;
  fVar6 = pVVar5->z;
  VVar7 = *pVVar5;
  pMVar8 = (this->fields)._.groundState;
  if (pMVar8 != (MVGroundState *)0x0) {
    bVar9 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
    if ((bVar9 != 0) && ((this->fields)._Thrust_k__BackingField == 0)) {
      pMVar8 = (this->fields)._.groundState;
      if (pMVar8 == (MVGroundState *)0x0) goto code_?;
      pVVar5 = &(pMVar8->fields).groundNormal;
      pMVar8 = (MVGroundState *)pVVar5->x;
      pVVar5 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                          (&VStack_10,VVar7,*pVVar5,(MethodInfo *)0x0);
      uVar11 = pVVar5->x;
      uVar12 = pVVar5->y;
      fVar1 = baseVelocity.x + (float)uVar11;
      fVar2 = baseVelocity.y + (float)uVar12;
      fVar6 = baseVelocity.z + pVVar5->z;
    }
    fVar1 = fVar1 - (float)pMVar8;
    fVar6 = fVar6 - fVar4;
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar13 = fVar13 / _UNK_?;
    fVar1 = fVar13 * fVar1;
    fVar6 = fVar13 * fVar6;
    fVar14 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
             Easing_InQuad(0.43,(MethodInfo *)0x0);
    fVar1 = (float)pMVar8 + fVar14 * fVar1;
    fVar3 = fVar3 + fVar14 * fVar13 * (fVar2 - fVar3);
    fVar4 = fVar4 + fVar14 * fVar6;
    pMVar8 = (this->fields)._.groundState;
    if (pMVar8 != (MVGroundState *)0x0) {
      bVar9 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
      uVar15 = CONCAT44(fVar3,fVar1);
      if (bVar9 == 0) {
        VStack_10.z = (float)&UNK_?;
        VVar7.y = fVar3;
        VVar7.x = fVar1;
        VVar7.z = fVar4;
        pVVar5 = MVRigidBody::MVRigidBody_ApplyGravity
                            (&VStack_10,(MVRigidBody *)this,VVar7,(this->fields).velocityPrevFrame,
                             (this->fields).interactable,(MethodInfo *)0x0);
        uVar15._0_4_ = pVVar5->x;
        uVar15._4_4_ = pVVar5->y;
        fVar4 = pVVar5->z;
      }
      this_00 = (this->fields).bounceState;
      if (this_00 != (BounceState *)0x0) {
        velocity_01.z = fVar4;
        velocity_01.x = (float)(int)uVar15;
        velocity_01.y = (float)(int)((ulonglong)uVar15 >> 0x20);
        pVVar5 = BounceState::BounceState_ApplyBounceVelocity
                            (&VStack_10,this_00,velocity_01,(MethodInfo *)0x0);
        fVar2 = pVVar5->x;
        fVar6 = pVVar5->y;
        fVar1 = pVVar5->z;
        if ((this->fields)._Thrust_k__BackingField == 0) {
code_?:
          velocity_00.y = fVar6;
          velocity_00.x = fVar2;
          velocity_00.z = fVar1;
          pVVar5 = MVRigidBody::MVRigidBody_GetImpulse
                              (&VStack_10,(MVRigidBody *)this,velocity_00,
                               (this->fields).interactable,(MethodInfo *)0x0);
          pVVar5 = MVRigidBody::MVRigidBody_VelocityDamping
                              (&VStack_10,*pVVar5,1.0,(this->fields).interactable,(MethodInfo *)0x0
                              );
          fVar2 = pVVar5->y;
          fVar1 = pVVar5->z;
          __return_storage_ptr__->x = pVVar5->x;
          __return_storage_ptr__->y = fVar2;
          __return_storage_ptr__->z = fVar1;
          return __return_storage_ptr__;
        }
        this_01 = (this->fields).vehicleEnergyContainer;
        if (this_01 != (VehicleEnergyContainer *)0x0) {
          bVar9 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                   VehicleEnergyContainer_get_OutOfEnergy(this_01,(MethodInfo *)0x0);
          __return_storage_ptr__ = (Vector3 *)(this->fields).thrust;
          if (bVar9 != 0) {
            if ((float)__return_storage_ptr__ < 0.0) {
              __return_storage_ptr__ = (Vector3 *)0x0;
            }
            else {
              pVVar5 = (Vector3 *)(this->fields).thrustOutOfEnergyMax;
              if ((float)pVVar5 < (float)__return_storage_ptr__) {
                __return_storage_ptr__ = pVVar5;
              }
            }
          }
          JetPackMotor_ApplyJetImpulse(this,(float)__return_storage_ptr__,(MethodInfo *)0x0);
          if (((this->fields)._Thrust_k__BackingField == 0) || ((this->fields).leaveMode == 0))
          goto code_?;
          JetPackMotor_ApplyJetImpulse(this,1000.0,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          pSVar16 = (this->fields).smoothController;
          if ((pSVar16 != (SmoothCharacterController *)0x0) &&
             (pMVar17 = (pSVar16->fields).controller, pMVar17 != (MvCharacterController *)0x0)) {
            fVar6 = (pMVar17->fields).center.x;
            fVar4 = (pMVar17->fields).center.y;
            fVar1 = (pMVar17->fields).center.z;
            if (this_02 != (Transform *)0x0) {
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_10,this_02,(MethodInfo *)0x0);
              uVar18 = pVVar5->x;
              uVar19 = pVVar5->y;
              fVar6 = (float)uVar18 + fVar6;
              fVar4 = (float)uVar19 + fVar4;
              fVar1 = pVVar5->z + fVar1;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar21 = (pVVar20->upVector).x;
              uVar22 = (pVVar20->upVector).y;
              fVar2 = (pVVar20->upVector).z;
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                ((this->fields).leaveModeRotationRange.key,
                                 (this->fields).leaveModeRotationRange.value,(MethodInfo *)0x0);
              fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              point.y = fVar4;
              point.x = fVar6;
              point.z = fVar1;
              axis.y = (float)uVar22;
              axis.x = (float)uVar21;
              axis.z = fVar2;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                        (this_02,point,axis,fVar13 * fVar3,(MethodInfo *)0x0);
              pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)&stack0xffffff80,this_02,(MethodInfo *)0x0);
              fVar1 = pQVar23->x;
              fVar2 = pQVar23->y;
              fVar6 = pQVar23->z;
              fVar4 = pQVar23->w;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              rotation.y = fVar2;
              rotation.x = fVar1;
              rotation.z = fVar6;
              rotation.w = fVar4;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_op_Multiply_1
                                  (&VStack_10,rotation,
                                   TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                   (MethodInfo *)0x0);
              fVar3 = pVVar5->x;
              fVar13 = pVVar5->y;
              fVar1 = pVVar5->z;
              fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                (0.0,4.5,(MethodInfo *)0x0);
              fVar1 = fVar1 * fVar6 + 0.0;
              fVar2 = fVar3 * fVar6 + 3.5041477e-29;
              fVar6 = (float)this + fVar13 * fVar6;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar24)();
  return pVVar5;
}


/* Void Init(MVRuntimeDataVariable, JetPackMotor+JetPackMotorConfig) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_Init
               (JetPackMotor *this,MVRuntimeDataVariable *jetMode,
               JetPackMotor_JetPackMotorConfig jetPackMotorConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    func_?(&MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&TypeInfo__BounceState);
    func_?(&TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>);
    func_?(&
                    WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                   );
    func_?(&MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&MethodInfo__JetPackMotor___Init_b__65_0_System__Object_);
    func_?(&TypeInfo__MVMovableMotorState);
    func_?(&MethodInfo__MvCharacterController__GetOverlappingObjects__);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__MVRigidBody__StuckEvaluator);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pBVar1 = (BounceState *)func_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor
            (pBVar1,(MVInteractable *)jetPackMotorConfig.interactableLocal,(MethodInfo *)0x0);
  (this->fields).bounceState = pBVar1;
  func_?(&(this->fields).bounceState,pBVar1);
  (this->fields).thrust = jetPackMotorConfig.thrustStrength;
  (this->fields).smoothController = jetPackMotorConfig.avatarController;
  (this->fields).thrustOutOfEnergyMax = jetPackMotorConfig.outOfEnergyThrustMax;
  (this->fields)._.density = jetPackMotorConfig.density;
  func_?(&(this->fields).smoothController,jetPackMotorConfig.avatarController);
  this_00 = (this->fields)._._.worldObjectParent;
  if (this_00 == (MVWorldObjectClient *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pHVar2 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                       (this_00,(MethodInfo *)0x0);
    pSVar3 = (this->fields).smoothController;
    if ((pSVar3 == (SmoothCharacterController *)0x0) ||
       (pMVar4 = (pSVar3->fields).controller, pMVar4 == (MvCharacterController *)0x0))
    goto code_?;
    (pMVar4->fields).IgnoreWoIds = pHVar2;
    func_?(&(pMVar4->fields).IgnoreWoIds);
    pSVar3 = (this->fields).smoothController;
    if (pSVar3 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar4 = (pSVar3->fields).controller;
    this_01 = (Func_1_Object_ *)func_?();
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (this_01,(Object *)pMVar4,MethodInfo__MvCharacterController__GetOverlappingObjects__,
               (MethodInfo *)0x0);
    this_02 = (MVRigidBody_StuckEvaluator *)func_?(TypeInfo__MVRigidBody__StuckEvaluator);
    MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
              (this_02,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).stuckEvaluator = this_02;
    func_?(&(this->fields).stuckEvaluator,this_02);
    this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__MVMovableMotorState);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_03,(MethodInfo *)0x0);
    (this->fields).movableMotorState = (MVMovableMotorState *)this_03;
    func_?(&(this->fields).movableMotorState,this_03);
    (this->fields).interactable = (MVInteractableBase *)jetPackMotorConfig.interactableLocal;
    func_?();
    if ((jetPackMotorConfig.avatarController == (SmoothCharacterController *)0x0) ||
       (pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller,
       pMVar4 == (MvCharacterController *)0x0)) goto code_?;
    pAVar5 = (Action_1_MVControllerColliderHit_ *)func_?();
    if (jetPackMotorConfig.interactableLocal == (AvatarInteractable *)0x0) goto code_?;
    b = jetPackMotorConfig.interactableLocal;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar5,(Object *)jetPackMotorConfig.interactableLocal,
               (jetPackMotorConfig.interactableLocal)->klass[1]._0.image,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)b,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      (pMVar4->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
    }
    else {
      pAVar5 = (Action_1_MVControllerColliderHit_ *)func_?();
      if (pAVar5 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      (pMVar4->fields).OnControllerColliderHit = pAVar5;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
    }
    func_?();
    pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller;
    if (pMVar4 == (MvCharacterController *)0x0) goto code_?;
    pAVar5 = (pMVar4->fields).OnControllerColliderHit;
    pBVar1 = (this->fields).bounceState;
    this_04 = (Action_1_MVControllerColliderHit_ *)func_?();
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (this_04,(Object *)pBVar1,
               MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      this_04[1].fields._._.interp_method = (void *)0x0;
code_?:
      func_?();
      if (_UNK_? == 0) goto code_?;
      pDVar6 = *(Delegate **)(_UNK_? + 100);
      object = (this->fields).impactState;
      pAVar5 = (Action_1_MVControllerColliderHit_ *)func_?();
      mscorlib.dll::System::Action`1[MVControllerColliderHit]::
      Action_1_MVControllerColliderHit___ctor
                (pAVar5,(Object *)object,
                 MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar6,(Delegate *)pAVar5,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        pAVar5[1].fields._._.interp_method = (void *)0x0;
      }
      else {
        pvVar8 = (void *)func_?();
        if (pvVar8 == (void *)0x0) goto code_?;
        pAVar5[1].fields._._.interp_method = pvVar8;
        iVar7 = func_?();
        if (iVar7 == 0) goto code_?;
      }
      func_?();
      (this->fields).vehicleInteractable =
           (MVInteractableBase *)jetPackMotorConfig.vehicleInteractable;
      func_?();
      this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_05 == (GameObject *)0x0) goto code_?;
      pVVar9 = (VehicleEnergyContainer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (this_05,
                           WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                          );
      (this->fields).vehicleEnergyContainer = pVVar9;
      func_?(&(this->fields).vehicleEnergyContainer);
      pVVar9 = (this->fields).vehicleEnergyContainer;
      if (pVVar9 == (VehicleEnergyContainer *)0x0) goto code_?;
      config.storage = (int32_t)jetPackMotorConfig.interactableLocal;
      config._0_4_ = &(this->fields).interactable;
      config.consumption = jetPackMotorConfig.vehicleEnergyContainerConfig.consumption;
      WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Init
                (pVVar9,config,(MethodInfo *)0x0);
      if (jetMode == (MVRuntimeDataVariable *)0x0) goto code_?;
      pMVar10 = (jetMode->fields).OnChange;
      this_06 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_06,(Object *)this,MethodInfo__JetPackMotor___Init_b__65_0_System__Object_,
                 (MethodInfo *)0x0);
      pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pMVar10,(Delegate *)this_06,(MethodInfo *)0x0);
      if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (jetMode->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        func_?();
        return;
      }
      pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar10->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar11 = pMVar10;
      }
      if (pMVar11 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (jetMode->fields).OnChange = pMVar11;
        pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar10->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar11 = pMVar10;
        }
        if (pMVar11 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pvVar8 = (void *)func_?();
    if (pvVar8 != (void *)0x0) {
      this_04[1].fields._._.interp_method = pvVar8;
      iVar7 = func_?();
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_IsStuck(JetPackMotor *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckEvaluator;
  if (this_00 != (MVRigidBody_StuckEvaluator *)0x0) {
    this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<int>);
      func_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    pOStack_1 = (Object__Class *)0x0;
    pMVar2 = (MethodInfo *)0x0;
    pOStack_3 = (Object__Class *)0x0;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar4 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
      pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar5 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar6 == 0) goto code_?;
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)0x0;
    (this_00->fields).updateTime = fVar4;
    this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_00,(MethodInfo *)0x0);
    if (this_01 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
code_?:
        *unaff_FS_OFFSET = this_06;
        return 0;
      }
    }
    else {
      this_02 = (MethodInfo *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if ((pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (pDVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                              ),
         this_03 !=
         (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        pDVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)&stack0xffffffa4,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                           );
        key_00 = (MethodInfo *)pDVar7->_currentValue;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_1,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                            );
          if (bVar8 == 0) break;
          in_stack_9 = key_00;
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32,PendingPrototypeData]::
                  Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                            ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                             (int32_t)key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                            );
          if (bVar8 == 0) {
            if (this_02 == (MethodInfo *)0x0) goto code_?;
            pMVar10 = this_02;
            func_?();
            in_stack_11 = this_02;
            this_02 = pMVar10;
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_1,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   ,in_stack_11);
        if (this_02 != (MethodInfo *)0x0) {
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffa4,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_02,
                              MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
          key = pLVar12->_current;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&stack0xffffff78,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                   ), bVar8 != 0) {
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar13,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                      );
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff78,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,pMVar2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffff98,
                     (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                    );
          while( true ) {
            this_05 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                      &stack0xffffffb4;
            pOVar14 = (Object__Class *)
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
            ;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              (this_05,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar8 == 0) break;
            key_01 = &UNK_?;
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar13,0xADDR,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                              );
            pMVar2 = (MethodInfo *)(this_00->fields).stuckObjects;
            if (bVar8 == 0) {
              this_01 = TypeInfo__MVRigidBody_StuckEvaluator__StuckObject;
              pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
              iVar6 = 0;
              overlapResult.localCubePos = (IntVector__Array *)pOVar14;
              overlapResult.woId = (int32_t)this_05;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar15,overlapResult,(MethodInfo *)0x0);
              if (pMVar2 == (MethodInfo *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,iVar6,(Object *)pMVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                        );
            }
            else {
              if ((pMVar2 == (MethodInfo *)0x0) ||
                 (this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 , pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,
                                       (int32_t)key_01,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar16 == (Object *)0x0)) goto code_?;
              pOVar16[1].monitor = (MonitorData *)this_05;
              pOVar16[2].klass = pOVar14;
              func_?();
              in_stack_9 = pMVar2;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     ,in_stack_9);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                    );
          pDVar5 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this_00->fields).stuckObjects;
          if ((pDVar5 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (pDVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_04 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            pDVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 *)&stack0xffffffa4,this_04,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            pOStack_3 = (Object__Class *)pDVar7->_dictionary;
            pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar7->_currentValue;
            while( true ) {
              this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                         *)&pOStack_3;
              bVar8 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                (this_06,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (pMVar15 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              if (_UNK_? <= fVar4 - (pMVar15->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar8 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (pMVar15,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&pOStack_3,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_17);
                  *unaff_FS_OFFSET = this_06;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&pOStack_3,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                       ,unaff_retaddr);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  bVar8 = (*pcVar18)();
  return bVar8;
}


/* GroundChange Move(Vector3, Vector3) */

GroundChange__Enum
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_Move
          (JetPackMotor *this,Vector3 velocity,Vector3 baseVelocity,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pSVar2 = (this->fields).smoothController;
  if ((pSVar2 != (SmoothCharacterController *)0x0) &&
     (pMVar3 = (pSVar2->fields).controller, pMVar3 != (MvCharacterController *)0x0)) {
    (*(code *)(pMVar3->klass->vtable).__unknown_1.method)
              (pMVar3,(velocity.x + baseVelocity.x) * fVar1,(velocity.y + baseVelocity.y) * fVar1,
               (velocity.z + baseVelocity.z) * fVar1,(pMVar3->klass->vtable).__unknown_2.methodPtr);
    pSVar2 = (this->fields).smoothController;
    if ((pSVar2 != (SmoothCharacterController *)0x0) &&
       (this_00 = (this->fields)._.groundState, this_00 != (MVGroundState *)0x0)) {
      MVGroundState::MVGroundState_Update
                (this_00,(pSVar2->fields).controller,velocity,0.0,(MethodInfo *)0x0);
      return GroundChange__Enum_UnChanged;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Void OnJetModeChange(MVJetPack+JetModeType) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_OnJetModeChange
               (JetPackMotor *this,MVJetPack_JetModeType__Enum jetModeType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields).vehicleEnergyContainer;
  if (pVVar2 != (VehicleEnergyContainer *)0x0) {
    (pVVar2->fields).consumingEnergy =
         (undefined1)jetModeType == MVJetPack_JetModeType__Enum_On ||
         (undefined1)jetModeType == MVJetPack_JetModeType__Enum_Overheating;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_RefillEnergy
               (JetPackMotor *this,VehicleEnergyRefill vehicleEnergyRefill,MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyContainer;
  if (this_00 != (VehicleEnergyContainer *)0x0) {
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,vehicleEnergyRefill,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RollbackRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_RollbackRefillEnergyPrediction
               (JetPackMotor *this,int32_t spawnerId,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 != (VehicleEnergyContainer *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar2 = 0.0;
    pDVar3 = (pVVar1->fields).predictions;
    if (pDVar3 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                        (pDVar3,spawnerId,(VehicleEnergyRefillPrediction *)&stack0xffffffe0,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                        );
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar2 = (pVVar1->fields).energyStorage - fVar2 * (pVVar1->fields).originalEnergyStorage;
        (pVVar1->fields).energyStorage = fVar2;
        if (fVar2 < 0.0) {
          (pVVar1->fields).energyStorage = 0.0;
        }
        pDVar3 = (pVVar1->fields).predictions;
        if (pDVar3 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar3,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
      }
      return;
    }
  }
code_?:
  uVar5 = func_?(&stack0xffffffdc);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_SuspendImpactDamage
               (JetPackMotor *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if (cRam_? == '\0') {
      ppVStack_2 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (pIVar1->fields).prevVelocityChangeVector.x = (pVVar3->zeroVector).x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar4;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar5;
    (pIVar1->fields).collidedPrevFrame = 0;
    return;
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_UsesEnergy
               (JetPackMotor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields).vehicleEnergyContainer;
  if (pVVar2 != (VehicleEnergyContainer *)0x0) {
    return (pVVar2->fields)._UsingEnergy_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void <Init>b__65_0(Object) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor__Init_b__65_0
               (JetPackMotor *this,Object *jetModeVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MVJetPack_JetModeType__Enum__Class *)&TypeInfo__MVJetPack__JetModeType;
    func_?();
    cRam_? = '\x01';
  }
  if (jetModeVal != (Object *)0x0) {
    if ((jetModeVal->klass->_0).element_class !=
        (TypeInfo__MVJetPack__JetModeType->_0).element_class) {
      pMStack_1 = TypeInfo__MVJetPack__JetModeType;
      pOStack_2 = jetModeVal;
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMStack_1 = (MVJetPack_JetModeType__Enum__Class *)jetModeVal;
    pcVar4 = (char *)func_?();
    pVVar5 = (this->fields).vehicleEnergyContainer;
    if (pVVar5 != (VehicleEnergyContainer *)0x0) {
      (pVVar5->fields).consumingEnergy = *pcVar4 == '\x01' || *pcVar4 == '\x02';
      return;
    }
  }
  pMStack_1 = (MVJetPack_JetModeType__Enum__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JetPackMotor() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor__ctor(JetPackMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    func_?(&TypeInfo__ImpactState);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__KeyValuePair_float__float_
                   );
    func_?(&TypeInfo__UnityEngine__Keyframe);
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&_5F4C7E3BCFA8C6ACC6CE23964419D17A794C3AA4EFB5F94B393C30094512435C_Field);
    cRam_? = '\x01';
  }
  (this->fields).thrust = 1500.0;
  mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
            ((ValueTuple_2_Single_Single_ *)&stack0xfffffff4,100.0,400.0,
             MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__KeyValuePair_float__float_
            );
  (this->fields).leaveModeRotationRange.key = 0.0;
  (this->fields).leaveModeRotationRange.value = 0.0;
  keys = (Keyframe__Array *)func_?(TypeInfo__UnityEngine__Keyframe,3);
  fVar1 = 0.0;
  uStack_2._0_4_ = 0;
  uStack_2._4_4_ = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
            ((Keyframe *)&fStack_3,-90.0,1.0,(MethodInfo *)0x0);
  if (keys == (Keyframe__Array *)0x0) {
    func_?();
  }
  else if (keys->max_length != 0) {
    keys->vector[0].m_Time = fStack_3;
    keys->vector[0].m_Value = fStack_4;
    keys->vector[0].m_InTangent = fStack_5;
    keys->vector[0].m_OutTangent = fStack_6;
    keys->vector[0].m_WeightedMode = (int32_t)uStack_2;
    keys->vector[0].m_InWeight = uStack_2._4_4_;
    keys->vector[0].m_OutWeight = fVar1;
    fVar1 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
              ((Keyframe *)&stack0xffffffbc,0.0,1.0,(MethodInfo *)0x0);
    if (1 < keys->max_length) {
      keys->vector[1].m_Time = fVar1;
      keys->vector[1].m_Value = fVar7;
      keys->vector[1].m_InTangent = fVar8;
      keys->vector[1].m_OutTangent = fVar9;
      keys->vector[1].m_WeightedMode = 0;
      keys->vector[1].m_InWeight = 0.0;
      keys->vector[1].m_OutWeight = 0.0;
      fVar1 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
      uVar11._4_4_ = (float)&stack0xffffffa0;
      uVar11._0_4_ = (int32_t)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
                ((Keyframe *)&stack0xffffffa0,0.0,1.0,(MethodInfo *)0x0);
      if (2 < keys->max_length) {
        keys->vector[2].m_Time = fVar1;
        keys->vector[2].m_Value = fVar7;
        keys->vector[2].m_InTangent = fVar8;
        keys->vector[2].m_OutTangent = fVar9;
        keys->vector[2].m_WeightedMode = (int32_t)uVar11;
        keys->vector[2].m_InWeight = SUB84(uVar11,4);
        keys->vector[2].m_OutWeight = fVar10;
        this_00 = (AnimationCurve *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor
                  (this_00,keys,(MethodInfo *)0x0);
        (this->fields).slopeSpeedMultiplier = this_00;
        func_?();
        explosionEvents = (RuntimeEventType__Enum__Array *)func_?();
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)explosionEvents,
                   __5F4C7E3BCFA8C6ACC6CE23964419D17A794C3AA4EFB5F94B393C30094512435C_Field,
                   (MethodInfo *)0x0);
        this_01 = (ImpactState *)func_?();
        ImpactState::ImpactState__ctor(this_01,explosionEvents,(MethodInfo *)0x0);
        (this->fields).impactState = this_01;
        func_?();
        uStack_2._4_4_ = (float)&UNK_?;
        MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MvCharacterController get_Controller() */

MvCharacterController *
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Controller
          (JetPackMotor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).smoothController;
  if (pSVar2 != (SmoothCharacterController *)0x0) {
    return (pSVar2->fields).controller;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar6 = (MvCharacterController *)(*pcVar5)();
  return pMVar6;
}


/* Vector3 get_Impulses() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Impulses
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bVar6 = cRam_? == '\0';
  LStack_7._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.Quadrant = 0;
  LStack_7._current.FirstAxisSign = 0;
  LStack_7._current.SecondAxisSign = 0;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar6) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  __return_storage_ptr__->x = (pVVar8->zeroVector).x;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar10;
  method_00 = (MethodInfo *)(this->fields)._.impulseVectors;
  if (method_00 != (MethodInfo *)0x0) {
    if (method_00->name != (char *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                         (&LStack_12,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)method_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                         );
      uStack_13 = 0;
      LStack_7._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar11->_list;
      LStack_7._index = pLVar11->_index;
      LStack_7._version = pLVar11->_version;
      LStack_7._current.Quadrant = (int32_t)(pLVar11->_current).alias;
      LStack_7._current.FirstAxisSign = (int32_t)(pLVar11->_current).path;
      LStack_7._current.SecondAxisSign = (int32_t)(pLVar11->_current).asset;
      uStack_1 = 1;
      pLStack_14 = &LStack_7;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar15 == 0) break;
        uStack_16._0_4_ = __return_storage_ptr__->x;
        uStack_16._4_4_ = __return_storage_ptr__->y;
        fStack_17 = __return_storage_ptr__->z;
        LStack_12._current.asset =
             (VisualTreeAsset *)((float)LStack_7._current.SecondAxisSign + fStack_17);
        __return_storage_ptr__->x =
             (float)LStack_7._current.Quadrant + (float)(undefined4)uStack_16;
        __return_storage_ptr__->y = (float)LStack_7._current.FirstAxisSign + (float)uStack_16._4_4_
        ;
        __return_storage_ptr__->z = (float)LStack_12._current.asset;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pLVar18 = (this->fields)._.impulseVectors;
      if (pLVar18 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      piVar19 = &(pLVar18->fields)._version;
      *piVar19 = *piVar19 + 1;
      (pLVar18->fields)._size = 0;
    }
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  pVVar22 = (Vector3 *)(*pcVar21)();
  return pVVar22;
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


/* Boolean get_OutOfEnergy() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_OutOfEnergy
               (JetPackMotor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields).vehicleEnergyContainer;
  if (pVVar2 == (VehicleEnergyContainer *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pVVar2->fields)._UsingEnergy_k__BackingField == 0) {
    return 0;
  }
  return (pVVar2->fields).energyStorage <= 0.0;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
    uVar3 = (pMVar2->fields)._Velocity_k__BackingField.x;
    uVar4 = (pMVar2->fields)._Velocity_k__BackingField.y;
    fVar5 = (pMVar2->fields)._Velocity_k__BackingField.z;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    __return_storage_ptr__->x = (float)uVar3 / fVar6;
    __return_storage_ptr__->y = (float)uVar4 / fVar6;
    __return_storage_ptr__->z = fVar5 / fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
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
    func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    func_?(&TypeInfo__IMoveHitHandler);
    cRam_? = '\x01';
  }
  (this->fields).leaveMode = value;
  if (value == 0) {
    return;
  }
  iVar1 = func_?((this->fields).interactable,TypeInfo__IMoveHitHandler);
  if (iVar1 == 0) goto code_?;
  pDVar2 = (Delegate *)(this->fields).interactable;
  _value = (Action_1_MVControllerColliderHit___Class *)TypeInfo__IMoveHitHandler;
  if (pDVar2 == (Delegate *)0x0) {
    object = (Action_1_MVControllerColliderHit___Class *)0x0;
code_?:
    pSVar3 = (this->fields).smoothController;
    if ((pSVar3 != (SmoothCharacterController *)0x0) &&
       (pAVar4 = (Action_1_MVControllerColliderHit___Class *)(pSVar3->fields).controller,
       _value = pAVar4, pAVar4 != (Action_1_MVControllerColliderHit___Class *)0x0)) {
      source = (Delegate *)(pAVar4->_1).typeHierarchy;
      this_00 = (Action_1_MVControllerColliderHit_ *)
                func_?(TypeInfo__System__Action<MVControllerColliderHit>);
      if (object != (Action_1_MVControllerColliderHit___Class *)0x0) {
        uVar5 = 0;
        uVar6 = *(ushort *)((int)&(object->_0).image[4].nameNoExt + 2);
        if (uVar6 != 0) {
          do {
            if (*(IMoveHitHandler__Class **)((object->_0).image[2].name + (uint)uVar5 * 8) ==
                TypeInfo__IMoveHitHandler) {
              pIVar7 = (object->_0).image;
              puVar8 = &pIVar7[4].exportedTypeCount +
                       *(int *)(pIVar7[2].name + (uint)uVar5 * 8 + 4) * 2;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        puVar8 = (uint32_t *)func_?(object,TypeInfo__IMoveHitHandler,0);
code_?:
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (this_00,(Object *)object,(void *)puVar8[1],(MethodInfo *)0x0);
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (source,(Delegate *)this_00,(MethodInfo *)0x0);
        object = TypeInfo__System__Action<MVControllerColliderHit>;
        if (pDVar2 == (Delegate *)0x0) {
          (pAVar4->_1).typeHierarchy = (Il2CppClass **)0x0;
          iVar1 = 0;
        }
        else {
          ppIVar9 = (Il2CppClass **)
                     func_?(pDVar2,TypeInfo__System__Action<MVControllerColliderHit>);
          if (ppIVar9 == (Il2CppClass **)0x0) goto code_?;
          (pAVar4->_1).typeHierarchy = ppIVar9;
          _value = TypeInfo__System__Action<MVControllerColliderHit>;
          iVar1 = func_?(pDVar2,TypeInfo__System__Action<MVControllerColliderHit>);
          object = pAVar4;
          if (iVar1 == 0) goto code_?;
        }
        func_?(&pAVar4->_1,iVar1);
code_?:
        pMVar10 = (this->fields).vehicleInteractable;
        (this->fields).interactable = pMVar10;
        func_?(&(this->fields).interactable,pMVar10);
        return;
      }
    }
    func_?();
  }
  else {
    object = (Action_1_MVControllerColliderHit___Class *)
             func_?(pDVar2,TypeInfo__IMoveHitHandler);
    if (object != (Action_1_MVControllerColliderHit___Class *)0x0) goto code_?;
  }
code_?:
  func_?(pDVar2,_value);
code_?:
  func_?(pDVar2,object);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

