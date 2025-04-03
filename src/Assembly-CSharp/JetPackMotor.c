
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
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar4 = &(this_00->fields).current;
    ppSVar5 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
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
        *ppSVar4 = pSVar7;
        ppSVar5 = ppSVar4;
        func_?();
      }
      if (*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    ppSVar8 = &(this_00->fields).next;
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
        *ppSVar8 = pSVar7;
        func_?();
        ppSVar5 = ppSVar8;
      }
    }
    if (*ppSVar4 != (SmoothPhysicsMovement_Package *)0x0) {
      pSVar7 = (this_00->fields).next;
      ppSVar8 = &(this_00->fields).next;
      if (pSVar7 != (SmoothPhysicsMovement_Package *)0x0) {
        do {
          if ((float)ppSVar5 < (pSVar7->fields).time) {
code_?:
            if (*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
            fVar2 = ((*ppSVar4)->fields).time;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            this_03 = (Component *)(((float)ppSVar5 - fVar2) / fVar3);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (this_03,(MethodInfo *)0x0);
            pSVar7 = *ppSVar4;
            if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
            uVar10 = (pSVar7->fields).position.x;
            uVar11 = (pSVar7->fields).position.y;
            pSVar12 = *ppSVar8;
            fVar2 = (pSVar7->fields).position.z;
            if (pSVar12 == (SmoothPhysicsMovement_Package *)0x0) break;
            uVar13 = (pSVar12->fields).position.x;
            uVar14 = (pSVar12->fields).position.y;
            pCVar15 = (Component *)0x0;
            if ((0.0 <= (float)this_03) &&
               (pCVar15 = _UNK_?, (float)this_03 <= (float)_UNK_?)) {
              pCVar15 = this_03;
            }
            if (pTVar9 == (Transform *)0x0) break;
            this = (JetPackMotor *)
                   (((pSVar12->fields).position.z - fVar2) * (float)pCVar15 + fVar2);
            fVar16 = ((float)uVar14 - (float)uVar11) * (float)pCVar15 + (float)uVar11;
            fVar17 = ((float)uVar13 - (float)uVar10) * (float)pCVar15 + (float)uVar10;
            VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar17);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar9,VVar18,(MethodInfo *)0x0);
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
               (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
            t = &UNK_?;
            pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation,
                                 ((*ppSVar8)->fields).rotation,(float)pTVar9,(MethodInfo *)0x0);
            if (this_02 == (Transform *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (this_02,*pQVar19,(MethodInfo *)0x0);
            pMVar20 = (this_00->fields).worldObjectOwner;
            if (pMVar20 != (MVWorldObjectClient *)0x0) {
              if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
                 (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
              (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)();
              pMVar20 = (this_00->fields).worldObjectOwner;
              if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
                 ((*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0 ||
                  (pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                       ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation
                                        ,((*ppSVar8)->fields).rotation,(float)t,(MethodInfo *)0x0),
                  pMVar20 == (MVWorldObjectClient *)0x0)))) break;
              MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                        (pMVar20,*pQVar19,(MethodInfo *)0x0);
            }
            this_01 = (this_00->fields).cullingSubscriberBase;
            if (this_01 == (CullingSubscriberBase *)0x0) {
              return;
            }
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
              uVar22 = pVVar21->x;
              uVar23 = pVVar21->y;
              this = (JetPackMotor *)pVVar21->z;
              fVar16 = (float)uVar23;
              fVar24 = (float)uVar22;
              VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar24);
              CullingSubscriberBase::CullingSubscriberBase_set_Position
                        (this_01,VVar18,(MethodInfo *)0x0);
              return;
            }
            break;
          }
          pQVar6 = (this_00->fields).packages;
          if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
          if ((pQVar6->fields)._size < 1) goto code_?;
          *ppSVar4 = *ppSVar8;
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
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields).interactable;
  if (pMVar1 != (MVInteractableBase *)0x0) {
    pMVar2 = (pMVar1->klass->vtable).__unknown_8.method;
    (*(code *)pMVar2)(pMVar1,3,0x41400000,(pMVar1->klass->vtable).__unknown_9.methodPtr);
    uVar3 = (this->fields)._InputMoveDirection_k__BackingField.y;
    fVar4 = (this->fields)._InputMoveDirection_k__BackingField.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    dVar6 = (double)(fVar4 * fVar4 + (float)uVar3 * (float)uVar3 + fStack_7 * fStack_7);
    if (dVar6 < 0.0) {
      func_?();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    fVar5 = fVar5 * _UNK_?;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    fStack_7 = (this->fields)._InputMoveDirection_k__BackingField.z;
    (this->fields).speed =
         ((float)dVar6 * (float)pMVar2 - (this->fields).speed) * fVar5 + (this->fields).speed;
    uVar8 = (this->fields)._InputMoveDirection_k__BackingField.x;
    uVar9 = (this->fields)._InputMoveDirection_k__BackingField.y;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar6 = (double)((float)uVar9 * (float)uVar9 + (float)uVar8 * (float)uVar8 +
                     fStack_7 * fStack_7);
    if (dVar6 < 0.0) {
      func_?();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if ((float)dVar6 == _UNK_?) {
      (this->fields).speed = 0.0;
    }
    this_00 = (this->fields)._.groundState;
    if (this_00 != (MVGroundState *)0x0) {
      bVar10 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        iVar11 = func_?(&fStack_7,&(this->fields).velocityPrevFrame,0);
        dVar6 = (double)*(float *)(iVar11 + 4);
        func_?();
        this_01 = (this->fields).slopeSpeedMultiplier;
        if (this_01 == (AnimationCurve *)0x0) goto code_?;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,(float)dVar6 * _UNK_?,(MethodInfo *)0x0);
        (this->fields).speed = fVar4 * fStack_7;
      }
      uVar12 = (this->fields)._InputMoveDirection_k__BackingField.x;
      uVar13 = (this->fields)._InputMoveDirection_k__BackingField.y;
      fVar5 = (this->fields)._InputMoveDirection_k__BackingField.z;
      fVar4 = (this->fields).speed;
      __return_storage_ptr__->x = (float)uVar12 * fVar4;
      __return_storage_ptr__->y = (float)uVar13 * fVar4;
      __return_storage_ptr__->z = fVar5 * fVar4;
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
  fVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
          Easing_InQuad(0.43,(MethodInfo *)0x0);
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
    fVar16 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
             Easing_InQuad(0.43,(MethodInfo *)0x0);
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
              fVar1 = fVar1 * fVar15 + 3.5000584e-29;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_01 = (BounceState *)func_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor
            (this_01,(MVInteractable *)jetPackMotorConfig.interactableLocal,(MethodInfo *)0x0);
  ppBVar1 = &(this->fields).bounceState;
  *ppBVar1 = this_01;
  func_?(ppBVar1,this_01);
  ppSVar2 = &(this->fields).smoothController;
  (this->fields).thrust = jetPackMotorConfig.thrustStrength;
  (this->fields).thrustOutOfEnergyMax = jetPackMotorConfig.outOfEnergyThrustMax;
  (this->fields)._.density = jetPackMotorConfig.density;
  *ppSVar2 = jetPackMotorConfig.avatarController;
  func_?(ppSVar2,jetPackMotorConfig.avatarController);
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
code_?:
    func_?();
  }
  else {
    pHVar3 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                       (this_00,(MethodInfo *)0x0);
    if ((*ppSVar2 == (SmoothCharacterController *)0x0) ||
       (pMVar4 = ((*ppSVar2)->fields).controller, pMVar4 == (MvCharacterController *)0x0))
    goto code_?;
    ppHVar5 = &(pMVar4->fields).IgnoreWoIds;
    *ppHVar5 = pHVar3;
    func_?(ppHVar5,pHVar3);
    if (*ppSVar2 == (SmoothCharacterController *)0x0) goto code_?;
    pMVar4 = ((*ppSVar2)->fields).controller;
    this_02 = (Func_1_Object_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                             );
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (this_02,(Object *)pMVar4,MethodInfo__MvCharacterController__GetOverlappingObjects__,
               (MethodInfo *)0x0);
    this_03 = (MVRigidBody_StuckEvaluator *)func_?(TypeInfo__MVRigidBody__StuckEvaluator);
    MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
              (this_03,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_02,
               (MethodInfo *)0x0);
    ppMVar6 = &(this->fields).stuckEvaluator;
    *ppMVar6 = this_03;
    func_?(ppMVar6,this_03);
    this_04 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__MVMovableMotorState);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_04,(MethodInfo *)0x0);
    ppMVar7 = &(this->fields).movableMotorState;
    *ppMVar7 = (MVMovableMotorState *)this_04;
    func_?(ppMVar7,this_04);
    (this->fields).interactable = (MVInteractableBase *)jetPackMotorConfig.interactableLocal;
    func_?();
    if ((jetPackMotorConfig.avatarController == (SmoothCharacterController *)0x0) ||
       (pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller,
       pMVar4 == (MvCharacterController *)0x0)) goto code_?;
    ppAVar8 = &(pMVar4->fields).OnControllerColliderHit;
    pAVar9 = (Action_1_MVControllerColliderHit_ *)
             func_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if (jetPackMotorConfig.interactableLocal == (AvatarInteractable *)0x0) goto code_?;
    pDVar10 = (Delegate *)(jetPackMotorConfig.interactableLocal)->klass[1]._0.image;
    a = jetPackMotorConfig.interactableLocal;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar9,(Object *)jetPackMotorConfig.interactableLocal,pDVar10,(MethodInfo *)0x0);
    puVar11 = (undefined4 *)&UNK_?;
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,pDVar10,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      *ppAVar8 = (Action_1_MVControllerColliderHit_ *)0x0;
code_?:
      func_?();
      pMVar4 = ((jetPackMotorConfig.avatarController)->fields).controller;
      if (pMVar4 == (MvCharacterController *)0x0) goto code_?;
      pAVar9 = (pMVar4->fields).OnControllerColliderHit;
      object = (Object *)*puVar11;
      this_05 = (Action_1_MVControllerColliderHit_ *)
                func_?(TypeInfo__System__Action<MVControllerColliderHit>);
      mscorlib.dll::System::Action`1[MVControllerColliderHit]::
      Action_1_MVControllerColliderHit___ctor
                (this_05,object,MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_,
                 (MethodInfo *)0x0);
      iVar12 = 0;
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar9,(Delegate *)this_05,(MethodInfo *)0x0);
      if (pDVar10 == (Delegate *)0x0) {
        piVar13 = (int *)(iVar12 + 100);
        *piVar13 = 0;
code_?:
        func_?();
        if (piVar13[4] == 0) goto code_?;
        pDVar10 = *(Delegate **)(piVar13[4] + 100);
        object_00 = (this->fields).impactState;
        pAVar9 = (Action_1_MVControllerColliderHit_ *)
                 func_?(TypeInfo__System__Action<MVControllerColliderHit>);
        mscorlib.dll::System::Action`1[MVControllerColliderHit]::
        Action_1_MVControllerColliderHit___ctor
                  (pAVar9,(Object *)object_00,
                   MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0
                  );
        iVar12 = 0;
        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar10,(Delegate *)pAVar9,(MethodInfo *)0x0);
        if (pDVar10 == (Delegate *)0x0) {
          *(undefined4 *)(iVar12 + 100) = 0;
        }
        else {
          iVar14 = func_?();
          if (iVar14 == 0) goto code_?;
          *(int *)(iVar12 + 100) = iVar14;
          iVar12 = func_?();
          if (iVar12 == 0) goto code_?;
        }
        func_?();
        (this->fields).vehicleInteractable = (MVInteractableBase *)&UNK_?;
        func_?();
        this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_06 == (GameObject *)0x0) goto code_?;
        pVVar15 = (VehicleEnergyContainer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (this_06,
                             WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                            );
        ppVVar16 = &(this->fields).vehicleEnergyContainer;
        *ppVVar16 = pVVar15;
        func_?(ppVVar16,pVVar15);
        if (*ppVVar16 == (VehicleEnergyContainer *)0x0) goto code_?;
        config.storage = jetPackMotorConfig.vehicleEnergyContainerConfig.storage;
        config._0_4_ = jetPackMotorConfig.interactableLocal;
        config.consumption = jetPackMotorConfig.vehicleEnergyContainerConfig.consumption;
        WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Init
                  (*ppVVar16,config,(MethodInfo *)0x0);
        pDVar10 = _UNK_?;
        this_07 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                  func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  (this_07,(Object *)this,MethodInfo__JetPackMotor___Init_b__65_0_System__Object_,
                   (MethodInfo *)0x0);
        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar10,(Delegate *)this_07,(MethodInfo *)0x0);
        if (pDVar10 == (Delegate *)0x0) {
          _UNK_? = (Delegate *)0x0;
          func_?();
          return;
        }
        pDVar17 = (Delegate *)0x0;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar10->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pDVar17 = pDVar10;
        }
        if (pDVar17 != (Delegate *)0x0) {
          pDVar18 = (Delegate *)0x0;
          if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar10->klass ==
              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pDVar18 = pDVar10;
          }
          _UNK_? = pDVar17;
          if (pDVar18 != (Delegate *)0x0) {
            func_?();
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      iVar14 = func_?();
      if (iVar14 != 0) {
        piVar13 = (int *)(iVar12 + 100);
        *piVar13 = iVar14;
        iVar12 = func_?();
        if (iVar12 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pAVar9 = (Action_1_MVControllerColliderHit_ *)func_?();
    if (pAVar9 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
    *ppAVar8 = pAVar9;
    iVar12 = func_?();
    if (iVar12 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_IsStuck(JetPackMotor *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckEvaluator;
  if (this_00 != (MVRigidBody_StuckEvaluator *)0x0) {
    this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
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
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar3 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar4 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) goto code_?;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (pDVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar5 == 0) goto code_?;
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)0x0;
    (this_00->fields).updateTime = fVar3;
    this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_00,(MethodInfo *)0x0);
    if (this_01 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
code_?:
        *unaff_FS_OFFSET = this_07;
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
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (pDVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                              ),
         this_03 !=
         (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        pDVar6 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)&stack0xffffffa4,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                           );
        DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar6->_dictionary;
        DStack_7._index = pDVar6->_index;
        DStack_7._version = pDVar6->_version;
        DStack_7._currentKey = (uint32_t)pDVar6->_currentValue;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                            );
          if (bVar8 == 0) break;
          in_stack_9 = (MethodInfo *)DStack_7._currentKey;
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32,PendingPrototypeData]::
                  Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                            ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                             DStack_7._currentKey,
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
                  ((Object *)&DStack_7,
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
          pOStack_1 = (Object__Class *)pLVar12->_list;
          key = pLVar12->_current;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&pOStack_1,
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
                    ((Object *)&pOStack_1,
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
            this_06 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                      &stack0xffffffb4;
            pOVar14 = (Object__Class *)
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
            ;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              (this_06,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar8 == 0) break;
            key_00 = &UNK_?;
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
              iVar5 = 0;
              overlapResult.localCubePos = (IntVector__Array *)pOVar14;
              overlapResult.woId = (int32_t)this_06;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar15,overlapResult,(MethodInfo *)0x0);
              if (pMVar2 == (MethodInfo *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,iVar5,(Object *)pMVar15,
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
                                       (int32_t)key_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar16 == (Object *)0x0)) goto code_?;
              pOVar16[1].monitor = (MonitorData *)this_06;
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
          pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this_00->fields).stuckObjects;
          if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (pDVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_04 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            pDVar6 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 *)&stack0xffffffa4,this_04,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar6->_currentValue;
            while( true ) {
              this_05 = pMVar15;
              this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                         *)&stack0xffffff78;
              bVar8 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                (this_07,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (this_05 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              pMVar15 = this_05;
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              if (_UNK_? <= fVar3 - (this_05->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar8 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (this_05,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffff78,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_17);
                  *unaff_FS_OFFSET = this_07;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffff78,
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar6) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->zeroVector).y;
  fVar9 = (pVVar7->zeroVector).z;
  __return_storage_ptr__->x = (pVVar7->zeroVector).x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar9;
  method_00 = (MethodInfo *)(this->fields)._.impulseVectors;
  if (method_00 != (MethodInfo *)0x0) {
    if (method_00->name != (char *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                         (&LStack_11,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)method_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                         );
      uStack_12 = 0;
      LStack_13._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar10->_list;
      LStack_13._index = pLVar10->_index;
      LStack_13._version = pLVar10->_version;
      LStack_13._current.Quadrant = (int32_t)(pLVar10->_current).alias;
      LStack_13._current.FirstAxisSign = (int32_t)(pLVar10->_current).path;
      LStack_13._current.SecondAxisSign = (int32_t)(pLVar10->_current).asset;
      uStack_1 = 1;
      pLStack_14 = &LStack_13;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_13,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar15 == 0) break;
        uStack_16._0_4_ = __return_storage_ptr__->x;
        uStack_16._4_4_ = __return_storage_ptr__->y;
        fStack_17 = __return_storage_ptr__->z;
        LStack_11._current.asset =
             (VisualTreeAsset *)((float)LStack_13._current.SecondAxisSign + fStack_17);
        __return_storage_ptr__->x =
             (float)LStack_13._current.Quadrant + (float)(undefined4)uStack_16;
        __return_storage_ptr__->y = (float)LStack_13._current.FirstAxisSign + (float)uStack_16._4_4_
        ;
        __return_storage_ptr__->z = (float)LStack_11._current.asset;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_13,
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
  ppMVar1 = &(this->fields).interactable;
  iVar2 = func_?(*ppMVar1,TypeInfo__IMoveHitHandler);
  pIVar3 = TypeInfo__IMoveHitHandler;
  if (iVar2 == 0) goto code_?;
  pDVar4 = (Delegate *)*ppMVar1;
  if (pDVar4 != (Delegate *)0x0) {
    object = (Object *)func_?(pDVar4,TypeInfo__IMoveHitHandler);
    if (object != (Object *)0x0) goto code_?;
    func_?(pDVar4,pIVar3);
    pAVar5 = (Action_1_MVControllerColliderHit___Class *)0x0;
    goto code_?;
  }
  object = (Object *)0x0;
code_?:
  pSVar6 = (this->fields).smoothController;
  if ((pSVar6 == (SmoothCharacterController *)0x0) ||
     (pMVar7 = (pSVar6->fields).controller, pMVar7 == (MvCharacterController *)0x0))
  goto code_?;
  ppAVar8 = &(pMVar7->fields).OnControllerColliderHit;
  pAVar9 = *ppAVar8;
  this_00 = (Action_1_MVControllerColliderHit_ *)
            func_?(TypeInfo__System__Action<MVControllerColliderHit>);
  if (object == (Object *)0x0) goto code_?;
  uVar10 = 0;
  uVar11._0_1_ = (object->klass->_1).rank;
  uVar11._1_1_ = (object->klass->_1).minimumAlignment;
  if (uVar11 != 0) {
    do {
      if (object->klass->interfaceOffsets[uVar10].interfaceType ==
          (Il2CppClass *)TypeInfo__IMoveHitHandler) {
        ppMVar12 = &(&(object->klass->vtable).Equals)[object->klass->interfaceOffsets[uVar10].offset]
                   .method;
        goto code_?;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  ppMVar12 = (MethodInfo **)func_?(object,TypeInfo__IMoveHitHandler,0);
code_?:
  mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
            (this_00,object,ppMVar12[1],(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar9,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<MVControllerColliderHit>;
  if (pDVar4 == (Delegate *)0x0) {
    *ppAVar8 = (Action_1_MVControllerColliderHit_ *)0x0;
    iVar2 = 0;
code_?:
    func_?(ppAVar8,iVar2);
code_?:
    ppMVar1 = &(this->fields).interactable;
    pMVar13 = (this->fields).vehicleInteractable;
    *ppMVar1 = pMVar13;
    func_?(ppMVar1,pMVar13);
    return;
  }
  pAVar9 = (Action_1_MVControllerColliderHit_ *)
            func_?(pDVar4,TypeInfo__System__Action<MVControllerColliderHit>);
  if (pAVar9 != (Action_1_MVControllerColliderHit_ *)0x0) {
    *ppAVar8 = pAVar9;
    pAVar5 = TypeInfo__System__Action<MVControllerColliderHit>;
    iVar2 = func_?(pDVar4,TypeInfo__System__Action<MVControllerColliderHit>);
    if (iVar2 != 0) goto code_?;
  }
code_?:
  func_?(pDVar4,pAVar5);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

