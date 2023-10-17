
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
    fVar11 = MathFunctions::MathFunctions_Pow2(0.43,(MethodInfo *)0x0);
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
           (*(this->klass->vtable).get_Velocity.methodPtr)
                     (auStack_2,this,(this->klass->vtable).get_Velocity.method);
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
      (*(pMVar2->klass->vtable).__unknown.methodPtr)();
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
    cVar9 = (*(pJVar8->vtable).get_IsMovementLocked.methodPtr)();
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
       (fVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_distance
                           ((RaycastHit *)pMVar4,(MethodInfo *)0x0),
       this_00 != (MVMovableMotorState *)0x0)) {
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
        (*(pMVar4->klass->vtable).__unknown_1.methodPtr)();
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
                  (*(pMVar28->klass->vtable).__unknown.methodPtr)();
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
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar4 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar5->fields)._size) {
        pSVar6 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar5,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).current = pSVar6;
        ppSVar4 = &(this_00->fields).current;
        func_?();
      }
      if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar5->fields)._size) {
        pSVar6 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar5,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).next = pSVar6;
        ppSVar4 = &(this_00->fields).next;
        func_?();
      }
    }
    if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar6 = (this_00->fields).next;
    ppSVar7 = &(this_00->fields).next;
    do {
      if ((float)ppSVar4 < (pSVar6->fields).time) {
code_?:
        pSVar6 = (this_00->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar6->fields).time;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar3 = ((float)ppSVar4 - fVar2) / fVar3;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar6 = (this_00->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar9 = (pSVar6->fields).position.x;
        uVar10 = (pSVar6->fields).position.y;
        pSVar11 = (this_00->fields).next;
        fVar2 = (pSVar6->fields).position.z;
        if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar12 = (pSVar11->fields).position.x;
        uVar13 = (pSVar11->fields).position.y;
        fVar14 = 0.0;
        if ((0.0 <= fVar3) && (fVar14 = _UNK_?, fVar3 <= _UNK_?)) {
          fVar14 = fVar3;
        }
        if (pTVar8 == (Transform *)0x0) break;
        this = (JetPackMotor *)(((pSVar11->fields).position.z - fVar2) * fVar14 + fVar2);
        fVar15 = ((float)uVar13 - (float)uVar10) * fVar14 + (float)uVar10;
        fVar16 = ((float)uVar12 - (float)uVar9) * fVar14 + (float)uVar9;
        VVar17 = (Vector3)CONCAT84(VVar17._0_8_,fVar16);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar8,VVar17,(MethodInfo *)0x0);
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar6 = (this_00->fields).current;
        if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
           (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) break;
        fVar2 = (pSVar6->fields).rotation.y;
        pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd0,(pSVar6->fields).rotation,
                             (pSVar11->fields).rotation,(float)this_00,(MethodInfo *)0x0);
        if (pTVar8 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar8,*pQVar18,(MethodInfo *)0x0);
        if ((this_00->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
             ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) break;
          (*(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.methodPtr)();
          pSVar6 = (this_00->fields).current;
          this_01 = (this_00->fields).worldObjectOwner;
          if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
             ((pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0 ||
              (pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                   ((Quaternion *)&stack0xffffffd0,(pSVar6->fields).rotation,
                                    (pSVar11->fields).rotation,fVar2,(MethodInfo *)0x0),
              this_01 == (MVWorldObjectClient *)0x0)))) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_01,*pQVar18,(MethodInfo *)0x0);
        }
        if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_02 = (this_00->fields).cullingSubscriberBase;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
          uVar20 = pVVar19->x;
          uVar21 = pVVar19->y;
          this = (JetPackMotor *)pVVar19->z;
          fVar15 = (float)uVar21;
          fVar22 = (float)uVar20;
          VVar17 = (Vector3)CONCAT84(VVar17._0_8_,fVar22);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_02,VVar17,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar5->fields)._size < 1) goto code_?;
      (this_00->fields).current = *ppSVar7;
      func_?();
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar7 = pSVar6;
      ppSVar4 = ppSVar7;
      func_?();
      pSVar6 = *ppSVar7;
    } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields).interactable;
  if (pMVar1 != (MVInteractableBase *)0x0) {
    fVar2 = (float10)(*(pMVar1->klass->vtable).__unknown_6.methodPtr)
                               (pMVar1,3,0x41400000,(pMVar1->klass->vtable).__unknown_6.method);
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
                       ((Vector3 *)&stack0xffffffd4,this_01,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    fVar4 = (this_00->fields).center.z;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    radius = (this_00->fields).elipsoidRadius;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ignoreWoIds = (this_00->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position.y = 0.0;
    position.x = (float)ignoreWoIds;
    position.z = fVar4 + fVar3;
    pLVar5 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                       (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    return pLVar5;
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar5 = (List_1_MVOverlapResult_ *)(*pcVar6)();
  return pLVar5;
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
  fVar1 = MathFunctions::MathFunctions_Pow2(0.43,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 * fVar1;
  fVar3 = velocity.x - velocity.x * fVar2;
  fVar1 = velocity.y - velocity.y * fVar2;
  fVar2 = velocity.z - velocity.z * fVar2;
  pVVar4 = JetPackMotor_GetDesiredHorizontalVelocity
                      ((Vector3 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar4->x;
  uVar5._4_4_ = pVVar4->y;
  fStack_6 = pVVar4->z;
  VVar7 = *pVVar4;
  pMVar8 = (this->fields)._.groundState;
  if (pMVar8 != (MVGroundState *)0x0) {
    bVar9 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
    if ((bVar9 != 0) && ((this->fields)._Thrust_k__BackingField == 0)) {
      pMVar8 = (this->fields)._.groundState;
      if (pMVar8 == (MVGroundState *)0x0) goto code_?;
      pVVar4 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                          (&VStack_10,VVar7,(pMVar8->fields).groundNormal,(MethodInfo *)0x0);
      uVar11 = pVVar4->x;
      uVar12 = pVVar4->y;
      fStack_6 = baseVelocity.z + pVVar4->z;
      uVar5 = CONCAT44(baseVelocity.y + (float)uVar12,baseVelocity.x + (float)uVar11);
    }
    fVar13 = (float)uVar5 - fVar3;
    fVar14 = (float)((ulonglong)uVar5 >> 0x20) - fVar1;
    fStack_6 = fStack_6 - fVar2;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar15 = fVar15 / _UNK_?;
    fVar13 = fVar13 * fVar15;
    fStack_6 = fStack_6 * fVar15;
    fVar16 = MathFunctions::MathFunctions_Pow2(0.43,(MethodInfo *)0x0);
    fVar2 = fStack_6 * fVar16 + fVar2;
    fVar3 = fVar13 * fVar16 + fVar3;
    fVar1 = fVar14 * fVar15 * fVar16 + fVar1;
    pMVar8 = (this->fields)._.groundState;
    if (pMVar8 != (MVGroundState *)0x0) {
      bVar9 = MVGroundState::MVGroundState_get_Grounded(pMVar8,(MethodInfo *)0x0);
      uVar17 = CONCAT44(fVar1,fVar3);
      if (bVar9 == 0) {
        VStack_10.z = (float)&UNK_?;
        VVar7.y = fVar1;
        VVar7.x = fVar3;
        VVar7.z = fVar2;
        pVVar4 = MVRigidBody::MVRigidBody_ApplyGravity
                            (&VStack_10,(MVRigidBody *)this,VVar7,(this->fields).velocityPrevFrame,
                             (this->fields).interactable,(MethodInfo *)0x0);
        uVar17._0_4_ = pVVar4->x;
        uVar17._4_4_ = pVVar4->y;
        fVar2 = pVVar4->z;
      }
      this_00 = (this->fields).bounceState;
      if (this_00 != (BounceState *)0x0) {
        velocity_01.z = fVar2;
        velocity_01.x = (float)(int)uVar17;
        velocity_01.y = (float)(int)((ulonglong)uVar17 >> 0x20);
        pVVar4 = BounceState::BounceState_ApplyBounceVelocity
                            (&VStack_10,this_00,velocity_01,(MethodInfo *)0x0);
        fVar1 = pVVar4->x;
        fVar3 = pVVar4->y;
        fVar2 = pVVar4->z;
        if ((this->fields)._Thrust_k__BackingField == 0) {
code_?:
          velocity_00.y = fVar3;
          velocity_00.x = fVar1;
          velocity_00.z = fVar2;
          pVVar4 = MVRigidBody::MVRigidBody_GetImpulse
                              (&VStack_10,(MVRigidBody *)this,velocity_00,
                               (this->fields).interactable,(MethodInfo *)0x0);
          pVVar4 = MVRigidBody::MVRigidBody_VelocityDamping
                              (&VStack_10,*pVVar4,1.0,(this->fields).interactable,(MethodInfo *)0x0
                              );
          fVar1 = pVVar4->y;
          fVar2 = pVVar4->z;
          __return_storage_ptr__->x = pVVar4->x;
          __return_storage_ptr__->y = fVar1;
          __return_storage_ptr__->z = fVar2;
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
              pVVar4 = (Vector3 *)(this->fields).thrustOutOfEnergyMax;
              if ((float)pVVar4 < (float)__return_storage_ptr__) {
                __return_storage_ptr__ = pVVar4;
              }
            }
          }
          JetPackMotor_ApplyJetImpulse(this,(float)__return_storage_ptr__,(MethodInfo *)0x0);
          if (((this->fields)._Thrust_k__BackingField == 0) || ((this->fields).leaveMode == 0))
          goto code_?;
          JetPackMotor_ApplyJetImpulse(this,1000.0,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          pSVar18 = (this->fields).smoothController;
          if ((pSVar18 != (SmoothCharacterController *)0x0) &&
             (pMVar19 = (pSVar18->fields).controller, pMVar19 != (MvCharacterController *)0x0)) {
            uVar20 = (pMVar19->fields).center.x;
            uVar21 = (pMVar19->fields).center.y;
            fVar2 = (pMVar19->fields).center.z;
            if (this_02 != (Transform *)0x0) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_10,this_02,(MethodInfo *)0x0);
              uVar22 = pVVar4->x;
              uVar23 = pVVar4->y;
              fVar1 = (float)uVar22 + (float)uVar20;
              fVar3 = (float)uVar23 + (float)uVar21;
              fVar2 = pVVar4->z + fVar2;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar25 = (pVVar24->upVector).x;
              uVar26 = (pVVar24->upVector).y;
              fVar15 = (pVVar24->upVector).z;
              fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                 ((this->fields).leaveModeRotationRange.key,
                                  (this->fields).leaveModeRotationRange.value,(MethodInfo *)0x0);
              fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              point.y = fVar3;
              point.x = fVar1;
              point.z = fVar2;
              axis.y = (float)uVar26;
              axis.x = (float)uVar25;
              axis.z = fVar15;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                        (this_02,point,axis,fVar14 * fVar13,(MethodInfo *)0x0);
              pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)&stack0xffffff80,this_02,(MethodInfo *)0x0);
              fVar2 = pQVar27->x;
              fVar1 = pQVar27->y;
              fVar3 = pQVar27->z;
              fVar15 = pQVar27->w;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              rotation.y = fVar1;
              rotation.x = fVar2;
              rotation.z = fVar3;
              rotation.w = fVar15;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_op_Multiply_1
                                  (&VStack_10,rotation,
                                   TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                   (MethodInfo *)0x0);
              fVar1 = pVVar4->x;
              fVar3 = pVVar4->y;
              fVar2 = pVVar4->z;
              fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                 (0.0,4.5,(MethodInfo *)0x0);
              fVar2 = fVar2 * fVar15 + 0.0;
              fVar1 = fVar1 * fVar15 + 3.3123344e-29;
              fVar3 = (float)this + fVar3 * fVar15;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar28)();
  return pVVar4;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pBVar1 = (BounceState *)func_?(TypeInfo__BounceState);
  if (pBVar1 == (BounceState *)0x0) {
code_?:
    func_?();
  }
  else {
    BounceState::BounceState__ctor
              (pBVar1,(MVInteractable *)jetPackMotorConfig.interactableLocal,(MethodInfo *)0x0);
    (this->fields).bounceState = pBVar1;
    func_?(&(this->fields).bounceState,pBVar1);
    (this->fields).thrust = jetPackMotorConfig.thrustStrength;
    (this->fields).thrustOutOfEnergyMax = jetPackMotorConfig.outOfEnergyThrustMax;
    (this->fields)._.density = jetPackMotorConfig.density;
    (this->fields).smoothController = jetPackMotorConfig.avatarController;
    func_?(&(this->fields).smoothController,jetPackMotorConfig.avatarController);
    this_00 = (this->fields)._._.worldObjectParent;
    if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
    pHVar2 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                       (this_00,(MethodInfo *)0x0);
    pSVar3 = (this->fields).smoothController;
    if ((pSVar3 == (SmoothCharacterController *)0x0) ||
       (pMVar4 = (pSVar3->fields).controller, pMVar4 == (MvCharacterController *)0x0))
    goto code_?;
    (pMVar4->fields).IgnoreWoIds = pHVar2;
    func_?(&(pMVar4->fields).IgnoreWoIds,pHVar2);
    pSVar3 = (this->fields).smoothController;
    if (pSVar3 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar4 = (pSVar3->fields).controller;
    this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                             );
    if (this_01 == (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
    RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
              (this_01,(Object *)pMVar4,MethodInfo__MvCharacterController__GetOverlappingObjects__,
               (MethodInfo *)0x0);
    this_02 = (MVRigidBody_StuckEvaluator *)func_?(TypeInfo__MVRigidBody__StuckEvaluator);
    if (this_02 == (MVRigidBody_StuckEvaluator *)0x0) goto code_?;
    MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
              (this_02,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).stuckEvaluator = this_02;
    func_?(&(this->fields).stuckEvaluator,this_02);
    this_03 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__MVMovableMotorState);
    if (this_03 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_03,(MethodInfo *)0x0);
    (this->fields).movableMotorState = (MVMovableMotorState *)this_03;
    func_?(&(this->fields).movableMotorState,this_03);
    (this->fields).interactable = (MVInteractableBase *)jetPackMotorConfig.interactableLocal;
    func_?(&(this->fields).interactable,jetPackMotorConfig.interactableLocal);
    if ((jetPackMotorConfig.avatarController == (SmoothCharacterController *)0x0) ||
       (pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller,
       pMVar4 == (MvCharacterController *)0x0)) goto code_?;
    pAVar5 = (pMVar4->fields).OnControllerColliderHit;
    pAVar6 = (Action_1_MVControllerColliderHit_ *)
             func_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if ((pAVar6 == (Action_1_MVControllerColliderHit_ *)0x0) ||
       (jetPackMotorConfig.interactableLocal == (AvatarInteractable *)0x0)) goto code_?;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar6,(Object *)jetPackMotorConfig.interactableLocal,
               ((jetPackMotorConfig.interactableLocal)->klass->vtable).HandleMoveHit.method,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)pAVar6,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pMVar4->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
    }
    else {
      pAVar5 = (Action_1_MVControllerColliderHit_ *)func_?();
      if (pAVar5 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      (pMVar4->fields).OnControllerColliderHit = pAVar5;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
    }
    func_?();
    pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller;
    if (pMVar4 == (MvCharacterController *)0x0) goto code_?;
    pAVar5 = (pMVar4->fields).OnControllerColliderHit;
    pBVar1 = (this->fields).bounceState;
    pAVar6 = (Action_1_MVControllerColliderHit_ *)
             func_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if (pAVar6 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar6,(Object *)pBVar1,
               MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)pAVar6,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pMVar4->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
    }
    else {
      pAVar5 = (Action_1_MVControllerColliderHit_ *)func_?();
      if (pAVar5 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      (pMVar4->fields).OnControllerColliderHit = pAVar5;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
    }
    func_?();
    pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller;
    if (pMVar4 == (MvCharacterController *)0x0) goto code_?;
    pAVar5 = (pMVar4->fields).OnControllerColliderHit;
    object = (this->fields).impactState;
    pAVar6 = (Action_1_MVControllerColliderHit_ *)
             func_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if (pAVar6 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar6,(Object *)object,
               MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)pAVar6,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pMVar4->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
      iVar8 = 0;
    }
    else {
      pAVar5 = (Action_1_MVControllerColliderHit_ *)func_?();
      if (pAVar5 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      (pMVar4->fields).OnControllerColliderHit = pAVar5;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
    }
    func_?();
    (this->fields).vehicleInteractable =
         (MVInteractableBase *)jetPackMotorConfig.vehicleInteractable;
    func_?(&(this->fields).vehicleInteractable);
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_04 == (GameObject *)0x0) goto code_?;
    pVVar9 = (VehicleEnergyContainer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this_04,
                         WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                        );
    (this->fields).vehicleEnergyContainer = pVVar9;
    func_?(&(this->fields).vehicleEnergyContainer,pVVar9);
    pVVar9 = (this->fields).vehicleEnergyContainer;
    if (pVVar9 == (VehicleEnergyContainer *)0x0) goto code_?;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Init
              (pVVar9,jetPackMotorConfig.vehicleEnergyContainerConfig,(MethodInfo *)0x0);
    if (iVar8 == 0) goto code_?;
    pDVar7 = *(Delegate **)(iVar8 + 0x20);
    this_05 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (this_05 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_05,(Object *)this,MethodInfo__JetPackMotor___Init_b__65_0_System__Object_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar7,(Delegate *)this_05,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      *(undefined4 *)(iVar8 + 0x20) = 0;
      func_?();
      return;
    }
    pDVar10 = (Delegate *)0x0;
    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar7->klass ==
        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pDVar10 = pDVar7;
    }
    if (pDVar10 != (Delegate *)0x0) {
      *(Delegate **)(iVar8 + 0x20) = pDVar10;
      pDVar10 = (Delegate *)0x0;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar7->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar10 = pDVar7;
      }
      if (pDVar10 != (Delegate *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_IsStuck(JetPackMotor *this,MethodInfo *method)

{
  this_02 = (this->fields).stuckEvaluator;
  if (this_02 != (MVRigidBody_StuckEvaluator *)0x0) {
    this_09 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
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
    OStack_3.klass = (Object__Class *)0x0;
    OStack_3.monitor = (MonitorData *)0x0;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar4 - (this_02->fields).updateTime < (this_02->fields).updateInterval) {
      pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this_02->fields).stuckObjects;
      if (pDVar5 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar6 == 0) goto code_?;
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_09 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
               *)0x0;
    (this_02->fields).updateTime = fVar4;
    this_03 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_02,(MethodInfo *)0x0);
    if (this_03 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this_02->fields).stuckObjects;
      if (pDVar5 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
code_?:
        *unaff_FS_OFFSET = this_09;
        return 0;
      }
    }
    else {
      this_04 = (MethodInfo *)func_?();
      if (this_04 != (MethodInfo *)0x0) {
        OStack_3.monitor = (MonitorData *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_04,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)(this_02->fields).stuckObjects;
        if ((pDVar5 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)0x0) &&
           (this_05 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                                (pDVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                                ),
           this_05 !=
           (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
            *)0x0)) {
          pDVar7 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffa4,
                              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)this_05,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          key_00 = (MethodInfo *)pDVar7->_currentValue;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                *)&pOStack_1,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                              );
            if (bVar8 == 0) break;
            in_stack_9 = key_00;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_03,
                               (Object *)key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                              );
            if (bVar8 == 0) {
              pMVar10 = this_04;
              func_?();
              in_stack_11 = this_04;
              this_04 = pMVar10;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&pOStack_1,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     ,in_stack_11);
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffa4,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_04,
                              MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
          key = pLVar12->_current;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&stack0xffffff78,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                   ), bVar8 != 0) {
            this_00 = (this_02->fields).stuckObjects;
            if (this_00 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                      );
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffff78,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,pMVar2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
          DefaultSerializationBinder+TypeNameKey,System::Object]::
          Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                      *)&stack0xffffff98,
                     (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                      *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                    );
          while( true ) {
            this_08 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                      &stack0xffffffb4;
            pOVar13 = (Object__Class *)
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
            ;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              (this_08,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar8 == 0) break;
            pSVar14 = (String *)&UNK_?;
            this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                      (this_02->fields).stuckObjects;
            if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
            goto code_?;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (this_01,(Object *)&UNK_?,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                              );
            pMVar2 = (MethodInfo *)(this_02->fields).stuckObjects;
            if (bVar8 == 0) {
              this_03 = TypeInfo__MVRigidBody_StuckEvaluator__StuckObject;
              pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
              if (pMVar15 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              pSVar14 = (String *)0x0;
              overlapResult.localCubePos = (IntVector__Array *)pOVar13;
              overlapResult.woId = (int32_t)this_08;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar15,overlapResult,(MethodInfo *)0x0);
              if (pMVar2 == (MethodInfo *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pMVar2,(Object *)pSVar14,
                         (Object *)pMVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                        );
            }
            else {
              if ((pMVar2 == (MethodInfo *)0x0) ||
                 (this_03 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 , pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pMVar2,
                                       (Int32Enum__Enum)pSVar14,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar16 == (Object *)0x0)) goto code_?;
              pOVar16[1].monitor = (MonitorData *)this_08;
              pOVar16[2].klass = pOVar13;
              func_?();
              in_stack_9 = pMVar2;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     ,in_stack_9);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                    ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                    );
          pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)(this_02->fields).stuckObjects;
          if ((pDVar5 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)0x0) &&
             (this_06 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                  (pDVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_06 !=
             (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)0x0)) {
            pDVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                     Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)&stack0xffffffa4,this_06,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            OStack_3.klass = (Object__Class *)pDVar7->_dictionary;
            OStack_3.monitor = (MonitorData *)pDVar7->_index;
            pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar7->_currentValue;
            while( true ) {
              this_07 = pMVar15;
              this_09 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                         *)&OStack_3;
              bVar8 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      Object,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                (this_09,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (this_07 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              pMVar15 = this_07;
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              if (_UNK_? <= fVar4 - (this_07->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar8 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (this_07,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (&OStack_3,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_17);
                  *unaff_FS_OFFSET = this_09;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (&OStack_3,
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
    (*(pMVar3->klass->vtable).__unknown_1.methodPtr)
              (pMVar3,(velocity.x + baseVelocity.x) * fVar1,(velocity.y + baseVelocity.y) * fVar1,
               (velocity.z + baseVelocity.z) * fVar1,(pMVar3->klass->vtable).__unknown_1.method);
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
    func_?(&::_5F4C7E3BCFA8C6ACC6CE23964419D17A794C3AA4EFB5F94B393C30094512435C_Field);
    cRam_? = '\x01';
  }
  VStack_1.Item1 = 0.0;
  VStack_1.Item2 = 0.0;
  (this->fields).thrust = 1500.0;
  mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
            (&VStack_1,100.0,400.0,
             MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__KeyValuePair_float__float_
            );
  (this->fields).leaveModeRotationRange.key = VStack_1.Item1;
  (this->fields).leaveModeRotationRange.value = VStack_1.Item2;
  keys = (Keyframe__Array *)func_?(TypeInfo__UnityEngine__Keyframe,3);
  KStack_2.m_OutWeight = 0.0;
  KStack_2.m_WeightedMode = 0;
  KStack_2.m_InWeight = 0.0;
  KStack_2.m_Time = 0.0;
  KStack_2.m_Value = 0.0;
  KStack_2.m_InTangent = 0.0;
  KStack_2.m_OutTangent = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
            (&KStack_2,-90.0,1.0,(MethodInfo *)0x0);
  if (keys != (Keyframe__Array *)0x0) {
    if (keys->max_length == 0) goto code_?;
    keys->vector[0].m_Time = KStack_2.m_Time;
    keys->vector[0].m_Value = KStack_2.m_Value;
    keys->vector[0].m_InTangent = KStack_2.m_InTangent;
    keys->vector[0].m_OutTangent = KStack_2.m_OutTangent;
    keys->vector[0].m_WeightedMode = KStack_2.m_WeightedMode;
    keys->vector[0].m_InWeight = KStack_2.m_InWeight;
    keys->vector[0].m_OutWeight = KStack_2.m_OutWeight;
    fVar3 = 0.0;
    fVar4 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
              ((Keyframe *)&stack0xffffffbc,0.0,1.0,(MethodInfo *)0x0);
    if (keys->max_length < 2) goto code_?;
    keys->vector[1].m_Time = fVar3;
    keys->vector[1].m_Value = fVar4;
    keys->vector[1].m_InTangent = 0.0;
    keys->vector[1].m_OutTangent = 0.0;
    keys->vector[1].m_WeightedMode = 0;
    keys->vector[1].m_InWeight = 0.0;
    keys->vector[1].m_OutWeight = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    uVar8._4_4_ = (float)&stack0xffffffa0;
    uVar8._0_4_ = (int32_t)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Keyframe::Keyframe__ctor
              ((Keyframe *)&stack0xffffffa0,0.0,1.0,(MethodInfo *)0x0);
    if (keys->max_length < 3) goto code_?;
    keys->vector[2].m_Time = fVar3;
    keys->vector[2].m_Value = fVar4;
    keys->vector[2].m_InTangent = fVar5;
    keys->vector[2].m_OutTangent = fVar6;
    keys->vector[2].m_WeightedMode = (int32_t)uVar8;
    keys->vector[2].m_InWeight = SUB84(uVar8,4);
    keys->vector[2].m_OutWeight = fVar7;
    this_00 = (AnimationCurve *)func_?();
    if (this_00 != (AnimationCurve *)0x0) {
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
      if (this_01 != (ImpactState *)0x0) {
        ImpactState::ImpactState__ctor(this_01,explosionEvents,(MethodInfo *)0x0);
        (this->fields).impactState = this_01;
        func_?();
        MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
        return;
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
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  auStack_7._12_4_ = (SendOrPostCallback *)0x0;
  auStack_7._16_4_ = 0.0;
  auStack_7[0x14] = 0;
  auStack_7._21_3_ = 0;
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
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__GetEnumerator
                         (&LStack_12,
                          (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)method_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                         );
      uStack_13 = 0;
      auStack_7._0_4_ = pLVar11->_list;
      auStack_7._4_4_ = pLVar11->_index;
      auStack_7._8_4_ = pLVar11->_version;
      auStack_7._12_4_ = (pLVar11->_current).m_DelagateCallback;
      auStack_7._16_8_ = *(undefined8 *)&(pLVar11->_current).m_DelagateState;
      uStack_1 = 1;
      pOStack_14 = (Object *)auStack_7;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AnimatedTextureOffset+TextureOffsetAnimationData]::
                List_1_T_Enumerator_AnimatedTextureOffset_TextureOffsetAnimationData__MoveNext
                          ((List_1_T_Enumerator_AnimatedTextureOffset_TextureOffsetAnimationData_ *)
                           auStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar15 == 0) break;
        uStack_16._0_4_ = __return_storage_ptr__->x;
        uStack_16._4_4_ = __return_storage_ptr__->y;
        fStack_17 = __return_storage_ptr__->z;
        LStack_12._current.m_WaitHandle = (ManualResetEvent *)((float)auStack_7._20_4_ + fStack_17)
        ;
        __return_storage_ptr__->x = (float)auStack_7._12_4_ + (float)(undefined4)uStack_16;
        __return_storage_ptr__->y = (float)auStack_7._16_4_ + (float)uStack_16._4_4_;
        __return_storage_ptr__->z = (float)LStack_12._current.m_WaitHandle;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)auStack_7,
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


/* Single get_WaterProximity() */

float Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_WaterProximity
                (JetPackMotor *this,MethodInfo *method)

{
  return (this->fields).waterProximity;
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
      pIVar5 = pAVar4->rgctx_data;
      this_00 = (Action_1_MVControllerColliderHit_ *)
                func_?(TypeInfo__System__Action<MVControllerColliderHit>);
      if ((this_00 != (Action_1_MVControllerColliderHit_ *)0x0) &&
         (object != (Action_1_MVControllerColliderHit___Class *)0x0)) {
        uVar6 = 0;
        uVar7 = *(ushort *)((int)&(object->_0).image[4].name + 2);
        if (uVar7 != 0) {
          do {
            if (*(IMoveHitHandler__Class **)((object->_0).image[2].name + (uint)uVar6 * 8) ==
                TypeInfo__IMoveHitHandler) {
              pIVar8 = (object->_0).image;
              puVar9 = &pIVar8[4].typeCount + *(int *)(pIVar8[2].name + (uint)uVar6 * 8 + 4) * 2;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        puVar9 = (uint32_t *)func_?(object,TypeInfo__IMoveHitHandler,0);
code_?:
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (this_00,(Object *)object,(void *)puVar9[1],(MethodInfo *)0x0);
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pIVar5,(Delegate *)this_00,(MethodInfo *)0x0);
        object = TypeInfo__System__Action<MVControllerColliderHit>;
        if (pDVar2 == (Delegate *)0x0) {
          pAVar4->rgctx_data = (Il2CppRGCTXData *)0x0;
          iVar1 = 0;
        }
        else {
          pIVar5 = (Il2CppRGCTXData *)
                    func_?(pDVar2,TypeInfo__System__Action<MVControllerColliderHit>);
          if (pIVar5 == (Il2CppRGCTXData *)0x0) goto code_?;
          pAVar4->rgctx_data = pIVar5;
          _value = TypeInfo__System__Action<MVControllerColliderHit>;
          iVar1 = func_?(pDVar2,TypeInfo__System__Action<MVControllerColliderHit>);
          object = pAVar4;
          if (iVar1 == 0) goto code_?;
        }
        func_?(&pAVar4->rgctx_data,iVar1);
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


/* Void set_Thrust(Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_Thrust
               (JetPackMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._Thrust_k__BackingField = value;
  return;
}

